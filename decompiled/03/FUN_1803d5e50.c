// FUN_1803d5e50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d5e50 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_180285200(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  int iVar3;
  undefined1 auStack_18 [16];
  
  iVar3 = FUN_1805f68d0(&DAT_180b8f8c0);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b8f90c == 0x7fffffff) {
    DAT_180b8f90c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = auStack_18._8_8_;
  auStack_18 = auVar1 << 0x40;
  _DAT_180b8f910 = vinsertps_avx(auStack_18,ZEXT816(0),0x20);
  auStack_18._8_8_ = DAT_180b8f910._8_8_;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = auStack_18._8_8_;
  auStack_18 = auVar2 << 0x40;
  _DAT_180b8f920 = vinsertps_avx(auStack_18,ZEXT816(0),0x20);
  auStack_18 = (undefined1  [16])0x0;
  FUN_180287540(0,auStack_18);
  FUN_1805f68fc(&DAT_180b8f8c0);
  return;
}



