// FUN_180645de7 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180645de7 */

void FUN_180645de7(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 8) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffff7;
    thunk_FUN_18015b930(param_2 + 0x68);
  }
  return;
}



