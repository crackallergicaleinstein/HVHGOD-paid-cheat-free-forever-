// FUN_180642235 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180642235 */

void FUN_180642235(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 0x10) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xffffffef;
    _eh_vector_destructor_iterator_((void *)(param_2 + 0x330),0x18,4,FUN_1800aab30);
  }
  return;
}



