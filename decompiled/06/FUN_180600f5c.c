// FUN_180600f5c - decompiled reference (Ghidra). Not original source, does not compile.

/* 180600f5c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_180600f5c(double param_1,double param_2,double param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  dVar1 = 0.0;
  if (2.220446049250313e-16 <= param_1) {
    if ((param_2 != 0.0) && (param_3 != 0.0)) {
      if (param_1 <= 2.0) {
        dVar2 = param_1;
        if (param_1 < 1.0) {
          dVar1 = (double)FUN_18061cdb0();
          dVar1 = 0.0 - dVar1;
          dVar2 = param_1 + 1.0;
          param_3 = param_2;
          param_2 = param_1;
        }
        dVar3 = param_2 * param_3;
        if (1.5 < dVar2) {
          dVar4 = -param_3;
          dVar2 = -param_3 * dVar4;
          return dVar1 + ((((dVar2 * _DAT_1808d6e68 + _DAT_1808d6e58) * dVar2 + _DAT_1808d6e48) *
                           dVar4 + (dVar2 * _DAT_1808d6e60 + _DAT_1808d6e50) * dVar2 +
                          _DAT_1808d6e40) /
                         (((dVar2 * _DAT_1808d6ea0 + _DAT_1808d6e90) * dVar2 + _DAT_1808d6e80) *
                          dVar2 + _DAT_1808d6e70 +
                         ((dVar2 * _DAT_1808d6e98 + _DAT_1808d6e88) * dVar2 + _DAT_1808d6e78) *
                         dVar4)) * dVar3 + dVar3 * 0.45201730728149414;
        }
        dVar2 = param_2 * param_2;
        dVar2 = ((((dVar2 * _DAT_1808d6e00 + _DAT_1808d6df0) * dVar2 + _DAT_1808d6de0) * dVar2 +
                  _DAT_1808d6dd0 +
                 ((dVar2 * _DAT_1808d6df8 + _DAT_1808d6de8) * dVar2 + _DAT_1808d6dd8) * param_2) /
                (((dVar2 * _DAT_1808d6e38 + _DAT_1808d6e28) * dVar2 + _DAT_1808d6e18) * dVar2 +
                 _DAT_1808d6e08 +
                ((dVar2 * _DAT_1808d6e30 + _DAT_1808d6e20) * dVar2 + _DAT_1808d6e10) * param_2)) *
                dVar3 + dVar3 * 0.5281534194946289;
      }
      else {
        dVar2 = 0.0;
        if (3.0 <= param_1) {
          do {
            param_1 = param_1 + -1.0;
            dVar2 = (double)FUN_18061cdb0(param_1);
            dVar1 = dVar1 + dVar2;
          } while (3.0 <= param_1);
          param_3 = param_1 - 2.0;
          dVar2 = dVar1;
        }
        dVar1 = dVar2;
        dVar3 = param_3 * param_3;
        dVar2 = (param_1 + 1.0) * param_3;
        dVar2 = ((((dVar3 * _DAT_1808d6d80 + _DAT_1808d6d70) * dVar3 + _DAT_1808d6d60) * dVar3 +
                  _DAT_1808d6d50 +
                 ((dVar3 * _DAT_1808d6d78 + _DAT_1808d6d68) * dVar3 + _DAT_1808d6d58) * param_3) /
                ((((dVar3 * _DAT_1808d6dc8 + _DAT_1808d6db8) * dVar3 + _DAT_1808d6da8) * dVar3 +
                 _DAT_1808d6d98) * param_3 +
                 ((dVar3 * _DAT_1808d6dc0 + _DAT_1808d6db0) * dVar3 + _DAT_1808d6da0) * dVar3 +
                _DAT_1808d6d90)) * dVar2 + dVar2 * 0.15896368026733398;
      }
      dVar1 = dVar1 + dVar2;
    }
  }
  else {
    dVar1 = (double)FUN_18061cdb0();
    dVar1 = -dVar1;
  }
  return dVar1;
}



