// FUN_1805b0800 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b0800 */

ulonglong FUN_1805b0800(longlong param_1,longlong param_2)

{
  if (*(uint *)(param_1 + 8) < *(uint *)(param_2 + 8)) {
    return 0xffffffff;
  }
  return (ulonglong)(*(uint *)(param_2 + 8) < *(uint *)(param_1 + 8));
}



