// FUN_180638a90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180638a90 */

undefined8 FUN_180638a90(undefined8 param_1)

{
  float fVar1;
  ulonglong uVar2;
  double dVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  uint local_38 [2];
  undefined1 local_30 [48];
  
  fVar1 = ABS((float)param_1);
  if (0x7f7fffff < (uint)fVar1) {
    uVar6 = FUN_18062d870();
    return uVar6;
  }
  dVar7 = (double)(float)param_1;
  dVar3 = ABS(dVar7);
  if ((uint)fVar1 < 0x3f490fdc) {
    if ((uint)fVar1 < 0x3c000000) {
      if ((uint)fVar1 < 0x39000000) {
        return param_1;
      }
      dVar7 = dVar7 - dVar7 * dVar7 * dVar7 * 0.16666666666666666;
    }
    else {
      dVar3 = dVar7 * dVar7;
      dVar7 = dVar7 + ((dVar3 * 2.7557319223985893e-06 + -0.0001984126984126984) * dVar3 * dVar3 +
                      dVar3 * 0.008333333333333333 + -0.16666666666666666) * dVar7 * dVar3;
    }
    goto LAB_180638de6;
  }
  bVar5 = dVar7 != dVar3;
  if (bVar5) {
    dVar7 = 0.0 - dVar7;
  }
  if ((uint)fVar1 < 0x4b742400) {
    local_38[0] = (uint)(dVar7 * 0.6366197723675814 + 0.5);
    dVar8 = (double)(int)local_38[0];
    dVar9 = dVar7 - dVar8 * 1.5707963267341256;
    dVar7 = dVar9 - dVar8 * 6.077100506506192e-11;
    uVar2 = (ulonglong)ABS(dVar7) >> 0x34;
    if (0xf < (longlong)(((ulonglong)dVar3 >> 0x34) - uVar2)) {
      dVar7 = dVar9 - dVar8 * 6.077100506303966e-11;
      dVar7 = dVar7 - (dVar8 * 2.0222662487959506e-21 -
                      ((dVar9 - dVar7) - dVar8 * 6.077100506303966e-11));
    }
    if (0x3f1 < uVar2) goto LAB_180638d0e;
    if (uVar2 < 0x3df) {
      if ((local_38[0] & 1) != 0) {
        dVar7 = 1.0;
      }
    }
    else if ((local_38[0] & 1) == 0) {
      dVar7 = dVar7 - dVar7 * 0.16666666666666666 * dVar7 * dVar7;
    }
    else {
      dVar7 = 1.0 - dVar7 * dVar7 * 0.5;
    }
  }
  else {
    dVar7 = (double)__remainder_piby2d2f_forC(dVar7,local_30,local_38);
LAB_180638d0e:
    dVar3 = dVar7 * dVar7;
    if ((local_38[0] & 1) == 0) {
      dVar7 = dVar7 + ((dVar3 * 2.7557319223985893e-06 + -0.0001984126984126984) * dVar3 * dVar3 +
                      dVar3 * 0.008333333333333333 + -0.16666666666666666) * dVar7 * dVar3;
    }
    else {
      dVar7 = dVar3 * -0.5 + 1.0 +
              ((dVar3 * -2.755731922398589e-07 + 2.4801587301587298e-05) * dVar3 * dVar3 +
              dVar3 * -0.0013888888888888887 + 0.041666666666666664) * dVar3 * dVar3;
    }
  }
  uVar4 = (uint)bVar5;
  if ((local_38[0] >> 1 & uVar4) == 0 && (~(local_38[0] >> 1) & ~uVar4 & 1) == 0) {
    dVar7 = 0.0 - dVar7;
  }
LAB_180638de6:
  return CONCAT44((int)((ulonglong)dVar7 >> 0x20),(float)dVar7);
}



