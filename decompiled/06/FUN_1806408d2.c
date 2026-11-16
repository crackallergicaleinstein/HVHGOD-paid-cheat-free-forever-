// FUN_1806408d2 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806408d2 */

void FUN_1806408d2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x40);
  }
  return;
}



