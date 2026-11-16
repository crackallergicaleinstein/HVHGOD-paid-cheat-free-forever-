// FUN_18061fbd4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18061fbd4 */

undefined4 FUN_18061fbd4(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_180bb2030;
  LOCK();
  DAT_180bb2030 = 1;
  UNLOCK();
  return uVar1;
}



