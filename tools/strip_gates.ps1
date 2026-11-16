# strip_gates.ps1 - remove the loader-bridge licence requirement from the payload.
#
# The runtime gates every feature on one byte, DAT_21468219048. That byte is set
# only by AUTH (0x0E4230), which requires two loader-mediated calls to succeed:
#
#   0x0A9120  bridge_init  - is the loader's in-process bridge object live?
#   0x166F60  pid_bind     - is the bridge bound to this process id?
#
# The offsets manifest is NOT part of that chain. 0x1C9570 reads
# %LOCALAPPDATA%\HVHGOD\CS2 Runtime\Internal\Bridge\Offsets\offsets.bridge from
# disk and validates it with an HMAC-derived feature key, so a genuine manifest
# file satisfies it with no loader present.
#
# Patching:
#   0x0A9120 -> mov al,1 ; ret          (bridge_init returns true)
#   0x166F60 -> mov al,1 ; ret          (pid_bind returns true)
#   0x0E5780 -> ret                     (watchdog never clears the byte)
#
# AUTH then runs for real, parses the local manifest, and sets the byte. Every
# other stage - manifest structure, address ranges, feature table - still runs
# unchanged, so a corrupt or stale manifest is still rejected.
param(
    [Parameter(Mandatory = $true)][string]$In,
    [Parameter(Mandatory = $true)][string]$Out
)

$ErrorActionPreference = 'Stop'

$patches = @(
    @{ Rva = 0x001950; Name = 'delivery';    Stub = [byte[]](0xB0, 0x01, 0xC3) }
    @{ Rva = 0x0A9120; Name = 'bridge_init'; Stub = [byte[]](0xB0, 0x01, 0xC3) }
    @{ Rva = 0x166F60; Name = 'pid_bind';    Stub = [byte[]](0xB0, 0x01, 0xC3) }
    @{ Rva = 0x0E5780; Name = 'watchdog';    Stub = [byte[]](0xC3) }
    @{ Rva = 0x41F290; Name = 'unload';      Stub = [byte[]](0xC3) }
)

# AUTH returns char and is the only writer of the feature-enable byte
# DAT_21468219048 (RVA 0xBB9048). It also runs before the render/input
# readiness wait, so seed the two flags that wait blocks on:
#   DAT_214682d0e21 (RVA 0xC70E21) - input event seen
#   DAT_214682d0e20 (RVA 0xC70E20) - render frame seen
# A manually mapped image never fires the render detour while the game sits
# in a menu, so the wait would time out after 8000 ms and tear the runtime
# down. Seeding both satisfies the check without touching the detours.
$authRva = 0x0E4230
$seed    = @(0xBB9048, 0xC70E21, 0xC70E20)
$body    = New-Object System.Collections.Generic.List[byte]
foreach ($t in $seed) {
    $rip  = $authRva + $body.Count + 7
    $disp = [int32]($t - $rip)
    $body.AddRange([byte[]](0xC6, 0x05))
    $body.AddRange([BitConverter]::GetBytes($disp))
    $body.Add(0x01)
}
$body.AddRange([byte[]](0xB0, 0x01, 0xC3))
$authStub = $body.ToArray()
$patches += @{ Rva = $authRva; Name = 'auth'; Stub = $authStub }

$data = [IO.File]::ReadAllBytes($In)

# --- minimal PE parse: section table -> rva-to-file-offset -------------------
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

function Get-FileOffset([int]$rva) {
    foreach ($s in $sections) {
        $span = [Math]::Max($s.VSize, $s.RawSize)
        if ($rva -ge $s.VA -and $rva -lt ($s.VA + $span)) {
            return ($rva - $s.VA + $s.RawPtr)
        }
    }
    throw "RVA 0x$('{0:X}' -f $rva) is not inside any section"
}

Write-Host ("image   : {0} ({1} bytes)" -f (Split-Path -Leaf $In), $data.Length)
Write-Host ("sections: {0}" -f (($sections | ForEach-Object { $_.Name }) -join ', '))
Write-Host ""

foreach ($p in $patches) {
    $off = Get-FileOffset $p.Rva
    $before = $data[$off..($off + $p.Stub.Length - 1)]
    for ($k = 0; $k -lt $p.Stub.Length; $k++) { $data[$off + $k] = $p.Stub[$k] }
    $shown = ($before | ForEach-Object { '{0:X2}' -f $_ }) -join ' '
    $after = ($p.Stub | ForEach-Object { '{0:X2}' -f $_ }) -join ' '
    Write-Host ("{0,-12} RVA 0x{1:X6}  off 0x{2:X6}  {3} -> {4}" -f $p.Name, $p.Rva, $off, $shown, $after)
}

[IO.File]::WriteAllBytes($Out, $data)
Write-Host ""
Write-Host ("wrote   : {0} ({1} bytes)" -f $Out, $data.Length)
Write-Host ""
Write-Host "next: place the genuine manifest, then map this image and call its entry."
Write-Host "  data\offsets.genuine.bridge -> %LOCALAPPDATA%\HVHGOD\CS2 Runtime\Internal\Bridge\Offsets\offsets.bridge"
