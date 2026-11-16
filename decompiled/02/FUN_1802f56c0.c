// FUN_1802f56c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f56c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802f56c0(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  ULONGLONG UVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 *puVar8;
  longlong lVar9;
  char *pcVar10;
  ulonglong uVar11;
  undefined1 auStack_6e8 [32];
  undefined **local_6c8;
  char *local_6c0;
  char *local_6b8;
  char local_6b0;
  char *local_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined1 *local_688;
  longlong local_680;
  undefined8 local_648;
  char *local_640;
  char local_638 [1544];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_6e8;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_6a8 = _DAT_180bb8890;
  uStack_6a0 = uRam0000000180bb8898;
  uStack_698 = uRam0000000180bb88a0;
  uStack_690 = uRam0000000180bb88a8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  pcVar1 = local_6a8;
  if (param_2 == 0) {
  }
  if (local_6a8 == (char *)0x0) {
  }
  if (DAT_180b0b448 == '\0') {
  }
  local_648 = 0;
  local_640 = "userid";
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar6 = DAT_1808fecf0;
  lVar7 = DAT_1808da460;
  if ((DAT_1808fecf0 != DAT_1808da460) || (lVar9 = DAT_180c6efd8, DAT_180c6efd8 == 0)) {
    UVar5 = GetTickCount64();
    if ((lVar6 == lVar7) && (UVar5 < DAT_180c6efc8)) {
      lVar9 = 0;
    }
    else {
      local_6b8 = &DAT_1808fec40;
      iVar4 = FUN_1805f68d0(&DAT_1808fec40);
      if (iVar4 != 0) goto LAB_1802f5a6a;
      if (DAT_1808fec8c == 0x7fffffff) {
        DAT_1808fec8c = 0x7ffffffe;
        goto LAB_1802f5a5f;
      }
      uVar11 = 1000;
      if (DAT_1808fecf0 == lVar7) {
        if ((DAT_180c6efd8 == 0) && (DAT_180c6efc8 <= UVar5)) goto LAB_1802f5830;
      }
      else {
        DAT_1808fec90 = 1000;
LAB_1802f5830:
        lVar6 = -1;
        do {
          local_680 = lVar6 + 1;
          pcVar10 = "lient.dll:488D05*????????4D8BF8488901+80~" + lVar6;
          lVar6 = local_680;
        } while (*pcVar10 != '\0');
        local_688 = &DAT_1808267c0;
        local_6a8 = "patterns::game_event_get_controller";
        uStack_6a0 = 0x23;
        DAT_180c6efd8 = FUN_1800e5d20(&local_6a8,&local_688);
        DAT_1808fecf0 = lVar7;
        DAT_180c6efc8 = 0xffffffffffffffff;
        if (DAT_180c6efd8 == 0) {
          DAT_180c6efc8 = DAT_1808fec90 + UVar5;
          uVar11 = 60000;
          if (DAT_1808fec90 < 60000) {
            uVar11 = DAT_1808fec90 * 2;
          }
        }
        DAT_1808fec90 = uVar11;
      }
      lVar9 = DAT_180c6efd8;
      FUN_1805f68fc(&DAT_1808fec40);
    }
  }
  cVar2 = FUN_1804513c0(lVar9,1,2);
  cVar3 = '\0';
  if (cVar2 != '\0') {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    FUN_180252bd0(&local_6b8,lVar9,param_2,&local_648);
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    cVar3 = local_6b0;
  }
  pcVar10 = local_6b8;
  if (cVar3 == '\0') {
    pcVar10 = (char *)0x0;
  }
  if (pcVar10 == pcVar1) {
    local_6b8 = &DAT_180b8f998;
    iVar4 = FUN_1805f68d0(&DAT_180b8f998);
    if (iVar4 != 0) {
LAB_1802f5a6a:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_180b8f9e4 == 0x7fffffff) {
      DAT_180b8f9e4 = 0x7ffffffe;
LAB_1802f5a5f:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    DAT_180b8fa50 = 0;
    puVar8 = &DAT_180b8fa40;
    if (0xf < DAT_180b8fa58) {
      puVar8 = _DAT_180b8fa40;
    }
    *puVar8 = 0;
    DAT_180b8fa80 = 1;
    DAT_180b8faa8 = 0;
    lVar7 = FUN_1802f53c0(&local_6a8,pcVar10);
    FUN_18063ab10(local_638,0,0x600);
    local_6c8 = *(undefined ***)(lVar7 + 0x10);
    FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"dispatch=post_frame observed_length=%zu");
    local_6c8 = &PTR_180700558;
    if (local_638[0] != '\0') {
      local_6c8 = (undefined **)&DAT_1806bcfc0;
    }
    local_6c0 = local_638;
    FUN_1800f6900(0,local_6c0,"ProfileChanger","CLAN_MVP_REFRESH");
    FUN_18015c010(&local_6a8);
    FUN_1805f68fc(&DAT_180b8f998);
  }
}



