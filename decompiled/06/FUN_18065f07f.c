// FUN_18065f07f - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065f07f */

void FUN_18065f07f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 8) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffff7;
    thunk_FUN_18015c010(param_2 + 0x240);
  }
  return;
}



