// FUN_18065da25 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065da25 */

void FUN_18065da25(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 0x200) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffdff;
    thunk_FUN_18015c010(param_2 + 0x1a8);
  }
  return;
}



