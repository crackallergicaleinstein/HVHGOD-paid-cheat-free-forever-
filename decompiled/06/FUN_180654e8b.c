// FUN_180654e8b - decompiled reference (Ghidra). Not original source, does not compile.

/* 180654e8b */

void FUN_180654e8b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xe0) & 2) != 0) {
    *(uint *)(param_2 + 0xe0) = *(uint *)(param_2 + 0xe0) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x1168);
  }
  return;
}



