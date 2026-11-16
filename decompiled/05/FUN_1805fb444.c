// FUN_1805fb444 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fb444 */

void FUN_1805fb444(HANDLE param_1)

{
  BOOL BVar1;
  
  if (param_1 != (HANDLE)0xffffffffffffffff) {
    BVar1 = FindClose(param_1);
    if (BVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  return;
}



