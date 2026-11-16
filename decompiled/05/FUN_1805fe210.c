// FUN_1805fe210 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fe210 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1805fe210(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = *param_1;
  if (1.0 < dVar3) {
    if (708.0 <= dVar3) {
      dVar3 = 0.0;
    }
    else {
      dVar1 = 1.0 / dVar3;
      dVar2 = dVar1 * dVar1;
      dVar3 = (double)FUN_18061c8d0(-dVar3);
      dVar3 = dVar3 * dVar1 *
              ((((((dVar2 * _DAT_1808d6cc0 + _DAT_1808d6cb0) * dVar2 + _DAT_1808d6ca0) * dVar2 +
                 _DAT_1808d6c90) * dVar2 + _DAT_1808d6c80) * dVar2 + _DAT_1808d6c70 +
               ((((dVar2 * _DAT_1808d6cb8 + _DAT_1808d6ca8) * dVar2 + _DAT_1808d6c98) * dVar2 +
                _DAT_1808d6c88) * dVar2 + _DAT_1808d6c78) * dVar1) /
               ((((((dVar2 * _DAT_1808d6d28 + _DAT_1808d6d18) * dVar2 + _DAT_1808d6d08) * dVar2 +
                  _DAT_1808d6cf8) * dVar2 + _DAT_1808d6ce8) * dVar2 + _DAT_1808d6cd8) * dVar1 +
                ((((dVar2 * _DAT_1808d6d20 + _DAT_1808d6d10) * dVar2 + _DAT_1808d6d00) * dVar2 +
                 _DAT_1808d6cf0) * dVar2 + _DAT_1808d6ce0) * dVar2 + _DAT_1808d6cd0) + 1.0);
    }
  }
  else {
    dVar1 = dVar3 * dVar3;
    dVar2 = (double)FUN_18061cdb0(dVar3);
    dVar3 = ((dVar3 - dVar2) - 0.6637353897094727) +
            (((dVar1 * _DAT_1808d6c38 + _DAT_1808d6c28) * dVar1 + _DAT_1808d6c18) * dVar3 +
             (dVar1 * _DAT_1808d6c30 + _DAT_1808d6c20) * dVar1 + _DAT_1808d6c10) /
            (((dVar1 * _DAT_1808d6c68 + _DAT_1808d6c58) * dVar1 + _DAT_1808d6c48) * dVar3 +
             (dVar1 * _DAT_1808d6c60 + _DAT_1808d6c50) * dVar1 + _DAT_1808d6c40);
  }
  return dVar3;
}



