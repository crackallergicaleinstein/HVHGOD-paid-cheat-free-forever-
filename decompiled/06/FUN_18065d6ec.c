// FUN_18065d6ec - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065d6ec */

void FUN_18065d6ec(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x238) & 0x80) != 0) {
    *(uint *)(param_2 + 0x238) = *(uint *)(param_2 + 0x238) & 0xffffff7f;
    thunk_FUN_18015c010(param_2 + 0x1d8);
  }
  return;
}



