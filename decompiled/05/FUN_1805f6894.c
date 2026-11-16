// FUN_1805f6894 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f6894 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1805f6894(void)

{
  undefined8 *puVar1;
  
  for (puVar1 = &DAT_180877b40; puVar1 < &DAT_180877b40; puVar1 = puVar1 + 1) {
    if ((code *)*puVar1 != (code *)0x0) {
      (*(code *)*puVar1)();
    }
  }
  return;
}



