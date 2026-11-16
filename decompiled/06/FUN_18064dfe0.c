// FUN_18064dfe0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064dfe0 */

void FUN_18064dfe0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18015c010(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}



