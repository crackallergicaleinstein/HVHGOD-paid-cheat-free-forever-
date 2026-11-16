// FUN_180640410 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180640410 */

void FUN_180640410(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 2) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x98);
  }
  return;
}



