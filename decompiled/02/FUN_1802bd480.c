// FUN_1802bd480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802bd480 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802bd480(void)

{
  uint uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined1 extraout_var [56];
  undefined1 auVar14 [16];
  float fVar15;
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  float fVar18;
  undefined1 auVar19 [64];
  longlong in_stack_00000028;
  undefined1 auStack_318 [32];
  undefined8 local_2f8;
  undefined4 local_2f0;
  float local_2e8 [2];
  float local_2e0 [2];
  float local_2d8 [6];
  undefined *local_2c0;
  undefined4 uStack_2b8;
  uint uStack_2b4;
  float local_2b0;
  float local_2ac;
  float local_2a8;
  undefined1 local_2a0 [16];
  longlong local_290;
  float local_288;
  float local_284;
  float local_280;
  undefined8 local_278;
  longlong local_270;
  longlong local_268;
  uint local_258 [120];
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_318;
  if ((DAT_180b0d4c8 == '\0') && (DAT_180b0d530 == '\0')) {
    DAT_180c71c38 = 0;
    DAT_180c71c40 = 0;
    DAT_180c71c48 = 0.0;
    DAT_180c71c4c = 0.0;
  }
  if (((DAT_180c653f0 != '\0') && (DAT_1808f2c58 == 8)) &&
     (iVar4 = memcmp(DAT_1808f2c50,"velocity",8), iVar4 == 0)) {
  }
  auVar17 = ZEXT864(0);
  iVar4 = DAT_180c6e7a0;
  if (DAT_180c6e7a0 == 0) {
    UVar5 = GetTickCount64();
    if (DAT_180c6e798 <= UVar5) {
      local_2f8 = (float *)&DAT_1808f5380;
      iVar4 = FUN_1805f68d0(&DAT_1808f5380);
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f53cc == 0x7fffffff) {
        DAT_1808f53cc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c6e7a0 == 0) && (DAT_180c6e798 <= UVar5)) {
        DAT_180c6e7a0 = FUN_1804174b0("C_BaseEntity",0x16c096cc);
        if (DAT_180c6e7a0 == 0) {
          DAT_180c6e798 = UVar5 + 1000;
        }
        else {
          DAT_180c6e798 = 0xffffffffffffffff;
        }
      }
      iVar4 = DAT_180c6e7a0;
      FUN_1805f68fc(&DAT_1808f5380);
      if (iVar4 != 0) goto LAB_1802bd5f2;
    }
  }
  else {
LAB_1802bd5f2:
    if (iVar4 + in_stack_00000028 != 0) {
      local_2f0 = auVar17._0_4_;
      local_2f8 = (float *)CONCAT44(local_2f0,local_2f0);
      lVar6 = FUN_18017ea70();
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
      cVar2 = FUN_1804514c0(&local_2f8,iVar4 + in_stack_00000028,0xc);
      if (cVar2 == '\0') {
        uStack_2b4 = (uint)uStack_2b4._1_3_ << 8;
      }
      else {
        local_2c0 = (undefined *)local_2f8;
        uStack_2b8 = local_2f0;
        uStack_2b4 = CONCAT31(uStack_2b4._1_3_,1);
      }
      lVar6 = FUN_18017ea70();
      if (*(int *)(lVar6 + 4) != 0) {
        *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
      }
      goto LAB_1802bd662;
    }
  }
  uStack_2b4 = uStack_2b4 & 0xffffff00;
