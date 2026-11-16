// FUN_1804bbf70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804bbf70 */

longlong FUN_1804bbf70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  do {
    iVar3 = *(int *)(param_1 + 0x1b0) + -1;
    lVar2 = (longlong)iVar3;
    while( true ) {
      if (lVar2 < 0) {
        return param_1;
      }
      lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + lVar2 * 8);
      if ((*(char *)(lVar1 + 0xcc) != '\0') && (*(char *)(lVar1 + 0xd4) == '\0')) break;
      iVar3 = iVar3 + -1;
      lVar2 = lVar2 + -1;
    }
    param_1 = *(longlong *)(*(longlong *)(param_1 + 0x1b8) + (longlong)iVar3 * 8);
  } while( true );
}



