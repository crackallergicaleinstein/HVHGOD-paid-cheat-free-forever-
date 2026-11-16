// FUN_1801957f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801957f0 */

longlong FUN_1801957f0(longlong param_1,longlong param_2)

{
  *(undefined1 *)(param_1 + 0x120) = 0;
  if (*(char *)(param_2 + 0x120) != '\0') {
    FUN_1801bb9e0();
    *(undefined1 *)(param_1 + 0x120) = 1;
  }
  return param_1;
}



