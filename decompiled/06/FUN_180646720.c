// FUN_180646720 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180646720 */

void FUN_180646720(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18015c010(*(undefined8 *)(param_2 + 0x60));
  }
  return;
}



