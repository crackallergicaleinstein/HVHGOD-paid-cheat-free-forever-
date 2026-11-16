// FUN_18045f920 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045f920 */

void FUN_18045f920(undefined8 param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined8 local_18;
  longlong local_10;
  
  if ((DAT_180c62c80 != 0) && (DAT_180c62c88 != 0)) {
    local_28 = *(float *)(DAT_180bb8ae8 + 0x30);
    local_24 = *(float *)(DAT_180bb8ae8 + 0x34);
    if ((0.0 < local_28) && (0.0 < local_24)) {
      local_20 = *param_2 / local_28;
      local_1c = param_2[1] / local_24;
      local_10 = DAT_180c62c88;
      local_28 = *param_3 / local_28;
      local_24 = param_3[1] / local_24;
      local_18 = 0;
      FUN_1804e0440(param_3[1],&local_18,param_2,param_3,&local_20,&local_28,0xffffffff,param_4);
    }
  }
  return;
}



