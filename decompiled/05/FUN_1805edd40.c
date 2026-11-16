// FUN_1805edd40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805edd40 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805edd40(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  undefined1 auStack_2078 [32];
  undefined2 *local_2058;
  undefined2 local_2048;
  undefined1 local_2046 [8206];
  ulonglong local_38;
  undefined8 uStack_28;
  
  uStack_28 = 0x1805edd4f;
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_2078;
  local_2048 = 0xc;
  FUN_18063ab10(local_2046,0,0x2000);
  uVar1 = FUN_1805ef670(&local_2048,param_3,param_4);
  if ((uVar1 < 0xffffffffffffff89) && (uVar1 < param_4)) {
    local_2058 = &local_2048;
    FUN_1805eeb00(param_1,param_2,uVar1 + param_3,param_4 - uVar1);
  }
}



