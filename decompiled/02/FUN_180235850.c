// FUN_180235850 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180235850 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180235850(void)

{
  undefined1 auVar1 [16];
  ulonglong uStack_30;
  uint uStack_14;
  
  if (DAT_180b8f7cc != '\0') {
    FUN_1802346a0();
  }
  uStack_30 = uStack_30 & 0xffffff0000000000;
  DAT_180b8e6e0 = 0;
  uRam0000000180b8e6f0 = 0;
  uRam0000000180b8e6f8 = uStack_30;
  DAT_180b8e72c._0_4_ = 0;
  DAT_180b8e72c._4_4_ = 0;
  _DAT_180b8e734 = 0;
  DAT_180b8f7c8 = 0;
  DAT_180b8f7c4 = 0;
  DAT_180b8f7c0 = 0;
  _DAT_180b8e700 = 0;
  _DAT_180b8e708 = 0;
  lRam0000000180b8e710 = (ulonglong)uStack_14 << 0x20;
  DAT_180b8e718 = 0;
  _DAT_180b8e750 = 0xffffffffffffffff;
  uRam0000000180b8e758 = 0;
  uRam0000000180b8e760 = 0;
  _DAT_180b8e768 = 0;
  _DAT_180b8e780 = (ulonglong)uStack_14 << 0x20;
  auVar1 = vinsertps_avx(ZEXT816(0),ZEXT816(0),0x20);
  _DAT_180b8e770 = vinsertps_avx(auVar1,ZEXT816(0),0x30);
  DAT_180b8e738 = 0;
  DAT_180b8f7d0 = 0;
  DAT_180b8f7cc = 0;
  DAT_180b8f820 = 0;
  uRam0000000180b8e6e8 = 0;
  return;
}



