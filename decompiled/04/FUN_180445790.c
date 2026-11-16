// FUN_180445790 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180445790 */

short FUN_180445790(longlong param_1,longlong *param_2,byte *param_3)

{
  byte bVar1;
  short sVar2;
  longlong lVar3;
  short sVar4;
  
  if (*(char *)(param_1 + 4) != '\0') {
    return *(short *)(param_3 + 0x10);
  }
  lVar3 = param_2[1];
  if (lVar3 != 0) {
    bVar1 = *param_3;
    if (bVar1 == 0) {
      if (1 < *(byte *)(*param_2 + 0x19)) {
        sVar2 = *(short *)(lVar3 + 0x10);
        if ((*(uint *)(lVar3 + 0x70) & 0xfffffffb) == 0) {
          return sVar2;
        }
        if (sVar2 != *(short *)(lVar3 + 0x60)) {
          return sVar2;
        }
        if ((*(uint *)(lVar3 + 0x70) == 1) && (*(int *)(lVar3 + 0x54) == 2)) {
          sVar4 = 0;
          if (*(int *)(lVar3 + 0x78) == 2) {
            sVar4 = sVar2;
          }
          return sVar4;
        }
      }
    }
    else if ((bVar1 == 1) || (bVar1 == 2)) {
      sVar2 = *(short *)(lVar3 + 0x10 + (ulonglong)bVar1 * 0x50);
      sVar4 = 0;
      if (*(short *)(lVar3 + -0x40 + (ulonglong)bVar1 * 0x50) != sVar2) {
        sVar4 = sVar2;
      }
      return sVar4;
    }
  }
  return 0;
}



