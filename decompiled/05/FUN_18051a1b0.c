// FUN_18051a1b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18051a1b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18051a1b0(undefined8 *param_1,undefined8 param_2,byte param_3,int *param_4,
                  undefined1 param_5)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int *piVar4;
  int *piVar5;
  char *pcVar6;
  float fVar7;
  undefined1 auStack_b8 [32];
  float local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined4 local_78;
  undefined8 local_68;
  byte *local_60;
  int *local_58;
  int *local_50;
  int *local_48;
  undefined1 *local_40;
  int local_38 [2];
  byte local_30 [8];
  int local_28;
  float local_24;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  local_28 = 0;
  local_30[0] = param_3;
  local_38[0] = (param_3 ^ 1) + 100;
  iVar1 = *param_4;
  piVar5 = &local_28;
  if (-1 < iVar1) {
    piVar5 = param_4;
  }
  piVar4 = local_38;
  if (iVar1 <= local_38[0]) {
    piVar4 = piVar5;
  }
  fVar7 = (float)*piVar4;
  local_68 = *param_1;
  local_60 = local_30;
  local_50 = &local_28;
  local_48 = local_38;
  local_40 = &param_5;
  if (param_3 == 0) {
    local_90 = "%.0f";
    if (iVar1 == 0x65) {
      local_90 = "FL";
    }
  }
  else {
    local_90 = "%.0f%%";
  }
  local_78 = 0x43af0000;
  local_98 = (float)local_38[0];
  pcVar6 = "Min Damage";
  if (param_3 != 0) {
    pcVar6 = "Hit Chance";
  }
  local_80 = &local_68;
  local_88 = 0x3f800000;
  local_58 = param_4;
  local_24 = fVar7;
  FUN_18054f450(param_2,pcVar6,&local_24,0);
  if (local_24 != fVar7) {
    auVar3 = vroundps_avx(ZEXT416((uint)ABS(local_24)),0);
    auVar2 = vcmpss_avx(ZEXT416((uint)(ABS(local_24) - auVar3._0_4_)),ZEXT416(0x3f000000),0);
    *param_4 = (int)(float)((uint)((float)(auVar2._0_4_ & 0x3f800000) + auVar3._0_4_) |
                           (uint)local_24 & 0x80000000);
    FUN_18050cd00();
  }
}



