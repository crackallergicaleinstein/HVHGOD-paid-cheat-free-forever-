// FUN_1805b6850 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b6850 */

void FUN_1805b6850(longlong param_1)

{
  if (*(char *)(param_1 + 0x48d4) != '\0') {
    *(undefined1 *)(param_1 + 0x48d5) = 1;
    FUN_1805b70b0(param_1,*(undefined4 *)(param_1 + 0x4930),*(undefined4 *)(param_1 + 0x4934));
    if (*(char *)(param_1 + 0x4938) != '\0') {
      FUN_1805b73c0(param_1,param_1 + 0x10,param_1 + 0x4910,*(undefined8 *)(param_1 + 0x4918),1);
    }
    *(undefined1 *)(param_1 + 0x48d7) = 1;
    *(undefined2 *)(param_1 + 0x48d4) = 0;
    *(undefined1 *)(param_1 + 0x4938) = 0;
  }
  return;
}



