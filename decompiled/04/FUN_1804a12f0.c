// FUN_1804a12f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a12f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804a12f0(longlong param_1)

{
  char cVar1;
  undefined1 auVar2 [16];
  char *pcVar3;
  undefined1 auStack_d8 [32];
  undefined *local_b8;
  undefined8 *local_b0;
  undefined **local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 local_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  int local_18 [2];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  pcVar3 = (char *)(param_1 + 0x6cb4);
  local_18[0] = 0;
  if (pcVar3 != (char *)(param_1 + 0x6cc4)) {
    local_18[0] = 0;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      local_18[0] = local_18[0] + (uint)(cVar1 != '\0');
    } while (pcVar3 != (char *)(param_1 + 0x6cc4));
  }
  local_a8 = (undefined **)local_18;
  local_a0 = param_1;
  FUN_180488c60();
  FUN_1804a1490(&local_a8);
  FUN_180488f10();
  FUN_180488c60();
  local_b0 = (undefined8 *)0x0;
  local_b8 = (undefined *)((ulonglong)local_b8 & 0xffffffffffffff00);
  FUN_1804898a0("Background",param_1 + 0x6cc9,&DAT_180829a3c,1);
  local_b0 = (undefined8 *)0x0;
  local_b8 = (undefined *)((ulonglong)local_b8 & 0xffffffffffffff00);
  FUN_1804898a0("Shadow",param_1 + 0x6cca,&DAT_18082a240,1);
  local_a8 = &PTR_s_Top_Left_1808593e0;
  local_b0 = &local_58;
  auStack_88 = ZEXT816(0);
  local_98 = 0;
  uStack_90 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  auVar2 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  local_78 = 1;
  uStack_70 = 0;
  local_38 = CONCAT71(uStack_77,1);
  local_28 = auVar2._0_8_;
  uStack_30 = 0;
  local_a0 = 6;
  local_b8 = &DAT_18082a298;
  FUN_18048d220("Position",param_1 + 0x6cc4,&local_a8,1);
  FUN_180488f10();
}



