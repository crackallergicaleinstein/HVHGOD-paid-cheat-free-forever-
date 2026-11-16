// FUN_180539c40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180539c40 */

void FUN_180539c40(longlong param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  char cVar2;
  undefined1 auVar3 [64];
  undefined *puVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [16];
  undefined1 local_78;
  uint7 uStack_77;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_180488c60();
  local_a0 = 7;
  local_a8 = &PTR_s_Pixel_7_18086c598;
  auStack_88 = ZEXT816(0);
  auVar1._12_4_ = 0;
  auVar1._0_12_ = ZEXT812(0);
  local_98 = 0;
  uStack_90 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  auVar1 = vunpcklps_avx(auVar1 << 0x20,auVar1 << 0x20);
  local_78 = 0;
  uStack_70 = 0;
  local_38 = (ulonglong)uStack_77 << 8;
  local_28 = auVar1._0_8_;
  uStack_30 = 0;
  auVar3 = ZEXT1264(ZEXT812(0)) << 0x20;
  FUN_18048d220(&DAT_18085b214,param_1,&local_a8,1,&DAT_18082a258,&local_58);
  auStack_88 = ZEXT816(0);
  local_98 = 0;
  uStack_90 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  auVar1 = vunpcklps_avx(auVar3._0_16_,auVar3._0_16_);
  local_a8 = &PTR_s_Small_18086bbd8;
  local_78 = 0;
  uStack_70 = 0;
  local_38 = (ulonglong)uStack_77 << 8;
  local_28 = auVar1._0_8_;
  uStack_30 = 0;
  local_a0 = 3;
  puVar4 = &DAT_18082a254;
  FUN_18048d220("Text Size",param_1 + 4,&local_a8,1,&DAT_18082a254,&local_58);
  uVar5 = CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
  FUN_1805367d0("Text Color",param_2,&DAT_18082a268,1,uVar5);
  FUN_180488f10();
  FUN_180488c60();
  uVar6 = 0;
  cVar2 = FUN_1804898a0("Text Outline",param_1 + 8,&DAT_18082a288,1,uVar5 & 0xffffffffffffff00,0);
  if (cVar2 != '\0') {
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_1 + 8);
  }
  FUN_18048a250("Outline Width",param_1 + 0x70,0x3f000000,0x40000000,"%.1f px",
                CONCAT44(uVar6,0x3dcccccd),*(undefined1 *)(param_1 + 8),&DAT_18082a254);
  FUN_1805367d0("Outline Color",param_1 + 0x74,&DAT_18082a288,*(undefined1 *)(param_1 + 8),1);
  FUN_180488f10();
  return;
}



