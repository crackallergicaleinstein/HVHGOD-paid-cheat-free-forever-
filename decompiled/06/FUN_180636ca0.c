// FUN_180636ca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180636ca0 */

ulonglong FUN_180636ca0(float param_1,float param_2)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  double dVar4;
  int iVar5;
  double dVar6;
  ulonglong uVar7;
  double dVar8;
  undefined4 uVar9;
  double dVar10;
  undefined4 uVar11;
  uint uVar12;
  
  dVar8 = (double)param_2;
  uVar11 = SUB84(dVar8,0);
  uVar12 = (uint)((ulonglong)dVar8 >> 0x20);
  dVar10 = (double)param_1;
  iVar5 = ((uint)((ulonglong)dVar10 >> 0x34) & 0x7ff) - (uVar12 >> 0x14 & 0x7ff);
  dVar6 = ABS(dVar8);
  dVar4 = ABS(dVar10);
  if ((0x7ff0000000000000 < (ulonglong)dVar6) ||
     (param_2 = param_1, 0x7ff0000000000000 < (ulonglong)dVar4)) {
    uVar7 = FUN_1806226c0(param_2);
    return uVar7;
  }
  if (dVar4 == 0.0) {
    if ((longlong)dVar8 < 0) {
joined_r0x000180636ed5:
      if ((longlong)dVar10 < 0) {
        FUN_1806281c0(0x20);
        return 0xc0490fdb;
      }
      FUN_1806281c0(0x20);
      return 0x40490fdb;
    }
LAB_180636eb2:
    return (ulonglong)(uint)(float)dVar10;
  }
  if (dVar6 == 0.0) {
    if ((longlong)dVar10 < 0) goto LAB_180636d8e;
    FUN_1806281c0(0x20);
  }
  if (0x1a < iVar5) {
    if (-1 < (longlong)dVar10) {
      FUN_1806281c0(0x20);
      return 0x3fc90fdb;
    }
LAB_180636d8e:
    FUN_1806281c0(0x20);
    return 0xbfc90fdb;
  }
  if ((iVar5 < -0xd) && (-1 < (longlong)dVar8)) {
    if (iVar5 < -0x96) {
      FUN_1806281c0(0x30);
      if ((longlong)dVar10 < 0) {
        return 0x80000000;
      }
      return 0;
    }
    if (-0x7f < iVar5) {
      return (ulonglong)(uint)(float)(dVar10 / dVar8);
    }
    dVar8 = (dVar10 * 1.2676506002282294e+30) / dVar8;
    uVar12 = (uint)((ulonglong)ABS(dVar8) >> 0x20);
    uVar3 = uVar12 >> 0x14;
    if (uVar3 < 0x65) {
      if ((int)(0x65 - (uVar12 >> 0x14)) < 0x37) {
        uVar7 = ((ulonglong)dVar8 & 0x1fffffffffffff | 0x10000000000000) >>
                (100U - (char)uVar3 & 0x3f);
        uVar7 = (uVar7 >> 1) + (ulonglong)((uint)uVar7 & 1);
      }
      else {
        uVar7 = 0;
      }
    }
    else {
      uVar7 = (ulonglong)uVar3 - 100 << 0x34 | (ulonglong)dVar8 & 0xfffffffffffff;
    }
    dVar10 = (double)((ulonglong)dVar8 & 0x8000000000000000 | uVar7);
    if ((uVar7 & 0x7ff0000000000000) == 0) {
      FUN_1806281c0(0x30);
    }
    goto LAB_180636eb2;
  }
  if ((iVar5 < -0x1a) && ((longlong)dVar8 < 0)) goto joined_r0x000180636ed5;
  if ((dVar4 == INFINITY) && (dVar6 == INFINITY)) {
    FUN_1806281c0(0x20);
    if (-1 < (longlong)dVar8) {
      if ((longlong)dVar10 < 0) {
        return 0xbf490fdb;
      }
      return 0x3f490fdb;
    }
    if ((longlong)dVar10 < 0) {
      return 0xc016cbe4;
    }
    return 0x4016cbe4;
  }
  if ((longlong)dVar8 < 0) {
    uVar12 = uVar12 ^ 0x80000000;
  }
  dVar4 = dVar10;
  if ((longlong)dVar10 < 0) {
    dVar4 = -dVar10;
  }
  bVar1 = dVar4 != (double)CONCAT44(uVar12,uVar11);
  bVar2 = (double)CONCAT44(uVar12,uVar11) <= dVar4;
  uVar9 = uVar11;
  uVar3 = uVar12;
  if (bVar2 && bVar1) {
    uVar9 = SUB84(dVar4,0);
    uVar3 = (uint)((ulonglong)dVar4 >> 0x20);
    dVar4 = (double)CONCAT44(uVar12,uVar11);
  }
  dVar6 = dVar4 / (double)CONCAT44(uVar3,uVar9);
  if (dVar6 <= 0.0625) {
    if (dVar6 < 0.0001) goto LAB_18063703b;
    dVar4 = dVar6 * dVar6;
    dVar4 = (0.3333333333333317 - (0.19999999999393223 - dVar4 * 0.1428571356180717) * dVar4) *
            dVar4 * dVar6;
  }
  else {
    uVar12 = (uint)(dVar6 * 256.0 + 0.5);
    dVar6 = (double)uVar12;
    dVar4 = (dVar4 * 256.0 - dVar6 * (double)CONCAT44(uVar3,uVar9)) /
            (dVar6 * dVar4 + (double)CONCAT44(uVar3,uVar9) * 256.0);
    dVar6 = dVar4 + *(double *)(&DAT_18086f1e0 + (ulonglong)(uVar12 - 0x10) * 8);
    dVar4 = dVar4 * dVar4 * dVar4 * 0.33333333333224097;
  }
  dVar6 = dVar6 - dVar4;
LAB_18063703b:
  if (bVar2 && bVar1) {
    dVar6 = 1.5707963267948966 - dVar6;
  }
  if ((longlong)dVar8 < 0) {
    dVar6 = 3.141592653589793 - dVar6;
  }
  if ((longlong)dVar10 < 0) {
    dVar6 = -dVar6;
  }
  return (ulonglong)(uint)(float)dVar6;
}



