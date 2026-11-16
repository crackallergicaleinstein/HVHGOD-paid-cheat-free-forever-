// FUN_1806527ab - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806527ab */

void FUN_1806527ab(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 100) & 4) != 0) {
    *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) & 0xfffffffb;
    thunk_FUN_18015c010(param_2 + 0x70);
  }
  return;
}



