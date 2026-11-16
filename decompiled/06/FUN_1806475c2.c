// FUN_1806475c2 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806475c2 */

void FUN_1806475c2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x210);
  }
  return;
}



