// FUN_18064d29a - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064d29a */

void FUN_18064d29a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x10000) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffeffff;
    FUN_180152210(param_2 + 0x110);
  }
  return;
}



