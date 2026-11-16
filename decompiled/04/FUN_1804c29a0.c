// FUN_1804c29a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804c29a0 */

void FUN_1804c29a0(void)

{
  int iVar1;
  
  iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar1 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
    return;
  }
  *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
  return;
}



