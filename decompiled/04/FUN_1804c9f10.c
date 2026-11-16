// FUN_1804c9f10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c9f10 */

float * FUN_1804c9f10(float *param_1,uint param_2)

{
  undefined1 auVar1 [16];
  float fVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 local_58 [8];
  float fStack_50;
  float fStack_4c;
  
  lVar6 = *(longlong *)(DAT_180bb8ae8 + 0x2040);
  lVar7 = DAT_180bb8ae8;
  iVar4 = FUN_1804c9ea0(param_2);
  if (iVar4 == 1) {
    if ((*(float *)(lVar7 + 0x110) < -256000.0) ||
       (bVar3 = true, *(float *)(lVar7 + 0x114) < -256000.0)) {
      bVar3 = false;
    }
    lVar6 = 0x110;
    if (!bVar3) {
      lVar6 = 0x24e0;
    }
    fVar8 = *(float *)(lVar6 + lVar7) + 1.0;
    fVar10 = *(float *)(lVar6 + 4 + lVar7);
    goto LAB_1804ca173;
  }
  if ((((*(int *)(lVar7 + 0x1550) == 0) || (*(char *)(lVar7 + 0x1564) == '\0')) ||
      (*(int *)(lVar7 + 0x1550) != *(int *)(lVar7 + 0x1ec0))) || ((param_2 >> 0x1a & 1) == 0)) {
    _local_58 = ZEXT816(0);
    if (lVar6 == 0) goto LAB_1804ca0c6;
    lVar5 = (longlong)*(int *)(lVar7 + 0x204c) + 0x41;
    fVar12 = *(float *)(lVar6 + 0x128) + *(float *)(lVar6 + lVar5 * 0x10);
    fVar10 = *(float *)(lVar6 + 300) + *(float *)(lVar6 + 4 + lVar5 * 0x10);
    fVar8 = *(float *)(lVar6 + 0x128) + *(float *)(lVar6 + 8 + lVar5 * 0x10);
    fVar11 = *(float *)(lVar6 + 300) + *(float *)(lVar6 + 0xc + lVar5 * 0x10);
LAB_1804ca052:
    if ((*(int *)(lVar6 + 0x290) != *(int *)(lVar7 + 4)) &&
       ((*(float *)(lVar6 + 0xa8) != 3.4028235e+38 || (*(float *)(lVar6 + 0xac) != 3.4028235e+38))))
    {
      FUN_1804c6df0(local_58,lVar6);
      fVar9 = *(float *)(lVar6 + 0x98) - (float)local_58._0_4_;
      fVar2 = *(float *)(lVar6 + 0x9c) - (float)local_58._4_4_;
      fVar12 = fVar12 + fVar9;
      fVar8 = fVar8 + fVar9;
      fVar11 = fVar11 + fVar2;
      fVar10 = fVar10 + fVar2;
    }
  }
  else {
    _local_58 = *(undefined1 (*) [16])(lVar7 + 0x1edc);
    if (lVar6 != 0) {
      fVar11 = fStack_4c;
      fVar12 = (float)local_58._0_4_;
      fVar8 = fStack_50;
      fVar10 = (float)local_58._4_4_;
      goto LAB_1804ca052;
    }
LAB_1804ca0c6:
    fVar12 = (float)local_58._0_4_;
    fVar8 = fStack_50;
    fVar11 = fStack_4c;
    fVar10 = (float)local_58._4_4_;
  }
  auVar1 = vminss_avx(ZEXT416((uint)(*(float *)(lVar7 + 0xcc4) * 4.0)),
                      ZEXT416((uint)(fVar8 - fVar12)));
  lVar6 = **(longlong **)(lVar7 + 0x2030);
  fVar12 = auVar1._0_4_ + fVar12;
  auVar1 = vminss_avx(ZEXT416(*(uint *)(lVar7 + 0xcc8)),ZEXT416((uint)(fVar11 - fVar10)));
  fVar10 = *(float *)(lVar6 + 8);
  fVar11 = fVar11 - auVar1._0_4_;
  fVar9 = *(float *)(lVar6 + 0xc);
  if (fVar9 <= fVar11) {
    auVar1 = vminss_avx(ZEXT416((uint)(fVar9 + *(float *)(lVar6 + 0x14))),ZEXT416((uint)fVar11));
    fVar9 = auVar1._0_4_;
  }
  if (fVar10 <= fVar12) {
    auVar1 = vminss_avx(ZEXT416((uint)(fVar10 + *(float *)(lVar6 + 0x10))),ZEXT416((uint)fVar12));
    fVar10 = auVar1._0_4_;
  }
  fVar8 = (float)(int)fVar10;
  fVar10 = (float)(int)fVar9;
LAB_1804ca173:
  param_1[1] = fVar10;
  *param_1 = fVar8;
  return param_1;
}



