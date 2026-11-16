// FUN_18064f243 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064f243 */

void FUN_18064f243(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x88) & 2) != 0) {
    *(uint *)(param_2 + 0x88) = *(uint *)(param_2 + 0x88) & 0xfffffffd;
    thunk_FUN_18015c010(param_2 + 0x110);
  }
  return;
}



