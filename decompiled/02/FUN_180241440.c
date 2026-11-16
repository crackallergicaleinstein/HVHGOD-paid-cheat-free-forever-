// FUN_180241440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180241440 */

void FUN_180241440(longlong param_1,float *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float local_38;
  float local_34;
  float local_30;
  undefined1 local_2c [12];
  undefined1 local_20 [24];
  
  if (0.001 < *(float *)(param_1 + 0x58)) {
    FUN_180241590(param_2,param_3,param_1 + 0x30,param_1 + 0x3c,*(float *)(param_1 + 0x58),param_4);
    return;
  }
  uVar1 = FUN_180451010(param_1 + 0x48,local_2c);
  local_38 = *param_2 - *(float *)(param_1 + 0x18);
  local_34 = param_2[1] - *(float *)(param_1 + 0x1c);
  local_30 = param_2[2] - *(float *)(param_1 + 0x20);
  uVar2 = FUN_180451010(local_34,local_20,&local_38);
  FUN_180241ba0(uVar2,uVar1,param_1,param_1 + 0xc,param_4);
  return;
}



