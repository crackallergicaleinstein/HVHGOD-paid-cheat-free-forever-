// FUN_18065464d - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065464d */

void FUN_18065464d(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 100) & 0x10) != 0) {
    *(uint *)(param_2 + 100) = *(uint *)(param_2 + 100) & 0xffffffef;
    thunk_FUN_18015c010(param_2 + 0xa0);
  }
  return;
}



