// FUN_1802ef110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ef110 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802ef110(undefined8 param_1,ulonglong param_2,longlong param_3,float *param_4,
                  float *param_5)

{
  char cVar1;
  int iVar2;
  ULONGLONG UVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  int iVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [64];
  undefined1 auStack_2c8 [32];
  undefined **local_2a8;
  ulonglong *local_2a0;
  undefined1 *local_298;
  undefined4 local_288 [2];
  undefined8 local_280;
  float local_278;
  undefined *local_270;
  undefined4 local_268;
  ulonglong local_260;
  undefined4 local_258;
  float local_250;
  float local_24c;
  float local_240;
  float local_23c;
  float local_238;
  undefined1 local_228 [80];
  undefined1 local_1d8 [132];
  float local_154;
  float local_150;
  float local_14c;
  ulonglong local_c8;
  
  iVar2 = DAT_180c6ee2c;
  local_c8 = DAT_1808d5f00 ^ (ulonglong)auStack_2c8;
  auVar19 = ZEXT464(0x3f800000);
  uVar7 = 0xffffffffffffffff;
  local_260 = param_2;
  if ((DAT_180c6ee2c == 0) && (UVar3 = GetTickCount64(), DAT_180c6ee30 <= UVar3)) {
    local_270 = &DAT_1808fe3e0;
    iVar2 = FUN_1805f68d0(&DAT_1808fe3e0);
    if (iVar2 != 0) goto LAB_1802ef834;
    if (DAT_1808fe42c == 0x7fffffff) {
      DAT_1808fe42c = 0x7ffffffe;
      goto LAB_1802ef829;
    }
    if ((DAT_180c6ee2c == 0) && (DAT_180c6ee30 <= UVar3)) {
      DAT_180c6ee2c = FUN_1804174b0("C_BaseCSGrenade",0xb3d8aaba);
      if (DAT_180c6ee2c == 0) {
        DAT_180c6ee30 = UVar3 + 1000;
      }
      else {
        DAT_180c6ee30 = 0xffffffffffffffff;
      }
    }
    iVar2 = DAT_180c6ee2c;
    FUN_1805f68fc(&DAT_1808fe3e0);
  }
  iVar6 = DAT_180c6ee18;
  cVar1 = *(char *)(iVar2 + param_3);
  if ((DAT_180c6ee18 == 0) && (UVar3 = GetTickCount64(), DAT_180c6ee20 <= UVar3)) {
    local_270 = &DAT_1808fe340;
    iVar2 = FUN_1805f68d0(&DAT_1808fe340);
    if (iVar2 != 0) goto LAB_1802ef834;
    if (DAT_1808fe38c == 0x7fffffff) {
      DAT_1808fe38c = 0x7ffffffe;
      goto LAB_1802ef829;
    }
    if ((DAT_180c6ee18 == 0) && (DAT_180c6ee20 <= UVar3)) {
      DAT_180c6ee18 = FUN_1804174b0("C_BaseCSGrenade",0x57c1b8da);
      if (DAT_180c6ee18 == 0) {
        DAT_180c6ee20 = UVar3 + 1000;
      }
      else {
        DAT_180c6ee20 = 0xffffffffffffffff;
      }
    }
    iVar6 = DAT_180c6ee18;
    FUN_1805f68fc(&DAT_1808fe340);
  }
  iVar2 = DAT_180c6ee28;
  fVar13 = auVar19._0_4_;
  uVar11 = (ulonglong)(uint)*(float *)(iVar6 + param_3);
  fVar9 = 0.0;
  if ((cVar1 != '\0') || (0.0 < *(float *)(iVar6 + param_3))) {
    local_270 = (undefined *)CONCAT44(local_270._4_4_,fVar13);
    local_288[0] = 0;
    if (DAT_180c6ee28 == 0) {
      fVar9 = 0.0;
      UVar3 = GetTickCount64();
      fVar13 = auVar19._0_4_;
      if (DAT_180c6ee00 <= UVar3) {
        local_280 = &DAT_1808fe2f0;
        iVar2 = FUN_1805f68d0(&DAT_1808fe2f0);
        if (iVar2 != 0) goto LAB_1802ef834;
        if (DAT_1808fe33c == 0x7fffffff) {
          DAT_1808fe33c = 0x7ffffffe;
          goto LAB_1802ef829;
        }
        if ((DAT_180c6ee28 == 0) && (DAT_180c6ee00 <= UVar3)) {
          DAT_180c6ee28 = FUN_1804174b0("C_BaseCSGrenade",0xf4d38cf4);
          if (DAT_180c6ee28 == 0) {
            DAT_180c6ee00 = UVar3 + 1000;
          }
          else {
            DAT_180c6ee00 = 0xffffffffffffffff;
          }
        }
        iVar2 = DAT_180c6ee28;
        FUN_1805f68fc(&DAT_1808fe2f0);
        fVar13 = auVar19._0_4_;
      }
    }
    fVar18 = *(float *)(iVar2 + param_3);
    local_280 = (undefined *)CONCAT44(local_280._4_4_,fVar18);
    ppuVar5 = (undefined **)local_288;
    if (fVar9 <= fVar18) {
      ppuVar5 = (undefined **)&local_280;
    }
    ppuVar4 = &local_270;
    if (fVar18 <= fVar13) {
      ppuVar4 = ppuVar5;
    }
    auVar14 = vcmpss_avx(ZEXT416((uint)ABS(*(float *)ppuVar4 - 0.5)),ZEXT416(0x3dcccccd),2);
    uVar11 = auVar14._0_8_;
    auVar14 = vblendvps_avx(ZEXT416((uint)*(float *)ppuVar4),SUB6416(ZEXT464(0x3f000000),0),auVar14)
    ;
    auVar19 = ZEXT1664(auVar14);
  }
  FUN_1803dff30(uVar11,&local_250);
  for (; 180.0 < local_250; local_250 = local_250 + -360.0) {
  }
  for (; local_250 < -180.0; local_250 = local_250 + 360.0) {
  }
  fVar13 = ((90.0 - ABS(local_250)) * 10.0) / 90.0;
  fVar9 = local_250 - fVar13;
  iVar2 = FUN_1805f68d0(&DAT_180b8e2e0,fVar13);
  fVar13 = DAT_180b8e2d8;
  if (iVar2 != 0) {
LAB_1802ef834:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b8e32c == 0x7fffffff) {
    DAT_180b8e32c = 0x7ffffffe;
LAB_1802ef829:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_280 = DAT_180b8e2d0;
  FUN_1805f68fc(&DAT_180b8e2e0);
  iVar2 = DAT_180c6ee08;
  if ((DAT_180c6ee08 == 0) && (UVar3 = GetTickCount64(), DAT_180c6ee10 <= UVar3)) {
    local_270 = &DAT_1808fe2a0;
    iVar2 = FUN_1805f68d0(&DAT_1808fe2a0);
    if (iVar2 != 0) goto LAB_1802ef834;
    if (DAT_1808fe2ec == 0x7fffffff) {
      DAT_1808fe2ec = 0x7ffffffe;
      goto LAB_1802ef829;
    }
    if ((DAT_180c6ee08 == 0) && (DAT_180c6ee10 <= UVar3)) {
      DAT_180c6ee08 = FUN_1804174b0("C_BaseModelEntity",0x39db834b);
      if (DAT_180c6ee08 == 0) {
        uVar7 = UVar3 + 1000;
      }
      DAT_180c6ee10 = uVar7;
    }
    iVar2 = DAT_180c6ee08;
    FUN_1805f68fc(&DAT_1808fe2a0);
  }
  uVar11 = local_260;
  uVar7 = *(ulonglong *)((longlong)iVar2 + local_260);
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar7;
  fVar18 = (float)uVar7 + (float)local_280;
  auVar14 = vshufps_avx(auVar14,auVar14,0x55);
  fVar17 = auVar14._0_4_ + local_280._4_4_;
  fVar13 = fVar13 + *(float *)((longlong)iVar2 + 8 + local_260) + (auVar19._0_4_ * 12.0 - 12.0);
  auVar16 = ZEXT464((uint)(fVar9 * 0.017453292));
  auVar15 = ZEXT464((uint)(local_24c * 0.017453292));
  local_260 = uVar7;
  local_240 = fVar18;
  local_23c = fVar17;
  local_238 = fVar13;
  fVar8 = (float)FUN_180637540(fVar9 * 0.017453292);
  fVar9 = (float)FUN_180637540(auVar15._0_8_);
  fVar9 = fVar9 * fVar8;
  fVar10 = (float)FUN_180638e00(auVar15._0_8_);
  fVar10 = fVar10 * fVar8;
  fVar8 = (float)FUN_180638e00(auVar16._0_8_);
  fVar8 = -fVar8;
  local_270 = (undefined *)0xc0000000c0000000;
  local_268 = 0xc0000000;
  local_260 = 0x4000000040000000;
  local_258 = 0x40000000;
  local_280._0_4_ = fVar9 * 22.0 + fVar18;
  local_280._4_4_ = fVar10 * 22.0 + fVar17;
  local_278 = fVar8 * 22.0 + fVar13;
  uVar12 = FUN_180419410(local_280._4_4_,local_228,uVar11);
  local_298 = local_228;
  local_2a0 = &local_260;
  local_2a8 = &local_270;
  FUN_180418370(uVar12,local_1d8,&local_240,&local_280);
  *param_4 = local_154 - fVar9 * 6.0;
  param_4[1] = local_150 - fVar10 * 6.0;
  param_4[2] = local_14c - fVar8 * 6.0;
  local_288[0] = 0x443b8000;
  local_270 = (undefined *)CONCAT44(local_270._4_4_,0x41700000);
  fVar13 = DAT_180b8f950 * 0.9;
  local_280 = (undefined *)CONCAT44(local_280._4_4_,fVar13);
  ppuVar5 = &local_270;
  if (15.0 <= fVar13) {
    ppuVar5 = (undefined **)&local_280;
  }
  ppuVar4 = (undefined **)local_288;
  if (fVar13 <= 750.0) {
    ppuVar4 = ppuVar5;
  }
  fVar13 = (auVar19._0_4_ * 0.7 + 0.3) * *(float *)ppuVar4;
  fVar18 = DAT_180b8e118._4_4_ * 1.25;
  fVar17 = DAT_180b8e120 * 1.25;
  *param_5 = fVar13 * fVar9 + (float)DAT_180b8e118 * 1.25;
  param_5[1] = fVar13 * fVar10 + fVar18;
  param_5[2] = fVar13 * fVar8 + fVar17;
}



