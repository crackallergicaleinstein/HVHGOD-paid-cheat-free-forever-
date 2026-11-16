// FUN_180369d70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180369d70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_180369d70(longlong *param_1,int param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  char cVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  ulonglong local_f8;
  undefined4 local_f0;
  ulonglong local_e8;
  undefined4 local_e0;
  ulonglong local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [16];
  ulonglong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  undefined8 local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  undefined4 local_40;
  
  auVar16 = local_b8;
  uVar10 = DAT_180b8e1bc;
  uVar9 = DAT_180b8e1b0;
  uVar8 = DAT_180b8e198;
  uVar7 = DAT_180b8e188;
  uVar6 = DAT_180b8e184;
  lVar3 = *param_1;
  lVar15 = (longlong)param_2 * 0x3c;
  uStack_c8 = CONCAT44(DAT_180b8e1a8,DAT_180b8e1a4);
  local_b8[0xc] = DAT_180b8e1a0;
  local_d8 = CONCAT44((undefined4)DAT_180b8e174,
                      (int)CONCAT62(local_d8._2_6_,CONCAT11((char)_DAT_180b8e18c,DAT_180b8e111))) &
             0xffffffffffff01ff;
  local_b8._14_2_ = auVar16._14_2_;
  local_b8[0xd] = (byte)(_DAT_180b8e18c >> 1) & 1;
  auVar16._4_12_ = local_b8._4_12_;
  auVar16._0_4_ = DAT_180b8e180;
  uStack_d0 = CONCAT44(DAT_180b8e17c,DAT_180b8e174._4_4_);
  uStack_c0 = CONCAT44(DAT_180b8e1c0,DAT_180b8e1ac);
  puVar1 = (ulonglong *)(lVar15 + -0x3c + lVar3);
  *puVar1 = local_d8;
  puVar1[1] = uStack_d0;
  puVar1[2] = uStack_c8;
  puVar1[3] = uStack_c0;
  auVar16 = vinsertps_avx(auVar16,ZEXT416(uVar6),0x10);
  local_b8 = vinsertps_avx(auVar16,ZEXT416(uVar7),0x20);
  *(undefined1 (*) [16])(lVar15 + -0x1c + lVar3) = local_b8;
  auVar16 = vunpcklps_avx(ZEXT416(uVar8),ZEXT416(uVar10));
  *(longlong *)(lVar15 + -0xc + lVar3) = auVar16._0_8_;
  *(undefined4 *)(lVar15 + -4 + lVar3) = uVar9;
  *(int *)param_1[1] = *(int *)param_1[1] + 1;
  if (param_2 != 1) {
    return false;
  }
  if ((*(float *)param_1[2] < 0.0) && (*(char *)param_1[3] == '\0')) {
LAB_18036a15b:
    cVar11 = FUN_180369480(param_1[0x11]);
    return cVar11 == '\0';
  }
  puVar1 = (ulonglong *)*param_1;
  puVar4 = (undefined8 *)param_1[4];
  local_d8 = *puVar1;
  uStack_d0 = puVar1[1];
  uStack_c8 = puVar1[2];
  uStack_c0 = puVar1[3];
  local_a0 = (undefined4)puVar1[7];
  local_58 = *(undefined8 *)*(undefined1 (*) [16])(puVar1 + 4);
  uStack_50 = puVar1[5];
  local_b8 = *(undefined1 (*) [16])(puVar1 + 4);
  local_a8 = puVar1[6];
  local_78 = *puVar1;
  uStack_70 = puVar1[1];
  uStack_68 = puVar1[2];
  uStack_60 = puVar1[3];
  local_48 = puVar1[6];
  local_e8 = *(ulonglong *)param_1[6];
  local_e0 = (undefined4)((ulonglong *)param_1[6])[1];
  puVar5 = (ulonglong *)param_1[5];
  local_f8 = *puVar5;
  local_f0 = (undefined4)puVar5[1];
  local_88 = *(undefined4 *)(puVar4 + 2);
  local_98 = *puVar4;
  uStack_90 = puVar4[1];
  local_40 = local_a0;
  iVar13 = FUN_180354ba0(&local_98,&local_f8,&local_e8,&local_78,*(undefined4 *)param_1[8],
                         *(undefined4 *)param_1[9],*(undefined4 *)param_1[10],&local_78,&local_d8);
  if (iVar13 != 0) goto LAB_18036a15b;
  iVar13 = 1;
  *(int *)param_1[0xb] =
       *(int *)param_1[0xb] + (uint)(*(char *)((longlong)puVar1 + 1) != *(char *)(puVar4 + 1));
  *(int *)param_1[0xc] = *(int *)param_1[0xc] + (uint)((int)puVar1[2] != *(int *)param_1[9]);
  *(int *)param_1[0xd] =
       *(int *)param_1[0xd] + (uint)(*(int *)((longlong)puVar1 + 0x14) != *(int *)param_1[10]);
  if (*(char *)(param_1[4] + 8) == '\0') {
    if ((*(float *)(param_1[5] + 8) - *(float *)param_1[7] * *(float *)param_1[8]) + 0.01 <
        *(float *)((longlong)puVar1 + 0xc)) {
      local_f8 = *(ulonglong *)((longlong)puVar1 + 4);
      auVar18._8_8_ = 0;
      auVar18._0_8_ = local_f8;
      auVar16 = vshufps_avx(auVar18,auVar18,0x55);
      uVar2 = *(ulonglong *)param_1[6];
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar2;
      auVar18 = vshufps_avx(auVar19,auVar19,0x55);
      if (-*(float *)param_1[7] * *(float *)param_1[8] <=
          auVar18._0_4_ * auVar16._0_4_ + (float)uVar2 * (float)local_f8 +
          *(float *)((ulonglong *)param_1[6] + 1) * *(float *)((longlong)puVar1 + 0xc))
      goto LAB_18036a089;
    }
    iVar14 = 1;
  }
  else {
LAB_18036a089:
    iVar14 = 0;
  }
  *(int *)param_1[0xe] = *(int *)param_1[0xe] + iVar14;
  if (*(char *)(param_1[4] + 8) != '\0') {
    local_f8 = *(ulonglong *)((longlong)puVar1 + 4);
    auVar17._8_8_ = 0;
    auVar17._0_8_ = local_f8;
    auVar16 = vshufps_avx(auVar17,auVar17,0x55);
    local_e8 = *(ulonglong *)param_1[5];
    auVar20._8_8_ = 0;
    auVar20._0_8_ = local_e8;
    auVar18 = vshufps_avx(auVar20,auVar20,0x55);
    if (auVar16._0_4_ * auVar16._0_4_ + (float)local_f8 * (float)local_f8 <
        auVar18._0_4_ * auVar18._0_4_ + (float)local_e8 * (float)local_e8) {
      iVar14 = 1;
      goto LAB_18036a0ed;
    }
  }
  iVar14 = 0;
LAB_18036a0ed:
  *(int *)param_1[0xf] = *(int *)param_1[0xf] + iVar14;
  if ((*(char *)(param_1[4] + 2) == '\0') ||
     (((iVar14 = *(int *)(param_1[4] + 4), -1 < iVar14 &&
       (iVar14 <= *(int *)((longlong)puVar1 + 0x1c))) &&
      (sVar12 = thunk_FUN_180624430((int)puVar1[3]), sVar12 < 1)))) {
    iVar13 = 0;
  }
  *(int *)param_1[0x10] = *(int *)param_1[0x10] + iVar13;
  return true;
}



