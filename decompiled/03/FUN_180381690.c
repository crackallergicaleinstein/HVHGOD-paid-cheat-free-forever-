// FUN_180381690 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180381690 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_180381690(undefined8 param_1,char *param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 **ppuVar5;
  longlong lVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  undefined **ppuVar10;
  undefined1 auStack_718 [32];
  undefined **local_6f8;
  char *local_6f0;
  char *local_6e8;
  char *local_6e0;
  char *local_6d8;
  longlong local_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  PSRWLOCK pRStack_6b0;
  undefined8 local_6a8;
  undefined8 local_6a0;
  longlong lStack_698;
  longlong lStack_690;
  undefined8 uStack_688;
  char local_648 [1544];
  ulonglong local_40;
  
  uVar2 = DAT_1808d9bd8;
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_718;
  LOCK();
  DAT_180c64050 = DAT_180c64050 + 1;
  UNLOCK();
  LOCK();
  UNLOCK();
  iVar8 = DAT_180c70e00 + 1;
  DAT_180c70e00 = DAT_180c70e00 + 1;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
  lVar6 = (DAT_180b0e0e8 - DAT_180b0e0e0) / 6 + (DAT_180b0e0e8 - DAT_180b0e0e0 >> 0x3f);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
  uVar3 = DAT_1808d9bdc;
  if ((param_2 == (char *)0x0) || (pcVar7 = param_2, *param_2 == '\0')) {
    pcVar7 = "unknown";
  }
  uVar4 = FUN_1803781c0(uVar2);
  FUN_18063ab10(local_648,0,0x600);
  local_6e0 = (char *)CONCAT44(local_6e0._4_4_,uVar3);
  local_6f8 = (undefined **)CONCAT44(local_6f8._4_4_,iVar8);
  local_6f0 = (char *)uVar4;
  local_6e8 = pcVar7;
  local_6d8 = (char *)((lVar6 >> 2) - (lVar6 >> 0x3f));
  FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                "initialize_count=%u previous=%s map=%s active_readers=%u entities=%zu");
  ppuVar10 = &PTR_180700558;
  local_6f8 = &PTR_180700558;
  if (local_648[0] != '\0') {
    local_6f8 = (undefined **)&DAT_1806bcfc0;
  }
  local_6f0 = local_648;
  FUN_1800f6900(1);
  local_6c8 = 0;
  uStack_6c0 = 0;
  uStack_6b8 = 0;
  pRStack_6b0 = (PSRWLOCK)0x0;
  local_6a8 = 0;
  FUN_180377300();
  FUN_180378420("level_initialization",0);
  FUN_180378230(uVar2,2,"level_initialization");
  bVar1 = false;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    DAT_180b90810 = 0;
    ppuVar5 = &DAT_180b90800;
    if (0xf < DAT_180b90818) {
      ppuVar5 = (undefined8 **)DAT_180b90800;
    }
    *(undefined1 *)ppuVar5 = 0;
  }
  else {
    lVar6 = FUN_1806069d0(param_2,0x2f);
    pcVar7 = (char *)(lVar6 + 1);
    if (lVar6 == 0) {
      pcVar7 = param_2;
    }
    lVar6 = -1;
    do {
      lVar6 = lVar6 + 1;
    } while (pcVar7[lVar6] != '\0');
    FUN_180113930(&DAT_180b90800);
  }
  if (DAT_180c6ff10 != 0) {
    (*(code *)DAT_180c6ff10)(param_1,param_2);
  }
  pcVar9 = "false";
  pcVar7 = "false";
  if (DAT_180b8e2b0 != '\0') {
    pcVar7 = "true";
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_6a0 = _DAT_180bb8890;
  lStack_698 = lRam0000000180bb8898;
  lStack_690 = lRam0000000180bb88a0;
  uStack_688 = uRam0000000180bb88a8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if ((lStack_698 != 0) || (lStack_690 != 0)) {
    bVar1 = true;
  }
  if (bVar1) {
    pcVar9 = "true";
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
  lVar6 = (DAT_180b0e0e8 - DAT_180b0e0e0) / 6 + (DAT_180b0e0e8 - DAT_180b0e0e0 >> 0x3f);
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
  uVar4 = FUN_1803781c0(DAT_1808d9bd8);
  FUN_18063ab10(local_648,0,0x600);
  local_6f8 = (undefined **)CONCAT44(local_6f8._4_4_,iVar8);
  local_6f0 = (char *)uVar4;
  local_6e8 = (char *)((lVar6 >> 2) - (lVar6 >> 0x3f));
  local_6e0 = pcVar9;
  local_6d8 = pcVar7;
  FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                "initialize_count=%u state=%s entities=%zu local_valid=%s camera_valid=%s");
  if (local_648[0] != '\0') {
    ppuVar10 = (undefined **)&DAT_1806bcfc0;
  }
  local_6f0 = local_648;
  local_6f8 = ppuVar10;
  FUN_1800f6900(0);
  if (local_6c8 != 0) {
    *(undefined1 *)(local_6c8 + 0x59) = 0;
  }
  if ((char)local_6a8 != '\0') {
    ReleaseSRWLockExclusive(pRStack_6b0);
  }
  if ((char)uStack_6b8 != '\0') {
    FUN_1805f68fc(uStack_6c0);
  }
  LOCK();
  DAT_180c64050 = DAT_180c64050 + -1;
  UNLOCK();
}



