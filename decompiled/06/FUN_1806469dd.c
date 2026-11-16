// FUN_1806469dd - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806469dd */

void FUN_1806469dd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x58) & 0x40) != 0) {
    *(uint *)(param_2 + 0x58) = *(uint *)(param_2 + 0x58) & 0xffffffbf;
    thunk_FUN_18015c010(param_2 + 0x210);
  }
  return;
}



