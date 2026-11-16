// FUN_18059cc20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059cc20 */

void FUN_18059cc20(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2e0) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018059cc33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0x90))();
  return;
}



