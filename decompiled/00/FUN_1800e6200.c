// FUN_1800e6200 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e6200 */

undefined1 (*) [16] FUN_1800e6200(undefined1 (*param_1) [16],int *param_2)

{
  int iVar1;
  
  *param_1 = (undefined1  [16])0x0;
  iVar1 = *param_2;
  FUN_1801409d0(*param_1 + 8,(*param_1)[0]);
  (*param_1)[0] = 5;
  *(longlong *)(*param_1 + 8) = (longlong)iVar1;
  return param_1;
}



