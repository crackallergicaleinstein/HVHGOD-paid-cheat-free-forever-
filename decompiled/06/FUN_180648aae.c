// FUN_180648aae - decompiled reference (Ghidra). Not original source, does not compile.

/* 180648aae */

void FUN_180648aae(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 8) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffff7;
    thunk_FUN_18015b930(param_2 + 0xb0);
  }
  return;
}



