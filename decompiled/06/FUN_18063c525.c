// FUN_18063c525 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18063c525 */

void FUN_18063c525(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 4) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffb;
    _eh_vector_destructor_iterator_((void *)(param_2 + 0x90),0x18,2,FUN_1800aab30);
  }
  return;
}



