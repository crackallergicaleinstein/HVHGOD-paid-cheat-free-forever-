// FUN_18059e820 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059e820 */

void FUN_18059e820(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x2e0) + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00018059e82b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,UNRECOVERED_JUMPTABLE);
  return;
}



