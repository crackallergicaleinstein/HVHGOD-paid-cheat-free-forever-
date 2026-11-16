// FUN_18059e8b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059e8b0 */

void FUN_18059e8b0(longlong param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x2e0) + 0x78);
                    /* WARNING: Could not recover jumptable at 0x00018059e8bb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,UNRECOVERED_JUMPTABLE);
  return;
}



