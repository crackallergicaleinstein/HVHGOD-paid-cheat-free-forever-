// FUN_18035cf50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18035cf50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_18035cf50(longlong *param_1,int param_2)

{
  longlong lVar1;
  int *piVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  ulonglong uVar10;
  int iVar11;
  char cVar12;
  char cVar13;
  bool bVar14;
  float fVar15;
  undefined1 auVar16 [64];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulonglong uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  local_d8 = _DAT_180b8e110;
  uStack_d0 = DAT_180b8e118;
  uStack_c8 = _DAT_180b8e120;
  uStack_c0 = ram0x000180b8e128;
  local_b8 = _DAT_180b8e130;
  uStack_b0 = _DAT_180b8e138;
  uStack_a8 = _DAT_180b8e140;
  uStack_a0 = _DAT_180b8e148;
  local_98 = _DAT_180b8e150;
  uStack_90 = _DAT_180b8e158;
  uStack_88 = _DAT_180b8e160;
  uStack_80 = DAT_180b8e168;
  uVar4 = uStack_80;
  local_78 = _DAT_180b8e170;
  uVar5 = local_78;
  uStack_70 = ram0x000180b8e178;
  uVar6 = uStack_70;
  uStack_68 = _DAT_180b8e180;
  uStack_60 = _DAT_180b8e188;
  local_58 = _DAT_180b8e190;
  uStack_50 = _DAT_180b8e198;
  uStack_48 = _DAT_180b8e1a0;
  uVar7 = uStack_48;
  uStack_40 = _DAT_180b8e1a8;
  uVar8 = uStack_40;
  local_38 = _DAT_180b8e1b0;
  uStack_30 = _DAT_180b8e1b8;
  local_28 = DAT_180b8e1c0;
  uStack_70._4_4_ = (float)((ulonglong)ram0x000180b8e178 >> 0x20);
  if ((char)((ulonglong)_DAT_180b8e110 >> 8) == '\0') {
LAB_18035d066:
    cVar13 = '\0';
  }
  else {
    lVar1 = *param_1;
    uStack_80._0_4_ = (float)DAT_180b8e168;
    uStack_80._4_4_ = (float)((ulonglong)DAT_180b8e168 >> 0x20);
    uStack_80._0_4_ = (float)uStack_80 - *(float *)(lVar1 + 0x2c);
    local_78._0_4_ = (float)_DAT_180b8e170;
    uStack_80._4_4_ = uStack_80._4_4_ - *(float *)(lVar1 + 0x30);
    local_78._0_4_ = (float)local_78 - *(float *)(lVar1 + 0x34);
    if (uStack_80._4_4_ * uStack_80._4_4_ + (float)uStack_80 * (float)uStack_80 +
        (float)local_78 * (float)local_78 <= 1e-06) {
      local_78._4_4_ = (float)((ulonglong)_DAT_180b8e170 >> 0x20);
      uStack_70._0_4_ = (float)ram0x000180b8e178;
      uStack_70._0_4_ = (float)uStack_70 - *(float *)(lVar1 + 0xc);
      local_78._4_4_ = local_78._4_4_ - *(float *)(lVar1 + 8);
      fVar15 = uStack_70._4_4_ - *(float *)(lVar1 + 0x10);
      if ((float)uStack_70 * (float)uStack_70 + local_78._4_4_ * local_78._4_4_ + fVar15 * fVar15 <=
          1e-06) goto LAB_18035d066;
    }
    cVar13 = '\x01';
  }
  iVar9 = -1;
  if ((char)((int *)param_1[1])[1] == '\0') {
    iVar11 = -1;
  }
  else {
    iVar11 = *(int *)param_1[1];
  }
  uStack_48._4_4_ = (int)((ulonglong)_DAT_180b8e1a0 >> 0x20);
  if ((uStack_48._4_4_ == iVar11) || (uStack_70._4_4_ <= 0.0)) {
    cVar12 = '\0';
  }
  else {
    cVar12 = '\x01';
  }
  if ((char)((int *)param_1[2])[1] != '\0') {
    iVar9 = *(int *)param_1[2];
  }
  uStack_40._0_4_ = (int)_DAT_180b8e1a8;
  bVar14 = (int)uStack_40 == iVar9;
  uStack_80 = uVar4;
  local_78 = uVar5;
  uStack_70 = uVar6;
  uStack_48 = uVar7;
  uStack_40 = uVar8;
  if (param_2 == 1) {
    auVar16 = ZEXT1664(ZEXT416((uint)uStack_70._4_4_));
    FUN_18035e9f0(param_1[3],&local_d8);
    fVar15 = auVar16._0_4_;
    *(char *)param_1[4] = cVar13;
    *(char *)param_1[5] = cVar12;
    *(bool *)param_1[6] = bVar14;
  }
  else {
    auVar16 = ZEXT1664(ZEXT416((uint)uStack_70._4_4_));
    FUN_18035e9f0(param_1[7],&local_d8);
    fVar15 = auVar16._0_4_;
  }
  if (local_d8._1_1_ == '\0') {
    return 1;
  }
  piVar2 = (int *)param_1[8];
  if ((*(char *)param_1[9] == '\0') || (*(float *)param_1[10] <= fVar15)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if ((char)piVar2[1] == '\0') {
    iVar9 = *piVar2 + 1;
    *piVar2 = iVar9;
    if ((((iVar9 < 3) && (cVar13 != '\0')) && ((uStack_60 & 0x100000000) == 0)) && (bVar14)) {
      if (iVar9 == 1) {
        if (cVar12 == '\0') goto LAB_18035d169;
      }
      else if ((cVar12 != '\0') && (bVar3)) {
LAB_18035d169:
        if (param_2 == 1) {
          uVar10 = FUN_1803586d0(param_1[0xb],param_1[0xc]);
          return uVar10 ^ 1;
        }
        return 1;
      }
    }
  }
  *(undefined1 *)(piVar2 + 1) = 1;
  return 1;
}



