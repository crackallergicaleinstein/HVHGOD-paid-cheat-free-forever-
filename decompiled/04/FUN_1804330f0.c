// FUN_1804330f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804330f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804330f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,float param_4,
                  float param_5,undefined4 param_6,float *param_7,float param_8)

{
  undefined1 auStack_98 [32];
  float local_78;
  longlong *local_70;
  undefined1 *local_68;
  longlong local_58;
  longlong lStack_50;
  undefined1 local_48 [16];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  if ((((0.0 < param_4) && (0.0 < param_5)) && ((char)((uint)param_6 >> 0x18) != '\0')) &&
     (0.0 < param_8)) {
    if (((0.5 < *param_7) || (0.5 < param_7[1])) || ((0.5 < param_7[2] || (0.5 < param_7[3])))) {
      local_48 = (undefined1  [16])0x0;
      local_38 = 0;
      local_58 = *(longlong *)param_7;
      lStack_50 = *(longlong *)(param_7 + 2);
      local_68 = local_48;
      local_70 = &local_58;
      local_78 = param_5;
      FUN_180435770();
      local_58 = local_48._0_8_;
      lStack_50 = (longlong)(local_48._8_8_ - local_48._0_8_) >> 2;
      local_78 = param_8;
      FUN_180433590(param_1,&local_58,param_6,1);
      FUN_180159650(local_48);
    }
    else {
      local_68 = (undefined1 *)CONCAT44(local_68._4_4_,param_8);
      local_70 = (longlong *)CONCAT44(local_70._4_4_,param_6);
      local_78 = param_5;
      FUN_180433010();
    }
  }
}



