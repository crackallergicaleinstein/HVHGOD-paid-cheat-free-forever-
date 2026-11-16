// FUN_1800e7670 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e7670 */

undefined1 (*) [16] FUN_1800e7670(undefined1 (*param_1) [16],float *param_2)

{
  float fVar1;
  
  *param_1 = (undefined1  [16])0x0;
  fVar1 = *param_2;
  FUN_1801409d0(*param_1 + 8,(*param_1)[0]);
  (*param_1)[0] = 7;
  *(double *)(*param_1 + 8) = (double)fVar1;
  return param_1;
}



