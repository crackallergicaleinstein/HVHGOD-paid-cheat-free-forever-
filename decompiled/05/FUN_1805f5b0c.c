// FUN_1805f5b0c - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805f5b0c */

undefined1 FUN_1805f5b0c(int param_1)

{
  char cVar1;
  
  if (param_1 == 0) {
    DAT_180bacd98 = 1;
  }
  FUN_1805f641c();
  cVar1 = __vcrt_initialize();
  if (cVar1 != '\0') {
    cVar1 = FUN_18061af6c();
    if (cVar1 != '\0') {
      return 1;
    }
    __vcrt_uninitialize(0);
  }
  return 0;
}



