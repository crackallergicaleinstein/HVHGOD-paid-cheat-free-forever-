// FUN_18065d87c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065d87c */

void FUN_18065d87c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x250);
  }
  return;
}



