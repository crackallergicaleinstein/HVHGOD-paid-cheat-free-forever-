// FUN_1802e4b40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802e4b40 */

undefined1 *
FUN_1802e4b40(undefined8 param_1,undefined1 *param_2,uint param_3,uint param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  float local_68 [24];
  
  uVar3 = param_3 >> 8 & 0xff;
  local_68[1] = (float)(int)((param_4 & 0xff) - (param_3 & 0xff)) * param_5 +
                (float)(param_3 & 0xff);
  uVar4 = param_3 >> 0x10 & 0xff;
  local_68[4] = (float)(int)((param_4 >> 8 & 0xff) - uVar3) * param_5 + (float)uVar3;
  local_68[7] = (float)(int)((param_4 >> 0x10 & 0xff) - uVar4) * param_5 + (float)uVar4;
  pfVar2 = local_68;
  if (0.0 <= local_68[1]) {
    pfVar2 = local_68 + 1;
  }
  local_68[2] = 255.0;
  pfVar1 = local_68 + 2;
  if (local_68[1] <= 255.0) {
    pfVar1 = pfVar2;
  }
  local_68[0] = 0.0;
  *param_2 = (char)(int)*pfVar1;
  pfVar2 = local_68 + 3;
  if (0.0 <= local_68[4]) {
    pfVar2 = local_68 + 4;
  }
  pfVar1 = local_68 + 5;
  if (local_68[4] <= 255.0) {
    pfVar1 = pfVar2;
  }
  local_68[5] = 255.0;
  local_68[3] = 0.0;
  local_68[10] = (float)(int)((param_4 >> 0x18) - (param_3 >> 0x18)) * param_5 +
                 (float)(param_3 >> 0x18);
  param_2[1] = (char)(int)*pfVar1;
  local_68[8] = 255.0;
  local_68[6] = 0.0;
  local_68[0xb] = 255.0;
  local_68[9] = 0.0;
  pfVar2 = local_68 + 6;
  if (0.0 <= local_68[7]) {
    pfVar2 = local_68 + 7;
  }
  pfVar1 = local_68 + 8;
  if (local_68[7] <= 255.0) {
    pfVar1 = pfVar2;
  }
  pfVar2 = local_68 + 9;
  if (0.0 <= local_68[10]) {
    pfVar2 = local_68 + 10;
  }
  param_2[2] = (char)(int)*pfVar1;
  pfVar1 = local_68 + 0xb;
  if (local_68[10] <= 255.0) {
    pfVar1 = pfVar2;
  }
  param_2[3] = (char)(int)*pfVar1;
  return param_2;
}



