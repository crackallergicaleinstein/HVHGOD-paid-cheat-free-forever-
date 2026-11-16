// FUN_18048aa00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18048aa00 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18048aa00(undefined8 *param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined1 local_68 [16];
  undefined1 local_58 [64];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  puVar2 = &DAT_1807c6e40;
  if (*(undefined **)*param_1 != (undefined *)0x0) {
    puVar2 = *(undefined **)*param_1;
  }
  FUN_18015abc0(local_58,0x40,puVar2,(double)param_2);
  local_78 = 0;
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = local_58;
  auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.2 + 0.5)),1);
  auVar1 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar1);
  local_a8 = 0;
  FUN_1804ea040(local_68,DAT_180c62ca8,auVar1._0_8_,0x7f7fffff);
}



