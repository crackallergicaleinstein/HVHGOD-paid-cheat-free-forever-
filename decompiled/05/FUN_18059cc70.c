// FUN_18059cc70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059cc70 */

undefined2 FUN_18059cc70(longlong param_1,uint param_2)

{
  if (param_2 < 0x100) {
    return *(undefined2 *)(*(longlong *)(param_1 + 0x18) + (ulonglong)param_2 * 2);
  }
  return 0;
}



