// FUN_180647e35 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180647e35 */

void FUN_180647e35(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x1000) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffefff;
    thunk_FUN_18015c010(param_2 + 0x158);
  }
  return;
}



