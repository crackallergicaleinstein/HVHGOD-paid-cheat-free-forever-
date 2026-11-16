// FUN_1805e9740 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e9740 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805e9740(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined1 auStack_4078 [32];
  undefined4 *local_4058;
  undefined4 local_4048;
  undefined1 local_4044 [16396];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x1805e974f;
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_4078;
  local_4048 = 0xc;
  FUN_18063ab10(local_4044,0,0x4000);
  uVar1 = FUN_1805ebd30(&local_4048,param_3,param_4);
  if ((uVar1 < 0xffffffffffffff89) && (uVar1 < param_4)) {
    local_4058 = &local_4048;
    FUN_1805eb2d0(param_1,param_2,uVar1 + param_3,param_4 - uVar1);
  }
}



