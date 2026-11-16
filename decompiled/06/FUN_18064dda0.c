// FUN_18064dda0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064dda0 */

void FUN_18064dda0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18015b930(param_2 + 0x268);
  }
  return;
}



