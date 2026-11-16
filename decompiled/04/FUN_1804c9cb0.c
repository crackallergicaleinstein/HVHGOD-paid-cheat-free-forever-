// FUN_1804c9cb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c9cb0 */

void FUN_1804c9cb0(int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = DAT_180bb8ae8;
  if (param_1 == 0) {
    lVar2 = *(longlong *)(DAT_180bb8ae8 + 0x2040);
    lVar4 = *(longlong *)(lVar2 + 0x400);
    if ((lVar4 == 0) || (*(char *)(lVar4 + 0xcd) == '\0')) {
      lVar4 = lVar2;
    }
    *(longlong *)(DAT_180bb8ae8 + 0x2040) = lVar4;
    *(undefined8 *)(lVar3 + 0x2098) = 0xffffffffffffffff;
    if ((lVar2 != 0) && ((*(byte *)(lVar3 + 0x28cc) & 4) != 0)) {
      FUN_1804cf3e0("[focus] NavRestoreLayer: from \"%s\" to SetNavWindow(\"%s\")\n",
                    *(undefined8 *)(lVar2 + 8),*(undefined8 *)(lVar4 + 8));
    }
  }
  lVar2 = *(longlong *)(lVar3 + 0x2040);
  iVar1 = *(int *)(lVar2 + 0x408 + (longlong)param_1 * 4);
  if (iVar1 == 0) {
    *(int *)(lVar3 + 0x204c) = param_1;
    FUN_1804c9d70(lVar2,1);
    return;
  }
  FUN_1804c8f10(iVar1,param_1,0,((longlong)param_1 + 0x41) * 0x10 + lVar2);
  return;
}



