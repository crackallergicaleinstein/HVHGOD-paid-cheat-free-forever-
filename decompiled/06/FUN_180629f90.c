// FUN_180629f90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180629f90 */

ulonglong FUN_180629f90(ulonglong param_1,ulonglong param_2)

{
  if (param_1 < param_2) {
    return 0xffffffff;
  }
  return (ulonglong)(param_2 < param_1);
}



