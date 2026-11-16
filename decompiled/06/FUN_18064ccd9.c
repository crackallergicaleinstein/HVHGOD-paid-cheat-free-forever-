// FUN_18064ccd9 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064ccd9 */

void FUN_18064ccd9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 2) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x290);
  }
  return;
}



