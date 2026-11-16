// FUN_18052b110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18052b110 */

ulonglong FUN_18052b110(int param_1,int param_2)

{
  uint uVar1;
  ulonglong in_RAX;
  longlong lVar2;
  
  if ((DAT_180b909b0 != 0) && (-1 < param_2)) {
    lVar2 = *(longlong *)(DAT_180b909b0 + 0x60) - *(longlong *)(DAT_180b909b0 + 0x58);
    in_RAX = -(lVar2 >> 0x3f);
    if ((param_2 < (int)(lVar2 / 0x68) + (int)(lVar2 >> 0x3f) + (int)in_RAX) &&
       ((lVar2 = (longlong)param_2 * 0x68 + *(longlong *)(DAT_180b909b0 + 0x58), lVar2 != 0 &&
        (DAT_1808e6670 != '\0')))) {
      if (param_1 == 1) {
        uVar1 = (&DAT_1808e66d8)[(longlong)DAT_1808e6680 * 7];
      }
      else {
        uVar1 = DAT_1808e6764;
      }
      in_RAX = (ulonglong)uVar1;
      if (uVar1 == *(uint *)(lVar2 + 4)) {
        return CONCAT71((uint7)(uint3)(uVar1 >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



