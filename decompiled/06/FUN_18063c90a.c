// FUN_18063c90a - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063c90a */

void FUN_18063c90a(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xb0) & 1) != 0) {
    *(uint *)(param_2 + 0xb0) = *(uint *)(param_2 + 0xb0) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x170);
  }
  return;
}



