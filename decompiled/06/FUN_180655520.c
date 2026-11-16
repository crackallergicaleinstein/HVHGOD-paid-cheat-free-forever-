// FUN_180655520 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180655520 */

void FUN_180655520(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xf0) & 1) != 0) {
    *(uint *)(param_2 + 0xf0) = *(uint *)(param_2 + 0xf0) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x110);
  }
  return;
}



