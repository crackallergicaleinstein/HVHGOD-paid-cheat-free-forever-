// FUN_1803866b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803866b0 */

float * FUN_1803866b0(longlong param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  
  fVar1 = (float)FUN_180639470(*(float *)(param_1 + 0x28) * 0.008726646);
  param_3 = param_3 - *(float *)(param_1 + 0x18);
  param_4 = param_4 - *(float *)(param_1 + 0x1c);
  fVar2 = (-((param_3 + param_3) / *(float *)(param_1 + 0x20) - 1.0) * fVar1 *
          *(float *)(param_1 + 0x20)) / *(float *)(param_1 + 0x24);
  fVar1 = (1.0 - (param_4 + param_4) / *(float *)(param_1 + 0x24)) * fVar1;
  FUN_180386560(param_1 + 0x2c,&local_78);
  *param_2 = fVar2 * local_6c + local_78 + fVar1 * local_60;
  param_2[1] = fVar2 * local_68 + local_74 + fVar1 * local_5c;
  param_2[2] = fVar2 * local_64 + local_70 + fVar1 * local_58;
  return param_2;
}



