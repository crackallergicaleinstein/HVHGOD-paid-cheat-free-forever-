// FUN_1804dcf10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804dcf10 */

void FUN_1804dcf10(longlong param_1,float *param_2,float *param_3,uint param_4,undefined4 param_5)

{
  uint uVar1;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  
  if ((param_4 & 0xff000000) != 0) {
    uVar1 = *(uint *)(param_1 + 0x30);
    if (((uVar1 & 0xe0000) != 0) && ((uVar1 & 0xe0000) == 0xe0000)) {
      local_18 = *param_3 + 0.5;
      local_10 = *param_2 + 0.5;
      local_14 = param_3[1] + 0.5;
      local_c = param_2[1] + 0.5;
      FUN_1804dc7e0(local_c,&local_10,&local_18,0x3f000000,param_5,uVar1);
      return;
    }
    FUN_1804dc7e0(param_5,param_2,param_3,param_4,param_5,uVar1);
  }
  return;
}



