// FUN_18060543c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060543c */

void FUN_18060543c(PVOID param_1)

{
  PVOID pvVar1;
  
  if (DAT_1808d70c8 == 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pvVar1 = EncodePointer(param_1);
  DAT_1808d70c8 = DAT_1808d70c8 + -1;
  *(PVOID *)(&DAT_180bb19f0 + DAT_1808d70c8 * 8) = pvVar1;
  return;
}



