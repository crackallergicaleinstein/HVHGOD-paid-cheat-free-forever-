// FUN_18064dc36 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064dc36 */

void FUN_18064dc36(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 0x40) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xffffffbf;
    thunk_FUN_18015c010(param_2 + 200);
  }
  return;
}



