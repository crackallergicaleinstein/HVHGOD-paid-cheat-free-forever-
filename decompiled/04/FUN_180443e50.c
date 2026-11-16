// FUN_180443e50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180443e50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180443e50(undefined4 *param_1,undefined8 param_2,longlong param_3,longlong param_4,
                  undefined4 *param_5)

{
  int iVar1;
  undefined1 auStack_88 [32];
  undefined4 *local_68;
  undefined8 *local_60;
  longlong local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  undefined2 local_3b;
  undefined1 local_39;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_88;
  if ((((param_1 != (undefined4 *)0x0) && (param_5 != (undefined4 *)0x0)) && (param_3 != 0)) &&
     (param_4 != 0)) {
    local_48 = 0;
    local_40 = 0;
    local_3b = 0;
    local_39 = 0;
    local_60 = &local_38;
    local_3c = 0xff;
    local_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    uStack_20 = 0;
    local_68 = param_1;
    local_58 = param_3;
    local_50 = param_4;
    FUN_18063ab10(param_5,0,0x148);
    *param_5 = *param_1;
    *(char *)((longlong)param_5 + 0x15) = '\x10' << ((byte)param_1[1] & 0x1f);
    iVar1 = FUN_1804423e0(&local_68,param_5);
    if ((-1 < iVar1) && (iVar1 = FUN_1804434e0(&local_68,param_5), -1 < iVar1)) {
      param_5[0x3b] = param_5[3];
    }
  }
}



