// FUN_180488f10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180488f10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180488f10(void)

{
  longlong lVar1;
  longlong lVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auStack_98 [32];
  float local_78;
  undefined4 local_70;
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
  
  lVar2 = DAT_180bbb218;
  lVar1 = DAT_180bb8ae8;
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  if ((DAT_180bbecdb == '\0') && (lVar6 = (longlong)DAT_180bbb210, DAT_180bbb210 != 0)) {
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    if (*(longlong *)(lVar2 + -0x10 + lVar6 * 0x10) == *(longlong *)(lVar1 + 0x14d0)) {
      auVar8 = ZEXT864(0);
      auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 4.6 + 0.5)),1);
      local_58 = 0.0;
      local_54 = auVar4._0_4_;
      FUN_1804c6420(&local_58,0xbf800000);
      lVar1 = DAT_180bb8ae8;
      DAT_180bbb210 = DAT_180bbb210 + -1;
      auVar7 = ZEXT1664(*(undefined1 (*) [16])(DAT_180bbb218 + (longlong)DAT_180bbb210 * 0x10));
      *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
      lVar1 = *(longlong *)(lVar1 + 0x14d0);
      lVar2 = *(longlong *)(lVar1 + 0x2c8);
      FUN_1804e1d30(lVar2 + 0x88,lVar2,0);
      local_40 = *(float *)(lVar1 + 0x248);
      local_3c = (float)vextractps_avx(auVar7._0_16_,2);
      local_48 = *(float *)(lVar1 + 0x250);
      local_70 = 0;
      local_44 = *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x11c);
      local_78 = DAT_180b0a41c * 6.5;
      FUN_1804df870(lVar2,&local_40,&local_48,DAT_180b0a4a4);
      uVar5 = DAT_180b0a500;
      auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
      auVar4 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar4);
      auVar7 = ZEXT1664(auVar4);
      fVar3 = auVar4._0_4_ * 0.5;
      local_58 = local_48 - fVar3;
      local_54 = local_44 - fVar3;
      local_50 = fVar3 + local_40;
      local_4c = fVar3 + local_3c;
      auVar4 = vmaxss_avx(ZEXT416((uint)(DAT_180b0a41c * 6.5 - fVar3)),auVar8._0_16_);
      local_78 = 0.0;
      FUN_1804dc420(lVar2,&local_50,&local_58,auVar4._0_8_);
      local_68 = 0x7f7fffff;
      local_70 = 0x200;
      local_78 = auVar7._0_4_;
      FUN_1804d9a00(lVar2,*(undefined8 *)(lVar2 + 0x58),*(undefined4 *)(lVar2 + 0x50),uVar5);
      *(undefined4 *)(lVar2 + 0x50) = 0;
      FUN_1804e19a0(lVar2 + 0x88,lVar2);
    }
  }
}



