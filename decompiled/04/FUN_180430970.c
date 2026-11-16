// FUN_180430970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180430970 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180430970(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  float param_5,undefined4 param_6,float *param_7)

{
  undefined1 auStack_88 [32];
  float local_68;
  longlong *local_60;
  undefined1 *local_58;
  longlong local_48;
  longlong lStack_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  if (((0.0 < param_4) && (0.0 < param_5)) && ((char)((uint)param_6 >> 0x18) != '\0')) {
    if (((0.5 < *param_7) || (0.5 < param_7[1])) || ((0.5 < param_7[2] || (0.5 < param_7[3])))) {
      local_38 = (undefined1  [16])0x0;
      local_28 = 0;
      local_48 = *(longlong *)param_7;
      lStack_40 = *(longlong *)(param_7 + 2);
      local_58 = local_38;
      local_60 = &local_48;
      local_68 = param_5;
      FUN_180435770();
      local_48 = local_38._0_8_;
      lStack_40 = (longlong)(local_38._8_8_ - local_38._0_8_) >> 2;
      FUN_180432700(param_1,&local_48,param_6);
      FUN_180159650(local_38);
    }
    else {
      local_60 = (longlong *)CONCAT44(local_60._4_4_,param_6);
      local_68 = param_5;
      FUN_1804307e0();
    }
  }
}



