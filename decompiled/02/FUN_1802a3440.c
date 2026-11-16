// FUN_1802a3440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802a3440 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802a3440(undefined8 param_1,undefined8 param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  longlong lVar4;
  float *pfVar5;
  ULONGLONG UVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 extraout_var [56];
  float fVar17;
  float fVar18;
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auStack_228 [32];
  undefined4 local_208;
  float local_200;
  float local_1f8;
  float local_1f0;
  undefined4 local_1e8;
  undefined1 local_1e0;
  undefined4 local_1d8;
  float local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  float local_1a8 [2];
  float local_1a0 [2];
  float local_198 [2];
  float local_190 [8];
  float local_170 [8];
  float local_150 [2];
  float local_148 [2];
  float local_140 [2];
  float local_138 [2];
  float local_130 [2];
  float local_128 [2];
  float local_120 [2];
  float local_118 [2];
  float local_110 [2];
  float local_108 [2];
  undefined1 local_100 [12];
  float fStack_f4;
  undefined8 local_f0;
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_228;
  local_f0 = 0;
  local_1b0 = 1.4013e-45;
  _local_100 = (undefined1  [16])0x0;
  auVar23 = ZEXT864(0);
  if (((DAT_180bbab78 != 0) &&
      ((**(code **)(*(longlong *)DAT_180bbab78 + 0x2f8))(DAT_180bbab78,&local_1b0,local_100),
      local_1b0 == 0.0)) || ((float)local_100._8_4_ <= auVar23._0_4_)) {
    iVar3 = 0;
    iVar9 = 0;
  }
  else {
    iVar9 = (int)fStack_f4;
    iVar3 = (int)(float)local_100._8_4_;
  }
  fVar24 = 0.5;
  local_1c0 = *(undefined8 *)(param_3 + 0x140);
  local_1b8 = *(undefined4 *)(param_3 + 0x148);
  fVar25 = (float)iVar3 * 0.5;
  fVar26 = (float)iVar9 * 0.5;
  FUN_180419f80((float)iVar9,local_100,&local_1c0);
  if ((fStack_f4._0_1_ == '\0') || ((float)local_100._8_4_ <= auVar23._0_4_)) {
    iVar3 = FUN_1805f68d0(&DAT_180b8e2e0);
    cVar1 = DAT_180b8e2dc;
    if (iVar3 != 0) {
LAB_1802a3be3:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_180b8e32c == 0x7fffffff) {
LAB_1802a3bce:
      DAT_180b8e32c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    FUN_1805f68fc(&DAT_180b8e2e0);
    if (cVar1 != '\0') {
      iVar3 = FUN_1805f68d0(&DAT_180b8e2e0);
      if (iVar3 != 0) goto LAB_1802a3be3;
      if (DAT_180b8e32c == 0x7fffffff) goto LAB_1802a3bce;
      auVar19 = ZEXT864(DAT_180b8e2d0);
      local_1b8 = DAT_180b8e2d8;
      FUN_1805f68fc(&DAT_180b8e2e0);
      fVar13 = *(float *)(param_3 + 0x3c0) - auVar19._0_4_;
      auVar21 = ZEXT464((uint)fVar13);
      auVar16 = vshufps_avx(auVar19._0_16_,auVar19._0_16_,0x55);
      auVar20 = ZEXT464((uint)(*(float *)(param_3 + 0x3c4) - auVar16._0_4_));
      local_1c0 = auVar19._0_8_;
      sVar2 = thunk_FUN_180624430(fVar13);
      if (((sVar2 < 1) && (sVar2 = thunk_FUN_180624430(auVar20._0_8_), sVar2 < 1)) &&
         (fVar13 = auVar21._0_4_ * auVar21._0_4_ + auVar20._0_4_ * auVar20._0_4_,
         fVar13 != auVar23._0_4_)) {
        if (fVar13 < 0.0) {
          uVar14 = FUN_18061e150(fVar13);
        }
        else {
          uVar14 = (ulonglong)(uint)SQRT(fVar13);
        }
        auVar19 = ZEXT464(0x3f800000);
        if (1.0 <= (float)uVar14) {
          lVar4 = FUN_1803dff30(uVar14,&local_1c0);
          fVar17 = *(float *)(lVar4 + 4) * 0.017453292;
          fVar12 = (float)FUN_180636c80(auVar20._0_8_,auVar21._0_8_);
          fVar13 = 6.0;
          fVar18 = 48.0;
          auVar20 = ZEXT464((uint)((fVar17 - fVar12) - 1.5707964));
          local_190[2] = 20.0;
          local_190[0] = *(float *)(param_4 + 0xd0);
          local_190[6] = 48.0;
          local_190[4] = 6.0;
          sVar2 = thunk_FUN_180624430();
          pfVar7 = local_190;
          if (0 < sVar2) {
            pfVar7 = local_190 + 2;
          }
          local_170[6] = fVar18;
          local_170[4] = fVar13;
          pfVar5 = local_190 + 4;
          if (fVar13 <= *pfVar7) {
            pfVar5 = pfVar7;
          }
          local_170[2] = 15.0;
          local_170[0] = *(float *)(param_4 + 0xd4);
          pfVar8 = local_190 + 6;
          if (*pfVar7 <= fVar18) {
            pfVar8 = pfVar5;
          }
          sVar2 = thunk_FUN_180624430();
          pfVar7 = local_170;
          if (0 < sVar2) {
            pfVar7 = local_170 + 2;
          }
          local_1b0 = auVar23._0_4_;
          pfVar5 = local_170 + 4;
          if (fVar13 <= *pfVar7) {
            pfVar5 = pfVar7;
          }
          fVar17 = 200.0;
          pfVar11 = local_170 + 6;
          if (*pfVar7 <= fVar18) {
            pfVar11 = pfVar5;
          }
          local_148[0] = 200.0;
          auVar16 = vmaxss_avx(ZEXT416((uint)*pfVar11),ZEXT416((uint)*pfVar8));
          fVar13 = auVar16._0_4_ + fVar13;
          local_150[0] = *(float *)(param_4 + 0xd8);
          auVar16 = vmaxss_avx(ZEXT416((uint)(fVar25 - fVar13)),auVar23._0_16_);
          auVar22 = ZEXT1664(auVar16);
          local_198[0] = auVar16._0_4_;
          sVar2 = thunk_FUN_180624430();
          auVar16 = vmaxss_avx(ZEXT416((uint)(fVar26 - fVar13)),auVar23._0_16_);
          auVar21 = ZEXT1664(auVar16);
          pfVar7 = local_150;
          if (0 < sVar2) {
            pfVar7 = local_148;
          }
          local_1a0[0] = auVar16._0_4_;
          local_140[0] = *(float *)(param_4 + 0xdc);
          local_138[0] = fVar17;
          fVar13 = *pfVar7;
          local_1a8[0] = auVar23._0_4_;
          sVar2 = thunk_FUN_180624430();
          pfVar5 = local_140;
          if (0 < sVar2) {
            pfVar5 = local_138;
          }
          fVar17 = *pfVar5;
          fVar12 = (float)FUN_180637540(auVar20._0_8_);
          pfVar10 = (float *)&local_1b0;
          if (auVar23._0_4_ <= fVar13) {
            pfVar10 = pfVar7;
          }
          pfVar7 = local_198;
          if (fVar13 <= auVar22._0_4_) {
            pfVar7 = pfVar10;
          }
          local_198[0] = fVar12 * *pfVar7 + fVar25;
          auVar22 = ZEXT464((uint)local_198[0]);
          fVar13 = (float)FUN_180638e00(auVar20._0_8_);
          fVar25 = *pfVar8;
          pfVar7 = local_1a8;
          if (auVar23._0_4_ <= fVar17) {
            pfVar7 = pfVar5;
          }
          pfVar5 = local_1a0;
          if (fVar17 <= auVar21._0_4_) {
            pfVar5 = pfVar7;
          }
          local_1c8 = fVar13 * *pfVar5 + fVar26;
          local_1e8 = *(undefined4 *)(param_4 + 0xec);
          fVar26 = *pfVar11;
          lVar4 = 0x100;
          if (*(char *)(param_3 + 0x32) == '\0') {
            lVar4 = 0x104;
          }
          fVar13 = *(float *)(lVar4 + param_4);
          local_1d8 = *(undefined4 *)(param_4 + 0xf8);
          local_1e0 = *(undefined1 *)(param_4 + 0xe8);
          local_208 = auVar20._0_4_;
          local_200 = fVar25;
          local_1f8 = fVar26;
          local_1f0 = fVar13;
          FUN_18029af50(param_2,*(undefined4 *)(param_4 + 0xe4),auVar22._0_8_,local_1c8);
          if (*(char *)(param_4 + 0x68) != '\0') {
            if (*(char *)(param_4 + 0xea) != '\0') {
              fVar13 = *(float *)(param_4 + 0xfc);
            }
            local_1b0 = fVar13;
            if (*(char *)(param_4 + 0xe9) == '\0') {
              auVar16 = auVar19._0_16_;
            }
            else {
              local_130[0] = *(float *)(param_4 + 0xf0);
              fVar12 = 3.0;
              fVar17 = 0.05;
              auVar21 = ZEXT464(*(uint *)(param_4 + 0xf4));
              local_1a8[0] = 3.0;
              local_1a0[0] = 0.05;
              local_128[0] = fVar24;
              sVar2 = thunk_FUN_180624430();
              pfVar7 = local_130;
              if (0 < sVar2) {
                pfVar7 = local_128;
              }
              fVar18 = *pfVar7;
              UVar6 = GetTickCount64();
              pfVar5 = local_1a0;
              if (fVar17 <= fVar18) {
                pfVar5 = pfVar7;
              }
              pfVar7 = local_1a8;
              if (fVar18 <= fVar12) {
                pfVar7 = pfVar5;
              }
              dVar15 = (double)FUN_18061c350((double)UVar6 * 0.001 * (double)*pfVar7 * 6.28318530718
                                            );
              local_118[0] = 0.2;
              local_1a8[0] = auVar19._0_4_;
              local_1a0[0] = auVar23._0_4_;
              local_120[0] = auVar21._0_4_;
              fVar17 = fVar24 - (float)dVar15 * fVar24;
              sVar2 = thunk_FUN_180624430(auVar21._0_8_,0x3e4ccccd,(float)dVar15 * fVar24);
              pfVar7 = local_120;
              if (0 < sVar2) {
                pfVar7 = local_118;
              }
              pfVar5 = local_1a0;
              if (auVar23._0_4_ <= *pfVar7) {
                pfVar5 = pfVar7;
              }
              pfVar8 = local_1a8;
              if (*pfVar7 <= auVar19._0_4_) {
                pfVar8 = pfVar5;
              }
              auVar21._0_8_ =
                   FUN_180242260(*pfVar8,auVar19._0_8_,
                                 (fVar12 - (fVar17 + fVar17)) * fVar17 * fVar17);
              auVar21._8_56_ = extraout_var;
              auVar22 = ZEXT464((uint)local_198[0]);
              auVar16 = auVar21._0_16_;
            }
            auVar21 = ZEXT1664(auVar16);
            local_110[0] = *(float *)(param_4 + 0xe0);
            local_1a8[0] = auVar19._0_4_;
            local_1a0[0] = auVar23._0_4_;
            local_108[0] = local_1a8[0];
            sVar2 = thunk_FUN_180624430();
            local_1d8 = 0xff0c0a0a;
            local_1e0 = 0;
            pfVar7 = local_110;
            if (0 < sVar2) {
              pfVar7 = local_108;
            }
            pfVar5 = local_1a0;
            if (auVar23._0_4_ <= *pfVar7) {
              pfVar5 = pfVar7;
            }
            pfVar8 = local_1a8;
            if (*pfVar7 <= auVar19._0_4_) {
              pfVar8 = pfVar5;
            }
            local_1e8 = *(undefined4 *)(param_4 + 0xec);
            local_1b0 = (float)CONCAT13((char)(int)(auVar21._0_4_ * *pfVar8 *
                                                   (float)((uint)fVar13 >> 0x18)),
                                        (undefined3)local_1b0);
            local_1f0 = local_1b0;
            local_208 = auVar20._0_4_;
            local_200 = fVar25;
            local_1f8 = fVar26;
            FUN_18029af50(&DAT_180bbb038,*(undefined4 *)(param_4 + 0xe4),auVar22._0_8_,local_1c8);
          }
        }
      }
    }
  }
}



