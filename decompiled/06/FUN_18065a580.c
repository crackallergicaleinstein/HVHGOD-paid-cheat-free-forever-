// FUN_18065a580 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065a580 */

void FUN_18065a580(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18015c010(*(undefined8 *)(param_2 + 0x88));
  }
  return;
}



