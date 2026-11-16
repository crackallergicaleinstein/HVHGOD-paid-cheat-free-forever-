// FUN_1801bba90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bba90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801bba90(ulonglong *param_1,ulonglong *param_2)

{
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  ulonglong uStack_80;
  ulonglong uStack_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong uStack_60;
  ulonglong uStack_58;
  ulonglong uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  ulonglong uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  local_88 = *param_1;
  uStack_80 = param_1[1];
  uStack_78 = param_1[2];
  uStack_70 = param_1[3];
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  param_1[2] = 0;
  local_48 = param_1[4];
  uStack_40 = param_1[5];
  uStack_38 = param_1[6];
  uStack_30 = param_1[7];
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[7] = 7;
  local_28 = (undefined4)param_1[8];
  local_24 = *(undefined4 *)((longlong)param_1 + 0x44);
  local_20 = param_1[9];
  local_68 = local_88;
  uStack_60 = uStack_80;
  uStack_58 = uStack_78;
  uStack_50 = uStack_70;
  FUN_1801b9260();
  if (param_2 != &local_68) {
    FUN_18015c010(param_2);
    *param_2 = local_88;
    param_2[1] = uStack_80;
    param_2[2] = uStack_78;
    param_2[3] = uStack_70;
    uStack_58 = 0;
    uStack_50 = 0xf;
    local_68 = local_68 & 0xffffffffffffff00;
  }
  FUN_180176c30(param_2 + 4,&local_48);
  *(undefined4 *)(param_2 + 8) = local_28;
  *(undefined4 *)((longlong)param_2 + 0x44) = local_24;
  param_2[9] = local_20;
  FUN_18015b930(&local_48);
  FUN_18015c010(&local_68);
}



