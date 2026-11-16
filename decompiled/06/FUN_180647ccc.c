// FUN_180647ccc - decompiled reference (Ghidra). Not original source, does not compile.

/* 180647ccc */

void FUN_180647ccc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x4000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffbfff;
    thunk_FUN_18015c010(param_2 + 0x260);
  }
  return;
}



