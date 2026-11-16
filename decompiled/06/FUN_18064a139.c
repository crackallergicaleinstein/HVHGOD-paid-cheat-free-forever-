// FUN_18064a139 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064a139 */

void FUN_18064a139(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 2) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xfffffffd;
    FUN_180186aa0(param_2 + 0x910);
  }
  return;
}



