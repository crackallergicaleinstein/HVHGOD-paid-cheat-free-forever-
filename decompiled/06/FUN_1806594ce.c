// FUN_1806594ce - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806594ce */

void FUN_1806594ce(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 4) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffb;
    thunk_FUN_18015b930(param_2 + 0x40);
  }
  return;
}



