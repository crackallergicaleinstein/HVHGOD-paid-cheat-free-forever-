// FUN_18057c3c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057c3c0 */

void FUN_18057c3c0(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if (*param_1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[5] = 0;
                    /* WARNING: Could not recover jumptable at 0x00018057c40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
  return;
}



