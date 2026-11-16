// FUN_180572e10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180572e10 */

int FUN_180572e10(longlong *param_1,byte *param_2)

{
  uint uVar1;
  char *_Str2;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  
  if (param_1 == (longlong *)0x0) {
    return 0x21;
  }
  if (param_2 == (byte *)0x0) {
    return 6;
  }
  if (0x2000e < *(int *)(param_2 + 0x14)) {
    return 4;
  }
  uVar1 = *(uint *)((longlong)param_1 + 0x14);
  uVar10 = 0;
  if (uVar1 != 0) {
    _Str2 = *(char **)(param_2 + 8);
    do {
      plVar12 = (longlong *)param_1[(ulonglong)uVar10 + 3];
      lVar8 = *plVar12;
      iVar5 = strcmp(*(char **)(lVar8 + 8),_Str2);
      if (iVar5 == 0) {
        if (*(int *)(param_2 + 0x10) <= *(int *)(lVar8 + 0x10)) {
          return 5;
        }
        if (plVar12 != (longlong *)0x0) {
          plVar7 = param_1 + 3;
          plVar9 = plVar7 + uVar1;
          if (plVar7 < plVar9) goto LAB_180572ee7;
        }
        break;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar1);
  }
LAB_180572f28:
  lVar8 = *param_1;
  if (0x1f < *(uint *)((longlong)param_1 + 0x14)) {
    return 0x30;
  }
  iVar5 = *(int *)(param_2 + 4);
  iVar6 = 0;
  plVar12 = (longlong *)0x0;
  if (iVar5 < 1) {
    if (iVar5 < 0) {
      return 6;
    }
  }
  else {
    plVar12 = (longlong *)(**(code **)(lVar8 + 8))(lVar8,iVar5);
    iVar6 = 0x40;
    if (plVar12 != (longlong *)0x0) {
      iVar6 = 0;
    }
  }
  if (iVar6 != 0) {
    return iVar6;
  }
  if ((plVar12 != (longlong *)0x0) && (0 < iVar5)) {
    FUN_18063ab10(plVar12,0,(longlong)iVar5);
  }
  *plVar12 = (longlong)param_2;
  plVar12[1] = (longlong)param_1;
  plVar12[2] = lVar8;
  if ((*param_2 & 2) != 0) {
    lVar2 = *param_1;
    plVar7 = (longlong *)(**(code **)(lVar2 + 8))(lVar2,0x18);
    if (plVar7 == (longlong *)0x0) {
      iVar5 = 0x40;
      goto LAB_1805730dc;
    }
    lVar3 = *plVar12;
    iVar5 = 0;
    plVar12[3] = lVar3;
    *(undefined4 *)(plVar12 + 4) = *(undefined4 *)(lVar3 + 0x38);
    if ((*(longlong *)(lVar3 + 0x60) == 0) ||
       (pcVar4 = *(code **)(*(longlong *)(lVar3 + 0x60) + 8), pcVar4 == (code *)0x0)) {
LAB_18057301e:
      if (*(int *)(lVar3 + 0x38) == 0x53564720) {
        plVar12[0xe] = *(longlong *)(lVar3 + 0x40);
      }
      plVar9 = param_1 + 0x23;
      plVar7[2] = (longlong)plVar12;
      if (plVar9 != (longlong *)0x0) {
        lVar3 = param_1[0x24];
        plVar7[1] = 0;
        *plVar7 = lVar3;
        if (lVar3 == 0) {
          *plVar9 = (longlong)plVar7;
        }
        else {
          *(longlong **)(lVar3 + 8) = plVar7;
        }
        param_1[0x24] = (longlong)plVar7;
      }
      lVar3 = *plVar9;
      while ((lVar13 = 0, lVar3 != 0 &&
             (lVar13 = *(longlong *)(lVar3 + 0x10), *(int *)(lVar13 + 0x20) != 0x6f75746c))) {
        lVar3 = *(longlong *)(lVar3 + 8);
      }
      param_1[0x25] = lVar13;
      if (iVar5 == 0) goto LAB_1805730ad;
      if (plVar7 != (longlong *)0x0) goto LAB_18057309b;
    }
    else {
      iVar5 = (*pcVar4)(lVar2,plVar12 + 0xc);
      if (iVar5 == 0) {
        plVar12[0xd] = *(longlong *)(*(longlong *)(lVar3 + 0x60) + 0x20);
        plVar12[0xe] = *(longlong *)(lVar3 + 0x40);
        goto LAB_18057301e;
      }
LAB_18057309b:
      (**(code **)(lVar2 + 0x10))(lVar2,plVar7);
    }
    if (iVar5 != 0) goto LAB_1805730dc;
  }
LAB_1805730ad:
  if ((*(byte *)*plVar12 & 4) != 0) {
    param_1[0x26] = (longlong)plVar12;
  }
  if ((*(byte *)*plVar12 & 1) != 0) {
    plVar12[3] = *plVar12;
  }
  if ((*(code **)(param_2 + 0x20) == (code *)0x0) ||
     (iVar5 = (**(code **)(param_2 + 0x20))(plVar12), iVar5 == 0)) {
    param_1[(ulonglong)*(uint *)((longlong)param_1 + 0x14) + 3] = (longlong)plVar12;
    *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + 1;
    return 0;
  }
LAB_1805730dc:
  if (((((*(byte *)*plVar12 & 2) != 0) && (lVar2 = plVar12[3], lVar2 != 0)) &&
      (*(int *)(lVar2 + 0x38) == 0x6f75746c)) && (plVar12[0xc] != 0)) {
    (**(code **)(*(longlong *)(lVar2 + 0x60) + 0x28))();
  }
  (**(code **)(lVar8 + 0x10))(lVar8,plVar12);
  return iVar5;
LAB_180572ee7:
  if ((longlong *)*plVar7 != plVar12) goto code_r0x000180572eec;
  plVar9 = plVar9 + -1;
  *(uint *)((longlong)param_1 + 0x14) = uVar1 - 1;
  if (plVar7 < plVar9) {
    plVar11 = plVar7;
    for (lVar8 = ((ulonglong)((longlong)plVar9 + (-1 - (longlong)plVar7)) >> 3) + 1;
        plVar7 = plVar7 + 1, lVar8 != 0; lVar8 = lVar8 + -1) {
      *plVar11 = *plVar7;
      plVar11 = plVar11 + 1;
    }
  }
  *plVar9 = 0;
  FUN_180572c20(plVar12);
  goto LAB_180572f28;
code_r0x000180572eec:
  plVar7 = plVar7 + 1;
  if (plVar9 <= plVar7) goto LAB_180572f28;
  goto LAB_180572ee7;
}



