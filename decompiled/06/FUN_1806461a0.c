// FUN_1806461a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806461a0 */

void FUN_1806461a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_18015ea00(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}



