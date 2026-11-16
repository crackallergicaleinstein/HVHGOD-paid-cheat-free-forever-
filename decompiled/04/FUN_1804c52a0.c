// FUN_1804c52a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c52a0 */

bool FUN_1804c52a0(undefined8 param_1,ulonglong param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  param_2 = param_2 & 0xffffffff;
  uVar2 = FUN_1804c29d0();
  uVar4 = uVar2 & 0xf000;
  if (*(uint *)(DAT_180bb8ae8 + 0x130) != uVar4) {
    return false;
  }
  uVar3 = uVar2 & 0xffff0fff;
  if ((uVar2 & 0xffff0fff) == 0) {
    if (uVar4 == 0x1000) {
      cVar1 = FUN_1804c3390(0x297,param_2 & 0xff);
      return cVar1 != '\0';
    }
    if (uVar4 == 0x2000) {
      cVar1 = FUN_1804c3390(0x298,param_2 & 0xff);
      return cVar1 != '\0';
    }
    if (uVar4 == 0x4000) {
      cVar1 = FUN_1804c3390(0x299,param_2 & 0xff);
      return cVar1 != '\0';
    }
    uVar3 = uVar4;
    if (uVar4 == 0x8000) {
      uVar3 = 0x29a;
    }
  }
  cVar1 = FUN_1804c3390(uVar3,param_2 & 0xff);
  return cVar1 != '\0';
}



