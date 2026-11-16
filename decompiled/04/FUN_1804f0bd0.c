// FUN_1804f0bd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f0bd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f0bd0(longlong param_1)

{
  short sVar1;
  undefined4 uVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  bool bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  float *pfVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  longlong lVar17;
  float fVar18;
  undefined1 in_ZMM6 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  float fVar26;
  undefined4 uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [64];
  undefined1 auVar30 [16];
  undefined1 auVar31 [64];
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  float local_e0;
  undefined4 local_d8;
  undefined1 local_c8 [12];
  float fStack_bc;
  ulonglong local_b8;
  undefined1 local_28 [16];
  
  local_b8 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  lVar3 = *(longlong *)(param_1 + 0x188);
  if ((((*(float *)(param_1 + 0xf8) < *(float *)(lVar3 + 0x274)) &&
       (*(float *)(lVar3 + 0x26c) < *(float *)(param_1 + 0x100))) &&
      (*(float *)(param_1 + 0xf4) < *(float *)(lVar3 + 0x270))) &&
     (*(float *)(lVar3 + 0x268) < *(float *)(param_1 + 0xfc))) {
    lVar3 = *(longlong *)(*(longlong *)(param_1 + 400) + 0x2c8);
    FUN_1804e1d30(*(undefined8 *)(param_1 + 0x1a8),lVar3,0);
    FUN_1804d9420(lVar3,*(longlong *)(param_1 + 0x188) + 0x268,
                  *(longlong *)(param_1 + 0x188) + 0x270,0);
    uVar14 = *(uint *)(param_1 + 4);
    fVar26 = *(float *)(param_1 + 0xb4);
    auVar21 = vpcmpeqd_avx(ZEXT416(uVar14 & 0x400),SUB6416(ZEXT464(0),0));
    auVar28._12_4_ = 0;
    auVar28._0_12_ = ZEXT812(0);
    auVar28 = auVar28 << 0x20;
    auVar29 = ZEXT1264(ZEXT812(0)) << 0x20;
    uVar27 = 0;
    auVar21 = vblendvps_avx(ZEXT416((uint)fVar26),auVar28,auVar21);
    auVar25 = ZEXT1664(auVar21);
    auVar21 = vpcmpeqd_avx(ZEXT416(uVar14 & 0x100),SUB6416(ZEXT464(0),0));
    auVar21 = vblendvps_avx(ZEXT416((uint)fVar26),auVar28,auVar21);
    auVar24 = ZEXT1664(auVar21);
    auVar30 = vmaxss_avx(auVar21,ZEXT416(*(uint *)(lVar3 + 0xe0)));
    fVar4 = auVar30._0_4_ + auVar30._0_4_ + *(float *)(*(longlong *)(param_1 + 0x188) + 0x274);
    auVar31 = ZEXT464((uint)fVar4);
    auVar30 = ZEXT416((uint)fVar4);
    if (*(short *)(param_1 + 0x78) == 0) {
      lVar17 = param_1 + 0x1b0;
    }
    else {
      lVar17 = *(longlong *)(param_1 + 0x1d0) + (longlong)(*(short *)(param_1 + 0x78) + -1) * 0x18;
    }
    if (*(short *)(param_1 + 0x22e) < 1) {
      pfVar12 = (float *)(param_1 + 0x118);
    }
    else {
      pfVar12 = (float *)(param_1 + 0x108);
    }
    fVar18 = *(float *)(param_1 + 0x108);
    auVar5 = vmaxss_avx(ZEXT416((uint)fVar18),ZEXT416((uint)(*(float *)(param_1 + 0xec) + *pfVar12))
                       );
    auVar6 = vpcmpeqd_avx(ZEXT416(uVar14 & 0x100),SUB6416(ZEXT464(0),0));
    auVar28 = vblendvps_avx(auVar21,auVar28,auVar6);
    auVar21 = vminss_avx(ZEXT416((uint)(*(float *)(param_1 + 0x110) - auVar21._0_4_)),
                         ZEXT416((uint)fVar4));
    auVar20 = ZEXT1664(auVar21);
    fVar4 = auVar5._0_4_ + auVar28._0_4_;
    auVar22 = ZEXT464((uint)fVar4);
    if (*(char *)(param_1 + 0x243) == '\0') {
      auVar21 = ZEXT416((uint)fVar4);
    }
    else {
      if (*(short *)(param_1 + 0x22e) < 1) {
        fVar18 = *(float *)(param_1 + 0x118);
      }
      auVar21 = vminss_avx(auVar21,ZEXT416((uint)(fVar18 + *(float *)(lVar17 + 8))));
    }
    auVar23 = ZEXT1664(auVar21);
    if (((uVar14 >> 9 & 1) != 0) && (iVar15 = 0, 0 < *(int *)(param_1 + 0x6c))) {
      uVar14 = 1;
      lVar17 = 0;
      local_28 = in_ZMM6._0_16_;
      do {
        if ((*(uint *)(*(longlong *)(param_1 + 0x48) + ((longlong)iVar15 >> 5) * 4) & uVar14) != 0)
        {
          sVar1 = *(short *)(*(longlong *)(param_1 + 0x28) + lVar17);
          puVar16 = (uint *)((longlong)sVar1 * 0x78 + *(longlong *)(param_1 + 0x18));
          if ((*(short *)(param_1 + 0x216) == sVar1) &&
             (*(short *)(param_1 + 0x7a) == *(short *)(param_1 + 0x78))) {
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
          if ((((float)puVar16[3] <= *(float *)(param_1 + 300)) || (bVar8)) &&
             (((((short)puVar16[0x18] != -1 || ((*puVar16 & 0x40000020) == 0)) ||
               (((*(uint *)(param_1 + 4) & 0xe000) == 0x4000 &&
                ((*(uint *)(param_1 + 4) >> 0x10 & 1) == 0)))) &&
              ((float)puVar16[9] < (float)puVar16[3])))) {
            auVar21 = auVar20._0_16_;
            if ((int)*(short *)(param_1 + 0x232) == iVar15 + 1) {
              auVar19 = ZEXT1664(auVar21);
            }
            else if (((*(uint *)(param_1 + 4) >> 0xc & 1) == 0) ||
                    ((*(short *)(param_1 + 0x210) != sVar1 && (!bVar8)))) {
              auVar30 = vpcmpeqd_avx(ZEXT416(*(uint *)(param_1 + 4) & 0x1800),SUB6416(ZEXT464(0),0))
              ;
              auVar21 = vblendvps_avx(auVar23._0_16_,auVar21,auVar30);
              auVar19 = ZEXT1664(auVar21);
            }
            else {
              auVar19 = ZEXT1664(auVar21);
            }
            if (auVar22._0_4_ < auVar19._0_4_) {
              local_e8 = FUN_1804f0b20(param_1);
              local_d8 = 0;
              local_e0 = fVar26;
              FUN_1804dd220(lVar3,puVar16[3],auVar22._0_8_,auVar19._0_8_);
            }
          }
        }
        uVar27 = auVar29._0_4_;
        auVar30 = auVar31._0_16_;
        iVar15 = iVar15 + 1;
        uVar14 = uVar14 << 1 | (uint)((int)uVar14 < 0);
        lVar17 = lVar17 + 2;
      } while (iVar15 < *(int *)(param_1 + 0x6c));
    }
    uVar14 = *(uint *)(param_1 + 4);
    if ((uVar14 & 0x500) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0xa4);
      auVar21 = *(undefined1 (*) [16])(param_1 + 0xf4);
      auVar28 = vshufps_avx(auVar21,auVar21,0xff);
      auVar30 = vminss_avx(auVar28,auVar30);
      local_c8 = auVar21._0_12_;
      fStack_bc = (float)auVar30._0_4_;
      auVar30 = _local_c8;
      if ((uVar14 & 0x500) == 0x500) {
        local_d8 = 0;
        local_e8 = uVar27;
        local_e0 = auVar25._0_4_;
        FUN_1804de7c0(lVar3,local_c8,local_c8 + 8,uVar2);
      }
      else {
        local_c8._0_4_ = auVar21._0_4_;
        uVar27 = local_c8._0_4_;
        local_c8._4_4_ = auVar21._4_4_;
        uVar9 = local_c8._4_4_;
        _local_c8 = auVar30;
        if ((uVar14 >> 10 & 1) == 0) {
          if ((uVar14 >> 8 & 1) != 0) {
            local_c8._8_4_ = auVar21._8_4_;
            uVar10 = local_c8._8_4_;
            local_d8 = 0;
            local_e0 = auVar24._0_4_;
            local_e8 = uVar2;
            FUN_1804dcfb0(lVar3,uVar27,uVar10,uVar9);
            local_d8 = 0;
            local_e0 = auVar24._0_4_;
            local_e8 = uVar2;
            FUN_1804dcfb0(lVar3,local_c8._0_4_,local_c8._8_4_,fStack_bc - local_e0);
          }
        }
        else {
          local_d8 = 0;
          local_e8 = uVar2;
          local_e0 = auVar25._0_4_;
          FUN_1804dd220(lVar3,uVar27,uVar9);
          local_d8 = 0;
          local_e0 = auVar25._0_4_;
          local_e8 = uVar2;
          FUN_1804dd220(lVar3,(float)local_c8._8_4_ - local_e0,local_c8._4_4_,fStack_bc);
        }
      }
    }
    if (((((*(byte *)(param_1 + 4) & 0x80) != 0) &&
         (fVar4 = *(float *)(param_1 + 0x80), fVar4 < *(float *)(param_1 + 0x100))) &&
        (*(float *)(param_1 + 0x138) <= fVar4)) && (fVar4 < *(float *)(param_1 + 0x140))) {
      local_e8 = *(undefined4 *)(param_1 + 0xa8);
      local_d8 = 0;
      local_e0 = fVar26;
      FUN_1804dcfb0(lVar3,*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0));
    }
    iVar15 = *(int *)(lVar3 + 0xa0);
    iVar11 = iVar15 + -1;
    *(int *)(lVar3 + 0xa0) = iVar11;
    if (iVar11 == 0) {
      puVar13 = (undefined8 *)(*(longlong *)(lVar3 + 0x38) + 0x3c);
    }
    else {
      puVar13 = (undefined8 *)((longlong)(iVar15 + -2) * 0x10 + *(longlong *)(lVar3 + 0xa8));
    }
    uVar7 = puVar13[1];
    *(undefined8 *)(lVar3 + 0x60) = *puVar13;
    *(undefined8 *)(lVar3 + 0x68) = uVar7;
    FUN_1804d9200(lVar3);
  }
}



