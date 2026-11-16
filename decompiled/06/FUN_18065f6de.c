// FUN_18065f6de - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065f6de */

void FUN_18065f6de(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    thunk_FUN_18015c010(*(undefined8 *)(param_2 + 0x48));
  }
  return;
}



