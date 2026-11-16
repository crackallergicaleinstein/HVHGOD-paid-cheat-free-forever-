// FUN_18059e770 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059e770 */

undefined8 FUN_18059e770(longlong param_1,undefined1 *param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x3e0);
  *param_2 = 0;
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x660) != 0xffff)) {
    *param_2 = 1;
  }
  return 0;
}



