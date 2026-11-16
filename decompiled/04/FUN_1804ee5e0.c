// FUN_1804ee5e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ee5e0 */

void FUN_1804ee5e0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  float fVar12;
  undefined8 uVar13;
  char cVar14;
  undefined1 uVar15;
  int iVar16;
  undefined8 *puVar17;
  longlong lVar18;
  int *piVar19;
  longlong lVar20;
  longlong lVar21;
  uint uVar22;
  ulonglong uVar23;
  uint uVar24;
  float *pfVar25;
  undefined4 uVar26;
  float fVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar30;
  undefined1 auVar31 [64];
  undefined1 auVar32 [16];
  undefined1 auVar33 [64];
  float fVar34;
  undefined1 auVar35 [64];
  float local_res8;
  float local_resc;
  
  lVar11 = DAT_180bb8ae8;
  lVar21 = *(longlong *)(DAT_180bb8ae8 + 0x2338);
  if (lVar21 == 0) {
    FUN_1804c5a40("EndTable() call should only be done while in BeginTable() scope!");
    return;
  }
  if (*(char *)(lVar21 + 0x23d) == '\0') {
    FUN_1804ec880(lVar21);
  }
  uVar24 = *(uint *)(lVar21 + 4);
  lVar6 = *(longlong *)(lVar21 + 400);
  lVar7 = *(longlong *)(lVar21 + 0x188);
  lVar8 = *(longlong *)(lVar21 + 0x10);
  if (*(char *)(lVar21 + 0x23e) != '\0') {
    FUN_1804ef4b0(lVar21);
  }
  if (((((uVar24 & 0x20) != 0) &&
       (uVar23 = (ulonglong)(uint)(int)*(short *)(lVar21 + 0x20e), *(short *)(lVar21 + 0x20e) != -1)
       ) && (*(int *)(DAT_180bb8ae8 + 0x1538) == 0)) &&
     ((*(int *)(DAT_180bb8ae8 + 0x153c) == 0 && (cVar14 = FUN_1804c3590(1), cVar14 != '\0')))) {
    FUN_1804f1600(uVar23 & 0xffffffff);
  }
  if (*(short *)(lVar21 + 0x78) == 0) {
    piVar19 = (int *)(lVar21 + 0x1b0);
  }
  else {
    piVar19 = (int *)(*(longlong *)(lVar21 + 0x1d0) +
                     (longlong)(*(short *)(lVar21 + 0x78) + -1) * 0x18);
  }
  *(undefined8 *)(lVar6 + 0x148) = *(undefined8 *)(lVar8 + 0x88);
  *(undefined8 *)(lVar6 + 0x140) = *(undefined8 *)(lVar8 + 0x90);
  *(undefined8 *)(lVar6 + 0x130) = *(undefined8 *)(lVar8 + 0x98);
  auVar28 = vroundss_avx(ZEXT816(0),ZEXT416(*(uint *)(lVar21 + 0x80)),2);
  auVar35 = ZEXT1664(auVar28);
  if (lVar6 == lVar7) {
    if ((uVar24 >> 0x11 & 1) == 0) {
      auVar28 = vmaxss_avx(ZEXT416(*(uint *)(lVar21 + 0x100)),auVar28);
      *(int *)(lVar21 + 0x110) = auVar28._0_4_;
      *(int *)(lVar21 + 0x100) = auVar28._0_4_;
    }
  }
  else {
    *(int *)(lVar6 + 0x134) = auVar28._0_4_;
  }
  auVar28 = vmaxss_avx(ZEXT416(*(uint *)(lVar21 + 0x120)),ZEXT416((uint)*(float *)(lVar21 + 0x100)))
  ;
  *(int *)(lVar21 + 0x120) = auVar28._0_4_;
  piVar19[1] = (int)(*(float *)(lVar21 + 0x100) - *(float *)(lVar21 + 0xf8));
  fVar34 = 0.0;
  if ((*(uint *)(lVar21 + 4) >> 0x18 & 1) != 0) {
    if ((*(uint *)(lVar21 + 4) >> 10 & 1) == 0) {
      fVar30 = 0.0;
    }
    else {
      fVar30 = *(float *)(lVar21 + 0xb4);
    }
    auVar31 = ZEXT464(*(uint *)(lVar6 + 0x130));
    if (*(short *)(lVar21 + 0x224) != -1) {
      auVar28 = vmaxss_avx(ZEXT416(*(uint *)(lVar6 + 0x130)),
                           ZEXT416((uint)((*(float *)((longlong)*(short *)(lVar21 + 0x224) * 0x78 +
                                                      0x40 + *(longlong *)(lVar21 + 0x18)) +
                                           *(float *)(lVar21 + 0xc4) + *(float *)(lVar21 + 0xc0)) -
                                         fVar30)));
      auVar31 = ZEXT1664(auVar28);
    }
    if (*(short *)(lVar21 + 0x216) != -1) {
      auVar28 = vmaxss_avx(auVar31._0_16_,ZEXT416(*(uint *)(lVar21 + 0xe4)));
      auVar31 = ZEXT1664(auVar28);
    }
    *(float *)(lVar6 + 0x130) = auVar31._0_4_ + *(float *)(*(longlong *)(lVar21 + 0x10) + 0xc);
  }
  if ((uVar24 >> 0x14 & 1) == 0) {
    lVar20 = *(longlong *)(lVar6 + 0x2c8);
    iVar4 = *(int *)(lVar20 + 0xa0);
    iVar16 = iVar4 + -1;
    *(int *)(lVar20 + 0xa0) = iVar16;
    if (iVar16 == 0) {
      puVar17 = (undefined8 *)(*(longlong *)(lVar20 + 0x38) + 0x3c);
    }
    else {
      puVar17 = (undefined8 *)((longlong)(iVar4 + -2) * 0x10 + *(longlong *)(lVar20 + 0xa8));
    }
    uVar9 = puVar17[1];
    *(undefined8 *)(lVar20 + 0x60) = *puVar17;
    *(undefined8 *)(lVar20 + 0x68) = uVar9;
    FUN_1804d9200();
  }
  lVar18 = (longlong)*(int *)(*(longlong *)(lVar6 + 0x2c8) + 0xa0);
  lVar20 = *(longlong *)(*(longlong *)(lVar6 + 0x2c8) + 0xa8);
  uVar26 = *(undefined4 *)(lVar20 + -0xc + lVar18 * 0x10);
  uVar1 = *(undefined4 *)(lVar20 + -8 + lVar18 * 0x10);
  uVar2 = *(undefined4 *)(lVar20 + -4 + lVar18 * 0x10);
  *(undefined4 *)(lVar6 + 0x268) = *(undefined4 *)(lVar20 + -0x10 + lVar18 * 0x10);
  *(undefined4 *)(lVar6 + 0x26c) = uVar26;
  *(undefined4 *)(lVar6 + 0x270) = uVar1;
  *(undefined4 *)(lVar6 + 0x274) = uVar2;
  if ((uVar24 & 0x780) != 0) {
    FUN_1804f0bd0(lVar21);
  }
  uVar9 = *(undefined8 *)(lVar21 + 0x1a8);
  FUN_1804e1d30(uVar9,*(undefined8 *)(lVar6 + 0x2c8));
  if ((*(uint *)(lVar21 + 4) & 0x100000) == 0) {
    FUN_1804f0220(lVar21);
  }
  FUN_1804e19a0(uVar9,*(undefined8 *)(lVar6 + 0x2c8));
  uVar24 = 0;
  fVar30 = 0.0;
  auVar28._12_4_ = 0;
  auVar28._0_12_ = ZEXT812(0);
  auVar28 = auVar28 << 0x20;
  auVar31 = ZEXT1264(ZEXT812(0)) << 0x20;
  auVar32._12_4_ = 0;
  auVar32._0_12_ = ZEXT812(0);
  auVar32 = auVar32 << 0x20;
  auVar33 = ZEXT1264(ZEXT812(0)) << 0x20;
  if (0 < *(int *)(lVar21 + 0x6c)) {
    lVar20 = 0;
    lVar18 = 0;
    fVar30 = 0.0;
    do {
      if ((*(uint *)(*(longlong *)(lVar21 + 0x50) + (lVar18 >> 5) * 4) >> (uVar24 & 0x1f) & 1) != 0)
      {
        lVar10 = *(longlong *)(lVar21 + 0x18);
        uVar5 = *(uint *)(lVar10 + lVar20);
        uVar22 = uVar5 & 0x10;
        if ((uVar22 == 0) || ((uVar5 & 0x20) != 0)) {
          auVar28 = vmaxss_avx(ZEXT416(*(uint *)(lVar10 + 0x48 + lVar20)),
                               ZEXT416(*(uint *)(lVar10 + 0x4c + lVar20)));
          fVar27 = *(float *)(lVar10 + 0x3c + lVar20);
          fVar12 = auVar28._0_4_ - fVar27;
          auVar28 = ZEXT416((uint)fVar12);
          if ((uVar5 >> 0xd & 1) == 0) {
            auVar28 = vmaxss_avx(ZEXT416((uint)fVar12),
                                 ZEXT416((uint)(*(float *)(lVar10 + 0x54 + lVar20) - fVar27)));
          }
          if (((uVar22 != 0) && (fVar27 = *(float *)(lVar10 + 0x20 + lVar20), fVar34 < fVar27)) &&
             (((*(byte *)(lVar21 + 4) & 1) == 0 || ((uVar5 & 0x20) != 0)))) {
            auVar28 = ZEXT416((uint)fVar27);
          }
          auVar28 = vmaxss_avx(auVar28,ZEXT416(*(uint *)(lVar21 + 0xbc)));
          if (uVar22 == 0) {
            auVar31 = ZEXT464((uint)(auVar31._0_4_ + auVar28._0_4_));
          }
          else {
            fVar30 = fVar30 + auVar28._0_4_;
          }
        }
        else {
          fVar27 = *(float *)(lVar10 + 0x10 + lVar20);
          auVar28 = ZEXT416((uint)fVar27);
          fVar30 = fVar30 + fVar27;
        }
        if (((byte)uVar5 & 0x28) == 0x28) {
          auVar29._0_4_ =
               auVar28._0_4_ / (*(float *)(lVar10 + 0x1c + lVar20) / *(float *)(lVar21 + 0xdc));
          auVar29._4_12_ = auVar28._4_12_;
          auVar28 = vmaxss_avx(auVar33._0_16_,auVar29);
          auVar33 = ZEXT1664(auVar28);
        }
      }
      auVar32 = auVar33._0_16_;
      auVar28 = auVar31._0_16_;
      uVar24 = uVar24 + 1;
      lVar18 = lVar18 + 1;
      lVar20 = lVar20 + 0x78;
    } while ((int)uVar24 < *(int *)(lVar21 + 0x6c));
  }
  uVar26 = 1;
  fVar27 = *(float *)(lVar21 + 0xc4) + *(float *)(lVar21 + 0xc4);
  auVar28 = vmaxss_avx(auVar28,auVar32);
  *(float *)(lVar21 + 0xd8) =
       (*(float *)(lVar21 + 0xcc) + *(float *)(lVar21 + 200)) *
       (float)(*(short *)(lVar21 + 0x206) + -1) +
       *(float *)(lVar21 + 0xc0) + *(float *)(lVar21 + 0xc0) +
       (float)(int)*(short *)(lVar21 + 0x206) * fVar27 + fVar30 + auVar28._0_4_;
  if (((*(uint *)(lVar21 + 4) & 0x1000000) == 0) && (lVar6 != lVar7)) {
    *(undefined4 *)(lVar6 + 0x98) = 0;
  }
  else if ((((*(short *)(lVar21 + 0x218) != -1) && (*(short *)(lVar21 + 0x216) == -1)) &&
           (*(char *)(lVar6 + 200) != '\0')) &&
          (*(short *)(lVar21 + 0x7a) == *(short *)(lVar21 + 0x78))) {
    fVar27 = fVar27 + *(float *)(lVar21 + 0xbc);
    fVar30 = *(float *)((longlong)*(short *)(lVar21 + 0x218) * 0x78 + 0xc +
                       *(longlong *)(lVar21 + 0x18));
    if (*(float *)(lVar21 + 0x124) <= fVar30) {
      if (fVar30 <= *(float *)(lVar21 + 300)) goto LAB_1804eeb25;
      fVar27 = (fVar30 - *(float *)(lVar6 + 0x28)) + fVar27;
    }
    else {
      fVar27 = (fVar30 - *(float *)(lVar6 + 0x28)) - fVar27;
    }
    *(float *)(lVar6 + 0xa8) =
         (float)(int)(((fVar27 - *(float *)(lVar6 + 0x70)) - *(float *)(lVar6 + 0x80)) +
                     *(float *)(lVar6 + 0x98));
    *(undefined4 *)(lVar6 + 0xb8) = 0;
    *(undefined4 *)(lVar6 + 0xb0) = 0x3f800000;
  }
