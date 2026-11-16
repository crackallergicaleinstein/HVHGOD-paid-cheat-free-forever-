// FUN_1804d55c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d55c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804d55c0(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  if (*(int *)(param_1 + 0x4c) == 0) {
    FUN_1804d3310();
  }
  else {
    local_90 = ZEXT816(0);
    local_60 = 1;
    local_38 = 0;
    local_30 = 0;
    local_98 = 0;
    local_70 = 0;
    local_68 = 0;
    local_48 = (undefined1  [16])0x0;
    local_80 = (undefined1  [16])0x0;
    local_58 = local_90;
    iVar1 = FUN_1804d4550(0,0,&local_60);
    if (iVar1 != 0) {
      local_70 = FUN_1804b8110((longlong)local_30 * 0xe);
      *param_3 = local_70;
      iVar1 = FUN_1804d4550(param_1,param_2,&local_98);
      if (iVar1 != 0) {
      }
    }
    *param_3 = 0;
  }
}



