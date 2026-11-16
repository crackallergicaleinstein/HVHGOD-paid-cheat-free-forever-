// FUN_1804d4290 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d4290 */

void FUN_1804d4290(longlong param_1,float param_2,float param_3)

{
  if ((*(float *)(param_1 + 8) != *(float *)(param_1 + 0x10)) ||
     (*(float *)(param_1 + 0xc) != *(float *)(param_1 + 0x14))) {
    FUN_1804d4130(param_1,2,(int)*(float *)(param_1 + 8),(int)*(float *)(param_1 + 0xc),0,0,0,0);
  }
  param_2 = param_2 + *(float *)(param_1 + 0x10);
  param_3 = param_3 + *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x10) = param_2;
  *(float *)(param_1 + 8) = param_2;
  *(float *)(param_1 + 0x14) = param_3;
  *(float *)(param_1 + 0xc) = param_3;
  FUN_1804d4130(param_1,1,(int)param_2,(int)param_3,0,0,0,0);
  return;
}



