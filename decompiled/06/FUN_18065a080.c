// FUN_18065a080 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065a080 */

void FUN_18065a080(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x4d0) & 1) != 0) {
    *(uint *)(param_2 + 0x4d0) = *(uint *)(param_2 + 0x4d0) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x80);
  }
  return;
}



