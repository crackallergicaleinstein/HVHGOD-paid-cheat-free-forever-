// FUN_18064247f - decompiled reference (Ghidra). Not original source, does not compile.

/* 18064247f */

void FUN_18064247f(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x54) & 0x800) != 0) {
    *(uint *)(param_2 + 0x54) = *(uint *)(param_2 + 0x54) & 0xfffff7ff;
    _eh_vector_destructor_iterator_((void *)(param_2 + 0x330),0x18,4,FUN_1800aab30);
  }
  return;
}



