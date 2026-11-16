// FUN_1800f3db0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f3db0 */

undefined8 FUN_1800f3db0(undefined1 *param_1)

{
  longlong lVar1;
  
  switch(*param_1) {
  case 0:
    return 1;
  case 1:
    return CONCAT71((int7)((ulonglong)*(longlong *)(param_1 + 8) >> 8),
                    *(longlong *)(*(longlong *)(param_1 + 8) + 8) == 0);
  case 2:
    lVar1 = (*(longlong **)(param_1 + 8))[1];
    return CONCAT71((int7)((ulonglong)lVar1 >> 8),**(longlong **)(param_1 + 8) == lVar1);
  default:
    return 0;
  }
}



