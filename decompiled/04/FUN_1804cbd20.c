// FUN_1804cbd20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cbd20 */

ulonglong FUN_1804cbd20(void)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  float fVar4;
  longlong lVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  longlong lVar10;
  float fVar11;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined1 auVar12 [64];
  undefined8 unaff_XMM7_Qa;
  ulonglong uVar13;
  undefined8 unaff_XMM7_Qb;
  undefined1 auVar14 [64];
  
  lVar5 = DAT_180bb8ae8;
  lVar2 = *(longlong *)(DAT_180bb8ae8 + 0x2040);
  if ((*(uint *)(lVar2 + 0x14) & 0x10000) != 0) {
    return 0;
  }
  if (*(longlong *)(DAT_180bb8ae8 + 0x2228) != 0) {
    return 0;
  }
  if (*(char *)(DAT_180bb8ae8 + 0x184) == '\0') {
    cVar8 = '\0';
  }
  else if (((*(char *)(DAT_180bb8ae8 + 0x1e74) == '\0') || (*(int *)(DAT_180bb8ae8 + 0x1550) == -1))
          && (*(int *)(DAT_180bb8ae8 + 0x1610) == -1)) {
    cVar8 = '\x01';
  }
  else {
    cVar8 = '\0';
  }
  if (*(char *)(DAT_180bb8ae8 + 0x194) == '\0') {
    cVar9 = '\0';
  }
  else if (((*(char *)(DAT_180bb8ae8 + 0x1e74) == '\0') || (*(int *)(DAT_180bb8ae8 + 0x1550) == -1))
          && (*(int *)(DAT_180bb8ae8 + 0x161c) == -1)) {
    cVar9 = '\x01';
  }
  else {
    cVar9 = '\0';
  }
  cVar6 = FUN_1804c3390(0x207,1,0xffffffff);
  cVar7 = FUN_1804c3390(0x208,1,0xffffffff);
  if ((cVar8 == cVar9) && (cVar6 == cVar7)) {
    return 0;
  }
  if (*(int *)(lVar5 + 0x204c) != 0) {
    FUN_1804c9cb0(0);
  }
  if (((*(byte *)(lVar2 + 0x174) & 1) != 0) || (*(char *)(lVar2 + 0x17a) == '\0')) {
    fVar4 = (*(float *)(lVar2 + 0x234) - *(float *)(lVar2 + 0x22c)) - *(float *)(lVar2 + 0x2c0);
    auVar3._12_4_ = 0;
    auVar3._0_12_ = ZEXT812(0);
    auVar12 = ZEXT1264(ZEXT812(0)) << 0x20;
    lVar10 = (longlong)*(int *)(lVar5 + 0x204c) + 0x41;
    fVar11 = fVar4 + (*(float *)(lVar2 + 0xc + lVar10 * 0x10) -
                     *(float *)(lVar2 + 4 + lVar10 * 0x10));
    auVar3 = vmaxss_avx(auVar3 << 0x20,ZEXT416((uint)fVar11));
    auVar14 = ZEXT1664(auVar3);
    cVar8 = FUN_1804c3390(0x205,fVar11,0,fVar4,unaff_XMM7_Qa,unaff_XMM7_Qb,unaff_XMM6_Qa,
                          unaff_XMM6_Qb);
    if (cVar8 != '\0') {
      *(undefined4 *)(lVar5 + 0x20f0) = 3;
      *(undefined4 *)(lVar5 + 0x20f8) = 2;
      *(undefined4 *)(lVar5 + 0x20e4) = 0x810;
      return auVar14._0_8_ ^ 0x8000000080000000;
    }
    cVar8 = FUN_1804c3390(0x206,1,0);
    uVar13 = auVar12._0_8_;
    if (cVar8 == '\0') {
      if (cVar6 != '\0') {
        *(undefined4 *)(lVar2 + 0xc + lVar10 * 0x10) = 0;
        *(undefined4 *)(lVar2 + 4 + lVar10 * 0x10) = 0;
        if (*(float *)(lVar2 + 8 + lVar10 * 0x10) < *(float *)(lVar2 + lVar10 * 0x10)) {
          *(undefined4 *)(lVar2 + 8 + lVar10 * 0x10) = 0;
          *(undefined4 *)(lVar2 + lVar10 * 0x10) = 0;
        }
        *(undefined4 *)(lVar5 + 0x20f0) = 3;
        *(undefined4 *)(lVar5 + 0x20e4) = 0x50;
        return uVar13;
      }
      if (cVar7 == '\0') {
        return uVar13;
      }
      uVar1 = *(undefined4 *)(lVar2 + 0x44);
      *(undefined4 *)(lVar2 + 0xc + lVar10 * 0x10) = uVar1;
      *(undefined4 *)(lVar2 + 4 + lVar10 * 0x10) = uVar1;
      if (*(float *)(lVar2 + 8 + lVar10 * 0x10) < *(float *)(lVar2 + lVar10 * 0x10)) {
        *(undefined4 *)(lVar2 + 8 + lVar10 * 0x10) = 0;
        *(undefined4 *)(lVar2 + lVar10 * 0x10) = 0;
      }
      *(undefined4 *)(lVar5 + 0x20e4) = 0x50;
    }
    else {
      uVar13 = auVar14._0_8_;
      *(undefined4 *)(lVar5 + 0x20f8) = 3;
      *(undefined4 *)(lVar5 + 0x20e4) = 0x810;
    }
    *(undefined4 *)(lVar5 + 0x20f0) = 2;
    return uVar13;
  }
  cVar8 = FUN_1804c3390(0x205,1,0xffffffff);
  if (cVar8 == '\0') {
    cVar8 = FUN_1804c3390(0x206,1,0xffffffff);
    if (cVar8 == '\0') {
      if (cVar6 == '\0') {
        if (cVar7 == '\0') {
          return 0;
        }
        *(undefined4 *)(lVar2 + 0xac) = *(undefined4 *)(lVar2 + 0xa4);
      }
      else {
        *(undefined4 *)(lVar2 + 0xac) = 0;
      }
      goto LAB_1804cbea7;
    }
    fVar11 = (*(float *)(lVar2 + 0x234) - *(float *)(lVar2 + 0x22c)) + *(float *)(lVar2 + 0x9c);
  }
  else {
    fVar11 = *(float *)(lVar2 + 0x9c) - (*(float *)(lVar2 + 0x234) - *(float *)(lVar2 + 0x22c));
  }
  *(float *)(lVar2 + 0xac) = fVar11;
LAB_1804cbea7:
  *(undefined4 *)(lVar2 + 0xbc) = 0;
  *(undefined4 *)(lVar2 + 0xb4) = 0;
  return 0;
}



