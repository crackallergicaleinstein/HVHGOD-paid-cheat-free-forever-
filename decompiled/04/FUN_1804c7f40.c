// FUN_1804c7f40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c7f40 */

bool FUN_1804c7f40(undefined8 param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  
  lVar1 = DAT_180bb8ae8;
  lVar3 = DAT_180bb8ae8;
  if ((*(char *)(DAT_180bb8ae8 + 0xb5f) != '\0') && (cVar2 = FUN_1804c5140(0x291), cVar2 != '\0')) {
    cVar2 = FUN_1804b7b20(0x20);
    if (cVar2 != '\0') {
      return true;
    }
    lVar3 = DAT_180bb8ae8;
  }
  if (*(int *)(lVar1 + 0x2080) != param_2) {
    return false;
  }
  if ((*(int *)(lVar3 + 0x203c) == *(int *)(lVar3 + 0x1ec0)) && (*(int *)(lVar3 + 0x203c) != 0)) {
    return true;
  }
  return param_2 == *(int *)(*(longlong *)(lVar1 + 0x14d0) + 0x8c);
}



