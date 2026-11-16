// FUN_18065db4c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065db4c */

void FUN_18065db4c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1800aab30(*(undefined8 *)(param_2 + 0x800));
  }
  return;
}



