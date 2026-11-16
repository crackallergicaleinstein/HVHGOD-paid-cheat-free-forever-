// FUN_1806518f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806518f0 */

void FUN_1806518f0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_180266170(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}



