// FUN_180627fd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180627fd0 */

void FUN_180627fd0(float param_1,double param_2)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  double dVar4;
  
  sVar1 = FUN_180624430();
  if ((((sVar1 != 2) && (sVar2 = FUN_180624470(), sVar2 != 2)) &&
      (dVar4 = (double)param_1, dVar4 != param_2)) && (sVar1 != 1)) {
    if (sVar1 == 0) {
      if (dVar4 < param_2) {
        FUN_180624800(0x10);
        return;
      }
      uVar3 = 0;
    }
    else if (((dVar4 < param_2) && (0.0 < param_1)) || ((param_2 < dVar4 && (param_1 < 0.0)))) {
      uVar3 = (int)param_1 + 1;
      if ((uVar3 & 0x7f800000) == 0x7f800000) {
        FUN_180624800(8);
        return;
      }
    }
    else {
      uVar3 = (int)param_1 - 1;
    }
    if ((uVar3 & 0x7f800000) == 0) {
      FUN_180624800(0x10);
    }
  }
  return;
}



