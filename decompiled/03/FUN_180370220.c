// FUN_180370220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180370220 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180370220(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  ulonglong uStack_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  ulonglong uStack_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  ulonglong local_38;
  ulonglong uStack_30;
  ulonglong uStack_28;
  ulonglong uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  local_98 = *param_1;
  uStack_90 = param_1[1];
  uStack_88 = param_1[2];
  uStack_80 = param_1[3];
  param_1[3] = 0xf;
  *(undefined1 *)param_1 = 0;
  param_1[2] = 0;
  local_78 = param_1[4];
  uStack_70 = param_1[5];
  uStack_68 = param_1[6];
  uStack_60 = param_1[7];
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  param_1[7] = 0xf;
  local_58 = local_98;
  uStack_50 = uStack_90;
  uStack_48 = uStack_88;
  uStack_40 = uStack_80;
  local_38 = local_78;
  uStack_30 = uStack_70;
  uStack_28 = uStack_68;
  uStack_20 = uStack_60;
  FUN_18036fee0();
  if (param_2 != &local_58) {
    FUN_18015c010(param_2);
    *param_2 = local_98;
    param_2[1] = uStack_90;
    param_2[2] = uStack_88;
    param_2[3] = uStack_80;
    uStack_48 = 0;
    uStack_40 = 0xf;
    local_58 = local_58 & 0xffffffffffffff00;
  }
  puVar1 = param_2 + 4;
  if (puVar1 != &local_38) {
    FUN_18015c010(puVar1);
    *puVar1 = local_78;
    param_2[5] = uStack_70;
    param_2[6] = uStack_68;
    param_2[7] = uStack_60;
    uStack_28 = 0;
    uStack_20 = 0xf;
    local_38 = local_38 & 0xffffffffffffff00;
  }
  FUN_18015c010(&local_38);
  FUN_18015c010(&local_58);
}



