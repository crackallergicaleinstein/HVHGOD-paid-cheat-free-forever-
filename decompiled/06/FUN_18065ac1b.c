// FUN_18065ac1b - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065ac1b */

void FUN_18065ac1b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 8) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffff7;
    thunk_FUN_18015c010(param_2 + 0x170);
  }
  return;
}