LAB_1804eeb25:
  if ((*(short *)(lVar21 + 0x216) != -1) && (*(short *)(lVar21 + 0x78) == *(short *)(lVar21 + 0x7a))
     ) {
    *(float *)(lVar21 + 0xe0) =
         (float)(int)(((((*(float *)(lVar11 + 0x110) - *(float *)(lVar11 + 0x156c)) +
                        (float)(int)(*(float *)(lVar11 + 0x11f0) * 4.0)) -
                       *(float *)((longlong)*(short *)(lVar21 + 0x216) * 0x78 + 8 +
                                 *(longlong *)(lVar21 + 0x18))) - *(float *)(lVar21 + 200)) -
                     (*(float *)(lVar21 + 0xc4) + *(float *)(lVar21 + 0xc4)));
  }
  if ((*(int *)(lVar11 + 0x1554) == 0) || (*(char *)(lVar21 + 0x24f) != '\0')) {
    uVar15 = 0;
  }
  else {
    uVar15 = 1;
  }
  *(undefined1 *)(lVar21 + 0x250) = uVar15;
  if (*(int *)(*(longlong *)(lVar6 + 0x110) + -4 + (longlong)*(int *)(lVar6 + 0x108) * 4) !=
      *piVar19) {
    FUN_1804c5a40("Mismatching PushID/PopID!");
  }
  if (*(int *)(lVar7 + 0x1f8) < *(int *)(lVar8 + 0xa8)) {
    FUN_1804c5a40("Too many PopItemWidth!");
  }
  if (0 < *(short *)(lVar21 + 0x78)) {
    FUN_1804c29a0();
  }
  FUN_1804c29a0();
  pfVar25 = (float *)(lVar21 + 0xf4);
  uVar9 = *(undefined8 *)(lVar8 + 0x70);
  auVar31 = ZEXT464(*(uint *)(lVar7 + 0x130));
  auVar33 = ZEXT464(*(uint *)(lVar7 + 0x134));
  *(undefined8 *)(lVar6 + 0x248) = *(undefined8 *)(lVar8 + 0x68);
  *(undefined8 *)(lVar6 + 0x250) = uVar9;
  uVar9 = *(undefined8 *)(lVar8 + 0x80);
  *(undefined8 *)(lVar6 + 600) = *(undefined8 *)(lVar8 + 0x78);
  *(undefined8 *)(lVar6 + 0x260) = uVar9;
  *(undefined1 *)(lVar6 + 0xd1) = *(undefined1 *)(lVar21 + 0x254);
  *(undefined8 *)(lVar7 + 0x118) = *(undefined8 *)pfVar25;
  *(undefined4 *)(lVar7 + 0x1e8) = *(undefined4 *)(lVar8 + 0xa4);
  *(undefined4 *)(lVar7 + 0x1f8) = *(undefined4 *)(lVar8 + 0xa8);
  *(undefined4 *)(lVar7 + 0x160) = *(undefined4 *)(lVar8 + 0xa0);
  if (lVar6 == lVar7) {
    *(int *)(lVar6 + 0x1a0) = *(int *)(lVar6 + 0x1a0) + -1;
    local_res8 = *(float *)(lVar21 + 0xfc) - *pfVar25;
    local_resc = *(float *)(lVar21 + 0x100) - *(float *)(lVar21 + 0xf8);
    FUN_1804c6420(&local_res8,0xbf800000);
    lVar18 = DAT_180bb8ae8;
    fVar30 = auVar35._0_4_;
    auVar32 = auVar33._0_16_;
    auVar28 = auVar31._0_16_;
    uVar24 = *(uint *)(DAT_180bb8ae8 + 0x1e80);
    uVar5 = *(uint *)(DAT_180bb8ae8 + 0x1e8c);
    *(undefined4 *)(DAT_180bb8ae8 + 0x1ec0) = 0;
    uVar9 = *(undefined8 *)(pfVar25 + 2);
    *(undefined8 *)(lVar18 + 0x1ecc) = *(undefined8 *)pfVar25;
    *(undefined8 *)(lVar18 + 0x1ed4) = uVar9;
    uVar9 = *(undefined8 *)pfVar25;
    uVar13 = *(undefined8 *)(pfVar25 + 2);
    *(uint *)(lVar18 + 0x1ec4) = uVar24 | uVar5;
    lVar20 = *(longlong *)(lVar18 + 0x14d0);
    *(undefined8 *)(lVar18 + 0x1edc) = uVar9;
    *(undefined8 *)(lVar18 + 0x1ee4) = uVar13;
    *(undefined4 *)(lVar18 + 0x1ec8) = 0;
    *(undefined8 *)(lVar18 + 0x1e88) = 0;
    if ((((pfVar25[3] <= *(float *)(lVar20 + 0x26c)) || (*(float *)(lVar20 + 0x274) <= pfVar25[1]))
        || (pfVar25[2] <= *(float *)(lVar20 + 0x268))) || (*(float *)(lVar20 + 0x270) <= *pfVar25))
    {
      if (*(char *)(lVar18 + 0x154e) == '\0') goto LAB_1804eede2;
    }
    else {
      *(undefined4 *)(lVar18 + 0x1ec8) = 0x100;
      uVar26 = 0x101;
    }
    cVar14 = FUN_1804c3600(pfVar25,pfVar25 + 2,1);
    fVar30 = auVar35._0_4_;
    auVar32 = auVar33._0_16_;
    auVar28 = auVar31._0_16_;
    if (cVar14 != '\0') {
      *(undefined4 *)(lVar18 + 0x1ec8) = uVar26;
    }
  }
  else {
    uVar3 = *(ushort *)(lVar6 + 0x174);
    *(ushort *)(lVar6 + 0x174) = uVar3 | (ushort)(1 << ((int)*(char *)(lVar21 + 0x23c) & 0x1fU));
    *(undefined8 *)(lVar11 + 0x2338) = 0;
    FUN_1804bbd00();
    fVar30 = auVar35._0_4_;
    auVar32 = auVar33._0_16_;
    auVar28 = auVar31._0_16_;
    *(longlong *)(lVar11 + 0x2338) = lVar21;
    *(ushort *)(lVar6 + 0x174) = uVar3;
  }
