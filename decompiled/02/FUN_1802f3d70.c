// FUN_1802f3d70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f3d70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802f3d70(undefined8 *param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  short sVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_a8;
  undefined4 local_a4 [3];
  longlong local_98;
  ulonglong local_90;
  longlong local_88;
  ulonglong local_80;
  undefined1 local_78 [16];
  undefined4 *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  local_60 = (undefined1  [16])0x0;
  uVar4 = 0;
  local_50 = 0;
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined4 *)0x0;
  local_60._0_8_ = 0;
  local_78._0_8_ = 0;
  lVar3 = local_60._0_8_;
  lVar5 = local_78._0_8_;
  if (param_3[1] - *param_3 >> 2 != 0) {
    do {
      local_a8 = *(undefined4 *)(*(longlong *)*param_1 + uVar4 * 8);
      local_a4[0] = *(undefined4 *)(*(longlong *)*param_1 + 4 + uVar4 * 8);
      sVar1 = thunk_FUN_180624430();
      if (sVar1 == 2) {
        uVar2 = local_60._8_8_ - lVar3 >> 2;
        if (3 < uVar2) {
          local_90 = local_78._8_8_ - lVar5 >> 2;
          local_b8 = param_4;
          local_98 = lVar5;
          local_88 = lVar3;
          local_80 = uVar2;
          FUN_180433bf0(param_2,&local_88,&local_98);
          lVar3 = local_60._0_8_;
          lVar5 = local_78._0_8_;
        }
        if (lVar3 != local_60._8_8_) {
          local_60._8_8_ = lVar3;
        }
        if (lVar5 != local_78._8_8_) {
          local_78._8_8_ = lVar5;
        }
      }
      else {
        FUN_1802aa650(local_60,&local_a8);
        FUN_1802aa650(local_60,local_a4);
        if ((undefined4 *)local_78._8_8_ == local_68) {
          FUN_1802f4520(local_78);
        }
        else {
          *(undefined4 *)local_78._8_8_ = *(undefined4 *)(*param_3 + uVar4 * 4);
          local_78._8_8_ = (undefined4 *)(local_78._8_8_ + 4);
        }
        lVar3 = local_60._0_8_;
        lVar5 = local_78._0_8_;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulonglong)(param_3[1] - *param_3 >> 2));
  }
  uVar4 = local_60._8_8_ - lVar3 >> 2;
  if (3 < uVar4) {
    local_80 = local_78._8_8_ - lVar5 >> 2;
    local_b8 = param_4;
    local_98 = lVar3;
    local_90 = uVar4;
    local_88 = lVar5;
    FUN_180433bf0(param_2,&local_98,&local_88);
  }
  FUN_180159650(local_78);
  FUN_180159650(local_60);
}



