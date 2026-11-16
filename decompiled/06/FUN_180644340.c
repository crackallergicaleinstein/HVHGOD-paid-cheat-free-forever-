// FUN_180644340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180644340 */

void FUN_180644340(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x20) & 2) != 0) {
    *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) & 0xfffffffd;
    _eh_vector_destructor_iterator_((void *)(param_2 + 0x40),0x18,1,FUN_1800aab30);
  }
  return;
}



