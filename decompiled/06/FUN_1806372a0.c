// FUN_1806372a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806372a0 */

undefined8 FUN_1806372a0(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float fVar1;
  undefined8 in_RCX;
  ulonglong uVar2;
  double dVar3;
  uint uVar4;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar5;
  undefined8 in_XMM0_Qb;
  undefined1 auVar6 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  
  fVar1 = ABS(param_1);
  if (0x7f7fffff < (uint)fVar1) {
    uVar5 = FUN_18062d710(in_RCX,param_2,0);
    return uVar5;
  }
  auVar6._0_8_ = (double)param_1;
  auVar6._8_8_ = in_XMM0_Qb;
  dVar3 = ABS(auVar6._0_8_);
  if ((uint)fVar1 < 0x3f490fdc) {
    uVar4 = 0;
  }
  else if ((uint)fVar1 < 0x48f42400) {
    uVar4 = (uint)(dVar3 * 0.6366197723675814 + 0.5);
    dVar8 = (double)(int)uVar4;
    dVar10 = dVar3 - dVar8 * 1.5707963267341256;
    dVar9 = dVar10 - dVar8 * 6.077100506506192e-11;
    uVar2 = (ulonglong)ABS(dVar9) >> 0x34;
    if (0xf < (longlong)(((ulonglong)dVar3 >> 0x34) - uVar2)) {
      dVar9 = dVar10 - dVar8 * 6.077100506303966e-11;
      dVar9 = dVar9 - (dVar8 * 2.0222662487959506e-21 -
                      ((dVar10 - dVar9) - dVar8 * 6.077100506303966e-11));
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = dVar9;
    if (uVar2 < 0x3f2) {
      if (uVar2 < 0x3df) {
        if ((uVar4 & 1) == 0) {
          auVar6 = ZEXT816(0x3ff0000000000000);
        }
      }
      else if ((uVar4 & 1) == 0) {
        auVar6._0_8_ = 1.0 - dVar9 * dVar9 * 0.5;
        auVar6._8_8_ = 0;
      }
      else {
        auVar6._0_8_ = dVar9 - dVar9 * 0.16666666666666666 * dVar9 * dVar9;
        auVar6._8_8_ = 0;
      }
      goto LAB_180637514;
    }
  }
  else {
    uVar4 = FUN_18063a390(dVar3,auVar6._0_8_,1,param_4,auVar6._0_8_);
    auVar6._8_8_ = extraout_XMM0_Qb;
    auVar6._0_8_ = (double)extraout_XMM0_Qa;
  }
  dVar3 = auVar6._0_8_;
  dVar9 = dVar3 * dVar3;
  if ((uVar4 & 1) == 0) {
    auVar6._0_8_ = dVar9 * -0.5 + 1.0 +
                   ((dVar9 * -2.755731922398589e-07 + 2.4801587301587298e-05) * dVar9 * dVar9 +
                   dVar9 * -0.0013888888888888887 + 0.041666666666666664) * dVar9 * dVar9;
    auVar6._8_8_ = 0;
  }
  else {
    auVar6._0_8_ = dVar3 + ((dVar9 * 2.7557319223985893e-06 + -0.0001984126984126984) *
                            dVar9 * dVar9 + dVar9 * 0.008333333333333333 + -0.16666666666666666) *
                           dVar3 * dVar9;
  }
LAB_180637514:
  if ((uVar4 + 1 & 2) != 0) {
    dVar3 = auVar6._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = 0.0 - dVar3;
  }
  auVar7._4_12_ = auVar6._4_12_;
  auVar7._0_4_ = (float)auVar6._0_8_;
  return auVar7._0_8_;
}



