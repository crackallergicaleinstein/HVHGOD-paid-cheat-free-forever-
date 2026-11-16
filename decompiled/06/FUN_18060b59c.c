// FUN_18060b59c - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060b59c */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18060b59c(ulonglong param_1,undefined1 *param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6)

{
  int iVar1;
  undefined1 auStack_508 [32];
  undefined8 local_4e8;
  longlong local_4e0;
  undefined1 *local_4d8;
  longlong local_4d0;
  longlong local_4c8;
  undefined1 local_4c0;
  undefined4 local_4bf;
  undefined2 local_4bb;
  undefined1 local_4b9;
  ulonglong local_4b8;
  longlong local_4b0;
  longlong local_4a8;
  undefined8 local_4a0;
  undefined4 local_498;
  undefined1 local_494;
  undefined8 local_490;
  undefined4 local_488;
  undefined2 local_480;
  undefined4 local_470;
  undefined1 local_46c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 **local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_508;
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (undefined1 *)0x0)))) {
    *(undefined1 *)(param_5 + 0x30) = 1;
    local_4e0 = param_5;
    *(undefined4 *)(param_5 + 0x2c) = 0x16;
    local_4e8 = 0;
    FUN_18060aa1c(0,0,0,0);
  }
  local_4bf = 0;
  local_4bb = 0;
  local_4b9 = 0;
  local_4c8 = 0;
  if (((param_1 & 2) != 0) || (local_4c0 = 0, param_2 == (undefined1 *)0x0)) {
    local_4c0 = 1;
  }
  local_4b0 = param_5;
  local_58 = &local_4d8;
  local_498 = 0;
  local_4a0 = param_6;
  local_494 = 0;
  local_490 = 0;
  local_488 = 0;
  local_480 = 0;
  local_470 = 0;
  local_46c = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  local_4d8 = param_2;
  local_4d0 = param_3;
  local_4b8 = param_1;
  local_4a8 = param_4;
  iVar1 = FUN_18060c994(&local_4b8);
  if (param_2 == (undefined1 *)0x0) goto LAB_18060b701;
  if ((param_1 & 1) == 0) {
    if ((param_1 & 2) == 0) {
      if (param_3 == 0) goto LAB_18060b701;
    }
    else {
      if (param_3 == 0) goto LAB_18060b701;
      if (iVar1 < 0) {
        *param_2 = 0;
        goto LAB_18060b701;
      }
    }
    if (local_4c8 == param_3) {
      param_2[param_3 + -1] = 0;
      goto LAB_18060b701;
    }
  }
  else if (((param_3 == 0) && (iVar1 != 0)) || (local_4c8 == param_3)) goto LAB_18060b701;
  param_2[local_4c8] = 0;
LAB_18060b701:
  FUN_180621380(uStack_60);
}



