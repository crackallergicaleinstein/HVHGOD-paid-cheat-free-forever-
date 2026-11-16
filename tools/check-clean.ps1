# check-clean.ps1 - refuse to publish anything that carries this machine's data.
#
# Scans every text file for absolute user paths and captured credentials, and
# refuses to ship a config library. Exit 1 on a hit.
$root = Split-Path -Parent (Split-Path -Parent $MyInvocation.MyCommand.Path)
$self = $MyInvocation.MyCommand.Path

$bad = @(
    'C:\Users\',
    '\Users\usr',
    'valorant sprung',
    'hvhgods-crack',
    'access_token',
    'refresh_token',
    'hvhref_',
    'x-hwid'
)

$exts = '.ps1', '.cpp', '.cs', '.bat', '.md', '.json', '.txt', '.csproj'
$files = Get-ChildItem -LiteralPath $root -Recurse -File -ErrorAction SilentlyContinue |
         Where-Object {
             $exts -contains $_.Extension -and
             $_.FullName -notmatch '\\payload\\|\\bin\\|\\assets-release\\' -and
             $_.FullName -ne $self
         }

$hits = 0
foreach ($f in $files) {
    foreach ($pat in $bad) {
        $m = Select-String -LiteralPath $f.FullName -Pattern $pat -SimpleMatch -ErrorAction SilentlyContinue
        foreach ($x in $m) {
            Write-Host ("  HIT {0}:{1}  {2}" -f $f.FullName.Substring($root.Length + 1), $x.LineNumber, $pat) -ForegroundColor Red
            $hits++
        }
    }
}

# config libraries and captures must never sit in the tree
foreach ($f in (Get-ChildItem -LiteralPath $root -Recurse -File -ErrorAction SilentlyContinue |
                Where-Object { $_.Name -match 'config-library|config-inner|config-local|account\.bridge|token|\.jsonl$' })) {
    Write-Host ("  HIT file {0}" -f $f.FullName.Substring($root.Length + 1)) -ForegroundColor Red
    $hits++
}

if ($hits -gt 0) {
    Write-Host ("[check-clean] {0} problem(s) - do not publish this tree" -f $hits) -ForegroundColor Red
    exit 1
}
Write-Host '[check-clean] clean - no personal paths, no configs, no credentials' -ForegroundColor Green
exit 0
