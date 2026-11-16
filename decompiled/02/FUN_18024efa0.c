// FUN_18024efa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18024efa0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18024efa0(longlong param_1,longlong param_2,uint *param_3,uint *param_4,undefined8 *param_5
                  ,undefined8 *param_6,longlong param_7,int param_8)

{
  uint *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong *puVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auStack_f8 [32];
  uint local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  uint *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  ulonglong local_80;
  
  local_80 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  auVar28 = ZEXT464(param_4[3]);
  local_b0 = param_3;
  uVar7 = FUN_1802460f0(param_1,param_4[3]);
  local_d0._4_4_ = (undefined4)(uVar7 >> 0x20);
  uVar6 = local_d0._4_4_;
  local_d0 = uVar7;
  fVar17 = (float)FUN_180636420(uVar7 & 0xffffffff,uVar6);
  fVar20 = 1e-05;
  auVar27 = ZEXT864(0);
  if ((*(int *)(param_1 + 0x3c) < 1) || (*(float *)(param_1 + 0x84) != 0.0)) {
    bVar16 = false;
  }
  else {
    bVar16 = true;
  }
  iVar15 = 0;
  if ((fVar17 <= 1e-05) || (iVar14 = 1, bVar16)) {
    iVar14 = 0;
  }
  local_d0 = CONCAT44(local_d0._4_4_,*(int *)(param_1 + 0x3c) + iVar14);
  local_b8 = FUN_1802460f0(param_1,auVar28._0_8_);
  puVar1 = (uint *)(param_1 + 0x50);
  local_d8 = *(uint *)(param_1 + 0x3c);
  if (*(char *)(param_1 + 0x571) == '\0') {
    if (*(char *)(param_1 + 0x572) == '\0') goto LAB_18024f0cc;
    uVar12 = *puVar1;
    *param_4 = *param_4 | 2;
    param_4[3] = uVar12;
  }
  else {
    uVar12 = *puVar1;
    param_4[2] = *(uint *)(param_1 + 0x4c);
    param_4[3] = *puVar1;
    param_4[4] = *(uint *)(param_1 + 0x54);
    *param_4 = *param_4 | 7;
  }
  auVar28 = ZEXT464(uVar12);
  *param_3 = *param_3 | 4;
LAB_18024f0cc:
  auVar21 = vunpcklps_avx(ZEXT416(*(uint *)(param_1 + 0x58)),ZEXT416(*(uint *)(param_1 + 0x5c)));
  uVar8 = FUN_180244af0(auVar21._0_8_,*puVar1,auVar28._0_8_);
  *param_3 = *param_3 | 0x1c0;
  local_c8._0_4_ = (float)uVar8;
  local_c8._4_4_ = (float)(uVar8 >> 0x20);
  fVar17 = local_c8._4_4_;
  param_3[0x12] = (uint)(float)local_c8;
  param_3[0x13] = (uint)local_c8._4_4_;
  param_3[0x14] = *(uint *)(param_1 + 0x60);
  local_c0 = *(ulonglong *)(param_2 + 0x60);
  *(ulonglong *)(param_2 + 0x60) =
       (*(ulonglong *)(param_1 + 0x20) ^ local_c0) & 0xfffffffffffff9e1 ^
       *(ulonglong *)(param_1 + 0x20);
  uVar7 = (*(ulonglong *)(param_1 + 0x28) ^ *(ulonglong *)(param_2 + 0x68)) & 0xfffffffffffff9e1 ^
          *(ulonglong *)(param_1 + 0x28);
  *(ulonglong *)(param_2 + 0x68) = uVar7;
  *(ulonglong *)(param_2 + 0x70) =
       (*(ulonglong *)(param_1 + 0x30) ^ *(ulonglong *)(param_2 + 0x70)) & 0xfffffffffffff9e1 ^
       *(ulonglong *)(param_1 + 0x30);
  if (*(char *)(param_1 + 0x571) == '\0') {
    lVar10 = (longlong)*(int *)(param_1 + 0x3c);
    bVar16 = false;
    if (0 < lVar10) {
      pbVar9 = (byte *)(param_1 + 0x70);
      do {
        bVar2 = *pbVar9;
        pbVar9 = pbVar9 + 0x28;
        bVar16 = (bool)(bVar16 | (bVar2 & 0x18) != 0);
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      uVar7 = *(ulonglong *)(param_2 + 0x68);
    }
    puVar13 = (ulonglong *)(param_2 + 0x60);
    fVar19 = (float)local_c8;
    if (bVar16) {
      local_c8 = uVar8;
      fVar18 = (float)FUN_180636420(uVar8 & 0xffffffff,fVar17);
      if (fVar18 <= fVar20) {
        uVar7 = *(ulonglong *)(param_1 + 0x20);
        auVar21._0_8_ = -(ulonglong)((uVar7 & 8) == 0);
        auVar21._8_8_ = 0xffffffffffffffff;
        auVar25 = SUB6416(ZEXT464(0x3f800000),0);
        auVar26 = auVar27._0_16_;
        auVar21 = vblendvps_avx(auVar25,auVar26,auVar21);
        auVar22._0_8_ = -(ulonglong)((uVar7 & 0x10) == 0);
        auVar22._8_8_ = 0xffffffffffffffff;
        auVar22 = vblendvps_avx(auVar25,auVar26,auVar22);
        auVar23._0_8_ = -(ulonglong)((uVar7 & 0x200) == 0);
        auVar23._8_8_ = 0xffffffffffffffff;
        auVar23 = vblendvps_avx(auVar25,auVar26,auVar23);
        auVar24._0_8_ = -(ulonglong)((uVar7 & 0x400) == 0);
        auVar24._8_8_ = 0xffffffffffffffff;
        auVar24 = vblendvps_avx(auVar25,auVar26,auVar24);
        auVar21 = vunpcklps_avx(ZEXT416((uint)(auVar21._0_4_ - auVar22._0_4_)),
                                ZEXT416((uint)(auVar23._0_4_ - auVar24._0_4_)));
        uVar8 = FUN_180244af0(auVar21._0_8_,*(undefined4 *)(param_1 + 0x50),auVar28._0_8_);
        uVar7 = *(ulonglong *)(param_2 + 0x68);
        local_c8._0_4_ = (float)uVar8;
        local_c8._4_4_ = (float)(uVar8 >> 0x20);
        fVar19 = (float)local_c8;
        fVar17 = local_c8._4_4_;
        local_c8 = uVar8;
      }
      uVar8 = local_c8;
    }
    local_c8 = uVar8;
    uVar8 = *puVar13 & 0xfffffffffffff9e7;
    *puVar13 = uVar8;
    if (fVar20 < fVar19) {
      uVar8 = uVar8 | 8;
      *puVar13 = uVar8;
    }
    if (fVar19 < -1e-05) {
      uVar8 = uVar8 | 0x10;
      *puVar13 = uVar8;
    }
    if (fVar20 < fVar17) {
      uVar8 = uVar8 | 0x200;
      *(ulonglong *)(param_2 + 0x60) = uVar8;
    }
    if (fVar17 < -1e-05) {
      uVar8 = uVar8 | 0x400;
      *(ulonglong *)(param_2 + 0x60) = uVar8;
    }
    *(ulonglong *)(param_2 + 0x68) = ((uint)uVar8 ^ (uint)local_c0) & 0x618 | uVar7;
    uVar8 = local_c8;
  }
  local_c8 = uVar8;
  auVar21 = auVar27._0_16_;
  if ((uint)local_d0 != local_d8) {
    uStack_84 = 0;
    local_a8 = 0;
    puVar11 = (undefined8 *)*param_5;
    uStack_a4 = 0;
    uStack_a0 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    uStack_90 = 0;
    uStack_8c = 0;
    uStack_88 = 0;
    *puVar11 = 0;
    puVar11[1] = 0;
    puVar11[2] = 0;
    puVar11[3] = 0;
    puVar11[4] = 0;
    *(undefined4 *)*param_5 = 0x1f;
  }
  iVar14 = 0;
  uVar12 = (uint)local_d0;
  if (0 < *(int *)(param_1 + 0x3c)) {
    bVar16 = (uint)local_d0 != local_d8;
    puVar11 = (undefined8 *)(param_1 + 0x70);
    do {
      uVar3 = puVar11[1];
      uVar4 = puVar11[2];
      uVar5 = puVar11[3];
      puVar1 = (uint *)param_5[(int)(iVar14 + (uint)bVar16)];
      *(undefined8 *)puVar1 = *puVar11;
      *(undefined8 *)(puVar1 + 2) = uVar3;
      *(undefined8 *)(puVar1 + 4) = uVar4;
      *(undefined8 *)(puVar1 + 6) = uVar5;
      *(undefined8 *)(puVar1 + 8) = puVar11[4];
      if ((*(char *)(param_1 + 0x571) == '\0') && (*(char *)(param_1 + 0x572) == '\0')) {
        uVar12 = *puVar1;
        if ((uVar12 & 0x18) != 0) {
          auVar21 = auVar27._0_16_;
          if ((uVar12 & 8) == 0) {
            auVar22 = auVar21;
          }
          else {
            auVar22 = ZEXT416(puVar1[6]);
          }
          if ((uVar12 & 0x10) == 0) {
            auVar23 = auVar21;
          }
          else {
            auVar23 = ZEXT416(puVar1[7]);
          }
          auVar22 = vunpcklps_avx(auVar22,auVar23);
          auVar27 = ZEXT1664(auVar21);
          uVar7 = FUN_180244af0(auVar22._0_8_);
          *puVar1 = *puVar1 | 0x18;
          local_c0._0_4_ = (uint)uVar7;
          local_c0._4_4_ = (uint)(uVar7 >> 0x20);
          puVar1[6] = (uint)local_c0;
          puVar1[7] = local_c0._4_4_;
          local_c0 = uVar7;
        }
      }
      auVar21 = auVar27._0_16_;
      iVar14 = iVar14 + 1;
      puVar11 = puVar11 + 5;
    } while (iVar14 < *(int *)(param_1 + 0x3c));
    uVar12 = (uint)local_d0;
  }
  if (uVar12 != 0) {
    auVar27 = ZEXT1664(auVar21);
    fVar19 = (float)FUN_180636420();
    fVar17 = auVar27._0_4_;
    if (fVar20 < fVar19) {
      pbVar9 = (byte *)*param_5;
      fVar20 = fVar17;
      if ((*pbVar9 & 8) != 0) {
        fVar20 = *(float *)(pbVar9 + 0x18);
      }
      *(float *)(pbVar9 + 0x18) = fVar20 + (float)local_b8;
      pbVar9 = (byte *)*param_5;
      if ((*pbVar9 & 0x10) != 0) {
        fVar17 = *(float *)(pbVar9 + 0x1c);
      }
      *(float *)(pbVar9 + 0x1c) = fVar17 + local_b8._4_4_;
      *(uint *)*param_5 = *(uint *)*param_5 | 0x18;
    }
  }
  local_b0[4] = uVar12;
  if (*(char *)(param_1 + 0x571) != '\0') {
    param_7 = param_7 - (longlong)param_6;
    do {
      if (*(char *)(param_1 + 0x573) == '\0') {
      }
      if (param_8 <= iVar15) {
      }
      iVar15 = iVar15 + 1;
      puVar1 = *(uint **)(param_7 + (longlong)param_6);
      puVar1[2] = *(uint *)(param_1 + 0x4c);
      puVar1[3] = *(uint *)(param_1 + 0x50);
      uVar12 = *(uint *)(param_1 + 0x54);
      *puVar1 = *puVar1 | 7;
      puVar1[4] = uVar12;
      puVar1 = (uint *)*param_6;
      param_6 = param_6 + 1;
      *puVar1 = *puVar1 | 1;
    } while (*(char *)(param_1 + 0x571) != '\0');
  }
}



