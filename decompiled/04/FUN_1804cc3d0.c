// FUN_1804cc3d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cc3d0 */

void FUN_1804cc3d0(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  bool bVar4;
  bool bVar5;
  longlong lVar6;
  char cVar7;
  char cVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  char *pcVar12;
  int *piVar13;
  longlong lVar14;
  float *pfVar15;
  uint uVar16;
  longlong lVar17;
  uint uVar18;
  undefined4 *puVar19;
  longlong lVar20;
  longlong *plVar21;
  byte bVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [64];
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [64];
  float local_res8;
  float local_resc;
  uint local_res18;
  longlong local_res20;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80 [16];
  
  lVar6 = DAT_180bb8ae8;
  iVar11 = *(int *)(DAT_180bb8ae8 + 0x1ff8) + -1;
  local_res20 = 0;
  local_res18 = local_res18 & 0xffffff00;
  if (-1 < iVar11) {
    lVar17 = (longlong)iVar11;
    plVar21 = (longlong *)(lVar17 * 0x38 + *(longlong *)(DAT_180bb8ae8 + 0x2000) + 8);
    do {
      lVar20 = *plVar21;
      if ((lVar20 != 0) && ((*(uint *)(lVar20 + 0x14) & 0x8000000) != 0)) {
        *(undefined8 *)(DAT_180bb8ae8 + 0x2228) = 0;
        goto LAB_1804cc462;
      }
      plVar21 = plVar21 + -7;
      lVar17 = lVar17 + -1;
    } while (-1 < lVar17);
  }
  lVar20 = 0;
LAB_1804cc462:
  auVar30._12_4_ = 0;
  auVar30._0_12_ = ZEXT812(0);
  auVar31 = ZEXT1264(ZEXT812(0)) << 0x20;
  if ((*(longlong *)(lVar6 + 0x2230) != 0) && (*(longlong *)(lVar6 + 0x2228) == 0)) {
    auVar30 = vmaxss_avx(ZEXT416((uint)(*(float *)(lVar6 + 0x2244) - *(float *)(lVar6 + 0x40) * 10.0
                                       )),auVar30 << 0x20);
    *(float *)(lVar6 + 0x2244) = auVar30._0_4_;
    if ((*(float *)(lVar6 + 0x2264) <= 0.0) && (auVar30._0_4_ <= 0.0)) {
      *(undefined8 *)(lVar6 + 0x2230) = 0;
    }
  }
  uVar18 = 0xffffffff;
  pcVar12 = "##NavUpdateWindowing";
  cVar7 = '#';
  do {
    pcVar12 = pcVar12 + 1;
    if (((cVar7 == '#') && (*pcVar12 == '#')) && (pcVar12[1] == '#')) {
      uVar18 = 0xffffffff;
      pcVar12 = pcVar12 + 2;
    }
    else {
      uVar18 = crc32(uVar18,cVar7);
    }
    cVar7 = *pcVar12;
  } while (cVar7 != '\0');
  uVar1 = *(uint *)(lVar6 + 0x28);
  uVar18 = ~uVar18;
  if (((uVar1 & 2) == 0) || ((*(byte *)(lVar6 + 0x2c) & 1) == 0)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  lVar17 = lVar6;
  if ((lVar20 == 0) && (*(int *)(lVar6 + 0x2220) != 0)) {
    cVar7 = FUN_1804c5370(*(int *)(lVar6 + 0x2220),0x2001,uVar18);
    lVar17 = DAT_180bb8ae8;
    if (cVar7 == '\0') goto LAB_1804cc547;
    bVar22 = 1;
LAB_1804cc54f:
    if (*(int *)(lVar6 + 0x2224) == 0) goto LAB_1804cc576;
    cVar7 = FUN_1804c5370(*(int *)(lVar6 + 0x2224),0x2001,uVar18);
    lVar17 = DAT_180bb8ae8;
    if (cVar7 == '\0') goto LAB_1804cc576;
    cVar7 = '\x01';
  }
  else {
LAB_1804cc547:
    bVar22 = 0;
    if (lVar20 == 0) goto LAB_1804cc54f;
LAB_1804cc576:
    cVar7 = '\0';
  }
  local_res8 = (float)CONCAT31(local_res8._1_3_,cVar7);
  if ((!bVar4) || (*(longlong *)(lVar6 + 0x2228) != 0)) {
LAB_1804cc5b1:
    bVar4 = false;
  }
  else {
    cVar8 = FUN_1804c5370(0x27a,0x2000,uVar18);
    lVar17 = DAT_180bb8ae8;
    if (cVar8 == '\0') goto LAB_1804cc5b1;
    bVar4 = true;
  }
  if ((lVar20 != 0) || (!bVar4)) {
    bVar5 = false;
    if (lVar20 == 0) goto LAB_1804cc5c7;
LAB_1804cc5e0:
    bVar9 = 0;
  }
  else {
    bVar5 = true;
LAB_1804cc5c7:
    if ((*(longlong *)(lVar6 + 0x2228) != 0) || ((bVar22 == 0 && (cVar7 == '\0'))))
    goto LAB_1804cc5e0;
    bVar9 = 1;
  }
  bVar23 = false;
  if (bVar4) {
    *(undefined1 *)(lVar6 + 0x224c) = 1;
    *(undefined4 *)(lVar6 + 0x2250) = 0x27a;
    *(undefined4 *)(lVar6 + 0x2090) = 3;
    *(undefined4 *)(lVar6 + 0x2248) = 3;
  }
  if ((bVar5) || (bVar9 != 0)) {
    lVar20 = *(longlong *)(lVar6 + 0x2040);
    if ((lVar20 == 0) ||
       (((*(char *)(lVar20 + 0xcd) == '\0' || (lVar20 != *(longlong *)(lVar20 + 0x3d8))) ||
        ((*(uint *)(lVar20 + 0x14) & 0x20000) != 0)))) {
      lVar14 = FUN_1804cc2a0(*(int *)(lVar6 + 0x1480) + -1,0x80000001,0xffffffff);
      if (lVar14 == 0) goto LAB_1804cc6ed;
    }
    else {
      lVar14 = lVar20;
    }
    if ((bVar9 != 0) || (*(char *)(lVar6 + 0x221c) != '\0')) {
      uVar3 = *(undefined8 *)(lVar14 + 0x3d8);
      *(undefined8 *)(lVar6 + 0x2230) = uVar3;
      *(undefined8 *)(lVar6 + 0x2228) = uVar3;
    }
    *(undefined8 *)(lVar6 + 0x2240) = 0;
    *(undefined8 *)(lVar6 + 0x225c) = 0;
    *(undefined8 *)(lVar6 + 0x2254) = 0;
    iVar11 = (bVar9 ^ 1) + 2;
    bVar23 = lVar20 == 0;
    *(int *)(lVar6 + 0x2090) = iVar11;
    cVar7 = local_res8._0_1_;
    *(int *)(lVar6 + 0x2248) = iVar11;
    if ((bVar22 != 0) || (local_res8._0_1_ != '\0')) {
      FUN_1804c51f0((*(uint *)(lVar6 + 0x2224) | *(uint *)(lVar6 + 0x2220)) & 0xf000,uVar18);
    }
  }
  else {
LAB_1804cc6ed:
    cVar7 = local_res8._0_1_;
  }
  fVar25 = 0.2;
  auVar28 = ZEXT464(0x3f800000);
  auVar30 = auVar28._0_16_;
  if (((*(longlong *)(lVar6 + 0x2228) != 0) || (*(char *)(lVar6 + 0x224c) != '\0')) &&
     (*(int *)(lVar6 + 0x2248) == 3)) {
    if (*(longlong *)(lVar6 + 0x2228) != 0) {
      fVar24 = *(float *)(lVar6 + 0x40) + *(float *)(lVar6 + 0x2240);
      *(float *)(lVar6 + 0x2240) = fVar24;
      fVar24 = (fVar24 - 0.2) / 0.05;
      if (auVar31._0_4_ <= fVar24) {
        auVar30 = vminss_avx(auVar30,ZEXT416((uint)fVar24));
      }
      else {
        auVar30 = auVar31._0_16_;
      }
      auVar30 = vmaxss_avx(ZEXT416(*(uint *)(lVar6 + 0x2244)),auVar30);
      *(int *)(lVar6 + 0x2244) = auVar30._0_4_;
      bVar9 = FUN_1804c3390(0x282,1,0);
      bVar10 = FUN_1804c3390(0x283,1,0);
      auVar30 = auVar28._0_16_;
      if (((uint)bVar9 - (uint)bVar10 != 0) && (!bVar23)) {
        FUN_1804cc330((uint)bVar9 - (uint)bVar10);
        auVar30 = auVar28._0_16_;
        *(undefined4 *)(lVar6 + 0x2244) = 0x3f800000;
      }
    }
    if ((*(char *)(lVar17 + 0x8d4) == '\0') || (*(char *)(lVar17 + 0x1b94) != '\0')) {
      if ((*(byte *)(lVar6 + 0x224c) & *(float *)(lVar6 + 0x2244) < auVar30._0_4_) == 0) {
        local_res20 = *(longlong *)(lVar6 + 0x2228);
      }
      else if (*(longlong *)(lVar6 + 0x2040) != 0) {
        local_res18 = CONCAT31(local_res18._1_3_,1);
      }
      *(undefined8 *)(lVar6 + 0x2228) = 0;
      *(undefined1 *)(lVar6 + 0x224c) = 0;
    }
  }
  if ((*(longlong *)(lVar6 + 0x2228) == 0) || (*(int *)(lVar6 + 0x2248) != 2)) {
LAB_1804cc8c8:
    lVar20 = local_res20;
  }
  else {
    fVar24 = *(float *)(lVar6 + 0x40) + *(float *)(lVar6 + 0x2240);
    *(float *)(lVar6 + 0x2240) = fVar24;
    uVar18 = 0xf000;
    if (*(uint *)(lVar6 + 0x2220) != 0) {
      uVar18 = *(uint *)(lVar6 + 0x2220);
    }
    fVar25 = (fVar24 - fVar25) / 0.05;
    uVar16 = 0xf000;
    if (*(uint *)(lVar6 + 0x2224) != 0) {
      uVar16 = *(uint *)(lVar6 + 0x2224);
    }
    if (auVar31._0_4_ <= fVar25) {
      auVar30 = vminss_avx(auVar30,ZEXT416((uint)fVar25));
    }
    else {
      auVar30 = auVar31._0_16_;
    }
    auVar30 = vmaxss_avx(ZEXT416(*(uint *)(lVar6 + 0x2244)),auVar30);
    *(int *)(lVar6 + 0x2244) = auVar30._0_4_;
    if (((bVar22 != 0) || (cVar7 != '\0')) && (!bVar23)) {
      FUN_1804cc330((bVar22 ^ 1) * 2 + -1);
      goto LAB_1804cc8c8;
    }
    if ((*(uint *)(lVar6 + 0x130) & uVar16 & uVar18 & 0xf000) == (uVar16 & uVar18 & 0xf000))
    goto LAB_1804cc8c8;
    lVar20 = *(longlong *)(lVar6 + 0x2228);
  }
  bVar4 = false;
  local_88 = 0x211;
  local_84 = 0x215;
  if ((*(longlong *)(lVar6 + 0x2040) != 0) &&
     ((*(uint *)(*(longlong *)(lVar6 + 0x2040) + 0x14) & 0x10000) == 0)) {
    puVar19 = &local_88;
    do {
      if ((uVar1 & 1) != 0) {
        uVar2 = *puVar19;
        cVar7 = FUN_1804c3390(uVar2,0,0xffffffff);
        if (cVar7 != '\0') {
          bVar4 = true;
          *(undefined4 *)(lVar6 + 0x2250) = uVar2;
          *(undefined1 *)(lVar6 + 0x224c) = 1;
          *(undefined4 *)(lVar6 + 0x2090) = 2;
          *(undefined4 *)(lVar6 + 0x2248) = 2;
          break;
        }
      }
      puVar19 = puVar19 + 1;
    } while (puVar19 != local_80);
  }
  fVar25 = auVar31._0_4_;
  if ((*(char *)(lVar6 + 0x224c) == '\0') || (*(int *)(lVar6 + 0x2248) != 2)) goto LAB_1804ccbbe;
  if ((((0 < *(int *)(lVar6 + 0xbe0)) ||
       ((((*(char *)(lVar6 + 300) != '\0' || (*(char *)(lVar6 + 0x12d) != '\0')) ||
         (*(char *)(lVar6 + 0x12f) != '\0')) ||
        ((!bVar4 && (*(double *)(lVar6 + 0x15b8) == *(double *)(lVar6 + 0x10))))))) ||
      ((((iVar11 = *(int *)(lVar6 + 0x2250), 0x1ff < iVar11 && (iVar11 < 0x29b)) ||
        (((iVar11 == 0x1000 || (iVar11 == 0x2000)) || ((iVar11 == 0x4000 || (iVar11 == 0x8000))))))
       && ((((*(char *)(lVar17 + 0x1e74) != '\0' && (*(int *)(lVar17 + 0x1550) != -1)) &&
            (iVar11 - 0x200U < 0x78)) || (piVar13 = (int *)FUN_1804af210(lVar17), *piVar13 != -1))))
      )) || (*(int *)(lVar17 + 0x1d00) != -1)) {
    *(undefined1 *)(lVar6 + 0x224c) = 0;
  }
  iVar11 = *(int *)(lVar6 + 0x2250);
  pcVar12 = (char *)FUN_1804af1b0();
  if (((auVar31._0_4_ <= *(float *)(pcVar12 + 8)) && (*pcVar12 == '\0')) &&
     ((((((0x9a < iVar11 - 0x200U && ((iVar11 != 0x1000 && (iVar11 != 0x2000)))) &&
         (iVar11 != 0x4000)) && (iVar11 != 0x8000)) ||
       (lVar14 = FUN_1804af210(lVar17,iVar11), *(char *)(lVar14 + 8) == '\0')) &&
      ((*(char *)(lVar6 + 0x224c) != '\0' &&
       ((*(int *)(lVar6 + 0x1550) == 0 || (*(char *)(lVar6 + 0x155f) != '\0')))))))) {
    pfVar15 = (float *)(lVar6 + 0xae8);
    if (pfVar15 == (float *)0x0) {
      pfVar15 = (float *)(lVar17 + 0x110);
    }
    if ((*pfVar15 < -256000.0) || (pfVar15[1] < -256000.0)) {
      cVar7 = '\0';
    }
    else {
      cVar7 = '\x01';
    }
    pfVar15 = (float *)(lVar6 + 0x110);
    if (pfVar15 == (float *)0x0) {
      pfVar15 = (float *)(lVar17 + 0x110);
    }
    if ((*pfVar15 < -256000.0) || (pfVar15[1] < -256000.0)) {
      cVar8 = '\0';
    }
    else {
      cVar8 = '\x01';
    }
    local_res18 = local_res18 & 0xff;
    if (cVar8 == cVar7) {
      local_res18 = 1;
    }
  }
  iVar11 = *(int *)(lVar6 + 0x2250);
  pcVar12 = (char *)FUN_1804af1b0(iVar11);
  fVar25 = auVar31._0_4_;
  if (*pcVar12 != '\0') {
    if ((((0x9a < iVar11 - 0x200U) && (iVar11 != 0x1000)) && (iVar11 != 0x2000)) &&
       ((iVar11 != 0x4000 && (iVar11 != 0x8000)))) goto LAB_1804ccbbe;
    lVar14 = FUN_1804af210(lVar17,iVar11);
    fVar25 = auVar31._0_4_;
    if (*(char *)(lVar14 + 8) == '\0') goto LAB_1804ccbbe;
  }
  *(undefined1 *)(lVar6 + 0x224c) = 0;
LAB_1804ccbbe:
  if ((*(longlong *)(lVar6 + 0x2228) != 0) &&
     ((*(byte *)(*(longlong *)(lVar6 + 0x2228) + 0x14) & 4) == 0)) {
    fVar24 = fVar25;
    fVar26 = fVar25;
    if (*(int *)(lVar6 + 0x2090) == 2) {
      if (*(char *)(lVar6 + 0x12d) == '\0') {
        fVar24 = *(float *)(lVar17 + 0x160) - *(float *)(lVar17 + 0x150);
        fVar26 = *(float *)(lVar17 + 0x180) - *(float *)(lVar17 + 0x170);
      }
    }
    else if (*(int *)(lVar6 + 0x2090) == 3) {
      fVar24 = *(float *)(lVar17 + 0x9d0) - *(float *)(lVar17 + 0x9c0);
      fVar26 = *(float *)(lVar17 + 0x9f0) - *(float *)(lVar17 + 0x9e0);
    }
    if ((fVar24 != fVar25) || (fVar26 != fVar25)) {
      fVar27 = *(float *)(lVar6 + 0x40) * 800.0 * *(float *)(lVar17 + 0x11ac);
      fVar24 = fVar24 * fVar27 + *(float *)(lVar6 + 0x2254);
      fVar26 = fVar26 * fVar27 + *(float *)(lVar6 + 0x2258);
      fVar29 = (float)(int)fVar24;
      fVar27 = (float)(int)fVar26;
      *(float *)(lVar6 + 0x2254) = fVar24;
      *(float *)(lVar6 + 0x2258) = fVar26;
      *(undefined1 *)(lVar6 + 0x2039) = 1;
      if ((fVar29 != fVar25) || (fVar27 != fVar25)) {
        lVar14 = *(longlong *)(*(longlong *)(lVar6 + 0x2228) + 0x3d8);
        local_res8 = fVar29 + *(float *)(lVar14 + 0x28);
        local_resc = fVar27 + *(float *)(lVar14 + 0x2c);
        FUN_1804c1ac0(lVar14,&local_res8,1);
        *(float *)(lVar6 + 0x2258) = *(float *)(lVar6 + 0x2258) - fVar27;
        *(float *)(lVar6 + 0x2254) = *(float *)(lVar6 + 0x2254) - fVar29;
      }
    }
  }
  if (lVar20 != 0) {
    if ((*(longlong *)(lVar17 + 0x2040) == 0) ||
       (lVar20 != *(longlong *)(*(longlong *)(lVar17 + 0x2040) + 0x3d8))) {
      FUN_1804b7870(0,0);
      FUN_1804c8df0();
      FUN_1804c7960(lVar20,0);
      FUN_1804c8a10(lVar20,1);
      lVar20 = *(longlong *)(lVar17 + 0x2040);
      if (*(int *)(lVar20 + 0x408) == 0) {
        FUN_1804c9d70(lVar20,0);
      }
      if (*(short *)(lVar20 + 0x176) == 2) {
        *(undefined4 *)(lVar17 + 0x204c) = 1;
      }
    }
    *(undefined8 *)(lVar17 + 0x2228) = 0;
  }
  if (((char)local_res18 != '\0') && (*(longlong *)(lVar6 + 0x2040) != 0)) {
    FUN_1804b7870(0,0);
    lVar17 = *(longlong *)(lVar6 + 0x2040);
    plVar21 = (longlong *)(lVar17 + 0x3c8);
    lVar20 = *plVar21;
    while (((lVar20 != 0 && ((*(byte *)(lVar17 + 0x174) & 2) == 0)) &&
           ((*(uint *)(lVar17 + 0x14) & 0x15000000) == 0x1000000))) {
      lVar17 = *plVar21;
      plVar21 = (longlong *)(lVar17 + 0x3c8);
      lVar20 = *plVar21;
    }
    lVar20 = *(longlong *)(lVar6 + 0x2040);
    if (lVar17 != lVar20) {
      FUN_1804c8a10(lVar17,0);
      *(longlong *)(lVar17 + 0x400) = lVar20;
    }
    if ((*(byte *)(*(longlong *)(lVar6 + 0x2040) + 0x174) & 2) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(uint *)(lVar6 + 0x204c) ^ 1;
    }
    if (uVar18 != *(uint *)(lVar6 + 0x204c)) {
      if (uVar18 == 1) {
        *(undefined4 *)(*(longlong *)(lVar6 + 0x2040) + 0x40c) = 0;
      }
      FUN_1804c9cb0();
      FUN_1804c8df0();
    }
  }
  return;
}



