// FUN_180649500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180649500 */

void FUN_180649500(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x20) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffdf;
    thunk_FUN_18015b930(param_2 + 0xd0);
  }
  return;
}



