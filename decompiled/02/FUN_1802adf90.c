// FUN_1802adf90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802adf90 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1802adf90(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (lVar2 != 0) {
    plVar1 = *(longlong **)(lVar2 + 0x18);
    if (plVar1 != (longlong *)0x0) {
      *(undefined8 *)(lVar2 + 0x18) = 0;
      (**(code **)(*plVar1 + 0x10))(plVar1);
      lVar2 = *(longlong *)(param_1 + 8);
    }
    if (lVar2 != 0) {
      FUN_1804547d0(lVar2,0x28);
      return;
    }
  }
  return;
}



