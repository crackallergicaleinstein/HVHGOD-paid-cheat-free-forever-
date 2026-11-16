// FUN_18064759c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064759c */

void FUN_18064759c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x78);
  }
  return;
}



