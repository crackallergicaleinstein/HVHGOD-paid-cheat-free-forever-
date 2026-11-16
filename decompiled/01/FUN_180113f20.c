// FUN_180113f20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180113f20 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180113f20(longlong param_1)

{
  longlong *plVar1;
  
  FUN_1801409d0(param_1 + 0xc0,*(undefined1 *)(param_1 + 0xb8));
  plVar1 = *(longlong **)(param_1 + 0xa8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x70));
    *(undefined8 *)(param_1 + 0xa8) = 0;
  }
  FUN_180159650(param_1 + 0x40);
  FUN_180159650(param_1 + 0x20);
  FUN_1800f0160(param_1 + 8);
  return;
}



