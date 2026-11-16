// FUN_18061c8d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061c8d0 */

double FUN_18061c8d0(double param_1)

{
  ulonglong uVar1;
  uint uVar2;
  undefined8 in_RCX;
  double dVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  double dVar8;
  undefined1 auVar9 [16];
  
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  dVar3 = ABS(param_1);
  if ((ulonglong)dVar3 < 0x7ff0000000000000) {
    if (DAT_180bb2128 != 0) {
      auVar6 = vcmpsd_avx(auVar4,ZEXT816(0x40862e42fefa39ef),2);
      auVar4 = vcmpsd_avx(auVar4,ZEXT816(0xc0874046dfefd9d0),5);
      if (NAN((double)CONCAT44(auVar4._4_4_ & auVar6._4_4_,auVar4._0_4_ & auVar6._0_4_))) {
        if ((ulonglong)ABS(param_1) < 0x3e50000000000001) {
          return param_1 + 1.0;
        }
        auVar6._8_8_ = 0;
        auVar6._0_8_ = param_1 * 92.33248261689366;
        auVar4 = vroundsd_avx(auVar6,auVar6,3);
        uVar2 = (uint)(param_1 * 92.33248261689366);
        dVar3 = auVar4._0_8_ * -2.5728046223276688e-14 +
                auVar4._0_8_ * -0.010830424696223417 + param_1;
        uVar1 = (ulonglong)(uVar2 & 0x3f);
        uVar2 = (int)uVar2 >> 6;
        dVar3 = ((dVar3 * (dVar3 * (dVar3 * (dVar3 * 0.001388888888888889 + 0.008333333333333333) +
                                   0.041666666666666664) + 0.16666666666666666) + 0.5) *
                 dVar3 * dVar3 + dVar3) * *(double *)(&DAT_1806b1de0 + uVar1 * 8) +
                *(double *)(&DAT_1806b21e0 + uVar1 * 8) + *(double *)(&DAT_1806b1fe0 + uVar1 * 8);
        if ((-0x3fe < (int)uVar2) || ((-0x3ff < (int)uVar2 && (1.0 <= dVar3)))) {
          auVar5._8_8_ = 0;
          auVar5._0_8_ = dVar3;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulonglong)uVar2 << 0x34;
          auVar4 = vpaddq_avx(auVar5,auVar9);
          return auVar4._0_8_;
        }
        dVar3 = dVar3 * (double)(1L << ((char)uVar2 + 0x32U & 0x3f));
      }
      else if (709.782712893384 < param_1) {
        dVar3 = (double)FUN_18062d9b0(in_RCX,0x7ff0000000000000,3);
      }
      else if (param_1 < -745.1332191019411) {
        dVar3 = (double)FUN_18062d9b0(in_RCX,0,2);
      }
      else {
        dVar3 = 4.94065645841247e-324;
      }
      return dVar3;
    }
    if (NAN((double)-(ulonglong)(param_1 <= 709.782712893384 && -744.0346068132731 <= param_1))) {
      if ((ulonglong)ABS(param_1) < 0x3e50000000000001) {
        return param_1 + 1.0;
      }
      uVar7 = (uint)(param_1 * 92.33248261689366);
      uVar1 = (ulonglong)(uVar7 & 0x3f);
      uVar2 = (int)uVar7 >> 6;
      dVar8 = (double)(int)uVar7 * -2.5728046223276688e-14 +
              param_1 + (double)(int)uVar7 * -0.010830424696223417;
      dVar3 = dVar8 * dVar8;
      param_1 = ((dVar8 * 0.16666666666666666 + 0.5) * dVar3 + dVar8 +
                ((dVar8 * 0.001388888888888889 + 0.008333333333333333) * dVar8 +
                0.041666666666666664) * dVar3 * dVar3) * *(double *)(&DAT_1806b1de0 + uVar1 * 8) +
                *(double *)(&DAT_1806b21e0 + uVar1 * 8) + *(double *)(&DAT_1806b1fe0 + uVar1 * 8);
      if ((-0x3fe < (int)uVar2) || ((-0x3ff < (int)uVar2 && (1.0 <= param_1)))) {
        return (double)((longlong)param_1 + ((ulonglong)uVar2 << 0x34));
      }
      param_1 = param_1 * (double)(1L << ((char)uVar2 + 0x32U & 0x3f));
    }
    else if (709.782712893384 < param_1) {
      param_1 = (double)FUN_18062d9b0(in_RCX,dVar3,3);
    }
    else if (param_1 < -745.1332191019411) {
      param_1 = (double)FUN_18062d9b0(in_RCX,dVar3,2);
    }
    else {
      param_1 = 4.94065645841247e-324;
    }
  }
  else if (param_1 != INFINITY) {
    if (param_1 == -INFINITY) {
      return 0.0;
    }
    param_1 = (double)((ulonglong)param_1 | 0x8000000000000);
  }
  return param_1;
}



