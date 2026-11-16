// FUN_1805027a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805027a0 */

ulonglong FUN_1805027a0(char *param_1,undefined8 param_2,char *param_3,char param_4,char param_5)

{
  char *pcVar1;
  float *pfVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  float fVar8;
  longlong lVar9;
  char cVar10;
  byte bVar11;
  int iVar12;
  undefined4 uVar13;
  longlong lVar14;
  longlong lVar15;
  char *pcVar16;
  int iVar17;
  float fVar18;
  undefined1 auVar19 [64];
  float fVar20;
  undefined1 auVar21 [16];
  undefined8 uVar22;
  undefined1 auVar23 [64];
  float fVar24;
  undefined1 auVar25 [64];
  undefined8 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  undefined4 uVar29;
  undefined4 uVar30;
  undefined8 local_res10;
  char *local_res18;
  char local_res20;
  
  lVar9 = DAT_180bb8ae8;
  uVar6 = *(ulonglong *)(DAT_180bb8ae8 + 0x14d0);
  *(undefined1 *)(uVar6 + 0xce) = 1;
  lVar15 = *(longlong *)(lVar9 + 0x14d0);
  if (*(char *)(lVar15 + 0xd1) != '\0') {
    return uVar6 & 0xffffffffffffff00;
  }
  fVar24 = *(float *)(lVar15 + 0x11c);
  fVar20 = *(float *)(lVar15 + 0x118);
  pcVar16 = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while( true ) {
      if (*pcVar16 == '\0') break;
      pcVar1 = pcVar16 + 1;
      if (((*pcVar16 == '#') && (*pcVar1 == '#')) ||
         (pcVar16 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
  }
  uVar13 = 0xbf800000;
  auVar23 = ZEXT464(0x7f7fffff);
  auVar19 = ZEXT864(0);
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_1 == pcVar16) {
    auVar27 = ZEXT816(0);
    uVar29 = *(undefined4 *)(lVar9 + 0x11e0);
  }
  else {
    FUN_1804ea040(&local_res10,*(undefined8 *)(lVar9 + 0x11d0),*(undefined4 *)(lVar9 + 0x11e0),
                  auVar23._0_8_,0xbf800000,param_1,pcVar16,pcVar16,0);
    auVar27._0_4_ =
         (float)(int)((uint)((float)(int)(float)local_res10 < (float)local_res10) +
                     (int)(float)local_res10);
    auVar27._4_12_ = SUB1612(ZEXT816(0),4);
    uVar29 = local_res10._4_4_;
  }
  auVar28 = ZEXT1664(auVar27);
  cVar10 = FUN_180501a10();
  if (cVar10 != '\0') {
    *(uint *)(lVar9 + 0x1e8c) = *(uint *)(lVar9 + 0x1e8c) | 0x2000;
  }
  FUN_1804c2800(param_1);
  lVar7 = DAT_180bb8ae8;
  uVar22 = auVar23._0_8_;
  if (param_5 == '\0') {
    uVar4 = *(uint *)(DAT_180bb8ae8 + 0x1e80);
    if ((uVar4 & 0x40) == 0) {
      pfVar2 = (float *)(DAT_180bb8ae8 + 0xc84);
      *(float *)(DAT_180bb8ae8 + 0x26a4) = *pfVar2;
      *(float *)(lVar7 + 0xc84) = *pfVar2 * *(float *)(lVar7 + 0xc88);
    }
    piVar3 = (int *)(lVar7 + 0x1fd8);
    *(uint *)(lVar7 + 0x1e80) = uVar4 | 0x40;
    iVar12 = *(int *)(lVar7 + 0x1fdc);
    if (*piVar3 == iVar12) {
      iVar17 = *piVar3 + 1;
      if (iVar12 == 0) {
        iVar12 = 8;
      }
      else {
        iVar12 = iVar12 / 2 + iVar12;
      }
      if (iVar17 < iVar12) {
        iVar17 = iVar12;
      }
      FUN_1804d14d0(piVar3,iVar17);
      uVar22 = auVar23._0_8_;
    }
    *(undefined4 *)(*(longlong *)(lVar7 + 0x1fe0) + (longlong)*piVar3 * 4) =
         *(undefined4 *)(lVar7 + 0x1e80);
    *piVar3 = *piVar3 + 1;
    *(short *)(lVar7 + 0x26a8) = *(short *)(lVar7 + 0x26a8) + 1;
    param_3 = local_res18;
  }
  uVar26 = auVar28._0_8_;
  uVar30 = *(undefined4 *)(lVar9 + 0xd58);
  *(undefined4 *)(lVar9 + 0xd58) = *(undefined4 *)(lVar9 + 0xd54);
  if (*(int *)(lVar15 + 0x1d4) == 0) {
    fVar20 = 0.5;
    fVar24 = (float)(int)(*(float *)(lVar9 + 0xcd4) * 0.5) + *(float *)(lVar15 + 0x118);
    auVar25 = ZEXT464((uint)(*(float *)(lVar15 + 0x150) + *(float *)(lVar15 + 0x11c)));
    *(float *)(lVar15 + 0x118) = fVar24;
    auVar23 = ZEXT464((uint)((float)*(ushort *)(lVar15 + 400) + fVar24));
    FUN_1804b2c90(0xe,*(float *)(lVar9 + 0xcd4) + *(float *)(lVar9 + 0xcd4));
    local_res10 = CONCAT44(auVar19._0_4_,auVar28._0_4_);
    bVar11 = FUN_1804ff860(&PTR_180700558,local_res20,0x2800000,&local_res10);
    FUN_1804b2de0(1);
    if ((*(uint *)(lVar9 + 0x1ec8) & 0x100) != 0) {
      auVar27 = vunpcklps_avx(auVar23._0_16_,auVar25._0_16_);
      FUN_1804b3060(auVar27._0_8_,param_1,pcVar16,0);
    }
    *(float *)(lVar15 + 0x118) =
         *(float *)(lVar15 + 0x118) - (float)(int)(fVar20 * *(float *)(lVar9 + 0xcd4));
  }
  else {
    if ((param_3 == (char *)0x0) || (*param_3 == '\0')) {
      auVar21 = ZEXT816(0);
    }
    else {
      FUN_1804ea040(&local_res10,*(undefined8 *)(DAT_180bb8ae8 + 0x11d0),
                    *(undefined4 *)(DAT_180bb8ae8 + 0x11e0),uVar22,uVar13,param_3,0,0,0);
      uVar26 = auVar28._0_8_;
      auVar21._0_4_ =
           (float)(int)((uint)((float)(int)(float)local_res10 < (float)local_res10) +
                       (int)(float)local_res10);
      auVar21._4_12_ = SUB1612(ZEXT816(0),4);
    }
    auVar23 = ZEXT1664(auVar21);
    fVar18 = (float)FUN_1805016d0(lVar15 + 0x184,0,uVar26,auVar21._0_8_,
                                  (float)(int)(*(float *)(lVar9 + 0x11e0) * 1.2));
    lVar7 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    if ((*(longlong *)(lVar7 + 0x1c8) != 0) ||
       (lVar14 = 0x280, *(longlong *)(DAT_180bb8ae8 + 0x2338) != 0)) {
      lVar14 = 0x250;
    }
    fVar24 = fVar24 + *(float *)(lVar15 + 0x150);
    fVar8 = (*(float *)(lVar14 + lVar7) - *(float *)(lVar7 + 0x118)) - fVar18;
    auVar27 = vmaxss_avx(auVar19._0_16_,ZEXT416((uint)fVar8));
    auVar28 = ZEXT1664(auVar27);
    local_res10 = CONCAT44(uVar29,fVar18);
    bVar11 = FUN_1804ff860(&PTR_180700558,0,fVar8,&local_res10);
    if ((*(uint *)(lVar9 + 0x1ec8) & 0x100) != 0) {
      fVar18 = fVar24 + auVar19._0_4_;
      auVar25 = ZEXT464((uint)fVar18);
      auVar27 = vunpcklps_avx(ZEXT416((uint)((float)*(ushort *)(lVar15 + 400) + fVar20)),
                              ZEXT416((uint)fVar18));
      FUN_1804b3060(auVar27._0_8_,param_1,pcVar16,0);
      fVar18 = auVar28._0_4_;
      if (auVar19._0_4_ < auVar23._0_4_) {
        FUN_1804b2af0(0,lVar9 + 0xdd8);
        lVar7 = DAT_180bb8ae8;
        *(undefined2 **)(DAT_180bb8ae8 + 0x2868) = &DAT_18081f020;
        *(undefined **)(lVar7 + 0x2870) = &DAT_18081ea50;
        auVar27 = vunpcklps_avx(ZEXT416((uint)((float)*(ushort *)(lVar15 + 0x192) + auVar28._0_4_ +
                                              fVar20)),auVar25._0_16_);
        FUN_1804b3060(auVar27._0_8_,param_3,0,0);
        FUN_1804b2b70(1);
        fVar18 = auVar28._0_4_;
      }
      if (local_res20 != '\0') {
        fVar8 = *(float *)(lVar9 + 0x11e0);
        auVar19 = ZEXT464((uint)(fVar8 * 0.866));
        vshufps_avx(*(undefined1 (*) [16])(DAT_180bb8ae8 + 0xdc8),
                    *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xdc8),0xff);
        fVar18 = (float)*(ushort *)(lVar15 + 0x194) + fVar18;
        auVar28 = ZEXT464((uint)(fVar18 + fVar8 * 0.4 + fVar20));
        fVar20 = fVar8 * 0.134 * 0.5;
        auVar23 = ZEXT464((uint)(fVar20 + fVar24));
        uVar13 = FUN_1804b1120(fVar20,fVar8 * 0.134,fVar18);
        auVar27 = vunpcklps_avx(auVar28._0_16_,auVar23._0_16_);
        FUN_1804eb100(*(undefined8 *)(lVar15 + 0x2c8),auVar27._0_8_,uVar13,auVar19._0_8_);
      }
    }
  }
  *(undefined4 *)(lVar9 + 0xd58) = uVar30;
  lVar15 = DAT_180bb8ae8;
  if ((((*(int *)(lVar9 + 0x1550) == *(int *)(lVar9 + 0x1ec0)) &&
       (*(int *)(lVar9 + 0x1538) != *(int *)(lVar9 + 0x1ec0))) && (*(int *)(lVar9 + 0x1574) == 1))
     && ((*(char *)(DAT_180bb8ae8 + 0x118) != '\0' &&
         (*(float *)(DAT_180bb8ae8 + 0xa0) * *(float *)(DAT_180bb8ae8 + 0xa0) <=
          *(float *)(DAT_180bb8ae8 + 0xbc4))))) {
    FUN_1804b7870(0,0);
    lVar15 = DAT_180bb8ae8;
    *(undefined8 *)(DAT_180bb8ae8 + 0x1c94) = 0xffffffffffffffff;
    *(undefined2 *)(lVar15 + 0x1c9c) = 0;
  }
  if (param_5 == '\0') {
    if (*(short *)(lVar15 + 0x26a8) < 1) {
      FUN_1804c5a40("Calling EndDisabled() too many times!");
    }
    else {
      iVar12 = *(int *)(lVar15 + 0x1fd8);
      uVar4 = *(uint *)(lVar15 + 0x1e80);
      *(short *)(lVar15 + 0x26a8) = *(short *)(lVar15 + 0x26a8) + -1;
      *(int *)(lVar15 + 0x1fd8) = iVar12 + -1;
      uVar5 = *(uint *)(*(longlong *)(lVar15 + 0x1fe0) + -8 + (longlong)iVar12 * 4);
      *(uint *)(lVar15 + 0x1e80) = uVar5;
      if (((uVar4 & 0x40) != 0) && ((uVar5 & 0x40) == 0)) {
        *(undefined4 *)(lVar15 + 0xc84) = *(undefined4 *)(lVar15 + 0x26a4);
      }
    }
  }
  FUN_1804c29a0();
  return (ulonglong)bVar11;
}



