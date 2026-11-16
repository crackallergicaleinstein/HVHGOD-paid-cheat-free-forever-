// FUN_18064a18b - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064a18b */

void FUN_18064a18b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 0x10) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xffffffef;
    FUN_1801952f0(param_2 + 0x10e50);
  }
  return;
}



