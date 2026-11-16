// FUN_18064d3cb - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064d3cb */

void FUN_18064d3cb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x60) & 0x100000) != 0) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) & 0xffefffff;
    thunk_FUN_18015c010(param_2 + 0xd0);
  }
  return;
}



