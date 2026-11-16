// FUN_1806431bc - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806431bc */

void FUN_1806431bc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x74) & 0x400) != 0) {
    *(uint *)(param_2 + 0x74) = *(uint *)(param_2 + 0x74) & 0xfffffbff;
    FUN_1800aab30(param_2 + 0x2a0);
  }
  return;
}



