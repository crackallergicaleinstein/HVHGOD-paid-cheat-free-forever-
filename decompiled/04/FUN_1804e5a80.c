// FUN_1804e5a80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e5a80 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1804e5a80(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_2[1] != 0) {
    FUN_1804e6a30();
  }
  *(undefined1 *)((longlong)param_2 + 0x34) = 0;
  *param_2 = 0;
  plVar3 = (longlong *)param_2[5];
  plVar1 = plVar3 + *(int *)(param_2 + 4);
  for (; plVar3 != plVar1; plVar3 = plVar3 + 1) {
    lVar2 = *(longlong *)(*plVar3 + 0x88);
    if (((lVar2 != 0) || (lVar2 = *(longlong *)(param_1 + 0xa8), lVar2 != 0)) &&
       (*(code **)(lVar2 + 0x20) != (code *)0x0)) {
      (**(code **)(lVar2 + 0x20))(param_1);
    }
  }
  return;
}



