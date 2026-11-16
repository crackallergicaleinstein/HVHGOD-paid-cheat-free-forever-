// FUN_1801dc140 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801dc140 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801dc140(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  char cVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined1 local_18 [8];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  cVar1 = *(char *)(param_4 + 1);
  local_18[0] = (undefined1)param_3;
  if ((cVar1 == '\0') || (cVar1 == 'c')) {
    if (cVar1 != '?') {
      local_58 = local_18;
      uStack_50 = 1;
      FUN_1801dd2d0(param_1,param_2,&local_58);
    }
  }
  else if (cVar1 != '?') {
    local_48 = *(undefined4 *)(param_4 + 2);
    local_58 = (undefined1 *)*param_4;
    uStack_50 = param_4[1];
    local_68 = param_5;
    FUN_1801dd790(param_1,param_2,param_3,&local_58);
  }
  local_28 = *(undefined4 *)(param_4 + 2);
  local_38 = *param_4;
  uStack_30 = param_4[1];
  local_58 = local_18;
  uStack_50 = 1;
  local_68 = CONCAT71(local_68._1_7_,0x27);
  FUN_1801df130(local_38,param_2,&local_58,&local_38);
}



