// FUN_18065d510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065d510 */

void FUN_18065d510(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x48);
  }
  return;
}



