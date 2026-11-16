@echo off
setlocal EnableExtensions
cd /d "%~dp0"
set "VCVARS=C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat"
if not exist "%VCVARS%" set "VCVARS=C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvars64.bat"
if not exist "%VCVARS%" (
  echo [overlay] vcvars64.bat not found
  exit /b 1
)
call "%VCVARS%" >nul
if not exist bin mkdir bin
cl /nologo /std:c++20 /O2 /EHsc /W4 /permissive- /utf-8 /DUNICODE /D_UNICODE ^
   overlay.cpp /Fo:bin\ /Fe:bin\overlay.exe ^
   /link /SUBSYSTEM:WINDOWS user32.lib gdi32.lib shell32.lib
if errorlevel 1 goto fail
echo [overlay] ok -^> bin\overlay.exe
exit /b 0
:fail
echo [overlay] FAILED
exit /b 1
