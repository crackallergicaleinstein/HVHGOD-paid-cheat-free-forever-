// FUN_180656c6c - decompiled reference (Ghidra). Not original source, does not compile.

/* 180656c6c */

void FUN_180656c6c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x34) & 1) != 0) {
    *(uint *)(param_2 + 0x34) = *(uint *)(param_2 + 0x34) & 0xfffffffe;
    thunk_FUN_18015b930(param_2 + 0x80);
  }
  return;
}



