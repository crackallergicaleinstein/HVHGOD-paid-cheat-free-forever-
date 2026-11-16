// FUN_1800f63c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f63c0 */

void FUN_1800f63c0(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x80) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180611588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)(*(longlong *)(param_1 + 0x80) + 0x30));
  return;
}



