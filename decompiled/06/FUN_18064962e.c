// FUN_18064962e - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064962e */

void FUN_18064962e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18015b930(param_2 + 0x90);
  }
  return;
}



