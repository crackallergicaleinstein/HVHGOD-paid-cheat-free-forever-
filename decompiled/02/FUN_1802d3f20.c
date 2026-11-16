// FUN_1802d3f20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802d3f20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802d3f20(undefined8 param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 ******_Buf1;
  undefined4 uVar10;
  longlong lVar11;
  char *pcVar12;
  ulonglong uVar13;
  undefined **ppuVar14;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_768 [32];
  undefined **local_748;
  char *local_740;
  uint local_738;
  char *local_728;
  longlong local_720;
  char **local_718;
  char **local_710;
  undefined *local_708;
  char *local_700;
  undefined8 uStack_6f8;
  undefined8 ******ppppppuStack_6f0;
  longlong lStack_6e8;
  char *local_6e0;
  undefined8 local_6d8;
  undefined8 ******local_6d0;
  longlong local_6c8;
  undefined1 local_6c0 [32];
  undefined1 local_6a0 [32];
  undefined8 local_680;
  undefined8 uStack_678;
  ulonglong local_670;
  char *local_668;
  undefined8 ******local_660 [2];
  longlong local_650;
  ulonglong local_648;
  char local_638 [1544];
  ulonglong local_30;
  
  if (param_2 == 0) {
    return;
  }
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_768;
  local_728 = "userid";
  local_720 = 6;
  uVar3 = FUN_1802c7fb0(&local_728);
  local_670 = (ulonglong)uVar3 | 0xffffffff00000000;
  local_668 = "userid";
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar6 = DAT_1808fccf0;
  lVar7 = DAT_1808da460;
  if ((DAT_1808fccf0 != DAT_1808da460) || (lVar11 = DAT_180c6ea50, DAT_180c6ea50 == 0)) {
    UVar5 = GetTickCount64();
    if ((lVar6 == lVar7) && (UVar5 < DAT_180c6ea40)) {
      lVar11 = 0;
    }
    else {
      local_708 = &DAT_1808fcc40;
      iVar4 = FUN_1805f68d0(&DAT_1808fcc40);
      if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808fcc8c == 0x7fffffff) {
        DAT_1808fcc8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      uVar13 = 1000;
      if (DAT_1808fccf0 == lVar7) {
        if ((DAT_180c6ea50 == 0) && (DAT_180c6ea40 <= UVar5)) goto LAB_1802d4067;
      }
      else {
        DAT_1808fcc90 = 1000;
LAB_1802d4067:
        lVar6 = -1;
        do {
          local_720 = lVar6 + 1;
          pcVar12 = "lient.dll:488D05*????????4D8BF8488901+80~" + lVar6;
          lVar6 = local_720;
        } while (*pcVar12 != '\0');
        local_728 = "client.dll:488D05*????????4D8BF8488901+80~";
        local_718 = (char **)0x1807d40a8;
        local_710 = (char **)0x23;
        DAT_180c6ea50 = FUN_1800e5d20(&local_718,&local_728);
        DAT_1808fccf0 = lVar7;
        DAT_180c6ea40 = 0xffffffffffffffff;
        if (DAT_180c6ea50 == 0) {
          DAT_180c6ea40 = DAT_1808fcc90 + UVar5;
          uVar13 = 60000;
          if (DAT_1808fcc90 < 60000) {
            uVar13 = DAT_1808fcc90 * 2;
          }
        }
        DAT_1808fcc90 = uVar13;
      }
      lVar11 = DAT_180c6ea50;
      FUN_1805f68fc(&DAT_1808fcc40);
    }
  }
  cVar1 = FUN_1804513c0(lVar11,1,2);
  cVar2 = '\0';
  if (cVar1 != '\0') {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    FUN_180252bd0(&local_728,lVar11,param_2,&local_670);
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    cVar2 = (char)local_720;
  }
  pcVar12 = local_728;
  if (cVar2 == '\0') {
    pcVar12 = (char *)0x0;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_700 = _DAT_180bb8890;
  uStack_6f8 = uRam0000000180bb8898;
  ppppppuStack_6f0 = (undefined8 ******)uRam0000000180bb88a0;
  lStack_6e8 = uRam0000000180bb88a8;
  local_680 = _DAT_180bb88b0;
  uStack_678 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  cVar2 = DAT_180b8fab1;
  if (local_700 == (char *)0x0) {
  }
  if (pcVar12 == (char *)0x0) {
  }
  if (pcVar12 != local_700) {
  }
  LOCK();
  DAT_180b8fab1 = 0;
  UNLOCK();
  ppuVar14 = &PTR_180700558;
  if (cVar2 != '\0') {
    LOCK();
    DAT_180b8fab0 = 0;
    UNLOCK();
    LOCK();
    DAT_180b8fad8 = 0;
    UNLOCK();
    FUN_18063ab10(local_638,0,0x600);
    FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"source=local_item_purchase");
    local_748 = &PTR_180700558;
    if (local_638[0] != '\0') {
      local_748 = (undefined **)&DAT_1806bcfc0;
    }
    local_740 = local_638;
    FUN_1800f6900(0);
  }
  FUN_1802cc9c0(local_660,param_2);
  if (local_650 != 0) {
    _Buf1 = local_660;
    if (0xf < local_648) {
      _Buf1 = local_660[0];
    }
    if ((local_650 != 7) || (iVar4 = memcmp(_Buf1,"unknown",7), iVar4 != 0)) {
      uVar10 = 1;
      goto LAB_1802d426e;
    }
  }
  uVar10 = 0;
LAB_1802d426e:
  FUN_18063ab10(local_638,0,0x600);
  local_738 = (uint)DAT_180b0c020;
  local_740 = (char *)CONCAT44(local_740._4_4_,uVar10);
  local_748 = (undefined **)CONCAT44(local_748._4_4_,1);
  FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                "controller_resolved=%d weapon_resolved=%d filter_enabled=%d");
  if (local_638[0] != '\0') {
    ppuVar14 = (undefined **)&DAT_1806bcfc0;
  }
  local_740 = local_638;
  local_748 = ppuVar14;
  FUN_1800f6900(1);
  if ((char)uVar10 == '\0') {
    FUN_180113930(local_660,"an item",7);
  }
  local_708 = local_6c0;
  local_6e0 = "weapon";
  local_6d8 = 6;
  local_6d0 = local_660;
  if (0xf < local_648) {
    local_6d0 = local_660[0];
  }
  local_6c8 = local_650;
  local_718 = &local_6e0;
  local_710 = (char **)local_6c0;
  local_728 = "logevents_purchases_console";
  local_720 = 0x1b;
  uVar8 = FUN_1802c8120(local_6c0,&local_728,&local_718);
  local_700 = "weapon";
  uStack_6f8 = 6;
  ppppppuStack_6f0 = local_660;
  if (0xf < local_648) {
    ppppppuStack_6f0 = local_660[0];
  }
  lStack_6e8 = local_650;
  local_718 = &local_700;
  local_710 = &local_6e0;
  local_728 = "logevents_purchases";
  local_720 = 0x13;
  uVar9 = FUN_1802c8120(local_6a0,&local_728,&local_718);
  local_748 = (undefined **)uVar8;
  FUN_1802d0f20(extraout_XMM0_Qa,uVar9,4,"logevents_purchases");
  FUN_18015c010(local_660);
}



