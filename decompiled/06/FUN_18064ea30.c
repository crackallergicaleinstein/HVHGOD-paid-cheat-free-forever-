// FUN_18064ea30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064ea30 */

void FUN_18064ea30(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
    thunk_FUN_18015b930(param_2 + 0xd0);
  }
  return;
}



