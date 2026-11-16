// FUN_18010fc70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18010fc70 */

void FUN_18010fc70(longlong *param_1)

{
  if (param_1 == (longlong *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018063a8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,1);
  return;
}



