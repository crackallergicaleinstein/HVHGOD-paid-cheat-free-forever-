// FUN_1802568e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802568e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802568e0(undefined8 param_1,float *param_2,longlong param_3,float *param_4,
                  longlong param_5)

{
  undefined4 *puVar1;
  float fVar2;
  double dVar3;
  float *pfVar4;
  ULONGLONG UVar5;
  undefined **ppuVar6;
  ulonglong *puVar7;
  undefined **ppuVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  float fVar24;
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  float fVar27;
  undefined1 auStack_1d8 [32];
  ulonglong local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  ulonglong local_188;
  ulonglong local_180;
  ulonglong local_178;
  undefined8 local_168;
  float local_160;
  undefined4 local_158;
  float local_154;
  float local_150;
  float *local_148;
  undefined4 local_140;
  float local_13c;
  float local_138;
  float local_134;
  undefined1 local_130 [16];
  undefined ***local_118;
  undefined8 local_110;
  undefined **local_108;
  longlong local_100;
  undefined *local_f8;
  longlong local_f0;
  undefined4 local_e8 [2];
  longlong local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_1d8;
  local_130 = ZEXT816(0x1807d0068);
  local_148 = param_4;
  FUN_18017bf40(local_130 + 8);
  auVar20 = ZEXT464((uint)(float)DAT_180b8e118);
  auVar18 = ZEXT416((uint)(float)DAT_180b8e118);
  auVar22 = ZEXT464((uint)DAT_180b8e118._4_4_);
  auVar19 = ZEXT416((uint)DAT_180b8e118._4_4_);
  fVar12 = (float)DAT_180b8e118 * (float)DAT_180b8e118 + DAT_180b8e118._4_4_ * DAT_180b8e118._4_4_;
  auVar21 = ZEXT864(0);
  if (fVar12 == 0.0) {
    fVar12 = 0.0;
  }
  else if (fVar12 < 0.0) {
    fVar12 = (float)FUN_18061e150(fVar12);
    auVar19 = auVar22._0_16_;
    auVar18 = auVar20._0_16_;
  }
  else {
    fVar12 = SQRT(fVar12);
  }
  if ((*(char *)(param_3 + 0x28) == '\0') ||
     ((auVar20 = ZEXT464(0x3f800000), fVar12 <= *(float *)(param_3 + 0x24) &&
      ((*(char *)(param_3 + 0x29) == '\0' || (fVar12 <= 1.0)))))) {
    *(undefined1 *)(param_2 + 4) = 0;
    FUN_18017bf40(&local_148);
    pfVar4 = local_148;
    uVar11 = (longlong)local_148 - local_130._8_8_;
    puVar7 = (ulonglong *)FUN_180266ab0();
    local_1b8 = *puVar7 + 1;
    *puVar7 = local_1b8;
    auVar22._0_8_ = puVar7[1];
    puVar7[1] = auVar22._0_8_ + uVar11;
    local_188 = puVar7[3] + (ulonglong)(999999 < uVar11);
    puVar7[3] = local_188;
    local_180 = puVar7[4] + (ulonglong)(4999999 < uVar11);
    puVar7[4] = local_180;
    local_178 = puVar7[5] + (ulonglong)(15999999 < uVar11);
    puVar7[5] = local_178;
    uVar9 = puVar7[2];
    if (puVar7[2] < uVar11) {
      puVar7[2] = uVar11;
      uVar9 = uVar11;
    }
    if ((pfVar4 != (float *)puVar7[7]) && ((longlong)pfVar4 < (longlong)puVar7[7])) {
    }
    local_198 = (double)(longlong)((longlong)pfVar4 - puVar7[6]) / 1000000.0;
    dVar3 = (double)(auVar22._0_8_ + uVar11);
    local_190 = 0.0;
    if (0.0 < local_198) {
      local_190 = (dVar3 / 1000.0) / local_198;
    }
    local_1a0 = dVar3 / 1000000.0;
    local_1a8 = (double)uVar9 / 1000.0;
    local_1b0 = (dVar3 / (double)local_1b8) / 1000.0;
    FUN_1801af8a0(dVar3 / (double)local_1b8,local_1b0,local_130._0_8_);
    puVar7[6] = (ulonglong)pfVar4;
    puVar7[7] = (ulonglong)(pfVar4 + 1250000000);
    goto LAB_180257274;
  }
  auVar18 = vunpcklps_avx(auVar18,auVar19);
  DAT_180b8e118 = auVar18._0_8_;
  fVar12 = 0.0;
  local_160 = 0.0;
  local_168 = DAT_180b8e118;
  if ((DAT_180cd3c20 & 1) == 0) {
    DAT_180cd3c20 = DAT_180cd3c20 | 1;
    local_f8 = (undefined *)CONCAT44(local_f8._4_4_,0xad8af3df);
    local_f0 = 0;
    local_108 = &local_f8;
    local_100 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_108);
    DAT_180cd3c28 = local_f0;
  }
  local_13c = *(float *)(DAT_180cd3c28 + 0x58);
  if ((DAT_180cd3c30 & 1) == 0) {
    DAT_180cd3c30 = DAT_180cd3c30 | 1;
    local_e8[0] = 0xa84213b4;
    local_e0 = 0;
    local_108 = (undefined **)local_e8;
    local_100 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_108);
    DAT_180cd3c38 = local_e0;
  }
  local_140 = *(undefined4 *)(DAT_180cd3c38 + 0x58);
  if ((DAT_180cd3c40 & 1) == 0) {
    DAT_180cd3c40 = DAT_180cd3c40 | 1;
    local_108 = (undefined **)CONCAT44(local_108._4_4_,0x16cc57ac);
    local_100 = 0;
    local_118 = &local_108;
    local_110 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_118);
    DAT_180cd3c48 = local_100;
  }
  fVar16 = *(float *)(DAT_180cd3c48 + 0x58);
  local_154 = DAT_180b8e154;
  auVar22._0_8_ = 0xffffffffffffffff;
  iVar10 = DAT_180c648d0;
  fVar14 = DAT_180b8e154;
  local_150 = fVar16;
  if (DAT_180c648d0 == 0) {
    UVar5 = GetTickCount64();
    if (UVar5 < DAT_180c648c8) {
      iVar10 = 0;
    }
    else {
      local_f8 = &DAT_1808ef770;
      iVar10 = FUN_1805f68d0(&DAT_1808ef770);
      if (iVar10 != 0) goto LAB_1802572fd;
      if (DAT_1808ef7bc == 0x7fffffff) {
        DAT_1808ef7bc = 0x7ffffffe;
        goto LAB_18025731b;
      }
      if ((DAT_180c648d0 == 0) && (DAT_180c648c8 <= UVar5)) {
        DAT_180c648d0 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
        if (DAT_180c648d0 == 0) {
          DAT_180c648c8 = UVar5 + 1000;
        }
        else {
          DAT_180c648c8 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c648d0;
      FUN_1805f68fc(&DAT_1808ef770);
    }
  }
  puVar1 = *(undefined4 **)((longlong)iVar10 + *(longlong *)(param_5 + 8));
  fVar15 = 250.0;
  if (puVar1 == (undefined4 *)0x0) {
    local_158 = 0x437a0000;
  }
  else {
    iVar10 = DAT_180c648b8;
    if (DAT_180c648b8 == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c648c0) {
        local_158 = *puVar1;
        goto LAB_180256cd2;
      }
      local_f8 = &DAT_1808ef7c0;
      iVar10 = FUN_1805f68d0(&DAT_1808ef7c0);
      if (iVar10 != 0) {
LAB_1802572fd:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808ef80c == 0x7fffffff) {
        DAT_1808ef80c = 0x7ffffffe;
LAB_18025731b:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c648b8 == 0) && (DAT_180c648c0 <= UVar5)) {
        DAT_180c648b8 = FUN_1804174b0("CPlayer_MovementServices",0x468f90f2);
        if (DAT_180c648b8 == 0) {
          auVar22._0_8_ = UVar5 + 1000;
        }
        DAT_180c648c0 = auVar22._0_8_;
      }
      iVar10 = DAT_180c648b8;
      FUN_1805f68fc(&DAT_1808ef7c0);
    }
    local_158 = *(undefined4 *)((longlong)iVar10 + (longlong)puVar1);
  }
