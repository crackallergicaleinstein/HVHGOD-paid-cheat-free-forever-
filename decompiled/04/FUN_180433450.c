// FUN_180433450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180433450 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180433450(undefined8 param_1,float param_2,float param_3,float param_4,float param_5,
                  undefined4 param_6,float param_7)

{
  float fVar1;
  undefined1 auStack_b8 [32];
  float local_98;
  float *local_88;
  undefined8 local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  if (((char)((uint)param_6 >> 0x18) != '\0') && (0.0 < param_7)) {
    fVar1 = (param_5 - param_3) * (param_5 - param_3) + (param_4 - param_2) * (param_4 - param_2);
    if (fVar1 < 0.0) {
      fVar1 = (float)FUN_18061e150(fVar1);
    }
    else {
      fVar1 = SQRT(fVar1);
    }
    if (0.0001 <= fVar1) {
      local_88 = &local_78;
      local_80 = 4;
      local_98 = param_7;
      local_78 = param_2;
      local_74 = param_3;
      local_70 = param_4;
      local_6c = param_5;
      FUN_180433590(param_1,&local_88,param_6,0);
    }
  }
}



