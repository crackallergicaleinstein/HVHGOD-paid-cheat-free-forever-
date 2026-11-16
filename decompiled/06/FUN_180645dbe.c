// FUN_180645dbe - decompiled reference (Ghidra). Not original source, does not compile.

/* 180645dbe */

void FUN_180645dbe(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 4) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffb;
    thunk_FUN_18015b930(param_2 + 0xc0);
  }
  return;
}



