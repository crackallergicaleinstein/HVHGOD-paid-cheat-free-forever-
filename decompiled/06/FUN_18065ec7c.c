// FUN_18065ec7c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065ec7c */

void FUN_18065ec7c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1801d8410(param_2 + 0x68);
  }
  return;
}



