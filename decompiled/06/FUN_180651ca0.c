// FUN_180651ca0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180651ca0 */

void FUN_180651ca0(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x38) & 1) != 0) {
    *(uint *)(param_2 + 0x38) = *(uint *)(param_2 + 0x38) & 0xfffffffe;
    FUN_18018f700(*(undefined8 *)(param_2 + 0x90));
  }
  return;
}



