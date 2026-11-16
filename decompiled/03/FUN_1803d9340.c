// FUN_1803d9340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d9340 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803d9340(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  uint uStack_5c;
  
  iVar2 = FUN_1805f68d0(&DAT_180b8e2e0);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b8e32c == 0x7fffffff) {
    DAT_180b8e32c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  _DAT_180b8e350 = 0;
  uRam0000000180b8e358 = 0;
  uRam0000000180b8e360 = 0;
  uRam0000000180b8e368 = 0;
  DAT_180b8e2dc = 0;
  _DAT_180b8e330 = 0;
  uRam0000000180b8e338 = 0;
  uRam0000000180b8e340 = 0;
  uRam0000000180b8e348 = 0;
  uStack_5c = uStack_5c & 0xffffff00;
  uRam0000000180b8e378 = CONCAT44(uStack_5c,0xffffffff);
  _DAT_180b8e370 = 0;
  uRam0000000180b8e380 = 0;
  uRam0000000180b8e388 = 0;
  auVar1 = vunpcklps_avx(ZEXT816(0),ZEXT816(0));
  DAT_180b8e3c0 = auVar1._0_8_;
  DAT_180b8e2d0._0_4_ = 0;
  DAT_180b8e2d0._4_4_ = 0;
  DAT_180b8e2d8 = 0;
  _DAT_180b8e390 = 0;
  uRam0000000180b8e398 = 0;
  uRam0000000180b8e3a0 = 0;
  uRam0000000180b8e3a8 = 0;
  _DAT_180b8e3b0 = (undefined1  [16])0x0;
  FUN_1805f68fc(&DAT_180b8e2e0);
  return;
}



