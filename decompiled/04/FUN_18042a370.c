// FUN_18042a370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042a370 */

ulonglong FUN_18042a370(longlong param_1,longlong param_2)

{
  if (*(float *)(param_1 + 4) < *(float *)(param_2 + 4)) {
    return 0xffffffff;
  }
  return (ulonglong)(*(float *)(param_2 + 4) < *(float *)(param_1 + 4));
}



