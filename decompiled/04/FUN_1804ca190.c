// FUN_1804ca190 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ca190 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804ca190(void)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  char cVar9;
  undefined1 uVar10;
  char cVar11;
  char *pcVar12;
  longlong lVar13;
  longlong lVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong *puVar21;
  byte bVar22;
  uint uVar23;
  uint unaff_R14D;
  float fVar24;
  float fVar25;
  undefined1 auVar26 [16];
  undefined1 in_ZMM6 [64];
  undefined1 auVar27 [64];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 in_ZMM7 [64];
  undefined1 auVar30 [64];
  float fVar31;
  undefined1 in_ZMM8 [64];
  undefined1 auVar32 [64];
  undefined1 auStack_c8 [32];
  char local_a8;
  byte local_a7;
  uint local_a4 [3];
  int local_98 [8];
  ulonglong local_78 [6];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  lVar8 = DAT_180bb8ae8;
  local_78[4] = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  pbVar1 = (byte *)(DAT_180bb8ae8 + 0x28);
  local_48 = in_ZMM8._0_16_;
  *(undefined1 *)(DAT_180bb8ae8 + 0xe3) = 0;
  if (((*pbVar1 & 2) == 0) || ((*(byte *)(lVar8 + 0x2c) & 1) == 0)) {
    bVar7 = false;
    local_a8 = '\0';
  }
  else {
    bVar7 = true;
    local_a8 = '\x01';
    local_78[0] = 0x27a0000027b;
    local_78[1] = 0x27d0000027c;
    local_78[2] = 0x27e0000027f;
    local_78[3] = 0x28100000280;
    if (*(int *)(lVar8 + 0x2090) != 3) {
      puVar21 = local_78;
      local_a8 = '\x01';
      do {
        iVar19 = (int)*puVar21;
        in_ZMM6 = ZEXT1664(in_ZMM6._0_16_);
        in_ZMM7 = ZEXT1664(in_ZMM7._0_16_);
        pcVar12 = (char *)FUN_1804af1b0(iVar19);
        if ((*pcVar12 != '\0') &&
           (((((0x9a < iVar19 - 0x200U && (iVar19 != 0x1000)) && (iVar19 != 0x2000)) &&
             ((iVar19 != 0x4000 && (iVar19 != 0x8000)))) ||
            (lVar13 = FUN_1804af210(lVar8,iVar19), *(char *)(lVar13 + 8) == '\0')))) {
          *(undefined4 *)(lVar8 + 0x2090) = 3;
        }
        puVar21 = (ulonglong *)((longlong)puVar21 + 4);
      } while (puVar21 != local_78 + 4);
    }
  }
  auVar28 = in_ZMM7._0_16_;
  auVar26 = in_ZMM6._0_16_;
  bVar22 = *(byte *)(lVar8 + 0x28) & 1;
  local_98[4] = 0x201;
  local_98[0] = 0x20c;
  local_98[1] = 0x20d;
  local_98[2] = 0x20e;
  local_98[3] = 0x202;
  local_98[5] = 0x203;
  local_98[6] = 0x204;
  local_a7 = bVar22;
  if ((bVar22 != 0) && (*(int *)(lVar8 + 0x2090) != 2)) {
    piVar15 = local_98;
    do {
      iVar19 = *piVar15;
      in_ZMM6 = ZEXT1664(in_ZMM6._0_16_);
      in_ZMM7 = ZEXT1664(in_ZMM7._0_16_);
      pcVar12 = (char *)FUN_1804af1b0(iVar19);
      if ((*pcVar12 != '\0') &&
         (((((0x9a < iVar19 - 0x200U && (iVar19 != 0x1000)) && (iVar19 != 0x2000)) &&
           ((iVar19 != 0x4000 && (iVar19 != 0x8000)))) ||
          (lVar13 = FUN_1804af210(lVar8,iVar19), *(char *)(lVar13 + 8) == '\0')))) {
        *(undefined4 *)(lVar8 + 0x2090) = 2;
      }
      auVar28 = in_ZMM7._0_16_;
      auVar26 = in_ZMM6._0_16_;
      piVar15 = piVar15 + 1;
    } while (piVar15 != local_98 + 7);
  }
  iVar19 = *(int *)(lVar8 + 0x20b0);
  *(undefined8 *)(lVar8 + 0x2208) = 0;
  *(undefined4 *)(lVar8 + 0x2210) = 0;
  if ((iVar19 != 0) && (*(longlong *)(lVar8 + 0x2040) != 0)) {
    if (*(int *)(lVar8 + 0x203c) != iVar19) {
      *(undefined4 *)(lVar8 + 0x2208) = *(undefined4 *)(lVar8 + 0x2048);
      *(int *)(lVar8 + 0x220c) = iVar19;
      *(undefined4 *)(lVar8 + 0x2210) = *(undefined4 *)(lVar8 + 0x20b4);
      *(undefined4 *)(lVar8 + 0x2214) = 0;
      *(undefined2 *)(lVar8 + 0x2218) = 0x100;
      *(byte *)(lVar8 + 0x221a) = (byte)(*(uint *)(lVar8 + 0x20c8) >> 0x15) & 1;
    }
    if ((*(byte *)(lVar8 + 0x28cc) & 0x10) != 0) {
      auVar27 = ZEXT1664(auVar26);
      auVar30 = ZEXT1664(auVar28);
      FUN_1804cf3e0("[nav] NavInitRequest: ApplyResult: NavID 0x%08X in Layer %d Window \"%s\"\n",
                    iVar19,*(undefined4 *)(lVar8 + 0x204c),
                    *(undefined8 *)(*(longlong *)(lVar8 + 0x2040) + 8));
      auVar28 = auVar30._0_16_;
      auVar26 = auVar27._0_16_;
    }
    auVar27 = ZEXT1664(auVar26);
    auVar30 = ZEXT1664(auVar28);
    FUN_1804c8f10(*(undefined4 *)(lVar8 + 0x20b0),*(undefined4 *)(lVar8 + 0x204c),
                  *(undefined4 *)(lVar8 + 0x20b4));
    auVar28 = auVar30._0_16_;
    auVar26 = auVar27._0_16_;
    *(undefined1 *)(lVar8 + 0x203b) = 1;
    if (*(longlong *)(lVar8 + 0x20d8) != -1) {
      *(longlong *)(lVar8 + 0x2098) = *(longlong *)(lVar8 + 0x20d8);
    }
    if (*(char *)(lVar8 + 0x20a3) != '\0') {
      FUN_1804c8df0();
      auVar28 = auVar30._0_16_;
      auVar26 = auVar27._0_16_;
    }
  }
  *(undefined2 *)(lVar8 + 0x20a2) = 0;
  *(undefined4 *)(lVar8 + 0x20b0) = 0;
  if (*(char *)(lVar8 + 0x20e0) != '\0') {
    auVar27 = ZEXT1664(auVar26);
    auVar30 = ZEXT1664(auVar28);
    FUN_1804cb4c0();
    auVar28 = auVar30._0_16_;
    auVar26 = auVar27._0_16_;
  }
  *(undefined4 *)(lVar8 + 0x2124) = 0;
  *(undefined2 *)(lVar8 + 0x20e0) = 0;
  if (('\0' < *(char *)(lVar8 + 0x20a0)) &&
     (cVar9 = *(char *)(lVar8 + 0x20a0) + -1, *(char *)(lVar8 + 0x20a0) = cVar9, cVar9 == '\0')) {
    *(undefined1 *)(lVar8 + 0x2038) = 1;
  }
  local_a4[0] = unaff_R14D & 0xffffff00;
  uVar23 = 1;
  if ((((*(char *)(lVar8 + 0x203a) != '\0') && (*(char *)(lVar8 + 0x203b) != '\0')) &&
      (*(char *)(lVar8 + 0x2038) != '\0')) && (*(char *)(lVar8 + 0x2039) != '\0')) {
    local_a4[0] = (uint)(*(longlong *)(lVar8 + 0x2040) != 0);
  }
  cVar9 = (char)local_a4[0];
  lVar13 = *(longlong *)(lVar8 + 0x2040);
  *(undefined1 *)(lVar8 + 0x203a) = 0;
  if (lVar13 != 0) {
    lVar14 = lVar13;
    do {
      if ((*(longlong *)(lVar14 + 0x3d8) == lVar14) ||
         ((*(uint *)(lVar14 + 0x14) & 0x14000000) != 0)) {
        if (lVar14 != lVar13) {
          *(longlong *)(lVar14 + 0x400) = lVar13;
        }
        break;
      }
      lVar14 = *(longlong *)(lVar14 + 0x3c8);
    } while (lVar14 != 0);
  }
  lVar13 = *(longlong *)(lVar8 + 0x2040);
  if (((lVar13 != 0) && (*(longlong *)(lVar13 + 0x400) != 0)) && (*(int *)(lVar8 + 0x204c) == 0)) {
    *(undefined8 *)(lVar13 + 0x400) = 0;
  }
  auVar27 = ZEXT1664(auVar26);
  auVar30 = ZEXT1664(auVar28);
  FUN_1804cc3d0();
  if ((((bVar22 == 0) && (!bVar7)) || (*(longlong *)(lVar8 + 0x2040) == 0)) ||
     ((*(uint *)(*(longlong *)(lVar8 + 0x2040) + 0x14) & 0x10000) != 0)) {
    *(undefined1 *)(lVar8 + 0xe5) = 0;
LAB_1804ca699:
    if (*(longlong *)(lVar8 + 0x2228) != 0) goto LAB_1804ca575;
    uVar10 = 0;
  }
  else {
    *(undefined1 *)(lVar8 + 0xe5) = 1;
    if ((*(int *)(lVar8 + 0x203c) == 0) || (*(char *)(lVar8 + 0x2038) == '\0')) goto LAB_1804ca699;
LAB_1804ca575:
    uVar10 = 1;
  }
  *(undefined1 *)(lVar8 + 0xe6) = uVar10;
  FUN_1804cb8f0();
  FUN_1804cbb10();
  *(undefined8 *)(lVar8 + 0x2058) = 0;
  *(undefined4 *)(lVar8 + 0x2054) = 0;
  *(undefined4 *)(lVar8 + 0x2060) = 0;
  lVar13 = DAT_180bb8ae8;
  if (((*(int *)(lVar8 + 0x203c) == 0) || (*(char *)(lVar8 + 0x2038) == '\0')) ||
     (*(longlong *)(lVar8 + 0x2228) != 0)) goto LAB_1804ca80f;
  if ((*(longlong *)(lVar8 + 0x2040) == 0) ||
     ((*(uint *)(*(longlong *)(lVar8 + 0x2040) + 0x14) & 0x10000) != 0)) goto LAB_1804ca80f;
  if (((bVar22 == 0) || (*(char *)(DAT_180bb8ae8 + 500) == '\0')) ||
     (((*(char *)(DAT_180bb8ae8 + 0x1e74) != '\0' && (*(int *)(DAT_180bb8ae8 + 0x1550) != -1)) ||
      (*(int *)(DAT_180bb8ae8 + 0x1664) != -1)))) {
    if (bVar7) {
      uVar20 = 0x27d;
      if (*(char *)(lVar8 + 0x71) != '\0') {
        uVar20 = 0x27b;
      }
      pcVar12 = (char *)FUN_1804af1b0(uVar20);
      if ((*pcVar12 != '\0') &&
         (piVar15 = (int *)FUN_1804af210(lVar13,uVar20 & 0xffffffff), *piVar15 == -1))
      goto LAB_1804ca64b;
    }
    bVar7 = false;
LAB_1804ca6b0:
    bVar6 = false;
  }
  else {
LAB_1804ca64b:
    bVar7 = true;
    if ((bVar22 == 0) || (cVar9 = FUN_1804c3390(0x20c,0,0xffffffff), cVar9 == '\0')) {
      if (local_a8 != '\0') {
        uVar17 = 0x27d;
        if (*(char *)(lVar8 + 0x71) != '\0') {
          uVar17 = 0x27b;
        }
        cVar9 = FUN_1804c3390(uVar17,0,0xffffffff);
        if (cVar9 != '\0') goto LAB_1804ca68c;
      }
      goto LAB_1804ca6b0;
    }
LAB_1804ca68c:
    bVar6 = true;
  }
  if ((local_a7 == 0) ||
     ((cVar9 = FUN_1804c3390(0x20d,0,0xffffffff), cVar9 == '\0' &&
      (cVar9 = FUN_1804c3390(0x273,0,0xffffffff), cVar9 == '\0')))) {
    cVar9 = '\0';
  }
  else {
    cVar9 = '\x01';
  }
  cVar11 = '\0';
  if ((bVar7) && (local_a8 != '\0')) {
    uVar18 = 0x27d;
    if (*(char *)(lVar8 + 0x71) != '\0') {
      uVar18 = 0x27b;
    }
    cVar11 = '\0';
    pcVar12 = (char *)FUN_1804af1b0(uVar18);
    if ((((*pcVar12 != cVar11) && (piVar15 = (int *)FUN_1804af210(lVar13,uVar18), *piVar15 == -1))
        && ((*(uint *)(lVar8 + 0x2050) & 0x100000) != 0)) &&
       ((*(float *)(pcVar12 + 8) < 0.6 && (0.6 <= *(float *)(pcVar12 + 4))))) {
      cVar11 = '\x01';
    }
  }
  iVar19 = *(int *)(lVar8 + 0x1550);
  if (iVar19 == 0) {
    if (bVar6) {
      *(undefined4 *)(lVar8 + 0x2054) = *(undefined4 *)(lVar8 + 0x203c);
      *(undefined4 *)(lVar8 + 0x2060) = 2;
    }
LAB_1804ca781:
    if ((cVar9 != '\0') || (cVar11 != '\0')) {
      *(undefined4 *)(lVar8 + 0x2054) = *(undefined4 *)(lVar8 + 0x203c);
      *(undefined4 *)(lVar8 + 0x2060) = 1;
    }
    if (((iVar19 == 0) || (iVar19 == *(int *)(lVar8 + 0x203c))) &&
       ((bVar7 || ((cVar9 != '\0' || (cVar11 != '\0')))))) {
      *(undefined4 *)(lVar8 + 0x2058) = *(undefined4 *)(lVar8 + 0x203c);
    }
  }
  else if (iVar19 == *(int *)(lVar8 + 0x203c)) goto LAB_1804ca781;
  if (((*(int *)(lVar8 + 0x1550) == 0) || (*(int *)(lVar8 + 0x1550) == *(int *)(lVar8 + 0x203c))) &&
     ((bVar6 || ((cVar9 != '\0' || (cVar11 != '\0')))))) {
    *(undefined4 *)(lVar8 + 0x205c) = *(undefined4 *)(lVar8 + 0x203c);
    *(undefined4 *)(lVar13 + 0x2078) = *(undefined4 *)(lVar8 + 0x203c);
    *(undefined4 *)(lVar13 + 0x207c) = 0x3dcccccd;
  }
  cVar9 = (char)local_a4[0];
  bVar22 = local_a7;
