// FUN_1804bdf10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804bdf10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804bdf10(longlong param_1,undefined8 *param_2,byte param_3,char param_4,int param_5,
                  uint *param_6,float param_7)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined1 in_ZMM6 [64];
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  float fVar18;
  float fVar19;
  undefined1 auVar20 [64];
  float fVar21;
  float fVar22;
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  undefined1 auStack_158 [32];
  int local_138;
  float local_130;
  undefined4 local_128;
  char local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined1 local_f0 [4];
  float afStack_ec [2];
  float fStack_e4;
  undefined1 local_e0 [8];
  float fStack_d8;
  float fStack_d4;
  undefined1 local_d0 [4];
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_48 [16];
  
  lVar2 = DAT_180bb8ae8;
  local_48 = in_ZMM6._0_16_;
  local_c0 = DAT_1808d5f00 ^ (ulonglong)auStack_158;
  uVar13 = *(uint *)(param_1 + 0x14);
  auVar20 = ZEXT464(*(uint *)(param_1 + 0x60));
  fVar22 = *(float *)(param_1 + 100);
  *(undefined1 *)(param_1 + 0xd1) = 0;
  *(undefined4 *)(param_1 + 0x170) = 1;
  local_118 = param_4;
  if (*(char *)(param_1 + 0xcf) == '\0') {
    fVar21 = 0.5;
    auVar17 = ZEXT864(0);
    lVar8 = lVar2;
    if (-1 < (char)uVar13) {
      if ((uVar13 & 0x6000000) == 0) {
        lVar9 = 0x170;
        if ((uVar13 >> 0x18 & 1) != 0) {
          lVar9 = 0x180;
        }
      }
      else {
        lVar9 = 400;
      }
      auVar1 = *(undefined1 (*) [16])(lVar2 + 0xc78 + lVar9);
      auVar3 = vshufps_avx(auVar1,auVar1,0xff);
      _local_e0 = auVar1._0_12_;
      fStack_d4 = auVar3._0_4_ * *(float *)(lVar2 + 0xc84);
      uVar6 = FUN_1804b1120(local_e0);
      if ((*(byte *)(lVar8 + 0x1f10) & 0x40) != 0) {
        if (auVar17._0_4_ <= *(float *)(lVar8 + 0x1f80)) {
          auVar1 = vminss_avx(SUB6416(ZEXT464(0x3f800000),0),
                              ZEXT416((uint)*(float *)(lVar8 + 0x1f80)));
          fVar14 = auVar1._0_4_;
        }
        else {
          fVar14 = 0.0;
        }
        uVar6 = (int)(fVar14 * 255.0 + fVar21) << 0x18;
      }
      if ((uVar6 & 0xff000000) != 0) {
        local_130 = 2.69049e-43;
        if ((uVar13 & 1) != 0) {
          local_130 = 3.36312e-43;
        }
        fStack_cc = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x68);
        local_d0 = (undefined1  [4])(auVar17._0_4_ + *(float *)(param_1 + 0x28));
        fStack_c8 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x30);
        fStack_c4 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x34);
        local_138 = auVar20._0_4_;
        FUN_1804df870(*(undefined8 *)(param_1 + 0x2c8),local_d0,&fStack_c8);
        lVar8 = DAT_180bb8ae8;
      }
    }
    if ((uVar13 & 1) == 0) {
      auVar1 = *(undefined1 (*) [16])(lVar8 + 0xc78 + ((ulonglong)param_3 + 0x1f) * 0x10);
      auVar3 = vshufps_avx(auVar1,auVar1,0xff);
      _local_e0 = auVar1._0_12_;
      fStack_d4 = auVar3._0_4_ * *(float *)(lVar8 + 0xc84);
      uVar7 = FUN_1804b1120(local_e0);
      local_130 = 6.72623e-44;
      local_138 = auVar20._0_4_;
      FUN_1804df870(*(undefined8 *)(param_1 + 0x2c8),param_2,param_2 + 1,uVar7);
      lVar8 = DAT_180bb8ae8;
    }
    if ((uVar13 >> 10 & 1) != 0) {
      fVar14 = *(float *)(param_1 + 0x28);
      fVar18 = *(float *)(param_1 + 0x2c);
      fVar19 = fVar18 + *(float *)(param_1 + 0x68);
      auVar1 = vmaxss_avx(ZEXT416((uint)fVar14),ZEXT416((uint)fVar14));
      auVar3 = vmaxss_avx(ZEXT416((uint)fVar19),ZEXT416((uint)fVar18));
      local_e0._4_4_ = auVar3._0_4_;
      local_e0._0_4_ = auVar1._0_4_;
      auVar1 = vminss_avx(ZEXT416((uint)(fVar14 + *(float *)(param_1 + 0x38))),
                          ZEXT416((uint)(fVar14 + *(float *)(param_1 + 0x30))));
      fStack_d8 = (float)auVar1._0_4_;
      auVar3 = vminss_avx(ZEXT416((uint)(fVar19 + *(float *)(param_1 + 0x6c))),
                          ZEXT416((uint)(fVar18 + *(float *)(param_1 + 0x34))));
      auVar1 = *(undefined1 (*) [16])(lVar8 + 0xe98);
      auVar4 = vshufps_avx(auVar1,auVar1,0xff);
      _local_f0 = auVar1._0_12_;
      fStack_e4 = auVar4._0_4_ * *(float *)(lVar8 + 0xc84);
      fStack_d4 = (float)auVar3._0_4_;
      auVar1 = vpcmpeqd_avx(ZEXT416(uVar13 & 1),SUB6416(ZEXT464(0),0));
      auVar1 = vblendvps_avx(auVar20._0_16_,auVar17._0_16_,auVar1);
      auVar16 = ZEXT1664(auVar1);
      uVar7 = FUN_1804b1120(local_f0);
      local_130 = 6.72623e-44;
      local_138 = auVar16._0_4_;
      FUN_1804df870(*(undefined8 *)(param_1 + 0x2c8),local_e0,&fStack_d8,uVar7);
      fVar14 = *(float *)(lVar2 + 0xcd0);
      if (auVar17._0_4_ < fVar14) {
        auVar17 = ZEXT464((uint)fStack_d4);
        if (fStack_d4 < *(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x2c)) {
          auVar1 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xe18);
          auVar3 = vshufps_avx(auVar1,auVar1,0xff);
          _local_d0 = auVar1._0_12_;
          fStack_c4 = auVar3._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
          local_138 = FUN_1804b1120(local_d0);
          local_128 = 0x60000;
          local_130 = fVar14;
          FUN_1804dcfb0(*(undefined8 *)(param_1 + 0x2c8),fVar22 + (float)local_e0._0_4_,
                        fStack_d8 - fVar22,auVar17._0_8_);
        }
      }
    }
    if (*(char *)(param_1 + 200) != '\0') {
      FUN_1804f5ed0(0);
    }
    if (*(char *)(param_1 + 0xc9) != '\0') {
      FUN_1804f5ed0(1);
    }
    if (local_118 != '\0') {
      if (((uVar13 & 2) == 0) && (uVar13 = 0, 0 < param_5)) {
        local_b8 = unaff_XMM13_Qa;
        uStack_b0 = unaff_XMM13_Qb;
        fVar14 = 0.25;
        pfVar12 = (float *)&DAT_1807b7fbc;
        do {
          uVar6 = *param_6;
          if ((uVar6 & 0xff000000) != 0) {
            fVar18 = *(float *)(param_1 + 0x28);
            fVar19 = *(float *)(param_1 + 0x2c);
            fVar18 = ((fVar18 + *(float *)(param_1 + 0x30)) - fVar18) * pfVar12[-3] + fVar18;
            fVar15 = (float)(int)(fVar22 * fVar21 + fVar21);
            auVar17 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),fVar15));
            fVar19 = ((fVar19 + *(float *)(param_1 + 0x34)) - fVar19) * pfVar12[-2] + fVar19;
            uVar11 = uVar13 & 1;
            if (uVar11 == 0) {
              local_108 = fVar15;
              fVar15 = param_7;
              local_10c = param_7;
            }
            else {
              local_104 = fVar15;
              local_100 = param_7;
            }
            local_fc = fVar15 * pfVar12[-1] + fVar18;
            pfVar10 = &local_108;
            if (uVar11 != 0) {
              pfVar10 = &local_100;
            }
            local_f8 = *pfVar10 * *pfVar12 + fVar19;
            FUN_1804d0c90(*(longlong *)(param_1 + 0x2c8) + 0x50,&local_fc);
            auVar1 = _local_e0;
            fVar15 = auVar17._0_4_;
            if (uVar11 == 0) {
              afStack_ec[0] = param_7;
              local_f0 = (undefined1  [4])fVar15;
            }
            else {
              fStack_cc = fVar15;
              local_d0 = (undefined1  [4])param_7;
              fVar15 = param_7;
            }
            fVar15 = fVar15 * pfVar12[-1] + fVar18;
            local_e0._0_4_ = fVar15;
            pfVar10 = afStack_ec;
            if (uVar11 != 0) {
              pfVar10 = &fStack_cc;
            }
            _fStack_d8 = auVar1._8_8_;
            local_e0._4_4_ = *pfVar10 * *pfVar12 + fVar19;
            FUN_1804d0c90(*(longlong *)(param_1 + 0x2c8) + 0x50,local_e0);
            lVar2 = *(longlong *)(param_1 + 0x2c8);
            fVar15 = auVar17._0_4_ + auVar20._0_4_;
            local_114 = fVar15 * pfVar12[-1] + fVar18;
            local_110 = fVar15 * *pfVar12 + fVar19;
            if (fVar14 * *(float *)(lVar2 + 0xe0) <= auVar20._0_4_) {
              local_138 = (int)pfVar12[2] * 4;
              local_130 = 0.0;
              FUN_1804dbc10(lVar2,&local_114,auVar20._0_8_,(int)pfVar12[1] * 4);
            }
            else {
              FUN_1804d0c90(lVar2 + 0x50);
            }
            lVar2 = *(longlong *)(param_1 + 0x2c8);
            local_138 = 0;
            FUN_1804dafe0(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),uVar6);
            *(undefined4 *)(lVar2 + 0x50) = 0;
          }
          uVar13 = uVar13 + 1;
          param_6 = param_6 + 1;
          pfVar12 = pfVar12 + 6;
        } while ((int)uVar13 < param_5);
      }
      FUN_1804bdce0(param_1);
    }
  }
  else {
    uVar7 = *(undefined4 *)(lVar2 + 0xcd0);
    *(float *)(lVar2 + 0xcd0) = fVar22;
    if ((param_3 == 0) || (lVar8 = 0x200, *(char *)(lVar2 + 0x2038) == '\0')) {
      lVar8 = 0x210;
    }
    auVar1 = *(undefined1 (*) [16])(lVar2 + 0xc78 + lVar8);
    auVar3 = vshufps_avx(auVar1,auVar1,0xff);
    _local_e0 = auVar1._0_12_;
    fStack_d4 = auVar3._0_4_ * *(float *)(lVar2 + 0xc84);
    uVar5 = FUN_1804b1120(local_e0);
    local_138 = auVar20._0_4_;
    FUN_1804b3f60(*param_2,param_2[1],uVar5,1);
    *(undefined4 *)(lVar2 + 0xcd0) = uVar7;
  }
  *(undefined4 *)(param_1 + 0x170) = 0;
}



