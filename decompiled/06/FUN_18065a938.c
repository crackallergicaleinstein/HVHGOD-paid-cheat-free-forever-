// FUN_18065a938 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065a938 */

void FUN_18065a938(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x48);
  }
  return;
}



