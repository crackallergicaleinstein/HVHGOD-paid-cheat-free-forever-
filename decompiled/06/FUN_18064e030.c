// FUN_18064e030 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064e030 */

void FUN_18064e030(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_1801ebc10(*(undefined8 *)(param_2 + 0x40));
  }
  return;
}



