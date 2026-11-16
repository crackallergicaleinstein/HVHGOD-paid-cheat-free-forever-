// FUN_180642d2a - decompiled reference (Ghidra). Not original source, does not compile.

/* 180642d2a */

void FUN_180642d2a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x74) & 0x20) != 0) {
    *(uint *)(param_2 + 0x74) = *(uint *)(param_2 + 0x74) & 0xffffffdf;
    FUN_1800aab30(param_2 + 0x2a0);
  }
  return;
}



