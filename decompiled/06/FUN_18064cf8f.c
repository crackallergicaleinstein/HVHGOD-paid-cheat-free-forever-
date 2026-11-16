// FUN_18064cf8f - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064cf8f */

void FUN_18064cf8f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 4) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffb;
    thunk_FUN_18015b930(param_2 + 0x80);
  }
  return;
}



