// FUN_180642d53 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180642d53 */

void FUN_180642d53(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x74) & 0x40) != 0) {
    *(uint *)(param_2 + 0x74) = *(uint *)(param_2 + 0x74) & 0xffffffbf;
    FUN_1800aab30(param_2 + 0xb0);
  }
  return;
}



