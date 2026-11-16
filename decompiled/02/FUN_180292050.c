// FUN_180292050 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180292050 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180292050(longlong param_1)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint local_48;
  uint uStack_44;
  undefined8 uStack_40;
  
  iVar5 = DAT_180c65528;
  if ((DAT_180c65528 == 0) && (UVar6 = GetTickCount64(), DAT_180c65520 <= UVar6)) {
    local_48 = 0x808f3140;
    uStack_44 = 1;
    iVar5 = FUN_1805f68d0(&DAT_1808f3140);
    if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808f318c == 0x7fffffff) {
      DAT_1808f318c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c65528 == 0) && (DAT_180c65520 <= UVar6)) {
      DAT_180c65528 = FUN_1804174b0("C_BaseEntity",0xa5bfefb3);
      if (DAT_180c65528 == 0) {
        DAT_180c65520 = UVar6 + 1000;
      }
      else {
        DAT_180c65520 = 0xffffffffffffffff;
      }
    }
    iVar5 = DAT_180c65528;
    FUN_1805f68fc(&DAT_1808f3140);
  }
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  if (iVar5 + param_1 == 0) {
    bVar2 = false;
  }
  else {
    local_48 = 0;
    cVar4 = FUN_1804514f0(&local_48,iVar5 + param_1,4);
    if (cVar4 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  uVar3 = local_48;
  uVar8 = FUN_18017ea70();
  if (*(int *)(uVar8 + 4) != 0) {
    *(int *)(uVar8 + 4) = *(int *)(uVar8 + 4) + -1;
  }
  if ((bVar2) && (uVar1 = uVar3 - 2, uVar8 = (ulonglong)uVar1, uVar1 < 2)) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_48 = (uint)_DAT_180bb88b0;
    uStack_44 = (uint)((ulonglong)_DAT_180bb88b0 >> 0x20);
    uStack_40 = uRam0000000180bb88b8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    uVar8 = 0;
    if (((char)((ulonglong)uStack_40 >> 8) == '\0') ||
       (uVar8 = (ulonglong)uStack_44, uStack_44 != uVar3)) {
      return CONCAT71((int7)(uVar8 >> 8),1);
    }
  }
  return uVar8 & 0xffffffffffffff00;
}



