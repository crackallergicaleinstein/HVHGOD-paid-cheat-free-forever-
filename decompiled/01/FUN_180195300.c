// FUN_180195300 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180195300 */

longlong FUN_180195300(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(char *)(param_2 + 0x120) == '\0') {
    if (*(char *)(param_1 + 0x120) != '\0') {
      FUN_180195860();
      *(undefined1 *)(param_1 + 0x120) = 0;
    }
    return param_1;
  }
  if (*(char *)(param_1 + 0x120) == '\0') {
    lVar1 = param_1;
    FUN_1801bb9e0();
    *(undefined1 *)(lVar1 + 0x120) = 1;
    return param_1;
  }
  FUN_180195b10();
  FUN_180180b20(param_1 + 0xd8,param_2 + 0xd8);
  return param_1;
}



