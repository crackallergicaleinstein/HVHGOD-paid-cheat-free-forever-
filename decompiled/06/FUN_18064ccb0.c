// FUN_18064ccb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064ccb0 */

void FUN_18064ccb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 1) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x290);
  }
  return;
}



