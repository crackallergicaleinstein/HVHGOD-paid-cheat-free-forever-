// FUN_18061e1f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061e1f0 */

double FUN_18061e1f0(double param_1,double param_2)

{
  ulonglong uVar1;
  double dVar2;
  uint uVar3;
  double extraout_XMM0_Qa;
  double extraout_XMM0_Qa_00;
  double dVar4;
  double dVar5;
  
  if (DAT_180bb2128 == 0) {
    dVar2 = ABS(param_1);
    if (0x3fe921fb54442d18 < (ulonglong)dVar2) {
      if (0x7fefffffffffffff < (ulonglong)dVar2) {
        dVar2 = (double)FUN_18062d900();
        return dVar2;
      }
      if (500000.0 <= ABS(param_1)) {
        FUN_18062d270();
      }
      uVar3 = (uint)(dVar2 != param_1);
      dVar2 = (double)FUN_18061e7b0();
      if (uVar3 != 0) {
        dVar2 = -dVar2;
      }
      return dVar2;
    }
    if ((ulonglong)dVar2 < 0x3f20000000000000) {
      if (0x3e3fffffffffffff < (ulonglong)dVar2) {
        return param_1 * param_1 * param_1 * 0.3333333333333333 + param_1;
      }
    }
    else {
      param_1 = (double)FUN_18061e7b0();
    }
    return param_1;
  }
  dVar2 = ABS(param_1);
  if ((ulonglong)dVar2 < 0x3fe921fb54442d18) {
    dVar5 = 0.0;
    if ((ulonglong)dVar2 < 0x3fe5c28f5c28f5c4) {
      if ((ulonglong)dVar2 < 0x3e40000000000000) {
        return param_1;
      }
    }
    else if (param_1 < 0.0) {
      dVar5 = -1.0;
      param_1 = param_1 + 0.7853981633974483 + 3.0616169978683824e-17;
    }
    else {
      dVar5 = 1.0;
      param_1 = (0.7853981633974483 - param_1) + 3.0616169978683824e-17;
    }
    dVar2 = param_1 * param_1;
    param_1 = param_1 * ((dVar2 * (dVar2 * 0.0002240444485370221 + -0.022934508005756565) +
                         0.3723791597597922) /
                        (dVar2 * (dVar2 * (dVar2 * -0.00023237149408856356 + 0.026065662039864542) +
                                 -0.5156585157290311) + 1.1171374792793767)) * dVar2 + param_1;
    if (dVar5 != 0.0) {
      param_1 = (-((param_1 / (param_1 + 1.0)) * 2.0) + 1.0) * dVar5;
    }
    return param_1;
  }
  if (0x7fefffffffffffff < (ulonglong)dVar2) {
    dVar2 = (double)FUN_18062d900();
    return dVar2;
  }
  if ((ulonglong)dVar2 < 0x417312d000000000) {
    uVar1 = FUN_18062d670(dVar2);
    dVar2 = extraout_XMM0_Qa;
  }
  else {
    uVar1 = FUN_18062d480();
    dVar2 = extraout_XMM0_Qa_00;
  }
  dVar5 = 0.0;
  if (dVar2 <= 0.68) {
    if (dVar2 < -0.68) {
      dVar5 = -1.0;
      dVar2 = dVar2 + 0.7853981633974483 + param_2 + 3.0616169978683824e-17;
      param_2 = 0.0;
    }
  }
  else {
    dVar5 = 1.0;
    dVar2 = (0.7853981633974483 - dVar2) + (3.0616169978683824e-17 - param_2);
    param_2 = 0.0;
  }
  dVar4 = param_2 * dVar2 * 2.0 + dVar2 * dVar2;
  param_2 = dVar2 * ((dVar4 * (dVar4 * 0.0002240444485370221 + -0.022934508005756565) +
                     0.3723791597597922) /
                    (dVar4 * (dVar4 * (dVar4 * -0.00023237149408856356 + 0.026065662039864542) +
                             -0.5156585157290311) + 1.1171374792793767)) * dVar4 + param_2;
  dVar4 = dVar2 + param_2;
  if (dVar5 == 0.0) {
    if ((uVar1 & 1) != 0) {
      dVar5 = (double)((ulonglong)(-1.0 / dVar4) & 0xffffffff00000000);
      dVar4 = (-1.0 / dVar4) *
              ((param_2 - ((double)((ulonglong)dVar4 & 0xffffffff00000000) - dVar2)) * dVar5 +
              dVar5 * (double)((ulonglong)dVar4 & 0xffffffff00000000) + 1.0) + dVar5;
    }
  }
  else if ((uVar1 & 1) == 0) {
    dVar4 = (-((dVar4 / (dVar4 + 1.0)) * 2.0) + 1.0) * dVar5;
  }
  else {
    dVar4 = ((dVar4 / (dVar4 - 1.0)) * 2.0 - 1.0) * dVar5;
  }
  return (double)((ulonglong)dVar4 ^ (ulonglong)param_1 & 0x8000000000000000);
}



