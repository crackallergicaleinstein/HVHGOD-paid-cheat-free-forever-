// FUN_18064d8e2 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064d8e2 */

void FUN_18064d8e2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 2) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x58);
  }
  return;
}



