// FUN_1804c8e60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c8e60 */

void FUN_1804c8e60(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  char *pcVar3;
  
  lVar1 = DAT_180bb8ae8;
  lVar2 = DAT_180bb8ae8;
  if (*(longlong *)(DAT_180bb8ae8 + 0x2040) != param_1) {
    if ((*(byte *)(DAT_180bb8ae8 + 0x28cc) & 4) != 0) {
      if (param_1 == 0) {
        pcVar3 = "<NULL>";
      }
      else {
        pcVar3 = *(char **)(param_1 + 8);
      }
      FUN_1804cf3e0("[focus] SetNavWindow(\"%s\")\n",pcVar3);
    }
    lVar2 = DAT_180bb8ae8;
    *(longlong *)(lVar1 + 0x2040) = param_1;
    *(undefined8 *)(lVar1 + 0x2098) = 0xffffffffffffffff;
  }
  *(undefined2 *)(lVar1 + 0x20e0) = 0;
  *(undefined1 *)(lVar1 + 0x20a2) = 0;
  if ((*(char *)(lVar2 + 0x20e1) == '\0') && (*(char *)(lVar2 + 0x20a2) == '\0')) {
    *(undefined1 *)(lVar2 + 0x20a1) = 0;
    return;
  }
  *(undefined1 *)(lVar2 + 0x20a1) = 1;
  return;
}



