// FUN_1804c9140 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c9140 */

ulonglong FUN_1804c9140(longlong param_1,undefined1 (*param_2) [16])

{
  uint uVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  byte bVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  
  lVar7 = DAT_180bb8ae8;
  lVar2 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  uVar8 = (ulonglong)*(uint *)(lVar2 + 0x170);
  if (*(uint *)(DAT_180bb8ae8 + 0x204c) != *(uint *)(lVar2 + 0x170)) goto LAB_1804c958a;
  *(int *)(DAT_180bb8ae8 + 0x211c) = *(int *)(DAT_180bb8ae8 + 0x211c) + 1;
  uVar8 = *(ulonglong *)(lVar7 + 0x2040);
  auVar17 = *param_2;
  auVar13 = *(undefined1 (*) [16])(lVar7 + 0x20fc);
  fVar11 = auVar17._0_4_;
  if (*(ulonglong *)(lVar2 + 0x3c8) == uVar8) {
    fVar14 = *(float *)(lVar2 + 0x274);
    auVar4 = vshufps_avx(auVar17,auVar17,0x55);
    if (fVar14 <= auVar4._0_4_) {
LAB_1804c958a:
      return uVar8 & 0xffffffffffffff00;
    }
    fStack_bc = *(float *)(lVar2 + 0x26c);
    auVar5 = vshufps_avx(auVar17,auVar17,0xff);
    if ((auVar5._0_4_ <= fStack_bc) || (fVar18 = *(float *)(lVar2 + 0x270), fVar18 <= fVar11))
    goto LAB_1804c958a;
    fStack_c0 = *(float *)(lVar2 + 0x268);
    auVar6 = vshufps_avx(auVar17,auVar17,0xaa);
    if (auVar6._0_4_ <= fStack_c0) goto LAB_1804c958a;
    if (fStack_bc <= auVar4._0_4_) {
      auVar4 = vminss_avx(ZEXT416((uint)fVar14),auVar4);
      fStack_c4 = auVar4._0_4_;
    }
    else {
      fStack_c4 = fStack_bc;
    }
    if (fStack_c0 <= fVar11) {
      auVar17 = vminss_avx(ZEXT416((uint)fVar18),auVar17);
      fVar11 = auVar17._0_4_;
    }
    else {
      fVar11 = fStack_c0;
    }
    if (fStack_bc <= auVar5._0_4_) {
      auVar17 = vminss_avx(ZEXT416((uint)fVar14),auVar5);
      fStack_bc = auVar17._0_4_;
    }
    if (fStack_c0 <= auVar6._0_4_) {
      auVar17 = vminss_avx(ZEXT416((uint)fVar18),auVar6);
      fStack_c0 = auVar17._0_4_;
    }
  }
  else {
    fStack_bc = auVar17._12_4_;
    fStack_c0 = auVar17._8_4_;
    fStack_c4 = auVar17._4_4_;
  }
  fVar14 = auVar13._0_4_;
  auVar17 = vshufps_avx(auVar13,auVar13,0xaa);
  fVar18 = auVar17._0_4_;
  if (fVar14 <= fStack_c0) {
    if (fVar11 <= fVar18) {
      auVar17 = ZEXT816(0);
    }
    else {
      auVar17 = ZEXT416((uint)(fVar11 - fVar18));
    }
  }
  else {
    auVar17 = ZEXT416((uint)(fStack_c0 - fVar14));
  }
  auVar4 = vshufps_avx(auVar13,auVar13,0xff);
  auVar13 = vshufps_avx(auVar13,auVar13,0x55);
  fVar19 = auVar13._0_4_;
  fVar16 = auVar4._0_4_ - fVar19;
  fVar3 = fVar16 * 0.8 + fVar19;
  fVar16 = fVar16 * 0.2 + fVar19;
  fVar12 = (fStack_bc - fStack_c4) * 0.8 + fStack_c4;
  fVar15 = (fStack_bc - fStack_c4) * 0.2 + fStack_c4;
  if (fVar16 <= fVar12) {
    if (fVar3 < fVar15) {
      fVar12 = fVar15 - fVar3;
      goto LAB_1804c930e;
    }
    auVar13 = ZEXT816(0);
  }
  else {
    fVar12 = fVar12 - fVar16;
LAB_1804c930e:
    auVar13 = ZEXT416((uint)fVar12);
    if ((fVar12 != 0.0) && (auVar17._0_4_ != 0.0)) {
      auVar5 = vcmpss_avx(ZEXT816(0),auVar17,1);
      auVar5 = vblendvps_avx(SUB6416(ZEXT464(0xbf800000),0),SUB6416(ZEXT464(0x3f800000),0),auVar5);
      auVar17 = ZEXT416((uint)(auVar5._0_4_ + auVar17._0_4_ / 1000.0));
    }
  }
  fVar16 = auVar17._0_4_;
  fVar12 = auVar13._0_4_;
  fVar3 = ABS(fVar12) + ABS(fVar16);
  fVar14 = (fVar11 + fStack_c0) - (fVar14 + fVar18);
  fVar18 = (fStack_c4 + fStack_bc) - (fVar19 + auVar4._0_4_);
  fVar11 = ABS(fVar18) + ABS(fVar14);
  if ((fVar16 == 0.0) && (fVar12 == 0.0)) {
    if ((fVar14 == 0.0) && (fVar18 == 0.0)) {
      uVar8 = (ulonglong)*(uint *)(lVar7 + 0x203c);
      uVar9 = (uint)(*(uint *)(lVar7 + 0x203c) <= *(uint *)(lVar7 + 0x1ec0));
      fVar15 = 0.0;
      fVar16 = 0.0;
      fVar12 = 0.0;
    }
    else {
      fVar15 = fVar11;
      fVar16 = fVar14;
      fVar12 = fVar18;
      if (ABS(fVar14) <= ABS(fVar18)) goto LAB_1804c943a;
      uVar9 = (uint)(0.0 < fVar14);
    }
  }
  else {
    fVar15 = fVar3;
    if (ABS(fVar16) <= ABS(fVar12)) {
LAB_1804c943a:
      uVar9 = (0.0 < fVar12) + 2;
    }
    else {
      uVar9 = (uint)(0.0 < fVar16);
    }
  }
  uVar1 = *(uint *)(lVar7 + 0x20f0);
  bVar10 = 0;
  if (uVar9 == uVar1) {
    if (fVar3 < *(float *)(param_1 + 0x24)) {
      *(float *)(param_1 + 0x24) = fVar3;
      *(float *)(param_1 + 0x28) = fVar11;
      return CONCAT71((int7)(uVar8 >> 8),1);
    }
    if (fVar3 == *(float *)(param_1 + 0x24)) {
      if (*(float *)(param_1 + 0x28) <= fVar11) {
        if (fVar11 == *(float *)(param_1 + 0x28)) {
          auVar4 = vpcmpgtq_avx(ZEXT416(uVar1 - 2),SUB6416(ZEXT464(1),0));
          auVar17 = vblendvps_avx(auVar13,auVar17,auVar4);
          bVar10 = 0;
          if (auVar17._0_4_ < 0.0) {
            bVar10 = 1;
          }
        }
      }
      else {
        *(float *)(param_1 + 0x28) = fVar11;
        bVar10 = 1;
      }
    }
  }
  if ((((*(float *)(param_1 + 0x24) == 3.4028235e+38) && (fVar15 < *(float *)(param_1 + 0x2c))) &&
      (*(int *)(lVar7 + 0x204c) == 1)) &&
     ((*(uint *)(*(longlong *)(lVar7 + 0x2040) + 0x14) & 0x10000000) == 0)) {
    if (uVar1 == 0) {
      if (0.0 <= fVar16) {
        return (ulonglong)bVar10;
      }
    }
    else if (uVar1 == 1) {
      if (fVar16 <= 0.0) {
        return (ulonglong)bVar10;
      }
    }
    else if (uVar1 == 2) {
      if (0.0 <= fVar12) {
        return (ulonglong)bVar10;
      }
    }
    else if ((uVar1 != 3) || (fVar12 <= 0.0)) goto LAB_1804c9581;
    *(float *)(param_1 + 0x2c) = fVar15;
    bVar10 = 1;
  }
LAB_1804c9581:
  return (ulonglong)bVar10;
}



