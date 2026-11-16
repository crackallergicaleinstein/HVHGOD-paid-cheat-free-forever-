// FUN_1806538a9 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806538a9 */

void FUN_1806538a9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 2) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0xb0);
  }
  return;
}



