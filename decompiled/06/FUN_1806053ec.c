// FUN_1806053ec - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806053ec */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1806053ec(LPFILETIME param_1)

{
  if (DAT_180bb1980 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00018060540c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    GetSystemTimeAsFileTime(param_1);
    return;
  }
  (*(code *)DAT_180bb1980)();
  return;
}



