// FUN_1804d7e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d7e00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804d7e00(undefined8 param_1,undefined8 param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                  int param_10,int param_11,float *param_12,float *param_13,undefined4 param_14)

{
  int *piVar1;
  longlong lVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_128 [32];
  int local_108;
  undefined4 local_100;
  undefined4 *local_f8;
  undefined4 *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_c8;
  undefined4 local_c4;
  float *local_c0;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_128;
  local_c0 = param_12;
  uVar3 = FUN_1804d55c0(param_1,param_14,&local_a0);
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = &local_c8;
  local_f8 = &local_c4;
  local_100 = param_9;
  local_108 = param_8;
  FUN_1804d56b0(param_1,param_14,param_6,param_7);
  local_b8 = (param_3 - param_10) + 1;
  local_b4 = (param_4 - param_11) + 1;
  local_b0 = param_5;
  local_a8 = param_2;
  if ((local_b8 != 0) && (local_b4 != 0)) {
    local_e0 = CONCAT44(local_e0._4_4_,local_c8);
    local_e8 = CONCAT44(local_e8._4_4_,local_c4);
    local_f0 = (undefined4 *)CONCAT44(local_f0._4_4_,param_9);
    local_f8 = (undefined4 *)CONCAT44(local_f8._4_4_,param_8);
    local_108 = param_6;
    local_100 = param_7;
    FUN_1804d76d0(&local_b8,0x3eb33333,local_a0,uVar3);
  }
  lVar2 = DAT_180bb8ae8;
  if ((local_a0 != 0) && (DAT_180bb8ae8 != 0)) {
    piVar1 = (int *)(DAT_180bb8ae8 + 4);
    piVar6 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
    if (*piVar6 != *piVar1) {
      iVar5 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
      sVar4 = (short)iVar5 + (short)(iVar5 / 6) * -6;
      *(short *)(DAT_180bb8ae8 + 0x2994) = sVar4;
      piVar6 = (int *)(lVar2 + ((longlong)sVar4 + 0x533) * 8);
      *piVar6 = *piVar1;
      piVar6[1] = 0;
    }
    *(short *)((longlong)piVar6 + 6) = *(short *)((longlong)piVar6 + 6) + 1;
    piVar1 = (int *)(lVar2 + 0x2990);
    *piVar1 = *piVar1 + 1;
  }
  thunk_FUN_180621380(local_a0);
  if (1 < param_10) {
    local_108 = param_10;
    FUN_1804d78b0(param_2,param_3,param_4,param_5);
  }
  if (1 < param_11) {
    local_108 = param_11;
    FUN_1804d7b60(param_2,param_3,param_4,param_5);
  }
  fVar8 = 0.0;
  fVar7 = 0.0;
  if (param_10 != 0) {
    fVar7 = (float)(1 - param_10) / ((float)param_10 + (float)param_10);
  }
  *local_c0 = fVar7;
  if (param_11 != 0) {
    fVar8 = (float)(1 - param_11) / ((float)param_11 + (float)param_11);
  }
  *param_13 = fVar8;
}



