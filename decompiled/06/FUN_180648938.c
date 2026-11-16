// FUN_180648938 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180648938 */

void FUN_180648938(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 2) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x2b0);
  }
  return;
}



