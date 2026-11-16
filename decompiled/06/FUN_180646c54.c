// FUN_180646c54 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180646c54 */

void FUN_180646c54(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x40) & 1) != 0) {
    *(uint *)(param_2 + 0x40) = *(uint *)(param_2 + 0x40) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x50);
  }
  return;
}



