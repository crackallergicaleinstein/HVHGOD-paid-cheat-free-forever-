// FUN_18064948b - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064948b */

void FUN_18064948b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    thunk_FUN_18015b930(param_2 + 0x50);
  }
  return;
}