LAB_1802bd662:
  auVar14._8_4_ = uStack_2b8;
  auVar14._0_8_ = local_2c0;
  auVar14._12_4_ = uStack_2b4;
  if ((char)uStack_2b4 != '\0') {
    auVar14 = vshufps_avx(auVar14,auVar14,0x55);
    fVar15 = auVar14._0_4_ * auVar14._0_4_ + SUB84(local_2c0,0) * SUB84(local_2c0,0);
    if (fVar15 == auVar17._0_4_) {
      auVar16 = ZEXT864(0);
    }
    else if (fVar15 < 0.0) {
      auVar16._0_8_ = FUN_18061e150(fVar15);
      auVar16._8_56_ = extraout_var;
      auVar16 = ZEXT1664(auVar16._0_16_);
    }
    else {
      auVar16 = ZEXT464((uint)SQRT(fVar15));
    }
    fVar18 = 10000.0;
    local_2f8._0_4_ = 10000.0;
    local_2e8[0] = auVar17._0_4_;
    sVar3 = thunk_FUN_180624430(auVar16._0_8_);
    auVar14 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar3),SUB6416(ZEXT464(0),0));
    auVar14 = vblendvps_avx(auVar16._0_16_,auVar17._0_16_,auVar14);
    auVar19 = ZEXT1664(auVar14);
    local_2e0[0] = auVar14._0_4_;
    fVar15 = 0.1;
    local_2d8[4] = 0.1;
    local_2d8[0] = auVar17._0_4_;
    auVar16 = ZEXT464(DAT_180bbae00);
    sVar3 = thunk_FUN_180624430(DAT_180bbae00);
    auVar14 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar3),SUB6416(ZEXT464(0),0));
    auVar14 = vblendvps_avx(auVar16._0_16_,auVar17._0_16_,auVar14);
    local_2d8[2] = auVar14._0_4_;
    pfVar8 = local_2d8;
    if (auVar17._0_4_ <= local_2d8[2]) {
      pfVar8 = local_2d8 + 2;
    }
    pfVar7 = local_2d8 + 4;
    if (local_2d8[2] <= fVar15) {
      pfVar7 = pfVar8;
    }
    fVar15 = *pfVar7;
    pfVar8 = local_2e8;
    if (auVar17._0_4_ <= auVar19._0_4_) {
      pfVar8 = local_2e0;
    }
    pfVar7 = (float *)&local_2f8;
    if (auVar19._0_4_ <= fVar18) {
      pfVar7 = pfVar8;
    }
    auVar16 = ZEXT464(0x3f800000);
    auVar14 = vminss_avx(auVar16._0_16_,ZEXT416((uint)(fVar15 * 14.0)));
    DAT_180c71c48 = (*pfVar7 - DAT_180c71c48) * auVar14._0_4_ + DAT_180c71c48;
    *(float *)(&DAT_180c71a58 + DAT_180c71c40 * 4) = DAT_180c71c48;
    uVar9 = (DAT_180c71c40 + 1) % 0x78;
    uVar10 = DAT_180c71c38 + 1;
    if (0x78 < uVar10) {
      uVar10 = 0x78;
    }
    DAT_180c71c38 = uVar10;
    DAT_180c71c40 = uVar9;
    FUN_18063ab10(local_258,0,0x1e0);
    local_2a8 = auVar17._0_4_;
    auVar14 = SUB6416(ZEXT464(0x42480000),0);
    uVar11 = 0;
    if (uVar10 != 0) {
      uVar9 = (uVar9 - uVar10) + 0x78;
      do {
        uVar1 = *(uint *)(&DAT_180c71a58 + (uVar9 % 0x78) * 4);
        local_258[uVar11] = uVar1;
        auVar14 = vmaxss_avx(ZEXT416(uVar1),auVar14);
        uVar11 = uVar11 + 1;
        uVar9 = uVar9 + 1;
      } while (uVar11 < uVar10);
    }
    auVar13._0_4_ = auVar14._0_4_ / 50.0;
    auVar13._4_12_ = auVar14._4_12_;
    auVar13 = vroundss_avx(ZEXT816(0),auVar13,2);
    auVar14 = vminss_avx(auVar16._0_16_,ZEXT416((uint)(fVar15 * 6.0)));
    DAT_180c71c4c = (auVar13._0_4_ * 50.0 - DAT_180c71c4c) * auVar14._0_4_ + DAT_180c71c4c;
    local_2b0 = DAT_180c71c48;
    local_2ac = DAT_180c71c4c;
    if ((DAT_180b0d5c4 != '\0') && (DAT_180b0d5c5 != '\0')) {
      fVar15 = 2.0;
      local_2e8[0] = 2.0;
      fVar18 = 0.05;
      local_2f8._0_4_ = 0.05;
      auVar17 = ZEXT464(DAT_180b0d5c8);
      sVar3 = thunk_FUN_180624430(DAT_180b0d5c8);
      auVar14 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar3),SUB6416(ZEXT464(0),0));
      auVar14 = vblendvps_avx(auVar17._0_16_,SUB6416(ZEXT464(0x3eb33333),0),auVar14);
      auVar17 = ZEXT1664(auVar14);
      local_2e0[0] = auVar14._0_4_;
      UVar5 = GetTickCount64();
      pfVar8 = (float *)&local_2f8;
      if (fVar18 <= auVar17._0_4_) {
        pfVar8 = local_2e0;
      }
      pfVar7 = local_2e8;
      if (auVar17._0_4_ <= fVar15) {
        pfVar7 = pfVar8;
      }
      dVar12 = (double)FUN_18060b150((double)UVar5 * 0.001 * (double)*pfVar7,0x401921fb53c8d4f1);
      local_2a8 = (float)dVar12;
      uVar10 = DAT_180c71c38;
    }
    local_2a0 = (undefined1  [16])0x0;
    local_2a0._0_8_ = 0;
    local_268 = 0;
    local_290 = 0;
    uVar9 = (longlong)(uVar10 * 4) >> 2;
    if (uVar9 == 0) {
      local_2a0._8_8_ = 0;
      local_270 = local_2a0._8_8_;
    }
    else {
      if (0x3fffffffffffffff < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      local_2a0._8_8_ = FUN_18015bca0(uVar9 * 4);
      local_2a0._0_8_ = local_2a0._8_8_;
      lVar6 = uVar9 * 4 + local_2a0._8_8_;
      local_290 = lVar6;
      FUN_18063aed0(local_2a0._8_8_,local_258,uVar10 * 4);
      local_268 = local_290;
      local_270 = lVar6;
    }
    local_278 = local_2a0._0_8_;
    local_288 = local_2b0;
    local_284 = local_2ac;
    local_290 = 0;
    local_2a0 = ZEXT816(0);
    local_2f8 = &local_288;
    local_280 = local_2a8;
    iVar4 = FUN_1805f68d0(&DAT_1808e6940);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808e698c == 0x7fffffff) {
      DAT_1808e698c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    FUN_18056c240(&DAT_1808e6910,&local_288);
    FUN_1805f68fc(&DAT_1808e6940);
    FUN_180159650(&local_278);
    FUN_180159650(local_2a0);
  }
}



