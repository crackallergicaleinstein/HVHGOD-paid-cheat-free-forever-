// FUN_1806511b8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806511b8 */

void FUN_1806511b8(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xa8) & 1) != 0) {
    *(uint *)(param_2 + 0xa8) = *(uint *)(param_2 + 0xa8) & 0xfffffffe;
    FUN_1802660e0(*(undefined8 *)(param_2 + 0x158));
  }
  return;
}



