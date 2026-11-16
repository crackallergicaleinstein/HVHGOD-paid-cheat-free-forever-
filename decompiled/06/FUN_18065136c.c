// FUN_18065136c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065136c */

void FUN_18065136c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x100) & 1) != 0) {
    *(uint *)(param_2 + 0x100) = *(uint *)(param_2 + 0x100) & 0xfffffffe;
    FUN_180265f10(*(undefined8 *)(param_2 + 0x168));
  }
  return;
}



