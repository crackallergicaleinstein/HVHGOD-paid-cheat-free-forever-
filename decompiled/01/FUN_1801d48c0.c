// FUN_1801d48c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d48c0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801d48c0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 != 0) {
    plVar2 = *(longlong **)(lVar1 + 0x30);
    if (plVar2 != (longlong *)0x0) {
      *(undefined8 *)(lVar1 + 0x30) = 0;
      (**(code **)(*plVar2 + 0x10))();
    }
    FUN_18015c010(lVar1 + 0x10);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1804547d0(*(longlong *)(param_1 + 8),0x48);
  }
  return;
}