LAB_180256cd2:
  iVar10 = 0;
  fVar27 = 0.015625;
  fVar24 = local_168._4_4_;
  fVar13 = (float)local_168;
  while( true ) {
    auVar26 = ZEXT464((uint)fVar13);
    auVar25 = ZEXT464((uint)fVar24);
    auVar22._0_8_ = (ulonglong)(uint)(fVar13 * fVar13);
    fVar2 = fVar24 * fVar24 + fVar13 * fVar13;
    if (fVar2 == auVar21._0_4_) break;
    auVar22._0_8_ = 0;
    if (fVar2 < 0.0) {
      auVar23._0_8_ = FUN_18061e150(fVar2);
      auVar23._8_56_ = extraout_var;
      auVar18 = auVar23._0_16_;
      auVar22._0_8_ = auVar23._0_8_;
    }
    else {
      auVar18 = ZEXT416((uint)SQRT(fVar2));
    }
    auVar23 = ZEXT1664(auVar18);
    fVar24 = auVar25._0_4_;
    fVar13 = auVar26._0_4_;
    if (auVar18._0_4_ < auVar20._0_4_) break;
    fVar13 = (float)FUN_180615630(auVar18._0_8_,local_140);
    uVar17 = FUN_180615630(auVar23._0_4_ - fVar14 * local_13c * fVar13 * fVar27,auVar21._0_8_);
    if (DAT_180cc9371 != '\0') {
      auVar18._0_4_ = DAT_180cc9368 / fVar15;
      auVar18._4_12_ = SUB6012((undefined1  [60])0x0,0);
      fVar14 = (float)FUN_1806156a0(auVar20._0_8_,auVar18._0_8_);
      fVar15 = (float)FUN_180615630(0x437a0000,local_158);
      fVar14 = fVar15 * fVar14 * 0.52 - 5.0;
      if (fVar14 < (float)uVar17) {
        fVar16 = (float)FUN_180615630(auVar21._0_8_,(float)uVar17 - fVar14);
        fVar14 = (float)FUN_180615630(0x3c23d70a,0x40a00000);
        fVar15 = auVar20._0_4_;
        local_134 = fVar15 - fVar16 / fVar14;
        local_f8 = (undefined *)CONCAT44(local_f8._4_4_,fVar15);
        local_138 = auVar21._0_4_;
        ppuVar8 = (undefined **)&local_138;
        if (auVar21._0_4_ <= local_134) {
          ppuVar8 = (undefined **)&local_134;
        }
        ppuVar6 = &local_f8;
        if (local_134 <= fVar15) {
          ppuVar6 = ppuVar8;
        }
        fVar16 = local_150 * *(float *)ppuVar6;
      }
      fVar15 = 250.0;
    }
    fVar16 = (float)FUN_1806156a0(fVar16 * DAT_180cc9368 * local_154 * fVar27,uVar17);
    auVar22._0_8_ = FUN_180615630((float)uVar17 - fVar16,auVar21._0_8_);
    auVar22._8_56_ = extraout_var_00;
    local_160 = auVar21._0_4_;
    if ((float)auVar22._0_8_ <= local_160) {
      local_168 = CONCAT44(local_160,local_160);
      fVar24 = local_160;
      fVar13 = local_160;
      break;
    }
    auVar19._0_4_ = (float)auVar22._0_8_ / auVar23._0_4_;
    auVar19._4_12_ = auVar22._4_12_;
    auVar22._0_8_ = auVar19._0_8_;
    fVar13 = auVar26._0_4_ * auVar19._0_4_;
    fVar24 = auVar25._0_4_ * auVar19._0_4_;
    local_168 = CONCAT44(fVar24,fVar13);
    fVar12 = fVar12 * auVar19._0_4_;
    iVar10 = iVar10 + 1;
    local_160 = fVar12;
    if (0xe < iVar10) break;
    fVar14 = local_154;
    fVar16 = local_150;
  }
  fVar16 = (fVar24 + DAT_180b8e118._4_4_) * 0.5;
  fVar15 = (fVar13 + (float)DAT_180b8e118) * 0.5;
  iVar10 = FUN_180277680(auVar22._0_8_,&DAT_180b8e118,DAT_180cc9368,*(undefined8 *)(param_5 + 8));
  fVar12 = local_148[2];
  fVar16 = fVar16 * (float)iVar10 * fVar27 + local_148[1];
  fVar15 = fVar15 * (float)iVar10 * fVar27;
  fVar14 = fVar15 + *local_148;
  fVar15 = (float)FUN_180278520(fVar15,*(undefined8 *)(param_5 + 8),&local_168);
  *param_2 = fVar14;
  param_2[1] = fVar16;
  param_2[2] = fVar12;
  param_2[3] = fVar15;
  *(undefined1 *)(param_2 + 4) = 1;
  FUN_18017bf40(&local_148);
  pfVar4 = local_148;
  uVar11 = (longlong)local_148 - local_130._8_8_;
  puVar7 = (ulonglong *)FUN_180266ab0();
  local_1b8 = *puVar7 + 1;
  *puVar7 = local_1b8;
  auVar22._0_8_ = puVar7[1];
  puVar7[1] = auVar22._0_8_ + uVar11;
  local_188 = puVar7[3] + (ulonglong)(999999 < uVar11);
  puVar7[3] = local_188;
  local_180 = puVar7[4] + (ulonglong)(4999999 < uVar11);
  puVar7[4] = local_180;
  local_178 = puVar7[5] + (ulonglong)(15999999 < uVar11);
  puVar7[5] = local_178;
  uVar9 = puVar7[2];
  if (puVar7[2] < uVar11) {
    puVar7[2] = uVar11;
    uVar9 = uVar11;
  }
  if ((pfVar4 != (float *)puVar7[7]) && ((longlong)pfVar4 < (longlong)puVar7[7])) {
  }
  local_198 = (double)(longlong)((longlong)pfVar4 - puVar7[6]) / 1000000.0;
  dVar3 = (double)(auVar22._0_8_ + uVar11);
  local_190 = 0.0;
  if (0.0 < local_198) {
    local_190 = (dVar3 / 1000.0) / local_198;
  }
  local_1a0 = dVar3 / 1000000.0;
  local_1a8 = (double)uVar9 / 1000.0;
  local_1b0 = (dVar3 / (double)local_1b8) / 1000.0;
  FUN_1801af8a0(dVar3 / (double)local_1b8,local_1b0,local_130._0_8_);
  puVar7[6] = (ulonglong)pfVar4;
  puVar7[7] = (ulonglong)(pfVar4 + 1250000000);
LAB_180257274:
  puVar7[3] = 0;
  puVar7[4] = 0;
  puVar7[5] = 0;
  *puVar7 = 0;
  puVar7[1] = 0;
  puVar7[2] = 0;
}



