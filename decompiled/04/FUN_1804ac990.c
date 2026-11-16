// FUN_1804ac990 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ac990 */

undefined8
FUN_1804ac990(int param_1,char param_2,float *param_3,undefined8 param_4,float param_5,float param_6
             ,char param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  longlong lVar3;
  bool bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined1 in_ZMM3 [64];
  float fVar13;
  undefined1 auVar14 [64];
  
  lVar3 = DAT_180bb8ae8;
  auVar14 = ZEXT1664(in_ZMM3._0_16_);
  if (param_7 == '\0') {
    return 0;
  }
  if ((*(byte *)(DAT_180bb8ae8 + 0x1e80) & 0x40) != 0) {
    return 0;
  }
  if (*(char *)(DAT_180bb8ae8 + 0xe2) != '\0') {
    return 0;
  }
  if ((*(int *)(DAT_180bb8ae8 + 0x1550) != 0) && (*(int *)(DAT_180bb8ae8 + 0x1550) != param_1)) {
    return 0;
  }
  if ((*(int *)(DAT_180bb8ae8 + 0x203c) == param_1) &&
     (*(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1,
     *(longlong *)(lVar3 + 0x2040) == *(longlong *)(lVar3 + 0x14d0))) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
  }
  if ((param_2 != '\0') || (bVar4)) {
    piVar8 = (int *)FUN_1804af210(lVar3,0x201);
    piVar8[1] = param_1;
    *piVar8 = param_1;
    *(undefined2 *)(piVar8 + 2) = 1;
    bVar5 = FUN_1804c3390(0x201,1,param_1);
    piVar8 = (int *)FUN_1804af210(lVar3,0x204);
    piVar8[1] = param_1;
    *piVar8 = param_1;
    *(undefined2 *)(piVar8 + 2) = 1;
    bVar6 = FUN_1804c3390(0x204,1,param_1);
    iVar10 = (bVar5 ^ 1) + ((bVar6 ^ 1) - 2);
    piVar8 = (int *)FUN_1804af210(lVar3,0x202);
    piVar8[1] = param_1;
    *piVar8 = param_1;
    *(undefined2 *)(piVar8 + 2) = 1;
    cVar7 = FUN_1804c3390(0x202,1,param_1);
    if (cVar7 != '\0') {
      iVar10 = iVar10 + 1;
    }
    piVar8 = (int *)FUN_1804af210(lVar3,0x203);
    piVar8[1] = param_1;
    *piVar8 = param_1;
    *(undefined2 *)(piVar8 + 2) = 1;
    cVar7 = FUN_1804c3390(0x203,1,param_1);
    iVar9 = iVar10 + 1;
    if (cVar7 == '\0') {
      iVar9 = iVar10;
    }
    if ((iVar9 != 0) &&
       ((iVar10 = *(int *)(lVar3 + 4), DAT_180b0a564 != iVar10 || (DAT_180c7dfcc == param_1)))) {
      fVar13 = auVar14._0_4_;
      if (param_6 <= 0.0) {
        fVar11 = ABS(param_5 - fVar13) / 100.0;
      }
      else {
        fVar11 = param_6;
      }
      fVar11 = (float)iVar9 * fVar11 + *param_3;
      if (0.0 < param_6) {
        fVar11 = (fVar11 - fVar13) / param_6;
        fVar12 = ABS(fVar11);
        auVar2 = vroundps_avx(ZEXT416((uint)fVar12),0);
        auVar1 = vcmpss_avx(ZEXT416((uint)(fVar12 - auVar2._0_4_)),ZEXT416(0x3f000000),0);
        fVar11 = (float)((uint)((float)(auVar1._0_4_ & 0x3f800000) + auVar2._0_4_) |
                        (uint)fVar11 & 0x80000000) * param_6 + fVar13;
      }
      auVar1 = vminss_avx(auVar14._0_16_,ZEXT416((uint)param_5));
      fVar13 = auVar1._0_4_;
      if (fVar13 <= fVar11) {
        auVar1 = vmaxss_avx(auVar14._0_16_,ZEXT416((uint)param_5));
        auVar1 = vminss_avx(auVar1,ZEXT416((uint)fVar11));
        fVar13 = auVar1._0_4_;
      }
      DAT_180b0a564 = iVar10;
      DAT_180c7dfcc = param_1;
      if (fVar13 != *param_3) {
        *param_3 = fVar13;
        FUN_1804b7a50(param_1);
        return 1;
      }
    }
  }
  return 0;
}



