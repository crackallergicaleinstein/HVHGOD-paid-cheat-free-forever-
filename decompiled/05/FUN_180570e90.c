// FUN_180570e90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180570e90 */

ulonglong FUN_180570e90(void)

{
  ulonglong in_RAX;
  
  if ((DAT_180b909b0 == 0) ||
     (in_RAX = *(ulonglong *)(DAT_180b909b0 + 0x30), *(ulonglong *)(DAT_180b909b0 + 0x28) == in_RAX)
     ) {
    return in_RAX & 0xffffffffffffff00;
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}



