// FUN_1805b41a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b41a0 */

undefined2 FUN_1805b41a0(longlong param_1,uint param_2)

{
  if ((param_2 < *(uint *)(param_1 + 0x18)) ||
     (*(uint *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c) <= param_2)) {
    return 0;
  }
  return *(undefined2 *)(*(longlong *)(param_1 + 0x20) + (ulonglong)param_2 * 2);
}



