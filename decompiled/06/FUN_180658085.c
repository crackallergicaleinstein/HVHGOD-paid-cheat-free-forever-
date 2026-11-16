// FUN_180658085 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180658085 */

void FUN_180658085(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x78) & 2) != 0) {
    *(uint *)(param_2 + 0x78) = *(uint *)(param_2 + 0x78) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x730);
  }
  return;
}



