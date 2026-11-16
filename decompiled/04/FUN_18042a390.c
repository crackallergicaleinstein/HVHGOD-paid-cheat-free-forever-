// FUN_18042a390 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042a390 */

int * FUN_18042a390(longlong param_1,float *param_2,float param_3)

{
  longlong lVar1;
  longlong lVar2;
  int *piVar3;
  float fVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  double dVar11;
  float fVar12;
  
  piVar3 = *(int **)(param_1 + 0x40);
  if (piVar3 != (int *)0x0) {
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(piVar3 + 4);
    goto LAB_18042a3bd;
  }
  lVar1 = *(longlong *)(param_1 + 0x50);
  if (lVar1 == 0) {
LAB_18042a47b:
    lVar2 = _malloc_base(0x410);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_18063ab10(lVar2,0,0x410);
      if (lVar1 == 0) {
        *(longlong *)(param_1 + 0x48) = lVar2;
      }
      else {
        *(longlong *)(lVar1 + 0x408) = lVar2;
      }
    }
LAB_18042a4c3:
    *(longlong *)(param_1 + 0x50) = lVar2;
  }
  else {
    lVar2 = lVar1;
    if (0x400 < *(int *)(lVar1 + 0x400) + 0x18) {
      lVar2 = *(longlong *)(lVar1 + 0x408);
      if (lVar2 == 0) goto LAB_18042a47b;
      goto LAB_18042a4c3;
    }
  }
  piVar3 = (int *)(*(int *)(lVar2 + 0x400) + lVar2);
  *(int *)(lVar2 + 0x400) = *(int *)(lVar2 + 0x400) + 0x18;
  if (piVar3 == (int *)0x0) {
    return (int *)0x0;
  }
LAB_18042a3bd:
  fVar12 = (param_2[2] - *param_2) / (param_2[3] - param_2[1]);
  if (0.0 <= fVar12) {
    dVar11 = (double)(fVar12 * 1024.0);
    if (fVar12 * 1024.0 < 0.0) {
      dVar11 = dVar11 - 0.5;
      auVar8._0_4_ = (float)dVar11;
      auVar8._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
      auVar8._8_8_ = 0;
      auVar8 = vroundss_avx(ZEXT416(0),auVar8,2);
      fVar4 = auVar8._0_4_;
    }
    else {
      dVar11 = dVar11 + 0.5;
      auVar7._0_4_ = (float)dVar11;
      auVar7._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
      auVar7._8_8_ = 0;
      auVar8 = vroundss_avx(ZEXT416(0),auVar7,1);
      fVar4 = auVar8._0_4_;
    }
  }
  else {
    dVar11 = (double)(-fVar12 * 1024.0);
    if (-fVar12 * 1024.0 < 0.0) {
      dVar11 = dVar11 - 0.5;
      auVar6._0_4_ = (float)dVar11;
      auVar6._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
      auVar6._8_8_ = 0;
      auVar8 = vroundss_avx(ZEXT416(0),auVar6,2);
      fVar4 = -auVar8._0_4_;
    }
    else {
      dVar11 = dVar11 + 0.5;
      auVar5._0_4_ = (float)dVar11;
      auVar5._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
      auVar5._8_8_ = 0;
      auVar8 = vroundss_avx(ZEXT416(0),auVar5,1);
      fVar4 = -auVar8._0_4_;
    }
  }
  piVar3[1] = (int)fVar4;
  fVar12 = ((param_3 - param_2[1]) * fVar12 + *param_2) * 1024.0;
  dVar11 = (double)fVar12;
  if (fVar12 < 0.0) {
    dVar11 = dVar11 - 0.5;
    auVar10._0_4_ = (float)dVar11;
    auVar10._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
    auVar10._8_8_ = 0;
    auVar8 = vroundss_avx(ZEXT816(0),auVar10,2);
    fVar12 = auVar8._0_4_;
  }
  else {
    dVar11 = dVar11 + 0.5;
    auVar9._0_4_ = (float)dVar11;
    auVar9._4_4_ = (int)((ulonglong)dVar11 >> 0x20);
    auVar9._8_8_ = 0;
    auVar8 = vroundss_avx(ZEXT816(0),auVar9,1);
    fVar12 = auVar8._0_4_;
  }
  *piVar3 = (int)fVar12;
  piVar3[2] = (int)param_2[3];
  piVar3[4] = 0;
  piVar3[5] = 0;
  piVar3[3] = (int)param_2[4];
  return piVar3;
}



