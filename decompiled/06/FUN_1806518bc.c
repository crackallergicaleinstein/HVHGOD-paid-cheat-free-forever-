// FUN_1806518bc - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806518bc */

void FUN_1806518bc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_1800f0160(*(undefined8 *)(param_2 + 0x70));
  }
  return;
}



