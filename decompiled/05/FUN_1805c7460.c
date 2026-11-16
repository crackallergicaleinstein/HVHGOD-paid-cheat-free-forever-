// FUN_1805c7460 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805c7460 */

undefined8 FUN_1805c7460(longlong param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(*(longlong *)(param_1 + 0x10) + 0x60);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return 0x96;
  }
                    /* WARNING: Could not recover jumptable at 0x0001805c746d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)();
  return uVar1;
}



