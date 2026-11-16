// FUN_1804ff860 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ff860 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804ff860(float *param_1,char param_2,uint param_3,float *param_4)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  bool bVar6;
  longlong lVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float *pfVar15;
  longlong lVar16;
  float *pfVar17;
  int iVar18;
  undefined8 uVar19;
  byte bVar20;
  char cVar21;
  uint uVar22;
  undefined1 auVar23 [16];
  float fVar24;
  undefined4 uVar25;
  undefined1 auVar26 [64];
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auVar30 [64];
  undefined1 auStack_188 [32];
  undefined4 *local_168;
  float *local_160;
  float *local_158;
  float *local_150;
  undefined8 local_148;
  undefined4 local_138;
  char local_128;
  char local_127;
  char local_126;
  float local_120;
  uint local_11c;
  uint local_118;
  float local_114;
  undefined4 local_110;
  uint local_10c;
  uint local_108;
  float *local_100;
  undefined1 local_f8 [12];
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  char local_e0 [8];
  char local_d8;
  char local_d7 [7];
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  ulonglong local_a8;
  
  lVar7 = DAT_180bb8ae8;
  local_a8 = DAT_1808d5f00 ^ (ulonglong)auStack_188;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  plVar3 = *(longlong **)(lVar7 + 0x14d0);
  if (*(char *)((longlong)plVar3 + 0xd1) != '\0') {
  }
  lVar16 = lVar7;
  local_128 = param_2;
  local_100 = param_1;
  local_e0[0] = param_2;
  iVar10 = FUN_1804b0a90(param_1,0,
                         *(undefined4 *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4));
  if (*(int *)(*plVar3 + 0x1534) == iVar10) {
    FUN_1804cf810(iVar10,0xb,param_1);
    lVar16 = DAT_180bb8ae8;
  }
  pfVar17 = param_1;
  if (param_1 != (float *)0xffffffffffffffff) {
    while( true ) {
      if (*(char *)pfVar17 == '\0') break;
      pfVar15 = (float *)((longlong)pfVar17 + 1);
      if (((*(char *)pfVar17 == '#') && (*(char *)pfVar15 == '#')) ||
         (pfVar17 = pfVar15, pfVar15 == (float *)0xffffffffffffffff)) break;
    }
  }
  auVar26 = ZEXT864(0);
  if (param_1 == pfVar17) {
    auVar27 = ZEXT816(0);
    local_11c = *(uint *)(lVar16 + 0x11e0);
  }
  else {
    local_138 = 0;
    local_148 = 0;
    local_168 = (undefined4 *)CONCAT44(local_168._4_4_,0xbf800000);
    local_160 = param_1;
    local_158 = pfVar17;
    local_150 = pfVar17;
    FUN_1804ea040(&local_120,*(undefined8 *)(lVar16 + 0x11d0),*(uint *)(lVar16 + 0x11e0),0x7f7fffff)
    ;
    auVar27._0_4_ = (float)(int)((uint)((float)(int)local_120 < local_120) + (int)local_120);
    auVar27._4_12_ = SUB1612(ZEXT816(0),4);
  }
  auVar28 = ZEXT1664(auVar27);
  auVar4 = vcmpss_avx(ZEXT416((uint)param_4[1]),auVar26._0_16_,4);
  auVar4 = vblendvps_avx(ZEXT416(local_11c),ZEXT416((uint)param_4[1]),auVar4);
  auVar30 = ZEXT1664(auVar4);
  auVar5 = vcmpss_avx(ZEXT416((uint)*param_4),auVar26._0_16_,4);
  auVar5 = vblendvps_avx(auVar27,ZEXT416((uint)*param_4),auVar5);
  auVar29 = ZEXT1664(auVar5);
  auVar23._8_8_ = 0;
  auVar23._0_8_ = plVar3[0x23];
  auVar23 = vshufps_avx(auVar23,auVar23,0x55);
  fStack_e4 = auVar23._0_4_ + *(float *)(plVar3 + 0x2a);
  local_e8 = (float)plVar3[0x23];
  local_110 = auVar27._0_4_;
  local_120 = auVar5._0_4_;
  local_10c = local_11c;
  local_11c = auVar4._0_4_;
  FUN_1804c6420(&local_120,0);
  fVar24 = auVar26._0_4_;
  local_118 = param_3 & 2;
  if (local_118 == 0) {
    pfVar15 = (float *)(plVar3 + 0x4a);
    local_d0 = local_e8;
  }
  else {
    pfVar15 = (float *)(plVar3 + 0x4c);
    local_d0 = *(float *)(plVar3 + 0x4b);
  }
  if ((*param_4 == fVar24) || ((param_3 >> 0x18 & 1) != 0)) {
    auVar27 = vmaxss_avx(auVar28._0_16_,ZEXT416((uint)(*pfVar15 - local_d0)));
    auVar29 = ZEXT1664(auVar27);
  }
  local_c4 = auVar30._0_4_ + fStack_e4;
  local_c8 = auVar29._0_4_ + local_d0;
  local_cc = fStack_e4;
  if ((param_3 >> 0x1a & 1) == 0) {
    if (local_118 == 0) {
      fVar24 = *(float *)(lVar7 + 0xcd4);
    }
    local_d0 = local_d0 - (float)(int)(fVar24 * 0.5);
    local_c8 = (fVar24 - (float)(int)(fVar24 * 0.5)) + local_c8;
    fVar24 = (float)(int)(*(float *)(lVar7 + 0xcd8) * 0.5);
    local_cc = fStack_e4 - fVar24;
    local_c4 = (*(float *)(lVar7 + 0xcd8) - fVar24) + local_c4;
  }
  uVar22 = param_3 & 8;
  bVar20 = -(uVar22 != 0) & 0x40;
  local_108 = uVar22;
  if (local_118 == 0) {
    local_127 = FUN_1804c6190(&local_d0,iVar10,0,bVar20);
  }
  else {
    uVar14 = (undefined4)plVar3[0x4d];
    uVar25 = (undefined4)plVar3[0x4e];
    *(int *)(plVar3 + 0x4d) = (int)plVar3[0x4b];
    *(int *)(plVar3 + 0x4e) = (int)plVar3[0x4c];
    local_127 = FUN_1804c6190(&local_d0,iVar10,0,bVar20);
    *(undefined4 *)(plVar3 + 0x4d) = uVar14;
    *(undefined4 *)(plVar3 + 0x4e) = uVar25;
  }
  lVar16 = DAT_180bb8ae8;
  local_c0 = (float)(*(uint *)(lVar7 + 0x1ec4) & 0x400000);
  if (local_127 == '\0') {
    if (local_c0 == 0.0) {
    }
    if (*(char *)(lVar7 + 0x2420) == '\0') {
    }
    if (*(float *)(lVar7 + 0x2430) <= local_cc) {
    }
    if (local_c4 <= *(float *)(lVar7 + 0x2428)) {
    }
    if (*(float *)(lVar7 + 0x242c) <= local_d0) {
    }
    if (local_c8 <= *(float *)(lVar7 + 0x2424)) {
    }
  }
  local_120 = (float)(*(uint *)(lVar7 + 0x1e80) & 0x40);
  if ((uVar22 != 0) && (local_120 == 0.0)) {
    uVar22 = *(uint *)(DAT_180bb8ae8 + 0x1e80);
    if ((uVar22 & 0x40) == 0) {
      pfVar15 = (float *)(DAT_180bb8ae8 + 0xc84);
      *(float *)(DAT_180bb8ae8 + 0x26a4) = *pfVar15;
      *(float *)(lVar16 + 0xc84) = *pfVar15 * *(float *)(lVar16 + 0xc88);
    }
    piVar1 = (int *)(lVar16 + 0x1fd8);
    *(uint *)(lVar16 + 0x1e80) = uVar22 | 0x40;
    iVar11 = *(int *)(lVar16 + 0x1fdc);
    if (*piVar1 == iVar11) {
      iVar18 = *piVar1 + 1;
      if (iVar11 == 0) {
        iVar11 = 8;
      }
      else {
        iVar11 = iVar11 / 2 + iVar11;
      }
      if (iVar18 < iVar11) {
        iVar18 = iVar11;
      }
      FUN_1804d14d0(piVar1,iVar18);
    }
    *(undefined4 *)(*(longlong *)(lVar16 + 0x1fe0) + (longlong)*piVar1 * 4) =
         *(undefined4 *)(lVar16 + 0x1e80);
    *piVar1 = *piVar1 + 1;
    *(short *)(lVar16 + 0x26a8) = *(short *)(lVar16 + 0x26a8) + 1;
  }
  fVar24 = local_c0;
  if (local_118 != 0) {
    if (*(longlong *)(lVar7 + 0x2338) == 0) {
      if (plVar3[0x39] != 0) {
        FUN_1804f38c0();
      }
    }
    else {
      FUN_1804efec0();
    }
    *(uint *)(lVar7 + 0x1ec8) = *(uint *)(lVar7 + 0x1ec8) | 0x200;
    lVar16 = plVar3[0x4e];
    *(longlong *)(lVar7 + 0x1efc) = plVar3[0x4d];
    *(longlong *)(lVar7 + 0x1f04) = lVar16;
  }
  cVar8 = local_128;
  fVar13 = 0.0;
  fVar12 = 0.0;
  local_b8 = 0.0;
  if ((param_3 >> 0x14 & 1) != 0) {
    fVar13 = 1.83671e-40;
    local_b8 = 1.83671e-40;
    fVar12 = 1.83671e-40;
  }
  if ((param_3 >> 0x1b & 1) != 0) {
    fVar12 = (float)((uint)fVar12 | 0x100000);
    fVar13 = fVar12;
    local_b8 = fVar12;
  }
  if ((param_3 >> 0x16 & 1) != 0) {
    fVar12 = (float)((uint)fVar12 | 0x10);
    fVar13 = fVar12;
    local_b8 = fVar12;
  }
  if ((param_3 >> 0x17 & 1) != 0) {
    fVar12 = (float)((uint)fVar12 | 0x80);
    fVar13 = fVar12;
    local_b8 = fVar12;
  }
  if ((param_3 & 4) != 0) {
    fVar13 = (float)((uint)fVar12 | 0x120);
    local_b8 = fVar13;
  }
  if (((param_3 & 0x10) != 0) || ((*(uint *)(lVar7 + 0x1ec4) & 0x4000) != 0)) {
    fVar13 = (float)((uint)fVar13 | 0x1000);
    local_b8 = fVar13;
  }
  if (fVar24 == 0.0) {
    local_168 = (undefined4 *)CONCAT44(local_168._4_4_,fVar13);
    cVar9 = FUN_1804f4d40(&local_d0,iVar10,&local_d8,local_d7);
    local_126 = '\0';
    if ((((((param_3 & 0x40) == 0) || (*(int *)(lVar7 + 0x220c) == 0)) ||
         (*(int *)(lVar7 + 0x2210) != *(int *)(lVar7 + 0x1e7c))) ||
        ((*(char *)(lVar7 + 0x2219) != '\0' || (*(int *)(lVar7 + 0x220c) != iVar10)))) ||
       ((*(uint *)(lVar7 + 0x2214) & 0x1000) != 0)) goto LAB_1804ffe71;
    cVar9 = '\x01';
    local_126 = '\x01';
    local_128 = '\x01';
LAB_1804ffe8b:
    if ((*(char *)(lVar7 + 0x2039) == '\0') &&
       ((*(longlong **)(lVar7 + 0x2040) == plVar3 && (*(int *)(lVar7 + 0x204c) == (int)plVar3[0x2e])
        ))) {
      local_b8 = local_d0 - *(float *)(plVar3 + 0x25);
      local_b4 = local_cc - *(float *)((longlong)plVar3 + 300);
      local_b0 = local_c8 - *(float *)(plVar3 + 0x25);
      local_ac = local_c4 - *(float *)((longlong)plVar3 + 300);
      FUN_1804c8f10(iVar10,(int)plVar3[0x2e],*(undefined4 *)(lVar7 + 0x1e7c),&local_b8);
      if (*(char *)(lVar7 + 0x76) != '\0') {
        *(undefined1 *)(lVar7 + 0x2038) = 0;
      }
    }
    cVar21 = local_128;
    if (cVar9 != '\0') {
      FUN_1804b7a50();
    }
  }
  else {
    FUN_180500d90(iVar10,local_e0,&local_b8);
    local_168 = (undefined4 *)CONCAT44(local_168._4_4_,local_b8);
    local_128 = FUN_1804f4d40(&local_d0,iVar10,&local_d8,local_d7);
    local_126 = '\0';
    FUN_180500eb0(iVar10,local_e0,&local_128);
    cVar9 = local_128;
    local_128 = local_e0[0];
LAB_1804ffe71:
    if ((cVar9 != '\0') || ((cVar21 = local_128, local_d8 != '\0' && ((param_3 >> 0x19 & 1) != 0))))
    goto LAB_1804ffe8b;
  }
  fVar24 = local_c0;
  if (cVar21 != cVar8) {
    *(uint *)(lVar7 + 0x1ec8) = *(uint *)(lVar7 + 0x1ec8) | 8;
  }
  if ((*(int *)(lVar7 + 0x1550) == iVar10) && (*(char *)(lVar7 + 0x155c) != '\0')) {
    *(char *)(lVar7 + 0x155d) = cVar8;
    if ((cVar8 == '\0') ||
       ((local_c0 != 0.0 && (*(char *)(*(longlong *)(lVar7 + 0x2478) + 0x57) == '\0')))) {
      *(undefined1 *)(lVar7 + 0x155e) = 0;
    }
    else {
      *(undefined1 *)(lVar7 + 0x155e) = 1;
    }
  }
  if (local_127 == '\0') goto LAB_180500085;
  if ((local_d8 == '\0') && ((param_3 & 0x20) == 0)) {
    bVar6 = false;
    lVar16 = 0;
    if (cVar21 != '\0') goto LAB_1804fffaf;
  }
  else {
    bVar6 = true;
    lVar16 = 1;
LAB_1804fffaf:
    if ((local_d7[0] == '\0') || (!bVar6)) {
      lVar16 = (lVar16 + 0x2e) * 0x10;
    }
    else {
      lVar16 = 0x300;
    }
    local_c0 = local_c8;
    local_b8 = local_d0;
    auVar27 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xc78 + lVar16);
    auVar4 = vshufps_avx(auVar27,auVar27,0xff);
    local_f8 = auVar27._0_12_;
    fStack_ec = auVar4._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
    local_bc = local_c4;
    local_b4 = local_cc;
    lVar16 = DAT_180bb8ae8;
    uVar14 = FUN_1804b1120(local_f8);
    local_160 = (float *)((ulonglong)local_160 & 0xffffffff00000000);
    local_168 = (undefined4 *)CONCAT44(local_168._4_4_,*(undefined4 *)(lVar7 + 0xd58));
    FUN_1804df870(*(undefined8 *)(*(longlong *)(lVar16 + 0x14d0) + 0x2c8),&local_b8,&local_c0,uVar14
                 );
  }
  if (*(int *)(lVar7 + 0x203c) == iVar10) {
    uVar19 = 6;
    if (fVar24 == 0.0) {
      uVar19 = 2;
    }
    FUN_1804b4250(&local_d0,iVar10,uVar19,*(undefined4 *)(lVar7 + 0xd58));
  }
