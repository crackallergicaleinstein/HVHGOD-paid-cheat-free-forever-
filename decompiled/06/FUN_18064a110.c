// FUN_18064a110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064a110 */

void FUN_18064a110(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 1) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffe;
    FUN_1801952f0(param_2 + 0xa30);
  }
  return;
}



