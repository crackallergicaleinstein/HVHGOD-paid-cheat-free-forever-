// FUN_1806572eb - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806572eb */

void FUN_1806572eb(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xd4) & 2) != 0) {
    *(uint *)(param_2 + 0xd4) = *(uint *)(param_2 + 0xd4) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x180);
  }
  return;
}



