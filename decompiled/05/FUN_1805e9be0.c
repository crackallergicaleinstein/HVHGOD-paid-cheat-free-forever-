// FUN_1805e9be0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e9be0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805e9be0(undefined8 param_1,undefined8 param_2,longlong param_3,ulonglong param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  undefined1 auStack_4288 [32];
  undefined1 *local_4268;
  undefined4 local_4258;
  undefined4 local_4254 [3];
  undefined1 local_4248 [16400];
  undefined1 local_238 [512];
  ulonglong local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x1805e9bf1;
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_4288;
  local_4258 = 0xff;
  if ((((1 < param_4) &&
       (local_4268 = (undefined1 *)param_4,
       uVar1 = FUN_1805ea3a0(local_238,&local_4258,local_4254,param_3), uVar1 < 0xffffffffffffff89))
      && (uVar1 < param_4)) &&
     (uVar2 = FUN_1805e99e0(local_4248,local_238,local_4258,local_4254[0]),
     uVar2 < 0xffffffffffffff89)) {
    local_4268 = local_4248;
    FUN_1805e9cc0(param_1,param_2,uVar1 + param_3,param_4 - uVar1);
  }
}



