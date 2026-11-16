// FUN_1804c9d70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c9d70 */

void FUN_1804c9d70(longlong param_1,char param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined1 local_18 [16];
  
  lVar1 = DAT_180bb8ae8;
  if ((*(uint *)(param_1 + 0x14) >> 0x10 & 1) != 0) {
    *(undefined4 *)(DAT_180bb8ae8 + 0x203c) = 0;
    FUN_1804c1dd0(*(undefined4 *)(param_1 + 0x440));
    return;
  }
  cVar3 = '\0';
  if ((((param_1 == *(longlong *)(param_1 + 0x3d8)) ||
       ((*(uint *)(param_1 + 0x14) >> 0x1a & 1) != 0)) || (*(int *)(param_1 + 0x408) == 0)) ||
     (param_2 != '\0')) {
    cVar3 = '\x01';
  }
  if ((*(byte *)(DAT_180bb8ae8 + 0x28cc) & 0x10) != 0) {
    FUN_1804cf3e0("[nav] NavInitRequest: from NavInitWindow(), init_for_nav=%d, window=\"%s\", layer=%d\n"
                  ,cVar3,*(undefined8 *)(param_1 + 8),*(undefined4 *)(DAT_180bb8ae8 + 0x204c));
  }
  if (cVar3 == '\0') {
    *(undefined4 *)(lVar1 + 0x203c) = *(undefined4 *)(param_1 + 0x408);
    FUN_1804c1dd0(*(undefined4 *)(param_1 + 0x440));
    return;
  }
  local_18 = ZEXT816(0);
  FUN_1804c8f10(0,*(undefined4 *)(lVar1 + 0x204c),*(undefined4 *)(param_1 + 0x440),local_18);
  lVar2 = DAT_180bb8ae8;
  *(undefined2 *)(lVar1 + 0x20a2) = 1;
  *(undefined4 *)(lVar1 + 0x20b0) = 0;
  if ((*(char *)(lVar2 + 0x20e1) == '\0') && (*(char *)(lVar2 + 0x20a2) == '\0')) {
    *(undefined1 *)(lVar2 + 0x20a1) = 0;
    return;
  }
  *(undefined1 *)(lVar2 + 0x20a1) = 1;
  return;
}



