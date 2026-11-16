// FUN_18043b1b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18043b1b0 */

longlong FUN_18043b1b0(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_180439770();
  lVar2 = 0;
  if (*(longlong *)(lVar1 + 0x478) != *(longlong *)(lVar1 + 0x480)) {
    lVar2 = *(longlong *)(lVar1 + 0x480) + -0x78;
  }
  return lVar2;
}



