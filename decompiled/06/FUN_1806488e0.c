// FUN_1806488e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806488e0 */

void FUN_1806488e0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x28) & 0x40) != 0) {
    *(uint *)(param_2 + 0x28) = *(uint *)(param_2 + 0x28) & 0xffffffbf;
    thunk_FUN_18015c010(param_2 + 0x50);
  }
  return;
}



