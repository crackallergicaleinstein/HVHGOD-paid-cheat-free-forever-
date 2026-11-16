// FUN_1806602b4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806602b4 */

void FUN_1806602b4(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    FUN_1805fca24(param_2 + 0x30);
  }
  return;
}



