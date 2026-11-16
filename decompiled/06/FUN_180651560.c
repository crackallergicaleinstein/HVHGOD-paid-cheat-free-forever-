// FUN_180651560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180651560 */

void FUN_180651560(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x5c) & 1) != 0) {
    *(uint *)(param_2 + 0x5c) = *(uint *)(param_2 + 0x5c) & 0xfffffffe;
    thunk_FUN_1801b36e0(*(undefined8 *)(param_2 + 0x78));
  }
  return;
}



