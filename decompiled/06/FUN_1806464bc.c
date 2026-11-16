// FUN_1806464bc - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806464bc */

void FUN_1806464bc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_180163a60(param_2 + 0x20);
  }
  return;
}



