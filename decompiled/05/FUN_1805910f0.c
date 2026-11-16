// FUN_1805910f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805910f0 */

void FUN_1805910f0(longlong param_1,uint param_2,undefined4 param_3)

{
  FUN_18058c4a0();
  if (*(int *)(param_1 + 0x20) == 0) {
    *(undefined4 *)(*(longlong *)(param_1 + 0x200) + (ulonglong)param_2 * 4) = param_3;
  }
  return;
}



