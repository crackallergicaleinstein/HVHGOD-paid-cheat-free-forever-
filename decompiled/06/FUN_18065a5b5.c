// FUN_18065a5b5 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065a5b5 */

void FUN_18065a5b5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x68);
  }
  return;
}



