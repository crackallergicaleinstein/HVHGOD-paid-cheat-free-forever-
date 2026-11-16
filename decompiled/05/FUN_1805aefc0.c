// FUN_1805aefc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805aefc0 */

ushort FUN_1805aefc0(byte *param_1)

{
  byte bVar1;
  ushort uVar2;
  longlong lVar3;
  
  bVar1 = *param_1;
  uVar2 = 0;
  if (((&DAT_180674380)[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) != 0) {
    while (uVar2 < 0x1998) {
      lVar3 = (longlong)(char)bVar1;
      param_1 = param_1 + 1;
      bVar1 = *param_1;
      uVar2 = uVar2 * 10 + (ushort)(byte)(&DAT_180674300)[lVar3];
      if (((&DAT_180674380)[bVar1 >> 3] & (byte)(1 << (bVar1 & 7))) == 0) {
        return uVar2;
      }
    }
    uVar2 = 0xffff;
  }
  return uVar2;
}



