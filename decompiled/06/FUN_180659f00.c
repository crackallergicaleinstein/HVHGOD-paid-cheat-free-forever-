// FUN_180659f00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180659f00 */

void FUN_180659f00(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x24) & 1) != 0) {
    *(uint *)(param_2 + 0x24) = *(uint *)(param_2 + 0x24) & 0xfffffffe;
    thunk_FUN_18015c010(*(undefined8 *)(param_2 + 0x30));
  }
  return;
}



