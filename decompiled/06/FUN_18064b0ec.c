// FUN_18064b0ec - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064b0ec */

void FUN_18064b0ec(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x94) & 4) != 0) {
    *(uint *)(param_2 + 0x94) = *(uint *)(param_2 + 0x94) & 0xfffffffb;
    thunk_FUN_18015c010(param_2 + 0xf0);
  }
  return;
}



