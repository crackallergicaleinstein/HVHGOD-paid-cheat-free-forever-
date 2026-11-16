// FUN_1804f1690 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f1690 */

undefined8 FUN_1804f1690(char *param_1,char param_2,byte param_3)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  float fVar5;
  bool bVar6;
  longlong lVar7;
  longlong lVar8;
  char cVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  char *pcVar15;
  longlong *plVar16;
  float fVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  float fVar22;
  float fVar23;
  float local_res8;
  undefined4 local_resc;
  
  lVar7 = DAT_180bb8ae8;
  lVar4 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  pcVar15 = param_1;
  if (param_1 != (char *)0xffffffffffffffff) {
    while (*pcVar15 != '\0') {
      pcVar1 = pcVar15 + 1;
      if (((*pcVar15 == '#') && (*pcVar1 == '#')) ||
         (pcVar15 = pcVar1, pcVar1 == (char *)0xffffffffffffffff)) break;
    }
  }
  auVar19 = ZEXT864(0);
  if (param_1 == pcVar15) {
    uVar13 = 0;
    local_resc = *(undefined4 *)(DAT_180bb8ae8 + 0x11e0);
  }
  else {
    FUN_1804ea040(&local_res8,*(undefined8 *)(DAT_180bb8ae8 + 0x11d0),
                  *(undefined4 *)(DAT_180bb8ae8 + 0x11e0),0x7f7fffff,0xbf800000,param_1,pcVar15,
                  pcVar15,0);
    auVar18._0_4_ = (float)(int)((uint)((float)(int)local_res8 < local_res8) + (int)local_res8);
    auVar18._4_12_ = SUB1612(ZEXT816(0),4);
    uVar13 = auVar18._0_8_;
  }
  lVar8 = DAT_180bb8ae8;
  uVar11 = local_resc;
  fVar17 = (float)FUN_1805016d0(lVar4 + 0x184,0,uVar13,0,
                                (float)(int)(*(float *)(lVar7 + 0x11e0) * 1.2));
  plVar16 = *(longlong **)(lVar8 + 0x14d0);
  if ((plVar16[0x39] != 0) || (lVar12 = 0x280, *(longlong *)(lVar8 + 0x2338) != 0)) {
    lVar12 = 0x250;
  }
  fVar22 = *(float *)(lVar4 + 0x118);
  fVar23 = *(float *)(lVar4 + 0x150) + *(float *)(lVar4 + 0x11c);
  fVar5 = (*(float *)(lVar12 + (longlong)plVar16) - *(float *)(plVar16 + 0x23)) - fVar17;
  auVar18 = vmaxss_avx(auVar19._0_16_,ZEXT416((uint)fVar5));
  auVar19 = ZEXT1664(auVar18);
  iVar10 = FUN_1804b0a90(*(float *)(lVar4 + 0x150),0,fVar5);
  if (*(int *)(*plVar16 + 0x1534) == iVar10) {
    FUN_1804cf810(iVar10,0xb,param_1);
  }
  uVar14 = 0x1800020;
  if (*(int *)(lVar7 + 0x1550) == iVar10) {
    if (*(char *)(lVar7 + 0x1562) != '\0') {
      bVar6 = true;
      goto LAB_1804f1895;
    }
  }
  else {
    uVar14 = 0x1800000;
  }
  bVar6 = false;
LAB_1804f1895:
  FUN_1804c1830(param_3 ^ 1);
  local_res8 = fVar17;
  local_resc = uVar11;
  cVar9 = FUN_1804ff860(param_1,0,uVar14,&local_res8);
  if ((cVar9 == '\0') || (bVar6)) {
    uVar13 = 0;
  }
  else {
    uVar13 = 1;
  }
  if (((*(uint *)(lVar7 + 0x1ec8) & 0x100) != 0) && (param_2 != '\0')) {
    fVar17 = *(float *)(lVar7 + 0x11e0);
    vshufps_avx(*(undefined1 (*) [16])(DAT_180bb8ae8 + 0xdc8),
                *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xdc8),0xff);
    fVar5 = (float)*(ushort *)(lVar4 + 0x194) + auVar19._0_4_;
    auVar19 = ZEXT464((uint)(fVar17 * 0.866));
    auVar21 = ZEXT464((uint)(fVar5 + fVar17 * 0.4 + fVar22));
    fVar22 = fVar17 * 0.134 * 0.5;
    auVar20 = ZEXT464((uint)(fVar22 + fVar23));
    uVar11 = FUN_1804b1120(fVar22,fVar17 * 0.134,fVar5);
    auVar18 = vunpcklps_avx(auVar21._0_16_,auVar20._0_16_);
    FUN_1804eb100(*(undefined8 *)(lVar4 + 0x2c8),auVar18._0_8_,uVar11,auVar19._0_8_);
  }
  lVar4 = DAT_180bb8ae8;
  if (*(short *)(DAT_180bb8ae8 + 0x26a8) < 1) {
    FUN_1804c5a40("Calling EndDisabled() too many times!");
  }
  else {
    iVar10 = *(int *)(DAT_180bb8ae8 + 0x1fd8);
    uVar2 = *(uint *)(DAT_180bb8ae8 + 0x1e80);
    *(short *)(DAT_180bb8ae8 + 0x26a8) = *(short *)(DAT_180bb8ae8 + 0x26a8) + -1;
    *(int *)(lVar4 + 0x1fd8) = iVar10 + -1;
    uVar3 = *(uint *)(*(longlong *)(lVar4 + 0x1fe0) + -8 + (longlong)iVar10 * 4);
    *(uint *)(lVar4 + 0x1e80) = uVar3;
    if (((uVar2 & 0x40) != 0) && ((uVar3 & 0x40) == 0)) {
      *(undefined4 *)(lVar4 + 0xc84) = *(undefined4 *)(lVar4 + 0x26a4);
    }
  }
  return uVar13;
}



