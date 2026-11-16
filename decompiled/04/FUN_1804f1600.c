// FUN_1804f1600 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f1600 */

void FUN_1804f1600(uint param_1)

{
  uint *puVar1;
  char *pcVar2;
  uint uVar3;
  char cVar4;
  
  puVar1 = *(uint **)(DAT_180bb8ae8 + 0x2338);
  if ((param_1 == 0xffffffff) && (puVar1[0x1d] != 0xffffffff)) {
    param_1 = puVar1[0x1d];
  }
  if (param_1 == puVar1[0x1b]) {
    param_1 = 0xffffffff;
  }
  if ((puVar1[1] & 7) == 0) {
    return;
  }
  *(short *)((longlong)puVar1 + 0x22a) = (short)param_1;
  *(short *)((longlong)puVar1 + 0x7a) = (short)puVar1[0x1e];
  *(undefined1 *)(puVar1 + 0x91) = 1;
  pcVar2 = "##ContextMenu";
  cVar4 = '#';
  uVar3 = ~*puVar1;
  do {
    pcVar2 = pcVar2 + 1;
    if (((cVar4 == '#') && (*pcVar2 == '#')) && (pcVar2[1] == '#')) {
      pcVar2 = pcVar2 + 2;
      uVar3 = ~*puVar1;
    }
    else {
      uVar3 = crc32(uVar3,cVar4);
    }
    cVar4 = *pcVar2;
  } while (cVar4 != '\0');
  FUN_1804c7740(~uVar3,0);
  return;
}



