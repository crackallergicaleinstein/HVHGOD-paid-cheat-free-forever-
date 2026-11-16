// FUN_1801a4bb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801a4bb0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801a4bb0(void)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  int iVar4;
  ULONGLONG UVar5;
  int *piVar6;
  char cVar7;
  undefined *puVar8;
  undefined1 auStack_6a8 [32];
  undefined **local_688;
  char *local_680;
  undefined *local_678;
  undefined *puStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined1 local_658 [16];
  undefined8 local_648;
  char local_638 [1536];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_6a8;
  UVar5 = GetTickCount64();
  cVar7 = DAT_180bb904f;
  LOCK();
  DAT_180bb904f = 0;
  UNLOCK();
  if ((UVar5 < DAT_180bb83b8) && (cVar7 == '\0')) {
    DAT_180bb904f = 0;
  }
  DAT_180bb83b8 = UVar5 + 100;
  local_658 = (undefined1  [16])0x0;
  local_648 = 0;
  local_678 = &DAT_1808da720;
  iVar4 = FUN_1805f68d0(&DAT_1808da720);
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808da76c == 0x7fffffff) {
    DAT_1808da76c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if ((cVar7 == '\0') && (UVar5 < DAT_180bbe938)) {
    FUN_18013ef90(local_658,DAT_180bbe920,DAT_180bbe928 - DAT_180bbe920 >> 5);
  }
  FUN_1805f68fc(&DAT_1808da720);
  bVar3 = FUN_1801a4340(local_658);
  if (cVar7 == '\0') goto LAB_1801a4de9;
  puVar8 = &DAT_1808d9b80;
  local_678 = &DAT_1808d9b80;
  puStack_670 = &DAT_1808d9bd0;
  bVar2 = false;
  uStack_668 = 0;
  cVar7 = '\0';
  uStack_660 = 0;
  bVar1 = false;
  piVar6 = (int *)FUN_1801acaf0();
  if (*piVar6 == 0) {
    if (DAT_1808d9bd9 == '\0') {
      if (*piVar6 == 0) {
        AcquireSRWLockShared((PSRWLOCK)&DAT_1808d9bd0);
        bVar2 = true;
        uStack_668 = CONCAT71(uStack_668._1_7_,1);
      }
      goto LAB_1801a4d10;
    }
    puVar8 = (undefined *)0x0;
    local_678 = (undefined *)0x0;
  }
  else {
LAB_1801a4d10:
    *piVar6 = *piVar6 + 1;
    bVar1 = true;
    uStack_660 = CONCAT62(uStack_660._2_6_,0x100);
    if ((DAT_1808d9bd9 == '\0') && (DAT_1808d9bd8 == '\x03')) {
      cVar7 = '\x01';
      LOCK();
      DAT_1808d9bdc = DAT_1808d9bdc + 1;
      UNLOCK();
    }
    uStack_660 = CONCAT71(uStack_660._1_7_,cVar7);
  }
  if (cVar7 == '\0') {
    FUN_1801aa9c0(&DAT_180bbe950);
    FUN_1801aa790(&DAT_180bbe990);
    local_678 = (undefined *)0x0;
    puStack_670 = (undefined *)0x0;
    FUN_1801aa600(0,&local_678);
  }
  else {
    FUN_18019f580();
  }
  if (puVar8 != (undefined *)0x0) {
    if (cVar7 != '\0') {
      LOCK();
      *(int *)(puVar8 + 0x5c) = *(int *)(puVar8 + 0x5c) + -1;
      UNLOCK();
    }
    piVar6 = (int *)FUN_1801acaf0();
    if ((bVar1) && (*piVar6 != 0)) {
      *piVar6 = *piVar6 + -1;
    }
    if (bVar2) {
      ReleaseSRWLockShared((PSRWLOCK)&DAT_1808d9bd0);
      bVar2 = false;
    }
  }
  if (bVar2) {
    ReleaseSRWLockShared((PSRWLOCK)&DAT_1808d9bd0);
  }
  if ((DAT_180bbe960 == 0) && (DAT_180bbe9a0 == 0)) {
    DAT_1808da688 = '\x01';
  }
  else {
    DAT_1808da688 = '\0';
  }
  if (DAT_1808da688 == '\0') {
    DAT_180bb904f = 1;
  }
LAB_1801a4de9:
  if (DAT_180bb83b0 <= UVar5) {
    FUN_18063ab10(local_638,0,0x600);
    local_688 = (undefined **)((longlong)(local_658._8_8_ - local_658._0_8_) >> 5);
    local_680 = (char *)CONCAT44(local_680._4_4_,(uint)bVar3);
    FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                  "peers=%zu submitted=%d name_source=native labels_created=0 visual_ack=unverified"
                 );
    local_688 = &PTR_180700558;
    if (local_638[0] != '\0') {
      local_688 = (undefined **)&DAT_1806bcfc0;
    }
    local_680 = local_638;
    FUN_1800f6900(0);
    DAT_180bb83b0 = UVar5 + 5000;
  }
  FUN_180111b90(local_658);
}



