// FUN_1806400ac - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806400ac */

void FUN_1806400ac(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x38);
  }
  return;
}



