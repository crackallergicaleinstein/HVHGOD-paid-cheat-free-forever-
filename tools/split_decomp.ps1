# split_decomp.ps1 - split a Ghidra dump into one file per function.
#
#   pwsh -File tools\split_decomp.ps1 -In decompiled.c [-Out decompiled]
#
# DumpDecomp.java writes a single 32 MB decompiled.c. This splits it on the
# `/* address */` headers into decompiled\<bucket>\FUN_<address>.c, where the
# bucket is the function's 1 MB slice of the image, so a clone is browsable.
#
# The input file is never modified.
param(
    [Parameter(Mandatory = $true)][string]$In,
    [string]$Out = '',
    [UInt64]$ImageBase = 0x180000000
)

$ErrorActionPreference = 'Stop'
$root = Split-Path -Parent (Split-Path -Parent $MyInvocation.MyCommand.Path)
$inPath = if ([System.IO.Path]::IsPathRooted($In)) { $In } else { Join-Path $root $In }
$outDir = if ([string]::IsNullOrWhiteSpace($Out)) { Join-Path $root 'decompiled' }
          elseif ([System.IO.Path]::IsPathRooted($Out)) { $Out }
          else { Join-Path $root $Out }

if (-not (Test-Path -LiteralPath $inPath)) { throw "input not found: $inPath" }
if (Test-Path -LiteralPath $outDir) { Remove-Item -LiteralPath $outDir -Recurse -Force }
New-Item -ItemType Directory -Path $outDir | Out-Null

$text = [System.IO.File]::ReadAllText($inPath)
$rx = [regex]'(?ms)/\* (?<addr>[0-9a-fA-F]+) \*/\s*(?<body>.*?)(?=/\* [0-9a-fA-F]+ \*/|\z)'

$blocks = $rx.Matches($text)
if ($blocks.Count -eq 0) { throw "no /* address */ headers in $inPath - wrong file?" }

$written = 0
foreach ($m in $blocks) {
    $addr = $m.Groups['addr'].Value.ToLowerInvariant()
    $value = [Convert]::ToUInt64($addr, 16)
    # addresses below the image base are not functions; skip rather than fail
    if ($addr.Length -gt 9 -and $value -lt $ImageBase) { continue }
    $offset = if ($value -ge $ImageBase) { $value - $ImageBase } else { $value }
    $bucket = [int]($offset -shr 20)
    $dir = Join-Path $outDir ('{0:x2}' -f $bucket)
    if (-not (Test-Path -LiteralPath $dir)) { New-Item -ItemType Directory -Path $dir | Out-Null }

    $body = $m.Groups['body'].Value
    $content = "// FUN_$addr - decompiled reference (Ghidra). Not original source, does not compile.`r`n`r`n/* $addr */`r`n`r`n$body"
    [System.IO.File]::WriteAllText((Join-Path $dir "FUN_$addr.c"), $content)
    $written++
}

Write-Host ("[split] {0:N0} functions -> {1}" -f $written, $outDir) -ForegroundColor Green
