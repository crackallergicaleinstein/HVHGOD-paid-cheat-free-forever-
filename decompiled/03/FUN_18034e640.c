// FUN_18034e640 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18034e640 */

undefined1 FUN_18034e640(longlong param_1,longlong param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return 0;
    }
    if (*(char *)(param_1 + 0x14) != '\0') break;
    param_1 = param_1 + 0xe8;
  }
  return 1;
}



