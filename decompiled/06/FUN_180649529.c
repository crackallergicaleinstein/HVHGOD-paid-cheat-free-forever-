// FUN_180649529 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180649529 */

void FUN_180649529(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x40) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffbf;
    thunk_FUN_18015b930(param_2 + 0xb0);
  }
  return;
}



