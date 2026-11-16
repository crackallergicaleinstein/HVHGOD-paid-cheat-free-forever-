// FUN_18064db04 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064db04 */

void FUN_18064db04(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x70) & 1) != 0) {
    *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x168);
  }
  return;
}



