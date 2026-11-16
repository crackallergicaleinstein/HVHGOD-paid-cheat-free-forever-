// FUN_180197e40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180197e40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180197e40(byte param_1)

{
  longlong *plVar1;
  size_t sVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  char cVar8;
  int iVar9;
  ULONGLONG UVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *_Buf1;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *******_Buf2;
  longlong *plVar18;
  undefined8 *puVar19;
  longlong lVar20;
  char *pcVar21;
  bool bVar22;
  undefined8 uVar23;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_728 [32];
  undefined **local_708;
  char *local_700;
  uint local_6f8;
  byte local_6e8;
  longlong local_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  ulonglong local_6a0;
  ulonglong *local_698;
  ulonglong *local_690;
  undefined8 *******local_680 [2];
  size_t local_670;
  ulonglong local_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined *local_650;
  undefined8 local_648;
  char local_63c [4];
  char local_638 [1536];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_728;
  bVar22 = false;
  local_650 = (undefined *)((ulonglong)local_650 & 0xffffffff00000000);
  local_6e8 = param_1;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_6e0 = _DAT_180bb8890;
  uStack_6d8 = uRam0000000180bb8898;
  uStack_6d0 = uRam0000000180bb88a0;
  uStack_6c8 = uRam0000000180bb88a8;
  local_660 = _DAT_180bb88b0;
  uStack_658 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  UVar10 = GetTickCount64();
  if (UVar10 < DAT_180bbe8e0) {
    FUN_1801971a0();
  }
  FUN_180197540(&local_6a0);
  local_650 = &DAT_1808da720;
  iVar9 = FUN_1805f68d0(&DAT_1808da720);
  if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808da76c == 0x7fffffff) {
    DAT_1808da76c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  FUN_1801780e0(&DAT_180bbe908,local_698,(longlong)local_690 - (longlong)local_698 >> 3);
  uVar23 = FUN_1805f68fc(&DAT_1808da720);
  if ((param_1 == 0) || (local_6e0 == 0)) {
    uVar11 = local_6a0;
  }
  else {
    uVar11 = FUN_1801973d0();
    uVar23 = extraout_XMM0_Qa;
  }
  if (uVar11 != DAT_180bbe8c8) {
    FUN_1801acd50(&DAT_180bb9050);
    local_648 = FUN_180113860(&DAT_180bbe948);
    uVar23 = DAT_180bbe948;
    local_650 = DAT_180bbe940;
    DAT_180bbe940 = (undefined *)0x0;
    LOCK();
    DAT_180bbe948 = 0;
    UNLOCK();
    if (((byte)uVar23 & 3) == 2) {
      FUN_1805fa36c(&DAT_180bbe948);
    }
    uVar23 = FUN_1800efed0(&local_650);
  }
  puVar12 = DAT_180bbe8f8;
  DAT_180bbe8e0 = UVar10 + 1000;
  puVar17 = DAT_180bbe8f0;
  DAT_180bbe8c8 = uVar11;
  if (DAT_180bbe8f0 != DAT_180bbe8f8) {
    do {
      uVar23 = FUN_18015c010(puVar17);
      puVar17 = puVar17 + 4;
    } while (puVar17 != puVar12);
    DAT_180bbe8f8 = DAT_180bbe8f0;
  }
  puVar7 = local_690;
  puVar6 = local_698;
  if (local_6a0 == DAT_180bbe8c8) {
    for (; puVar6 != puVar7; puVar6 = puVar6 + 1) {
      pcVar21 = local_63c + 1;
      uVar11 = *puVar6;
      do {
        pcVar21 = pcVar21 + -1;
        uVar15 = uVar11 / 10;
        *pcVar21 = (char)uVar11 + (char)uVar15 * -10 + '0';
        uVar11 = uVar15;
      } while (uVar15 != 0);
      FUN_18015bdb0(local_680,pcVar21,local_63c + 1);
      FUN_1801b1650(&DAT_180bbe8f0,local_680);
      uVar23 = FUN_18015c010(local_680);
    }
  }
  if (param_1 != 0) {
    puVar12 = (undefined8 *)FUN_1803d44c0(uVar23,local_680,1);
    plVar1 = (longlong *)puVar12[1];
    for (plVar18 = (longlong *)*puVar12; plVar18 != plVar1; plVar18 = plVar18 + 3) {
      if ((*plVar18 != 0) && (uVar11 = FUN_1801973d0(), uVar11 != 0)) {
        pcVar21 = local_63c + 1;
        do {
          pcVar21 = pcVar21 + -1;
          uVar15 = uVar11 / 10;
          *pcVar21 = (char)uVar11 + (char)uVar15 * -10 + '0';
          uVar11 = uVar15;
        } while (uVar15 != 0);
        FUN_18015bdb0(&local_6e0,pcVar21,local_63c + 1);
        FUN_1801b1650(&DAT_180bbe8f0,&local_6e0);
        FUN_18015c010(&local_6e0);
      }
      if (0x7e < (ulonglong)((longlong)DAT_180bbe8f8 - (longlong)DAT_180bbe8f0 >> 5)) break;
    }
    FUN_1801abba0(local_680);
  }
  if (DAT_180bbe8c8 != 0) {
    pcVar21 = local_63c + 1;
    uVar11 = DAT_180bbe8c8;
    do {
      pcVar21 = pcVar21 + -1;
      uVar15 = uVar11 / 10;
      *pcVar21 = (char)uVar11 + (char)uVar15 * -10 + '0';
      uVar11 = uVar15;
    } while (uVar15 != 0);
    FUN_18015bdb0(&local_6e0,pcVar21,local_63c + 1);
    FUN_1801b1650(&DAT_180bbe8f0,&local_6e0);
    FUN_18015c010(&local_6e0);
  }
  FUN_1801b4c40(DAT_180bbe8f0,DAT_180bbe8f8,(longlong)DAT_180bbe8f8 - (longlong)DAT_180bbe8f0 >> 5,0
               );
  puVar12 = DAT_180bbe8f8;
  puVar17 = puVar12;
  if (DAT_180bbe8f0 != DAT_180bbe8f8) {
    puVar16 = DAT_180bbe8f0 + 4;
    puVar14 = DAT_180bbe8f0;
    if (DAT_180bbe8f0 + 4 != DAT_180bbe8f8) {
LAB_180198284:
      puVar13 = puVar16;
      puVar16 = puVar13;
      if (0xf < (ulonglong)puVar13[3]) {
        puVar16 = (undefined8 *)*puVar13;
      }
      sVar2 = puVar14[2];
      _Buf1 = puVar14;
      if (0xf < (ulonglong)puVar14[3]) {
        _Buf1 = (undefined8 *)*puVar14;
      }
      if ((sVar2 != puVar13[2]) ||
         ((puVar19 = puVar13 + 4, sVar2 != 0 && (iVar9 = memcmp(_Buf1,puVar16,sVar2), iVar9 != 0))))
      goto LAB_1801982ba;
      puVar16 = puVar14;
      if (puVar19 != puVar12) {
        do {
          puVar17 = puVar19;
          if (0xf < (ulonglong)puVar19[3]) {
            puVar17 = (undefined8 *)*puVar19;
          }
          sVar2 = puVar16[2];
          puVar13 = puVar16;
          if (0xf < (ulonglong)puVar16[3]) {
            puVar13 = (undefined8 *)*puVar16;
          }
          if (((sVar2 != puVar19[2]) ||
              ((puVar14 = puVar16, sVar2 != 0 && (iVar9 = memcmp(puVar13,puVar17,sVar2), iVar9 != 0)
               ))) && (puVar14 = puVar16 + 4, puVar14 != puVar19)) {
            FUN_18015c010(puVar14);
            uVar23 = puVar19[1];
            uVar3 = puVar19[2];
            uVar4 = puVar19[3];
            *puVar14 = *puVar19;
            puVar16[5] = uVar23;
            puVar16[6] = uVar3;
            puVar16[7] = uVar4;
            puVar19[2] = 0;
            puVar19[3] = 0xf;
            *(undefined1 *)puVar19 = 0;
          }
          puVar19 = puVar19 + 4;
          puVar16 = puVar14;
        } while (puVar19 != puVar12);
        puVar17 = DAT_180bbe8f8;
      }
      puVar14 = puVar14 + 4;
      puVar16 = puVar17;
      if (puVar14 != puVar12) {
        for (; puVar13 = puVar14, puVar12 != puVar17; puVar12 = puVar12 + 4) {
          if (puVar14 != puVar12) {
            FUN_18015c010(puVar14);
            uVar23 = puVar12[1];
            uVar3 = puVar12[2];
            uVar4 = puVar12[3];
            *puVar14 = *puVar12;
            puVar14[1] = uVar23;
            puVar14[2] = uVar3;
            puVar14[3] = uVar4;
            puVar12[2] = 0;
            puVar12[3] = 0xf;
            *(undefined1 *)puVar12 = 0;
          }
          puVar14 = puVar14 + 4;
          puVar16 = DAT_180bbe8f8;
        }
        for (; puVar13 != puVar16; puVar13 = puVar13 + 4) {
          FUN_18015c010(puVar13);
        }
        puVar17 = puVar14;
        DAT_180bbe8f8 = puVar14;
      }
    }
  }
LAB_1801983b3:
  if ((ulonglong)((longlong)puVar17 - (longlong)DAT_180bbe8f0 >> 5) < 0x81) goto LAB_18019856f;
  FUN_1801b1480();
  if (DAT_180bbe8c8 == 0) {
    puVar17 = DAT_180bbe8f8;
LAB_1801984a9:
    bVar5 = false;
  }
  else {
    pcVar21 = local_63c + 1;
    uVar11 = DAT_180bbe8c8;
    do {
      pcVar21 = pcVar21 + -1;
      uVar15 = uVar11 / 10;
      *pcVar21 = (char)uVar11 + (char)uVar15 * -10 + '0';
      uVar11 = uVar15;
    } while (uVar15 != 0);
    FUN_18015bdb0(local_680,pcVar21,local_63c + 1);
    puVar17 = DAT_180bbe8f8;
    bVar22 = true;
    puVar12 = DAT_180bbe8f0;
    if (DAT_180bbe8f0 != DAT_180bbe8f8) {
      do {
        _Buf2 = local_680;
        if (0xf < local_668) {
          _Buf2 = local_680[0];
        }
        sVar2 = puVar12[2];
        puVar14 = puVar12;
        if (0xf < (ulonglong)puVar12[3]) {
          puVar14 = (undefined8 *)*puVar12;
        }
        if ((sVar2 == local_670) &&
           ((sVar2 == 0 || (iVar9 = memcmp(puVar14,_Buf2,sVar2), iVar9 == 0)))) break;
        puVar12 = puVar12 + 4;
      } while (puVar12 != puVar17);
      if (puVar12 != puVar17) goto LAB_1801984a9;
    }
    bVar5 = true;
  }
  if (bVar22) {
    FUN_18015c010(local_680);
    puVar17 = DAT_180bbe8f8;
  }
  if (bVar5) {
    pcVar21 = local_63c + 1;
    uVar11 = DAT_180bbe8c8;
    do {
      pcVar21 = pcVar21 + -1;
      uVar15 = uVar11 / 10;
      *pcVar21 = (char)uVar11 + (char)uVar15 * -10 + '0';
      uVar11 = uVar15;
    } while (uVar15 != 0);
    FUN_18015bdb0(&local_6c0,pcVar21,local_63c + 1);
    param_1 = local_6e8;
    puVar12 = DAT_180bbe8f8;
    puVar17 = DAT_180bbe8f8 + -4;
    if (puVar17 != &local_6c0) {
      FUN_18015c010(puVar17);
      *puVar17 = CONCAT71(local_6c0._1_7_,(undefined1)local_6c0);
      puVar12[-3] = uStack_6b8;
      puVar12[-2] = uStack_6b0;
      puVar12[-1] = uStack_6a8;
      uStack_6b0 = 0;
      uStack_6a8 = 0xf;
      local_6c0._0_1_ = 0;
    }
    FUN_18015c010(&local_6c0);
    puVar17 = DAT_180bbe8f8;
  }
LAB_18019856f:
  if ((DAT_180ccaa10 & 1) == 0) {
    DAT_180ccaa10 = DAT_180ccaa10 | 1;
    atexit(FUN_180662050);
    puVar17 = DAT_180bbe8f8;
  }
  lVar20 = (longlong)puVar17 - (longlong)DAT_180bbe8f0 >> 5;
  if ((DAT_180bb8760 - DAT_180bb8758 >> 5 != lVar20) ||
     (cVar8 = FUN_1801ae9d0(DAT_180bb8758,DAT_180bb8760,DAT_180bbe8f0), cVar8 == '\0')) {
    DAT_1808da6f0 = 1;
    FUN_18013ef90(&DAT_180bb8758,DAT_180bbe8f0,lVar20);
    puVar12 = DAT_180bbe8f8;
    FUN_18063ab10(local_638,0,0x600);
    local_700 = (char *)((longlong)puVar12 - (longlong)DAT_180bbe8f0 >> 5);
    local_708 = (undefined **)((longlong)local_690 - (longlong)local_698 >> 3);
    local_6f8 = (uint)param_1;
    FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"party=%zu total=%zu world=%d");
    local_708 = &PTR_180700558;
    if (local_638[0] != '\0') {
      local_708 = (undefined **)&DAT_1806bcfc0;
    }
    local_700 = local_638;
    FUN_1800f6900(0);
  }
  FUN_1801971a0();
  FUN_1800f0160(&local_698);
LAB_1801982ba:
  puVar16 = puVar13 + 4;
  puVar14 = puVar13;
  if (puVar13 + 4 == puVar12) goto LAB_1801983b3;
  goto LAB_180198284;
}



