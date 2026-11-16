// FUN_18065a807 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065a807 */

void FUN_18065a807(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x140) & 2) != 0) {
    *(uint *)(param_2 + 0x140) = *(uint *)(param_2 + 0x140) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x1c0);
  }
  return;
}



