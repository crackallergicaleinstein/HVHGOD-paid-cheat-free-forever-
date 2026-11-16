// FUN_180657a90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180657a90 */

void FUN_180657a90(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    thunk_FUN_18015c010(*(undefined8 *)(param_2 + 0xd8));
  }
  return;
}



