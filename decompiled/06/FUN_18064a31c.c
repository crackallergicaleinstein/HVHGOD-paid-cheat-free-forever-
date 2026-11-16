// FUN_18064a31c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064a31c */

void FUN_18064a31c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 1) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffe;
    FUN_18015ab90(*(longlong *)(param_2 + 0x50) + 0xb8);
  }
  return;
}