LAB_180500085:
  fVar13 = auVar30._0_4_;
  fVar24 = auVar29._0_4_;
  if (local_118 != 0) {
    if (*(longlong *)(lVar7 + 0x2338) == 0) {
      if (plVar3[0x39] != 0) {
        FUN_1804f3980();
        fVar13 = auVar30._0_4_;
        fVar24 = auVar29._0_4_;
      }
    }
    else {
      FUN_1804eff90();
      fVar13 = auVar30._0_4_;
      fVar24 = auVar29._0_4_;
    }
  }
  if (local_127 != '\0') {
    auVar27 = vminss_avx(ZEXT416((uint)(fVar24 + local_e8)),ZEXT416(*(uint *)(plVar3 + 0x4a)));
    local_114 = fVar13 + fStack_e4;
    local_158 = &local_d0;
    local_160 = (float *)(lVar7 + 0xd78);
    local_168 = &local_110;
    local_118 = auVar27._0_4_;
    FUN_1804b3950(&local_e8,&local_118,local_100,pfVar17);
  }
  if ((((cVar9 != '\0') && (local_126 == '\0')) &&
      ((*(uint *)((longlong)plVar3 + 0x14) & 0x4000000) != 0)) &&
     (((param_3 & 1) == 0 && ((*(byte *)(lVar7 + 0x1ec4) & 0x10) != 0)))) {
    FUN_1804c7bf0();
  }
  lVar7 = DAT_180bb8ae8;
  if ((local_108 != 0) && (local_120 == 0.0)) {
    if (*(short *)(DAT_180bb8ae8 + 0x26a8) < 1) {
      FUN_1804c5a40("Calling EndDisabled() too many times!");
    }
    else {
      iVar10 = *(int *)(DAT_180bb8ae8 + 0x1fd8);
      uVar22 = *(uint *)(DAT_180bb8ae8 + 0x1e80);
      *(short *)(DAT_180bb8ae8 + 0x26a8) = *(short *)(DAT_180bb8ae8 + 0x26a8) + -1;
      *(int *)(lVar7 + 0x1fd8) = iVar10 + -1;
      uVar2 = *(uint *)(*(longlong *)(lVar7 + 0x1fe0) + -8 + (longlong)iVar10 * 4);
      *(uint *)(lVar7 + 0x1e80) = uVar2;
      if (((uVar22 & 0x40) != 0) && ((uVar2 & 0x40) == 0)) {
        *(undefined4 *)(lVar7 + 0xc84) = *(undefined4 *)(lVar7 + 0x26a4);
      }
    }
  }
}



