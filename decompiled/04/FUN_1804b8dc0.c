// FUN_1804b8dc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b8dc0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1804b8dc0(void)

{
  undefined8 *puVar1;
  float fVar2;
  undefined8 uVar3;
  bool bVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  short sVar11;
  longlong lVar12;
  longlong lVar13;
  int *piVar14;
  int iVar15;
  undefined8 *puVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong *plVar20;
  longlong *plVar21;
  int iVar22;
  float fVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  float local_res8;
  float local_resc;
  char *local_88 [12];
  
  lVar5 = DAT_180bb8ae8;
  iVar15 = *(int *)(DAT_180bb8ae8 + 0x27c0) + -1;
  if (-1 < iVar15) {
    lVar18 = (longlong)iVar15;
    lVar19 = lVar18 << 5;
    do {
      lVar12 = *(longlong *)(lVar5 + 0x27c8) + lVar19;
      if (*(int *)(lVar12 + 4) == 7) {
        FUN_18063aed0(lVar12,lVar12 + 0x20,(*(int *)(lVar5 + 0x27c0) - lVar18) * 0x20 + -0x20);
        *(int *)(lVar5 + 0x27c0) = *(int *)(lVar5 + 0x27c0) + -1;
      }
      lVar18 = lVar18 + -1;
      lVar19 = lVar19 + -0x20;
      iVar15 = iVar15 + -1;
    } while (-1 < iVar15);
  }
  lVar19 = (longlong)*(int *)(lVar5 + 0x27c0);
  iVar22 = 0;
  iVar15 = 0;
  lVar18 = lVar5;
  if (0 < lVar19) {
    lVar18 = 0;
    do {
      lVar12 = *(longlong *)(lVar5 + 0x27c8);
      if (*(int *)(lVar12 + 4 + lVar18) == 0) {
        (**(code **)(lVar12 + 0x10 + lVar18))(lVar5,(longlong)iVar15 * 0x20 + lVar12);
      }
      iVar15 = iVar15 + 1;
      lVar18 = lVar18 + 0x20;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    lVar18 = DAT_180bb8ae8;
  }
  uVar7 = *(uint *)(lVar18 + 0x28);
  if ((uVar7 & 4) != 0) {
    uVar7 = uVar7 & 0xfffffffb;
    *(undefined1 *)(lVar18 + 0x72) = 1;
    *(uint *)(lVar18 + 0x28) = uVar7;
  }
  if ((uVar7 & 8) != 0) {
    *(undefined1 *)(lVar18 + 0x73) = 0;
    *(uint *)(lVar18 + 0x28) = uVar7 & 0xfffffff7;
  }
  fVar23 = *(float *)(lVar18 + 0x11b8);
  auVar26 = ZEXT864(0);
  if (fVar23 != 0.0) {
    if (fVar23 < 0.0) {
      fVar23 = (float)FUN_18061e150(fVar23);
    }
    else {
      fVar23 = SQRT(fVar23);
    }
    *(float *)(lVar18 + 0xdc0) = fVar23;
  }
  *(undefined4 *)(lVar18 + 0x11b8) = 0;
  FUN_1804cdd10();
  iVar15 = *(int *)(lVar5 + 0xc34);
  *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + 1;
  *(undefined2 *)(lVar5 + 0x26aa) = 0;
  *(undefined4 *)(lVar5 + 0x14c0) = 0;
  sVar11 = (short)(iVar15 / 100);
  *(double *)(lVar5 + 0x10) = (double)*(float *)(lVar5 + 0x40) + *(double *)(lVar5 + 0x10);
  *(ushort *)(lVar5 + 0x2778) =
       (sVar11 + (short)((iVar15 / 100) / 100) * -4) * 0x80 & 0x780U |
       ((short)iVar15 + sVar11 * -4) * 0x800 | (short)(iVar15 / 10000) + 0x30U & 0x7f;
  iVar15 = *(int *)(lVar5 + 0x26cc);
  if (iVar15 < 0) {
    iVar15 = iVar15 + iVar15 / 2;
    iVar8 = 0;
    if (0 < iVar15) {
      iVar8 = iVar15;
    }
    FUN_1804d14d0(lVar5 + 0x26c8,iVar8);
  }
  auVar25 = ZEXT464(0x7f7fffff);
  auVar27 = ZEXT464(0x3f800000);
  *(undefined4 *)(lVar5 + 0x26c8) = 0;
  *(float *)(lVar5 + 0x2ac0) =
       (*(float *)(lVar5 + 0x40) -
       *(float *)(lVar5 + 0x29c8 + (longlong)*(int *)(lVar5 + 0x2ab8) * 4)) +
       *(float *)(lVar5 + 0x2ac0);
  *(float *)(lVar5 + 0x29c8 + (longlong)*(int *)(lVar5 + 0x2ab8) * 4) = *(float *)(lVar5 + 0x40);
  iVar8 = *(int *)(lVar5 + 0x2abc) + 1;
  *(int *)(lVar5 + 0x2ab8) = (*(int *)(lVar5 + 0x2ab8) + 1) % 0x3c;
  iVar15 = 0x3c;
  if (iVar8 < 0x3c) {
    iVar15 = iVar8;
  }
  *(int *)(lVar5 + 0x2abc) = iVar15;
  if (*(float *)(lVar5 + 0x2ac0) <= auVar26._0_4_) {
    fVar23 = 3.4028235e+38;
  }
  else {
    fVar23 = 1.0 / (*(float *)(lVar5 + 0x2ac0) / (float)iVar15);
  }
  *(float *)(lVar5 + 0xe8) = fVar23;
  iVar15 = *(int *)(lVar5 + 0x145c);
  if (iVar15 < 0) {
    iVar15 = iVar15 + iVar15 / 2;
    iVar8 = 0;
    if (0 < iVar15) {
      iVar8 = iVar15;
    }
    FUN_1804d1310(lVar5 + 0x1458,iVar8);
  }
  *(undefined4 *)(lVar5 + 0x1458) = 0;
  FUN_1804c4b50(*(undefined1 *)(lVar5 + 0x79));
  FUN_1804ced60();
  lVar18 = DAT_180bb8ae8;
  plVar20 = *(longlong **)(DAT_180bb8ae8 + 0x11c8);
  uVar7 = *(uint *)(DAT_180bb8ae8 + 0x2c);
  plVar21 = plVar20 + *(int *)(DAT_180bb8ae8 + 0x11c0);
  for (; plVar20 != plVar21; plVar20 = plVar20 + 1) {
    if (*(longlong *)(*plVar20 + 200) == lVar18) {
      FUN_1804e2c30(*plVar20,*(undefined4 *)(lVar18 + 4),(byte)(uVar7 >> 4) & 1);
    }
  }
  puVar16 = *(undefined8 **)(lVar18 + 0x2770);
  puVar1 = puVar16 + *(int *)(lVar18 + 0x2768);
  for (; puVar16 != puVar1; puVar16 = puVar16 + 1) {
    FUN_1804e2ef0(*puVar16);
  }
  FUN_1804b8b60();
  FUN_1804c21e0();
  *(undefined1 *)(lVar5 + 1) = 1;
  plVar20 = *(longlong **)(lVar5 + 0x2030);
  plVar21 = plVar20 + *(int *)(lVar5 + 0x2028);
  lVar18 = DAT_180bb8ae8;
  for (; DAT_180bb8ae8 = lVar18, plVar20 != plVar21; plVar20 = plVar20 + 1) {
    *(undefined1 *)(*plVar20 + 0x60) = 0;
    lVar18 = DAT_180bb8ae8;
  }
  if ((*(char *)(lVar5 + 0x2268) != '\0') &&
     (iVar15 = *(int *)(lVar5 + 0x2284), iVar15 == *(int *)(lVar5 + 0x1550))) {
    if (*(int *)(lVar18 + 0x1550) == iVar15) {
      *(int *)(lVar18 + 0x1554) = iVar15;
    }
    if (*(int *)(lVar18 + 0x1584) == iVar15) {
      *(undefined1 *)(lVar18 + 0x158d) = 1;
    }
  }
  if ((((*(char *)(lVar5 + 0xb1) != '\0') && (*(char *)(lVar5 + 300) != '\0')) ||
      (*(undefined4 *)(lVar5 + 0x1530) = 0, *(char *)(lVar5 + 0xb1) != '\0')) &&
     (1 < *(int *)(lVar5 + 0x1540))) {
    *(undefined4 *)(lVar5 + 0x1530) = *(undefined4 *)(lVar5 + 0x153c);
  }
  if (*(int *)(lVar5 + 0x153c) == 0) {
    *(undefined4 *)(lVar5 + 0x1544) = 0;
LAB_1804b9223:
    *(undefined4 *)(lVar5 + 0x1548) = 0;
  }
  else if ((*(int *)(lVar5 + 0x1538) != 0) && (*(int *)(lVar5 + 0x1550) == *(int *)(lVar5 + 0x1538))
          ) goto LAB_1804b9223;
  iVar15 = *(int *)(lVar5 + 0x1538);
  if (iVar15 != 0) {
    *(float *)(lVar5 + 0x1544) = *(float *)(lVar5 + 0x40) + *(float *)(lVar5 + 0x1544);
    if (*(int *)(lVar5 + 0x1550) != iVar15) {
      *(float *)(lVar5 + 0x1548) = *(float *)(lVar5 + 0x40) + *(float *)(lVar5 + 0x1548);
    }
  }
  iVar8 = *(int *)(lVar5 + 0x1550);
  *(int *)(lVar5 + 0x153c) = iVar15;
  *(undefined4 *)(lVar5 + 0x1540) = 0;
  *(undefined4 *)(lVar5 + 0x1538) = 0;
  *(undefined2 *)(lVar5 + 0x154c) = 0;
  if (((iVar8 != 0) && (*(int *)(lVar5 + 0x1554) != iVar8)) && (*(int *)(lVar5 + 0x1580) == iVar8))
  {
    if ((*(byte *)(lVar5 + 0x28cc) & 2) != 0) {
      FUN_1804cf3e0("NewFrame(): ClearActiveID() 0x%08X because it isn\'t marked alive anymore!\n");
    }
    FUN_1804b7870(0,0);
  }
  iVar15 = *(int *)(lVar5 + 0x1550);
  if ((iVar15 != 0) &&
     (*(float *)(lVar5 + 0x1558) = *(float *)(lVar5 + 0x40) + *(float *)(lVar5 + 0x1558),
     iVar15 == *(int *)(lVar5 + 0x1598))) {
    *(undefined1 *)(lVar5 + 0x15a0) = *(undefined1 *)(lVar5 + 0x155d);
    *(undefined1 *)(lVar5 + 0x15a1) = *(undefined1 *)(lVar5 + 0x155e);
  }
  *(int *)(lVar5 + 0x1580) = iVar15;
  *(undefined4 *)(lVar5 + 0x1554) = 0;
  *(undefined1 *)(lVar5 + 0x154f) = 0;
  *(undefined1 *)(lVar5 + 0x1563) = 0;
  *(undefined1 *)(lVar5 + 0x155c) = 0;
  *(float *)(lVar5 + 0x159c) = *(float *)(lVar5 + 0x40) + *(float *)(lVar5 + 0x159c);
  if ((*(int *)(lVar5 + 0x2608) != 0) && (iVar15 != *(int *)(lVar5 + 0x2608))) {
    *(undefined4 *)(lVar5 + 0x2608) = 0;
  }
  if ((*(int *)(lVar5 + 0x2604) != 0) && (*(int *)(lVar5 + 0x2604) != *(int *)(lVar5 + 0x1584))) {
    *(undefined4 *)(lVar5 + 0x2604) = 0;
  }
  if (iVar15 == 0) {
    *(undefined4 *)(lVar5 + 0x1e70) = 0;
    *(undefined1 *)(lVar5 + 0x1e74) = 0;
  }
  if (*(int *)(lVar5 + 0x1588) < *(int *)(lVar5 + 4)) {
    *(undefined4 *)(lVar5 + 0x1584) = 0;
  }
  *(undefined1 *)(lVar5 + 0x158d) = 0;
  if (*(int *)(lVar5 + 0x2584) < *(int *)(lVar5 + 4)) {
    *(undefined4 *)(lVar5 + 0x2580) = 0;
  }
  iVar15 = *(int *)(lVar5 + 0x24c0);
  if (iVar15 == 0) {
    *(undefined4 *)(lVar5 + 0x24d0) = 0;
  }
  else if (*(float *)(lVar5 + 0x1198) <= *(float *)(lVar5 + 0x24dc)) {
    *(int *)(lVar5 + 0x24d0) = iVar15;
  }
  if (*(longlong *)(lVar5 + 0x14d8) == 0) {
    *(undefined4 *)(lVar5 + 0x24d4) = 0;
  }
  else if (*(float *)(lVar5 + 0x1198) <= *(float *)(lVar5 + 0x24dc)) {
    *(undefined4 *)(lVar5 + 0x24d4) = *(undefined4 *)(*(longlong *)(lVar5 + 0x14d8) + 0x10);
  }
  *(int *)(lVar5 + 0x24c4) = iVar15;
  if (iVar15 == 0) {
    if (auVar26._0_4_ < *(float *)(lVar5 + 0x24c8)) {
      fVar23 = *(float *)(lVar5 + 0x40);
      fVar2 = fVar23 + *(float *)(lVar5 + 0x24cc);
      auVar24 = vmaxss_avx(SUB6416(ZEXT464(0x3e800000),0),ZEXT416((uint)(fVar23 + fVar23)));
      *(float *)(lVar5 + 0x24cc) = fVar2;
      if (auVar24._0_4_ <= fVar2) {
        *(undefined8 *)(lVar5 + 0x24c8) = 0;
      }
    }
  }
  else {
    *(float *)(lVar5 + 0x24c8) = *(float *)(lVar5 + 0x24c8) + *(float *)(lVar5 + 0x40);
    *(undefined4 *)(lVar5 + 0x24cc) = 0;
    *(undefined4 *)(lVar5 + 0x24c0) = 0;
  }
  FUN_1804c3700();
  *(undefined4 *)(lVar5 + 0x22f0) = *(undefined4 *)(lVar5 + 0x22ec);
  *(undefined4 *)(lVar5 + 0x22e4) = *(undefined4 *)(lVar5 + 0x22e0);
  *(undefined4 *)(lVar5 + 0x22e0) = 0;
  *(undefined8 *)(lVar5 + 0x22e8) = 0x7f7fffff;
  *(undefined2 *)(lVar5 + 0x2269) = 0;
  *(undefined4 *)(lVar5 + 0x22f8) = 0;
  if (*(char *)(lVar5 + 0x2268) != '\0') {
    uVar7 = *(uint *)(lVar5 + 0x1550);
    if (uVar7 == 0) {
      uVar7 = 0xffffffff;
      pcVar10 = "##DragDropCancelHandler";
      cVar6 = '#';
      do {
        pcVar10 = pcVar10 + 1;
        if (((cVar6 == '#') && (*pcVar10 == '#')) && (pcVar10[1] == '#')) {
          uVar7 = 0xffffffff;
          pcVar10 = pcVar10 + 2;
        }
        else {
          uVar7 = crc32(uVar7,cVar6);
        }
        cVar6 = *pcVar10;
      } while (cVar6 != '\0');
      uVar7 = ~uVar7;
      if (uVar7 != 0) goto LAB_1804b94fd;
LAB_1804b9502:
      uVar7 = *(uint *)(DAT_180bb8ae8 + 0x1e7c);
    }
    else {
LAB_1804b94fd:
      if (uVar7 == 0xffffffff) goto LAB_1804b9502;
    }
    if ((((*(byte *)(DAT_180bb8ae8 + 0x1e80) & 0x40) == 0) &&
        (cVar6 = FUN_1804c3080(0x20e,0x1000,uVar7), cVar6 != '\0')) &&
       (cVar6 = FUN_1804c52a0(0x20e,0x1000,uVar7), cVar6 != '\0')) {
      FUN_1804b7870(0,0);
      FUN_1804cd120();
    }
  }
  *(undefined8 *)(lVar5 + 0x26b0) = 0;
  FUN_1804ca190();
  FUN_1804c3b80();
  if ((*(char *)(lVar5 + 0x1f91) != '\0') || (*(float *)(lVar5 + 0x90) < auVar26._0_4_)) {
    bVar4 = true;
  }
  else {
    auVar24._8_8_ = 0;
    auVar24._0_8_ = *(ulonglong *)(lVar5 + 0x10);
    auVar24 = vcvtpd2ps_avx(auVar24);
    auVar25 = ZEXT464((uint)(auVar24._0_4_ - *(float *)(lVar5 + 0x90)));
    bVar4 = false;
  }
  plVar20 = *(longlong **)(lVar5 + 0x1478);
  plVar21 = plVar20 + *(int *)(lVar5 + 0x1470);
  if (plVar20 != plVar21) {
    fVar23 = 1.05;
    do {
      lVar18 = *plVar20;
      cVar6 = *(char *)(lVar18 + 0xcc);
      *(char *)(lVar18 + 0xcd) = cVar6;
      *(undefined1 *)(lVar18 + 0xcc) = 0;
      *(undefined1 *)(lVar18 + 0xce) = 0;
      *(undefined2 *)(lVar18 + 0xdc) = *(undefined2 *)(lVar18 + 0xda);
      *(undefined2 *)(lVar18 + 0xda) = 0;
      if ((((cVar6 == '\0') || (bVar4)) && (*(char *)(lVar18 + 0x44c) == '\0')) &&
         (*(float *)(lVar18 + 0x294) < auVar25._0_4_)) {
        lVar19 = *(longlong *)(lVar18 + 0x2c8);
        *(undefined1 *)(lVar18 + 0x44c) = 1;
        iVar8 = (int)((float)*(int *)(lVar19 + 0x10) * fVar23);
        iVar15 = *(int *)(lVar19 + 0x14);
        if (iVar8 < *(int *)(lVar19 + 0x14)) {
          iVar15 = iVar8;
        }
        *(int *)(lVar18 + 0x444) = iVar15;
        iVar8 = (int)((float)*(int *)(lVar19 + 0x20) * fVar23);
        iVar15 = *(int *)(lVar19 + 0x24);
        if (iVar8 < *(int *)(lVar19 + 0x24)) {
          iVar15 = iVar8;
        }
        *(int *)(lVar18 + 0x448) = iVar15;
        FUN_1804aeee0(lVar18 + 0x108);
        FUN_1804d8fc0(*(undefined8 *)(lVar18 + 0x2c8));
        FUN_1804aeee0(lVar18 + 0x1b0);
        FUN_1804aeee0(lVar18 + 0x1f8);
        FUN_1804aeee0(lVar18 + 0x208);
      }
      plVar20 = plVar20 + 1;
    } while (plVar20 != plVar21);
  }
  FUN_1804b8700(lVar5 + 0x110);
  lVar19 = DAT_180bb8ae8;
  auVar24 = auVar27._0_16_;
  lVar18 = *(longlong *)(DAT_180bb8ae8 + 0x14f0);
  if (lVar18 == 0) {
    if ((*(longlong *)(DAT_180bb8ae8 + 0x1578) == 0) ||
       (iVar15 = *(int *)(DAT_180bb8ae8 + 0x1550),
       *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x1578) + 0x8c) != iVar15)) goto LAB_1804b97d2;
    *(int *)(DAT_180bb8ae8 + 0x1554) = iVar15;
    if (*(int *)(lVar19 + 0x1584) == iVar15) {
      *(undefined1 *)(lVar19 + 0x158d) = 1;
    }
    if (*(char *)(lVar19 + 0x118) != '\0') goto LAB_1804b97d2;
  }
  else {
    piVar14 = (int *)(DAT_180bb8ae8 + 0x1550);
    *(int *)(DAT_180bb8ae8 + 0x1554) = *piVar14;
    if (*(int *)(lVar19 + 0x1584) == *piVar14) {
      *(undefined1 *)(lVar19 + 0x158d) = 1;
    }
    if (*(char *)(lVar19 + 0x118) != '\0') {
      if ((-256000.0 <= *(float *)(lVar19 + 0x110)) && (-256000.0 <= *(float *)(lVar19 + 0x114))) {
        local_res8 = *(float *)(lVar19 + 0x110) - *(float *)(lVar19 + 0x156c);
        local_resc = *(float *)(lVar19 + 0x114) - *(float *)(lVar19 + 0x1570);
        FUN_1804c1ac0(*(undefined8 *)(lVar18 + 0x3d8),&local_res8,1);
        FUN_1804c8a10(*(undefined8 *)(lVar19 + 0x14f0),0);
        auVar24 = auVar27._0_16_;
        goto LAB_1804b97d2;
      }
    }
    *(undefined8 *)(DAT_180bb8ae8 + 0x14f0) = 0;
  }
  FUN_1804b7870(0,0);
  auVar24 = auVar27._0_16_;
