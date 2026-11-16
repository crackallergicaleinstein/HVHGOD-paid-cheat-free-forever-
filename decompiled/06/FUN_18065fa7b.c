// FUN_18065fa7b - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065fa7b */

void FUN_18065fa7b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 8) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffff7;
    thunk_FUN_18015c010(param_2 + 0x180);
  }
  return;
}



