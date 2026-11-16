// FUN_18064220c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064220c */

void FUN_18064220c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 4) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xfffffffb;
    FUN_1800aab30(param_2 + 0x360);
  }
  return;
}



