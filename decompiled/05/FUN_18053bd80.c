// FUN_18053bd80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053bd80 */

void FUN_18053bd80(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined **local_98;
  undefined8 local_90;
  undefined **local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [16];
  undefined1 local_68;
  uint7 uStack_67;
  undefined8 uStack_60;
  undefined **local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  longlong local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_90 = 2;
  local_88 = &PTR_DAT_18086bdd8;
  uStack_80 = 2;
  auStack_78 = ZEXT816(0);
  local_68 = 0;
  uStack_60 = 0;
  local_28 = (ulonglong)uStack_67 << 8;
  local_98 = &PTR_s_Visible_Only_18086c378;
  local_48 = &PTR_DAT_18086bdd8;
  uStack_40 = 2;
  uStack_38 = 0;
  uStack_30 = 0;
  auVar1 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  uStack_20 = 0;
  local_18 = auVar1._0_8_;
  FUN_18048d220("Visibility",param_1,&local_98,1,&DAT_180829dc0,&local_48);
  return;
}



