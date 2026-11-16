// FUN_18059e8f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059e8f0 */

void FUN_18059e8f0(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x2e8) + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00018059e8fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,UNRECOVERED_JUMPTABLE);
  return;
}



