// FUN_18049faf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18049faf0 */

void FUN_18049faf0(longlong *param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 local_68;
  undefined7 uStack_67;
  undefined8 uStack_60;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  lVar1 = *param_1;
  FUN_180488c60();
  FUN_180489c50("Local",lVar1 + 0xf4c,lVar1 + 0xf48,0,1);
  FUN_180489c50("Enemies",lVar1 + 0xf60,lVar1 + 0xf5c,0,1);
  FUN_180489c50("Teammates",lVar1 + 0xf74,lVar1 + 0xf70,0,1);
  FUN_180488f10();
  lVar1 = *param_1;
  FUN_180488c60();
  local_68 = 1;
  auStack_78 = ZEXT816(0);
  local_88 = 0;
  uStack_80 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  auVar2 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  local_98 = &PTR_DAT_1807b7cb0;
  uStack_60 = 0;
  local_28 = CONCAT71(uStack_67,1);
  local_18 = auVar2._0_8_;
  uStack_20 = 0;
  local_90 = 3;
  FUN_18048d220("Style",lVar1 + 0xf84,&local_98,1,0,&local_48);
  FUN_18048a250("Duration",lVar1 + 0xf88,0x41200000,0x42c80000,&DAT_180829c34,0x3f800000,1,0);
  FUN_180488f10();
  lVar1 = *param_1;
  FUN_180488c60();
  FUN_180489c50("Bullet Impacts",lVar1 + 0xf90,lVar1 + 0xf8c,0,1);
  FUN_180488f10();
  return;
}



