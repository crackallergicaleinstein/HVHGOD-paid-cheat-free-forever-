// FUN_1802f7600 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f7600 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802f7600(void)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong lVar10;
  ulonglong uVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined1 auStack_798 [32];
  undefined **local_778;
  char *local_770;
  char local_758 [8];
  undefined *local_750;
  undefined1 *local_748;
  longlong local_740;
  undefined8 local_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 local_6f8;
  undefined8 uStack_6f0;
  undefined1 local_6e8 [80];
  char *local_698;
  longlong lStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined1 local_668 [16];
  longlong local_658;
  char local_648 [1536];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_798;
  if (DAT_180b0d7e0 == '\0') {
    LOCK();
    UNLOCK();
    DAT_180b8fab1 = 0;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_698 = _DAT_180bb8890;
  lStack_690 = lRam0000000180bb8898;
  uStack_688 = uRam0000000180bb88a0;
  uStack_680 = uRam0000000180bb88a8;
  iVar5 = _DAT_180bb88b0;
  uVar13 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  lVar8 = lStack_690;
  if ((char)uVar13 == '\0') {
  }
  if (lStack_690 == 0) {
  }
  if (DAT_180bb88c9 != '\0') {
  }
  if (1 < iVar5 - 2U) {
  }
  iVar4 = DAT_180c6ef24;
  if (DAT_180c6ef24 == 0) {
    UVar6 = GetTickCount64();
    if (UVar6 < DAT_180c6ef08) {
    }
    local_750 = &DAT_1808fe800;
    iVar4 = FUN_1805f68d0(&DAT_1808fe800);
    if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808fe84c == 0x7fffffff) {
      DAT_1808fe84c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c6ef24 == 0) && (DAT_180c6ef08 <= UVar6)) {
      DAT_180c6ef24 = FUN_1804174b0("C_CSPlayerPawn",0x3ac1bd10);
      if (DAT_180c6ef24 == 0) {
        DAT_180c6ef08 = UVar6 + 1000;
      }
      else {
        DAT_180c6ef08 = 0xffffffffffffffff;
      }
    }
    iVar4 = DAT_180c6ef24;
    FUN_1805f68fc(&DAT_1808fe800);
    if (iVar4 == 0) {
    }
  }
  lVar7 = FUN_18017ea70();
  *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
  if (iVar4 + lVar8 == 0) {
    bVar1 = false;
  }
  else {
    local_758[0] = '\0';
    cVar2 = FUN_1804514f0(local_758,iVar4 + lVar8,1);
    if (cVar2 == '\0') {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  cVar2 = local_758[0];
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
  }
  if (!bVar1) {
  }
  if (cVar2 == '\0') {
  }
  uVar13 = 0;
  if (DAT_180b0d990 == 1) {
    uVar13 = DAT_180b0d994;
  }
  puVar9 = (undefined8 *)FUN_1802f4de0(&local_738,uVar13);
  local_698 = (char *)*puVar9;
  lStack_690 = puVar9[1];
  uStack_688 = puVar9[2];
  uStack_680 = puVar9[3];
  local_678 = puVar9[4];
  puVar9 = (undefined8 *)FUN_1802fa8d0(local_6e8,&DAT_180b0d7e0);
  local_738 = *puVar9;
  uStack_730 = puVar9[1];
  uStack_728 = puVar9[2];
  uStack_720 = puVar9[3];
  local_718 = puVar9[4];
  uStack_710 = puVar9[5];
  uStack_708 = puVar9[6];
  uStack_700 = puVar9[7];
  local_6f8 = puVar9[8];
  uStack_6f0 = puVar9[9];
  FUN_1802f50e0(local_668,&local_738,iVar5,&local_698);
  if (local_658 == 0) {
    LOCK();
    DAT_180b8fab1 = 0;
    UNLOCK();
    goto LAB_1802f7b1d;
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar7 = DAT_1808fe850;
  lVar8 = DAT_1808da460;
  if ((DAT_1808fe850 == DAT_1808da460) && (lVar10 = DAT_180c6ef10, DAT_180c6ef10 != 0)) {
LAB_1802f79c4:
    if (DAT_180c64938 != 0) {
      if (DAT_180b8fac8 == 0) {
        UVar6 = GetTickCount64();
        DAT_180b8fac8 = UVar6 + 10000;
        LOCK();
        UNLOCK();
      }
      LOCK();
      DAT_180b8fab1 = 1;
      UNLOCK();
      local_770 = (char *)0x0;
      bVar3 = FUN_180264660(lVar10,DAT_180c64938);
      if (bVar3 == 0) {
        LOCK();
        DAT_180b8fab1 = 0;
        UNLOCK();
      }
      FUN_18063ab10(local_648,0,0x600);
      FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                    "dispatch=post_frame stable_network_updates=2");
      local_778 = &PTR_180700558;
      if (local_648[0] != '\0') {
        local_778 = (undefined **)&DAT_1806bcfc0;
      }
      pcVar12 = "ROUND_AUTOBUY_FAILED";
      if (bVar3 != 0) {
        pcVar12 = "ROUND_AUTOBUY_SUBMITTED";
      }
      local_770 = local_648;
      FUN_1800f6900((bVar3 ^ 1) * 2,local_770,"RoundManager",pcVar12);
      goto LAB_1802f7b1d;
    }
  }
  else {
    UVar6 = GetTickCount64();
    if ((lVar7 != lVar8) || (DAT_180c6eef8 <= UVar6)) {
      local_750 = &DAT_1808fe7a0;
      iVar5 = FUN_1805f68d0(&DAT_1808fe7a0);
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808fe7ec == 0x7fffffff) {
        DAT_1808fe7ec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      uVar11 = 1000;
      if (DAT_1808fe850 == lVar8) {
        if ((DAT_180c6ef10 == 0) && (DAT_180c6eef8 <= UVar6)) goto LAB_1802f7928;
      }
      else {
        DAT_1808fe7f0 = 1000;
LAB_1802f7928:
        lVar7 = -1;
        do {
          local_740 = lVar7 + 1;
          pcVar12 = "ngine2.dll:488BC448895808488968104889701857415641574881EC700100000F2970D8410FB6E98D42FC4D8BF88BFA4C8BF183F8017625"
                    + lVar7;
          lVar7 = local_740;
        } while (*pcVar12 != '\0');
        local_748 = &DAT_180826960;
        local_698 = "patterns::engine_client_cmd";
        lStack_690 = 0x1b;
        DAT_180c6ef10 = FUN_1800e5d20(&local_698,&local_748);
        DAT_1808fe850 = lVar8;
        DAT_180c6eef8 = 0xffffffffffffffff;
        if (DAT_180c6ef10 == 0) {
          DAT_180c6eef8 = DAT_1808fe7f0 + UVar6;
          uVar11 = 60000;
          if (DAT_1808fe7f0 < 60000) {
            uVar11 = DAT_1808fe7f0 * 2;
          }
        }
        DAT_1808fe7f0 = uVar11;
      }
      lVar10 = DAT_180c6ef10;
      FUN_1805f68fc(&DAT_1808fe7a0);
      if (lVar10 != 0) goto LAB_1802f79c4;
    }
  }
  FUN_18063ab10(local_648,0,0x600);
  FUN_18015ad60(local_648,0x600,0xffffffffffffffff,"reason=command_api_unavailable");
  local_778 = &PTR_180700558;
  if (local_648[0] != '\0') {
    local_778 = (undefined **)&DAT_1806bcfc0;
  }
  local_770 = local_648;
  FUN_1800f6900(2);
LAB_1802f7b1d:
  FUN_18015c010(local_668);
}



