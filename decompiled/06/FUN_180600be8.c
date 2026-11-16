// FUN_180600be8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180600be8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_180600be8(double param_1,double param_2,double param_3)

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
          return dVar1 + ((((dVar2 * _DAT_1808d6fb8 + _DAT_1808d6fa8) * dVar2 + _DAT_1808d6f98) *
                           dVar4 + (dVar2 * _DAT_1808d6fb0 + _DAT_1808d6fa0) * dVar2 +
                          _DAT_1808d6f90) /
                         (((dVar2 * _DAT_1808d6ff0 + _DAT_1808d6fe0) * dVar2 + _DAT_1808d6fd0) *
                          dVar2 + _DAT_1808d6fc0 +
                         ((dVar2 * _DAT_1808d6fe8 + _DAT_1808d6fd8) * dVar2 + _DAT_1808d6fc8) *
                         dVar4)) * dVar3 + dVar3 * 0.45201730728149414;
        }
        dVar2 = param_2 * param_2;
        dVar2 = ((((dVar2 * _DAT_1808d6f50 + _DAT_1808d6f40) * dVar2 + _DAT_1808d6f30) * dVar2 +
                  _DAT_1808d6f20 +
                 ((dVar2 * _DAT_1808d6f48 + _DAT_1808d6f38) * dVar2 + _DAT_1808d6f28) * param_2) /
                (((dVar2 * _DAT_1808d6f88 + _DAT_1808d6f78) * dVar2 + _DAT_1808d6f68) * dVar2 +
                 _DAT_1808d6f58 +
                ((dVar2 * _DAT_1808d6f80 + _DAT_1808d6f70) * dVar2 + _DAT_1808d6f60) * param_2)) *
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
        dVar2 = ((((dVar3 * _DAT_1808d6ed8 + _DAT_1808d6ec8) * dVar3 + _DAT_1808d6eb8) * dVar3 +
                  _DAT_1808d6ea8 +
                 ((dVar3 * _DAT_1808d6ed0 + _DAT_1808d6ec0) * dVar3 + _DAT_1808d6eb0) * param_3) /
                ((((dVar3 * _DAT_1808d6f18 + _DAT_1808d6f08) * dVar3 + _DAT_1808d6ef8) * dVar3 +
                 _DAT_1808d6ee8) * param_3 +
                 ((dVar3 * _DAT_1808d6f10 + _DAT_1808d6f00) * dVar3 + _DAT_1808d6ef0) * dVar3 +
                _DAT_1808d6ee0)) * dVar2 + dVar2 * 0.15896368026733398;
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