LAB_1804ca80f:
  if ((*(longlong *)(lVar8 + 0x2040) == 0) ||
     ((*(uint *)(*(longlong *)(lVar8 + 0x2040) + 0x14) & 0x10000) == 0)) {
    if ((*(char *)(lVar8 + 0x77) != '\0') && (*(char *)(lVar8 + 0x20a0) == '\0')) {
      *(undefined1 *)(lVar8 + 0x2038) = 1;
    }
  }
  else {
    *(undefined1 *)(lVar8 + 0x2038) = 0;
  }
  fVar31 = *(float *)(lVar8 + 0x207c);
  auVar26._12_4_ = 0;
  auVar26._0_12_ = ZEXT812(0);
  auVar32 = ZEXT1264(ZEXT812(0)) << 0x20;
  if (0.0 < fVar31) {
    auVar26 = vmaxss_avx(auVar26 << 0x20,ZEXT416((uint)(fVar31 - *(float *)(lVar8 + 0x40))));
    fVar31 = auVar26._0_4_;
    *(float *)(lVar8 + 0x207c) = fVar31;
  }
  if (fVar31 == 0.0) {
    *(undefined4 *)(lVar8 + 0x2078) = 0;
  }
  iVar19 = *(int *)(lVar8 + 0x2088);
  if (iVar19 != 0) {
    *(int *)(lVar8 + 0x205c) = iVar19;
    *(int *)(lVar8 + 0x2058) = iVar19;
    *(int *)(lVar8 + 0x2054) = iVar19;
    *(undefined4 *)(lVar8 + 0x2060) = *(undefined4 *)(lVar8 + 0x208c);
  }
  *(undefined4 *)(lVar8 + 0x2088) = 0;
  FUN_1804cace0();
  lVar13 = DAT_180bb8ae8;
  auVar26 = auVar27._0_16_;
  fVar31 = auVar32._0_4_;
  auVar28 = auVar30._0_16_;
  if ((((*(int *)(lVar8 + 0x20f0) == -1) &&
       (lVar14 = *(longlong *)(DAT_180bb8ae8 + 0x2040), lVar14 != 0)) &&
      (*(longlong *)(DAT_180bb8ae8 + 0x2228) == 0)) &&
     (((*(uint *)(lVar14 + 0x14) & 0x10000) == 0 && (*(char *)(DAT_180bb8ae8 + 0x221b) != '\0')))) {
    cVar11 = FUN_1804c3390(0x200,1,0xffffffff);
    auVar26 = auVar27._0_16_;
    fVar31 = auVar32._0_4_;
    auVar28 = auVar30._0_16_;
    if ((cVar11 != '\0') &&
       ((*(char *)(lVar13 + 300) == '\0' && (*(char *)(lVar13 + 0x12e) == '\0')))) {
      if ((*(byte *)(lVar13 + 0x28) & 1) == 0) {
        if (*(char *)(lVar13 + 0x12d) == '\0') {
          uVar23 = (uint)(*(int *)(lVar13 + 0x1550) != 0);
        }
        else {
          uVar23 = 0xffffffff;
        }
      }
      else if (*(char *)(lVar13 + 0x12d) == '\0') {
        if ((*(char *)(lVar13 + 0x2038) == '\0') && (*(int *)(lVar13 + 0x1550) == 0)) {
          uVar23 = 0;
        }
      }
      else {
        uVar23 = 0xffffffff;
      }
      *(uint *)(lVar13 + 0x2120) = uVar23;
      uVar17 = 3;
      if (*(char *)(lVar14 + 0xd3) != '\0') {
        uVar17 = 0x21;
      }
      FUN_1804c9b10(0xffffffff,((int)uVar23 >> 0x1f) + 3,0x1400,uVar17);
      auVar26 = auVar27._0_16_;
      fVar31 = auVar32._0_4_;
      auVar28 = auVar30._0_16_;
      *(undefined4 *)(lVar13 + 0x2124) = 0xffffffff;
    }
  }
  if ((*(char *)(lVar13 + 0x20e1) == '\0') && (*(char *)(lVar13 + 0x20a2) == '\0')) {
    uVar10 = 0;
  }
  else {
    uVar10 = 1;
  }
  *(undefined1 *)(lVar13 + 0x20a1) = uVar10;
  lVar14 = *(longlong *)(lVar8 + 0x2040);
  *(undefined1 *)(lVar8 + 0x203b) = 0;
  if (lVar14 != 0) {
    if ((*(uint *)(lVar14 + 0x14) & 0x10000) == 0) {
      if (*(longlong *)(lVar8 + 0x2228) == 0) {
        uVar23 = *(uint *)(lVar8 + 0x20f0);
        fVar25 = (float)(int)(*(float *)(lVar14 + 0x2c0) * 100.0 * *(float *)(lVar8 + 0x40) + 0.5);
        auVar29 = SUB6416(ZEXT464(0x3f800000),0);
        if (((*(short *)(lVar14 + 0x174) == 0) && (*(char *)(lVar14 + 0x17a) != '\0')) &&
           (uVar23 != 0xffffffff)) {
          if (uVar23 < 2) {
            auVar3 = vpcmpeqd_avx(ZEXT416(uVar23),ZEXT416(0));
            auVar3 = vblendvps_avx(auVar29,SUB6416(ZEXT464(0xbf800000),0),auVar3);
            *(float *)(lVar14 + 0xa8) =
                 (float)(int)(auVar3._0_4_ * fVar25 + *(float *)(lVar14 + 0x98));
            *(undefined4 *)(lVar14 + 0xb0) = 0;
            *(undefined4 *)(lVar14 + 0xb8) = 0;
          }
          if (uVar23 - 2 < 2) {
            *(undefined4 *)(lVar14 + 0xb4) = 0;
            auVar3 = vpcmpeqd_avx(ZEXT416(uVar23),SUB6416(ZEXT464(2),0));
            auVar3 = vblendvps_avx(auVar29,SUB6416(ZEXT464(0xbf800000),0),auVar3);
            *(float *)(lVar14 + 0xac) =
                 (float)(int)(auVar3._0_4_ * fVar25 + *(float *)(lVar14 + 0x9c));
            *(undefined4 *)(lVar14 + 0xbc) = 0;
          }
        }
        local_38 = auVar28;
        local_28 = auVar26;
        if (local_a8 != '\0') {
          fVar4 = *(float *)(lVar13 + 0x9f0) - *(float *)(lVar13 + 0x9e0);
          fVar5 = *(float *)(lVar13 + 0x9d0) - *(float *)(lVar13 + 0x9c0);
          if ((*(char *)(lVar13 + 0x954) == '\0') || (*(char *)(lVar13 + 0x1bf4) != '\0')) {
            uVar23 = 0;
            if (*(char *)(lVar13 + 0x964) != '\0') {
              uVar23 = (uint)(*(char *)(lVar13 + 0x1c00) == '\0');
            }
            auVar26 = vpcmpeqd_avx(ZEXT416(uVar23),ZEXT416(0));
            auVar26 = vblendvps_avx(SUB6416(ZEXT464(0x41200000),0),auVar29,auVar26);
            fVar24 = auVar26._0_4_;
          }
          else {
            fVar24 = 0.1;
          }
          if ((fVar5 != fVar31) && (*(char *)(lVar14 + 200) != '\0')) {
            *(float *)(lVar14 + 0xa8) =
                 (float)(int)(fVar5 * fVar25 * fVar24 + *(float *)(lVar14 + 0x98));
            *(undefined4 *)(lVar14 + 0xb0) = 0;
            *(undefined4 *)(lVar14 + 0xb8) = 0;
          }
          if (fVar4 != fVar31) {
            *(float *)(lVar14 + 0xac) =
                 (float)(int)(fVar4 * fVar25 * fVar24 + *(float *)(lVar14 + 0x9c));
            *(undefined4 *)(lVar14 + 0xb4) = 0;
            *(undefined4 *)(lVar14 + 0xbc) = 0;
          }
        }
      }
    }
  }
  if ((bVar22 == 0) && (local_a8 == '\0')) {
    *(undefined2 *)(lVar8 + 0x2038) = 0;
  }
  else if (((cVar9 != '\0') && (*(char *)(lVar8 + 0x72) != '\0')) &&
          ((*(byte *)(lVar8 + 0x2c) & 4) != 0)) {
    puVar16 = (undefined4 *)FUN_1804c9f10(local_a4,0x4000000);
    uVar18 = *puVar16;
    uVar2 = puVar16[1];
    *(undefined4 *)(lVar13 + 0xae8) = uVar18;
    *(undefined4 *)(lVar13 + 0xaec) = uVar2;
    *(undefined4 *)(lVar13 + 0x110) = uVar18;
    *(undefined4 *)(lVar13 + 0x114) = uVar2;
    *(undefined8 *)(lVar13 + 0xfc) = 0;
    *(undefined1 *)(lVar13 + 0xe3) = 1;
  }
  *(undefined4 *)(lVar8 + 0x211c) = 0;
}



