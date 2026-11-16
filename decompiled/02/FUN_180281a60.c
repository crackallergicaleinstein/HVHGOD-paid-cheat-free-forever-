// FUN_180281a60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180281a60 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180281a60(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  longlong *param_5,uint param_6,undefined4 param_7,undefined8 *param_8)

{
  size_t _Size;
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  int iVar8;
  float *pfVar9;
  int *piVar10;
  undefined8 uVar11;
  float *pfVar12;
  longlong lVar13;
  longlong *plVar14;
  ulonglong uVar15;
  longlong *plVar16;
  ulonglong uVar17;
  int iVar18;
  undefined1 in_ZMM1 [64];
  undefined1 in_ZMM2 [64];
  float fVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [64];
  float fVar22;
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  undefined1 auStack_258 [32];
  float local_238;
  longlong local_230;
  undefined4 local_228;
  undefined4 local_220;
  undefined4 local_218;
  undefined4 local_210;
  undefined4 local_208;
  int local_1f8 [2];
  float local_1f0 [3];
  int local_1e4;
  int local_1e0;
  int local_1dc;
  longlong local_1d8;
  longlong local_1d0;
  longlong local_1c8;
  undefined1 local_1c0 [16];
  undefined8 local_1b0;
  undefined8 local_1a8;
  int local_1a0;
  int local_19c;
  int local_198;
  int local_194;
  int local_190;
  undefined8 local_188;
  longlong *local_180;
  int local_178;
  int local_174;
  undefined4 local_170;
  undefined4 local_16c;
  longlong local_168;
  longlong local_160;
  undefined8 local_158;
  undefined1 local_150 [40];
  undefined1 local_128 [40];
  int local_100;
  int local_fc;
  undefined8 local_f8;
  undefined1 local_f0 [16];
  undefined8 local_e0;
  longlong *local_d8;
  undefined1 local_d0 [16];
  longlong local_c0;
  ulonglong local_b8;
  
  lVar13 = DAT_180bbab70;
  local_b8 = DAT_1808d5f00 ^ (ulonglong)auStack_258;
  auVar27 = ZEXT1664(in_ZMM2._0_16_);
  auVar25 = ZEXT1664(in_ZMM1._0_16_);
  local_1f8[0] = 0;
  if (DAT_180bbab70 == 0) {
  }
  if ((char)((uint)param_7 >> 0x18) == '\0') {
  }
  local_1d8 = param_4;
  local_1d0 = param_1;
  if (DAT_180cd3d10 != DAT_180bbab70) {
    if (DAT_180b92f60 != DAT_180b92f68) {
      FUN_180282f00(DAT_180b92f60,DAT_180b92f68);
      DAT_180b92f68 = DAT_180b92f60;
    }
    if (DAT_180cd3d10 != lVar13) {
      (**(code **)(*(longlong *)lVar13 + 8))(lVar13);
      lVar2 = DAT_180cd3d10;
      DAT_180cd3d10 = lVar13;
      if (lVar2 != 0) {
        (**(code **)(*(longlong *)lVar2 + 0x10))();
      }
    }
  }
  plVar1 = DAT_180b92f68;
  fVar22 = 4.0;
  local_1f0[2] = 4.0;
  fVar19 = 0.5;
  local_1f0[0] = 0.5;
  auVar21 = ZEXT464(param_6);
  sVar7 = thunk_FUN_180624430(param_6);
  auVar24 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar7),SUB6416(ZEXT464(0),0));
  auVar23 = ZEXT464(0x3f800000);
  auVar24 = vblendvps_avx(auVar21._0_16_,auVar23._0_16_,auVar24);
  local_1f0[1] = auVar24._0_4_;
  pfVar12 = local_1f0;
  if (fVar19 <= local_1f0[1]) {
    pfVar12 = local_1f0 + 1;
  }
  pfVar9 = local_1f0 + 2;
  if (local_1f0[1] <= fVar22) {
    pfVar9 = pfVar12;
  }
  fVar19 = ABS(*pfVar9 * fVar22);
  auVar26 = vroundps_avx(ZEXT416((uint)fVar19),0);
  auVar24 = vcmpss_avx(ZEXT416((uint)(fVar19 - auVar26._0_4_)),ZEXT416(0x3f000000),0);
  iVar18 = (int)(float)((uint)((float)(auVar24._0_4_ & 0x3f800000) + auVar26._0_4_) |
                       (uint)(*pfVar9 * fVar22) & 0x80000000);
  plVar16 = DAT_180b92f60;
  local_1e4 = iVar18;
  if (DAT_180b92f60 == plVar1) {
LAB_180281c88:
    plVar1 = (longlong *)*param_5;
    if (param_5[1] == 0xe) {
      lVar13 = *plVar1 + -0x6e656d7069757165;
      if ((lVar13 == 0) && (lVar13 = (ulonglong)*(uint *)(plVar1 + 1) - 0x6c672d74, lVar13 == 0)) {
        lVar13 = (ulonglong)*(ushort *)((longlong)plVar1 + 0xc) - 0x776f;
      }
      if (lVar13 != 0) goto LAB_180281d9f;
      local_100 = *(int *)*param_8;
      local_fc = *(int *)param_8[1];
      uVar15 = 0;
      local_f8 = 0;
      local_f0 = (undefined1  [16])0x0;
      local_e0 = 0;
      FUN_1801acf20(local_f0,(longlong)*(int *)param_8[1] * (longlong)*(int *)*param_8);
      local_158 = local_e0;
      local_160 = local_f0._8_8_;
      local_168 = local_f0._0_8_;
      if (local_f0._8_8_ != local_f0._0_8_) {
        plVar1 = (longlong *)param_8[2];
        do {
          *(undefined1 *)(local_f0._0_8_ + uVar15) = *(undefined1 *)(*plVar1 + 3 + uVar15 * 4);
          uVar15 = uVar15 + 1;
        } while (uVar15 < (ulonglong)(local_f0._8_8_ - local_f0._0_8_));
      }
      local_178 = local_100;
      local_174 = local_fc;
      local_170 = (undefined4)local_f8;
      local_16c = local_f8._4_4_;
      local_e0 = 0;
      local_f0 = ZEXT816(0);
      FUN_180113710(local_f0);
      local_1f8[0] = 0x11;
      piVar10 = (int *)FUN_18027e9f0(&local_1c8,&local_178);
      bVar6 = true;
      bVar5 = true;
      bVar4 = false;
      bVar3 = false;
    }
    else {
LAB_180281d9f:
      auVar21 = ZEXT464((uint)((float)iVar18 * 0.25));
      uVar11 = FUN_18027fa20(param_8,local_128);
      local_1f8[0] = 4;
      piVar10 = (int *)FUN_18027e390(local_150,uVar11,auVar21._0_8_);
      bVar6 = false;
      bVar5 = false;
      bVar4 = true;
      bVar3 = true;
    }
    iVar18 = *piVar10;
    local_1f8[0] = piVar10[1];
    local_1e0 = piVar10[2];
    local_1dc = piVar10[3];
    local_f8 = *(undefined8 *)(piVar10 + 2);
    local_e0 = *(undefined8 *)(piVar10 + 8);
    piVar10[8] = 0;
    piVar10[9] = 0;
    lVar13 = *(longlong *)(piVar10 + 6);
    piVar10[6] = 0;
    piVar10[7] = 0;
    lVar2 = *(longlong *)(piVar10 + 4);
    piVar10[4] = 0;
    piVar10[5] = 0;
    local_f0._8_8_ = lVar13;
    local_f0._0_8_ = lVar2;
    local_100 = iVar18;
    local_fc = local_1f8[0];
    if (bVar3) {
      FUN_180113710();
    }
    if (bVar4) {
      FUN_180113710();
    }
    if (bVar5) {
      FUN_180113710();
    }
    if (bVar6) {
      FUN_180113710();
    }
    if (lVar2 != lVar13) {
      uVar17 = lVar13 - lVar2;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar17;
      uVar15 = SUB168(ZEXT816(4) * auVar24,0);
      if (SUB168(ZEXT816(4) * auVar24,8) != 0) {
        uVar15 = 0xffffffffffffffff;
      }
      local_d0 = (undefined1  [16])0x0;
      local_c0 = 0;
      if (uVar15 != 0) {
        if (0x7fffffffffffffff < uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_1801136f0();
        }
        lVar13 = FUN_18015bca0(uVar15);
        local_d0._0_8_ = lVar13;
        local_c0 = uVar15 + lVar13;
        FUN_18063ab10(lVar13,0xff,uVar15);
        local_d0._8_8_ = uVar15 + lVar13;
      }
      iVar8 = local_1f8[0];
      uVar15 = 0;
      if (uVar17 != 0) {
        do {
          *(undefined1 *)(local_d0._0_8_ + 3 + uVar15 * 4) = *(undefined1 *)(lVar2 + uVar15);
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar17);
      }
      local_d8 = (longlong *)0x0;
      lVar13 = (longlong)local_1f8[0];
      FUN_180437380(&local_d8,local_d0._0_8_,iVar18,local_1f8[0]);
      plVar1 = local_d8;
      if (local_d8 != (longlong *)0x0) {
        uVar15 = iVar18 * lVar13 * 4;
        plVar16 = DAT_180b92f60;
        if (DAT_180b92f60 != DAT_180b92f68) {
          do {
            uVar15 = uVar15 + (longlong)(int)plVar16[6] *
                              (longlong)*(int *)((longlong)plVar16 + 0x2c) * 4;
            plVar16 = plVar16 + 10;
          } while (plVar16 != DAT_180b92f68);
          if (DAT_180b92f60 != DAT_180b92f68) {
            do {
              if (((ulonglong)(((longlong)DAT_180b92f68 - (longlong)DAT_180b92f60) / 0x50) < 0x80)
                 && (uVar15 < 0x800001)) break;
              plVar14 = DAT_180b92f60;
              plVar16 = DAT_180b92f60;
              if (DAT_180b92f60 != DAT_180b92f68) {
                while (plVar16 = plVar16 + 10, plVar16 != DAT_180b92f68) {
                  if ((ulonglong)plVar16[8] < (ulonglong)plVar14[8]) {
                    plVar14 = plVar16;
                  }
                }
              }
              lVar13 = (longlong)(int)plVar14[6] * (longlong)*(int *)((longlong)plVar14 + 0x2c);
              uVar15 = uVar15 + lVar13 * -4;
              FUN_180282be0(lVar13 * 4,local_1f8);
            } while (DAT_180b92f60 != DAT_180b92f68);
          }
        }
        local_1c8 = local_1d8;
        local_1c0 = (undefined1  [16])0x0;
        local_1b0 = 0;
        local_1a8 = 0;
        FUN_18015ba30(local_1c0,*param_5,param_5[1]);
        local_1a0 = local_1e4;
        local_198 = iVar8;
        local_194 = local_1e0;
        local_190 = local_1dc;
        local_188 = 0;
        local_180 = plVar1;
        local_d8 = (longlong *)0x0;
        local_19c = iVar18;
        if (DAT_180b92f68 == DAT_180b92f70) {
          FUN_180282f60(DAT_180b92f68,DAT_180b92f68,&local_1c8);
        }
        else {
          FUN_1802831c0(DAT_180b92f68,&local_1c8);
          DAT_180b92f68 = DAT_180b92f68 + 10;
        }
        plVar1 = local_180;
        if (local_180 != (longlong *)0x0) {
          local_180 = (longlong *)0x0;
          (**(code **)(*plVar1 + 0x10))();
        }
        FUN_18015c010(local_1c0);
        plVar16 = DAT_180b92f68 + -10;
        FUN_180113710(local_d0);
        FUN_180113710(local_f0);
        goto LAB_18028211b;
      }
      FUN_180113710(local_d0);
    }
    FUN_180113710(local_f0);
  }
  else {
    do {
      if (*plVar16 == param_4) {
        plVar14 = plVar16 + 1;
        if (0xf < (ulonglong)plVar16[4]) {
          plVar14 = (longlong *)*plVar14;
        }
        _Size = param_5[1];
        if ((_Size == plVar16[3]) &&
           (((_Size == 0 || (iVar8 = memcmp((void *)*param_5,plVar14,_Size), iVar8 == 0)) &&
            ((int)plVar16[5] == iVar18)))) break;
      }
      plVar16 = plVar16 + 10;
    } while (plVar16 != plVar1);
    if (plVar16 == plVar1) goto LAB_180281c88;
LAB_18028211b:
    lVar13 = local_1d0;
    local_218 = auVar23._0_4_;
    auVar24 = auVar25._0_16_;
    auVar26 = auVar27._0_16_;
    DAT_180c65288 = DAT_180c65288 + 1;
    plVar16[8] = DAT_180c65288;
    plVar1 = *(longlong **)(local_1d0 + 0x50);
    if (plVar1 == *(longlong **)(local_1d0 + 0x58)) {
      FUN_1801d4e30(local_1d0 + 0x48,plVar1,plVar16 + 9);
      local_218 = auVar23._0_4_;
      auVar24 = auVar25._0_16_;
      auVar26 = auVar27._0_16_;
    }
    else {
      plVar14 = (longlong *)plVar16[9];
      *plVar1 = (longlong)plVar14;
      if (plVar14 != (longlong *)0x0) {
        (**(code **)(*plVar14 + 8))();
        local_218 = auVar23._0_4_;
        auVar24 = auVar25._0_16_;
        auVar26 = auVar27._0_16_;
      }
      plVar1 = (longlong *)(lVar13 + 0x50);
      *plVar1 = *plVar1 + 8;
    }
    local_238 = (float)(int)plVar16[6];
    auVar20._0_4_ = (float)*(int *)((longlong)plVar16 + 0x2c);
    auVar20._4_12_ = SUB1612(ZEXT816(0),4);
    auVar26 = vroundss_avx(ZEXT816(0),auVar26,1);
    auVar24 = vroundss_avx(ZEXT816(0),auVar24,1);
    local_208 = param_7;
    local_220 = 0;
    local_228 = 0;
    local_230 = plVar16[9];
    local_210 = local_218;
    FUN_180435220(lVar13,auVar24._0_4_ + (float)*(int *)((longlong)plVar16 + 0x34),
                  auVar26._0_4_ + (float)(int)plVar16[7],auVar20._0_8_);
  }
}



