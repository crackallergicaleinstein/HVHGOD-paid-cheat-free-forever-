// FUN_1804e59e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e59e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined1 FUN_1804e59e0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined1 uVar6;
  undefined1 uVar5;
  
  plVar4 = *(longlong **)(param_2 + 0x28);
  uVar6 = 1;
  uVar5 = 1;
  plVar1 = plVar4 + *(int *)(param_2 + 0x20);
  for (; plVar4 != plVar1; plVar4 = plVar4 + 1) {
    lVar3 = *(longlong *)(*plVar4 + 0x88);
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(param_1 + 0xa8);
    }
    if (*(code **)(lVar3 + 0x18) != (code *)0x0) {
      cVar2 = (**(code **)(lVar3 + 0x18))(param_1);
      uVar5 = uVar6;
      if (cVar2 == '\0') {
        uVar5 = 0;
        uVar6 = 0;
      }
    }
  }
  return uVar5;
}



