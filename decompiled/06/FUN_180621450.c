// FUN_180621450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180621450 */

longlong FUN_180621450(void)

{
  longlong lVar1;
  
  if (DAT_180d06008 == -1) {
    return 0;
  }
  if (DAT_180d06008 == 0) {
    lVar1 = FUN_180621488(1,"CompareStringEx",&DAT_1806b1050,"CompareStringEx");
    return lVar1;
  }
  return DAT_180d06008;
}



