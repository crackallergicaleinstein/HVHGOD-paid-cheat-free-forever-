// FUN_18064db7f - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064db7f */

void FUN_18064db7f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 8) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffff7;
    thunk_FUN_18015c010(param_2 + 0x80);
  }
  return;
}



