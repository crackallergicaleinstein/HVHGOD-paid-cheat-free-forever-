// FUN_1804b8b60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b8b60 */

void FUN_1804b8b60(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  undefined1 uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  uint uVar9;
  undefined1 *puVar10;
  float fVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [64];
  float fVar16;
  undefined1 auVar17 [64];
  
  lVar4 = DAT_180bb8ae8;
  auVar15 = ZEXT464(0x7f7fffff);
  plVar7 = *(longlong **)(DAT_180bb8ae8 + 0x2030);
  auVar17 = ZEXT464(0xff7fffff);
  auVar12 = auVar15._0_16_;
  plVar1 = plVar7 + *(int *)(DAT_180bb8ae8 + 0x2028);
  auVar13 = auVar17._0_16_;
  while (plVar7 != plVar1) {
    lVar2 = *plVar7;
    plVar7 = plVar7 + 1;
    fVar16 = *(float *)(lVar2 + 8);
    fVar11 = *(float *)(lVar2 + 0xc);
    auVar3 = vcmpss_avx(ZEXT416((uint)fVar16),auVar15._0_16_,1);
    auVar3 = vblendvps_avx(auVar15._0_16_,ZEXT416((uint)fVar16),auVar3);
    auVar15 = ZEXT1664(auVar3);
    auVar3 = vcmpss_avx(ZEXT416((uint)fVar11),auVar12,1);
    auVar12 = vblendvps_avx(auVar12,ZEXT416((uint)fVar11),auVar3);
    auVar14 = ZEXT416((uint)(fVar16 + *(float *)(lVar2 + 0x10)));
    auVar3 = vcmpss_avx(auVar17._0_16_,auVar14,1);
    auVar3 = vblendvps_avx(auVar17._0_16_,auVar14,auVar3);
    auVar17 = ZEXT1664(auVar3);
    auVar14 = ZEXT416((uint)(fVar11 + *(float *)(lVar2 + 0x14)));
    auVar3 = vcmpss_avx(auVar13,auVar14,1);
    auVar13 = vblendvps_avx(auVar13,auVar14,auVar3);
  }
  *(int *)(DAT_180bb8ae8 + 0x1234) = auVar15._0_4_;
  *(int *)(lVar4 + 0x1238) = auVar12._0_4_;
  *(int *)(lVar4 + 0x123c) = auVar17._0_4_;
  *(int *)(lVar4 + 0x1240) = auVar13._0_4_;
  uVar9 = 0;
  *(undefined4 *)(lVar4 + 0x1228) = *(undefined4 *)(lVar4 + 0xdc0);
  if (*(float *)(lVar4 + 0x122c) != *(float *)(lVar4 + 0xdc4)) {
    fVar16 = 1.0;
    auVar15 = ZEXT464(0x40490fdb);
    iVar8 = 0;
    puVar10 = (undefined1 *)(lVar4 + 0x13f4);
    *(float *)(lVar4 + 0x122c) = *(float *)(lVar4 + 0xdc4);
    do {
      if (iVar8 == 0) {
        uVar5 = 0x30;
      }
      else {
        auVar13._0_4_ = (float)iVar8;
        auVar13._4_12_ = SUB1612(ZEXT816(0),4);
        auVar12 = vminss_avx(ZEXT416(*(uint *)(lVar4 + 0x122c)),auVar13);
        fVar11 = (float)FUN_180636820(fVar16 - auVar12._0_4_ / auVar13._0_4_);
        auVar12._0_4_ = auVar15._0_4_ / fVar11;
        auVar12._4_12_ = auVar15._4_12_;
        auVar12 = vroundss_avx(ZEXT816(0),auVar12,2);
        iVar6 = (((int)auVar12._0_4_ + 1) / 2) * 2;
        if (iVar6 < 4) {
          uVar5 = 4;
        }
        else {
          if (0x200 < iVar6) {
            iVar6 = 0;
          }
          uVar5 = (undefined1)iVar6;
        }
      }
      *puVar10 = uVar5;
      iVar8 = iVar8 + 1;
      puVar10 = puVar10 + 1;
    } while (iVar8 < 0x40);
    fVar11 = (float)FUN_180637540(0x3d860a92);
    *(float *)(lVar4 + 0x13f0) = *(float *)(lVar4 + 0x122c) / (fVar16 - fVar11);
  }
  *(undefined4 *)(lVar4 + 0x1230) = 0;
  if ((**(byte **)(lVar4 + 0x60) & 4) != 0) {
    *(undefined2 *)(lVar4 + 0xdbc) = 0;
  }
  if (*(char *)(lVar4 + 0xdbe) != '\0') {
    uVar9 = 0x1000;
    *(undefined4 *)(lVar4 + 0x1230) = 0x1000;
  }
  if (*(char *)(lVar4 + 0xdbc) != '\0') {
    uVar9 = uVar9 | 0x2000;
    *(uint *)(lVar4 + 0x1230) = uVar9;
  }
  if (*(char *)(lVar4 + 0xdbd) != '\0') {
    uVar9 = uVar9 | 0x4000;
    *(uint *)(lVar4 + 0x1230) = uVar9;
  }
  if (*(char *)(lVar4 + 0xb6) != '\0') {
    uVar9 = uVar9 | 0xe0000;
    *(uint *)(lVar4 + 0x1230) = uVar9;
  }
  if ((**(byte **)(lVar4 + 0x60) & 8) == 0) {
    uVar9 = uVar9 | 0xa00000;
    *(uint *)(lVar4 + 0x1230) = uVar9;
  }
  if ((*(byte *)(lVar4 + 0x2c) & 8) != 0) {
    *(uint *)(lVar4 + 0x1230) = uVar9 | 0x400000;
  }
  return;
}



