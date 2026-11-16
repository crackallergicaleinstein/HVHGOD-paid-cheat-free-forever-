// FUN_1801d0060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801d0060 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801d0060(undefined8 *param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 in_RDX;
  undefined1 auVar5 [64];
  float fVar6;
  undefined1 auStack_c8 [32];
  undefined1 **local_a8;
  undefined4 local_a0;
  undefined1 local_98;
  undefined1 *local_88;
  undefined8 local_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  ulonglong local_60;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  pauVar2 = (undefined1 (*) [16])FUN_18043b290(&local_88,in_RDX,param_4,0);
  fVar6 = (float)param_4;
  auVar5 = ZEXT1664(*pauVar2);
  local_78 = (undefined1  [16])0x0;
  local_68 = 0;
  local_60 = 0;
  FUN_18015ba30(local_78,*param_1,param_1[1]);
  local_80 = local_68;
  local_88 = local_78;
  if (0xf < local_60) {
    local_88 = (undefined1 *)local_78._0_8_;
  }
  lVar3 = FUN_180439770();
  if (*(longlong *)(lVar3 + 0x4a8) == *(longlong *)(lVar3 + 0x4b0)) {
    puVar4 = &DAT_180bbac80;
  }
  else {
    puVar4 = &DAT_180bbabe8 + (longlong)*(int *)(*(longlong *)(lVar3 + 0x4b0) + -4) * 0x13;
  }
  local_98 = 30.0 < fVar6;
  local_a8 = &local_88;
  auVar1 = vshufps_avx(auVar5._0_16_,auVar5._0_16_,0x55);
  local_a0 = param_3;
  FUN_1801cd9d0(puVar4,auVar5._0_8_,auVar1._0_8_,param_2);
  FUN_18015c010(local_78);
}



