// FUN_180648c1e - decompiled reference (Ghidra). Not original source, does not compile.

/* 180648c1e */

void FUN_180648c1e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x78) & 0x80) != 0) {
    *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) & 0xffffff7f;
    thunk_FUN_18015c010(param_2 + 0xb0);
  }
  return;
}



