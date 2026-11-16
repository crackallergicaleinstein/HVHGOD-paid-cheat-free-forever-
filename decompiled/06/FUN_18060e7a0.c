// FUN_18060e7a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060e7a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18060e7a0(ulonglong param_1,undefined1 *param_2,ulonglong param_3,longlong param_4,
                  undefined4 *param_5,undefined8 param_6)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_548 [32];
  undefined8 local_528;
  longlong *local_520;
  undefined1 *local_518;
  ulonglong local_510;
  ulonglong local_508;
  undefined1 local_500;
  undefined4 local_4ff;
  undefined2 local_4fb;
  undefined1 local_4f9;
  longlong local_4f8 [2];
  undefined1 local_4e8;
  undefined4 local_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  char local_4d0;
  undefined4 local_4cc;
  char local_4c8;
  undefined4 local_4c4;
  char local_4c0;
  ulonglong local_4b8;
  longlong *local_4b0;
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
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_548;
  local_4f8[0] = 0;
  local_4e8 = 0;
  local_4d0 = '\0';
  local_4c8 = '\0';
  local_4c0 = '\0';
  if (param_5 == (undefined4 *)0x0) {
    if (DAT_180bb2030 == 0) {
      local_4e0 = PTR_PTR_1808d7448._0_4_;
      uStack_4dc = PTR_PTR_1808d7448._4_4_;
      uStack_4d8 = PTR_DAT_1808d7450._0_4_;
      uStack_4d4 = PTR_DAT_1808d7450._4_4_;
      goto LAB_18060e80f;
    }
  }
  else {
    local_4e0 = *param_5;
    uStack_4dc = param_5[1];
    uStack_4d8 = param_5[2];
    uStack_4d4 = param_5[3];
LAB_18060e80f:
    local_4d0 = '\x01';
  }
  if ((param_4 == 0) || ((param_3 != 0 && (param_2 == (undefined1 *)0x0)))) {
    local_520 = local_4f8;
    local_4c8 = '\x01';
    local_528 = 0;
    local_4cc = 0x16;
    FUN_18060aa1c(0,0,0,0);
    goto LAB_18060e98e;
  }
  local_4ff = 0;
  local_4fb = 0;
  local_4f9 = 0;
  local_508 = 0;
  if (((param_1 & 2) != 0) || (local_500 = 0, param_2 == (undefined1 *)0x0)) {
    local_500 = 1;
  }
  local_4b0 = local_4f8;
  local_498 = 0;
  local_58 = &local_518;
  local_494 = 0;
  local_4a0 = param_6;
  local_490 = 0;
  local_488 = 0;
  local_480 = 0;
  local_470 = 0;
  local_46c = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_50 = 0;
  local_518 = param_2;
  local_510 = param_3;
  local_4b8 = param_1;
  local_4a8 = param_4;
  iVar2 = FUN_18060ccfc(&local_4b8);
  if (param_2 == (undefined1 *)0x0) {
LAB_18060e982:
    FUN_180621380(uStack_60);
  }
  else {
    if ((param_1 & 1) == 0) {
      if ((param_1 & 2) != 0) {
        if (param_3 != 0) {
          if (iVar2 < 0) {
            *param_2 = 0;
          }
          else {
            if (local_508 != param_3) goto LAB_18060e97e;
            param_2[param_3 - 1] = 0;
          }
        }
        goto LAB_18060e982;
      }
      if (param_3 != 0) {
        if (local_508 == param_3) {
          param_2[param_3 - 1] = 0;
          FUN_180621380(uStack_60);
          goto LAB_18060e98e;
        }
        goto LAB_18060e97e;
      }
    }
    else if ((param_3 != 0) || (iVar2 == 0)) {
      if (local_508 != param_3) {
LAB_18060e97e:
        param_2[local_508] = 0;
        goto LAB_18060e982;
      }
      if ((iVar2 < 0) || ((ulonglong)(longlong)iVar2 <= param_3)) goto LAB_18060e982;
    }
    FUN_180621380(uStack_60);
  }
LAB_18060e98e:
  uVar1 = local_4cc;
  if (local_4d0 == '\x02') {
    *(uint *)(local_4f8[0] + 0x3a8) = *(uint *)(local_4f8[0] + 0x3a8) & 0xfffffffd;
  }
  if (local_4c8 != '\0') {
    lVar3 = FUN_18060a6e8(local_4f8);
    *(undefined4 *)(lVar3 + 0x20) = uVar1;
  }
  if (local_4c0 != '\0') {
    lVar3 = FUN_18060a6e8(local_4f8);
    *(undefined4 *)(lVar3 + 0x24) = local_4c4;
  }
}



