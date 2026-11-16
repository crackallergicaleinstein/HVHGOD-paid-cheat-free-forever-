// FUN_18064e0ac - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064e0ac */

void FUN_18064e0ac(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1801eda10(*(undefined8 *)(param_2 + 0x150));
  }
  return;
}



