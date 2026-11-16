// FUN_18064d62c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064d62c */

void FUN_18064d62c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1801d6990(*(undefined8 *)(param_2 + 0x38));
  }
  return;
}



