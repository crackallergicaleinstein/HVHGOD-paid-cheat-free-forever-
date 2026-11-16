// FUN_1805aef40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805aef40 */

uint FUN_1805aef40(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  
  bVar1 = *param_1;
  uVar2 = 0;
  if (((&DAT_180674380)[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0) {
    while (uVar2 < 0x19999998) {
      lVar3 = (longlong)(char)bVar1;
      param_1 = param_1 + 1;
      bVar1 = *param_1;
      uVar2 = (uint)(byte)(&DAT_180674300)[lVar3] + uVar2 * 10;
      if (((&DAT_180674380)[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) == 0) {
        return uVar2;
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



