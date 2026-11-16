// FUN_1804817e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804817e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804817e0(longlong *param_1,undefined **param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  ulonglong uVar10;
  int iVar11;
  undefined **ppuVar12;
  undefined8 *puVar13;
  int iVar14;
  ulonglong uVar15;
  undefined1 *puVar16;
  longlong lVar17;
  float fVar18;
  undefined1 in_ZMM2 [64];
  undefined1 in_ZMM3 [64];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [16];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 ****local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_148;
  undefined1 local_138;
  undefined4 local_134;
  float local_130;
  float local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 ****local_118 [3];
  ulonglong local_100;
  undefined1 local_f8 [16];
  ulonglong local_e8;
  ulonglong local_e0;
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  auVar27 = ZEXT1664(in_ZMM3._0_16_);
  auVar20 = ZEXT1664(in_ZMM2._0_16_);
  bVar8 = false;
  local_134 = 0;
  auVar24 = ZEXT464((uint)(DAT_180b0a41c * 47.1 + *(float *)*param_1));
  auVar26 = ZEXT464((uint)(*(float *)param_1[1] - DAT_180b0a41c * 5.0));
  ppuVar12 = &PTR_180700558;
  if (param_2 != (undefined **)0x0) {
    ppuVar12 = param_2;
  }
  local_f8 = (undefined1  [16])0x0;
  local_e8 = 0;
  local_e0 = 0;
  lVar17 = -1;
  do {
    lVar17 = lVar17 + 1;
  } while (*(char *)((longlong)ppuVar12 + lVar17) != '\0');
  FUN_18015ba30(local_f8,ppuVar12);
  auVar25._12_4_ = 0;
  auVar25._0_12_ = ZEXT812(0);
  auVar19 = ZEXT1264(ZEXT812(0)) << 0x20;
  auVar25 = vmaxss_avx(auVar25 << 0x20,ZEXT416((uint)(auVar26._0_4_ - auVar24._0_4_)));
  auVar21 = ZEXT1664(auVar25);
  puVar16 = local_f8;
  if (0xf < local_e0) {
    puVar16 = (undefined1 *)local_f8._0_8_;
  }
  fVar18 = (float)FUN_1804633e0(*(undefined8 *)param_1[2],auVar20._0_8_,puVar16,0);
  auVar25 = auVar26._0_16_;
  if (auVar21._0_4_ < fVar18) {
    fVar18 = 0.5;
    auVar22 = ZEXT464(0x3f800000);
    auVar23 = ZEXT464(0x7f7fffff);
LAB_180481930:
    if (local_e8 == 0) {
LAB_1804819f8:
      bVar9 = false;
    }
    else {
      if (0x7fffffffffffffff - local_e8 < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      local_168 = 3;
      local_170 = (undefined8 ****)&DAT_180830c34;
      local_178 = local_e8;
      FUN_18015a9c0(local_118);
      bVar8 = true;
      local_134 = 3;
      local_170 = local_118;
      if (0xf < local_100) {
        local_170 = local_118[0];
      }
      auVar25 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar20._0_4_ * DAT_180b0a41c + fVar18)),1);
      auVar25 = vmaxss_avx(auVar22._0_16_,auVar25);
      local_148 = 0;
      local_158 = 0;
      local_160 = 0;
      local_168 = 0;
      local_178 = CONCAT44(local_178._4_4_,auVar19._0_4_);
      FUN_1804ea040(&local_128,*(undefined8 *)param_1[2],auVar25._0_8_,auVar23._0_8_);
      if (local_128 <= auVar21._0_4_) goto LAB_1804819f8;
      bVar9 = true;
    }
    if (bVar8) {
      bVar8 = false;
      FUN_18015c010(local_118);
    }
    if (bVar9) {
      uVar10 = local_e8;
      do {
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) break;
        puVar16 = local_f8;
        if (0xf < local_e0) {
          puVar16 = (undefined1 *)local_f8._0_8_;
        }
      } while ((puVar16[uVar10] & 0xc0) == 0x80);
      if (local_e8 < uVar10) {
        uVar15 = uVar10 - local_e8;
        if (local_e0 - local_e8 < uVar15) {
          local_178 = local_178 & 0xffffffffffffff00;
          FUN_18013fa60(local_f8,uVar15,local_138,uVar15);
        }
        else {
          puVar16 = local_f8;
          if (0xf < local_e0) {
            puVar16 = (undefined1 *)local_f8._0_8_;
          }
          puVar16 = puVar16 + local_e8;
          local_e8 = uVar10;
          FUN_18063ab10(puVar16,0,uVar15);
          puVar16[uVar15] = 0;
        }
      }
      else {
        local_e8 = uVar10;
        puVar16 = local_f8;
        if (0xf < local_e0) {
          puVar16 = (undefined1 *)local_f8._0_8_;
        }
        puVar16[uVar10] = 0;
      }
      goto LAB_180481930;
    }
    FUN_18015b2a0(local_f8,&DAT_180830c34,3);
    auVar25 = auVar26._0_16_;
  }
  lVar17 = *(longlong *)param_1[3];
  auVar2 = *(undefined1 (*) [16])(lVar17 + 0x60);
  auVar3 = vcmpss_avx(auVar24._0_16_,auVar2,1);
  auVar3 = vblendvps_avx(auVar24._0_16_,auVar2,auVar3);
  local_128 = auVar3._0_4_;
  auVar5 = vshufps_avx(auVar2,auVar2,0x55);
  auVar4 = vcmpss_avx(ZEXT416(*(uint *)(param_1[4] + 4)),auVar5,1);
  auVar4 = vblendvps_avx(ZEXT416(*(uint *)(param_1[4] + 4)),auVar5,auVar4);
  uStack_124 = auVar4._0_4_;
  auVar6 = vshufps_avx(auVar2,auVar2,0xaa);
  auVar5 = vcmpss_avx(auVar6,auVar25,1);
  auVar25 = vblendvps_avx(auVar25,auVar6,auVar5);
  auVar5 = vshufps_avx(auVar2,auVar2,0xff);
  auVar2 = vcmpss_avx(auVar5,ZEXT416(*(uint *)(param_1[5] + 4)),1);
  auVar2 = vblendvps_avx(ZEXT416(*(uint *)(param_1[5] + 4)),auVar5,auVar2);
  auVar25 = vmaxss_avx(auVar3,auVar25);
  uStack_120 = auVar25._0_4_;
  auVar25 = vmaxss_avx(auVar4,auVar2);
  uStack_11c = auVar25._0_4_;
  piVar1 = (int *)(lVar17 + 0xa0);
  iVar11 = *(int *)(lVar17 + 0xa4);
  if (*piVar1 == iVar11) {
    iVar14 = *piVar1 + 1;
    if (iVar11 == 0) {
      iVar11 = 8;
    }
    else {
      iVar11 = iVar11 / 2 + iVar11;
    }
    if (iVar14 < iVar11) {
      iVar14 = iVar11;
    }
    FUN_1804aec70(piVar1,iVar14);
  }
  puVar13 = (undefined8 *)(*(longlong *)(lVar17 + 0xa8) + (longlong)*piVar1 * 0x10);
  *puVar13 = CONCAT44(uStack_124,local_128);
  puVar13[1] = CONCAT44(uStack_11c,uStack_120);
  *piVar1 = *piVar1 + 1;
  *(ulonglong *)(lVar17 + 0x60) = CONCAT44(uStack_124,local_128);
  *(ulonglong *)(lVar17 + 0x68) = CONCAT44(uStack_11c,uStack_120);
  FUN_1804d9200(lVar17);
  local_170 = (undefined8 ****)local_f8;
  if (0xf < local_e0) {
    local_170 = (undefined8 ****)local_f8._0_8_;
  }
  local_134 = auVar24._0_4_;
  local_130 = auVar27._0_4_ * DAT_180b0a41c + *(float *)(*param_1 + 4);
  local_168 = 0;
  local_178 = CONCAT44(local_178._4_4_,param_5);
  FUN_180463450(*(undefined8 *)param_1[3],*(undefined8 *)param_1[2],auVar20._0_8_,&local_134);
  lVar17 = *(longlong *)param_1[3];
  iVar11 = *(int *)(lVar17 + 0xa0);
  iVar14 = iVar11 + -1;
  *(int *)(lVar17 + 0xa0) = iVar14;
  if (iVar14 == 0) {
    puVar13 = (undefined8 *)(*(longlong *)(lVar17 + 0x38) + 0x3c);
  }
  else {
    puVar13 = (undefined8 *)((longlong)(iVar11 + -2) * 0x10 + *(longlong *)(lVar17 + 0xa8));
  }
  uVar7 = puVar13[1];
  *(undefined8 *)(lVar17 + 0x60) = *puVar13;
  *(undefined8 *)(lVar17 + 0x68) = uVar7;
  FUN_1804d9200();
  FUN_18015c010(local_f8);
}



