// FUN_18065ab60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065ab60 */

void FUN_18065ab60(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    FUN_180473ca0(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}



