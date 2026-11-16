// FUN_180579b50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180579b50 */

void FUN_180579b50(longlong *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*param_1 + 0x98);
  if (*(code **)(param_1[2] + 0x10) != (code *)0x0) {
    (**(code **)(param_1[2] + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000180579b8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
  return;
}



