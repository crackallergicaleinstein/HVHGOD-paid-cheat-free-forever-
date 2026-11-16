// FUN_180318220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180318220 */

void FUN_180318220(longlong *param_1,byte param_2)

{
  longlong lVar1;
  short sVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_2;
  if (0x2f < uVar3) {
    uVar3 = 0x2f;
  }
  lVar1 = *param_1 + uVar3 * 2;
  sVar2 = *(short *)(lVar1 + 0x1e8);
  if (sVar2 != -1) {
    *(short *)(lVar1 + 0x1e8) = sVar2 + 1;
  }
  return;
}



