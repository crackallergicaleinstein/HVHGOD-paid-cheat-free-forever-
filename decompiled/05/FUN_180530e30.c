// FUN_180530e30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180530e30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180530e30(void)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  ULONGLONG UVar7;
  bool bVar8;
  undefined1 auVar9 [64];
  undefined1 auStack_f8 [32];
  char *local_d8;
  undefined8 ****local_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined **local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 ****local_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [16];
  undefined1 local_38;
  undefined7 uStack_37;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  FUN_180488c60();
  local_d0 = (undefined8 ****)0x0;
  local_d8 = (char *)((ulonglong)local_d8 & 0xffffffffffffff00);
  cVar5 = FUN_1804898a0("Show Clan Tag",&DAT_180b0b448,&DAT_18085d5b4,1);
  if (cVar5 != '\0') {
    DAT_180b0b458 = DAT_180b0b448;
  }
  FUN_180488f10();
  FUN_180488c60();
  FUN_180488a80("Animation",&DAT_180858a00);
  local_58 = (undefined8 ****)&PTR_DAT_18086b868;
  uStack_50 = 2;
  auStack_48 = ZEXT816(0);
  local_38 = 1;
  uStack_30 = 0;
  auVar2._12_4_ = 0;
  auVar2._0_12_ = ZEXT812(0);
  local_98 = &PTR_DAT_18086b868;
  uStack_90 = 2;
  uStack_88 = 0;
  uStack_80 = 0;
  local_78 = CONCAT71(uStack_37,1);
  uStack_70 = 0;
  auVar2 = vunpcklps_avx(auVar2 << 0x20,auVar2 << 0x20);
  local_68 = auVar2._0_8_;
  local_a8 = &PTR_s_Glitched_18086ba78;
  local_a0 = 2;
  local_d0 = (undefined8 ****)&local_98;
  local_d8 = &DAT_180858a00;
  auVar9 = ZEXT1264(ZEXT812(0)) << 0x20;
  FUN_18048d220("Effect",&DAT_180b0b4b0,&local_a8,1);
  local_b0 = 1;
  local_c0 = &DAT_18085d5a8;
  local_c8 = CONCAT71(local_c8._1_7_,1);
  local_d0 = (undefined8 ****)CONCAT44(local_d0._4_4_,0x3c23d70a);
  local_d8 = "%.2f s";
  FUN_18048a250("Frame Interval",&DAT_180b0b4b4,0x3dcccccd,0x40a00000);
  FUN_180488f10();
  FUN_180488c60();
  FUN_180488a80("Preview",&DAT_180829dc0);
  bVar8 = DAT_180b0b4b0 == 1;
  iVar6 = FUN_1802f49f0(DAT_180b0b4b4);
  UVar7 = GetTickCount64();
  FUN_1802f4ca0(&local_58,bVar8,UVar7 / (ulonglong)(longlong)iVar6);
  uVar4 = DAT_180c62ca8;
  lVar3 = DAT_180bb8ae8;
  lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  if (auStack_48._0_8_ == 0) {
    local_d0 = (undefined8 ****)0x180867e78;
  }
  else {
    local_d0 = &local_58;
    if (0xf < (ulonglong)auStack_48._8_8_) {
      local_d0 = local_58;
    }
  }
  local_a8 = (undefined **)
             CONCAT44(DAT_180b0a41c * 5.0 + *(float *)(lVar1 + 0x11c),
                      DAT_180b0a41c * 12.0 + *(float *)(lVar1 + 0x118));
  *(undefined1 *)(lVar1 + 0xce) = 1;
  local_c8 = 0;
  local_d8 = (char *)CONCAT44(local_d8._4_4_,DAT_180b0a458);
  FUN_180463450(*(undefined8 *)(*(longlong *)(lVar3 + 0x14d0) + 0x2c8),uVar4,0x41400000,&local_a8);
  local_a8 = (undefined **)CONCAT44(DAT_180b0a41c * 24.0,auVar9._0_4_);
  FUN_1804f6ea0(&local_a8);
  FUN_18015c010(&local_58);
  FUN_180488f10();
}



