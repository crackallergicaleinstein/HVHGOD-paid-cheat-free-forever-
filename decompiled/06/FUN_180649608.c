// FUN_180649608 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180649608 */

void FUN_180649608(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 1) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffe;
    thunk_FUN_18015b930(param_2 + 0x50);
  }
  return;
}



