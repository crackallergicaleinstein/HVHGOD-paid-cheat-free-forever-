// FUN_1806425b2 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806425b2 */

void FUN_1806425b2(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 0x20000) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xfffdffff;
    _eh_vector_destructor_iterator_((void *)(param_2 + 0x330),0x18,4,FUN_1800aab30);
  }
  return;
}



