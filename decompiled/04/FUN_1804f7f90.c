// FUN_1804f7f90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f7f90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f7f90(void)

{
  float fVar1;
  undefined1 auVar2 [16];
  longlong *plVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  char cVar8;
  char cVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char *pcVar13;
  longlong lVar14;
  uint uVar15;
  bool bVar16;
  char *pcVar17;
  float fVar18;
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  float fVar22;
  float fVar23;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined1 *local_100;
  char *local_f8;
  char *local_f0;
  undefined8 local_e8;
  undefined4 local_d8;
  float local_c8;
  float local_c4;
  undefined4 local_c0;
  undefined1 local_b8 [12];
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float fStack_9c;
  char local_98;
  undefined1 local_97 [7];
  undefined1 local_90 [8];
  undefined8 uStack_88;
  ulonglong local_80;
  
  lVar7 = DAT_180bb8ae8;
  local_80 = DAT_1808d5f00 ^ (ulonglong)auStack_128;
  bVar16 = false;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  local_c0 = *(undefined4 *)(lVar7 + 0x1f10);
  plVar3 = *(longlong **)(lVar7 + 0x14d0);
  *(undefined4 *)(lVar7 + 0x1f10) = 0;
  if (*(char *)((longlong)plVar3 + 0xd1) != '\0') {
  }
  lVar14 = lVar7;
  uVar10 = FUN_1804b0a90(&DAT_18085be58,0,
                         *(undefined4 *)(plVar3[0x22] + -4 + (longlong)(int)plVar3[0x21] * 4));
  if (*(uint *)(*plVar3 + 0x1534) == uVar10) {
    FUN_1804cf810(uVar10,0xb,&DAT_18085be58);
    lVar14 = DAT_180bb8ae8;
  }
  fVar23 = *(float *)(lVar14 + 0xcc8) + *(float *)(lVar14 + 0xcc8) + *(float *)(lVar14 + 0x11e0);
  pcVar17 = "##v";
  while (*pcVar17 != '\0') {
    pcVar13 = pcVar17 + 1;
    if (((*pcVar17 == '#') && (*pcVar13 == '#')) ||
       (pcVar17 = pcVar13, pcVar13 == (char *)0xffffffffffffffff)) break;
  }
  auVar20 = ZEXT464(0xbf800000);
  auVar21 = ZEXT864(0);
  if (pcVar17 == "##v") {
    fVar22 = 0.0;
    local_c4 = *(float *)(lVar14 + 0x11e0);
  }
  else {
    local_d8 = 0;
    local_e8 = 0;
    local_100 = &DAT_18085be58;
    local_108 = 0xbf800000;
    local_f8 = pcVar17;
    local_f0 = pcVar17;
    FUN_1804ea040(&local_c8,*(undefined8 *)(lVar14 + 0x11d0),*(float *)(lVar14 + 0x11e0),0x7f7fffff)
    ;
    fVar22 = (float)(int)((uint)((float)(int)local_c8 < local_c8) + (int)local_c8);
  }
  local_a8 = *(float *)(plVar3 + 0x23);
  fVar1 = *(float *)(lVar7 + 0xcc8);
  fStack_9c = fVar1 + fVar1 + local_c4 + *(float *)((longlong)plVar3 + 0x11c);
  fStack_a4 = *(float *)((longlong)plVar3 + 0x11c);
  local_a0 = local_a8 + fVar23;
  if (fVar22 <= auVar21._0_4_) {
    fVar18 = 0.0;
  }
  else {
    fVar18 = fVar22 + *(float *)(lVar7 + 0xcdc);
  }
  uStack_88._4_4_ = fStack_9c + auVar21._0_4_;
  local_c4 = uStack_88._4_4_ - fStack_a4;
  uStack_88._0_4_ = local_a0 + fVar18;
  local_90._4_4_ = fStack_a4;
  local_c8 = (local_a0 + fVar18) - local_a8;
  local_90._0_4_ = local_a8;
  FUN_1804c6420(&local_c8,fVar1);
  cVar8 = FUN_1804c6190(local_90,uVar10,&local_a8,0);
  if (cVar8 == '\0') {
  }
  local_108 = 0;
  cVar9 = FUN_1804f4d40(&local_a8,uVar10,&local_98,local_97);
  pcVar13 = "##ComboPopup";
  cVar8 = '#';
  uVar15 = ~uVar10;
  do {
    pcVar13 = pcVar13 + 1;
    if (((cVar8 == '#') && (*pcVar13 == '#')) && (pcVar13[1] == '#')) {
      pcVar13 = pcVar13 + 2;
      uVar15 = ~uVar10;
    }
    else {
      uVar15 = crc32(uVar15,cVar8);
    }
    cVar8 = *pcVar13;
  } while (cVar8 != '\0');
  uVar15 = ~uVar15;
  if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
     (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
               *(longlong *)(DAT_180bb8ae8 + 0x2000)) == uVar15)) {
    bVar16 = true;
  }
  if ((cVar9 == '\0') || (bVar16)) {
    auVar4 = vmaxss_avx(ZEXT416((uint)local_a8),ZEXT416((uint)(local_a0 - fVar23)));
    auVar19 = ZEXT1664(auVar4);
    FUN_1804b4250(&local_a8,uVar10,0,auVar20._0_8_);
    if ((!bVar16) && (lVar14 = 0x2b0, local_98 == '\0')) goto LAB_1804f82e2;
  }
  else {
    FUN_1804c7740(uVar15,0);
    bVar16 = true;
    auVar4 = vmaxss_avx(ZEXT416((uint)local_a8),ZEXT416((uint)(local_a0 - fVar23)));
    auVar19 = ZEXT1664(auVar4);
    FUN_1804b4250(&local_a8,uVar10,0,auVar20._0_8_);
  }
  lVar14 = 0x2c0;
