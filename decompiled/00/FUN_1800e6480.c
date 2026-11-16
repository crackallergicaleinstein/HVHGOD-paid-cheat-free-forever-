// FUN_1800e6480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e6480 */

undefined1 (*) [16] FUN_1800e6480(undefined1 (*param_1) [16],undefined1 *param_2)

{
  undefined1 uVar1;
  undefined7 uStackX_9;
  
  *param_1 = (undefined1  [16])0x0;
  uVar1 = *param_2;
  FUN_1801409d0(*param_1 + 8,(*param_1)[0]);
  (*param_1)[0] = 4;
  *(ulonglong *)(*param_1 + 8) = CONCAT71(uStackX_9,uVar1);
  return param_1;
}



