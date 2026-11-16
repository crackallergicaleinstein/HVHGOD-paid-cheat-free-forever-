// FUN_1805dcea0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805dcea0 */

longlong FUN_1805dcea0(longlong param_1,ulonglong param_2,int param_3)

{
  byte bVar1;
  ulonglong uVar2;
  longlong lVar3;
  
  lVar3 = 1;
  uVar2 = 1;
  if (param_3 == 0) {
    uVar2 = 5;
  }
  if (param_2 < uVar2) {
    return -0x48;
  }
  bVar1 = *(byte *)((uVar2 - 1) + param_1);
  if (((bVar1 & 0x20) == 0) || (bVar1 >> 6 != 0)) {
    lVar3 = 0;
  }
  return (ulonglong)(~(uint)bVar1 >> 5 & 1) +
         *(longlong *)(&DAT_1806869d8 + (ulonglong)(uint)(bVar1 >> 6) * 8) +
         *(longlong *)(&DAT_1806869f8 + (ulonglong)(bVar1 & 3) * 8) + lVar3 + uVar2;
}



