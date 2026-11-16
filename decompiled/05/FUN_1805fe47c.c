// FUN_1805fe47c - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fe47c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1805fe47c(double *param_1)

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
              ((((((dVar2 * _DAT_1808d6ba0 + _DAT_1808d6b90) * dVar2 + _DAT_1808d6b80) * dVar2 +
                 _DAT_1808d6b70) * dVar2 + _DAT_1808d6b60) * dVar2 + _DAT_1808d6b50 +
               ((((dVar2 * _DAT_1808d6b98 + _DAT_1808d6b88) * dVar2 + _DAT_1808d6b78) * dVar2 +
                _DAT_1808d6b68) * dVar2 + _DAT_1808d6b58) * dVar1) /
               ((((((dVar2 * _DAT_1808d6c08 + _DAT_1808d6bf8) * dVar2 + _DAT_1808d6be8) * dVar2 +
                  _DAT_1808d6bd8) * dVar2 + _DAT_1808d6bc8) * dVar2 + _DAT_1808d6bb8) * dVar1 +
                ((((dVar2 * _DAT_1808d6c00 + _DAT_1808d6bf0) * dVar2 + _DAT_1808d6be0) * dVar2 +
                 _DAT_1808d6bd0) * dVar2 + _DAT_1808d6bc0) * dVar2 + _DAT_1808d6bb0) + 1.0);
    }
  }
  else {
    dVar1 = dVar3 * dVar3;
    dVar2 = (double)FUN_18061cdb0(dVar3);
    dVar3 = ((dVar3 - dVar2) - 0.6637353897094727) +
            (((dVar1 * _DAT_1808d6b18 + _DAT_1808d6b08) * dVar1 + _DAT_1808d6af8) * dVar3 +
             (dVar1 * _DAT_1808d6b10 + _DAT_1808d6b00) * dVar1 + _DAT_1808d6af0) /
            (((dVar1 * _DAT_1808d6b48 + _DAT_1808d6b38) * dVar1 + _DAT_1808d6b28) * dVar3 +
             (dVar1 * _DAT_1808d6b40 + _DAT_1808d6b30) * dVar1 + _DAT_1808d6b20);
  }
  return dVar3;
}



