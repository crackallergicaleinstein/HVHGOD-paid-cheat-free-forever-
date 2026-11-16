// FUN_18061aed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061aed0 */

undefined8 FUN_18061aed0(void)

{
  int iVar1;
  
  LOCK();
  iVar1 = *DAT_180bb2660;
  *DAT_180bb2660 = *DAT_180bb2660 + -1;
  UNLOCK();
  if ((iVar1 == 1) && (DAT_180bb2660 != (int *)&DAT_1808d7780)) {
    FUN_180621380();
    DAT_180bb2660 = (int *)&DAT_1808d7780;
  }
  return 1;
}



