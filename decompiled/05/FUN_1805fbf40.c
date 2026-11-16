// FUN_1805fbf40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fbf40 */

void FUN_1805fbf40(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)_malloc_base(0x10);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805fa854();
  }
  *puVar1 = DAT_180bb18d8;
  puVar1[1] = param_1;
  DAT_180bb18d8 = puVar1;
  return;
}



