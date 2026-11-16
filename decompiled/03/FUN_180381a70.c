// FUN_180381a70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180381a70 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_180381a70(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 **ppuVar7;
  longlong lVar8;
  char *pcVar9;
  char *pcVar10;
  undefined **ppuVar11;
  char *pcVar12;
  undefined1 auStack_6f8 [32];
  undefined **local_6d8;
  char *local_6d0;
  char *local_6c8;
  char *local_6c0;
  char *local_6b8;
  char *local_6b0;
  int local_6a8;
  undefined8 local_6a0;
  longlong local_698;
  longlong lStack_690;
  longlong lStack_688;
  PSRWLOCK pRStack_680;
  undefined8 local_678;
  undefined8 local_670;
  char local_638 [1544];
  ulonglong local_30;
  
  bVar3 = DAT_1808d9bd8;
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_6f8;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  LOCK();
  UNLOCK();
  local_6a8 = DAT_180c70dfc + 1;
  pcVar12 = "false";
  pcVar10 = "false";
  if (DAT_180b8e2b0 != '\0') {
    pcVar10 = "true";
  }
  DAT_180c70dfc = DAT_180c70dfc + 1;
  local_6a0 = param_1;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_698 = _DAT_180bb8890;
  lStack_690 = lRam0000000180bb8898;
  lStack_688 = lRam0000000180bb88a0;
  pRStack_680 = pRRam0000000180bb88a8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  bVar2 = false;
  if ((lStack_690 != 0) || (bVar1 = false, lStack_688 != 0)) {
    bVar1 = true;
  }
  pcVar9 = "false";
  if (bVar1) {
    pcVar9 = "true";
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
  lVar8 = (DAT_180b0e0e8 - DAT_180b0e0e0) / 6 + (DAT_180b0e0e8 - DAT_180b0e0e0 >> 0x3f);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
  uVar4 = DAT_1808d9bdc;
  local_670 = FUN_1803781c0(bVar3);
  FUN_18063ab10(local_638,0,0x600);
  uVar6 = local_670;
  iVar5 = local_6a8;
  local_6c8 = (char *)CONCAT44(local_6c8._4_4_,uVar4);
  local_6d0 = (char *)local_670;
  local_6d8 = (undefined **)CONCAT44(local_6d8._4_4_,local_6a8);
  local_6c0 = (char *)((lVar8 >> 2) - (lVar8 >> 0x3f));
  local_6b8 = pcVar9;
  local_6b0 = pcVar10;
  FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                "shutdown_count=%u previous=%s active_readers=%u entities=%zu local_valid=%s camera_valid=%s"
               );
  ppuVar11 = &PTR_180700558;
  local_6d8 = &PTR_180700558;
  if (local_638[0] != '\0') {
    local_6d8 = (undefined **)&DAT_1806bcfc0;
  }
  local_6d0 = local_638;
  FUN_1800f6900(1);
  if (((bVar3 & 0xfa) == 0) && (bVar3 != 4)) {
    FUN_18063ab10(local_638,0,0x600);
    local_6d0 = (char *)uVar6;
    local_6d8 = (undefined **)CONCAT44(local_6d8._4_4_,iVar5);
    FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                  "shutdown_count=%u previous=%s action=engine_only");
    local_6d8 = &PTR_180700558;
    if (local_638[0] != '\0') {
      local_6d8 = (undefined **)&DAT_1806bcfc0;
    }
    local_6d0 = local_638;
    FUN_1800f6900(0);
    if (DAT_180c6feb0 != 0) {
      (*(code *)DAT_180c6feb0)(local_6a0);
    }
    pcVar10 = "false";
    if (DAT_180b8e2b0 != '\0') {
      pcVar10 = "true";
    }
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_698 = _DAT_180bb8890;
    lStack_690 = lRam0000000180bb8898;
    lStack_688 = lRam0000000180bb88a0;
    pRStack_680 = pRRam0000000180bb88a8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    if ((lStack_690 != 0) || (lStack_688 != 0)) {
      bVar2 = true;
    }
    if (bVar2) {
      pcVar12 = "true";
    }
    AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
    lVar8 = (DAT_180b0e0e8 - DAT_180b0e0e0) / 6 + (DAT_180b0e0e8 - DAT_180b0e0e0 >> 0x3f);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
    FUN_18063ab10(local_638,0,0x600);
    local_6d8 = (undefined **)CONCAT44(local_6d8._4_4_,local_6a8);
    local_6d0 = (char *)((lVar8 >> 2) - (lVar8 >> 0x3f));
    local_6c8 = pcVar12;
    local_6c0 = pcVar10;
    FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                  "shutdown_count=%u duplicate=true entities=%zu local_valid=%s camera_valid=%s");
  }
  else {
    local_698 = 0;
    lStack_690 = 0;
    lStack_688 = 0;
    pRStack_680 = (PSRWLOCK)0x0;
    local_678 = 0;
    FUN_180377300();
    FUN_180378420("level_shutdown",0);
    FUN_180378230(bVar3,4,"level_shutdown");
    DAT_180b90810 = 0;
    ppuVar7 = &DAT_180b90800;
    if (0xf < DAT_180b90818) {
      ppuVar7 = (undefined8 **)DAT_180b90800;
    }
    *(undefined1 *)ppuVar7 = 0;
    if (DAT_180c6feb0 != 0) {
      (*(code *)DAT_180c6feb0)(local_6a0);
    }
    if (local_698 != 0) {
      *(undefined1 *)(local_698 + 0x59) = 0;
    }
    if ((char)local_678 != '\0') {
      ReleaseSRWLockExclusive(pRStack_680);
    }
    if ((char)lStack_688 != '\0') {
      FUN_1805f68fc(lStack_690);
    }
    DAT_1808d9bd8 = 1;
    FUN_180378230(4,1,"level_shutdown_complete");
    AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
    lVar8 = (DAT_180b0e0e8 - DAT_180b0e0e0) / 6 + (DAT_180b0e0e8 - DAT_180b0e0e0 >> 0x3f);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
    FUN_18063ab10(local_638,0,0x600);
    local_6d8 = (undefined **)CONCAT44(local_6d8._4_4_,iVar5);
    local_6d0 = (char *)((lVar8 >> 2) - (lVar8 >> 0x3f));
    FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                  "shutdown_count=%u entities=%zu local_valid=false camera_valid=false");
  }
  if (local_638[0] != '\0') {
    ppuVar11 = (undefined **)&DAT_1806bcfc0;
  }
  local_6d0 = local_638;
  local_6d8 = ppuVar11;
  FUN_1800f6900(1);
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



