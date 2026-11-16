// FUN_180657f4b - decompiled reference (Ghidra). Not original source, does not compile.

/* 180657f4b */

void FUN_180657f4b(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 2) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x100);
  }
  return;
}



