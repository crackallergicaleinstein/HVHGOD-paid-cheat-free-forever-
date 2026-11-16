// FUN_18065e340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065e340 */

void FUN_18065e340(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x38) & 1) != 0) {
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x6cf0);
  }
  return;
}



