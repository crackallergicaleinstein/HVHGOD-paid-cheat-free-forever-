// FUN_18043a8b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043a8b0 */

void FUN_18043a8b0(void)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong lVar4;
  
  lVar1 = FUN_180439770();
  iVar3 = 0;
  do {
    lVar4 = *(longlong *)(lVar1 + 0x4c8);
    if (*(longlong *)(lVar1 + 0x4c0) == lVar4) {
      return;
    }
    puVar2 = (undefined4 *)FUN_180439d10(lVar1 + 0x1b8,*(undefined4 *)(lVar4 + -8));
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *(undefined4 *)(lVar4 + -4);
    }
    *(longlong *)(lVar1 + 0x4c8) = *(longlong *)(lVar1 + 0x4c8) + -8;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 1);
  return;
}



