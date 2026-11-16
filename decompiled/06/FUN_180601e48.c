// FUN_180601e48 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180601e48 */

double FUN_180601e48(double param_1)

{
  int iVar1;
  undefined4 uVar2;
  double dVar3;
  uint uVar4;
  
  iVar1 = 1;
  uVar2 = SUB84(param_1,0);
  uVar4 = (uint)((ulonglong)param_1 >> 0x20);
  if (param_1 < 0.0) {
    uVar4 = uVar4 ^ 0x80000000;
  }
  dVar3 = (double)FUN_18061ccf0(CONCAT44(uVar4,uVar2));
  if (((int)dVar3 & 1U) == 0) {
    dVar3 = (double)CONCAT44(uVar4,uVar2) - dVar3;
  }
  else {
    iVar1 = -1;
    dVar3 = (dVar3 + 1.0) - (double)CONCAT44(uVar4,uVar2);
  }
  if (0.5 < dVar3) {
    dVar3 = 1.0 - dVar3;
  }
  dVar3 = (double)FUN_18061db20(dVar3 * 3.141592653589793);
  return dVar3 * (double)iVar1 * (double)CONCAT44(uVar4,uVar2);
}



