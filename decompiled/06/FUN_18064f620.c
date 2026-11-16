// FUN_18064f620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064f620 */

void FUN_18064f620(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0xa4) & 1) != 0) {
    *(uint *)(param_2 + 0xa4) = *(uint *)(param_2 + 0xa4) & 0xfffffffe;
    thunk_FUN_18015c010(param_2 + 0x1a0);
  }
  return;
}



