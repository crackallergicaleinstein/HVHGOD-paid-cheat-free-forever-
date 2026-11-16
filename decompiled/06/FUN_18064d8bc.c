// FUN_18064d8bc - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064d8bc */

void FUN_18064d8bc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x78);
  }
  return;
}



