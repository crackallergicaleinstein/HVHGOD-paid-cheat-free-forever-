// FUN_180185c60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180185c60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180185c60(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined1 local_48 [16];
  undefined *local_38;
  longlong local_30;
  undefined1 local_28 [16];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_68;
  local_28 = (undefined1  [16])0x0;
  local_18 = 0;
  local_48[0] = 0;
  local_38 = &DAT_1807c46f4;
  local_30 = 4;
  cVar1 = FUN_1801857a0(0,&local_38,local_28,local_48);
  if (cVar1 != '\0') {
    local_38 = (undefined *)local_28._0_8_;
    local_30 = local_28._8_8_ - local_28._0_8_;
    FUN_180185ad0(&local_38,param_2);
  }
  FUN_180113710(local_28);
}



