// FUN_1804e8b00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e8b00 */

ulonglong FUN_1804e8b00(undefined8 param_1,longlong param_2,int param_3)

{
  ulonglong in_RAX;
  
  if ((param_3 < 1) || (in_RAX = *(ulonglong *)(param_2 + 0x90), *(int *)(in_RAX + 0x14) <= param_3)
     ) {
    return in_RAX & 0xffffffffffffff00;
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}



