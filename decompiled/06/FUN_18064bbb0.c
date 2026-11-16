// FUN_18064bbb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064bbb0 */

void FUN_18064bbb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    FUN_18015ab90(*(longlong *)(param_2 + 0x30) + 0x20);
  }
  return;
}



