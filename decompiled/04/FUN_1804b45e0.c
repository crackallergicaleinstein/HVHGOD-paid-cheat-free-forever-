// FUN_1804b45e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b45e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804b45e0(undefined8 param_1,undefined8 param_2,uint param_3)

{
  int *piVar1;
  longlong *plVar2;
  byte *pbVar3;
  longlong lVar4;
  float fVar5;
  longlong lVar6;
  undefined1 auVar7 [32];
  undefined1 auVar8 [32];
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  undefined1 auVar20 [64];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 in_ZMM11 [64];
  undefined1 auVar25 [64];
  float fVar26;
  undefined1 auVar27 [64];
  undefined1 auStack_1c8 [32];
  float *local_1a8;
  float *local_1a0;
  undefined4 local_198;
  float local_188;
  float local_184;
  undefined1 local_178 [16];
  undefined8 local_168;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [8];
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  ulonglong local_e8;
  undefined1 local_98 [16];
  
  lVar6 = DAT_180bb8ae8;
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_1c8;
  if (10 < param_3) {
    param_3 = 0;
  }
  plVar13 = *(longlong **)(DAT_180bb8ae8 + 0x2030);
  pbVar3 = *(byte **)(DAT_180bb8ae8 + 0x1210);
  plVar2 = plVar13 + *(int *)(DAT_180bb8ae8 + 0x2028);
  if (plVar13 != plVar2) {
    auVar27 = ZEXT464(0x3f800000);
    local_98 = in_ZMM11._0_16_;
    uVar15 = (ulonglong)(int)param_3;
    local_168 = param_1;
    do {
      lVar10 = *plVar13;
      if ((uVar15 < 0xb) && ((*pbVar3 & 2) == 0)) {
        lVar4 = *(longlong *)(pbVar3 + 0xa0);
        fVar22 = *(float *)(pbVar3 + 0x54);
        fVar19 = (float)(&DAT_1807be418)[uVar15 * 6];
        fVar21 = (float)(&DAT_1807be41c)[uVar15 * 6];
        lVar14 = (longlong)
                 (*(int *)(*(longlong *)(lVar4 + 0x78) +
                          (ulonglong)(*(uint *)(lVar4 + 0xec) & 0x7ffff) * 4) << 0xc) >> 0xc;
        fVar18 = (float)*(ushort *)(*(longlong *)(lVar4 + 0x68) + lVar14 * 8) +
                 (float)(&DAT_1807be410)[uVar15 * 6];
        fVar26 = (float)*(ushort *)(*(longlong *)(lVar4 + 0x68) + 2 + lVar14 * 8) +
                 (float)(&DAT_1807be414)[uVar15 * 6];
        fVar5 = fVar26 * *(float *)(pbVar3 + 0x58);
        fStack_ec = (fVar21 + fVar26) * *(float *)(pbVar3 + 0x58);
        unique0x100004ed = ZEXT812(0);
        local_108._0_4_ = fVar18 * fVar22;
        fStack_f8 = (fVar18 + 123.0) * fVar22;
        fStack_f4 = 0.0;
        fStack_f0 = (fVar19 + fVar18 + 123.0) * fVar22;
        fVar23 = (float)local_168 - (float)(&DAT_1807be420)[uVar15 * 6];
        fVar24 = local_168._4_4_ - (float)(&DAT_1807be424)[uVar15 * 6];
        fStack_fc = fStack_ec;
        auVar7 = _local_108;
        fVar26 = (fVar19 + 2.0) * (float)param_2 + fVar23;
        local_108._4_4_ = fVar5;
        _fStack_fc = auVar7._12_20_;
        fStack_100 = (fVar19 + fVar18) * fVar22;
        auVar8 = _local_108;
        _fStack_f0 = auVar7._24_8_;
        _local_108 = auVar8._0_20_;
        fStack_f4 = fVar5;
        if ((fVar24 < *(float *)(lVar10 + 0xc) + *(float *)(lVar10 + 0x14)) &&
           (((*(float *)(lVar10 + 0xc) < (fVar21 + 2.0) * (float)param_2 + fVar24 &&
             (fVar23 < *(float *)(lVar10 + 8) + *(float *)(lVar10 + 0x10))) &&
            (*(float *)(lVar10 + 8) < fVar26)))) {
          auVar27 = ZEXT1664(auVar27._0_16_);
          local_188 = fVar23;
          local_184 = fVar24;
          lVar10 = FUN_1804b81b0(lVar10,1,"##Foreground");
          auVar17 = *(undefined1 (*) [16])(pbVar3 + 0x28);
          auVar25 = ZEXT1664(auVar17);
          auVar20 = ZEXT1664(auVar17);
          iVar9 = *(int *)(lVar10 + 0xb4);
          piVar1 = (int *)(lVar10 + 0xb0);
          if (*piVar1 == iVar9) {
            iVar12 = *piVar1 + 1;
            if (iVar9 == 0) {
              iVar9 = 8;
            }
            else {
              iVar9 = iVar9 / 2 + iVar9;
            }
            if (iVar12 < iVar9) {
              iVar12 = iVar9;
            }
            FUN_1804aec70(piVar1,iVar12);
            auVar17 = auVar20._0_16_;
          }
          *(undefined1 (*) [16])(*(longlong *)(lVar10 + 0xb8) + (longlong)*piVar1 * 0x10) = auVar17;
          *piVar1 = *piVar1 + 1;
          *(undefined1 (*) [16])(lVar10 + 0x70) = auVar17;
          FUN_1804d92c0(lVar10);
          local_158 = (float)param_2;
          local_160 = (fVar19 + auVar27._0_4_) * local_158 + fVar23;
          fVar22 = (fVar21 + 0.0) * local_158 + fVar24;
          local_1a0 = &fStack_f0;
          local_198 = 0x30000000;
          fVar18 = local_158 * 0.0 + fVar24;
          local_158 = local_158 + fVar23;
          local_1a8 = &fStack_f8;
          local_178 = auVar25._0_16_;
          local_15c = fVar22;
          local_154 = fVar18;
          FUN_1804e0320(lVar10,local_178,&local_158,&local_160);
          local_1a0 = &fStack_f0;
          local_198 = 0x30000000;
          local_1a8 = &fStack_f8;
          local_148 = (float)param_2 + (float)param_2 + fVar23;
          local_178 = auVar25._0_16_;
          local_150 = fVar26;
          local_14c = fVar22;
          local_144 = fVar18;
          FUN_1804e0320(lVar10,local_178,&local_148,&local_150);
          local_1a0 = &fStack_f0;
          local_198 = 0xff000000;
          fVar19 = fVar19 * (float)param_2;
          fVar21 = fVar21 * (float)param_2;
          local_1a8 = &fStack_f8;
          local_140 = fVar19 + fVar23;
          local_13c = fVar21 + fVar24;
          local_178 = auVar25._0_16_;
          FUN_1804e0320(lVar10,local_178,&local_188,&local_140);
          local_1a0 = &fStack_100;
          local_198 = 0xffffffff;
          local_1a8 = (float *)local_108;
          local_138 = fVar19 + fVar23;
          local_134 = fVar21 + fVar24;
          local_178 = auVar25._0_16_;
          FUN_1804e0320(lVar10,local_178,&local_188,&local_138);
          if (uVar15 - 8 < 2) {
            auVar17._8_8_ = 0;
            auVar17._0_8_ = *(ulonglong *)(lVar6 + 0x10);
            auVar17 = vcvtpd2ps_avx(auVar17);
            uVar16 = FUN_180637760(auVar17._0_4_ * 5.0,0x40c90fdb);
            fVar22 = (float)param_2;
            local_130 = fVar22 * 14.0 + fVar23;
            local_12c = fVar24 - fVar22 * auVar27._0_4_;
            local_1a0 = (float *)((ulonglong)local_1a0 & 0xffffffff00000000);
            local_1a8._0_4_ = (float)uVar16 + 5.183628;
            FUN_1804dc050(lVar10,&local_130,fVar22 * 6.0,uVar16);
            local_198 = 0x7f7fffff;
            local_1a0 = (float *)((ulonglong)local_1a0 & 0xffffffff00000000);
            local_1a8 = (float *)CONCAT44(local_1a8._4_4_,(float)param_2 * 3.0);
            FUN_1804d9a00(lVar10,*(undefined8 *)(lVar10 + 0x58),*(undefined4 *)(lVar10 + 0x50),
                          0xffffffff);
            *(undefined4 *)(lVar10 + 0x50) = 0;
          }
          iVar9 = *piVar1;
          iVar12 = iVar9 + -1;
          *piVar1 = iVar12;
          if (iVar12 == 0) {
            local_128 = 0;
            puVar11 = &local_128;
            uStack_120 = 0;
          }
          else {
            puVar11 = (undefined8 *)(*(longlong *)(lVar10 + 0xb8) + ((longlong)iVar9 + -2) * 0x10);
            local_118 = *puVar11;
            uStack_110 = puVar11[1];
            puVar11 = &local_118;
          }
          uVar16 = puVar11[1];
          *(undefined8 *)(lVar10 + 0x70) = *puVar11;
          *(undefined8 *)(lVar10 + 0x78) = uVar16;
          FUN_1804d92c0(lVar10);
        }
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar2);
  }
}



