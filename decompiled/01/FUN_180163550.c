// FUN_180163550 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180163550 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180163550(longlong *param_1)

{
  (**(code **)(*param_1 + 8))();
                    /* WARNING: Could not recover jumptable at 0x00018063a8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*param_1)(param_1,1);
  return;
}



