@echo off
setlocal EnableExtensions
cd /d "%~dp0"
set "VCVARS=C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvars64.bat"
if not exist "%VCVARS%" (
  echo [iatfix] vcvars64.bat not found
  exit /b 1
)
call "%VCVARS%" >nul
if not exist bin mkdir bin
cl /nologo /std:c++20 /O2 /EHsc /W4 /permissive- /utf-8 /DUNICODE /D_UNICODE ^
   iatfix.cpp /Fo:bin\ /Fe:bin\iatfix.exe ^
   /link /SUBSYSTEM:CONSOLE user32.lib
if errorlevel 1 goto fail
echo [iatfix] ok -^> bin\iatfix.exe
exit /b 0
:fail
echo [iatfix] FAILED
exit /b 1
