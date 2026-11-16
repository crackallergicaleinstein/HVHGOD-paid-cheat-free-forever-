// FUN_18065d68e - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065d68e */

void FUN_18065d68e(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x238) & 0x20) != 0) {
    *(uint *)(param_2 + 0x238) = *(uint *)(param_2 + 0x238) & 0xffffffdf;
    thunk_FUN_18015c010(param_2 + 0x150);
  }
  return;
}



