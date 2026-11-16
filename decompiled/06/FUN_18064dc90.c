// FUN_18064dc90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064dc90 */

void FUN_18064dc90(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0xf8);
  }
  return;
}



