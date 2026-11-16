// FUN_180660bfd - decompiled reference (Ghidra). Not original source, does not compile.

/* 180660bfd */

void FUN_180660bfd(void)

{
  longlong lVar1;
  
  lVar1 = FUN_180606ee8();
  if (0 < *(int *)(lVar1 + 0x30)) {
    lVar1 = FUN_180606ee8();
    *(int *)(lVar1 + 0x30) = *(int *)(lVar1 + 0x30) + -1;
  }
  return;
}



