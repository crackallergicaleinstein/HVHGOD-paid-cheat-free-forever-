// FUN_180504260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180504260 */

int * FUN_180504260(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  longlong lVar3;
  float fVar4;
  undefined1 auVar5 [16];
  byte bVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int *piVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [64];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined4 uVar22;
  undefined4 uVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 local_c8 [16];
  undefined4 local_b8;
  undefined8 local_b4;
  undefined8 uStack_ac;
  
  lVar15 = DAT_180bb8ae8;
  lVar3 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  fVar24 = *(float *)(DAT_180bb8ae8 + 0x11e0) - 2.0;
  auVar21 = ZEXT464((uint)fVar24);
  fVar4 = *(float *)(DAT_180bb8ae8 + 0xcc8) + *(float *)(DAT_180bb8ae8 + 0xcc8);
  auVar18 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0xdc8);
  auVar5 = vshufps_avx(auVar18,auVar18,0xff);
  uVar25 = *(undefined4 *)(lVar3 + 0x118);
  local_c8._0_12_ = auVar18._0_12_;
  local_c8._12_4_ = auVar5._0_4_ * 0.5;
  local_b4 = *(undefined8 *)(DAT_180bb8ae8 + 0xdc8);
  uStack_ac = *(undefined8 *)(DAT_180bb8ae8 + 0xdd0);
  uVar26 = *(undefined4 *)(lVar3 + 0x11c);
  piVar14 = (int *)0x0;
  auVar19 = ZEXT464((uint)(fVar4 + *(float *)(DAT_180bb8ae8 + 0x11e0)));
  fVar24 = fVar24 + fVar24;
  local_b8 = 0;
  FUN_1804d0810(DAT_180bb8ae8 + 0x1f98,fVar4);
  if (*(int *)(lVar15 + 0x1f94) != 0) {
    *(undefined8 *)(lVar15 + 0xdc8) = local_c8._0_8_;
    *(undefined8 *)(lVar15 + 0xdd0) = local_c8._8_8_;
  }
  local_c8 = ZEXT816(0);
  FUN_1804b2af0(0x16,local_c8);
  lVar16 = DAT_180bb8ae8;
  auVar18 = auVar19._0_16_;
  piVar1 = (int *)(DAT_180bb8ae8 + 0x1fd8);
  uVar17 = *(uint *)(DAT_180bb8ae8 + 0x1e80) | 10;
  *(uint *)(DAT_180bb8ae8 + 0x1e80) = uVar17;
  iVar8 = *(int *)(lVar16 + 0x1fdc);
  if (*piVar1 == iVar8) {
    iVar11 = *piVar1 + 1;
    if (iVar8 == 0) {
      iVar8 = 8;
    }
    else {
      iVar8 = iVar8 / 2 + iVar8;
    }
    if (iVar11 < iVar8) {
      iVar11 = iVar8;
    }
    FUN_1804d14d0(piVar1,iVar11);
    auVar18 = auVar19._0_16_;
  }
  auVar5 = vunpcklps_avx(auVar21._0_16_,auVar18);
  auVar20 = ZEXT1664(auVar5);
  *(uint *)(*(longlong *)(lVar16 + 0x1fe0) + (longlong)*piVar1 * 4) = uVar17;
  *piVar1 = *piVar1 + 1;
  uVar22 = *(undefined4 *)(lVar15 + 0xa4);
  uVar23 = *(undefined4 *)(lVar15 + 0xa8);
  *(undefined4 *)(lVar15 + 0xa4) = 0x3e800000;
  *(undefined4 *)(lVar15 + 0xa8) = 0x3e4ccccd;
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  auVar18 = vmaxss_avx(ZEXT416(*(uint *)(param_1 + 0x38)),
                       ZEXT416((uint)(*(float *)(param_1 + 0x40) - fVar24)));
  auVar19 = ZEXT1664(auVar18);
  *(int *)(lVar3 + 0x118) = auVar18._0_4_;
  *(undefined4 *)(lVar3 + 0x11c) = uVar2;
  bVar6 = FUN_1804f5850(&DAT_18085be60,0,auVar5._0_8_);
  uVar2 = *(undefined4 *)(param_1 + 0x3c);
  iVar8 = (bVar6 ^ 1) - 1;
  *(float *)(lVar3 + 0x118) = auVar19._0_4_ + auVar21._0_4_;
  *(undefined4 *)(lVar3 + 0x11c) = uVar2;
  cVar7 = FUN_1804f5850(&DAT_18085be5c,1,auVar20._0_8_);
  lVar16 = DAT_180bb8ae8;
  if (cVar7 != '\0') {
    iVar8 = 1;
  }
  iVar11 = *(int *)(DAT_180bb8ae8 + 0x1fd8);
  if (iVar11 < 2) {
    FUN_1804c5a40("Calling PopItemFlag() too many times!");
  }
  else {
    *(int *)(DAT_180bb8ae8 + 0x1fd8) = iVar11 + -1;
    *(undefined4 *)(lVar16 + 0x1e80) =
         *(undefined4 *)(*(longlong *)(lVar16 + 0x1fe0) + -8 + (longlong)iVar11 * 4);
  }
  FUN_1804b2b70(2);
  *(undefined4 *)(lVar15 + 0xa8) = uVar23;
  *(undefined4 *)(lVar15 + 0xa4) = uVar22;
  if ((iVar8 != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    iVar11 = *(int *)(param_1 + 8);
    uVar9 = 0;
    if (0 < iVar11) {
      piVar1 = *(int **)(param_1 + 0x10);
      piVar13 = piVar1;
      do {
        if (*piVar13 == *(int *)(param_1 + 0x20)) {
          if (piVar1 + uVar9 * 0xb != (int *)0x0) {
            iVar12 = (int)((uVar9 * 0x2c) / 0x2c);
            lVar16 = (longlong)iVar12;
            iVar12 = iVar12 + iVar8;
            lVar15 = (longlong)iVar12;
            goto LAB_180504535;
          }
          break;
        }
        uVar17 = (int)uVar9 + 1;
        uVar9 = (ulonglong)uVar17;
        piVar13 = piVar13 + 0xb;
      } while ((int)uVar17 < iVar11);
    }
  }
LAB_180504563:
  *(undefined4 *)(lVar3 + 0x118) = uVar25;
  *(undefined4 *)(lVar3 + 0x11c) = uVar26;
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) - (fVar24 + 1.0);
  return piVar14;
LAB_180504535:
  if ((iVar12 < 0) || (lVar10 = lVar15, iVar11 <= iVar12)) {
    lVar10 = lVar16;
  }
  piVar14 = piVar1 + lVar10 * 0xb;
  if ((piVar14[1] & 0x200000U) == 0) goto LAB_180504563;
  lVar15 = lVar15 + iVar8;
  lVar16 = lVar16 + iVar8;
  iVar12 = iVar12 + iVar8;
  if ((iVar12 < 0) || (iVar11 <= iVar12)) goto LAB_180504563;
  goto LAB_180504535;
}



