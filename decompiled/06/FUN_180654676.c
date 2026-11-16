// FUN_180654676 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180654676 */

void FUN_180654676(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 100) & 0x20) != 0) {
    *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) & 0xffffffdf;
    thunk_FUN_18015c010(param_2 + 0xf8);
  }
  return;
}



