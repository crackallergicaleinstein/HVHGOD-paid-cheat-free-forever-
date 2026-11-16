// FUN_180619fc8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180619fc8 */

void FUN_180619fc8(UINT param_1,char param_2)

{
  HANDLE hProcess;
  
  if (param_2 != '\0') {
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,param_1);
  }
  FUN_180619ff8(param_1);
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}



