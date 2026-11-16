// FUN_18063bb8c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063bb8c */

void FUN_18063bb8c(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    thunk_FUN_18015c010(*(undefined8 *)(param_2 + 0x28));
  }
  return;
}



