// FUN_1803d5dc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d5dc0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803d5dc0(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  ULONGLONG UVar3;
  uint local_res10;
  uint uStack_14;
  
  UVar3 = GetTickCount64();
  iVar2 = FUN_1805f68d0(&DAT_180b8f8c0);
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b8f90c == 0x7fffffff) {
    DAT_180b8f90c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  uStack_14 = (uint)(UVar3 >> 0x20);
  auVar1 = vinsertps_avx(ZEXT416((uint)UVar3),ZEXT416(uStack_14),0x10);
  auVar1 = vinsertps_avx(auVar1,ZEXT816(0),0x20);
  _DAT_180b8f920 = vinsertps_avx(auVar1,ZEXT416(local_res10),0x30);
  FUN_1805f68fc(&DAT_180b8f8c0);
  return;
}



