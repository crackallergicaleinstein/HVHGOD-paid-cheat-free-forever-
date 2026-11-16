// FUN_1801933a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801933a0 */

void FUN_1801933a0(char *param_1)

{
  HANDLE hThread;
  
  if (*param_1 == '\0') {
    return;
  }
  hThread = GetCurrentThread();
                    /* WARNING: Could not recover jumptable at 0x0001801933bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  SetThreadPriority(hThread,0x20000);
  return;
}



