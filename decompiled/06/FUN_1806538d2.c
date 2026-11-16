// FUN_1806538d2 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806538d2 */

void FUN_1806538d2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 4) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffb;
    thunk_FUN_18015c010(param_2 + 0x2c8);
  }
  return;
}



