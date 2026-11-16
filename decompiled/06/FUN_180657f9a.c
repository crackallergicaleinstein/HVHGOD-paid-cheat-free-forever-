// FUN_180657f9a - decompiled reference (Ghidra). Not original source, does not compile.

/* 180657f9a */

void FUN_180657f9a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 8) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffff7;
    thunk_FUN_18015c010(param_2 + 0x130);
  }
  return;
}



