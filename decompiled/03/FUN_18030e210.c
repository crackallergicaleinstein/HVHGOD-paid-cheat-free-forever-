// FUN_18030e210 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030e210 */

void FUN_18030e210(void)

{
  undefined8 *puVar1;
  uint uStack_14;
  
  puVar1 = &DAT_1808e3ad0;
  do {
    *puVar1 = 0xffffffffffffffff;
    puVar1[1] = 0;
    uStack_14 = uStack_14 & 0xffffff00;
    puVar1[2] = (ulonglong)uStack_14 << 0x20;
    puVar1 = puVar1 + 3;
  } while (puVar1 != &DAT_1808e3d10);
  DAT_1808e3d10 = 0xfffffffffffffc18;
  DAT_180bda17c = 0;
  return;
}



