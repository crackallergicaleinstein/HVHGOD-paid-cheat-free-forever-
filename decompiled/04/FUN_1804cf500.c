// FUN_1804cf500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804cf500 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804cf500(void)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [32];
  longlong lVar4;
  longlong lVar5;
  float *pfVar6;
  float *pfVar7;
  undefined1 auVar8 [16];
  undefined4 uVar9;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  uint local_e0;
  undefined4 local_d8;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  float local_48;
  float local_44;
  undefined8 local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  ulonglong local_28;
  
  lVar4 = DAT_180bb8ae8;
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  if (*(char *)(DAT_180bb8ae8 + 0x2902) != '\0') {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_b8 = *(undefined8 *)(DAT_180bb8ae8 + 0x1ec0);
  uStack_b0 = *(undefined8 *)(DAT_180bb8ae8 + 0x1ec8);
  uStack_a8 = *(undefined8 *)(DAT_180bb8ae8 + 0x1ed0);
  uStack_a0 = *(undefined8 *)(DAT_180bb8ae8 + 0x1ed8);
  *(undefined4 *)(DAT_180bb8ae8 + 0x1e84) = 0;
  lVar5 = FUN_1804b81b0(**(undefined8 **)(lVar4 + 0x2030),1,"##Foreground");
  auVar2._8_8_ = uStack_b0;
  auVar2._0_8_ = local_b8;
  auVar3._16_8_ = uStack_a8;
  auVar3._0_16_ = auVar2;
  auVar3._24_8_ = uStack_a0;
  auVar2 = vshufps_avx(auVar2,auVar2,0xff);
  local_38 = auVar2._0_4_ - 3.0;
  auVar8 = auVar3._16_16_;
  local_34 = (float)uStack_a8 - 3.0;
  auVar2 = vshufps_avx(auVar8,auVar8,0x55);
  local_30 = auVar2._0_4_ + 3.0;
  auVar2 = vshufps_avx(auVar8,auVar8,0xaa);
  local_2c = auVar2._0_4_ + 3.0;
  local_40 = *(ulonglong *)(lVar4 + 0x110);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_40;
  auVar2 = vshufps_avx(auVar8,auVar8,0x55);
  local_44 = local_34;
  if (local_34 <= auVar2._0_4_) {
    auVar2 = vminss_avx(ZEXT416((uint)local_2c),auVar2);
    local_44 = auVar2._0_4_;
  }
  local_48 = local_38;
  if (local_38 <= (float)local_40) {
    auVar2 = vminss_avx(ZEXT416((uint)local_30),ZEXT416((uint)(float)local_40));
    local_48 = auVar2._0_4_;
  }
  local_d8 = 0;
  local_e8 = 0;
  local_e0 = 0x3f800000;
  uVar9 = 0x3f800000;
  FUN_1804de7c0(lVar5,&local_38,&local_30,0xff00ff00);
  local_e0 = *(uint *)(lVar5 + 0x30);
  if (((local_e0 & 0xe0000) == 0) || ((local_e0 & 0xe0000) != 0xe0000)) {
    pfVar7 = &local_48;
    pfVar6 = (float *)&local_40;
  }
  else {
    local_c8 = local_48 + 0.5;
    local_c4 = local_44 + 0.5;
    local_c0 = (float)local_40 + 0.5;
    local_bc = local_40._4_4_ + 0.5;
    pfVar7 = &local_c8;
    pfVar6 = &local_c0;
  }
  local_e8 = uVar9;
  FUN_1804dc7e0(lVar5,pfVar6,pfVar7,0xff00ff00);
}