LAB_1804b97d2:
  fVar23 = 6.0;
  iVar15 = *(int *)(DAT_180bb8ae8 + 0x1ff8) + -1;
  if (-1 < iVar15) {
    lVar18 = (longlong)iVar15;
    plVar21 = (longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x2000) + 8 + lVar18 * 0x38);
    do {
      if ((*plVar21 != 0) && ((*(uint *)(*plVar21 + 0x14) & 0x8000000) != 0)) goto LAB_1804b9835;
      plVar21 = plVar21 + -7;
      lVar18 = lVar18 + -1;
    } while (-1 < lVar18);
  }
  if ((*(longlong *)(lVar5 + 0x2228) == 0) || (*(float *)(lVar5 + 0x2244) <= auVar26._0_4_)) {
    auVar24 = vmaxss_avx(ZEXT416((uint)(*(float *)(lVar5 + 0x2264) - *(float *)(lVar5 + 0x40) * 10.0
                                       )),auVar26._0_16_);
    uVar9 = auVar24._0_4_;
  }
  else {
LAB_1804b9835:
    auVar24 = vminss_avx(ZEXT416((uint)(*(float *)(lVar5 + 0x40) * 6.0 + *(float *)(lVar5 + 0x2264))
                                ),auVar24);
    uVar9 = auVar24._0_4_;
  }
  *(undefined4 *)(lVar5 + 0x2264) = uVar9;
  *(undefined8 *)(lVar5 + 0x2754) = *(undefined8 *)(lVar5 + 0x2740);
  *(undefined8 *)(lVar5 + 0x275c) = *(undefined8 *)(lVar5 + 0x2748);
  *(undefined4 *)(lVar5 + 0x2764) = *(undefined4 *)(lVar5 + 0x2750);
  *(undefined4 *)(lVar5 + 0x24d8) = 0;
  *(undefined8 *)(lVar5 + 0x2ac8) = 0xffffffffffffffff;
  *(undefined4 *)(lVar5 + 0x2ac4) = 0xffffffff;
  *(undefined2 *)(lVar5 + 0x2740) = 0;
  FUN_1804c40f0();
  iVar15 = 0;
  if (0 < *(int *)(lVar5 + 0x2380)) {
    lVar18 = 0;
    lVar19 = 0;
    do {
      lVar12 = DAT_180bb8ae8;
      fVar2 = *(float *)(lVar18 + *(longlong *)(lVar5 + 0x2388));
      if ((auVar26._0_4_ <= fVar2) && (fVar2 < auVar25._0_4_)) {
        lVar17 = *(longlong *)(lVar5 + 0x2360) + lVar19;
        *(undefined8 *)(lVar17 + 0x1d8) = 0;
        lVar13 = *(longlong *)(lVar17 + 0x1f0);
        if (lVar13 != 0) {
          *(undefined8 *)(lVar17 + 0x1e8) = 0;
          if (lVar12 != 0) {
            piVar14 = (int *)(lVar12 + 0x2998 + (longlong)*(short *)(lVar12 + 0x2994) * 8);
            if (*piVar14 != *(int *)(lVar12 + 4)) {
              iVar8 = *(short *)(lVar12 + 0x2994) + 1;
              sVar11 = (short)iVar8 + (short)(iVar8 / 6) * -6;
              *(short *)(lVar12 + 0x2994) = sVar11;
              piVar14 = (int *)(lVar12 + 0x2998 + (longlong)sVar11 * 8);
              *piVar14 = *(int *)(lVar12 + 4);
              *(undefined4 *)(lVar12 + 0x299c + (longlong)sVar11 * 8) = 0;
            }
            *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
            *(int *)(lVar12 + 0x2990) = *(int *)(lVar12 + 0x2990) + 1;
          }
          thunk_FUN_180621380(lVar13);
          *(undefined8 *)(lVar17 + 0x1f0) = 0;
        }
        *(undefined1 *)(lVar17 + 0x242) = 1;
        FUN_1804aeee0(lVar17 + 0x198);
        iVar8 = 0;
        *(undefined1 *)(lVar17 + 0x253) = 1;
        if (0 < *(int *)(lVar17 + 0x6c)) {
          lVar13 = 0;
          do {
            lVar13 = lVar13 + 0x78;
            iVar8 = iVar8 + 1;
            *(undefined2 *)(*(longlong *)(lVar17 + 0x18) + -0x20 + lVar13) = 0xffff;
          } while (iVar8 < *(int *)(lVar17 + 0x6c));
        }
        *(undefined4 *)
         (*(longlong *)(lVar12 + 0x2388) +
         (longlong)(int)((lVar17 - *(longlong *)(lVar12 + 0x2360)) / 600) * 4) = 0xbf800000;
      }
      iVar15 = iVar15 + 1;
      lVar18 = lVar18 + 4;
      lVar19 = lVar19 + 600;
    } while (iVar15 < *(int *)(lVar5 + 0x2380));
  }
  lVar18 = *(longlong *)(lVar5 + 0x2350);
  lVar19 = (longlong)*(int *)(lVar5 + 0x2348) * 0xb0 + lVar18;
  if (lVar18 != lVar19) {
    plVar21 = (longlong *)(lVar18 + 0x28);
    do {
      lVar13 = DAT_180bb8ae8;
      lVar12 = *plVar21;
      if (lVar12 != 0) {
        plVar21[-1] = 0;
        if (lVar13 != 0) {
          piVar14 = (int *)(lVar13 + 0x2998 + (longlong)*(short *)(lVar13 + 0x2994) * 8);
          if (*piVar14 != *(int *)(lVar13 + 4)) {
            iVar15 = *(short *)(lVar13 + 0x2994) + 1;
            sVar11 = (short)iVar15 + (short)(iVar15 / 6) * -6;
            *(short *)(lVar13 + 0x2994) = sVar11;
            piVar14 = (int *)(lVar13 + 0x2998 + (longlong)sVar11 * 8);
            *piVar14 = *(int *)(lVar13 + 4);
            *(undefined4 *)(lVar13 + 0x299c + (longlong)sVar11 * 8) = 0;
          }
          *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
          *(int *)(lVar13 + 0x2990) = *(int *)(lVar13 + 0x2990) + 1;
        }
        thunk_FUN_180621380(lVar12);
        *plVar21 = 0;
      }
      lVar12 = DAT_180bb8ae8;
      if ((auVar26._0_4_ <= *(float *)(plVar21 + -4)) && (*(float *)(plVar21 + -4) < auVar25._0_4_))
      {
        lVar13 = plVar21[-2];
        if (lVar13 != 0) {
          plVar21[-3] = 0;
          if (lVar12 != 0) {
            piVar14 = (int *)(lVar12 + 0x2998 + (longlong)*(short *)(lVar12 + 0x2994) * 8);
            if (*piVar14 != *(int *)(lVar12 + 4)) {
              iVar15 = *(short *)(lVar12 + 0x2994) + 1;
              sVar11 = (short)iVar15 + (short)(iVar15 / 6) * -6;
              *(short *)(lVar12 + 0x2994) = sVar11;
              piVar14 = (int *)(lVar12 + 0x2998 + (longlong)sVar11 * 8);
              *piVar14 = *(int *)(lVar12 + 4);
              *(undefined4 *)(lVar12 + 0x299c + (longlong)sVar11 * 8) = 0;
            }
            *(short *)((longlong)piVar14 + 6) = *(short *)((longlong)piVar14 + 6) + 1;
            *(int *)(lVar12 + 0x2990) = *(int *)(lVar12 + 0x2990) + 1;
          }
          thunk_FUN_180621380(lVar13);
          plVar21[-2] = 0;
        }
        FUN_1804e17d0(plVar21 + 5);
        *(undefined4 *)(plVar21 + -4) = 0xbf800000;
      }
      lVar18 = lVar18 + 0xb0;
      plVar21 = plVar21 + 0x16;
    } while (lVar18 != lVar19);
  }
  if (*(char *)(lVar5 + 0x1f91) != '\0') {
    FUN_1804b7710();
  }
  *(undefined1 *)(lVar5 + 0x1f91) = 0;
  if ((*(longlong *)(lVar5 + 0x2040) != 0) &&
     (*(char *)(*(longlong *)(lVar5 + 0x2040) + 0xcd) == '\0')) {
    iVar15 = *(int *)(DAT_180bb8ae8 + 0x1480) + -1;
    if (-1 < iVar15) {
      lVar18 = (longlong)iVar15;
      plVar21 = (longlong *)(*(longlong *)(DAT_180bb8ae8 + 0x1488) + lVar18 * 8);
      do {
        lVar19 = *plVar21;
        if (((lVar19 != 0) && (*(char *)(lVar19 + 0xcd) != '\0')) &&
           ((*(uint *)(lVar19 + 0x14) & 0x10200) != 0x10200)) goto LAB_1804b9c2f;
        plVar21 = plVar21 + -1;
        lVar18 = lVar18 + -1;
      } while (-1 < lVar18);
    }
    lVar19 = 0;
LAB_1804b9c2f:
    FUN_1804c8a10(lVar19,1);
  }
  FUN_1804d0950(lVar5 + 0x14a0,0);
  iVar15 = *(int *)(lVar5 + 0x200c);
  if (iVar15 < 0) {
    iVar15 = iVar15 + iVar15 / 2;
    iVar8 = 0;
    if (0 < iVar15) {
      iVar8 = iVar15;
    }
    FUN_1804d1230(lVar5 + 0x2008,iVar8);
  }
  piVar14 = (int *)(lVar5 + 0x1fd8);
  *(undefined4 *)(lVar5 + 0x2008) = 0;
  iVar15 = *(int *)(lVar5 + 0x1fdc);
  if (iVar15 < 0) {
    iVar15 = iVar15 + iVar15 / 2;
    iVar8 = 0;
    if (0 < iVar15) {
      iVar8 = iVar15;
    }
    FUN_1804d14d0(piVar14,iVar8);
  }
  *piVar14 = 0;
  if (*(int *)(lVar5 + 0x1fdc) == 0) {
    FUN_1804d14d0(piVar14,8);
  }
  *(undefined4 *)(*(longlong *)(lVar5 + 0x1fe0) + (longlong)*piVar14 * 4) = 0x90;
  iVar15 = *piVar14;
  *piVar14 = iVar15 + 1;
  *(undefined4 *)(lVar5 + 0x1e80) =
       *(undefined4 *)(*(longlong *)(lVar5 + 0x1fe0) + (longlong)iVar15 * 4);
  FUN_1804d0470(lVar5 + 0x1fe8,0);
  lVar18 = DAT_180bb8ae8;
  *(undefined4 *)(DAT_180bb8ae8 + 0x290c) = 0;
  if (*(char *)(lVar18 + 0x2909) != '\0') {
    iVar15 = *(int *)(lVar18 + 0x153c);
    *(undefined4 *)(lVar18 + 0x24d8) = 7;
    cVar6 = FUN_1804c3390(0x20e,1,0);
    if (cVar6 != '\0') {
      *(undefined1 *)(lVar18 + 0x2909) = 0;
    }
    iVar8 = *(int *)(lVar18 + 0x130);
    if (iVar8 == 0x3000) {
      cVar6 = FUN_1804c3510(0,0,0);
      if (cVar6 != '\0') {
        *(undefined1 *)(lVar18 + 0x290a) = 0;
      }
      cVar6 = FUN_1804c3510(1,0,0);
      if (cVar6 != '\0') {
        *(undefined1 *)(lVar18 + 0x290a) = 1;
      }
      cVar6 = FUN_1804c3510(2,0,0);
      if (cVar6 != '\0') {
        *(undefined1 *)(lVar18 + 0x290a) = 2;
      }
    }
    else {
      cVar6 = FUN_1804c3510(*(undefined1 *)(lVar18 + 0x290a),0,0);
      if ((cVar6 != '\0') && (iVar15 != 0)) {
        *(int *)(lVar18 + 0x290c) = iVar15;
        *(undefined1 *)(lVar18 + 0x2909) = 0;
      }
    }
    *(uint *)(lVar18 + 0x1f10) = *(uint *)(lVar18 + 0x1f10) | 0x40;
    *(undefined4 *)(lVar18 + 0x1f80) = 0x3f333333;
    cVar6 = FUN_1804c73e0(0);
    if (cVar6 != '\0') {
      FUN_1804f4780("HoveredId: 0x%08X",iVar15);
      FUN_1804f4780("Press ESC to abort picking.");
      local_88[0] = "Left";
      local_88[1] = "Right";
      local_88[2] = "Middle";
      if (iVar8 == 0x3000) {
        FUN_1804f4780("Remap w/ Ctrl+Shift: click anywhere to select new mouse button.");
      }
      else {
        lVar19 = 0;
        if (iVar15 == 0) {
          lVar19 = 0x10;
        }
        FUN_1804f47f0(lVar19 + DAT_180bb8ae8 + 0xdc8,
                      "Click %s Button to break in debugger! (remap w/ Ctrl+Shift)",
                      local_88[*(byte *)(lVar18 + 0x290a)]);
      }
      FUN_1804c14e0();
    }
    lVar18 = DAT_180bb8ae8;
  }
  iVar15 = 0;
  if ((*(int *)(lVar18 + 0x2984) + 1 == *(int *)(lVar18 + 4)) &&
     (iVar15 = *(int *)(lVar18 + 0x153c), iVar15 == 0)) {
    iVar15 = *(int *)(lVar18 + 0x1550);
  }
  uVar9 = FUN_1804cf6d0(lVar18 + 0x2948,iVar15);
  lVar19 = DAT_180bb8ae8;
  *(undefined4 *)(lVar18 + 0x1534) = uVar9;
  if (auVar26._0_4_ < *(float *)(lVar19 + 0x2910)) {
    lVar18 = (longlong)*(int *)(lVar19 + 0x1f94) * 0x10;
    fVar23 = (float)FUN_180637540(*(float *)(lVar19 + 0x2910) * fVar23);
    FUN_1804b11e0(fVar23 * 0.5 + 0.5,0x3f000000,0x3f000000,lVar19 + 0xdc8 + lVar18,
                  lVar19 + 0xdcc + lVar18,lVar19 + 0xdd0 + lVar18);
    *(undefined4 *)(lVar19 + 0xdd4 + (longlong)*(int *)(lVar19 + 0x1f94) * 0x10) = 0x3f800000;
    fVar23 = *(float *)(lVar19 + 0x2910) - *(float *)(lVar19 + 0x40);
    *(float *)(lVar19 + 0x2910) = fVar23;
    if (fVar23 <= auVar26._0_4_) {
      if (*(int *)(lVar19 + 0x1f94) != 0x3d) {
        uVar3 = *(undefined8 *)(lVar19 + 0x291c);
        puVar1 = (undefined8 *)(lVar19 + 0xdc8 + (longlong)*(int *)(lVar19 + 0x1f94) * 0x10);
        *puVar1 = *(undefined8 *)(lVar19 + 0x2914);
        puVar1[1] = uVar3;
      }
      *(undefined4 *)(lVar19 + 0x1f94) = 0x3d;
    }
  }
  if ((*(char *)(lVar5 + 0x2901) != '\0') &&
     (cVar6 = *(char *)(lVar5 + 0x2901) + -1, *(char *)(lVar5 + 0x2901) = cVar6, cVar6 == '\0')) {
    *(undefined4 *)(lVar5 + 0x1e84) = 0;
    *(undefined1 *)(lVar5 + 0x2902) = 0;
  }
  if ((*(char *)(lVar5 + 0x2900) != '\0') &&
     (cVar6 = *(char *)(lVar5 + 0x2900) + -1, *(char *)(lVar5 + 0x2900) = cVar6, cVar6 == '\0')) {
    FUN_1804cf3e0("(Debug Log: Auto-disabled some ImGuiDebugLogFlags after 2 frames)\n");
    lVar19 = DAT_180bb8ae8;
    *(uint *)(lVar5 + 0x28cc) = *(uint *)(lVar5 + 0x28cc) & ~*(uint *)(lVar5 + 0x28fc);
    *(undefined4 *)(lVar5 + 0x28fc) = 0;
  }
  *(undefined1 *)(lVar5 + 2) = 1;
  *(uint *)(lVar19 + 0x1f10) = *(uint *)(lVar19 + 0x1f10) | 2;
  *(undefined4 *)(lVar19 + 0x1f30) = 0x43c80000;
  *(undefined4 *)(lVar19 + 0x1f34) = 0x43c80000;
  *(undefined4 *)(lVar19 + 0x1f18) = 4;
  FUN_1804bee10("Debug##Default",0,0);
  lVar18 = DAT_180bb8ae8;
  *(undefined4 *)(lVar5 + 0x28a4) = 0;
  *(undefined2 *)(lVar5 + 0x28a8) = *(undefined2 *)(lVar18 + 0x14a0);
  *(undefined2 *)(lVar5 + 0x28aa) = *(undefined2 *)(*(longlong *)(lVar18 + 0x14d0) + 0x108);
  *(undefined2 *)(lVar5 + 0x28ac) = *(undefined2 *)(*(longlong *)(lVar18 + 0x14d0) + 0x1a0);
  *(undefined2 *)(lVar5 + 0x28ae) = *(undefined2 *)(lVar18 + 0x1f98);
  *(undefined2 *)(lVar5 + 0x28b0) = *(undefined2 *)(lVar18 + 0x1fa8);
  *(undefined2 *)(lVar5 + 0x28b2) = *(undefined2 *)(lVar18 + 0x1fb8);
  *(undefined2 *)(lVar5 + 0x28b4) = *(undefined2 *)(lVar18 + 0x1fc8);
  *(undefined2 *)(lVar5 + 0x28b6) = *(undefined2 *)(lVar18 + 0x1fe8);
  *(undefined2 *)(lVar5 + 0x28b8) = *(undefined2 *)(lVar18 + 0x1fd8);
  *(undefined2 *)(lVar5 + 0x28ba) = *(undefined2 *)(lVar18 + 0x2008);
  *(undefined2 *)(lVar5 + 0x28bc) = *(undefined2 *)(lVar18 + 0x26a8);
  if (*(char *)(lVar5 + 0xb4) == '\0') {
    cVar6 = -1;
  }
  else if (*(char *)(lVar5 + 0x2908) == -1) {
    cVar6 = '\0';
  }
  else {
    uVar7 = *(uint *)(lVar5 + 4) & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    iVar15 = (uint)(uVar7 == 0) + (int)*(char *)(lVar5 + 0x2908);
    cVar6 = (char)iVar15 + (char)(iVar15 / 10) * -10;
  }
  *(char *)(lVar5 + 0x2908) = cVar6;
  lVar18 = (longlong)*(int *)(lVar5 + 0x27c0);
  if (0 < lVar18) {
    lVar19 = 0;
    do {
      lVar12 = *(longlong *)(lVar5 + 0x27c8);
      if (*(int *)(lVar12 + 4 + lVar19) == 1) {
        (**(code **)(lVar12 + 0x10 + lVar19))(lVar5,(longlong)iVar22 * 0x20 + lVar12);
      }
      iVar22 = iVar22 + 1;
      lVar19 = lVar19 + 0x20;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  return;
}



