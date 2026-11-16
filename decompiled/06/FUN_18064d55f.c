// FUN_18064d55f - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064d55f */

void FUN_18064d55f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xbc) & 0x40) != 0) {
    *(uint *)(param_2 + 0xbc) = *(uint *)(param_2 + 0xbc) & 0xffffffbf;
    thunk_FUN_18015c010(param_2 + 0x110);
  }
  return;
}



