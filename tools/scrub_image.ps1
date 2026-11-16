# scrub_image.ps1 - take the vendor's fingerprints off the payload before it maps.
#
#   pwsh -File tools\scrub_image.ps1 -In work\payload.stripped.dll -Out work\payload.scrubbed.dll
#
# A signature walk does not only look at code. It looks at the boring metadata
# the compiler leaves in: the Rich header, the linker timestamp, the debug path
# that spells out where the vendor built it, section names, the DOS stub. None of
# that is needed at runtime, and all of it is a free fingerprint. This zeroes it.
#
# It does NOT touch code, relocations, imports or the exception table - the image
# still maps and still runs. The input file is never modified.
param(
    [Parameter(Mandatory = $true)][string]$In,
    [Parameter(Mandatory = $true)][string]$Out
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent (Split-Path -Parent $MyInvocation.MyCommand.Path)
$inPath = if ([System.IO.Path]::IsPathRooted($In)) { $In } else { Join-Path $root $In }
$outPath = if ([System.IO.Path]::IsPathRooted($Out)) { $Out } else { Join-Path $root $Out }

if (-not (Test-Path -LiteralPath $inPath)) { throw "input not found: $inPath" }
if ($inPath -eq $outPath) { throw 'refusing to overwrite the input - pass a different -Out' }

$b = [System.IO.File]::ReadAllBytes($inPath)
if ($b.Length -lt 0x200) { throw 'not a PE: too small' }

$lfanew = [BitConverter]::ToUInt32($b, 0x3C)
if ($lfanew -lt 0x40 -or $lfanew + 0x100 -gt $b.Length) { throw 'not a PE: bad e_lfanew' }
if ([BitConverter]::ToUInt32($b, [int]$lfanew) -ne 0x00004550) { throw 'not a PE: no PE signature' }

$numSec = [BitConverter]::ToUInt16($b, [int]$lfanew + 6)
$optSize = [BitConverter]::ToUInt16($b, [int]$lfanew + 20)
$opt = [int]$lfanew + 24
$secOff = $opt + $optSize
$sizeOfHeaders = [BitConverter]::ToUInt32($b, $opt + 60)
if ($sizeOfHeaders -lt 0x200 -or $sizeOfHeaders -gt $b.Length) { throw 'not a PE: bad SizeOfHeaders' }

$changed = [ordered]@{}

# --- DOS stub + Rich header ------------------------------------------------
# Everything between the DOS header and the PE signature: the "This program
# cannot be run in DOS mode" blob and the Rich header (DanS marker, compiler
# toolchain counters, "Rich" signature). Pure linker fingerprint, zero runtime
# value, so the whole band goes to zero in one pass.
$richAt = -1
for ($i = 0x40; $i -lt $lfanew - 4; $i++) {
    if ($b[$i] -eq 0x52 -and $b[$i+1] -eq 0x69 -and $b[$i+2] -eq 0x63 -and $b[$i+3] -eq 0x68) { $richAt = $i; break }
}
$hadRich = $richAt -ge 0
for ($i = 0x40; $i -lt $lfanew; $i++) { $b[$i] = 0 }
$changed['dos stub'] = ($lfanew - 0x40)
$changed['rich header'] = if ($hadRich) { 'inside stub band' } else { 'not present' }

# --- COFF timestamp + checksum ---------------------------------------------
# Zeroed so the file does not match the vendor's build records, and so two
# builds of the same source are not trivially linkable.
$b[$lfanew + 8] = 0; $b[$lfanew + 9] = 0; $b[$lfanew + 10] = 0; $b[$lfanew + 11] = 0
$changed['timestamp'] = 4
for ($i = 0; $i -lt 4; $i++) { $b[$opt + 64 + $i] = 0 }
$changed['checksum'] = 4

# --- section names ----------------------------------------------------------
# ".text" ".rdata" ".data" ".pdata" - a linker fingerprint, not runtime data.
$names = 0
for ($i = 0; $i -lt $numSec; $i++) {
    $o = $secOff + $i * 40
    for ($k = 0; $k -lt 8; $k++) { if ($b[$o + $k] -ne 0) { $b[$o + $k] = 0; $names++ } }
}
$changed['section names'] = $names

# --- debug directory: the PDB path -----------------------------------------
# "RSDS" + GUID + age + a full path like the vendor's build machine. The path
# is the loud part. RVA -> file offset through the section table.
function RvaToOff([uint32]$rva) {
    for ($i = 0; $i -lt $numSec; $i++) {
        $o = $secOff + $i * 40
        $vs = [BitConverter]::ToUInt32($b, $o + 8)
        $va = [BitConverter]::ToUInt32($b, $o + 12)
        $rs = [BitConverter]::ToUInt32($b, $o + 16)
        $rp = [BitConverter]::ToUInt32($b, $o + 20)
        $span = if ($vs -gt $rs) { $vs } else { $rs }
        if ($rva -ge $va -and $rva -lt $va + $span) {
            $d = $rva - $va
            if ($d -ge $rs) { return -1 }
            return [int]($rp + $d)
        }
    }
    return -1
}

$dbgRva  = [BitConverter]::ToUInt32($b, $opt + 112 + 6 * 8)
$dbgSize = [BitConverter]::ToUInt32($b, $opt + 112 + 6 * 8 + 4)
$pdbZeroed = 0
$pdbNote = 'no debug directory'
if ($dbgRva -ne 0 -and $dbgSize -ge 28) {
    $rec = RvaToOff $dbgRva
    if ($rec -ge 0 -and $rec + 28 -le $b.Length) {
        $dbgType  = [BitConverter]::ToUInt32($b, $rec + 12)
        $dataSize = [BitConverter]::ToUInt32($b, $rec + 16)
        $dataPtr  = [BitConverter]::ToUInt32($b, $rec + 24)
        $pdbNote = "debug type $dbgType"
        if ($dataPtr -gt 0 -and $dataPtr + 24 -le $b.Length -and $dataSize -gt 24) {
            $sig = [System.Text.Encoding]::ASCII.GetString($b, $dataPtr, 4)
            if ($sig -eq 'RSDS') {
                $end = [Math]::Min($dataPtr + $dataSize, $b.Length)
                for ($i = $dataPtr + 24; $i -lt $end; $i++) { if ($b[$i] -ne 0) { $b[$i] = 0; $pdbZeroed++ } }
                $pdbNote = 'RSDS path zeroed'
            } else { $pdbNote = "debug type $dbgType, no RSDS record" }
        }
    }
}
$changed['pdb path'] = if ($pdbZeroed -gt 0) { "$pdbZeroed bytes" } else { $pdbNote }

# --- verify before writing --------------------------------------------------
if ([BitConverter]::ToUInt32($b, [int]$lfanew) -ne 0x00004550) { throw 'scrub broke the PE signature - aborting' }
$after = [System.Text.Encoding]::ASCII.GetString($b, 0, [Math]::Min($b.Length, 0x4000))
foreach ($marker in @('Rich', '.pdb', 'cannot be run in DOS')) {
    if ($after.Contains($marker)) { throw "scrub left '$marker' behind - aborting" }
}

$dir = Split-Path -Parent $outPath
if (-not (Test-Path -LiteralPath $dir)) { New-Item -ItemType Directory -Path $dir -Force | Out-Null }
[System.IO.File]::WriteAllBytes($outPath, $b)

Write-Host '[scrub] vendor metadata removed' -ForegroundColor Cyan
foreach ($k in $changed.Keys) { Write-Host ("  {0,-14} {1} bytes" -f $k, $changed[$k]) -ForegroundColor Gray }
Write-Host ("[scrub] {0} -> {1} ({2:N0} bytes, sha256 {3})" -f
    (Split-Path -Leaf $inPath), (Split-Path -Leaf $outPath), $b.Length,
    (Get-FileHash -LiteralPath $outPath -Algorithm SHA256).Hash.Substring(0, 16)) -ForegroundColor Green
