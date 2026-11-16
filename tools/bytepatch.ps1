# bytepatch.ps1 - apply arbitrary byte edits to the payload, with verification.
#
# The six licence patches are not special: they are byte edits at fixed RVAs.
# This tool takes any list of edits, checks the bytes it is about to replace,
# applies them, and reports a diff. Use it to tweak constants, redirect a call to
# a code cave, or experiment - without editing strip_gates.ps1.
#
#   pwsh -File bytepatch.ps1 -In payload.clean.dll -Out test.dll -Patches p.json
#
# Patch file (JSON array):
#   [
#     { "rva": "0x0E5780", "expect": "48 89 5C 24 08", "write": "C3", "note": "watchdog" },
#     { "rva": "0x1A2345", "write": "90909090", "note": "nop a guard" }
#   ]
#
# "expect" is optional but recommended: it makes the patch fail loudly when the
# binary does not match the build you analysed, instead of corrupting it silently.
param(
    [Parameter(Mandatory = $true)][string]$In,
    [Parameter(Mandatory = $true)][string]$Out,
    [Parameter(Mandatory = $true)][string]$Patches
)
$ErrorActionPreference = 'Stop'

function HexToBytes([string]$s) {
    $clean = ($s -replace '[^0-9A-Fa-f]', '')
    if ($clean.Length % 2 -ne 0) { throw "odd hex length: $s" }
    $b = New-Object byte[] ($clean.Length / 2)
    for ($i = 0; $i -lt $b.Length; $i++) { $b[$i] = [Convert]::ToByte($clean.Substring($i * 2, 2), 16) }
    return ,$b
}

$data = [IO.File]::ReadAllBytes($In)

# --- PE section table for rva -> file offset --------------------------------
$e_lfanew = [BitConverter]::ToInt32($data, 0x3C)
$numSec   = [BitConverter]::ToUInt16($data, $e_lfanew + 6)
$optSize  = [BitConverter]::ToUInt16($data, $e_lfanew + 20)
$secStart = $e_lfanew + 24 + $optSize
$sections = for ($i = 0; $i -lt $numSec; $i++) {
    $b = $secStart + ($i * 40)
    [pscustomobject]@{
        Name    = [Text.Encoding]::ASCII.GetString($data, $b, 8).TrimEnd([char]0)
        VSize   = [BitConverter]::ToUInt32($data, $b + 8)
        VA      = [BitConverter]::ToUInt32($data, $b + 12)
        RawSize = [BitConverter]::ToUInt32($data, $b + 16)
        RawPtr  = [BitConverter]::ToUInt32($data, $b + 20)
    }
}
function Get-Offset([uint32]$rva) {
    foreach ($s in $sections) {
        $span = [Math]::Max($s.VSize, $s.RawSize)
        if ($rva -ge $s.VA -and $rva -lt ($s.VA + $span)) { return [int]($rva - $s.VA + $s.RawPtr) }
    }
    throw ("rva 0x{0:X} is outside every section" -f $rva)
}

$list = Get-Content -LiteralPath $Patches -Raw | ConvertFrom-Json
if ($list -isnot [array]) { $list = @($list) }

$applied = 0
foreach ($p in $list) {
    $rva  = [uint32]($p.rva)
    $off  = Get-Offset $rva
    $note = if ($p.note) { $p.note } else { '' }

    if ($p.expect) {
        $want = HexToBytes $p.expect
        $have = $data[$off..($off + $want.Length - 1)]
        for ($k = 0; $k -lt $want.Length; $k++) {
            if ($have[$k] -ne $want[$k]) {
                throw ("{0}: expected {1} at 0x{2:X}, found {3}" -f `
                       $note, ($want | ForEach-Object { '{0:X2}' -f $_ }) -join ' ', $rva,
                       (($have | ForEach-Object { '{0:X2}' -f $_ }) -join ' '))
            }
        }
    }

    $write = HexToBytes $p.write
    if ($off + $write.Length -gt $data.Length) { throw "$note : write runs past end of file" }
    for ($k = 0; $k -lt $write.Length; $k++) { $data[$off + $k] = $write[$k] }
    $applied++
    Write-Host ("  {0,-28} rva 0x{1:X6}  {2,2} bytes  {3}" -f $note, $rva, $write.Length,
                (($write | ForEach-Object { '{0:X2}' -f $_ }) -join ' '))
}

[IO.File]::WriteAllBytes($Out, $data)
Write-Host ("[bytepatch] {0} edits -> {1} ({2:N0} bytes)" -f $applied, $Out, $data.Length)
