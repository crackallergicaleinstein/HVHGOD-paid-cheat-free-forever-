@echo off
setlocal EnableExtensions
cd /d "%~dp0"

rem cl.exe on PATH (CI sets it up) -> use it. Otherwise locate vcvars64.bat.
set "CLPATH="
for %%i in (cl.exe) do set "CLPATH=%%~$PATH:i"
if defined CLPATH goto toolchain_ready

set "VCVARS="
for %%R in (
  "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools"
  "C:\Program Files\Microsoft Visual Studio\2022\BuildTools"
  "C:\Program Files\Microsoft Visual Studio\2022\Community"
  "C:\Program Files\Microsoft Visual Studio\2022\Professional"
  "C:\Program Files\Microsoft Visual Studio\2022\Enterprise"
  "C:\Program Files\Microsoft Visual Studio\18\BuildTools"
  "C:\Program Files\Microsoft Visual Studio\18\Community"
  "C:\Program Files\Microsoft Visual Studio\18\Enterprise"
  "C:\Program Files\Microsoft Visual Studio\2026\BuildTools"
  "C:\Program Files\Microsoft Visual Studio\2026\Community"
  "C:\Program Files\Microsoft Visual Studio\2026\Enterprise"
) do if not defined VCVARS if exist "%%~R\VC\Auxiliary\Build\vcvars64.bat" set "VCVARS=%%~R\VC\Auxiliary\Build\vcvars64.bat"

if not defined VCVARS (
  echo [build] no C++ toolchain: cl.exe not on PATH and vcvars64.bat not found
  exit /b 1
)
call "%VCVARS%" >nul

:toolchain_ready
if not exist bin mkdir bin
cl /nologo /std:c++20 /O2 /EHsc /W4 /permissive- /utf-8 /DUNICODE /D_UNICODE ^
   /Isrc ^
   src\launcher.cpp ^
   /Fo:bin\ /Fe:bin\hvhgod-launcher.exe ^
   /link /SUBSYSTEM:WINDOWS /ENTRY:wWinMainCRTStartup ^
   user32.lib gdi32.lib gdiplus.lib shell32.lib advapi32.lib ole32.lib
if errorlevel 1 goto fail
echo [build] ok
exit /b 0
:fail
echo [build] FAILED
exit /b 1
