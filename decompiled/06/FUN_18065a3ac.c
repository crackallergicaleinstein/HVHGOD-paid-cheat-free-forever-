// FUN_18065a3ac - decompiled reference (Ghidra). Not original source, does not compile.

/* 18065a3ac */

void FUN_18065a3ac(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 2) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x318);
  }
  return;
}



