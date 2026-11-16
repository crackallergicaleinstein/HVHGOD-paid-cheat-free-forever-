// FUN_1806465b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806465b0 */

void FUN_1806465b0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180176390(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}



