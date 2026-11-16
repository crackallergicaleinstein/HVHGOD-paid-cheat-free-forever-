// FUN_1803bfc40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803bfc40 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong FUN_1803bfc40(longlong param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18 [2];
  
  puVar4 = (undefined8 *)(param_2 + 8);
  param_2 = param_1 - param_2;
  lVar5 = 4;
  do {
    uVar3 = 0;
    puVar1 = puVar4 + -1;
    if (&local_28 != puVar1) {
      uVar3 = *puVar1;
      *puVar1 = 0;
    }
    plVar2 = *(longlong **)(param_2 + -8 + (longlong)puVar4);
    *(undefined8 *)(param_2 + -8 + (longlong)puVar4) = uVar3;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    uVar3 = 0;
    if (&local_20 != puVar4) {
      uVar3 = *puVar4;
      *puVar4 = 0;
    }
    plVar2 = *(longlong **)(param_2 + (longlong)puVar4);
    *(undefined8 *)(param_2 + (longlong)puVar4) = uVar3;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    uVar3 = 0;
    puVar1 = puVar4 + 1;
    if (local_18 != puVar1) {
      uVar3 = *puVar1;
      *puVar1 = 0;
    }
    plVar2 = *(longlong **)(param_2 + 8 + (longlong)puVar4);
    *(undefined8 *)(param_2 + 8 + (longlong)puVar4) = uVar3;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    puVar4 = puVar4 + 3;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  return param_1;
}



