// FUN_180573380 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180573380 */

undefined8 FUN_180573380(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x90) == 0)) {
    return 0x23;
  }
  piVar1 = (int *)(*(longlong *)(param_1 + 0xd0) + 0x60);
  *piVar1 = *piVar1 + -1;
  if (0 < *(int *)(*(longlong *)(param_1 + 0xd0) + 0x60)) {
    return 0;
  }
  lVar3 = *(longlong *)(param_1 + 0x90);
  lVar4 = *(longlong *)(lVar3 + 0x10);
  puVar2 = (undefined8 *)(lVar3 + 0x20);
  if (puVar2 != (undefined8 *)0x0) {
    for (plVar5 = (longlong *)*puVar2; plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[1]) {
      if (plVar5[2] == param_1) {
        lVar6 = *plVar5;
        plVar5 = (longlong *)plVar5[1];
        if (lVar6 == 0) {
          *puVar2 = plVar5;
        }
        else {
          *(longlong **)(lVar6 + 8) = plVar5;
        }
        if (plVar5 == (longlong *)0x0) {
          *(longlong *)(lVar3 + 0x28) = lVar6;
        }
        else {
          *plVar5 = lVar6;
        }
        (**(code **)(lVar4 + 0x10))(lVar4);
        FUN_180579780(lVar4,param_1,lVar3);
        return 0;
      }
    }
  }
  return 0x23;
}



