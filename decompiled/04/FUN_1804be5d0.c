// FUN_1804be5d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804be5d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804be5d0(longlong *param_1,float *param_2,char *param_3,undefined1 *param_4)

{
  longlong lVar1;
  float fVar2;
  bool bVar3;
  longlong lVar4;
  undefined1 *puVar5;
  float *pfVar6;
  char cVar7;
  char cVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char *pcVar11;
  longlong lVar12;
  char *pcVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  char cVar17;
  ulonglong uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  undefined1 auVar23 [64];
  float fVar24;
  float fVar25;
  undefined1 auVar26 [64];
  float fVar27;
  undefined1 auVar28 [64];
  undefined1 auVar29 [64];
  undefined1 auStack_198 [32];
  undefined8 local_178;
  char *local_170;
  char *local_168;
  char *local_160;
  undefined8 local_158;
  undefined4 local_148;
  undefined8 local_138;
  undefined1 *local_130;
  undefined1 local_128 [12];
  float fStack_11c;
  uint local_118;
  uint local_114;
  undefined8 local_110;
  char local_108;
  char local_107 [7];
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  ulonglong local_d0;
  
  lVar4 = DAT_180bb8ae8;
  local_d0 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  local_114 = *(uint *)((longlong)param_1 + 0x14);
  if (((local_114 & 0x20) == 0) && (*(int *)(DAT_180bb8ae8 + 0xcb0) != -1)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  local_118 = *(uint *)(DAT_180bb8ae8 + 0x1e80);
  fVar25 = 0.0;
  *(uint *)(DAT_180bb8ae8 + 0x1e80) = local_118 | 4;
  *(undefined4 *)(param_1 + 0x2e) = 1;
  fVar22 = *(float *)(lVar4 + 0xcc4);
  auVar23 = ZEXT464((uint)fVar22);
  fVar27 = *(float *)(lVar4 + 0x11e0);
  local_110 = 0;
  fVar21 = 0.0;
  fVar24 = 0.0;
  fVar2 = fVar22;
  if (param_4 != (undefined1 *)0x0) {
    auVar20 = vunpcklps_avx(ZEXT416((uint)((param_2[2] - fVar22) - fVar27)),
                            ZEXT416((uint)(param_2[1] + *(float *)(lVar4 + 0xcc8))));
    fVar2 = fVar27 + *(float *)(lVar4 + 0xcdc) + fVar22;
    local_110 = auVar20._0_8_;
  }
  auVar26 = ZEXT464((uint)fVar2);
  auVar29 = ZEXT464(0xbf800000);
  auVar28 = ZEXT464(0x3f800000);
  local_138 = param_3;
  local_130 = param_4;
  local_f0 = param_2;
  if (!bVar3) goto LAB_1804be9d3;
  if (*(int *)(lVar4 + 0xcb0) == 1) {
    fVar21 = (param_2[2] - fVar2) - fVar27;
    auVar26 = ZEXT464((uint)(fVar2 + fVar27 + *(float *)(lVar4 + 0xcdc)));
LAB_1804be742:
    fVar24 = param_2[1] + *(float *)(lVar4 + 0xcc8);
  }
  else if (*(int *)(lVar4 + 0xcb0) == 0) {
    fVar21 = fVar22 + *param_2;
    auVar23 = ZEXT464((uint)(fVar27 + *(float *)(lVar4 + 0xcdc) + fVar22));
    goto LAB_1804be742;
  }
  pcVar11 = "#COLLAPSE";
  uVar14 = ~*(uint *)(param_1[0x22] + -4 + (longlong)(int)param_1[0x21] * 4);
  cVar7 = '#';
  uVar16 = uVar14;
  do {
    pcVar11 = pcVar11 + 1;
    if (((cVar7 == '#') && (*pcVar11 == '#')) && (pcVar11[1] == '#')) {
      pcVar11 = pcVar11 + 2;
      uVar16 = uVar14;
    }
    else {
      uVar16 = crc32(uVar16,cVar7);
    }
    cVar7 = *pcVar11;
  } while (cVar7 != '\0');
  uVar16 = ~uVar16;
  if (*(uint *)(*param_1 + 0x1534) == uVar16) {
    FUN_1804cf810(uVar16,0xb,"#COLLAPSE");
  }
  lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  local_f8 = fVar21 + *(float *)(DAT_180bb8ae8 + 0x11e0);
  local_f4 = fVar24 + *(float *)(DAT_180bb8ae8 + 0x11e0);
  local_100 = fVar21;
  local_fc = fVar24;
  cVar7 = FUN_1804c6190(&local_100,uVar16,0,0);
  local_178 = (undefined8 *)((ulonglong)local_178._4_4_ << 0x20);
  cVar8 = FUN_1804f4d40(&local_100,uVar16,&local_108,local_107);
  if (cVar7 != '\0') {
    lVar15 = 0x18;
    if ((local_107[0] == '\0') || (local_108 == '\0')) {
      lVar12 = (ulonglong)(local_108 != '\0') + 0x16;
    }
    else {
      lVar12 = 0x18;
    }
    fVar22 = *(float *)(DAT_180bb8ae8 + 0xc84);
    auVar20 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xc78 + (lVar12 + 0x15) * 0x10);
    auVar19 = vshufps_avx(auVar20,auVar20,0xff);
    local_128 = auVar20._0_12_;
    fStack_11c = auVar19._0_4_ * fVar22;
    lVar12 = DAT_180bb8ae8;
    cVar7 = local_107[0];
    cVar17 = local_108;
    uVar14 = FUN_1804b1120(local_128);
    auVar20 = *(undefined1 (*) [16])(lVar12 + 0xdc8);
    auVar19 = vshufps_avx(auVar20,auVar20,0xff);
    uVar18 = (ulonglong)uVar14;
    local_128 = auVar20._0_12_;
    fStack_11c = auVar19._0_4_ * fVar22;
    uVar9 = FUN_1804b1120(local_128);
    if ((cVar17 != '\0') || (cVar7 != '\0')) {
      local_170 = (char *)((ulonglong)local_170 & 0xffffffff00000000);
      local_178 = (undefined8 *)CONCAT44(local_178._4_4_,fVar25);
      FUN_1804df870(*(undefined8 *)(lVar1 + 0x2c8),&local_100,&local_f8,uVar18 & 0xffffffff);
    }
    FUN_1804b4250(&local_100,uVar16,2,auVar29._0_8_);
    local_168 = *(char **)(DAT_180bb8ae8 + 0xdb0);
    local_160 = (char *)CONCAT44(local_160._4_4_,*(undefined4 *)(DAT_180bb8ae8 + 0xdb8));
    if (*(char *)(lVar1 + 0xcf) != '\0') {
      lVar15 = 8;
    }
    local_170 = (char *)CONCAT44(local_170._4_4_,auVar28._0_4_);
    local_178 = (undefined8 *)CONCAT44(local_178._4_4_,*(undefined4 *)(&DAT_1807be51c + lVar15));
    auVar20 = vunpcklps_avx(ZEXT416((uint)local_100),ZEXT416((uint)local_fc));
    FUN_1804eadd0(*(undefined8 *)(lVar1 + 0x2c8),auVar20._0_8_,uVar9,
                  *(undefined4 *)(&DAT_1807be518 + lVar15));
    if ((((*(int *)(DAT_180bb8ae8 + 0x1550) != 0) &&
         (*(int *)(DAT_180bb8ae8 + 0x1550) == *(int *)(DAT_180bb8ae8 + 0x1ec0))) &&
        (*(char *)(DAT_180bb8ae8 + 0x118) != '\0')) &&
       (*(float *)(DAT_180bb8ae8 + 0xa0) * *(float *)(DAT_180bb8ae8 + 0xa0) <=
        *(float *)(DAT_180bb8ae8 + 0xbc4))) {
      FUN_1804b83b0(lVar1);
    }
  }
  if (cVar8 != '\0') {
    *(undefined1 *)(param_1 + 0x1a) = 1;
  }
LAB_1804be9d3:
  pfVar6 = local_f0;
  puVar5 = local_130;
  pcVar11 = local_138;
  uVar9 = 0;
  uVar10 = auVar29._0_4_;
  if (local_130 != (undefined1 *)0x0) {
    *(uint *)(lVar4 + 0x1e80) = *(uint *)(lVar4 + 0x1e80) | 0x20000;
    pcVar13 = "#CLOSE";
    uVar14 = ~*(uint *)(param_1[0x22] + -4 + (longlong)(int)param_1[0x21] * 4);
    cVar7 = '#';
    uVar16 = uVar14;
    do {
      pcVar13 = pcVar13 + 1;
      if (((cVar7 == '#') && (*pcVar13 == '#')) && (pcVar13[1] == '#')) {
        pcVar13 = pcVar13 + 2;
        uVar16 = uVar14;
      }
      else {
        uVar16 = crc32(uVar16,cVar7);
      }
      cVar7 = *pcVar13;
    } while (cVar7 != '\0');
    uVar16 = ~uVar16;
    if (*(uint *)(*param_1 + 0x1534) == uVar16) {
      FUN_1804cf810(uVar16,0xb,"#CLOSE");
    }
    cVar7 = FUN_1804f5b40(uVar16,&local_110);
    uVar10 = auVar29._0_4_;
    if (cVar7 != '\0') {
      *puVar5 = 0;
    }
  }
  uVar16 = local_114;
  auVar20 = auVar28._0_16_;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  *(uint *)(lVar4 + 0x1e80) = local_118;
  pcVar13 = pcVar11;
  fVar22 = fVar25;
  if ((local_114 >> 0x12 & 1) != 0) {
    fVar22 = fVar27 * 0.8;
  }
  for (; ((pcVar13 != (char *)0xffffffffffffffff && (*pcVar13 != '\0')) &&
         ((*pcVar13 != '#' || (pcVar13[1] != '#')))); pcVar13 = pcVar13 + 1) {
  }
  fVar27 = *(float *)(DAT_180bb8ae8 + 0x11e0);
  fVar2 = fVar25;
  if (pcVar11 != pcVar13) {
    local_148 = 0;
    local_158 = 0;
    local_178 = (undefined8 *)CONCAT44(local_178._4_4_,uVar10);
    local_170 = pcVar11;
    local_168 = pcVar13;
    local_160 = pcVar13;
    FUN_1804ea040(&local_138,*(undefined8 *)(DAT_180bb8ae8 + 0x11d0),DAT_180bb8ae8,0x7f7fffff);
    auVar20 = auVar28._0_16_;
    fVar27 = local_138._4_4_;
    fVar2 = (float)(int)((uint)((float)(int)(float)local_138 < (float)local_138) +
                        (int)(float)local_138);
  }
  fVar2 = fVar2 + fVar22;
  local_138 = (char *)CONCAT44(fVar27 + fVar25,fVar2);
  if (*(float *)(lVar4 + 0xcc4) < auVar23._0_4_) {
    auVar23 = ZEXT464((uint)(auVar23._0_4_ + *(float *)(lVar4 + 0xcdc)));
  }
  if (*(float *)(lVar4 + 0xcc4) < auVar26._0_4_) {
    auVar26 = ZEXT464((uint)(auVar26._0_4_ + *(float *)(lVar4 + 0xcdc)));
  }
  fVar27 = *(float *)(lVar4 + 0xca8);
  fVar21 = 0.5;
  if ((fVar25 < fVar27) && (fVar27 < auVar20._0_4_)) {
    fVar24 = auVar20._0_4_ - (ABS(fVar27 - 0.5) + ABS(fVar27 - 0.5));
    if (fVar25 <= fVar24) {
      auVar20 = vminss_avx(auVar20,ZEXT416((uint)fVar24));
      fVar25 = auVar20._0_4_;
    }
    auVar20 = vmaxss_avx(auVar23._0_16_,auVar26._0_16_);
    auVar20 = vminss_avx(auVar20,ZEXT416((uint)((((pfVar6[2] - *pfVar6) - auVar23._0_4_) -
                                                auVar26._0_4_) - fVar2)));
    auVar19 = ZEXT416((uint)(auVar20._0_4_ * fVar25));
    auVar20 = vmaxss_avx(auVar23._0_16_,auVar19);
    auVar23 = ZEXT1664(auVar20);
    auVar20 = vmaxss_avx(auVar26._0_16_,auVar19);
    auVar26 = ZEXT1664(auVar20);
  }
  local_e0 = auVar23._0_4_ + *pfVar6;
  local_dc = pfVar6[1];
  local_d8 = pfVar6[2] - auVar26._0_4_;
  local_e4 = pfVar6[3];
  auVar20 = vminss_avx(ZEXT416((uint)(local_d8 + *(float *)(lVar4 + 0xcdc))),
                       ZEXT416((uint)pfVar6[2]));
  auVar23 = ZEXT1664(auVar20);
  local_e8 = auVar20._0_4_;
  local_f0 = (float *)CONCAT44(local_dc,local_e0);
  local_d4 = local_e4;
  if ((uVar16 >> 0x12 & 1) != 0) {
    fVar2 = ((local_d8 - local_e0) - fVar2) * fVar27 + local_e0 + fVar2;
    if (local_e0 <= fVar2) {
      auVar20 = vminss_avx(ZEXT416((uint)local_d8),ZEXT416((uint)fVar2));
    }
    else {
      auVar20 = ZEXT416((uint)local_e0);
    }
    auVar26 = ZEXT1664(auVar20);
    auVar28 = ZEXT464((uint)((local_e4 + local_dc) * 0.5));
    if (local_e0 < auVar20._0_4_) {
      auVar20 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0x1148);
      auVar19 = vshufps_avx(auVar20,auVar20,0xff);
      local_128 = auVar20._0_12_;
      fStack_11c = auVar19._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
      uVar10 = FUN_1804b1120(local_128);
      auVar20 = vunpcklps_avx(auVar26._0_16_,auVar28._0_16_);
      local_130 = auVar20._0_8_;
      fVar27 = *(float *)(*(longlong *)(param_1[0x59] + 0x38) + 0x28);
      if (22.0 <= fVar27) {
        if (fVar27 < 40.0) {
          uVar9 = 0xc;
        }
      }
      else {
        uVar9 = 8;
      }
      local_178 = (undefined8 *)CONCAT44(local_178._4_4_,uVar9);
      FUN_1804e01c0(param_1[0x59],&local_130,fVar27 * 0.2,uVar10);
      auVar20 = vminss_avx(auVar23._0_16_,
                           ZEXT416((uint)(auVar26._0_4_ - (float)(int)(fVar22 * fVar21))));
      local_e8 = auVar20._0_4_;
    }
  }
  local_168 = (char *)&local_f0;
  local_170 = (char *)(lVar4 + 0xca8);
  local_178 = &local_138;
  FUN_1804b3950(&local_e0,&local_d8,pcVar11,0);
}



