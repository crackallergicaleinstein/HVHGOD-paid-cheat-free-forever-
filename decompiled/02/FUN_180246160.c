// FUN_180246160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180246160 */

int FUN_180246160(longlong param_1)

{
  int iVar1;
  bool bVar2;
  ulonglong uVar3;
  float fVar4;
  undefined4 uStackX_c;
  
  uVar3 = FUN_1802460f0();
  uStackX_c = (undefined4)(uVar3 >> 0x20);
  fVar4 = (float)FUN_180636420(uVar3 & 0xffffffff,uStackX_c);
  iVar1 = *(int *)(param_1 + 0x3c);
  if ((iVar1 < 1) || (*(float *)(param_1 + 0x84) != 0.0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((1e-05 < fVar4) && (!bVar2)) {
    return iVar1 + 1;
  }
  return iVar1;
}



