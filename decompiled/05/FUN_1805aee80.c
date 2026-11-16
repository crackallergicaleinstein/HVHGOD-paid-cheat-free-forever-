// FUN_1805aee80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805aee80 */

int FUN_1805aee80(byte *param_1)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  
  bVar2 = *param_1;
  if (bVar2 == 0x2d) {
    bVar2 = param_1[1];
    param_1 = param_1 + 1;
    sVar3 = -1;
  }
  else {
    sVar3 = 1;
  }
  sVar1 = 0;
  bVar2 = (&DAT_180674380)[bVar2 >> 3] & (byte)(1 << (bVar2 & 7));
  do {
    if (bVar2 == 0) {
LAB_1805aef29:
      return (int)sVar1 * (int)sVar3;
    }
    if (0xcca < sVar1) {
      sVar1 = 0x7fff;
      goto LAB_1805aef29;
    }
    bVar2 = *param_1;
    param_1 = param_1 + 1;
    sVar1 = sVar1 * 10 + (ushort)(byte)(&DAT_180674300)[(char)bVar2];
    bVar2 = (&DAT_180674380)[*param_1 >> 3] & (byte)(1 << (*param_1 & 7));
  } while( true );
}



