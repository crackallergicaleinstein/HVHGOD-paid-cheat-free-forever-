// FUN_18063bc26 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063bc26 */

void FUN_18063bc26(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 2) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffd;
    thunk_FUN_18015b930(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}



