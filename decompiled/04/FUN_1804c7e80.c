// FUN_1804c7e80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c7e80 */

void FUN_1804c7e80(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = DAT_180bb8ae8;
  lVar3 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  if (((*(uint *)(lVar3 + 0x14) & 0x4000000) == 0) || (*(int *)(DAT_180bb8ae8 + 0x2008) < 1)) {
    FUN_1804c5a40("Calling EndPopup() in wrong window!");
    return;
  }
  if (((*(longlong *)(DAT_180bb8ae8 + 0x2040) == lVar3) &&
      (*(char *)(DAT_180bb8ae8 + 0x20e1) != '\0')) &&
     (*(int *)(DAT_180bb8ae8 + 0x204c) == *(int *)(lVar3 + 0x170))) {
    *(uint *)(DAT_180bb8ae8 + 0x20e4) = *(uint *)(DAT_180bb8ae8 + 0x20e4) & 0xfffffff2;
    *(uint *)(lVar4 + 0x20e4) = *(uint *)(lVar4 + 0x20e4) | 2;
  }
  uVar1 = *(undefined4 *)(lVar4 + 0x143c);
  uVar2 = *(undefined4 *)(lVar4 + 0x1438);
  *(undefined4 *)(lVar4 + 0x143c) = *(undefined4 *)(lVar3 + 0x10);
  if ((*(uint *)(lVar3 + 0x14) & 0x1000000) != 0) {
    *(undefined4 *)(lVar4 + 0x1438) = *(undefined4 *)(lVar3 + 0x10);
  }
  FUN_1804c14e0();
  *(undefined4 *)(lVar4 + 0x143c) = uVar1;
  *(undefined4 *)(lVar4 + 0x1438) = uVar2;
  return;
}



