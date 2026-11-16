// FUN_180433010 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180433010 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180433010(undefined8 param_1,float param_2,float param_3,float param_4,float param_5,
                  undefined4 param_6,float param_7)

{
  undefined1 auStack_88 [32];
  float local_68;
  float *local_58;
  undefined8 local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  if ((((0.0 < param_4) && (0.0 < param_5)) && ((char)((uint)param_6 >> 0x18) != '\0')) &&
     (0.0 < param_7)) {
    local_40 = param_2 + param_4;
    local_34 = param_3 + param_5;
    local_58 = &local_48;
    local_50 = 8;
    local_68 = param_7;
    local_48 = param_2;
    local_44 = param_3;
    local_3c = param_3;
    local_38 = local_40;
    local_30 = param_2;
    local_2c = local_34;
    FUN_180433590(local_40,&local_58,param_6,1);
  }
}



