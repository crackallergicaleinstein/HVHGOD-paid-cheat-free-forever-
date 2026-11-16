// FUN_18064f789 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064f789 */

void FUN_18064f789(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x38) & 2) != 0) {
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x150);
  }
  return;
}



