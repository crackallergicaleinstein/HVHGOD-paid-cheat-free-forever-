#build.ps1 - build everything from source, then prove the tree is safe to publish.
#
#   pwsh -File build.ps1                 full: strip payload, build tools, scan
#   pwsh -File build.ps1 -NoPayload      skip the strip step
#
# Nothing here ships prebuilt. A fresh clone needs only:
#   * PowerShell 7
#   * Visual Studio 2022 BuildTools (vcvars64.bat) for the C++ tools
param(
    [switch]$NoPayload
)
$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent $MyInvocation.MyCommand.Path

function Step($m) { Write-Host "[build] $m" -ForegroundColor Cyan }
function Ok($m)   { Write-Host "[build] $m" -ForegroundColor Green }
function Bad($m)  { Write-Host "[build] $m" -ForegroundColor Red }

# --- toolchain --------------------------------------------------------------
# BuildTools, Community, Professional and Enterprise all ship the same helper.
# GitHub's windows-latest image has Enterprise, a dev box usually has BuildTools.
$vcRoots = @(
    'C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools',
    'C:\Program Files\Microsoft Visual Studio\2022\BuildTools',
    'C:\Program Files\Microsoft Visual Studio\2022\Community',
    'C:\Program Files\Microsoft Visual Studio\2022\Professional',
    'C:\Program Files\Microsoft Visual Studio\2022\Enterprise',
    'C:\Program Files\Microsoft Visual Studio\2022\Preview',
    'C:\Program Files\Microsoft Visual Studio\18\BuildTools',
    'C:\Program Files\Microsoft Visual Studio\18\Community',
    'C:\Program Files\Microsoft Visual Studio\18\Enterprise',
    'C:\Program Files\Microsoft Visual Studio\2026\BuildTools',
    'C:\Program Files\Microsoft Visual Studio\2026\Community',
    'C:\Program Files\Microsoft Visual Studio\2026\Professional',
    'C:\Program Files\Microsoft Visual Studio\2026\Enterprise'
)
$clOnPath = Get-Command cl.exe -ErrorAction SilentlyContinue
$vcvars = $vcRoots |
    ForEach-Object { Join-Path $_ 'VC\Auxiliary\Build\vcvars64.bat' } |
    Where-Object { Test-Path -LiteralPath $_ } |
    Select-Object -First 1

# vswhere can find an install in a non-default location
if (-not $vcvars -and -not $clOnPath) {
    $vswhere = 'C:\Program Files (x86)\Microsoft Visual Studio\Installer\vswhere.exe'
    if (Test-Path -LiteralPath $vswhere) {
        $path = & $vswhere -latest -products * -requires Microsoft.VisualStudio.Component.VC.Tools.x86.x64 -property installationPath
        if ($path) {
            $candidate = Join-Path $path 'VC\Auxiliary\Build\vcvars64.bat'
            if (Test-Path -LiteralPath $candidate) { $vcvars = $candidate }
        }
    }
}

if (-not $vcvars -and -not $clOnPath) {
    Bad 'no C++ toolchain: cl.exe is not on PATH and vcvars64.bat was not found.'
    Bad 'install "Visual Studio Build Tools" with the Desktop C++ workload:'
    Bad '  winget install Microsoft.VisualStudio.2022.BuildTools'
    exit 1
}
if ($clOnPath) { Step "toolchain: cl.exe on PATH ($($clOnPath.Source))" }
else         { Step "toolchain: $vcvars" }

# --- 1. payload -------------------------------------------------------------
if (-not $NoPayload) {
    $clean = Join-Path $root 'payload\payload.clean.dll'
    $strip = Join-Path $root 'work\payload.stripped.dll'
    if (-not (Test-Path -LiteralPath $clean)) {
        Bad 'missing payload\payload.clean.dll - it is committed to the repo, so this clone is broken'
        Bad 're-clone the repository, or run: pwsh -File build.ps1 -NoPayload'
        exit 1
    }
    Step 'stripping licence gates'
    & pwsh -NoProfile -File (Join-Path $root 'tools\strip_gates.ps1') -In $clean -Out $strip
    if (-not (Test-Path -LiteralPath $strip)) { Bad 'strip failed'; exit 1 }
    Ok ("payload.stripped.dll {0:N0} bytes" -f (Get-Item -LiteralPath $strip).Length)

    # vendor metadata is a free fingerprint: Rich header, linker timestamp,
    # section names, debug record. Zeroed on a copy, never on the input.
    $scrubbed = Join-Path $root 'work\payload.scrubbed.dll'
    Step 'scrubbing vendor metadata'
    & pwsh -NoProfile -File (Join-Path $root 'tools\scrub_image.ps1') -In $strip -Out $scrubbed
    if (-not (Test-Path -LiteralPath $scrubbed)) { Bad 'scrub failed'; exit 1 }
} else {
    Step 'payload step skipped'
}

# --- 2. binaries ------------------------------------------------------------
$targets = @(
    @{ Name = 'launcher'; Bat = 'launcher\build.bat';                     Exe = 'launcher\bin\hvhgod-launcher.exe' },
    @{ Name = 'iatfix';   Bat = 'tools\iatfix\build.bat';                 Exe = 'tools\iatfix\bin\iatfix.exe' },
    @{ Name = 'caller';   Bat = 'tools\caller\build.bat';                 Exe = 'tools\caller\bin\caller.exe' },
    @{ Name = 'overlay';  Bat = 'tools\overlay\build.bat';                Exe = 'tools\overlay\bin\overlay.exe' }
)
foreach ($t in $targets) {
    Step ("building {0}" -f $t.Name)
    & cmd /c "`"$root\$($t.Bat)`"" | Out-Null
    $exe = Join-Path $root $t.Exe
    if (-not (Test-Path -LiteralPath $exe)) { Bad ("{0} did not produce {1}" -f $t.Name, $t.Exe); exit 1 }
    Ok ("{0}  {1:N0} bytes" -f $t.Exe, (Get-Item -LiteralPath $exe).Length)
}

# --- 3. personal data scan --------------------------------------------------
Step 'checking the tree for personal data'
& pwsh -NoProfile -File (Join-Path $root 'tools\check-clean.ps1')
if ($LASTEXITCODE -ne 0) { Bad 'personal data found - do not push'; exit 1 }

Ok 'ready'
Write-Host ''
Write-Host '  run:  launcher\bin\hvhgod-launcher.exe' -ForegroundColor Gray
Write-Host '  or :  pwsh -File work\run-standalone.ps1' -ForegroundColor Gray
