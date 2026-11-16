// FUN_180577bd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180577bd0 */

void FUN_180577bd0(longlong param_1)

{
  if ((param_1 == 0) || (*(code **)(param_1 + 0x28) == (code *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000180577bde. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))();
  return;
}



