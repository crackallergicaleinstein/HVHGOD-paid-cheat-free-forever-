// FUN_18064de56 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064de56 */

void FUN_18064de56(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 0x10) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xffffffef;
    thunk_FUN_18015b930(*(undefined8 *)(param_2 + 0x220));
  }
  return;
}



