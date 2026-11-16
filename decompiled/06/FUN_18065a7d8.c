// FUN_18065a7d8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065a7d8 */

void FUN_18065a7d8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x140) & 1) != 0) {
    *(uint *)(param_2 + 0x140) = *(uint *)(param_2 + 0x140) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x100);
  }
  return;
}



