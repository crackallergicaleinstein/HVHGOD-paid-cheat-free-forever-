// FUN_18030a970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030a970 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18030a970(undefined4 *param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  short sVar3;
  int iVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  uint uVar9;
  undefined1 extraout_var [56];
  undefined1 auVar10 [64];
  float fVar11;
  undefined1 auVar12 [64];
  undefined1 auVar13 [64];
  undefined1 auStack_d8 [32];
  undefined1 local_b8 [16];
  undefined ***local_a8;
  undefined8 local_a0;
  undefined **local_98;
  longlong local_90;
  undefined *local_88;
  longlong local_80;
  undefined4 local_78 [2];
  longlong local_70;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  *param_1 = 0x437a0000;
  param_1[1] = 0x41f00000;
  param_1[2] = 0x41400000;
  param_1[3] = 0x3f800000;
  param_1[4] = 0x3c800000;
  if ((DAT_180c6f4e8 & 1) == 0) {
    DAT_180c6f4e8 = DAT_180c6f4e8 | 1;
    local_88 = (undefined *)CONCAT44(local_88._4_4_,0x2f5504fa);
    local_80 = 0;
    local_98 = &local_88;
    local_90 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_98);
    DAT_180c6f4c8 = local_80;
  }
  auVar10 = ZEXT864(0);
  if (DAT_180c6f4c8 != 0) {
    fVar11 = *(float *)(DAT_180c6f4c8 + 0x58);
    sVar3 = thunk_FUN_180624430(fVar11);
    if ((sVar3 < 1) && (auVar10._0_4_ < fVar11)) {
      param_1[2] = fVar11;
    }
  }
  if ((DAT_180c6f4c0 & 1) == 0) {
    DAT_180c6f4c0 = DAT_180c6f4c0 | 1;
    local_78[0] = 0xa239062b;
    local_70 = 0;
    local_98 = (undefined **)local_78;
    local_90 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_98);
    DAT_180c6f4b8 = local_70;
  }
  if (DAT_180c6f4b8 != 0) {
    fVar11 = *(float *)(DAT_180c6f4b8 + 0x58);
    sVar3 = thunk_FUN_180624430(fVar11);
    if ((sVar3 < 1) && (auVar10._0_4_ < fVar11)) {
      param_1[1] = fVar11;
    }
  }
  auVar13 = ZEXT464(0x437a0000);
  if ((DAT_180c6f4b0 & 1) == 0) {
    DAT_180c6f4b0 = DAT_180c6f4b0 | 1;
    local_98 = (undefined **)CONCAT44(local_98._4_4_,0x1da56b38);
    local_90 = 0;
    local_a8 = &local_98;
    local_a0 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_a8);
    DAT_180c6f4e0 = local_90;
  }
  if (DAT_180c6f4e0 != 0) {
    auVar12 = ZEXT464(*(uint *)(DAT_180c6f4e0 + 0x58));
    sVar3 = thunk_FUN_180624430(*(uint *)(DAT_180c6f4e0 + 0x58));
    if (sVar3 < 1) {
      auVar1 = vcmpss_avx(auVar10._0_16_,auVar12._0_16_,1);
      auVar1 = vblendvps_avx(auVar13._0_16_,auVar12._0_16_,auVar1);
      auVar13 = ZEXT1664(auVar1);
    }
  }
  if (param_2 != 0) {
    iVar4 = DAT_180c6f4d8;
    if (DAT_180c6f4d8 == 0) {
      UVar5 = GetTickCount64();
      if (UVar5 < DAT_180c6f4d0) {
        iVar4 = 0;
      }
      else {
        local_88 = &DAT_1808fff60;
        iVar4 = FUN_1805f68d0(&DAT_1808fff60);
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808fffac == 0x7fffffff) {
          DAT_1808fffac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c6f4d8 == 0) && (DAT_180c6f4d0 <= UVar5)) {
          DAT_180c6f4d8 = FUN_1804174b0("CPlayer_MovementServices",0x468f90f2);
          if (DAT_180c6f4d8 == 0) {
            DAT_180c6f4d0 = UVar5 + 1000;
          }
          else {
            DAT_180c6f4d0 = 0xffffffffffffffff;
          }
        }
        iVar4 = DAT_180c6f4d8;
        FUN_1805f68fc(&DAT_1808fff60);
      }
    }
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    uVar9 = 0;
    if (iVar4 + param_2 != 0) {
      local_b8._0_4_ = auVar10._0_4_;
      cVar2 = FUN_1804514f0(local_b8,iVar4 + param_2,4);
      if (cVar2 == '\0') {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
    }
    auVar12 = ZEXT464((uint)local_b8._0_4_);
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    auVar1 = vpcmpeqd_avx(ZEXT416(uVar9),SUB6416(ZEXT464(0),0));
    auVar1 = vblendvps_avx(auVar12._0_16_,auVar10._0_16_,auVar1);
    auVar12 = ZEXT1664(auVar1);
    sVar3 = thunk_FUN_180624430(auVar1._0_8_);
    if ((sVar3 < 1) && (auVar10._0_4_ < auVar12._0_4_)) {
      auVar13._0_8_ = FUN_1806156a0(auVar12._0_8_,auVar13._0_8_);
      auVar13._8_56_ = extraout_var;
      auVar13 = ZEXT1664(auVar13._0_16_);
    }
  }
  *param_1 = auVar13._0_4_;
  auVar1 = vpcmpeqd_avx(ZEXT116(DAT_180b8e111),SUB6416(ZEXT464(0),0));
  auVar1 = vblendvps_avx(ZEXT416(DAT_180b8e194),ZEXT416(DAT_180b8e154),auVar1);
  auVar13 = ZEXT1664(auVar1);
  local_b8._4_4_ = auVar1._0_4_;
  sVar3 = thunk_FUN_180624430(auVar1._0_8_);
  if (sVar3 < 1) {
    fVar11 = auVar13._0_4_;
    local_b8._0_4_ = auVar10._0_4_;
    if ((float)local_b8._0_4_ < fVar11) {
      local_88 = (undefined *)CONCAT44(local_88._4_4_,0x3f800000);
      ppuVar8 = (undefined **)local_b8;
      if ((float)local_b8._0_4_ <= fVar11) {
        ppuVar8 = (undefined **)(local_b8 + 4);
      }
      ppuVar7 = &local_88;
      if (fVar11 <= 1.0) {
        ppuVar7 = ppuVar8;
      }
      param_1[3] = *(undefined4 *)ppuVar7;
    }
  }
}



