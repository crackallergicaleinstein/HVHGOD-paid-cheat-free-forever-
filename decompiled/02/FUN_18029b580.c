// FUN_18029b580 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029b580 */

undefined8 * FUN_18029b580(undefined8 *param_1,longlong param_2,float param_3)

{
  float fVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  float *pfVar4;
  float *pfVar5;
  float local_res8 [2];
  float local_res10 [2];
  float local_res18 [4];
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  
  local_res18[0] = param_3;
  if (*(char *)(param_2 + 0x40) == '\0') {
    uVar2 = *(undefined8 *)(param_2 + 0xc);
    uVar3 = *(undefined8 *)(param_2 + 0x14);
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    return param_1;
  }
  local_res10[0] = 1.0;
  local_res8[0] = 0.0;
  pfVar5 = local_res8;
  if (0.0 <= param_3) {
    pfVar5 = local_res18;
  }
  pfVar4 = local_res10;
  if (param_3 <= 1.0) {
    pfVar4 = pfVar5;
  }
  pfVar5 = (float *)(param_2 + 0x44);
  fVar1 = *pfVar4;
  local_48 = (*(float *)(param_2 + 0xc) - *pfVar5) * fVar1 + *pfVar5;
  fStack_44 = (*(float *)(param_2 + 0x10) - *(float *)(param_2 + 0x48)) * fVar1 +
              *(float *)(param_2 + 0x48);
  fStack_40 = (*(float *)(param_2 + 0x14) - *(float *)(param_2 + 0x4c)) * fVar1 +
              *(float *)(param_2 + 0x4c);
  fStack_3c = (*(float *)(param_2 + 0x18) - *(float *)(param_2 + 0x50)) * fVar1 +
              *(float *)(param_2 + 0x50);
  pfVar4 = &local_48;
  if (*(char *)(param_2 + 0x40) == '\x02') {
    pfVar4 = pfVar5;
  }
  uVar2 = *(undefined8 *)(pfVar4 + 2);
  *param_1 = *(undefined8 *)pfVar4;
  param_1[1] = uVar2;
  *(float *)(param_1 + 2) = local_48;
  *(float *)((longlong)param_1 + 0x14) = fStack_44;
  *(float *)(param_1 + 3) = fStack_40;
  *(float *)((longlong)param_1 + 0x1c) = fStack_3c;
  return param_1;
}



