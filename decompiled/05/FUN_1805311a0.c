// FUN_1805311a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805311a0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805311a0(void)

{
  float fVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_80;
  uint local_78;
  undefined4 local_68;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  FUN_180488a80("Display Name",&DAT_18082a250);
  fVar1 = *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x118);
  local_40 = fVar1 + DAT_180b0a41c * 12.0;
  local_3c = DAT_180b0a41c * 4.0 + *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x11c);
  lVar2 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  if ((*(longlong *)(lVar2 + 0x1c8) != 0) ||
     (lVar5 = 0x280, *(longlong *)(DAT_180bb8ae8 + 0x2338) != 0)) {
    lVar5 = 0x250;
  }
  local_44 = DAT_180b0a41c * 25.0 + local_3c;
  local_54 = DAT_180b0a41c * 34.0;
  local_48 = ((*(float *)(lVar5 + lVar2) - *(float *)(lVar2 + 0x118)) + fVar1) -
             DAT_180b0a41c * 12.0;
  auVar7 = ZEXT864(0);
  local_58 = 0.0;
  FUN_1804f6ea0(&local_58);
  lVar2 = DAT_180bb8ae8;
  uVar4 = DAT_180b0a434;
  local_88._0_4_ = DAT_180b0a41c * 5.0;
  local_80 = (char *)((ulonglong)local_80._4_4_ << 0x20);
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar2 = *(longlong *)(*(longlong *)(lVar2 + 0x14d0) + 0x2c8);
  FUN_1804df870(lVar2,&local_40,&local_48,uVar4);
  uVar4 = DAT_180b0a500;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
  auVar3 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar3);
  auVar6 = ZEXT1664(auVar3);
  fVar1 = auVar3._0_4_ * 0.5;
  local_58 = local_48 - fVar1;
  local_54 = local_44 - fVar1;
  local_50 = fVar1 + local_40;
  local_4c = fVar1 + local_3c;
  auVar3 = vmaxss_avx(ZEXT416((uint)(DAT_180b0a41c * 5.0 - fVar1)),auVar7._0_16_);
  local_88 = (float *)((ulonglong)local_88._4_4_ << 0x20);
  FUN_1804dc420(lVar2,&local_50,&local_58,auVar3._0_8_);
  local_78 = 0x7f7fffff;
  local_80 = (char *)CONCAT44(local_80._4_4_,0x200);
  local_88 = (float *)CONCAT44(local_88._4_4_,auVar6._0_4_);
  FUN_1804d9a00(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),uVar4);
  local_58 = DAT_180b0a41c * 8.0;
  *(undefined4 *)(lVar2 + 0x50) = 0;
  local_50 = local_48 - local_58;
  local_58 = local_58 + local_40;
  local_68 = 0;
  local_4c = local_44;
  local_78 = local_78 & 0xffffff00;
  local_80 = "Default player name";
  local_88 = &local_50;
  local_54 = local_3c;
  FUN_1804ad540("##override_name",&DAT_180c7e0d0,0x21,&local_58);
  FUN_1805302b0("Select Apply Name to update your in-game display name.");
}



