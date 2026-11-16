// FUN_180517040 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180517040 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180517040(longlong param_1,int *param_2,int param_3,int param_4,undefined8 param_5)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined1 local_50;
  longlong local_48;
  longlong local_40;
  float local_38 [2];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  local_38[0] = (float)*param_2;
  local_40 = -1;
  do {
    local_40 = local_40 + 1;
  } while (*(char *)(param_1 + local_40) != '\0');
  local_48 = param_1;
  local_60 = FUN_180515fb0(&local_48);
  local_50 = 0;
  local_68 = 1;
  local_70 = 0x3f800000;
  auVar3._0_4_ = (float)param_4;
  auVar3._4_12_ = SUB1612(ZEXT816(0),4);
  auVar2._0_4_ = (float)param_3;
  auVar2._4_12_ = SUB1612(ZEXT816(0),4);
  local_78 = param_5;
  cVar1 = FUN_18048a250(param_1,local_38,auVar2._0_8_,auVar3._0_8_);
  if (cVar1 != '\0') {
    auVar3 = vroundps_avx(ZEXT416((uint)ABS(local_38[0])),0);
    auVar2 = vcmpss_avx(ZEXT416((uint)(ABS(local_38[0]) - auVar3._0_4_)),ZEXT416(0x3f000000),0);
    *param_2 = (int)(float)((uint)((float)(auVar2._0_4_ & 0x3f800000) + auVar3._0_4_) |
                           (uint)local_38[0] & 0x80000000);
    FUN_18050cd00();
  }
}



