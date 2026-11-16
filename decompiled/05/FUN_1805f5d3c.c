// FUN_1805f5d3c - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f5d3c */

/* Library Function - Single Match
    __raise_securityfailure
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void __raise_securityfailure(_EXCEPTION_POINTERS *param_1)

{
  HANDLE hProcess;
  
  SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)0x0);
  UnhandledExceptionFilter(param_1);
  hProcess = GetCurrentProcess();
                    /* WARNING: Could not recover jumptable at 0x0001805f5d69. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TerminateProcess(hProcess,0xc0000409);
  return;
}



