// FUN_18049d1c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18049d1c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18049d1c0(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [64];
  undefined1 auStack_118 [32];
  undefined *local_f8;
  undefined ***local_f0;
  undefined **local_e8;
  undefined8 local_e0;
  undefined **local_d8;
  undefined8 uStack_d0;
  undefined1 auStack_c8 [16];
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined8 uStack_b0;
  undefined **local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  FUN_1804c2800(*(undefined8 *)*param_1);
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  lVar4 = param_1[2];
  FUN_180488c60();
  FUN_180488a80(*puVar2,*puVar3);
  local_f0 = (undefined ***)0x0;
  local_f8 = (undefined *)((ulonglong)local_f8 & 0xffffffffffffff00);
  FUN_1804898a0("Enable Layer",lVar4 + 0x14,*puVar3,1);
  local_e8 = &PTR_s_Liquid_1807b7d80;
  local_f0 = &local_98;
  auVar5._12_4_ = 0;
  auVar5._0_12_ = ZEXT812(0);
  auStack_c8 = ZEXT816(0);
  local_d8 = (undefined **)0x0;
  uStack_d0 = 0;
  local_98 = (undefined **)0x0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  auVar5 = vunpcklps_avx(auVar5 << 0x20,auVar5 << 0x20);
  local_b8 = 1;
  uStack_b0 = 0;
  local_78 = CONCAT71(uStack_b7,1);
  local_68 = auVar5._0_8_;
  uStack_70 = 0;
  local_e0 = 8;
  local_f8 = &DAT_18082a240;
  auVar6 = ZEXT1264(ZEXT812(0)) << 0x20;
  FUN_18048d220("Surface",lVar4 + 0x10,&local_e8,*(undefined1 *)(lVar4 + 0x14));
  local_f0._0_1_ = 1;
  FUN_180489fc0("Surface Color",lVar4,*(undefined1 *)(lVar4 + 0x14),&DAT_18082a268);
  auVar5 = auVar6._0_16_;
  if (*(int *)(lVar4 + 0x10) == 6) {
    local_f0 = (undefined ***)CONCAT71(local_f0._1_7_,1);
    FUN_180489fc0("Rim Color",lVar4 + 0x18,*(undefined1 *)(lVar4 + 0x14),&DAT_18082a248);
    auVar5 = auVar6._0_16_;
  }
  uStack_d0 = 4;
  local_48 = &DAT_180858a0c;
  local_58 = &DAT_180829a40;
  local_50 = &DAT_180829fa0;
  auStack_c8 = ZEXT816(0);
  local_40 = &DAT_180858a00;
  local_d8 = &local_58;
  uStack_90 = 4;
  uStack_88 = 0;
  uStack_80 = 0;
  auVar5 = vunpcklps_avx(auVar5,auVar5);
  local_e8 = &PTR_DAT_1807b7d10;
  local_f0 = &local_98;
  local_b8 = 1;
  uStack_b0 = 0;
  local_78 = CONCAT71(uStack_b7,1);
  local_f8 = &DAT_180858a0c;
  uStack_70 = 0;
  local_68 = auVar5._0_8_;
  local_e0 = 4;
  local_98 = local_d8;
  FUN_18048d220("Overlay",lVar4 + 0x28,&local_e8,*(undefined1 *)(lVar4 + 0x14));
  FUN_180488f10();
  iVar1 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
  if (iVar1 < 2) {
    FUN_1804c5a40("Calling PopID() too many times!");
  }
  else {
    *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar1 + -1;
  }
}



