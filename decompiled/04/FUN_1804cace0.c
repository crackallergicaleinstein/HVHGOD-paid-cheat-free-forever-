// FUN_1804cace0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cace0 */

/* WARNING: Removing unreachable block (ram,0x0001804cb320) */

void FUN_1804cace0(void)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  bool bVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  longlong lVar6;
  char cVar7;
  float *pfVar8;
  longlong lVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [64];
  float fVar23;
  float fVar24;
  undefined1 local_res8 [8];
  undefined1 local_b8 [8];
  undefined8 uStack_b0;
  
  lVar6 = DAT_180bb8ae8;
  uVar11 = *(uint *)(DAT_180bb8ae8 + 0x28);
  lVar2 = *(longlong *)(DAT_180bb8ae8 + 0x2040);
  if (((uVar11 & 2) == 0) || ((*(byte *)(DAT_180bb8ae8 + 0x2c) & 1) == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((*(char *)(DAT_180bb8ae8 + 0x20e2) == '\0') || (lVar2 == 0)) {
    *(undefined4 *)(DAT_180bb8ae8 + 0x20f0) = 0xffffffff;
    *(undefined8 *)(lVar6 + 0x20e4) = 0;
    if ((lVar2 != 0) &&
       ((*(longlong *)(lVar6 + 0x2228) == 0 && ((*(uint *)(lVar2 + 0x14) & 0x10000) == 0)))) {
      uVar12 = *(uint *)(DAT_180bb8ae8 + 0x1e70);
      if (((uVar12 & 1) == 0) &&
         (((bVar3 && (cVar7 = FUN_1804c3390(0x27e,5,0xffffffff), cVar7 != '\0')) ||
          (((uVar11 & 1) != 0 && (cVar7 = FUN_1804c3390(0x201,5,0xffffffff), cVar7 != '\0')))))) {
        *(undefined4 *)(lVar6 + 0x20f0) = 0;
      }
      if (((uVar12 & 2) == 0) &&
         (((bVar3 && (cVar7 = FUN_1804c3390(0x27f,5,0xffffffff), cVar7 != '\0')) ||
          (((uVar11 & 1) != 0 && (cVar7 = FUN_1804c3390(0x202,5,0xffffffff), cVar7 != '\0')))))) {
        *(undefined4 *)(lVar6 + 0x20f0) = 1;
      }
      if (((uVar12 & 4) == 0) &&
         (((bVar3 && (cVar7 = FUN_1804c3390(0x280,5,0xffffffff), cVar7 != '\0')) ||
          (((uVar11 & 1) != 0 && (cVar7 = FUN_1804c3390(0x203,5,0xffffffff), cVar7 != '\0')))))) {
        *(undefined4 *)(lVar6 + 0x20f0) = 2;
      }
      if (((uVar12 & 8) == 0) &&
         (((bVar3 && (cVar7 = FUN_1804c3390(0x281,5,0xffffffff), cVar7 != '\0')) ||
          (((uVar11 & 1) != 0 && (cVar7 = FUN_1804c3390(0x204,5,0xffffffff), cVar7 != '\0')))))) {
        *(undefined4 *)(lVar6 + 0x20f0) = 3;
      }
    }
    *(undefined4 *)(lVar6 + 0x20f8) = *(undefined4 *)(lVar6 + 0x20f0);
    *(undefined4 *)(lVar6 + 0x210c) = 0x7f7fffff;
    *(undefined4 *)(lVar6 + 0x2110) = 0x7f7fffff;
    *(undefined4 *)(lVar6 + 0x2114) = 0xff7fffff;
    *(undefined4 *)(lVar6 + 0x2118) = 0xff7fffff;
    uVar19 = 0;
    fVar13 = 0.0;
    if (lVar2 != 0) goto LAB_1804caf2d;
  }
  else {
    if ((*(byte *)(DAT_180bb8ae8 + 0x28cc) & 0x10) != 0) {
      FUN_1804cf3e0("[nav] NavMoveRequestForward %d\n",*(undefined4 *)(DAT_180bb8ae8 + 0x20f0));
    }
LAB_1804caf2d:
    fVar13 = 0.0;
    uVar19 = 0;
    if ((*(int *)(lVar6 + 0x20f0) == -1) && ((uVar11 & 1) != 0)) {
      fVar13 = (float)FUN_1804cbd20();
    }
  }
  *(undefined1 *)(lVar6 + 0x20e2) = 0;
  if (*(int *)(lVar6 + 0x20f0) != -1) {
    FUN_1804c9b10(*(int *)(lVar6 + 0x20f0),*(undefined4 *)(lVar6 + 0x20f8),
                  *(undefined4 *)(lVar6 + 0x20e4),*(undefined4 *)(lVar6 + 0x20e8));
  }
  if ((*(char *)(lVar6 + 0x20e0) != '\0') && (*(int *)(lVar6 + 0x203c) == 0)) {
    if ((*(byte *)(lVar6 + 0x28cc) & 0x10) != 0) {
      if (lVar2 == 0) {
        pcVar10 = "<NULL>";
      }
      else {
        pcVar10 = *(char **)(lVar2 + 8);
      }
      FUN_1804cf3e0("[nav] NavInitRequest: from move, window \"%s\", layer=%d\n",pcVar10,
                    *(undefined4 *)(lVar6 + 0x204c));
    }
    *(undefined2 *)(lVar6 + 0x20a2) = 0x101;
    *(undefined4 *)(lVar6 + 0x20b0) = 0;
    if (*(char *)(lVar6 + 0x76) != '\0') {
      *(undefined1 *)(lVar6 + 0x2038) = 1;
    }
  }
  auVar22 = ZEXT464(0x7f7fffff);
  if ((((*(char *)(lVar6 + 0x20e0) == '\0') || (*(int *)(lVar6 + 0x2090) != 3)) ||
      (*(int *)(lVar6 + 0x204c) != 0)) || (lVar2 == 0)) {
LAB_1804cb21f:
    _local_b8 = ZEXT816(0);
    if (lVar2 == 0) goto LAB_1804cb45c;
  }
  else {
    uVar11 = *(uint *)(lVar6 + 0x20e4);
    fVar24 = (*(float *)(lVar2 + 0x228) - 1.0) - *(float *)(lVar2 + 0x128);
    fVar14 = (*(float *)(lVar2 + 0x234) + 1.0) - *(float *)(lVar2 + 300);
    uVar12 = uVar11 & 10;
    fVar23 = (*(float *)(lVar2 + 0x22c) - 1.0) - *(float *)(lVar2 + 300);
    fVar17 = (*(float *)(lVar2 + 0x230) + 1.0) - *(float *)(lVar2 + 0x128);
    pfVar8 = (float *)FUN_1804c6df0(local_res8,lVar2);
    fVar20 = *pfVar8 - *(float *)(lVar2 + 0x98);
    fVar18 = pfVar8[1] - *(float *)(lVar2 + 0x9c);
    fVar24 = fVar20 + fVar24;
    fVar23 = fVar18 + fVar23;
    fVar20 = fVar20 + fVar17;
    fVar18 = fVar18 + fVar14;
    uVar11 = uVar11 & 5;
    if ((uVar11 != 0) && (uVar12 != 0)) goto LAB_1804cb21f;
    lVar9 = (longlong)*(int *)(lVar6 + 0x204c) + 0x41;
    if (((*(float *)(lVar2 + lVar9 * 0x10) < fVar24) ||
        (*(float *)(lVar2 + 4 + lVar9 * 0x10) < fVar23)) ||
       ((fVar20 < *(float *)(lVar2 + 8 + lVar9 * 0x10) ||
        (fVar18 < *(float *)(lVar2 + 0xc + lVar9 * 0x10))))) {
      if ((*(byte *)(lVar6 + 0x28cc) & 0x10) != 0) {
        FUN_1804cf3e0("[nav] NavMoveRequest: clamp NavRectRel for gamepad move\n");
      }
      auVar15 = ZEXT416((uint)(*(float *)(lVar2 + 0x2c0) * 0.5));
      auVar1 = vminss_avx(ZEXT416((uint)(fVar20 - fVar24)),auVar15);
      fVar14 = -3.4028235e+38;
      auVar15 = vminss_avx(ZEXT416((uint)(fVar18 - fVar23)),auVar15);
      auVar21 = auVar22._0_16_;
      if (uVar11 == 0) {
        auVar16 = ZEXT416((uint)(fVar20 - auVar1._0_4_));
        fVar24 = fVar24 + auVar1._0_4_;
      }
      else {
        auVar16 = auVar21;
        fVar24 = fVar14;
      }
      if (uVar12 == 0) {
        fVar14 = fVar23 + auVar15._0_4_;
        auVar21 = ZEXT416((uint)(fVar18 - auVar15._0_4_));
      }
      lVar9 = (longlong)*(int *)(lVar6 + 0x204c) + 0x41;
      fVar23 = *(float *)(lVar2 + 4 + lVar9 * 0x10);
      fVar20 = fVar14;
      if (fVar14 <= fVar23) {
        auVar1 = vminss_avx(auVar21,ZEXT416((uint)fVar23));
        fVar20 = auVar1._0_4_;
      }
      fVar23 = *(float *)(lVar2 + lVar9 * 0x10);
      fVar18 = fVar24;
      if (fVar24 <= fVar23) {
        auVar1 = vminss_avx(auVar16,ZEXT416((uint)fVar23));
        fVar18 = auVar1._0_4_;
      }
      *(float *)(lVar2 + lVar9 * 0x10) = fVar18;
      *(float *)(lVar2 + 4 + lVar9 * 0x10) = fVar20;
      fVar23 = *(float *)(lVar2 + 0xc + lVar9 * 0x10);
      if (fVar14 <= fVar23) {
        auVar1 = vminss_avx(auVar21,ZEXT416((uint)fVar23));
        fVar14 = auVar1._0_4_;
      }
      fVar23 = *(float *)(lVar2 + 8 + lVar9 * 0x10);
      if (fVar24 <= fVar23) {
        auVar1 = vminss_avx(auVar16,ZEXT416((uint)fVar23));
        fVar24 = auVar1._0_4_;
      }
      *(float *)(lVar2 + 8 + lVar9 * 0x10) = fVar24;
      *(float *)(lVar2 + 0xc + lVar9 * 0x10) = fVar14;
      *(undefined4 *)(lVar6 + 0x203c) = 0;
      auVar5._4_8_ = uStack_b0;
      auVar5._0_4_ = uVar19;
      _local_b8 = auVar5 << 0x20;
    }
    else {
      auVar4._4_8_ = uStack_b0;
      auVar4._0_4_ = uVar19;
      _local_b8 = auVar4 << 0x20;
    }
  }
  lVar9 = (longlong)*(int *)(lVar6 + 0x204c) + 0x41;
  if ((*(float *)(lVar2 + 8 + lVar9 * 0x10) < *(float *)(lVar2 + lVar9 * 0x10)) ||
     (*(float *)(lVar2 + 0xc + lVar9 * 0x10) < *(float *)(lVar2 + 4 + lVar9 * 0x10))) {
    auVar1 = ZEXT816(0);
  }
  else {
    auVar1 = *(undefined1 (*) [16])(lVar2 + lVar9 * 0x10);
  }
  fVar24 = auVar1._0_4_ + *(float *)(lVar2 + 0x128);
  auVar15 = vshufps_avx(auVar1,auVar1,0x55);
  auVar21 = vshufps_avx(auVar1,auVar1,0xaa);
  auVar1 = vshufps_avx(auVar1,auVar1,0xff);
  fVar23 = auVar1._0_4_ + *(float *)(lVar2 + 300);
  fVar20 = auVar15._0_4_ + *(float *)(lVar2 + 300);
  fVar18 = auVar21._0_4_ + *(float *)(lVar2 + 0x128);
  uStack_b0._4_4_ = fVar23;
  local_b8._0_4_ = fVar24;
  uStack_b0._0_4_ = fVar18;
  local_b8._4_4_ = fVar20;
  fVar17 = fVar23;
  fVar14 = fVar20;
  if ((*(uint *)(lVar6 + 0x20e4) >> 0xb & 1) != 0) {
    if ((((*(float *)(lVar2 + 0x228) <= fVar24) && (*(float *)(lVar2 + 0x22c) <= fVar20)) &&
        (fVar18 <= *(float *)(lVar2 + 0x230))) && (fVar23 <= *(float *)(lVar2 + 0x234))) {
      *(uint *)(lVar6 + 0x20e4) = *(uint *)(lVar6 + 0x20e4) | 0x20;
    }
    fVar14 = fVar20 + fVar13;
    fVar17 = fVar23 + fVar13;
    local_b8._4_4_ = fVar14;
    uStack_b0._4_4_ = fVar17;
    *(float *)(lVar6 + 0x210c) = fVar24;
    *(float *)(lVar6 + 0x2110) = fVar20;
    *(float *)(lVar6 + 0x2114) = fVar18;
    *(float *)(lVar6 + 0x2118) = fVar23;
    if (fVar14 < *(float *)(lVar6 + 0x2110)) {
      *(float *)(lVar6 + 0x2110) = fVar14;
    }
    if (*(float *)(lVar6 + 0x2114) < fVar18) {
      *(float *)(lVar6 + 0x2114) = fVar18;
    }
    if (*(float *)(lVar6 + 0x2118) < fVar17) {
      *(float *)(lVar6 + 0x2118) = fVar17;
    }
  }
  auVar1 = _local_b8;
  if (*(char *)(lVar6 + 0x20e0) != '\0') {
    uVar11 = *(uint *)(lVar6 + 0x20f0);
    lVar9 = (longlong)*(int *)(lVar6 + 0x204c);
    lVar2 = *(longlong *)(lVar2 + 0x3f0);
    fVar13 = *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x2040) + 0x128);
    fVar23 = *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x2040) + 300);
    fVar20 = auVar22._0_4_;
    if ((*(byte *)(lVar6 + 0x20e4) & 0x80) == 0) {
      if (*(float *)(lVar2 + 0x430 + lVar9 * 8) == fVar20) {
        auVar15 = vminss_avx(ZEXT416((uint)(fVar24 + 1.0)),ZEXT416((uint)fVar18));
        *(float *)(lVar2 + 0x430 + lVar9 * 8) = auVar15._0_4_ - fVar13;
      }
      if (*(float *)(lVar2 + 0x434 + lVar9 * 8) == fVar20) {
        *(float *)(lVar2 + 0x434 + lVar9 * 8) = (fVar17 + fVar14) * 0.5 - fVar23;
      }
    }
    if ((uVar11 - 2 < 2) && (fVar24 = *(float *)(lVar2 + 0x430 + lVar9 * 8), fVar24 != fVar20)) {
      fVar13 = fVar13 + fVar24;
      uStack_b0._0_4_ = fVar13;
      local_b8._0_4_ = fVar13;
    }
    else if ((uVar11 < 2) && (fVar13 = *(float *)(lVar2 + 0x434 + lVar9 * 8), fVar13 != fVar20)) {
      fVar23 = fVar23 + fVar13;
      uStack_b0._4_4_ = fVar23;
      local_b8._0_4_ = auVar1._0_4_;
      local_b8._4_4_ = fVar23;
    }
  }
LAB_1804cb45c:
  *(undefined1 (*) [8])(lVar6 + 0x20fc) = local_b8;
  *(undefined8 *)(lVar6 + 0x2104) = uStack_b0;
  return;
}



