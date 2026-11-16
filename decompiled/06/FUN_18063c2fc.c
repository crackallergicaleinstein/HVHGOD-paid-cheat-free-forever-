// FUN_18063c2fc - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063c2fc */

void FUN_18063c2fc(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 1) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffe;
    thunk_FUN_18015b930(param_2 + 0x60);
  }
  return;
}



