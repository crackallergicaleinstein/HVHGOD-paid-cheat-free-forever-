// FUN_18055c1b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18055c1b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18055c1b0(undefined8 param_1,byte *param_2,undefined8 *param_3)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined1 local_88;
  uint7 uStack_87;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  uint local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  local_18[0] = (uint)*param_2;
  local_a8 = 0;
  uStack_a0 = 0;
  auStack_98 = ZEXT816(0);
  local_88 = 0;
  uStack_80 = 0;
  local_b0 = &local_58;
  local_38 = (ulonglong)uStack_87 << 8;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  auVar1 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  local_28 = auVar1._0_8_;
  local_68 = *param_3;
  uStack_60 = param_3[1];
  uStack_30 = 0;
  local_b8 = &DAT_180829dc4;
  cVar2 = FUN_18048d220("Search Inputs",local_18,&local_68,1);
  if (cVar2 != '\0') {
    *param_2 = (byte)local_18[0];
  }
}



