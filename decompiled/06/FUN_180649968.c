// FUN_180649968 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180649968 */

void FUN_180649968(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x44) & 2) != 0) {
    *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0xd8);
  }
  return;
}