LAB_1804f82e2:
  local_c8 = auVar19._0_4_;
  auVar4 = *(undefined1 (*) [16])(lVar14 + 0xc78 + DAT_180bb8ae8);
  auVar2 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xdc8);
  auVar5 = vshufps_avx(auVar4,auVar4,0xff);
  auVar6 = vshufps_avx(auVar2,auVar2,0xff);
  _local_90 = auVar4._0_12_;
  uStack_88._4_4_ = auVar5._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
  local_c4 = fStack_a4;
  local_b8 = auVar2._0_12_;
  fStack_ac = auVar6._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
  uVar12 = 0xa0;
  if (!NAN(fVar23)) {
    uVar12 = 0xf0;
  }
  uVar11 = FUN_1804b1120(local_90);
  local_108 = *(undefined4 *)(lVar7 + 0xccc);
  local_100._0_4_ = uVar12;
  FUN_1804df870(plVar3[0x59],&local_c8,&local_a0,uVar11);
  if ((auVar19._0_4_ + fVar23) - *(float *)(lVar7 + 0xcc4) <= local_a0) {
    fVar23 = *(float *)(lVar7 + 0xcc8);
    auVar19 = ZEXT464((uint)(fVar23 + auVar19._0_4_));
    auVar20 = ZEXT464((uint)(fVar23 + fStack_a4));
    lVar14 = DAT_180bb8ae8;
    uVar12 = FUN_1804b1120(fVar23);
    local_f8 = *(char **)(lVar14 + 0xdb0);
    local_f0 = (char *)CONCAT44(local_f0._4_4_,*(undefined4 *)(lVar14 + 0xdb8));
    local_100._0_4_ = 0x3f800000;
    local_108 = 0x3f800000;
    auVar4 = vunpcklps_avx(auVar19._0_16_,auVar20._0_16_);
    FUN_1804eadd0(plVar3[0x59],auVar4._0_8_,uVar12,auVar21._0_8_);
  }
  FUN_1804b4100(CONCAT44(fStack_a4,local_a8),CONCAT44(fStack_9c,local_a0),
                *(undefined4 *)(lVar7 + 0xccc));
  *(undefined8 *)(lVar7 + 0x2640) = 0;
  *(undefined8 *)(lVar7 + 0x2648) = 0;
  if (auVar21._0_4_ < fVar22) {
    auVar4 = vunpcklps_avx(ZEXT416((uint)(local_a0 + *(float *)(lVar7 + 0xcdc))),
                           ZEXT416((uint)(fStack_a4 + *(float *)(lVar7 + 0xcc8))));
    FUN_1804b3060(auVar4._0_8_,&DAT_18085be58,pcVar17,0);
  }
  if (bVar16) {
    *(undefined4 *)(lVar7 + 0x1f10) = local_c0;
    FUN_1804f84f0(uVar15,&local_a8,0x50);
  }
}



