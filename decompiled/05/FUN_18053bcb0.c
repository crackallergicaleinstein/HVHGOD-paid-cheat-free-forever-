// FUN_18053bcb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053bcb0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18053bcb0(undefined8 param_1,int *param_2,int param_3,int param_4,undefined8 param_5)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auStack_68 [32];
  undefined *local_48;
  undefined4 local_40;
  undefined1 local_38;
  undefined8 local_30;
  undefined1 local_20;
  float local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  local_20 = 0;
  local_30 = param_5;
  local_18[0] = (float)*param_2;
  local_38 = 1;
  local_40 = 0x3f800000;
  auVar3._0_4_ = (float)param_4;
  auVar3._4_12_ = SUB1612(ZEXT816(0),4);
  auVar2._0_4_ = (float)param_3;
  auVar2._4_12_ = SUB1612(ZEXT816(0),4);
  local_48 = &DAT_180829c34;
  cVar1 = FUN_18048a250(0x3f800000,local_18,auVar2._0_8_,auVar3._0_8_);
  if (cVar1 != '\0') {
    auVar3 = vroundps_avx(ZEXT416((uint)ABS(local_18[0])),0);
    auVar2 = vcmpss_avx(ZEXT416((uint)(ABS(local_18[0]) - auVar3._0_4_)),ZEXT416(0x3f000000),0);
    *param_2 = (int)(float)((uint)((float)(auVar2._0_4_ & 0x3f800000) + auVar3._0_4_) |
                           (uint)local_18[0] & 0x80000000);
  }
}



