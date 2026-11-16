// FUN_180647d5f - decompiled reference (Ghidra). Not original source, does not compile.

/* 180647d5f */

void FUN_180647d5f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    thunk_FUN_18015c010(param_2 + 0x1e8);
  }
  return;
}



