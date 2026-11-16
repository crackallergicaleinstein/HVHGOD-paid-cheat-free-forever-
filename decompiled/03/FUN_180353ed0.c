// FUN_180353ed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180353ed0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180353ed0(longlong *param_1,undefined8 param_2,undefined8 *param_3,byte param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined6 uVar7;
  short sVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 in_ZMM1 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  undefined1 auStack_10d8 [32];
  ulonglong local_10b8;
  undefined1 local_10b0;
  undefined8 local_10a8;
  ulonglong local_10a0;
  undefined1 local_1098;
  undefined8 local_1088;
  ulonglong uStack_1080;
  undefined8 local_f08;
  ulonglong local_78;
  
  local_78 = DAT_1808d5f00 ^ (ulonglong)auStack_10d8;
  auVar23 = ZEXT1664(in_ZMM1._0_16_);
  auVar21 = ZEXT864(0);
  if (0.0 < in_ZMM1._0_4_) {
    uVar13 = 0;
    auVar16 = vpcmpeqd_avx(ZEXT116(param_4),SUB6416(ZEXT464(0),0));
    auVar22 = ZEXT464(0x3f800000);
    auVar25 = ZEXT464(0x3f7c0000);
    auVar16 = vblendvps_avx(auVar25._0_16_,auVar22._0_16_,auVar16);
    if (in_ZMM1._0_4_ < auVar16._0_4_) {
      FUN_18063ab10(&local_1088,0,0x180);
      FUN_18035d180(&local_1088);
      auVar24 = auVar25._0_16_;
      auVar19 = auVar23._0_16_;
      auVar16 = auVar21._0_16_;
      local_f08 = 0;
      puVar9 = &local_1088;
      lVar11 = 3;
      puVar10 = param_3;
      do {
        uVar4 = puVar9[1];
        uVar5 = puVar9[2];
        uVar6 = puVar9[3];
        *puVar10 = *puVar9;
        puVar10[1] = uVar4;
        puVar10[2] = uVar5;
        puVar10[3] = uVar6;
        uVar4 = puVar9[5];
        uVar5 = puVar9[6];
        uVar6 = puVar9[7];
        puVar10[4] = puVar9[4];
        puVar10[5] = uVar4;
        puVar10[6] = uVar5;
        puVar10[7] = uVar6;
        uVar4 = puVar9[9];
        uVar5 = puVar9[10];
        uVar6 = puVar9[0xb];
        puVar10[8] = puVar9[8];
        puVar10[9] = uVar4;
        puVar10[10] = uVar5;
        puVar10[0xb] = uVar6;
        uVar4 = puVar9[0xd];
        puVar10[0xc] = puVar9[0xc];
        puVar10[0xd] = uVar4;
        puVar1 = puVar10 + 0x10;
        uVar4 = puVar9[0xf];
        puVar10[0xe] = puVar9[0xe];
        puVar10[0xf] = uVar4;
        puVar9 = puVar9 + 0x10;
        lVar11 = lVar11 + -1;
        puVar10 = puVar1;
      } while (lVar11 != 0);
      *puVar1 = *puVar9;
      uVar2 = param_1[1];
      if (uVar2 != 0) {
        lVar11 = *param_1;
        do {
          auVar20 = ZEXT464(*(uint *)(lVar11 + uVar13 * 8));
          auVar21 = ZEXT1664(auVar21._0_16_);
          auVar22 = ZEXT1664(auVar22._0_16_);
          auVar23 = ZEXT1664(auVar23._0_16_);
          auVar25 = ZEXT1664(auVar25._0_16_);
          sVar8 = thunk_FUN_180624430();
          auVar24 = auVar25._0_16_;
          auVar19 = auVar23._0_16_;
          auVar16 = auVar21._0_16_;
          if (0 < sVar8) {
          }
          if (auVar20._0_4_ < auVar21._0_4_) {
          }
          if (auVar22._0_4_ < auVar20._0_4_) {
          }
          if (*(char *)(lVar11 + 4 + uVar13 * 8) == '\0') {
            uVar3 = param_3[0x30];
            if (0x1b < uVar3) {
            }
            local_10a8 = (char *)CONCAT44(local_10a8._4_4_,(int)uVar13);
            local_10a0 = local_10a0 & 0xffffffffffff0000;
            param_3[0x30] = uVar3 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = local_10a8;
            auVar14 = vinsertps_avx(auVar14,auVar20._0_16_,0x10);
            local_10a8 = auVar14._0_8_;
            *(char **)((longlong)param_3 + uVar3 * 0xc) = local_10a8;
            *(undefined4 *)((longlong)param_3 + uVar3 * 0xc + 8) = (undefined4)local_10a0;
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 < uVar2);
      }
      if (param_4 == 0) {
        local_10a8 = (char *)CONCAT44(local_10a8._4_4_,0xffffffff);
        local_10a0 = CONCAT62(local_10a0._2_6_,0x102);
        lVar11 = param_3[0x30];
        param_3[0x30] = lVar11 + 1;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = local_10a8;
        auVar16 = vinsertps_avx(auVar15,auVar16,0x10);
        local_10a8 = auVar16._0_8_;
        *(char **)((longlong)param_3 + lVar11 * 0xc) = local_10a8;
        *(undefined4 *)((longlong)param_3 + lVar11 * 0xc + 8) = (undefined4)local_10a0;
      }
      local_10a8 = (char *)CONCAT44(local_10a8._4_4_,0xffffffff);
      uVar7 = local_10a0._2_6_;
      local_10a0 = CONCAT62(local_10a0._2_6_,2);
      lVar11 = param_3[0x30];
      param_3[0x30] = lVar11 + 1;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = local_10a8;
      auVar16 = vinsertps_avx(auVar16,auVar19,0x10);
      *(longlong *)((longlong)param_3 + lVar11 * 0xc) = auVar16._0_8_;
      *(undefined4 *)((longlong)param_3 + lVar11 * 0xc + 8) = (undefined4)local_10a0;
      local_10a8._4_4_ = auVar16._4_4_;
      local_10a8 = (char *)CONCAT44(local_10a8._4_4_,0xffffffff);
      local_10a0 = CONCAT62(uVar7,1);
      lVar11 = param_3[0x30];
      param_3[0x30] = lVar11 + 1;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = local_10a8;
      auVar16 = vinsertps_avx(auVar17,auVar19,0x10);
      *(longlong *)((longlong)param_3 + lVar11 * 0xc) = auVar16._0_8_;
      *(undefined4 *)((longlong)param_3 + lVar11 * 0xc + 8) = (undefined4)local_10a0;
      local_10a8._4_4_ = auVar16._4_4_;
      local_10a8 = (char *)CONCAT44(local_10a8._4_4_,0xffffffff);
      local_10a0 = CONCAT62(uVar7,0x101);
      lVar11 = param_3[0x30];
      param_3[0x30] = lVar11 + 1;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = local_10a8;
      auVar16 = vinsertps_avx(auVar18,auVar19,0x10);
      local_10a8 = auVar16._0_8_;
      *(char **)((longlong)param_3 + lVar11 * 0xc) = local_10a8;
      *(undefined4 *)((longlong)param_3 + lVar11 * 0xc + 8) = (undefined4)local_10a0;
      if (param_4 != 0) {
        local_10a8._4_4_ = auVar16._4_4_;
        local_10a8 = (char *)CONCAT44(local_10a8._4_4_,0xffffffff);
        local_10a0 = CONCAT62(uVar7,0x102);
        lVar11 = param_3[0x30];
        param_3[0x30] = lVar11 + 1;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = local_10a8;
        auVar16 = vinsertps_avx(auVar19,auVar24,0x10);
        local_10a8 = auVar16._0_8_;
        *(char **)((longlong)param_3 + lVar11 * 0xc) = local_10a8;
        *(undefined4 *)((longlong)param_3 + lVar11 * 0xc + 8) = (undefined4)local_10a0;
      }
      lVar11 = param_3[0x30] * 0xc;
      lVar12 = lVar11 / 6 + (lVar11 >> 0x3f);
      lVar12 = (lVar12 >> 1) - (lVar12 >> 0x3f);
      if (lVar12 < 0x21) {
        FUN_18035f1e0(param_3,lVar11 + (longlong)param_3);
      }
      else {
        FUN_18035f2f0(&local_1088,lVar12 - lVar12 / 2);
        local_10b0 = local_1098;
        local_10b8 = uStack_1080;
        FUN_18035f3f0(param_3,lVar11 + (longlong)param_3,lVar12,local_1088);
        if (0x155 < uStack_1080) {
          if (DAT_180c7df30 == (undefined8 *)0x0) {
            local_10a8 = "tier0.dll:g_pMemAlloc";
            local_10a0 = 0x15;
            DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_10a8);
          }
          (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,local_1088);
        }
      }
    }
  }
}



