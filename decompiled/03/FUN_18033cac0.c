// FUN_18033cac0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18033cac0 */

longlong FUN_18033cac0(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  uint7 uVar6;
  
  iVar4 = *(int *)(param_1 + 0x10);
  lVar5 = (longlong)iVar4;
  uVar6 = (uint7)(int3)((uint)iVar4 >> 8);
  if (2 < iVar4) {
    fVar1 = *(float *)(param_1 + -0xc + lVar5 * 4);
    fVar2 = *(float *)(param_1 + -8 + lVar5 * 4);
    if (((fVar1 + 0.05 < fVar2) &&
        (fVar3 = *(float *)(param_1 + -4 + lVar5 * 4), fVar2 + 0.05 < fVar3)) &&
       (fVar1 * 1.25 + 0.1 < fVar3)) {
      return CONCAT71(uVar6,1);
    }
  }
  return (ulonglong)uVar6 << 8;
}



