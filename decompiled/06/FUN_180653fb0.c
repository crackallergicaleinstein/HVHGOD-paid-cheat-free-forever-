// FUN_180653fb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180653fb0 */

void FUN_180653fb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    thunk_FUN_18015b930(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}



