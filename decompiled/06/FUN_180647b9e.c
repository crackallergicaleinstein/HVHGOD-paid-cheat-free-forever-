// FUN_180647b9e - decompiled reference (Ghidra). Not original source, does not compile.

/* 180647b9e */

void FUN_180647b9e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 0x10) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xffffffef;
    FUN_1801522a0(param_2 + 0x50);
  }
  return;
}



