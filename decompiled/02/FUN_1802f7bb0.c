// FUN_1802f7bb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f7bb0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802f7bb0(void)

{
  char cVar1;
  int iVar2;
  ULONGLONG UVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  char local_48 [8];
  undefined *local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  longlong lStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_30 = _DAT_180bb8890;
  lStack_28 = lRam0000000180bb8898;
  uStack_20 = uRam0000000180bb88a0;
  uStack_18 = uRam0000000180bb88a8;
  local_40 = _DAT_180bb88b0;
  uStack_38 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  lVar5 = lStack_28;
  if (((lStack_28 == 0) || ((char)uStack_38 == '\0')) || (DAT_180cb3528 == '\0')) {
    DAT_180b8f9e8 = 0;
    return;
  }
  iVar2 = DAT_180c6ef00;
  if (DAT_180c6ef00 == 0) {
    UVar3 = GetTickCount64();
    if (UVar3 < DAT_180c6eee8) {
      DAT_180b8f9e8 = 0;
      return;
    }
    local_40 = &DAT_1808fe750;
    iVar2 = FUN_1805f68d0(&DAT_1808fe750);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808fe79c == 0x7fffffff) {
      DAT_1808fe79c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6ef00 == 0) && (DAT_180c6eee8 <= UVar3)) {
      DAT_180c6ef00 = FUN_1804174b0("C_CSPlayerPawn",0xf3e9a9ed);
      if (DAT_180c6ef00 == 0) {
        DAT_180c6eee8 = UVar3 + 1000;
      }
      else {
        DAT_180c6eee8 = 0xffffffffffffffff;
      }
    }
    iVar2 = DAT_180c6ef00;
    FUN_1805f68fc();
    if (iVar2 == 0) {
      DAT_180b8f9e8 = 0;
      return;
    }
  }
  bVar6 = false;
  if (iVar2 + lVar5 != 0) {
    local_48[0] = '\0';
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    cVar1 = FUN_1804514c0(local_48,iVar2 + lVar5,1);
    bVar6 = cVar1 != '\0';
    lVar5 = FUN_18017ea70();
    if (*(int *)(lVar5 + 4) != 0) {
      *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
    }
  }
  if (!bVar6) {
    local_48[0] = '\0';
  }
  if (local_48[0] == '\0') {
    DAT_180b8f9e8 = 0;
    return;
  }
  DAT_180b8f9e8 = 1;
  return;
}



