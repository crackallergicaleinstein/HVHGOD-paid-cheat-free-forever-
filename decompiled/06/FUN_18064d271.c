// FUN_18064d271 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064d271 */

void FUN_18064d271(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x10) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffffffef;
    FUN_180152210(param_2 + 0x280);
  }
  return;
}



