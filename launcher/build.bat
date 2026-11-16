@echo off
setlocal EnableExtensions
cd /d "%~dp0"

set "VCVARS=C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat"
if not exist "%VCVARS%" set "VCVARS=C:\Program Files\Microsoft Visual Studio\18\Community\VC\Auxiliary\Build\vcvars64.bat"
if not exist "%VCVARS%" (
  echo [launcher] vcvars64.bat not found
  exit /b 1
)
call "%VCVARS%" >nul

if not exist bin mkdir bin

cl /nologo /std:c++20 /O2 /EHsc /W4 /permissive- /utf-8 /D_CRT_SECURE_NO_WARNINGS ^
   /DUNICODE /D_UNICODE ^
   /Isrc ^
   src\launcher.cpp ^
   /Fo:bin\ /Fe:bin\hvhgod-launcher.exe ^
   /link /SUBSYSTEM:WINDOWS /ENTRY:wWinMainCRTStartup ^
   user32.lib gdi32.lib gdiplus.lib shell32.lib advapi32.lib ole32.lib
if errorlevel 1 goto fail

echo [launcher] ok -^> bin\hvhgod-launcher.exe
exit /b 0

:fail
echo [launcher] FAILED
exit /b 1
