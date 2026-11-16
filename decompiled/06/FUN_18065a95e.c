// FUN_18065a95e - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065a95e */

void FUN_18065a95e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x28);
  }
  return;
}



