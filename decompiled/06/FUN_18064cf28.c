// FUN_18064cf28 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064cf28 */

void FUN_18064cf28(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    thunk_FUN_18015b930(param_2 + 0x40);
  }
  return;
}



