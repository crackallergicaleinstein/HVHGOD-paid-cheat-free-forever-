// FUN_18063c939 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063c939 */

void FUN_18063c939(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xb0) & 2) != 0) {
    *(uint *)(param_2 + 0xb0) = *(uint *)(param_2 + 0xb0) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x1b0);
  }
  return;
}



