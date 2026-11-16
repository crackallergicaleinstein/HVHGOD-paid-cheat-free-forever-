// FUN_1806458a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806458a0 */

void FUN_1806458a0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18015c010(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}



