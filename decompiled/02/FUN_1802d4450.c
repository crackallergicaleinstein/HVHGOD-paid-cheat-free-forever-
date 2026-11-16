// FUN_1802d4450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802d4450 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802d4450(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  ULONGLONG UVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  char *pcVar11;
  byte bVar12;
  ulonglong uVar13;
  char *pcVar14;
  bool bVar15;
  undefined1 auStack_108 [32];
  char *local_e8;
  longlong local_e0;
  longlong local_d8;
  char *local_c8;
  longlong local_c0;
  char *local_b8;
  char *local_a8;
  longlong lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_58;
  char *local_50;
  undefined8 local_48;
  char *local_40;
  ulonglong local_30;
  
  if (param_2 == 0) {
    return;
  }
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  local_48 = 0;
  local_40 = "attacker";
  local_d8 = param_2;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar8 = DAT_1808fcbe0;
  lVar7 = DAT_1808da460;
  uVar13 = 1000;
  if ((DAT_1808fcbe0 != DAT_1808da460) || (lVar9 = DAT_180c6ea30, DAT_180c6ea30 == 0)) {
    UVar6 = GetTickCount64();
    if ((lVar8 == lVar7) && (UVar6 < DAT_180c6ea38)) {
      lVar9 = 0;
    }
    else {
      local_b8 = &DAT_1808fcbf0;
      iVar5 = FUN_1805f68d0(&DAT_1808fcbf0);
      if (iVar5 != 0) goto LAB_1802d4b46;
      if (DAT_1808fcc3c == 0x7fffffff) {
        DAT_1808fcc3c = 0x7ffffffe;
        goto LAB_1802d4b3b;
      }
      if (DAT_1808fcbe0 == lVar7) {
        if ((DAT_180c6ea30 == 0) && (DAT_180c6ea38 <= UVar6)) goto LAB_1802d4580;
      }
      else {
        DAT_1808fcbd0 = 1000;
LAB_1802d4580:
        lVar8 = -1;
        do {
          local_e0 = lVar8 + 1;
          pcVar14 = "lient.dll:488D05*????????4D8BF8488901+80~" + lVar8;
          lVar8 = local_e0;
        } while (*pcVar14 != '\0');
        local_e8 = "client.dll:488D05*????????4D8BF8488901+80~";
        local_c8 = "patterns::game_event_get_controller";
        local_c0 = 0x23;
        DAT_180c6ea30 = FUN_1800e5d20(&local_c8,&local_e8);
        DAT_1808fcbe0 = lVar7;
        DAT_180c6ea38 = 0xffffffffffffffff;
        if (DAT_180c6ea30 == 0) {
          DAT_180c6ea38 = DAT_1808fcbd0 + UVar6;
          if (DAT_1808fcbd0 < 60000) {
            DAT_1808fcbd0 = DAT_1808fcbd0 * 2;
          }
          else {
            DAT_1808fcbd0 = 60000;
          }
        }
        else {
          DAT_1808fcbd0 = 1000;
        }
      }
      lVar9 = DAT_180c6ea30;
      FUN_1805f68fc(&DAT_1808fcbf0);
    }
    param_2 = local_d8;
  }
  cVar3 = FUN_1804513c0(lVar9,1,2);
  cVar4 = '\0';
  if (cVar3 != '\0') {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    FUN_180252bd0(&local_e8,lVar9,param_2,&local_48);
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    cVar4 = (char)local_e0;
  }
  pcVar14 = local_e8;
  if (cVar4 == '\0') {
    pcVar14 = (char *)0x0;
  }
  local_58 = 0;
  local_50 = "userid";
  local_b8 = pcVar14;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar8 = DAT_1808fcbd8;
  lVar7 = DAT_1808da460;
  if ((DAT_1808fcbd8 != DAT_1808da460) || (lVar9 = DAT_180c6ea20, DAT_180c6ea20 == 0)) {
    UVar6 = GetTickCount64();
    if ((lVar8 == lVar7) && (UVar6 < DAT_180c6ea28)) {
      lVar9 = 0;
    }
    else {
      local_e8 = &DAT_1808fcb70;
      iVar5 = FUN_1805f68d0(&DAT_1808fcb70);
      if (iVar5 != 0) goto LAB_1802d4b46;
      if (DAT_1808fcbbc == 0x7fffffff) {
        DAT_1808fcbbc = 0x7ffffffe;
        goto LAB_1802d4b3b;
      }
      if (DAT_1808fcbd8 == lVar7) {
        if ((DAT_180c6ea20 == 0) && (DAT_180c6ea28 <= UVar6)) goto LAB_1802d475c;
      }
      else {
        DAT_1808fcbc0 = 1000;
LAB_1802d475c:
        lVar8 = -1;
        do {
          local_c0 = lVar8 + 1;
          pcVar11 = "lient.dll:488D05*????????4D8BF8488901+88~" + lVar8;
          lVar8 = local_c0;
        } while (*pcVar11 != '\0');
        local_c8 = "client.dll:488D05*????????4D8BF8488901+88~";
        local_a8 = "patterns::game_event_get_pawn";
        lStack_a0 = 0x1d;
        DAT_180c6ea20 = FUN_1800e5d20(&local_a8,&local_c8);
        DAT_1808fcbd8 = lVar7;
        DAT_180c6ea28 = 0xffffffffffffffff;
        if (DAT_180c6ea20 == 0) {
          DAT_180c6ea28 = DAT_1808fcbc0 + UVar6;
          if (DAT_1808fcbc0 < 60000) {
            DAT_1808fcbc0 = DAT_1808fcbc0 * 2;
          }
          else {
            DAT_1808fcbc0 = 60000;
          }
        }
        else {
          DAT_1808fcbc0 = 1000;
        }
      }
      lVar9 = DAT_180c6ea20;
      FUN_1805f68fc(&DAT_1808fcb70);
    }
  }
  cVar3 = FUN_1804513c0(lVar9,1,2);
  cVar4 = '\0';
  if (cVar3 != '\0') {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    FUN_180252bd0(&local_e8,lVar9,local_d8,&local_58);
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    cVar4 = (char)local_e0;
  }
  pcVar11 = local_e8;
  if (cVar4 == '\0') {
    pcVar11 = (char *)0x0;
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar8 = DAT_1808fcbc8;
  lVar7 = DAT_1808da460;
  if (DAT_1808fcbc8 == DAT_1808da460) {
    lVar9 = DAT_180c6ea18;
    if (DAT_180c6ea18 == 0) goto LAB_1802d4885;
  }
  else {
LAB_1802d4885:
    UVar6 = GetTickCount64();
    if ((lVar8 == lVar7) && (UVar6 < DAT_180c6ea08)) {
      lVar9 = 0;
      pcVar14 = local_b8;
    }
    else {
      local_e8 = &DAT_1808fcb10;
      iVar5 = FUN_1805f68d0(&DAT_1808fcb10);
      if (iVar5 != 0) goto LAB_1802d4b46;
      if (DAT_1808fcb5c == 0x7fffffff) {
        DAT_1808fcb5c = 0x7ffffffe;
        goto LAB_1802d4b3b;
      }
      if (DAT_1808fcbc8 == lVar7) {
        if ((DAT_180c6ea18 == 0) && (DAT_180c6ea08 <= UVar6)) goto LAB_1802d491a;
      }
      else {
        DAT_1808fcb60 = 1000;
LAB_1802d491a:
        lVar8 = -1;
        do {
          lStack_a0 = lVar8 + 1;
          pcVar14 = "lient.dll:488D05*????????4D8BF8488901+80~" + lVar8;
          lVar8 = lStack_a0;
        } while (*pcVar14 != '\0');
        local_a8 = "client.dll:488D05*????????4D8BF8488901+80~";
        local_c8 = "patterns::game_event_get_controller";
        local_c0 = 0x23;
        DAT_180c6ea18 = FUN_1800e5d20(&local_c8,&local_a8);
        DAT_1808fcbc8 = lVar7;
        DAT_180c6ea08 = 0xffffffffffffffff;
        if (DAT_180c6ea18 == 0) {
          DAT_180c6ea08 = DAT_1808fcb60 + UVar6;
          uVar13 = DAT_1808fcb60 * 2;
          if (59999 < DAT_1808fcb60) {
            uVar13 = 60000;
          }
        }
        DAT_1808fcb60 = uVar13;
      }
      lVar9 = DAT_180c6ea18;
      FUN_1805f68fc(&DAT_1808fcb10);
      pcVar14 = local_b8;
    }
  }
  cVar3 = FUN_1804513c0(lVar9,1,2);
  cVar4 = '\0';
  if (cVar3 != '\0') {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    FUN_180252bd0(&local_e8,lVar9,local_d8,&local_58);
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    cVar4 = (char)local_e0;
  }
  pcVar10 = local_e8;
  if (cVar4 == '\0') {
    pcVar10 = (char *)0x0;
  }
  if (pcVar10 == (char *)0x0) {
LAB_1802d4a35:
    bVar12 = 0;
  }
  else {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_a8 = _DAT_180bb8890;
    lStack_a0 = lRam0000000180bb8898;
    uStack_98 = uRam0000000180bb88a0;
    uStack_90 = uRam0000000180bb88a8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    if (pcVar10 != local_a8) goto LAB_1802d4a35;
    bVar12 = 1;
  }
  if (pcVar14 != (char *)0x0) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_a8 = _DAT_180bb8890;
    lStack_a0 = lRam0000000180bb8898;
    uStack_98 = uRam0000000180bb88a0;
    uStack_90 = uRam0000000180bb88a8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    if (((pcVar14 == local_a8) && (pcVar10 != (char *)0x0)) && (bVar12 == 0)) {
      DAT_180b8e5d8 = GetTickCount64();
    }
  }
  iVar5 = FUN_1805f68d0(&DAT_180cc9b08);
  puVar2 = DAT_180cc9a10;
  if (iVar5 == 0) {
    puVar1 = DAT_180cc9a08;
    if (DAT_180cc9b54 != 0x7fffffff) {
      for (; puVar1 != puVar2; puVar1 = puVar1 + 0x27a) {
        *(byte *)((longlong)puVar1 + 0x13a2) = *(byte *)((longlong)puVar1 + 0x13a2) | bVar12;
        if (pcVar11 == (char *)0x0) {
          if ((pcVar10 == (char *)0x0) || (bVar15 = true, pcVar10 != (char *)puVar1[1])) {
            bVar15 = false;
          }
        }
        else {
          bVar15 = pcVar11 == (char *)*puVar1;
        }
        *(byte *)((longlong)puVar1 + 0x13a3) = *(byte *)((longlong)puVar1 + 0x13a3) | bVar15;
      }
      FUN_1805f68fc(&DAT_180cc9b08);
    }
    DAT_180cc9b54 = 0x7ffffffe;
LAB_1802d4b3b:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
LAB_1802d4b46:
                    /* WARNING: Subroutine does not return */
  FUN_1805f6d44(5);
}



