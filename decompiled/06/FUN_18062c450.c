// FUN_18062c450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18062c450 */

undefined8 FUN_18062c450(void)

{
  byte bVar1;
  
  bVar1 = (byte)DAT_1808d5f00 & 0x3f;
  return CONCAT71((int7)(DAT_1808d5f00 >> 8),
                  (DAT_180bb26b0 ^ DAT_1808d5f00) >> bVar1 != 0 ||
                  (DAT_180bb26b0 ^ DAT_1808d5f00) << 0x40 - bVar1 != 0);
}



