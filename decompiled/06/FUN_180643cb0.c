// FUN_180643cb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180643cb0 */

void FUN_180643cb0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xa8) & 1) != 0) {
    *(uint *)(param_2 + 0xa8) = *(uint *)(param_2 + 0xa8) & 0xfffffffe;
    FUN_18015ab90(*(longlong *)(param_2 + 0x90) + 0xa8);
  }
  return;
}



