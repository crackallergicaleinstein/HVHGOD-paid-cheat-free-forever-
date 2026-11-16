// FUN_1805f4630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f4630 */

longlong FUN_1805f4630(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_2 < 5) {
    return -0x48;
  }
  bVar2 = *(byte *)(param_1 + 4);
  lVar1 = (ulonglong)(bVar2 >> 6) * 8;
  if (((bVar2 & 0x20) == 0) || (lVar3 = 6, *(longlong *)(&DAT_1806891a0 + lVar1) != 0)) {
    lVar3 = 5;
  }
  return (ulonglong)(~(uint)bVar2 >> 5 & 1) +
         *(longlong *)(&DAT_1806891c0 + (ulonglong)(bVar2 & 3) * 8) +
         *(longlong *)(&DAT_1806891a0 + lVar1) + lVar3;
}



