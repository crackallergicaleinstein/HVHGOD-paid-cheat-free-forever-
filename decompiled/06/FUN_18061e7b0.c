// FUN_18061e7b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061e7b0 */

double FUN_18061e7b0(double param_1,double param_2,int param_3)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  iVar1 = 0;
  if (param_1 <= 0.68) {
    if (param_1 < -0.68) {
      iVar1 = -1;
      param_1 = param_1 + 0.7853981633974483 + param_2 + 3.0616169978683824e-17;
      param_2 = 0.0;
    }
  }
  else {
    iVar1 = 1;
    param_1 = (0.7853981633974483 - param_1) + (3.0616169978683824e-17 - param_2);
    param_2 = 0.0;
  }
  dVar3 = (param_1 + param_1) * param_2 + param_1 * param_1;
  param_2 = (((dVar3 * 0.0002240444485370221 + -0.022934508005756565) * dVar3 + 0.3723791597597922)
            * dVar3 * param_1) /
            (((dVar3 * -0.00023237149408856356 + 0.026065662039864542) * dVar3 + -0.5156585157290311
             ) * dVar3 + 1.1171374792793767) + param_2;
  if (iVar1 == 0) {
    if (param_3 == 0) {
      return param_2 + param_1;
    }
    dVar4 = -1.0 / (param_2 + param_1);
    dVar3 = (double)((ulonglong)(param_2 + param_1) & 0xffffffff00000000);
    dVar2 = (double)((ulonglong)dVar4 & 0xffffffff00000000);
    return (dVar2 * dVar3 + 1.0 + (param_2 - (dVar3 - param_1)) * dVar2) * dVar4 + dVar2;
  }
  param_2 = param_2 + param_1;
  if (param_3 == 0) {
    return (1.0 - (param_2 + param_2) / (param_2 + 1.0)) * (double)iVar1;
  }
  return ((param_2 + param_2) / (param_2 - 1.0) - 1.0) * (double)iVar1;
}



