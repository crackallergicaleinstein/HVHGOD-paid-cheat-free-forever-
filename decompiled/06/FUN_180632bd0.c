// FUN_180632bd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180632bd0 */

undefined8 FUN_180632bd0(byte *param_1,uint param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != (byte *)0x0) {
    if (param_2 != 0) {
      if ((param_2 & 0xffffff80) == 0) {
        *param_1 = (byte)param_2;
        return 1;
      }
      if ((param_2 & 0xfffff800) == 0) {
        lVar4 = 1;
        bVar2 = 0xc0;
      }
      else if ((param_2 & 0xffff0000) == 0) {
        if (param_2 - 0xd800 < 0x800) {
LAB_180632c67:
          uVar1 = FUN_180632c7c(param_3,param_4);
          return uVar1;
        }
        lVar4 = 2;
        bVar2 = 0xe0;
      }
      else {
        if (((param_2 & 0xffe00000) != 0) || (0x10ffff < param_2)) goto LAB_180632c67;
        lVar4 = 3;
        bVar2 = 0xf0;
      }
      lVar5 = lVar4;
      do {
        bVar3 = (byte)param_2;
        param_2 = param_2 >> 6;
        param_1[lVar5] = bVar3 & 0x3f | 0x80;
        lVar5 = lVar5 + -1;
      } while (lVar5 != 0);
      *param_1 = bVar2 | (byte)param_2;
      uVar1 = FUN_180632c74(lVar4 + 1,param_3);
      return uVar1;
    }
    *param_1 = 0;
  }
  *param_3 = 0;
  return 1;
}



