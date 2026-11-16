// FUN_1806606b5 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806606b5 */

void FUN_1806606b5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1805fca24(param_2 + 0x28);
  }
  return;
}



