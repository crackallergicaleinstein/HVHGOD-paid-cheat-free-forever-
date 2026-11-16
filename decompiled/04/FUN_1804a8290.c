// FUN_1804a8290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a8290 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1804a8290(uint param_1,undefined8 *param_2,undefined8 param_3,float *param_4,float param_5)

{
  int *piVar1;
  undefined8 *puVar2;
  float fVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  longlong lVar8;
  longlong lVar9;
  char cVar10;
  byte bVar11;
  char cVar12;
  int iVar13;
  ulonglong uVar14;
  float *pfVar15;
  longlong lVar16;
  short sVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  undefined1 uVar21;
  uint uVar22;
  float fVar23;
  undefined1 in_ZMM2 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  float fVar26;
  undefined1 auVar27 [64];
  float fVar28;
  float fVar29;
  undefined1 auVar30 [64];
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined4 local_110;
  float local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  ulonglong local_d0;
  
  bVar11 = DAT_180bbecdd;
  cVar10 = DAT_180bbecdc;
  lVar16 = DAT_180bb8ae8;
  local_d0 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  auVar30 = ZEXT1664(in_ZMM2._0_16_);
  DAT_180bbecdc = 0;
  DAT_180bbecdd = 0;
  if (*(int *)(DAT_180bb8ae8 + 0x1ff8) <= *(int *)(DAT_180bb8ae8 + 0x2008)) {
    DAT_180bbecdc = 0;
    DAT_180bbecdd = 0;
  }
  if (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
               *(longlong *)(DAT_180bb8ae8 + 0x2000)) != param_1) {
    DAT_180bbecdc = 0;
    DAT_180bbecdd = 0;
  }
  fVar28 = 6.0;
  fVar29 = 0.0;
  if (param_5 < 0.0) {
    param_5 = DAT_180b0a41c * 6.0;
  }
  auVar27 = ZEXT464((uint)param_5);
  local_f0 = *(undefined8 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x1c0);
  uVar14 = (ulonglong)param_1 ^ 0xcdab8c75b9187834;
  uVar14 = (uVar14 >> 0x1e ^ uVar14) * -0x40a7b892e31b1a47;
  uVar14 = (uVar14 >> 0x1b ^ uVar14) * -0x6b2fb644ecceee15;
  uVar14 = uVar14 >> 0x1f ^ uVar14;
  uVar22 = (uint)(uVar14 >> 0x20) ^ (uint)uVar14;
  fVar26 = DAT_180b0a41c;
  fVar23 = (float)FUN_1804b1470(local_f0,uVar22,0);
  fVar3 = *(float *)(lVar16 + 0x34);
  fVar28 = fVar26 * fVar28;
  auVar5 = vmaxss_avx(ZEXT416((uint)(fVar26 * 120.0)),
                      ZEXT416((uint)(*(float *)(lVar16 + 0x30) - (fVar28 + fVar28))));
  auVar5 = vminss_avx(auVar30._0_16_,auVar5);
  auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar5._0_4_ + 0.5)),1);
  uVar4 = *param_2;
  local_e0._0_4_ = (float)uVar4;
  if (DAT_1808e4f80 < fVar29) {
    auVar25 = ZEXT416((uint)(float)local_e0);
  }
  else {
    auVar25 = vmaxss_avx(ZEXT416((uint)(fVar26 * 120.0)),ZEXT416((uint)(DAT_1808e4f80 - fVar28)));
    auVar5 = vminss_avx(auVar5,auVar25);
    auVar25 = vminss_avx(ZEXT416((uint)(float)local_e0),
                         ZEXT416((uint)(DAT_1808e4f80 - auVar5._0_4_)));
  }
  auVar6 = vmaxss_avx(ZEXT416((uint)(fVar26 * 80.0)),ZEXT416((uint)(fVar3 - (fVar28 + fVar28))));
  auVar6 = vminss_avx(ZEXT416((uint)(fVar26 * 400.0)),auVar6);
  auVar30 = ZEXT1664(auVar6);
  auVar24 = ZEXT416((uint)fVar28);
  fVar29 = auVar5._0_4_;
  auVar5 = auVar24;
  if (fVar28 <= auVar25._0_4_) {
    auVar5 = vmaxss_avx(auVar24,ZEXT416((uint)((*(float *)(lVar16 + 0x30) - fVar28) - fVar29)));
    auVar5 = vminss_avx(auVar5,auVar25);
  }
  local_e0._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
  if (fVar28 <= local_e0._4_4_) {
    auVar25 = vmaxss_avx(auVar24,ZEXT416((uint)((fVar3 - fVar28) - fVar23)));
    auVar24 = vminss_avx(auVar25,ZEXT416((uint)local_e0._4_4_));
  }
  *(uint *)(lVar16 + 0x1f10) = *(uint *)(lVar16 + 0x1f10) | 0x13;
  *(float *)(lVar16 + 0x1f30) = fVar29;
  *(undefined4 *)(lVar16 + 0x1f14) = 1;
  *(undefined8 *)(lVar16 + 0x1f28) = 0;
  *(undefined4 *)(lVar16 + 0x1f34) = 0;
  *(undefined4 *)(lVar16 + 0x1f18) = 1;
  auVar5 = vroundss_avx(ZEXT816(0),auVar5,1);
  *(int *)(lVar16 + 0x1f20) = auVar5._0_4_;
  auVar5 = vroundss_avx(ZEXT816(0),auVar24,1);
  *(int *)(lVar16 + 0x1f24) = auVar5._0_4_;
  *(float *)(lVar16 + 0x1f5c) = fVar29;
  *(undefined4 *)(lVar16 + 0x1f60) = 0;
  *(float *)(lVar16 + 0x1f64) = fVar29;
  auVar5 = vminss_avx(auVar6,ZEXT416((uint)((fVar3 - auVar24._0_4_) - fVar28)));
  *(int *)(lVar16 + 0x1f68) = auVar5._0_4_;
  *(undefined8 *)(lVar16 + 0x1f70) = 0;
  *(undefined8 *)(lVar16 + 0x1f78) = 0;
  auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(*param_4 + 0.5)),1);
  local_f8 = auVar5._0_4_;
  auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_4[1] + 0.5)),1);
  uStack_f4 = auVar5._0_4_;
  local_e0 = uVar4;
  FUN_1804b2d30(2,&local_f8);
  FUN_1804b2c00(9,auVar27._0_8_);
  FUN_1804b2c00(10,0);
  FUN_1804b2a10(4,0);
  cVar12 = FUN_1804c7cc0(param_1,0x105);
  FUN_1804b2b70(1);
  FUN_1804b2de0(3);
  lVar16 = DAT_180bb8ae8;
  if (cVar12 == '\0') {
  }
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar16 = *(longlong *)(lVar16 + 0x14d0);
  auVar5 = vmaxss_avx(ZEXT416(*(uint *)(lVar16 + 0x34)),
                      ZEXT416((uint)(*(float *)(lVar16 + 0x5c) + *(float *)(lVar16 + 0x5c) +
                                    *(float *)(lVar16 + 0x44))));
  auVar5 = vminss_avx(auVar30._0_16_,auVar5);
  FUN_1804b1700(local_f0,uVar22,auVar5._0_8_);
  uVar14 = (ulonglong)param_1 ^ 0x6be3062f3862f449;
  uVar14 = (uVar14 >> 0x1e ^ uVar14) * -0x40a7b892e31b1a47;
  uVar14 = (uVar14 >> 0x1b ^ uVar14) * -0x6b2fb644ecceee15;
  uVar14 = uVar14 >> 0x1f ^ uVar14;
  pfVar15 = (float *)FUN_1804b15a0(*(undefined8 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x1c0),
                                   (uint)(uVar14 >> 0x20) ^ (uint)uVar14,0);
  lVar8 = DAT_180bb8ae8;
  if (*(char *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xd3) != '\0') {
    *pfVar15 = 0.0;
  }
  auVar30 = ZEXT464(0x3f800000);
  auVar5 = vpcmpeqd_avx(ZEXT116(bVar11),SUB6416(ZEXT464(0),0));
  auVar5 = vblendvps_avx(SUB6416(ZEXT464(0x40e00000),0),SUB6416(ZEXT464(0x41100000),0),auVar5);
  auVar5 = vminss_avx(auVar30._0_16_,
                      ZEXT416((uint)(auVar5._0_4_ * *(float *)(lVar8 + 0x40) + *pfVar15)));
  *pfVar15 = auVar5._0_4_;
  local_d8 = *(undefined8 *)(lVar16 + 0x28);
  local_e0._4_4_ = *(float *)(lVar16 + 0x2c) + *(float *)(lVar16 + 0x34);
  local_e0._0_4_ = *(float *)(lVar16 + 0x30) + *(float *)(lVar16 + 0x28);
  if ((bVar11 != 0) && (*pfVar15 < 1.0)) {
    auVar5 = vminss_avx(ZEXT416((uint)(DAT_180b0a41c * 24.0)),
                        ZEXT416((uint)*(float *)(lVar16 + 0x34)));
    fVar28 = 1.0 - *pfVar15;
    fVar28 = (1.0 - fVar28 * fVar28 * fVar28) * (*(float *)(lVar16 + 0x34) - auVar5._0_4_) +
             auVar5._0_4_;
    if (cVar10 == '\0') {
      local_d8._4_4_ = (float)((ulonglong)local_d8 >> 0x20);
      local_e0._4_4_ = fVar28 + local_d8._4_4_;
    }
    else {
      local_d8 = CONCAT44(local_e0._4_4_ - fVar28,(uint)local_d8);
    }
  }
  uVar4 = *(undefined8 *)(lVar16 + 0x2c8);
  local_110 = CONCAT31(local_110._1_3_,1);
  local_118 = _DAT_1808da47c;
  FUN_1804a8080(uVar4,&local_d8,&local_e0,auVar27._0_8_);
  auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
  auVar5 = vmaxss_avx(auVar30._0_16_,auVar5);
  local_110 = auVar5._0_4_;
  local_118 = auVar27._0_4_;
  FUN_180463090(uVar4,&local_d8,&local_e0,DAT_180b0a428);
  iVar19 = 8;
  if ((bVar11 == 0) || (auVar30._0_4_ <= *pfVar15)) {
    uVar21 = 0;
  }
  else {
    lVar16 = *(longlong *)(lVar16 + 0x2c8);
    uVar21 = 1;
    auVar5 = *(undefined1 (*) [16])(lVar16 + 0x60);
    auVar25 = vcmpss_avx(ZEXT416((uint)local_d8),auVar5,1);
    auVar25 = vblendvps_avx(ZEXT416((uint)local_d8),auVar5,auVar25);
    auVar24 = vshufps_avx(auVar5,auVar5,0x55);
    auVar6 = vcmpss_avx(ZEXT416((uint)local_d8._4_4_),auVar24,1);
    auVar6 = vblendvps_avx(ZEXT416((uint)local_d8._4_4_),auVar24,auVar6);
    auVar7 = vshufps_avx(auVar5,auVar5,0xaa);
    auVar24 = vcmpss_avx(auVar7,ZEXT416((uint)(float)local_e0),1);
    auVar24 = vblendvps_avx(ZEXT416((uint)(float)local_e0),auVar7,auVar24);
    auVar7 = vshufps_avx(auVar5,auVar5,0xff);
    auVar5 = vcmpss_avx(auVar7,ZEXT416((uint)local_e0._4_4_),1);
    auVar5 = vblendvps_avx(ZEXT416((uint)local_e0._4_4_),auVar7,auVar5);
    piVar1 = (int *)(lVar16 + 0xa0);
    iVar13 = *(int *)(lVar16 + 0xa4);
    auVar5 = vmaxss_avx(auVar6,auVar5);
    auVar24 = vmaxss_avx(auVar25,auVar24);
    uStack_e4 = auVar5._0_4_;
    local_f0 = CONCAT44(auVar6._0_4_,auVar25._0_4_);
    uStack_e8 = auVar24._0_4_;
    if (*piVar1 == iVar13) {
      iVar18 = *piVar1 + 1;
      if (iVar13 == 0) {
        iVar13 = 8;
      }
      else {
        iVar13 = iVar13 / 2 + iVar13;
      }
      if (iVar18 < iVar13) {
        iVar18 = iVar13;
      }
      FUN_1804aec70(piVar1,iVar18);
    }
    puVar2 = (undefined8 *)(*(longlong *)(lVar16 + 0xa8) + (longlong)*piVar1 * 0x10);
    *puVar2 = local_f0;
    puVar2[1] = CONCAT44(uStack_e4,uStack_e8);
    *piVar1 = *piVar1 + 1;
    *(undefined8 *)(lVar16 + 0x60) = local_f0;
    *(ulonglong *)(lVar16 + 0x68) = CONCAT44(uStack_e4,uStack_e8);
    FUN_1804d9200(lVar16);
  }
  local_f8 = *pfVar15;
  uStack_f4 = CONCAT31(uStack_f4._1_3_,uVar21);
  if (DAT_180bbb230 == DAT_180bbb234) {
    if (DAT_180bbb234 != 0) {
      iVar19 = DAT_180bbb234 + DAT_180bbb234 / 2;
    }
    iVar13 = DAT_180bbb230 + 1;
    if (DAT_180bbb230 + 1 < iVar19) {
      iVar13 = iVar19;
    }
    if (DAT_180bbb234 < iVar13) {
      lVar16 = FUN_1804b8110((longlong)iVar13 << 3);
      if (DAT_180bbb238 != 0) {
        FUN_18063aed0(lVar16,DAT_180bbb238,(longlong)DAT_180bbb230 << 3);
        lVar9 = DAT_180bbb238;
        lVar8 = DAT_180bb8ae8;
        if ((DAT_180bbb238 != 0) && (DAT_180bb8ae8 != 0)) {
          piVar1 = (int *)(DAT_180bb8ae8 + 4);
          piVar20 = (int *)(DAT_180bb8ae8 + 0x2998 +
                           (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
          if (*piVar20 != *piVar1) {
            iVar19 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
            sVar17 = (short)iVar19 + (short)(iVar19 / 6) * -6;
            *(short *)(DAT_180bb8ae8 + 0x2994) = sVar17;
            piVar20 = (int *)(lVar8 + ((longlong)sVar17 + 0x533) * 8);
            *piVar20 = *piVar1;
            piVar20[1] = 0;
          }
          *(short *)((longlong)piVar20 + 6) = *(short *)((longlong)piVar20 + 6) + 1;
          piVar1 = (int *)(lVar8 + 0x2990);
          *piVar1 = *piVar1 + 1;
        }
        thunk_FUN_180621380(lVar9);
      }
      DAT_180bbb234 = iVar13;
      DAT_180bbb238 = lVar16;
    }
  }
  *(ulonglong *)(DAT_180bbb238 + (longlong)DAT_180bbb230 * 8) = CONCAT44(uStack_f4,local_f8);
  DAT_180bbb230 = DAT_180bbb230 + 1;
}



