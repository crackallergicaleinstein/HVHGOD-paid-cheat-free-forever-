// FUN_1804ef4b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ef4b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804ef4b0(longlong param_1)

{
  undefined4 *puVar1;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auVar8 [16];
  short sVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  int iVar17;
  undefined4 *puVar18;
  int iVar19;
  byte *pbVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  undefined1 auVar26 [64];
  undefined8 uVar27;
  undefined1 auVar28 [64];
  undefined1 auStack_c8 [32];
  int local_a8;
  undefined4 local_a0;
  undefined4 local_98;
  int local_88;
  int local_84;
  int local_80;
  longlong local_78;
  undefined1 local_70 [4];
  undefined1 auStack_6c [12];
  ulonglong local_60;
  
  lVar16 = DAT_180bb8ae8;
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  lVar10 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  if (*(int *)(param_1 + 0x74) != -1) {
    FUN_1804efb70();
    *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
  }
  if (*(char *)(lVar16 + 0x2840) != '\0') {
    FUN_1804cda80(0,&DAT_1807c6e48,0);
  }
  *(undefined4 *)(lVar10 + 0x11c) = *(undefined4 *)(param_1 + 0x80);
  iVar21 = (int)*(short *)(param_1 + 0x22e);
  fVar23 = *(float *)(param_1 + 0x7c);
  auVar28 = ZEXT464((uint)fVar23);
  fVar24 = *(float *)(param_1 + 0x80);
  auVar26 = ZEXT464((uint)fVar24);
  iVar14 = *(int *)(param_1 + 0x70) + 1;
  local_80 = (int)*(short *)(param_1 + 0x22c);
  if (*(short *)(param_1 + 0x78) == 0) {
    local_78 = param_1 + 0x1b0;
  }
  else {
    local_78 = *(longlong *)(param_1 + 0x1d0) + (longlong)(*(short *)(param_1 + 0x78) + -1) * 0x18;
  }
  if (((*(byte *)(param_1 + 0x94) & 1) != 0) &&
     ((*(int *)(param_1 + 0x70) == 0 || ((*(uint *)(param_1 + 0x94) & 0x10000) != 0)))) {
    *(float *)(local_78 + 8) = (fVar24 - fVar23) + *(float *)(local_78 + 8);
  }
  iVar19 = 0;
  local_88 = iVar14;
  local_84 = iVar21;
  if ((*(float *)(param_1 + 0x128) <= fVar24) && (fVar23 <= *(float *)(param_1 + 0x130))) {
    if ((*(short *)(param_1 + 0x20e) != -1) &&
       (((fVar2 = *(float *)(lVar16 + 0x114), fVar23 <= fVar2 && (fVar2 < fVar24)) &&
        (*(int *)(local_78 + 0x14) < 0)))) {
      *(undefined4 *)(local_78 + 0x14) = *(undefined4 *)(param_1 + 0x70);
    }
    iVar14 = *(int *)(param_1 + 0x9c);
    pbVar20 = (byte *)(param_1 + 4);
    if ((iVar14 == 0x1000000) && (iVar14 = 0, (*pbVar20 & 0x40) != 0)) {
      auVar8 = *(undefined1 (*) [16])
                (DAT_180bb8ae8 + 0xc78 + ((ulonglong)(*(uint *)(param_1 + 0x98) & 1) + 0x46) * 0x10)
      ;
      auVar13 = vshufps_avx(auVar8,auVar8,0xff);
      _local_70 = auVar8._0_12_;
      auStack_6c._8_4_ = auVar13._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
      iVar14 = FUN_1804b1120(local_70);
    }
    iVar17 = *(int *)(param_1 + 0xa0);
    iVar22 = 0;
    if (iVar17 == 0x1000000) {
      iVar17 = 0;
    }
    if ((0 < *(int *)(param_1 + 0x70)) && ((*pbVar20 & 0x80) != 0)) {
      if ((*(uint *)(param_1 + 0x94) & 0x10000) == 0) {
        iVar22 = *(int *)(param_1 + 0xa8);
      }
      else {
        iVar22 = *(int *)(param_1 + 0xa4);
      }
    }
    sVar9 = *(short *)(param_1 + 0x234);
    if ((((iVar17 != 0 || iVar22 != 0) || iVar14 != 0) || (local_88 == iVar21)) || (-1 < sVar9)) {
      if ((*(uint *)(param_1 + 4) & 0x100000) == 0) {
        uVar27 = *(undefined8 *)(param_1 + 0x14c);
        _local_70 = *(undefined1 (*) [16])(param_1 + 0x144);
        lVar16 = *(longlong *)(lVar10 + 0x2c8);
        *(undefined8 *)(lVar16 + 0x60) = *(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x144);
        *(undefined8 *)(lVar16 + 0x68) = uVar27;
      }
      FUN_1804e1d30(*(undefined8 *)(param_1 + 0x1a8),*(undefined8 *)(lVar10 + 0x2c8),0);
    }
    auVar8 = _local_70;
    iVar21 = 0;
    if ((iVar14 != 0) || (iVar17 != 0)) {
      auVar13 = vmaxss_avx(ZEXT416(*(uint *)(param_1 + 0x114)),ZEXT416(*(uint *)(param_1 + 0x134)));
      auVar11 = vmaxss_avx(auVar28._0_16_,ZEXT416(*(uint *)(param_1 + 0x138)));
      fVar23 = auVar11._0_4_;
      auVar11 = vminss_avx(auVar26._0_16_,ZEXT416(*(uint *)(param_1 + 0x140)));
      fVar24 = auVar11._0_4_;
      local_70 = (undefined1  [4])auVar13._0_4_;
      auVar12 = _local_70;
      auVar11 = vminss_avx(ZEXT416(*(uint *)(param_1 + 0x11c)),ZEXT416(*(uint *)(param_1 + 0x13c)));
      auStack_6c._8_4_ = auVar8._12_4_;
      _local_70 = auVar12._0_8_;
      auStack_6c._4_4_ = auVar11._0_4_;
      auStack_6c._0_4_ = fVar23;
      auStack_6c._8_4_ = fVar24;
      if (iVar14 != 0) {
        if (fVar23 < fVar24) {
          local_a0 = 0;
          local_a8 = 0;
          FUN_1804df870(*(undefined8 *)(lVar10 + 0x2c8),local_70,auStack_6c + 4,iVar14);
          fVar23 = (float)auStack_6c._0_4_;
          fVar24 = (float)auStack_6c._8_4_;
        }
      }
      if ((iVar17 != 0) && (fVar23 < fVar24)) {
        local_a0 = 0;
        local_a8 = iVar21;
        FUN_1804df870(*(undefined8 *)(lVar10 + 0x2c8),local_70,auStack_6c + 4,iVar17);
      }
    }
    uVar27 = auVar28._0_8_;
    if (-1 < sVar9) {
      puVar18 = *(undefined4 **)(param_1 + 0x38);
      puVar1 = puVar18 + (longlong)*(short *)(param_1 + 0x234) * 2;
      for (; puVar18 <= puVar1; puVar18 = puVar18 + 2) {
        auVar8 = vmaxss_avx(ZEXT416(*(uint *)(param_1 + 0x7c)),ZEXT416(*(uint *)(param_1 + 0x138)));
        lVar15 = (longlong)*(short *)(puVar18 + 1) * 0x78;
        lVar16 = *(longlong *)(param_1 + 0x18);
        auVar11 = vminss_avx(ZEXT416(*(uint *)(lVar15 + 0xc + lVar16)),
                             ZEXT416(*(uint *)(param_1 + 0x11c)));
        auVar13 = vmaxss_avx(ZEXT416(*(uint *)(lVar15 + 8 + lVar16)),
                             ZEXT416(*(uint *)(param_1 + 0x114)));
        auVar13 = vmaxss_avx(auVar13,ZEXT416(*(uint *)(param_1 + 0x134)));
        auVar12 = vminss_avx(ZEXT416(*(uint *)(param_1 + 0x80)),ZEXT416(*(uint *)(param_1 + 0x140)))
        ;
        fVar23 = auVar12._0_4_;
        auVar11 = vminss_avx(auVar11,ZEXT416(*(uint *)(param_1 + 0x13c)));
        _local_70 = local_70._4_8_ << 0x20;
        auStack_6c._4_4_ = auVar11._0_4_;
        auStack_6c._8_4_ = fVar23;
        auStack_6c._0_4_ = auVar8._0_4_;
        auVar13 = vmaxss_avx(auVar13,ZEXT416(*(uint *)(lVar15 + 0x24 + lVar16)));
        local_70 = (undefined1  [4])auVar13._0_4_;
        auVar13 = vminss_avx(auVar11,ZEXT416(*(uint *)(lVar15 + 0xc + lVar16)));
        auStack_6c._4_4_ = auVar13._0_4_;
        if (auVar8._0_4_ < fVar23) {
          local_a0 = 0;
          local_a8 = iVar21;
          FUN_1804df870(*(undefined8 *)(lVar10 + 0x2c8),local_70,auStack_6c + 4,*puVar18);
        }
        uVar27 = auVar28._0_8_;
      }
    }
    uVar25 = auVar26._0_8_;
    if (((iVar22 != 0) && (*(float *)(param_1 + 0x138) <= (float)uVar27)) &&
       ((float)uVar27 < *(float *)(param_1 + 0x140))) {
      local_a0 = *(undefined4 *)(param_1 + 0xb4);
      local_98 = 0x60000;
      local_a8 = iVar22;
      FUN_1804dcfb0(*(undefined8 *)(lVar10 + 0x2c8),*(undefined4 *)(param_1 + 0xac),
                    *(undefined4 *)(param_1 + 0xb0),uVar27);
      uVar25 = auVar26._0_8_;
    }
    iVar14 = local_88;
    if (local_88 == local_84) {
      if (*(float *)(param_1 + 0x138) <= (float)uVar25) {
        if ((float)uVar25 < *(float *)(param_1 + 0x140)) {
          local_a0 = *(undefined4 *)(param_1 + 0xb4);
          local_a8 = *(int *)(param_1 + 0xa4);
          local_98 = 0x60000;
          FUN_1804dcfb0(*(undefined8 *)(lVar10 + 0x2c8),*(undefined4 *)(param_1 + 0xac),
                        *(undefined4 *)(param_1 + 0xb0),uVar25);
        }
      }
    }
  }
  if (iVar14 == local_80) {
    iVar14 = 0;
    if (0 < *(int *)(param_1 + 0x6c)) {
      lVar16 = 0;
      do {
        iVar14 = iVar14 + 1;
        *(undefined1 *)(lVar16 + 0x72 + *(longlong *)(param_1 + 0x18)) =
             *(undefined1 *)(param_1 + 0x23c);
        lVar16 = lVar16 + 0x78;
      } while (iVar14 < *(int *)(param_1 + 0x6c));
    }
    auVar8 = vmaxss_avx(ZEXT416((uint)(*(float *)(param_1 + 0x80) + 1.0)),
                        ZEXT416(*(uint *)(param_1 + 0x128)));
    *(float *)(local_78 + 0xc) = auVar8._0_4_ - *(float *)(param_1 + 0xf8);
    if (local_88 == local_84) {
      uVar3 = *(uint *)(param_1 + 0x130);
      auVar8 = vminss_avx(auVar8,ZEXT416(uVar3));
      *(int *)(param_1 + 0x158) = auVar8._0_4_;
      *(int *)(param_1 + 0x138) = auVar8._0_4_;
      fVar23 = *(float *)(param_1 + 0x80);
      fVar24 = *(float *)(param_1 + 0x7c);
      *(uint *)(param_1 + 0x160) = uVar3;
      *(uint *)(param_1 + 0x140) = uVar3;
      fVar2 = (fVar23 + *(float *)(param_1 + 0x118)) - *(float *)(param_1 + 0xf8);
      *(undefined1 *)(param_1 + 0x24d) = 1;
      *(undefined2 *)(param_1 + 0x238) = *(undefined2 *)(param_1 + 0x23a);
      *(float *)(lVar10 + 0x11c) = fVar2;
      *(float *)(param_1 + 0x7c) = fVar2 - (fVar23 - fVar24);
      *(float *)(param_1 + 0x80) = fVar2;
      if (0 < *(int *)(param_1 + 0x6c)) {
        lVar16 = 0;
        do {
          lVar15 = *(longlong *)(param_1 + 0x18);
          iVar19 = iVar19 + 1;
          *(undefined2 *)(lVar16 + 100 + lVar15) = *(undefined2 *)(lVar16 + 0x68 + lVar15);
          *(undefined4 *)(lVar16 + 0x28 + lVar15) = *(undefined4 *)(param_1 + 0x158);
          lVar16 = lVar16 + 0x78;
        } while (iVar19 < *(int *)(param_1 + 0x6c));
      }
      lVar16 = *(longlong *)(param_1 + 0x18);
      uVar4 = *(undefined4 *)(lVar16 + 0x24);
      uVar5 = *(undefined4 *)(lVar16 + 0x28);
      uVar6 = *(undefined4 *)(lVar16 + 0x2c);
      uVar7 = *(undefined4 *)(lVar16 + 0x30);
      uVar27 = *(undefined8 *)(lVar16 + 0x2c);
      lVar15 = *(longlong *)(lVar10 + 0x2c8);
      *(undefined8 *)(lVar10 + 0x268) = *(undefined8 *)(lVar16 + 0x24);
      *(undefined8 *)(lVar10 + 0x270) = uVar27;
      *(undefined4 *)(lVar15 + 0x60) = uVar4;
      *(undefined4 *)(lVar15 + 100) = uVar5;
      *(undefined4 *)(lVar15 + 0x68) = uVar6;
      *(undefined4 *)(lVar15 + 0x6c) = uVar7;
      lVar15 = (longlong)*(int *)(*(longlong *)(lVar10 + 0x2c8) + 0xa0);
      lVar16 = *(longlong *)(*(longlong *)(lVar10 + 0x2c8) + 0xa8);
      *(undefined4 *)(lVar16 + -0x10 + lVar15 * 0x10) = uVar4;
      *(undefined4 *)(lVar16 + -0xc + lVar15 * 0x10) = uVar5;
      *(undefined4 *)(lVar16 + -8 + lVar15 * 0x10) = uVar6;
      *(undefined4 *)(lVar16 + -4 + lVar15 * 0x10) = uVar7;
      FUN_1804e1d30(*(undefined8 *)(param_1 + 0x1a8),*(undefined8 *)(lVar10 + 0x2c8),
                    *(undefined2 *)(*(longlong *)(param_1 + 0x18) + 100));
    }
  }
  *(undefined1 *)(param_1 + 0x23e) = 0;
  if ((*(byte *)(param_1 + 0x94) & 1) == 0) {
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
}



