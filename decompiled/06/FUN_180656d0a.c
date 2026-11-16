// FUN_180656d0a - decompiled reference (Ghidra). Not original source, does not compile.

/* 180656d0a */

void FUN_180656d0a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 0x10) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xffffffef;
    thunk_FUN_18015b930(param_2 + 0xa0);
  }
  return;
}



