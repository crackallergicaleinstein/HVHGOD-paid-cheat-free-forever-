// FUN_1805ffa3c - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ffa3c */

double FUN_1805ffa3c(uint param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  bool bVar2;
  double dVar3;
  double local_res10 [3];
  
  local_res10[0] = param_2;
  if (param_2 < 0.0) {
    puVar1 = (undefined4 *)FUN_18060fe00();
    *puVar1 = 0x21;
    return NAN;
  }
  if (param_2 == 0.0) {
    if (param_1 == 1) {
      dVar3 = INFINITY;
    }
    else {
      dVar3 = 1.0 / (double)(param_1 - 1);
    }
    return dVar3;
  }
  if (param_1 < 3) {
    bVar2 = param_2 < 0.5;
    if (param_1 == 0) {
      dVar3 = (double)FUN_18061c8d0(-param_2);
      return dVar3 / param_2;
    }
    if (param_1 == 1) {
      dVar3 = (double)FUN_1805fe47c(local_res10,param_4);
      return dVar3;
    }
  }
  else {
    bVar2 = param_2 < (double)(param_1 - 2) / (double)(param_1 - 1);
  }
  if (bVar2) {
    dVar3 = (double)FUN_1805fea64();
    return dVar3;
  }
  dVar3 = (double)FUN_1805fe7c4(param_1,param_2);
  return dVar3;
}



