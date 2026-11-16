// FUN_180159a50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180159a50 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180159a50(longlong param_1)

{
  undefined8 *puVar1;
  
  if ((*(longlong **)(param_1 + 8) == (longlong *)0x0) ||
     (puVar1 = (undefined8 *)(**(code **)(**(longlong **)(param_1 + 8) + 0x10))(),
     puVar1 == (undefined8 *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00018063a8e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*puVar1)(puVar1,1);
  return;
}



