// FUN_180642d01 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180642d01 */

void FUN_180642d01(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x74) & 0x10) != 0) {
    *(uint *)(param_2 + 0x74) = *(uint *)(param_2 + 0x74) & 0xffffffef;
    FUN_1800aab30(param_2 + 0x3b0);
  }
  return;
}



