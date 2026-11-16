// FUN_1805efd50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805efd50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805efd50(undefined4 *param_1,int param_2,undefined8 param_3,uint param_4,byte *param_5,
                  longlong param_6,undefined8 param_7,undefined4 param_8)

{
  ulonglong uVar1;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  uint local_98 [2];
  uint local_90 [2];
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  local_98[0] = (uint)param_3;
  if (param_2 == 0) {
    FUN_1805edfd0(param_1,param_7,param_3,param_8);
  }
  else if (param_2 == 1) {
    if ((param_6 != 0) && (*param_5 <= local_98[0])) {
      *(byte *)((longlong)param_1 + 6) = *param_5;
      *param_1 = 0;
      *(undefined2 *)(param_1 + 1) = 0;
      *(undefined1 *)((longlong)param_1 + 7) = 0;
    }
  }
  else if (param_2 != 2) {
    local_a8 = param_6;
    uVar1 = FUN_1805ea3a0(local_88,local_98,local_90,param_5);
    if ((uVar1 < 0xffffffffffffff89) && (local_90[0] <= param_4)) {
      FUN_1805edfd0(param_1,local_88,local_98[0]);
    }
  }
}



