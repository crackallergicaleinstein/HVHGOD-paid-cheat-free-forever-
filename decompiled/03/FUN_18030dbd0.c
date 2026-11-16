// FUN_18030dbd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030dbd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18030dbd0(float *param_1,longlong param_2,longlong param_3,undefined8 param_4,char *param_5
                  )

{
  float fVar1;
  undefined1 auVar2 [16];
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  ULONGLONG UVar10;
  longlong lVar11;
  float *pfVar12;
  float *pfVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  undefined1 in_ZMM3 [64];
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auStack_128 [32];
  longlong local_108;
  longlong local_100;
  longlong local_f8 [2];
  undefined4 **local_e8;
  undefined8 local_e0;
  undefined4 *local_d8;
  longlong local_d0;
  undefined4 local_c8 [2];
  longlong local_c0;
  undefined4 local_b8 [2];
  longlong local_b0;
  undefined4 local_a8 [2];
  longlong local_a0;
  undefined4 local_98 [2];
  longlong local_90;
  ulonglong local_88;
  
  local_88 = DAT_1808d5f00 ^ (ulonglong)auStack_128;
  auVar21 = ZEXT1664(in_ZMM3._0_16_);
  *param_1 = 0.015625;
  param_1[1] = 800.0;
  param_1[2] = 12.0;
  param_1[3] = 30.0;
  param_1[4] = 250.0;
  param_1[5] = 1.0;
  param_1[6] = 0.7;
  param_1[7] = 0.5;
  param_1[8] = 1.0;
  param_1[9] = 1.0;
  param_1[10] = 0.0;
  local_108 = param_3;
  local_f8[0] = param_2;
  if ((DAT_180cd3fe0 & 1) == 0) {
    DAT_180cd3fe0 = DAT_180cd3fe0 | 1;
    local_c8[0] = 0x58e37709;
    local_c0 = 0;
    local_d8 = local_c8;
    local_d0 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_d8);
    DAT_180cd3fe8 = local_c0;
  }
  lVar11 = DAT_180cd3fe8;
  if ((DAT_180cd3ff0 & 1) == 0) {
    DAT_180cd3ff0 = DAT_180cd3ff0 | 1;
    local_b8[0] = 0x2f5504fa;
    local_b0 = 0;
    local_d8 = local_b8;
    local_d0 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_d8);
    DAT_180cd3ff8 = local_b0;
  }
  lVar4 = DAT_180cd3ff8;
  if ((DAT_180cd4000 & 1) == 0) {
    DAT_180cd4000 = DAT_180cd4000 | 1;
    local_a8[0] = 0xa239062b;
    local_a0 = 0;
    local_d8 = local_a8;
    local_d0 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_d8);
    DAT_180cd4008 = local_a0;
  }
  lVar5 = DAT_180cd4008;
  if ((DAT_180cd4010 & 1) == 0) {
    DAT_180cd4010 = DAT_180cd4010 | 1;
    local_98[0] = 0x1da56b38;
    local_90 = 0;
    local_d8 = local_98;
    local_d0 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_d8);
    local_100 = local_90;
  }
  else {
    local_100 = DAT_180cd4018;
  }
  DAT_180cd4018 = local_100;
  if ((DAT_180cd4020 & 1) == 0) {
    DAT_180cd4020 = DAT_180cd4020 | 1;
    local_d8 = (undefined4 *)CONCAT44(local_d8._4_4_,0x2bf43f77);
    local_d0 = 0;
    local_e8 = &local_d8;
    local_e0 = 1;
    FUN_18044c9c0(DAT_180c64058,&local_e8);
    DAT_180cd4028 = local_d0;
  }
  lVar6 = DAT_180cd4028;
  iVar9 = DAT_180c6f490;
  auVar20 = ZEXT464(0x44480000);
  if (lVar11 == 0) {
    auVar18 = ZEXT1664(auVar20._0_16_);
  }
  else {
    auVar18 = ZEXT464(*(uint *)(lVar11 + 0x58));
  }
  uVar15 = 0xffffffffffffffff;
  if ((DAT_180c6f490 == 0) && (UVar10 = GetTickCount64(), DAT_180c6f488 <= UVar10)) {
    local_e8 = (undefined4 **)&DAT_1808ffe70;
    iVar9 = FUN_1805f68d0(&DAT_1808ffe70);
    if (iVar9 != 0) goto LAB_18030e203;
    if (DAT_1808ffebc == 0x7fffffff) {
      DAT_1808ffebc = 0x7ffffffe;
      goto LAB_18030e1f8;
    }
    if ((DAT_180c6f490 == 0) && (DAT_180c6f488 <= UVar10)) {
      DAT_180c6f490 = FUN_1804174b0("C_BaseEntity",0x328a3947);
      DAT_180c6f488 = 0xffffffffffffffff;
      if (DAT_180c6f490 == 0) {
        DAT_180c6f488 = UVar10 + 1000;
      }
    }
    iVar9 = DAT_180c6f490;
    FUN_1805f68fc(&DAT_1808ffe70);
  }
  auVar17 = ZEXT464(*(uint *)(iVar9 + local_f8[0]));
  sVar8 = thunk_FUN_180624430(auVar18._0_8_);
  auVar19 = ZEXT864(0);
  if ((0 < sVar8) || (auVar18._0_4_ <= 0.0)) {
    auVar18 = ZEXT1664(auVar20._0_16_);
  }
  sVar8 = thunk_FUN_180624430(auVar17._0_8_);
  fVar16 = auVar17._0_4_;
  auVar20 = ZEXT464(0x3f800000);
  if ((0 < sVar8) || (fVar16 <= auVar19._0_4_)) {
    fVar16 = 1.0;
  }
  *param_1 = 0.015625;
  param_1[1] = fVar16 * auVar18._0_4_;
  if (lVar4 == 0) {
    fVar16 = 12.0;
  }
  else {
    fVar16 = *(float *)(lVar4 + 0x58);
  }
  param_1[2] = fVar16;
  if (lVar5 == 0) {
    fVar16 = 30.0;
  }
  else {
    fVar16 = *(float *)(lVar5 + 0x58);
  }
  param_1[3] = fVar16;
  iVar9 = DAT_180c6f480;
  if (DAT_180c6f480 == 0) {
    UVar10 = GetTickCount64();
    if (UVar10 < DAT_180c6f478) {
      iVar9 = 0;
    }
    else {
      local_e8 = (undefined4 **)&DAT_1808ffe20;
      iVar9 = FUN_1805f68d0(&DAT_1808ffe20);
      if (iVar9 != 0) {
LAB_18030e203:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808ffe6c == 0x7fffffff) {
        DAT_1808ffe6c = 0x7ffffffe;
LAB_18030e1f8:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6f480 == 0) && (DAT_180c6f478 <= UVar10)) {
        DAT_180c6f480 = FUN_1804174b0("CPlayer_MovementServices",0x468f90f2);
        if (DAT_180c6f480 == 0) {
          uVar15 = UVar10 + 1000;
        }
        DAT_180c6f478 = uVar15;
      }
      iVar9 = DAT_180c6f480;
      FUN_1805f68fc(&DAT_1808ffe20);
    }
  }
  lVar11 = FUN_18017ea70();
  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
  lVar11 = iVar9 + local_108;
  uVar14 = 0;
  if (lVar11 != 0) {
    local_108 = CONCAT44(local_108._4_4_,auVar19._0_4_);
    cVar7 = FUN_1804514f0(&local_108,lVar11,4);
    if (cVar7 == '\0') {
      uVar14 = 0;
    }
    else {
      uVar14 = 1;
    }
  }
  auVar18 = ZEXT464((uint)(float)local_108);
  lVar11 = FUN_18017ea70();
  if (*(int *)(lVar11 + 4) != 0) {
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
  }
  auVar2 = vpcmpeqd_avx(ZEXT416(uVar14),SUB6416(ZEXT464(0),0));
  auVar2 = vblendvps_avx(auVar18._0_16_,auVar19._0_16_,auVar2);
  auVar18 = ZEXT1664(auVar2);
  if (local_100 == 0) {
    auVar17 = ZEXT464(0x43a00000);
  }
  else {
    auVar17 = ZEXT464(*(uint *)(local_100 + 0x58));
  }
  sVar8 = thunk_FUN_180624430(auVar2._0_8_);
  if ((0 < sVar8) || (auVar18._0_4_ <= auVar19._0_4_)) {
    auVar18 = ZEXT1664(auVar17._0_16_);
  }
  sVar8 = thunk_FUN_180624430(auVar17._0_8_);
  if ((sVar8 < 1) && (auVar19._0_4_ < auVar17._0_4_)) {
    auVar2 = vminss_avx(auVar17._0_16_,auVar18._0_16_);
    auVar18 = ZEXT1664(auVar2);
  }
  param_1[4] = auVar18._0_4_;
  sVar8 = thunk_FUN_180624430(auVar21._0_8_);
  if ((0 < sVar8) || (fVar16 = auVar21._0_4_, auVar21._0_4_ <= auVar19._0_4_)) {
    fVar16 = auVar20._0_4_;
  }
  param_1[5] = fVar16;
  if (lVar6 == 0) {
    fVar16 = 0.7;
  }
  else {
    fVar16 = *(float *)(lVar6 + 0x58);
  }
  param_1[6] = fVar16;
  if (*param_5 != '\0') {
    param_1[1] = *(float *)(param_5 + 4);
    param_1[7] = *(float *)(param_5 + 8);
    param_1[8] = *(float *)(param_5 + 0xc);
  }
  if (param_5[0x10] != '\0') {
    fVar1 = *param_1 * param_1[1] * 0.5;
    fVar16 = fVar1 * 3.0;
    local_100 = CONCAT44(local_100._4_4_,fVar16);
    fVar1 = fVar1 * -3.0;
    local_108 = CONCAT44(local_108._4_4_,fVar1);
    fVar3 = *(float *)(param_5 + 0x14) - -((auVar20._0_4_ - param_1[7]) * *param_1 * param_1[1]);
    local_f8[0] = CONCAT44(local_f8[0]._4_4_,fVar3);
    pfVar13 = (float *)&local_108;
    if (fVar1 <= fVar3) {
      pfVar13 = (float *)local_f8;
    }
    pfVar12 = (float *)&local_100;
    if (fVar3 <= fVar16) {
      pfVar12 = pfVar13;
    }
    param_1[10] = *pfVar12;
  }
}



