// FUN_1806458f6 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806458f6 */

void FUN_1806458f6(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x28);
  }
  return;
}



