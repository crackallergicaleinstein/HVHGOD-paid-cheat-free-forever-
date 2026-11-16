// FUN_180660773 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180660773 */

void FUN_180660773(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x38) & 1) != 0) {
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffe;
    FUN_18015ab90(*(longlong *)(param_2 + 0x30) + 0x98);
  }
  return;
}



