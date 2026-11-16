// FUN_1805d70e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d70e0 */

void FUN_1805d70e0(longlong param_1)

{
  if ((*(char *)(param_1 + 0x78) == '\x01') && (*(char *)(param_1 + 0x79) == '\x01')) {
    (**(code **)(param_1 + 0x88))(param_1 + 0xa0);
    *(undefined1 *)(param_1 + 0x78) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x78) = 0;
  return;
}



