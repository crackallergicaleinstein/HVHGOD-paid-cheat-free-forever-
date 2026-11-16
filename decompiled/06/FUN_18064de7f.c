// FUN_18064de7f - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064de7f */

void FUN_18064de7f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x20) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffdf;
    thunk_FUN_18015b930(param_2 + 0x40);
  }
  return;
}



