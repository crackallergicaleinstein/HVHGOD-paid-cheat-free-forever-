// FUN_180650bac - decompiled reference (Ghidra). Not original source, does not compile.

/* 180650bac */

void FUN_180650bac(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 1) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xfffffffe;
    FUN_1800a8b70(param_2 + 0x3a0);
  }
  return;
}



