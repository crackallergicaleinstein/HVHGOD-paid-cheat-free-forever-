// FUN_180277680 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180277680 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180277680(undefined8 param_1,undefined8 *param_2,float param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ULONGLONG UVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  int iVar7;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined1 extraout_var [56];
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  float fVar18;
  float fVar19;
  undefined1 auVar20 [64];
  float fVar21;
  undefined1 auVar22 [64];
  undefined1 auStack_188 [32];
  undefined4 local_168;
  float local_164;
  float local_160;
  float local_15c;
  undefined4 local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  undefined8 local_140;
  undefined ***local_128;
  undefined8 local_120;
  undefined **local_118;
  longlong local_110;
  undefined *local_108;
  longlong local_100;
  undefined4 local_f8 [2];
  longlong local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_188;
  local_140 = *param_2;
  iVar7 = 0;
  local_164 = param_3;
  if ((DAT_180cd3ce0 & 1) == 0) {
    DAT_180cd3ce0 = DAT_180cd3ce0 | 1;
    local_108 = (undefined *)CONCAT44(local_108._4_4_,0xad8af3df);
    local_100 = 0;
    local_118 = &local_108;
    local_110 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_118);
    DAT_180cd3ce8 = local_100;
  }
  local_154 = *(float *)(DAT_180cd3ce8 + 0x58);
  if ((DAT_180cd3cf0 & 1) == 0) {
    DAT_180cd3cf0 = DAT_180cd3cf0 | 1;
    local_f8[0] = 0xa84213b4;
    local_f0 = 0;
    local_118 = (undefined **)local_f8;
    local_110 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_118);
    DAT_180cd3cf8 = local_f0;
  }
  local_158 = *(undefined4 *)(DAT_180cd3cf8 + 0x58);
  if ((DAT_180cd3d00 & 1) == 0) {
    DAT_180cd3d00 = DAT_180cd3d00 | 1;
    local_118 = (undefined **)CONCAT44(local_118._4_4_,0x16cc57ac);
    local_110 = 0;
    local_128 = &local_118;
    local_120 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_128);
    DAT_180cd3d08 = local_110;
  }
  cVar2 = DAT_180cc9371;
  fVar12 = *(float *)(DAT_180cd3d08 + 0x58);
  local_160 = DAT_180b8e154;
  param_3 = param_3 * 0.34;
  local_168 = 0x437a0000;
  fVar11 = DAT_180b8e154;
  local_15c = fVar12;
  local_148 = param_3;
  if ((DAT_180cc9371 != '\0') && (param_4 != 0)) {
    uVar8 = 0xffffffffffffffff;
    iVar3 = DAT_180c64cac;
    if (DAT_180c64cac == 0) {
      UVar4 = GetTickCount64();
      if (UVar4 < DAT_180c64c98) {
        iVar3 = 0;
      }
      else {
        local_108 = &DAT_1808f0340;
        iVar3 = FUN_1805f68d0(&DAT_1808f0340);
        if (iVar3 != 0) goto LAB_180277c28;
        if (DAT_1808f038c == 0x7fffffff) {
          DAT_1808f038c = 0x7ffffffe;
          goto LAB_180277c3d;
        }
        if ((DAT_180c64cac == 0) && (DAT_180c64c98 <= UVar4)) {
          DAT_180c64cac = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
          if (DAT_180c64cac == 0) {
            DAT_180c64c98 = UVar4 + 1000;
          }
          else {
            DAT_180c64c98 = 0xffffffffffffffff;
          }
        }
        iVar3 = DAT_180c64cac;
        FUN_1805f68fc(&DAT_1808f0340);
      }
    }
    lVar1 = *(longlong *)(iVar3 + param_4);
    if (lVar1 != 0) {
      iVar3 = DAT_180c64ca8;
      if (DAT_180c64ca8 == 0) {
        UVar4 = GetTickCount64();
        if (UVar4 < DAT_180c64ca0) {
          iVar3 = 0;
        }
        else {
          local_108 = &DAT_1808f02e0;
          iVar3 = FUN_1805f68d0(&DAT_1808f02e0);
          if (iVar3 != 0) {
LAB_180277c28:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808f032c == 0x7fffffff) {
            DAT_1808f032c = 0x7ffffffe;
LAB_180277c3d:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c64ca8 == 0) && (DAT_180c64ca0 <= UVar4)) {
            DAT_180c64ca8 = FUN_1804174b0("CPlayer_MovementServices",0x468f90f2);
            if (DAT_180c64ca8 == 0) {
              uVar8 = UVar4 + 1000;
            }
            DAT_180c64ca0 = uVar8;
          }
          iVar3 = DAT_180c64ca8;
          FUN_1805f68fc(&DAT_1808f02e0);
        }
      }
      local_168 = *(undefined4 *)(iVar3 + lVar1);
    }
  }
  auVar17 = ZEXT864(0);
  fVar21 = 0.015625;
  auVar20 = ZEXT464(0x3f800000);
  auVar22 = ZEXT464(0x40a00000);
  fVar18 = local_140._4_4_;
  fVar19 = (float)local_140;
  while( true ) {
    fVar10 = fVar18 * fVar18 + fVar19 * fVar19;
    auVar16 = ZEXT464((uint)fVar10);
    auVar15 = ZEXT416((uint)fVar10);
    fVar9 = auVar17._0_4_;
    if (fVar10 != fVar9) {
      if (fVar10 < 0.0) {
        fVar9 = (float)FUN_18061e150(fVar10);
        auVar15 = auVar16._0_16_;
      }
      else {
        fVar9 = SQRT(fVar10);
      }
    }
    if (((fVar9 <= param_3) || (0xe < iVar7)) || (fVar10 = auVar15._0_4_, fVar10 == auVar17._0_4_))
    break;
    if (fVar10 < 0.0) {
      auVar16._0_8_ = FUN_18061e150(auVar15._0_8_);
      auVar16._8_56_ = extraout_var;
      auVar14 = auVar16._0_16_;
    }
    else {
      auVar14._0_4_ = SQRT(fVar10);
      auVar14._4_12_ = auVar15._4_12_;
    }
    auVar16 = ZEXT1664(auVar14);
    if (auVar14._0_4_ <= auVar17._0_4_) {
    }
    fVar10 = (float)FUN_180615630(auVar14._0_8_,local_158);
    uVar13 = FUN_180615630(auVar16._0_4_ - fVar10 * fVar11 * local_154 * fVar21,auVar17._0_8_);
    if (cVar2 != '\0') {
      fVar11 = (float)FUN_1806156a0(auVar20._0_8_,local_164 / 250.0);
      fVar10 = (float)FUN_180615630(0x437a0000,local_168);
      fVar11 = fVar10 * fVar11 * 0.52 - auVar22._0_4_;
      if (fVar11 < (float)uVar13) {
        fVar12 = (float)FUN_180615630(auVar17._0_8_,(float)uVar13 - fVar11);
        fVar11 = (float)FUN_180615630(0x3c23d70a,auVar22._0_8_);
        fVar10 = auVar20._0_4_;
        local_14c = fVar10 - fVar12 / fVar11;
        local_108 = (undefined *)CONCAT44(local_108._4_4_,fVar10);
        local_150 = auVar17._0_4_;
        ppuVar6 = (undefined **)&local_150;
        if (auVar17._0_4_ <= local_14c) {
          ppuVar6 = (undefined **)&local_14c;
        }
        ppuVar5 = &local_108;
        if (local_14c <= fVar10) {
          ppuVar5 = ppuVar6;
        }
        fVar12 = local_15c * *(float *)ppuVar5;
      }
    }
    fVar12 = (float)FUN_1806156a0(fVar12 * local_164 * local_160 * fVar21,uVar13);
    fVar12 = (float)FUN_180615630((float)uVar13 - fVar12,auVar17._0_8_);
    fVar12 = fVar12 / auVar16._0_4_;
    fVar19 = fVar19 * fVar12;
    fVar18 = fVar18 * fVar12;
    iVar7 = iVar7 + 1;
    param_3 = local_148;
    fVar11 = local_160;
    fVar12 = local_15c;
  }
}



