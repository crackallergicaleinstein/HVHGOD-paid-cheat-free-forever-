// FUN_18064fbb8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064fbb8 */

void FUN_18064fbb8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x80) & 1) != 0) {
    *(uint *)(param_2 + 0x80) = *(uint *)(param_2 + 0x80) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x100);
  }
  return;
}



