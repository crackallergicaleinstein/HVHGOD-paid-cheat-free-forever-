// FUN_18059cd60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059cd60 */

void FUN_18059cd60(longlong *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(*(longlong *)(*param_1 + 0x3e0) + 0x10d8) + 0x10)
  ;
                    /* WARNING: Could not recover jumptable at 0x00018059cd75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,UNRECOVERED_JUMPTABLE);
  return;
}



