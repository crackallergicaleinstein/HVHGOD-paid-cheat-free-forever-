// FUN_1802c5ae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c5ae0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802c5ae0(longlong param_1,undefined8 param_2,longlong param_3,uint *param_4,
                  undefined8 param_5,undefined8 *param_6,uint param_7)

{
  byte bVar1;
  undefined8 *puVar2;
  longlong lVar3;
  float *pfVar4;
  undefined1 auVar5 [16];
  uint uVar6;
  undefined8 uVar7;
  char cVar8;
  short sVar9;
  uint uVar10;
  ulonglong *puVar11;
  uint *puVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  float *pfVar17;
  float fVar18;
  float fVar19;
  undefined1 extraout_var [56];
  float fVar20;
  undefined1 auVar21 [64];
  float fVar22;
  undefined1 auVar23 [64];
  float fVar24;
  undefined4 uVar25;
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [64];
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined1 auVar32 [64];
  undefined1 auStack_37a8 [32];
  undefined4 local_3788;
  uint local_3780;
  float local_3778;
  undefined4 local_3768;
  undefined1 local_3764;
  undefined8 local_3760;
  char local_3758;
  float local_3750;
  undefined8 local_3748;
  char local_3740;
  uint local_3738;
  uint local_3734;
  char local_3730;
  uint *local_3728;
  undefined8 local_3718;
  undefined8 local_3710;
  undefined8 local_3708;
  longlong local_3700;
  undefined4 local_36f8 [2];
  ulonglong local_36f0 [1727];
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  uint local_e8;
  uint local_e4;
  ulonglong local_e0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_37a8;
  auVar31 = ZEXT464(0x40400000);
  auVar21 = ZEXT464(0x3f000000);
  local_3748 = param_5;
  local_3760 = param_1;
  local_3728 = param_4;
  local_3708 = param_2;
  local_3700 = param_3;
  fVar18 = (float)FUN_1802c3a60(param_4[3],auVar21._0_8_,auVar31._0_8_,0x3f99999a);
  auVar30 = ZEXT464(0x3f800000);
  param_4[3] = (uint)fVar18;
  auVar28 = ZEXT864(0);
  local_3750 = fVar18;
  fVar19 = (float)FUN_1802c3a60(param_4[4],0,auVar30._0_8_,0x3ea3d70a);
  param_4[4] = (uint)fVar19;
  auVar26._0_8_ = FUN_1802c3a60(param_4[5],0,auVar30._0_8_,auVar30._0_8_);
  auVar26._8_56_ = extraout_var;
  param_4[5] = (uint)auVar26._0_8_;
  auVar26 = ZEXT1664(auVar26._0_16_);
  if (auVar28._0_4_ < fVar19) {
    puVar11 = local_36f0;
    lVar13 = 0x360;
    do {
      *(undefined4 *)(puVar11 + -1) = 0;
      *puVar11 = 0;
      puVar11 = puVar11 + 2;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
    uVar16 = *(ulonglong *)(param_1 + 0xcd88);
    uVar15 = 0;
    if (uVar16 != 0) {
      pfVar17 = (float *)(param_1 + 0x5400);
      puVar2 = (undefined8 *)*param_6;
      lVar13 = param_6[1];
      puVar11 = local_36f0;
      do {
        lVar3 = puVar2[1];
        pfVar4 = (float *)*puVar2;
        fVar22 = auVar31._0_4_;
        fVar24 = (pfVar17[3] + *pfVar17 + pfVar17[6]) / fVar22;
        fVar18 = *(float *)puVar2[2];
        fVar20 = (pfVar17[4] + pfVar17[1] + pfVar17[7]) / fVar22;
        fVar22 = (pfVar17[5] + pfVar17[2] + pfVar17[8]) / fVar22;
        fVar18 = ((fVar20 * *(float *)(lVar3 + 0x38) + fVar24 * *(float *)(lVar3 + 0x2c) +
                  fVar22 * *(float *)(lVar3 + 0x20)) * fVar18 + pfVar4[1]) *
                 *(float *)(lVar13 + 0x84) +
                 ((fVar20 * *(float *)(lVar3 + 0x34) + fVar24 * *(float *)(lVar3 + 0x28) +
                  fVar22 * *(float *)(lVar3 + 0x1c)) * fVar18 + *pfVar4) * *(float *)(lVar13 + 0x80)
                 + ((fVar20 * *(float *)(lVar3 + 0x3c) + fVar24 * *(float *)(lVar3 + 0x30) +
                    fVar22 * *(float *)(lVar3 + 0x24)) * fVar18 + pfVar4[2]) *
                   *(float *)(lVar13 + 0x88) + *(float *)(lVar13 + 0x8c);
        auVar21 = ZEXT464((uint)fVar18);
        sVar9 = thunk_FUN_180624430(fVar18);
        *puVar11 = uVar15;
        pfVar17 = pfVar17 + 9;
        auVar29 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar9),SUB6416(ZEXT464(0),0));
        auVar29 = vblendvps_avx(auVar21._0_16_,auVar28._0_16_,auVar29);
        uVar15 = uVar15 + 1;
        *(int *)(puVar11 + -1) = auVar29._0_4_;
        puVar11 = puVar11 + 2;
      } while (uVar15 < uVar16);
      auVar21 = ZEXT464(0x3f000000);
      param_2 = local_3708;
      param_1 = local_3760;
      param_5 = local_3748;
      fVar18 = local_3750;
    }
    FUN_1802c62a0(local_36f8,local_36f8 + uVar16 * 4,(longlong)(uVar16 * 0x10) >> 4,local_3764);
    uVar16 = 0;
    cVar8 = (char)(int)((float)(local_3728[2] >> 0x18) * fVar19);
    local_3768._0_3_ = (undefined3)local_3728[2];
    local_3768 = CONCAT13(cVar8,(undefined3)local_3768);
    uVar6 = local_3768;
    param_4 = local_3728;
    if (*(longlong *)(param_1 + 0xcd88) != 0) {
      puVar11 = local_36f0;
      do {
        lVar13 = *puVar11 * 0x24;
        FUN_1802c59a0(param_5,&local_3748,lVar13 + 0x5400 + param_1);
        FUN_1802c59a0(param_5,&local_3760,lVar13 + 0x540c + param_1);
        FUN_1802c59a0(param_5,&local_3738,lVar13 + 0x5418 + param_1);
        if ((((local_3740 != '\0') && (local_3758 != '\0')) && (local_3730 != '\0')) &&
           (cVar8 != '\0')) {
          local_f8 = (undefined4)local_3748;
          local_f4 = local_3748._4_4_;
          local_f0 = (undefined4)local_3760;
          local_ec = local_3760._4_4_;
          local_3718 = &local_f8;
          local_3710 = 6;
          local_e8 = local_3738;
          local_e4 = local_3734;
          FUN_180432700(param_2,&local_3718,uVar6);
        }
        uVar16 = uVar16 + 1;
        puVar11 = puVar11 + 2;
      } while (uVar16 < *(ulonglong *)(param_1 + 0xcd88));
      param_4 = local_3728;
    }
  }
  uVar16 = 0;
  if (*(longlong *)(param_1 + 0xcd80) != 0) {
    auVar31 = ZEXT464(param_7);
    auVar32 = ZEXT464(0x3ee66666);
    pfVar17 = (float *)(param_1 + 0xc);
    do {
      FUN_1802c59a0(param_5,&local_3738,pfVar17 + -3);
      FUN_1802c59a0(param_5,&local_3718,pfVar17);
      if ((local_3730 != '\0') && ((char)local_3710 != '\0')) {
        bVar1 = *(byte *)(pfVar17 + 3);
        puVar12 = param_4 + 1;
        if (bVar1 != 1) {
          puVar12 = param_4;
        }
        local_3768 = *puVar12;
        uVar14 = local_3768 >> 0x18;
        fVar19 = (float)FUN_180638e00(auVar31._0_8_);
        fVar19 = fVar19 * (pfVar17[-2] + pfVar17[1]);
        fVar20 = (float)FUN_180637540(auVar31._0_8_);
        lVar13 = local_3700;
        uVar6 = local_3768;
        auVar29 = auVar30._0_16_;
        if (bVar1 == 1) {
          fVar22 = auVar21._0_4_;
        }
        else {
          auVar5 = vpcmpeqd_avx(ZEXT416((uint)bVar1),SUB6416(ZEXT464(2),0));
          auVar5 = vblendvps_avx(auVar29,auVar32._0_16_,auVar5);
          fVar22 = auVar5._0_4_;
        }
        auVar21 = ZEXT464(local_3734);
        auVar27 = ZEXT464((uint)local_3718);
        auVar5 = vpcmpeqd_avx(ZEXT116(fVar19 + fVar20 * (pfVar17[-3] + *pfVar17) < auVar28._0_4_),
                              SUB6416(ZEXT464(0),0));
        auVar5 = vblendvps_avx(SUB6416(ZEXT464(0x3e8f5c29),0),auVar29,auVar5);
        uVar10 = (uint)(auVar5._0_4_ * fVar22 * (float)uVar14);
        local_3768 = CONCAT13((char)uVar10,(undefined3)local_3768);
        uVar14 = local_3768;
        local_3748 = CONCAT44(local_3748._4_4_,uVar10);
        auVar5 = vpcmpeqd_avx(ZEXT416((uint)bVar1),SUB6416(ZEXT464(1),0));
        auVar29 = vblendvps_avx(auVar29,SUB6416(ZEXT464(0x3f19999a),0),auVar5);
        fVar18 = auVar29._0_4_ * fVar18;
        auVar23 = ZEXT464(local_3738);
        uVar25 = local_3718._4_4_;
        if (((local_3700 != 0) && (bVar1 != 1)) && (auVar28._0_4_ < auVar26._0_4_)) {
          local_3778 = fVar18 + 1.8;
          local_3760._0_4_ =
               CONCAT13((char)(int)((float)(uVar10 & 0xff) * auVar26._0_4_),(undefined3)local_3768);
          local_3780 = (undefined4)local_3760;
          local_3788 = local_3718._4_4_;
          FUN_180433450(local_3700,local_3738,local_3734,(ulonglong)local_3718 & 0xffffffff);
        }
        uVar7 = local_3708;
        local_3780 = uVar14;
        local_3788 = uVar25;
        local_3778 = fVar18;
        FUN_180433450(local_3708,auVar23._0_8_,auVar21._0_8_,auVar27._0_8_);
        if (((lVar13 != 0) && (fVar19 = auVar26._0_4_, auVar28._0_4_ < fVar19)) &&
           (*(char *)(pfVar17 + 3) == '\0')) {
          auVar29 = vmaxss_avx(ZEXT416((uint)(fVar18 * auVar32._0_4_)),ZEXT416(0x3f000000));
          local_3778 = auVar29._0_4_;
          local_3780 = (((int)((float)(int)(0xff - (local_3768 >> 0x10 & 0xff)) * 0.7 * fVar19 +
                              (float)((uVar6 & 0xff0000) >> 0x10)) & 0xffU |
                        (uint)(byte)local_3748 << 8) << 8 |
                       (int)((float)(int)(0xff - (local_3768 >> 8 & 0xff)) * 0.7 * fVar19 +
                            (float)((uVar6 & 0xff00) >> 8)) & 0xffU) << 8 |
                       (int)((float)(int)(0xff - (local_3768 & 0xff)) * 0.7 * fVar19 +
                            (float)(local_3768 & 0xff)) & 0xffU;
          local_3788 = uVar25;
          FUN_180433450(uVar7,auVar23._0_8_,auVar21._0_8_,auVar27._0_8_);
        }
      }
      auVar21 = ZEXT464(0x3f000000);
      uVar16 = uVar16 + 1;
      pfVar17 = pfVar17 + 7;
      param_4 = local_3728;
      fVar18 = local_3750;
    } while (uVar16 < *(ulonglong *)(param_1 + 0xcd80));
  }
}



