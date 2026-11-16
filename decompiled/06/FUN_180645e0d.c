// FUN_180645e0d - decompiled reference (Ghidra). Not original source, does not compile.

/* 180645e0d */

void FUN_180645e0d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 0x10) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xffffffef;
    thunk_FUN_18015b930(param_2 + 0x380);
  }
  return;
}



