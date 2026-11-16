// FUN_1806606f3 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806606f3 */

void FUN_1806606f3(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_18015c010(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}