LAB_1804eede2:
  if ((*(uint *)(lVar21 + 4) & 0x10000) == 0) {
    if (fVar34 < *(float *)(lVar8 + 0x48)) {
      auVar28 = vmaxss_avx(auVar28,ZEXT416(*(uint *)(lVar21 + 0xfc)));
      uVar26 = auVar28._0_4_;
    }
    else {
      fVar27 = fVar34;
      if (lVar6 != lVar7) {
        fVar27 = *(float *)(lVar6 + 0xc0);
      }
      fVar27 = fVar27 + *(float *)(*(longlong *)(lVar21 + 0x10) + 0xc) +
               *(float *)(lVar21 + 0xd8) + *(float *)(lVar21 + 0xf4);
      auVar29 = vmaxss_avx(ZEXT416(*(uint *)(lVar7 + 0x138)),
                           ZEXT416((uint)(fVar27 - *(float *)(lVar8 + 0x48))));
      *(int *)(lVar7 + 0x138) = auVar29._0_4_;
      auVar29 = vminss_avx(ZEXT416(*(uint *)(lVar21 + 0xfc)),ZEXT416((uint)fVar27));
      auVar28 = vmaxss_avx(auVar28,auVar29);
      uVar26 = auVar28._0_4_;
    }
  }
  else {
    auVar28 = vmaxss_avx(auVar28,ZEXT416((uint)(*(float *)(lVar21 + 0xd8) +
                                               *(float *)(lVar21 + 0xf4))));
    uVar26 = auVar28._0_4_;
  }
  *(undefined4 *)(lVar7 + 0x130) = uVar26;
  if (fVar34 < *(float *)(lVar8 + 0x4c)) {
    auVar28 = vmaxss_avx(auVar32,ZEXT416(*(uint *)(lVar21 + 0x100)));
    uVar26 = auVar28._0_4_;
  }
  else {
    if (lVar6 == lVar7) {
      fVar27 = *(float *)(lVar21 + 0x108);
    }
    else {
      fVar34 = *(float *)(lVar6 + 0xc4);
      fVar27 = *(float *)(lVar6 + 300);
    }
    fVar34 = fVar34 + (fVar30 - fVar27) + *(float *)(lVar21 + 0xf8);
    auVar28 = vmaxss_avx(ZEXT416(*(uint *)(lVar7 + 0x13c)),
                         ZEXT416((uint)(fVar34 - *(float *)(lVar8 + 0x4c))));
    *(int *)(lVar7 + 0x13c) = auVar28._0_4_;
    auVar28 = vminss_avx(ZEXT416(*(uint *)(lVar21 + 0x100)),ZEXT416((uint)fVar34));
    auVar28 = vmaxss_avx(auVar32,auVar28);
    uVar26 = auVar28._0_4_;
  }
  *(undefined4 *)(lVar7 + 0x134) = uVar26;
  if (*(char *)(lVar21 + 0x247) != '\0') {
    FUN_1804f2410(lVar21);
  }
  *(undefined1 *)(lVar21 + 0x240) = 0;
  iVar4 = *(int *)(lVar11 + 0x2344);
  iVar16 = iVar4 + -1;
  *(int *)(lVar11 + 0x2344) = iVar16;
  if (((iVar16 < 1) ||
      (piVar19 = (int *)(((longlong)iVar4 + -2) * 0xb0 + *(longlong *)(lVar11 + 0x2350)),
      piVar19 == (int *)0x0)) || (*piVar19 != *(int *)(lVar7 + 0x10))) {
    *(undefined8 *)(lVar11 + 0x2338) = 0;
  }
  else {
    lVar21 = (longlong)piVar19[1] * 600 + *(longlong *)(lVar11 + 0x2360);
    *(longlong *)(lVar11 + 0x2338) = lVar21;
    if (lVar21 != 0) {
      *(int **)(lVar21 + 0x10) = piVar19;
      *(int **)(*(longlong *)(lVar11 + 0x2338) + 0x1a8) = piVar19 + 0x14;
    }
  }
  lVar21 = DAT_180bb8ae8;
  if (*(longlong *)(lVar11 + 0x2338) == 0) {
    uVar26 = 0xffffffff;
  }
  else {
    uVar26 = (undefined4)((*(longlong *)(lVar11 + 0x2338) - *(longlong *)(lVar11 + 0x2360)) / 600);
  }
  *(undefined4 *)(lVar7 + 0x1d0) = uVar26;
  lVar11 = *(longlong *)(lVar21 + 0x14d0);
  if ((*(longlong *)(lVar21 + 0x2338) == 0) && (*(longlong *)(lVar11 + 0x1c8) == 0)) {
    *(undefined1 *)(lVar11 + 0x178) = 1;
    return;
  }
  *(undefined1 *)(lVar11 + 0x178) = 0;
  return;
}



