// FUN_18064dc5f - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064dc5f */

void FUN_18064dc5f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 0x80) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xffffff7f;
    thunk_FUN_18015c010(param_2 + 0x108);
  }
  return;
}



