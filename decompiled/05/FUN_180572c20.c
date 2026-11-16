// FUN_180572c20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180572c20 */

void FUN_180572c20(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  
  lVar7 = param_1[1];
  lVar2 = param_1[2];
  lVar3 = *param_1;
  if ((lVar7 != 0) && (*(longlong **)(lVar7 + 0x130) == param_1)) {
    *(undefined8 *)(lVar7 + 0x130) = 0;
  }
  if (((*(byte *)*param_1 & 2) != 0) && (plVar4 = (longlong *)param_1[1], plVar4 != (longlong *)0x0)
     ) {
    lVar7 = *plVar4;
    plVar1 = plVar4 + 0x23;
    if (plVar1 != (longlong *)0x0) {
      for (plVar5 = (longlong *)*plVar1; plVar5 != (longlong *)0x0; plVar5 = (longlong *)plVar5[1])
      {
        if ((longlong *)plVar5[2] == param_1) {
          if (param_1[0xc] != 0) {
            (**(code **)(*(longlong *)(param_1[3] + 0x60) + 0x28))();
          }
          lVar8 = *plVar5;
          plVar5 = (longlong *)plVar5[1];
          if (lVar8 == 0) {
            *plVar1 = (longlong)plVar5;
          }
          else {
            *(longlong **)(lVar8 + 8) = plVar5;
          }
          if (plVar5 == (longlong *)0x0) {
            plVar4[0x24] = lVar8;
          }
          else {
            *plVar5 = lVar8;
          }
          (**(code **)(lVar7 + 0x10))(lVar7);
          lVar7 = *plVar1;
          lVar8 = 0;
          if (lVar7 == 0) goto LAB_180572d2b;
          goto LAB_180572d10;
        }
      }
    }
  }
  goto LAB_180572d32;
  while (lVar7 = *(longlong *)(lVar7 + 8), lVar7 != 0) {
LAB_180572d10:
    if (*(int *)(*(longlong *)(lVar7 + 0x10) + 0x20) == 0x6f75746c) {
      lVar8 = *(longlong *)(lVar7 + 0x10);
      break;
    }
  }
LAB_180572d2b:
  plVar4[0x25] = lVar8;
LAB_180572d32:
  if ((*(byte *)*param_1 & 1) != 0) {
    lVar7 = param_1[2];
    plVar4 = param_1 + 4;
    if ((plVar4 != (longlong *)0x0) && (lVar7 != 0)) {
      lVar8 = *plVar4;
      while (lVar8 != 0) {
        lVar6 = *(longlong *)(lVar8 + 8);
        FUN_180579780(lVar7,*(undefined8 *)(lVar8 + 0x10),param_1);
        (**(code **)(lVar7 + 0x10))(lVar7,lVar8);
        lVar8 = lVar6;
      }
      *plVar4 = 0;
      param_1[5] = 0;
    }
  }
  if (*(code **)(lVar3 + 0x28) != (code *)0x0) {
    (**(code **)(lVar3 + 0x28))(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x000180572dce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 0x10))(lVar2,param_1);
  return;
}



