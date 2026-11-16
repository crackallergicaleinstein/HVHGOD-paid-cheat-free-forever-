// FUN_1802bef30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802bef30 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1802bef30(short *param_1)

{
  bool bVar1;
  short *psVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  short *local_res8;
  short *local_28;
  char cStack_20;
  
  lVar6 = DAT_180bb83c0;
  if (DAT_180b8fb80 == 0) {
    return 0;
  }
  if (DAT_180b8fb88 == 0) {
    return 0;
  }
  local_res8 = param_1;
  if (DAT_180bb83c0 == 0) {
LAB_1802bf10f:
    DAT_180b8fb30 = 0;
    _DAT_180b8fb80 = (undefined1  [16])0x0;
    FUN_1802c1400(&DAT_180b8fb38);
    return 0;
  }
  lVar4 = FUN_18017ea70();
  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
  plVar5 = (longlong *)FUN_1802c14d0(&local_28,lVar6);
  uVar7 = 0;
  if ((char)plVar5[1] == '\0') {
    lVar6 = 0;
  }
  else {
    lVar6 = *plVar5;
  }
  lVar4 = FUN_18017ea70();
  if (*(int *)(lVar4 + 4) != 0) {
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
  }
  if (lVar6 != DAT_180b8fb80) goto LAB_1802bf10f;
  lVar6 = DAT_180b8fb88;
  lVar4 = FUN_1802bdcb0();
  if (lVar4 != lVar6) goto LAB_1802bf10f;
  lVar6 = DAT_180b8fb80;
  lVar4 = FUN_18017ea70();
  *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
  bVar1 = false;
  if (lVar6 != 0) {
    local_res8 = (short *)0x0;
    cVar3 = FUN_1804514f0(&local_res8,lVar6,8);
    if (cVar3 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  psVar2 = local_res8;
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
  if (!bVar1) {
    cStack_20 = '\0';
    goto LAB_1802bf07c;
  }
  lVar6 = FUN_18017ea70();
  *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
  if (psVar2 + 0x134 == (short *)0x0) {
LAB_1802bf05f:
    cStack_20 = '\0';
  }
  else {
    local_res8 = (short *)0x0;
    cVar3 = FUN_1804514f0(&local_res8,psVar2 + 0x134,8);
    if (cVar3 == '\0') goto LAB_1802bf05f;
    local_28 = local_res8;
    cStack_20 = '\x01';
  }
  lVar6 = FUN_18017ea70();
  if (*(int *)(lVar6 + 4) != 0) {
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
  }
LAB_1802bf07c:
  if (((DAT_180bb83c8 != (short *)0x0) && (*DAT_180bb83c8 == 0x5a4d)) &&
     (*(int *)((longlong)*(int *)(DAT_180bb83c8 + 0x1e) + (longlong)DAT_180bb83c8) == 0x4550)) {
    uVar7 = (ulonglong)
            *(uint *)((longlong)*(int *)(DAT_180bb83c8 + 0x1e) + 0x50 + (longlong)DAT_180bb83c8);
  }
  if (cStack_20 == '\0') {
    return 0;
  }
  if (local_28 < DAT_180bb83c8) {
    return 0;
  }
  if ((short *)(uVar7 + (longlong)DAT_180bb83c8) <= local_28) {
    return 0;
  }
  lVar6 = DAT_180b8fb80;
  if (DAT_180b8fb80 != 0) {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    FUN_1802c1480(lVar6);
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
  }
  return 1;
}



