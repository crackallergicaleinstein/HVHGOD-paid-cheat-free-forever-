// FUN_1804cde90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cde90 */

longlong FUN_1804cde90(char *param_1)

{
  char cVar1;
  char *pcVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0xffffffff;
  cVar1 = *param_1;
  while (cVar1 != '\0') {
    pcVar2 = param_1 + 1;
    if (((cVar1 == '#') && (*pcVar2 == '#')) && (param_1[2] == '#')) {
      uVar4 = 0xffffffff;
      pcVar2 = param_1 + 3;
    }
    else {
      uVar4 = crc32(uVar4,cVar1);
    }
    param_1 = pcVar2;
    cVar1 = *pcVar2;
  }
  lVar3 = *(longlong *)(DAT_180bb8ae8 + 0x2798);
  lVar5 = (longlong)*(int *)(DAT_180bb8ae8 + 0x2790) * 0x50 + lVar3;
  while( true ) {
    if (lVar3 == lVar5) {
      return 0;
    }
    if (*(uint *)(lVar3 + 8) == ~uVar4) break;
    lVar3 = lVar3 + 0x50;
  }
  return lVar3;
}



