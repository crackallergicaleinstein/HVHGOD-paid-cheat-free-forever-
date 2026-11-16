// FUN_1802d9e40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802d9e40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802d9e40(undefined8 param_1,undefined8 param_2,float param_3,float param_4,float param_5,
                  float param_6,undefined4 param_7,undefined4 param_8)

{
  float fVar1;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 *local_98;
  undefined8 local_90;
  float *local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined4 local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  fVar1 = (param_6 - param_4) * (param_6 - param_4) + (param_5 - param_3) * (param_5 - param_3);
  if (fVar1 < 0.0) {
    fVar1 = (float)FUN_18061e150(fVar1);
  }
  else {
    fVar1 = SQRT(fVar1);
  }
  if (0.001 <= fVar1) {
    local_78 = (undefined1)param_7;
    local_74 = param_7;
    local_60 = (param_3 + param_5) * 0.5;
    local_70 = param_7;
    local_98 = &local_78;
    local_5c = (param_4 + param_6) * 0.5;
    local_88 = &local_68;
    local_77 = (undefined1)((uint)param_7 >> 8);
    local_76 = (undefined1)((uint)param_7 >> 0x10);
    local_a8 = param_8;
    local_75 = 0;
    local_90 = 3;
    local_80 = 6;
    local_68 = param_3;
    local_64 = param_4;
    local_58 = param_5;
    local_54 = param_6;
    FUN_180433bf0(param_2,&local_88,&local_98);
  }
}



