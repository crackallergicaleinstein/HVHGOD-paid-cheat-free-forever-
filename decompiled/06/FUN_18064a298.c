// FUN_18064a298 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064a298 */

void FUN_18064a298(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x48) & 0x20) != 0) {
    *(uint *)(param_2 + 0x48) = *(uint *)(param_2 + 0x48) & 0xffffffdf;
    thunk_FUN_18015b930(param_2 + 0x910);
  }
  return;
}



