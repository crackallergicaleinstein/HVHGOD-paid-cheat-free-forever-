// FUN_180642a72 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180642a72 */

void FUN_180642a72(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x74) & 1) != 0) {
    *(uint *)(param_2 + 0x74) = *(uint *)(param_2 + 0x74) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0xa30);
  }
  return;
}



