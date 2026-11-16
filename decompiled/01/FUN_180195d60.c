// FUN_180195d60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180195d60 */

longlong FUN_180195d60(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 0xd8) = 0;
  if (*(char *)(param_2 + 0xd8) != '\0') {
    FUN_1801b90e0();
    *(undefined1 *)(param_1 + 0xd8) = 1;
  }
  return param_1;
}



