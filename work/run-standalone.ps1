# run-standalone.ps1 - start cs2, map the stripped payload, invoke its entry,
# with no HVHGOD loader, no security service and no network.
#
#   pwsh -File work\run-standalone.ps1
#   pwsh -File work\run-standalone.ps1 -BootSeconds 26 -NoSweep
#
# Preconditions this script enforces:
#   * work\payload.stripped.dll exists (tools\strip_gates.ps1)
#   * dump\offsets.genuine.bridge is the real 275,418-byte manifest
#   * no HVHGOD loader or security service is running
param(
    [string]$Payload    = "",
    [string]$Game       = "",
    [string]$Manifest   = "",
    [int]$BootSeconds   = 24,
    [double]$WatchMinutes = 0,
    [switch]$NoSweep,
    # After attach the mapped image's PE header is scrubbed and the process is
    # re-scanned for private executable pages. -NoStealth leaves the header on
    # disk-in-memory (debugging only - it is the loudest artifact of the map).
    [switch]$NoStealth,
    # The six patches ungate the module; the aim path still checks two config
    # values nothing writes without the vendor loader. -NoRageSeed leaves them
    # at 0, which is exactly the old "rage does nothing" session.
    [switch]$NoRageSeed,
    # Off by default: a direct cs2.exe launch is not part of Steam's chain and
    # VAC refuses secure servers for it. Steam launch is the supported path.
    [switch]$DirectLaunch
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent (Split-Path -Parent $MyInvocation.MyCommand.Path)

if (-not $Payload) {
    # build.ps1 produces the scrubbed copy (vendor metadata zeroed). Prefer it;
    # fall back to the plain stripped image if the scrub step was skipped.
    $scrubbed = Join-Path $root 'work\payload.scrubbed.dll'
    $stripped = Join-Path $root 'work\payload.stripped.dll'
    $Payload = if (Test-Path -LiteralPath $scrubbed) { $scrubbed } else { $stripped }
}
if (-not $Manifest) {
    $Manifest = Join-Path $root 'data\offsets.genuine.bridge'
    if (-not (Test-Path -LiteralPath $Manifest)) {
        $Manifest = Join-Path $root 'dump\offsets.genuine.bridge'
    }
}
if (-not $Game) {
    $Game = 'D:\Program Files (x86)\Steam\steamapps\common\Counter-Strike Global Offensive\game\bin\win64\cs2.exe'
}

$bridgeRoot  = Join-Path $env:LOCALAPPDATA 'HVHGOD\CS2 Runtime\Internal'
$manifestDst = Join-Path $bridgeRoot 'Bridge\Offsets\offsets.bridge'
$bridgeLog   = Join-Path $bridgeRoot 'Logs\Bridge\bridge.log'
$runtimeLog  = Join-Path $bridgeRoot 'Logs\Lifecycle\runtime.log'

$pipeLog = Join-Path $root 'work\pipeline.log'
if (Test-Path -LiteralPath (Split-Path -Parent $pipeLog)) {
    Set-Content -LiteralPath $pipeLog -Value '' -Encoding UTF8
}

$progressPath = Join-Path $root 'work\progress.txt'
function Progress($pct, $stage) {
    # The overlay window reads this file; every number is a real pipeline stage.
    try { Set-Content -LiteralPath $progressPath -Value ("{0}|{1}" -f $pct, $stage) -Encoding UTF8 } catch { }
}

function Say($msg, $color = 'Gray') {
    Write-Host $msg -ForegroundColor $color
    # The launcher tails this file: stdout is block-buffered through a pipe,
    # so a redirected run would otherwise show nothing until it exits.
    try { Add-Content -LiteralPath $pipeLog -Value $msg -Encoding UTF8 } catch { }
}
function Step($n, $msg) { Write-Host ("[{0}] {1}" -f $n, $msg) -ForegroundColor Cyan }

Say "=== HVHGOD standalone - no loader, no service, no network ===" 'Cyan'
Say ""

# --- 1. preflight -----------------------------------------------------------
Step 1 'preflight'
Progress 4 'preflight'
foreach ($f in @($Payload, $Manifest, $Game)) {
    if (-not (Test-Path -LiteralPath $f)) { Say "missing: $f" 'Red'; exit 1 }
}
$payloadSize = (Get-Item -LiteralPath $Payload).Length
$manSize     = (Get-Item -LiteralPath $Manifest).Length
Say ("  payload  : {0} ({1} bytes)" -f (Split-Path -Leaf $Payload), $payloadSize)
Say ("  manifest : {0} ({1} bytes)" -f (Split-Path -Leaf $Manifest), $manSize)

$loader = Get-Process hvhgod-internal, hvhgod-dumper -ErrorAction SilentlyContinue
if ($loader) {
    Say ("  loader still running: pid {0} ({1})" -f $loader.Id, $loader.ProcessName) 'Red'
    Say '  stop it first - it holds the mapped image and its bridge outranks ours.' 'Yellow'
    Say '  Stop-Process -Id ' + $loader.Id + ' -Force' 'Yellow'
    exit 1
}
Say '  loader   : not running' 'Green'

$svc = Get-Service HVHGODSecurity -ErrorAction SilentlyContinue
if ($svc -and $svc.Status -eq 'Running') { Say '  service  : HVHGODSecurity running (harmless, not required)' 'Yellow' }
else { Say '  service  : not running' 'Green' }

# The running game keeps the bridge files open. Staging before killing it makes
# Copy-Item fail with a sharing violation, so stop it here, not in step 3.
$stale = Get-Process cs2 -ErrorAction SilentlyContinue
if ($stale) {
    Say ("  closing stale cs2 pid {0}" -f $stale.Id)
    $stale | Stop-Process -Force -ErrorAction SilentlyContinue
    Start-Sleep -Seconds 4
}
Say ''

# --- 2. place the manifest --------------------------------------------------
Step 2 'place the offsets manifest'
Progress 12 'staging offsets'
$dstDir = Split-Path -Parent $manifestDst
if (-not (Test-Path -LiteralPath $dstDir)) { New-Item -ItemType Directory -Path $dstDir -Force | Out-Null }
try {
    Copy-Item -LiteralPath $Manifest -Destination $manifestDst -Force
} catch {
    Say ("  copy failed: {0}" -f $_.Exception.Message) 'Red'
    Say '  the game or another process still holds the bridge file - stop cs2 and retry.' 'Yellow'
    exit 1
}
$h = (Get-FileHash -LiteralPath $manifestDst -Algorithm SHA256).Hash
Say ("  -> {0}" -f $manifestDst)
Say ("  sha256 {0}" -f $h) 'Green'

# Configs are per-machine: the runtime owns
#   Bridge\Configuration\config-library.bridge
# and writes it when the user saves a profile. We never stage one - a shipped
# library would carry somebody else's profiles into everyone's game, and the
# first save would overwrite it anyway. Just make sure the folder exists.
$libDst = Join-Path $bridgeRoot 'Bridge\Configuration\config-library.bridge'
$libDir = Split-Path -Parent $libDst
if (-not (Test-Path -LiteralPath $libDir)) { New-Item -ItemType Directory -Path $libDir -Force | Out-Null }
if (Test-Path -LiteralPath $libDst) {
    Say ("  config-library: using the one on this machine ({0:N0} bytes)" -f (Get-Item -LiteralPath $libDst).Length) 'Green'
} else {
    Say '  config-library: none yet - the runtime creates it on first save' 'Green'
}
Say ''

# --- 3. start cs2 -----------------------------------------------------------
Step 3 'start cs2 under this process'
Progress 20 'launching game'
# cs2.exe started with no Steam session alive just spawns Steam, shows the
# library, and exits - the map then fails with VirtualAllocEx 5. Wait for Steam.
if (-not (Get-Process steam -ErrorAction SilentlyContinue)) {
    $steamExe = 'C:\Program Files (x86)\Steam\steam.exe'
    if (Test-Path -LiteralPath $steamExe) {
        Say '  steam not running - starting it'
        Start-Process -FilePath $steamExe
        for ($i = 0; $i -lt 40; $i++) {
            Start-Sleep -Seconds 1
            if (Get-Process steam -ErrorAction SilentlyContinue) { break }
        }
        Start-Sleep -Seconds 6
    } else {
        Say '  steam not running and steam.exe not found - cs2 may fail to start' 'Yellow'
    }
} else { Say '  steam running' 'Green' }
$stale = Get-Process cs2 -ErrorAction SilentlyContinue
if ($stale) {
    Say ("  closing stale cs2 pid {0}" -f $stale.Id)
    $stale | Stop-Process -Force -ErrorAction SilentlyContinue
    Start-Sleep -Seconds 4
}

# VAC verifies the game it was told to run. A cs2.exe started by us directly is
# not part of Steam's launch chain, and VAC answers with "game files have been
# detected to have no signatures or invalid signatures" and refuses secure
# servers. Open it the way the official loader does - through Steam - and only
# then map into the process it started.
if ($DirectLaunch) {
    Say '  launch    : direct (no Steam handshake - VAC-secured servers will refuse)'
    $p = Start-Process -FilePath $Game -PassThru
    Say ("  pid {0} ({1}), booting {2}s" -f $p.Id, (Split-Path -Leaf $Game), $BootSeconds)
    Start-Sleep -Seconds $BootSeconds
} else {
    Say '  launch    : steam://rungameid/730'
    Start-Process 'steam://rungameid/730'
    $p = $null
    for ($i = 0; $i -lt 180; $i++) {
        Start-Sleep -Seconds 1
        $c = Get-Process cs2 -ErrorAction SilentlyContinue | Select-Object -First 1
        if ($c) { $p = $c; break }
    }
    if (-not $p) { Say '  cs2 never appeared - is CS2 installed and Steam signed in?' 'Red'; exit 2 }
    Say ("  pid {0} ({1}), engine +{2}s" -f $p.Id, (Split-Path -Leaf $Game), $BootSeconds)
    Start-Sleep -Seconds $BootSeconds
}
if ($p.HasExited) { Say '  cs2 exited during boot' 'Red'; exit 2 }

# A restricted token cannot touch the game; fail with a readable line.
try { $null = [System.Diagnostics.Process]::GetProcessById($p.Id).Modules.Count }
catch {
    Say '  this shell cannot open cs2 (access denied).' 'Red'
    Say '  a Steam-launched cs2 can be higher integrity than this shell.' 'Yellow'
    Say '  start the launcher as administrator and retry.' 'Yellow'
    exit 3
}
Say '  engine up' 'Green'
Progress 38 'engine ready'
Say ''

# --- 4. map ----------------------------------------------------------------
Step 4 'map the stripped payload'
Progress 48 'mapping image'
$env:XMAP_NOCB = '1'                     # TLS callbacks fault inside ntdll
# The mapper ships with the project; the loader\ copy is the only supported one.
$mapperPath = Join-Path $root 'loader\XMap.cs'
if (-not (Test-Path -LiteralPath $mapperPath)) { Say "  missing mapper: $mapperPath" 'Red'; exit 4 }
if (-not ('XMap' -as [type])) { Add-Type -Path $mapperPath }
$null = [XMap]::ArmWatch($p.Id)
$log = [XMap]::Map($Payload, $p.Id)
$log -split "`r?`n" | Where-Object { $_ } | ForEach-Object { Say "  $_" }

$mBase = [regex]::Match($log, 'mapped\s+(0x[0-9A-Fa-f]+)')
$mSlot = [regex]::Match($log, 'tlsindex (\d+)')
$mBlk  = [regex]::Match($log, 'tlsblock (0x[0-9A-Fa-f]+)')
if (-not $mBase.Success) { Say '  no mapped base reported - aborting' 'Red'; exit 4 }
$base = $mBase.Groups[1].Value
$baseHex = $base -replace '^0x', ''
Say ("  base {0}" -f $base) 'Green'
Say ''

# XMap resolves imports from modules already loaded in cs2. d2d1.dll is not one
# of them, so its slots stay 0xFFFFFFFFFFFFFFFF and the first direct2d call
# faults (hvhgod-cheat.dll+0x1CD1BC, hit when the Configs tab redraws).
Progress 62 'image mapped'
Step '4b' 'repair unresolved import slots'
$iatfix = Join-Path $root 'tools\iatfix\bin\iatfix.exe'
if (Test-Path -LiteralPath $iatfix) {
    & $iatfix $p.Id $baseHex $Payload --force | ForEach-Object { Say "  $_" }
} else {
    Say '  missing tools\iatfix\bin\iatfix.exe - configs may still fault' 'Yellow'
}
Say ''

# --- 5. invoke the entry ----------------------------------------------------
Progress 72 'repairing imports'
Step 5 'invoke entry 0x41FCA0 with the handshake block'
Progress 82 'attaching runtime'
$caller = Join-Path $root 'tools\caller\bin\caller.exe'
$injector = @(
    (Join-Path $root 'tools\injector\bin\Release\net10.0-windows\hvinject.exe'),
    (Join-Path $root 'tools\injector\bin\hvinject.exe')
) | Where-Object { Test-Path -LiteralPath $_ } | Select-Object -First 1
if (Test-Path -LiteralPath $caller) {
    & $caller $p.Id $baseHex 41FCA0 $Payload | ForEach-Object { Say "  $_" }
} elseif ($injector) {
    & $injector --call $p.Id $baseHex 41FCA0 $Payload | ForEach-Object { Say "  $_" }
} else {
    Say '  missing tools\caller\bin\caller.exe - run build.ps1' 'Red'; exit 5
}

# Attach is done and the runtime has read its own headers, so the DOS magic can
# go now: a scanner hunting an MZ header in private memory finds nothing while
# +0x3C and the NT header stay readable.
if (Test-Path -LiteralPath $iatfix) {
Progress 90 'finalising'
    & $iatfix wipe $p.Id $baseHex | ForEach-Object { Say "  $_" }
}

# --- 5c. stealth pass -------------------------------------------------------
# Clearing the MZ bytes is a half-measure: the NT header, the section table,
# the import names and the debug record are still readable, and a scanner reads
# those before it ever looks at code. Scrub the whole header band, then leave
# the page mapped read-only so a runtime that still pokes at it gets zeros
# instead of an access violation.
$stealth = Join-Path $root 'tools\stealth.ps1'
if (-not $NoStealth -and (Test-Path -LiteralPath $stealth)) {
    Step '5c' 'stealth pass: scrub the mapped PE header'
    & pwsh -NoProfile -File $stealth -ProcessId $p.Id -Base $baseHex -Hide 2>&1 | ForEach-Object { Say "  $_" }
    Say ''
}

# --- 5d. seed the rage flags ------------------------------------------------
# Ungating the module is not the same as enabling the aim path. Two config
# values gate it and nothing writes them without the loader, so every command
# logs rage_inactive. Seed them from the mapped image.
$rageSeed = Join-Path $root 'tools\rage_seed.ps1'
if (-not $NoRageSeed -and (Test-Path -LiteralPath $rageSeed)) {
    Step '5d' 'seed the rage feature flags'
    & pwsh -NoProfile -File $rageSeed -ProcessId $p.Id -Base $baseHex 2>&1 | ForEach-Object { Say "  $_" }
    Say ''
}
Say ''

# --- 6. arm the TLS sweep ---------------------------------------------------
if (-not $NoSweep) {
    Step 6 'arm TLS sweep'
    if ($mSlot.Success -and $mBlk.Success) {
        Say ("  " + [XMap]::StartSweeper($p.Id, [uint32]$mSlot.Groups[1].Value, $mBlk.Groups[1].Value, 5)) 'Green'
    } else {
        Say '  no TLS slot in the map log - sweep skipped' 'Yellow'
    }
    Say ''
}

# --- 7. verdict from the runtime's own log ----------------------------------
Step 7 'watch the runtime log for the verdict'
$deadline = if ($WatchMinutes -le 0) { (Get-Date).AddMinutes(3) } else { (Get-Date).AddMinutes($WatchMinutes) }
$seen = @{}
$ok = $false
while ((Get-Date) -lt $deadline) {
    Start-Sleep -Milliseconds 500
    if (-not (Test-Path -LiteralPath $runtimeLog)) { continue }
    foreach ($line in (Get-Content -LiteralPath $runtimeLog -Tail 60)) {
        if ($line -match 'INITIALIZATION_SUCCESS' -and -not $seen.ContainsKey('init')) {
            $seen['init'] = $true; Say ("  " + $line) 'Green'; $ok = $true
        }
        if ($line -match 'RAGE_BOT_INIT_SUCCESS|LEGIT_BOT_INIT_SUCCESS' -and -not $seen.ContainsKey('bots')) {
            $seen['bots'] = $true; Say ("  " + $line) 'Green'
        }
        if ($line -match 'RENDER_RUNTIME_READY' -and -not $seen.ContainsKey('render')) {
            $seen['render'] = $true; Say ("  " + $line) 'Green'
        }
        if ($line -match 'MENU_INPUT_OWNERSHIP_ACQUIRED' -and -not $seen.ContainsKey('menu')) {
            $seen['menu'] = $true; Say ("  " + $line) 'Green'
        }
        if ($line -match 'INITIALIZATION_FAILURE|UNLOAD_REQUESTED') {
            if (-not $seen.ContainsKey('fail')) { $seen['fail'] = $true; Say ("  " + $line) 'Red'; $ok = $false }
        }
    }
    if ($ok -and $seen.ContainsKey('bots')) { break }
    $p.Refresh(); if ($p.HasExited) { Say '  cs2 exited early' 'Red'; break }
}

Say ''
if ($ok -and -not $seen.ContainsKey('fail')) {
    Progress 100 'ready'
Say '=== standalone runtime is UP ===' 'Green'
    Say 'press INSERT in game. no loader, no service, no network.'
} elseif ($ok) {
    Say '=== initialized, then something requested unload ===' 'Yellow'
    Say 'check the tail below.'
} else {
    Progress 100 'failed'
Say '=== runtime did not become ready ===' 'Red'
}
if (-not ($ok -and -not $seen.ContainsKey('fail'))) {
    Say 'last runtime log lines:'
    if (Test-Path -LiteralPath $runtimeLog) { Get-Content -LiteralPath $runtimeLog -Tail 12 | ForEach-Object { Say "  $_" } }
    if (Test-Path -LiteralPath $bridgeLog) { Get-Content -LiteralPath $bridgeLog -Tail 6 | ForEach-Object { Say "  $_" } }
}

if (-not $NoStealth -and (Test-Path -LiteralPath $stealth)) {
    Step 8 'stealth report: what a memory scanner sees now'
    & pwsh -NoProfile -File $stealth -ProcessId $p.Id 2>&1 | ForEach-Object { Say "  $_" }
    Say '  every line above is a real region: private, RWX or a PE header. empty = clean.'
    Say ''
}

Say ''
Say ("cs2 pid {0} still running; the sweep keeps the TLS slot alive." -f $p.Id)
Say 'Ctrl+C to stop watching. The game keeps running either way.'
