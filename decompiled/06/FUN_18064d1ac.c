// FUN_18064d1ac - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064d1ac */

void FUN_18064d1ac(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 1) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x40);
  }
  return;
}



