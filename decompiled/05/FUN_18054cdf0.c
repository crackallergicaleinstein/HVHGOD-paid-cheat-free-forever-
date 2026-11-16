// FUN_18054cdf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18054cdf0 */

ulonglong FUN_18054cdf0(ulonglong param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  
  if ((param_1 < param_2) || (in_RAX = param_2 + 0x2b8, in_RAX <= param_1)) {
    return in_RAX & 0xffffffffffffff00;
  }
  return CONCAT71((int7)(in_RAX >> 8),1);
}



