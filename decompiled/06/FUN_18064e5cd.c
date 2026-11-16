// FUN_18064e5cd - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064e5cd */

void FUN_18064e5cd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 1) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xfffffffe;
    thunk_FUN_18015b930(param_2 + 0xc0);
  }
  return;
}



