// FUN_180485a00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180485a00 */

void FUN_180485a00(void)

{
  int iVar1;
  
  if (DAT_180bbecdb != '\0') {
    if (DAT_180c62d18 != DAT_180c62d20) {
      FUN_18015c010(DAT_180c62d20 + -0x20);
      DAT_180c62d20 = DAT_180c62d20 + -0x20;
    }
    DAT_1808e4e38 = 0xffffffff;
  }
  iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar1 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
    return;
  }
  *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
  return;
}



