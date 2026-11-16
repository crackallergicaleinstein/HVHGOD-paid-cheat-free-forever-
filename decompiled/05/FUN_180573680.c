// FUN_180573680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180573680 */

undefined8 FUN_180573680(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  
  if (param_1 == (longlong *)0x0) {
    return 0x24;
  }
  lVar2 = *param_1;
  if (lVar2 == 0) {
    return 0x23;
  }
  lVar3 = *(longlong *)(lVar2 + 0x90);
  if (lVar3 == 0) {
    return 0x22;
  }
  plVar1 = (longlong *)(lVar2 + 0xa8);
  lVar4 = *(longlong *)(lVar3 + 0x10);
  if (plVar1 != (longlong *)0x0) {
    for (plVar5 = (longlong *)*plVar1; plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[1]) {
      if ((longlong *)plVar5[2] == param_1) {
        lVar6 = *plVar5;
        plVar5 = (longlong *)plVar5[1];
        if (lVar6 == 0) {
          *plVar1 = (longlong)plVar5;
        }
        else {
          *(longlong **)(lVar6 + 8) = plVar5;
        }
        if (plVar5 == (longlong *)0x0) {
          *(longlong *)(lVar2 + 0xb0) = lVar6;
        }
        else {
          *plVar5 = lVar6;
        }
        (**(code **)(lVar4 + 0x10))(lVar4);
        if (*(longlong **)(lVar2 + 0x80) == param_1) {
          *(undefined8 *)(lVar2 + 0x80) = 0;
          if (*plVar1 != 0) {
            *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(*plVar1 + 0x10);
          }
        }
        FUN_1805799a0(lVar4,param_1,lVar3);
        return 0;
      }
    }
  }
  return 0x24;
}



