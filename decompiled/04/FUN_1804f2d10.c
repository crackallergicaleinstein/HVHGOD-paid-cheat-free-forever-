// FUN_1804f2d10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f2d10 */

void FUN_1804f2d10(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x2368) != 0) {
    lVar3 = 0;
    do {
      iVar1 = *(int *)(lVar3 + 8 + *(longlong *)(param_1 + 0x2370));
      if ((iVar1 != -1) &&
         (lVar4 = (longlong)iVar1 * 600 + *(longlong *)(param_1 + 0x2360), lVar4 != 0)) {
        *(undefined1 *)(lVar4 + 0x246) = 1;
        *(undefined4 *)(lVar4 + 100) = 0xffffffff;
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (iVar2 != *(int *)(param_1 + 0x2368));
  }
  return;
}



