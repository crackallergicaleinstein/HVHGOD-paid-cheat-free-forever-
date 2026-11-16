// FUN_18064dbe9 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064dbe9 */

void FUN_18064dbe9(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 0x20) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xffffffdf;
    thunk_FUN_18015c010(param_2 + 0xe8);
  }
  return;
}



