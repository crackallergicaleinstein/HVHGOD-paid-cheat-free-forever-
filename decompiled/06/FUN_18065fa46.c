// FUN_18065fa46 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065fa46 */

void FUN_18065fa46(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x50) & 2) != 0) {
    *(uint *)(param_2 + 0x50) = *(uint *)(param_2 + 0x50) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x140);
  }
  return;
}



