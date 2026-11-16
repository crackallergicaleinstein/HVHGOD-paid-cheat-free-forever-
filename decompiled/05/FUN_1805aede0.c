// FUN_1805aede0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805aede0 */

int FUN_1805aede0(byte *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  bVar2 = *param_1;
  if (bVar2 == 0x2d) {
    bVar2 = param_1[1];
    param_1 = param_1 + 1;
    iVar3 = -1;
  }
  else {
    iVar3 = 1;
  }
  iVar1 = 0;
  if (((&DAT_180674380)[bVar2 >> 3] & (byte)(1 << (bVar2 & 7))) != 0) {
    while (iVar1 < 0xccccccb) {
      bVar2 = *param_1;
      param_1 = param_1 + 1;
      iVar1 = (uint)(byte)(&DAT_180674300)[(char)bVar2] + iVar1 * 10;
      if (((&DAT_180674380)[*param_1 >> 3] & (byte)(1 << (*param_1 & 7))) == 0) {
        return iVar1 * iVar3;
      }
    }
    iVar1 = 0x7fffffff;
  }
  return iVar1 * iVar3;
}



