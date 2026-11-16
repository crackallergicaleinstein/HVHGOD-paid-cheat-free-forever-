// FUN_1805d8800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d8800 */

void thunk_FUN_18057abd0(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018057abd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x10))();
  return;
}



