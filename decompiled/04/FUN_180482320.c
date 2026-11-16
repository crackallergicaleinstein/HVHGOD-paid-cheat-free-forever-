// FUN_180482320 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180482320 */

void FUN_180482320(longlong *param_1)

{
  undefined4 uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [64];
  undefined *puVar6;
  undefined8 *puVar7;
  undefined **local_a8;
  undefined8 local_a0;
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
  
  local_78 = 1;
  local_a8 = &PTR_s_English_1807993a8;
  auStack_88 = ZEXT816(0);
  auVar2._12_4_ = 0;
  auVar2._0_12_ = ZEXT812(0);
  local_98 = 0;
  uStack_90 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  auVar2 = vunpcklps_avx(auVar2 << 0x20,auVar2 << 0x20);
  uStack_70 = 0;
  local_38 = CONCAT71(uStack_77,1);
  local_28 = auVar2._0_8_;
  uStack_30 = 0;
  local_a0 = 4;
  auVar5 = ZEXT1264(ZEXT812(0)) << 0x20;
  FUN_18048d220("Language",*param_1 + 0x718c,&local_a8,1,&DAT_180830b38,&local_58);
  auStack_88 = ZEXT816(0);
  local_98 = 0;
  uStack_90 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  auVar4 = auVar5._0_16_;
  auVar2 = vunpcklps_avx(auVar4,auVar4);
  local_78 = 1;
  uStack_70 = 0;
  local_38 = CONCAT71(uStack_77,1);
  local_28 = auVar2._0_8_;
  uStack_30 = 0;
  local_a8 = &PTR_DAT_1807993f0;
  local_a0 = 8;
  auVar5 = ZEXT1664(auVar4);
  cVar3 = FUN_18048d220("Menu Scale",param_1[1],&local_a8,1,&DAT_180830b34,&local_58);
  if (cVar3 != '\0') {
    if (*(int *)param_1[1] == 0) {
      uVar1 = *(undefined4 *)(*param_1 + 0x71d4);
    }
    else {
      uVar1 = *(undefined4 *)(&DAT_1807993c8 + (longlong)*(int *)param_1[1] * 4);
    }
    *(undefined4 *)(*param_1 + 0x71a4) = uVar1;
  }
  auStack_88 = ZEXT816(0);
  local_98 = 0;
  uStack_90 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  auVar4 = auVar5._0_16_;
  auVar2 = vunpcklps_avx(auVar4,auVar4);
  local_78 = 1;
  uStack_70 = 0;
  local_38 = CONCAT71(uStack_77,1);
  local_28 = auVar2._0_8_;
  uStack_30 = 0;
  local_a8 = &PTR_DAT_1807993f0;
  local_a0 = 8;
  auVar5 = ZEXT1664(auVar4);
  FUN_18048d220("ESP Scale",*param_1 + 0x7190,&local_a8,1,&DAT_18082a258,&local_58);
  auStack_88 = ZEXT816(0);
  local_98 = 0;
  uStack_90 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  auVar4 = auVar5._0_16_;
  auVar2 = vunpcklps_avx(auVar4,auVar4);
  local_78 = 1;
  uStack_70 = 0;
  local_38 = CONCAT71(uStack_77,1);
  local_28 = auVar2._0_8_;
  uStack_30 = 0;
  local_a8 = &PTR_DAT_1807993f0;
  local_a0 = 8;
  auVar5 = ZEXT1664(auVar4);
  FUN_18048d220("Windows Scale",*param_1 + 0x7194,&local_a8,1,&DAT_180830b58,&local_58);
  local_a8 = &PTR_DAT_180799388;
  puVar7 = &local_58;
  auStack_88 = ZEXT816(0);
  local_98 = 0;
  uStack_90 = 0;
  local_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  auVar2 = vunpcklps_avx(auVar5._0_16_,auVar5._0_16_);
  local_78 = 1;
  uStack_70 = 0;
  local_38 = CONCAT71(uStack_77,1);
  local_28 = auVar2._0_8_;
  uStack_30 = 0;
  local_a0 = 4;
  puVar6 = &DAT_18082a254;
  FUN_18048d220("Units",*param_1 + 0x7198,&local_a8,1,&DAT_18082a254,puVar7);
  FUN_180489fc0("Accent Color",*param_1 + 0x717c,1,&DAT_18082a268,puVar6,
                (ulonglong)puVar7 & 0xffffffffffffff00);
  return;
}



