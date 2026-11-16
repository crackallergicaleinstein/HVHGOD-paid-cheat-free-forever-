// FUN_1805fc63c - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fc63c */

void FUN_1805fc63c(void)

{
  int iVar1;
  
  iVar1 = FUN_1805f68d0(&DAT_1808d6030);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808d607c == 0x7fffffff) {
    DAT_1808d607c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  while (DAT_180bb1908 != 0) {
    FUN_1805f6a84(&DAT_180bb1910,&DAT_1808d6030);
  }
  FUN_1805f68fc(&DAT_1808d6030);
  return;
}



