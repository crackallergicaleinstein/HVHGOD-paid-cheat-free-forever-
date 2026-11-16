// FUN_180653c8b - decompiled reference (Ghidra). Not original source, does not compile.

/* 180653c8b */

void FUN_180653c8b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x80) & 2) != 0) {
    *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x130);
  }
  return;
}



