// FUN_1804c9640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c9640 */

void FUN_1804c9640(void)

{
  float fVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  int iVar4;
  longlong lVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined4 uVar8;
  char cVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [64];
  float fVar16;
  undefined1 auVar17 [64];
  float fVar18;
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 local_58 [12];
  uint uStack_4c;
  
  lVar10 = DAT_180bb8ae8;
  lVar5 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  auVar2 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0x1edc);
  uVar3 = *(uint *)(DAT_180bb8ae8 + 0x1ec4);
  iVar4 = *(int *)(DAT_180bb8ae8 + 0x1ec0);
  local_58._8_4_ = auVar2._8_4_;
  uVar8 = local_58._8_4_;
  if (*(char *)(lVar5 + 0x178) == '\0') {
    fVar1 = *(float *)(lVar5 + 0x268);
    auVar15 = ZEXT464((uint)fVar1);
    if (fVar1 <= auVar2._0_4_) {
      auVar14 = vminss_avx(ZEXT416(*(uint *)(lVar5 + 0x270)),auVar2);
    }
    else {
      auVar14 = ZEXT416((uint)fVar1);
    }
    auVar20 = ZEXT1664(auVar14);
    stack0xffffffffffffffac = auVar2._4_12_;
    local_58._0_4_ = auVar14._0_4_;
    auVar14 = _local_58;
    if (fVar1 <= (float)uVar8) {
      auVar7 = vminss_avx(ZEXT416(*(uint *)(lVar5 + 0x270)),ZEXT416((uint)uVar8));
      auVar15 = ZEXT1664(auVar7);
    }
    uStack_4c = auVar2._12_4_;
    local_58._0_8_ = auVar14._0_8_;
    local_58._8_4_ = auVar15._0_4_;
  }
  else {
    auVar15 = ZEXT464((uint)local_58._8_4_);
    auVar20 = ZEXT464((uint)auVar2._0_4_);
    _local_58 = auVar2;
  }
  if ((((*(char *)(DAT_180bb8ae8 + 0x20a2) != '\0') &&
       (*(int *)(DAT_180bb8ae8 + 0x204c) == *(int *)(lVar5 + 0x170))) && ((uVar3 & 0x40) == 0)) &&
     (((uVar12 = uVar3 & 4, uVar12 == 0 || (*(int *)(DAT_180bb8ae8 + 0x20b0) == 0)) &&
      (FUN_1804c95a0(DAT_180bb8ae8 + 0x20a8), uVar12 == 0)))) {
    *(undefined1 *)(lVar10 + 0x20a2) = 0;
    *(bool *)(lVar10 + 0x20a1) = *(char *)(lVar10 + 0x20e1) != '\0';
  }
  auVar17 = ZEXT464(uStack_4c);
  auVar19 = ZEXT464((uint)local_58._4_4_);
  if (((*(char *)(lVar10 + 0x20e1) != '\0') && ((uVar3 & 0x40) == 0)) &&
     ((uVar12 = *(uint *)(lVar10 + 0x20e4), (uVar12 >> 9 & 1) != 0 ||
      ((*(uint *)(lVar5 + 0x14) & 0x10000) == 0)))) {
    if ((uVar12 >> 10 & 1) == 0) {
      if ((*(int *)(lVar10 + 0x203c) != iVar4) || ((uVar12 & 0x10) != 0)) {
        lVar11 = 0x2128;
        if (lVar5 != *(longlong *)(lVar10 + 0x2040)) {
          lVar11 = 0x2198;
        }
        cVar9 = FUN_1804c9140(lVar11 + lVar10,local_58);
        if (cVar9 != '\0') {
          FUN_1804c95a0(lVar11 + lVar10);
        }
        if ((*(byte *)(lVar10 + 0x20e4) & 0x20) != 0) {
          fVar1 = *(float *)(lVar5 + 0x234);
          fVar18 = auVar19._0_4_;
          if (fVar18 < fVar1) {
            fVar13 = *(float *)(lVar5 + 0x22c);
            fVar16 = auVar17._0_4_;
            if (((fVar13 < fVar16) && (auVar20._0_4_ < *(float *)(lVar5 + 0x230))) &&
               (*(float *)(lVar5 + 0x228) < auVar15._0_4_)) {
              if (fVar13 <= fVar16) {
                auVar2 = vminss_avx(ZEXT416((uint)fVar1),auVar17._0_16_);
                fVar6 = auVar2._0_4_;
              }
              else {
                fVar6 = fVar13;
              }
              if (fVar13 <= fVar18) {
                auVar2 = vminss_avx(ZEXT416((uint)fVar1),auVar19._0_16_);
                fVar13 = auVar2._0_4_;
              }
              if (((fVar16 - fVar18) * 0.7 <= fVar6 - fVar13) &&
                 (cVar9 = FUN_1804c9140(lVar10 + 0x2160,local_58), cVar9 != '\0')) {
                FUN_1804c95a0(lVar10 + 0x2160);
              }
            }
          }
        }
      }
    }
    else {
      FUN_1804c9960(iVar4,uVar3,uVar12);
    }
  }
  if (*(int *)(lVar10 + 0x203c) == iVar4) {
    if (*(longlong *)(lVar10 + 0x2040) != lVar5) {
      FUN_1804c8e60(lVar5);
    }
    *(undefined4 *)(lVar10 + 0x204c) = *(undefined4 *)(lVar5 + 0x170);
    FUN_1804c1dd0(*(undefined4 *)(lVar10 + 0x1e7c));
    *(undefined4 *)(lVar10 + 0x2048) = *(undefined4 *)(lVar10 + 0x1e7c);
    *(undefined1 *)(lVar10 + 0x203b) = 1;
    *(uint *)(lVar10 + 0x2050) = uVar3;
    if ((*(uint *)(lVar10 + 0x1ec4) & 0x200000) != 0) {
      *(undefined8 *)(lVar10 + 0x2098) = *(undefined8 *)(lVar10 + 0x1e98);
    }
    fVar1 = *(float *)(lVar5 + 300);
    fVar18 = *(float *)(lVar5 + 0x128);
    lVar10 = (longlong)*(int *)(lVar5 + 0x170) + 0x41;
    *(float *)(lVar5 + lVar10 * 0x10) = auVar20._0_4_ - fVar18;
    *(float *)(lVar5 + 4 + lVar10 * 0x10) = auVar19._0_4_ - fVar1;
    *(float *)(lVar5 + 8 + lVar10 * 0x10) = auVar15._0_4_ - fVar18;
    *(float *)(lVar5 + 0xc + lVar10 * 0x10) = auVar17._0_4_ - fVar1;
  }
  return;
}



