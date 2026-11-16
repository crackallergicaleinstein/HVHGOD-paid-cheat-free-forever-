// FUN_18060ebe4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060ebe4 */

undefined8 FUN_18060ebe4(byte param_1,ulonglong param_2)

{
  if ((param_1 & 4) != 0) {
    return 1;
  }
  if ((param_1 & 1) != 0) {
    if ((param_1 & 2) == 0) {
      return CONCAT71(0x7fffffffffffff,0x7fffffffffffffff < param_2);
    }
    if (0x8000000000000000 < param_2) {
      return 1;
    }
  }
  return 0;
}



