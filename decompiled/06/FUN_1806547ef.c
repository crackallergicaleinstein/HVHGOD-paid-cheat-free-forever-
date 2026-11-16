// FUN_1806547ef - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806547ef */

void FUN_1806547ef(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x108) & 0x20) != 0) {
    *(uint *)(param_2 + 0x108) = *(uint *)(param_2 + 0x108) & 0xffffffdf;
    thunk_FUN_18015c010(param_2 + 0x60);
  }
  return;
}



