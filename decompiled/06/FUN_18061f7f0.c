// FUN_18061f7f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061f7f0 */

undefined4 FUN_18061f7f0(void)

{
  longlong lVar1;
  
  DAT_180bb202c = FUN_180621f10();
  DAT_1808d72d0 = FlsAlloc(FUN_18061f410);
  if (DAT_1808d72d0 != 0xffffffff) {
    lVar1 = FUN_18061f6f8();
    if (lVar1 != 0) {
      return 1;
    }
    FUN_18061f840(0);
  }
  return 0;
}



