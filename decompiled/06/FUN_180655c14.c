// FUN_180655c14 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180655c14 */

void FUN_180655c14(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 8) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffff7;
    thunk_FUN_18015b930(*(undefined8 *)(param_2 + 0x58));
  }
  return;
}



