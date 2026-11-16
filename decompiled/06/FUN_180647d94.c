// FUN_180647d94 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180647d94 */

void FUN_180647d94(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    thunk_FUN_18015c010(param_2 + 0x208);
  }
  return;
}



