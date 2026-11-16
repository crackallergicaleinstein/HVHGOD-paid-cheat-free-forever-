// FUN_18053f6c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18053f6c0 */

void FUN_18053f6c0(void)

{
  undefined1 auVar1 [16];
  undefined4 uVar2;
  undefined1 auVar3 [64];
  undefined1 *local_res8;
  undefined **local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [16];
  undefined1 local_88;
  uint7 uStack_87;
  undefined8 uStack_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  FUN_180488c60();
  local_b0 = 4;
  local_b8 = &PTR_s_Four_Lines_18086c338;
  auStack_98 = ZEXT816(0);
  auVar1._12_4_ = 0;
  auVar1._0_12_ = ZEXT812(0);
  local_a8 = 0;
  uStack_a0 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  auVar1 = vunpcklps_avx(auVar1 << 0x20,auVar1 << 0x20);
  local_88 = 0;
  uStack_80 = 0;
  local_48 = (ulonglong)uStack_87 << 8;
  local_38 = auVar1._0_8_;
  uStack_40 = 0;
  auVar3 = ZEXT1264(ZEXT812(0)) << 0x20;
  FUN_18048d220("Line Layout",&DAT_180b0d0e8,&local_b8,1,&DAT_18082a244,&local_68);
  auStack_98 = ZEXT816(0);
  local_a8 = 0;
  uStack_a0 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  auVar1 = vunpcklps_avx(auVar3._0_16_,auVar3._0_16_);
  local_b8 = &PTR_s_Straight_18086c698;
  local_88 = 0;
  uStack_80 = 0;
  local_48 = (ulonglong)uStack_87 << 8;
  local_38 = auVar1._0_8_;
  uStack_40 = 0;
  local_b0 = 3;
  FUN_18048d220("Line Style",&DAT_180b0d0ec,&local_b8,1,&DAT_18082a288,&local_68);
  uVar2 = 0x3f800000;
  FUN_18048a250("Dash Length",&DAT_180b0d0f0,0x40000000,0x42000000,"%.0f px",0x3f800000,
                DAT_180b0d0ec == 1,&DAT_18082a254);
  FUN_18048a250("Line Length",&DAT_180b0d0f4,0,0x43fa0000,"%.0f px",uVar2,1,&DAT_18082a254);
  FUN_18048a250("Line Width",&DAT_180b0d0fc,0x3f000000,0x40c00000,"%.1f px",0x3dcccccd,1,
                &DAT_18082a288);
  FUN_180488f10();
  local_res8 = &DAT_180b0d018;
  FUN_180488c60();
  FUN_18053f920(&local_res8);
  FUN_180488f10();
  return;
}



