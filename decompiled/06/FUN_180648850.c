// FUN_180648850 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180648850 */

void FUN_180648850(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    thunk_FUN_18015b930(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}



