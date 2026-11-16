// FUN_1806426e5 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806426e5 */

void FUN_1806426e5(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 0x800000) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xff7fffff;
    _eh_vector_destructor_iterator_((void *)(param_2 + 0x330),0x18,4,FUN_1800aab30);
  }
  return;
}



