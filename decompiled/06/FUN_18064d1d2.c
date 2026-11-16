// FUN_18064d1d2 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064d1d2 */

void FUN_18064d1d2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 2) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x688);
  }
  return;
}



