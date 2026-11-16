// FUN_18065d6bd - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065d6bd */

void FUN_18065d6bd(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x238) & 0x40) != 0) {
    *(uint *)(param_2 + 0x238) = *(uint *)(param_2 + 0x238) & 0xffffffbf;
    thunk_FUN_18015c010(param_2 + 0xf0);
  }
  return;
}



