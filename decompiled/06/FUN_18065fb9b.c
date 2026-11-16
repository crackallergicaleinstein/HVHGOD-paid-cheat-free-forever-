// FUN_18065fb9b - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065fb9b */

void FUN_18065fb9b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 8) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffff7;
    thunk_FUN_18015c010(param_2 + 400);
  }
  return;
}



