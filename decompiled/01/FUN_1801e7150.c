// FUN_1801e7150 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e7150 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801e7150(void)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  char cVar7;
  char cVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ULONGLONG UVar12;
  char *******pppppppcVar13;
  undefined1 *puVar14;
  undefined1 (*pauVar15) [16];
  undefined8 uVar16;
  undefined8 *puVar17;
  undefined1 *puVar18;
  int iVar19;
  longlong *plVar20;
  ulonglong uVar21;
  ulonglong uVar22;
  undefined8 *******pppppppuVar23;
  undefined1 (*pauVar24) [16];
  char *pcVar25;
  undefined1 (*pauVar26) [16];
  uint uVar27;
  undefined8 *puVar28;
  char cVar29;
  char cVar30;
  char *pcVar31;
  char *******pppppppcVar32;
  char *******pppppppcVar33;
  ulonglong uVar34;
  short sVar35;
  uint uVar36;
  undefined4 uVar37;
  bool bVar38;
  undefined1 auStack_948 [32];
  undefined **local_928;
  char *******local_920;
  char *******local_918;
  undefined1 (*local_910) [16];
  undefined1 (*local_908) [16];
  undefined1 (*local_900) [16];
  char local_8f8;
  undefined1 (*local_8f0) [16];
  uint local_8e8;
  char local_8e4;
  undefined8 local_8e0;
  undefined1 (*local_8d8 [2]) [16];
  undefined1 local_8c8 [16];
  undefined1 local_8b8 [16];
  longlong *local_8a8;
  undefined1 local_8a0 [16];
  undefined1 local_890 [16];
  undefined1 local_880 [16];
  undefined1 local_870 [16];
  undefined1 local_860 [16];
  undefined8 local_850;
  undefined8 uStack_848;
  undefined1 local_840 [16];
  undefined8 local_830;
  undefined8 uStack_828;
  undefined1 local_820 [16];
  undefined8 local_810;
  undefined8 uStack_808;
  undefined1 local_800 [32];
  undefined1 local_7e0 [32];
  longlong local_7c0;
  ushort *local_7b8;
  undefined8 local_7b0;
  longlong lStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 local_790;
  undefined8 uStack_788;
  char *******local_780 [2];
  ulonglong local_770;
  ulonglong local_768;
  undefined1 (*local_760 [2]) [16];
  ulonglong local_750;
  ulonglong local_748;
  undefined8 *******local_740 [2];
  ulonglong local_730;
  ulonglong local_728;
  undefined1 local_718 [64];
  undefined1 local_6d8 [152];
  char local_640;
  char local_638 [1536];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_948;
  local_8d8[0] = (undefined1 (*) [16])((ulonglong)local_8d8[0] & 0xffffffff00000000);
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_7b0 = _DAT_180bb8890;
  lStack_7a8 = lRam0000000180bb8898;
  uStack_7a0 = uRam0000000180bb88a0;
  uStack_798 = uRam0000000180bb88a8;
  local_790 = _DAT_180bb88b0;
  uStack_788 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  lVar11 = lStack_7a8;
  if (((char)uStack_788 == '\0') || (lStack_7a8 == 0)) {
    FUN_1801fa320();
    DAT_180b902d8 = 0;
    DAT_180b902f8 = (undefined1 (*) [16])0x0;
    DAT_180b90300 = (undefined1 (*) [16])0x0;
    DAT_180b9030b = 0;
    DAT_180bbeb00 = 0;
  }
  if (DAT_180bb88c9 != '\0') {
  }
  lVar10 = FUN_18017ea70();
  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
  if (lVar11 + 0x10 == 0) {
    bVar38 = false;
  }
  else {
    local_8f0 = (undefined1 (*) [16])0x0;
    cVar7 = FUN_1804514f0(&local_8f0,lVar11 + 0x10,8);
    if (cVar7 == '\0') {
      bVar38 = false;
    }
    else {
      bVar38 = true;
    }
  }
  pauVar15 = local_8f0;
  lVar11 = FUN_18017ea70();
  if (*(int *)(lVar11 + 4) != 0) {
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
  }
  if (!bVar38) {
  }
  if (pauVar15 == (undefined1 (*) [16])0x0) {
  }
  lVar11 = FUN_18017ea70();
  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
  uVar27 = 4;
  pauVar15 = pauVar15 + 1;
  if (pauVar15 == (undefined1 (*) [16])0x0) {
    bVar38 = false;
    uVar9 = (uint)local_8d8[0];
  }
  else {
    local_8e8 = 0;
    cVar7 = FUN_1804514f0(&local_8e8,pauVar15,4);
    if (cVar7 == '\0') {
      bVar38 = false;
      uVar9 = (uint)local_8d8[0];
    }
    else {
      bVar38 = true;
      uVar9 = local_8e8;
    }
  }
  lVar11 = FUN_18017ea70();
  iVar19 = *(int *)(lVar11 + 4);
  if (iVar19 != 0) {
    iVar19 = iVar19 + -1;
    *(int *)(lVar11 + 4) = iVar19;
  }
  uVar36 = 0xffffffff;
  if (bVar38) {
    uVar36 = uVar9;
  }
  if (uVar36 == 0xffffffff) {
  }
  lVar10 = FUN_1803d4150(iVar19,uVar36);
  lVar11 = DAT_180cc8148;
  if (lVar10 != lStack_7a8) {
  }
  if (DAT_180cc8148 != DAT_180b902e0) {
    DAT_180b902c0 = 0;
    pcVar25 = (char *)&DAT_180b902b0;
    if (0xf < DAT_180b902c8) {
      pcVar25 = DAT_180b902b0;
    }
    *pcVar25 = '\0';
    DAT_180b902d0 = 0;
    DAT_180b902d8 = 0;
    DAT_180b902e0 = lVar11;
  }
  iVar19 = DAT_180c631a0;
  if (DAT_180c631a0 == 0) {
    UVar12 = GetTickCount64();
    if (UVar12 < DAT_180c63198) {
      iVar19 = 0;
    }
    else {
      local_8f0 = (undefined1 (*) [16])&DAT_1808e6e90;
      iVar19 = FUN_1805f68d0(&DAT_1808e6e90);
      if (iVar19 != 0) goto LAB_1801e97a2;
      if (DAT_1808e6edc == 0x7fffffff) {
        DAT_1808e6edc = 0x7ffffffe;
        goto LAB_1801e97b7;
      }
      if ((DAT_180c631a0 == 0) && (DAT_180c63198 <= UVar12)) {
        DAT_180c631a0 = FUN_1804174b0("C_BaseEntity",0xa5bfefb3);
        if (DAT_180c631a0 == 0) {
          DAT_180c63198 = UVar12 + 1000;
        }
        else {
          DAT_180c63198 = 0xffffffffffffffff;
        }
      }
      iVar19 = DAT_180c631a0;
      FUN_1805f68fc(&DAT_1808e6e90);
    }
  }
  bVar1 = *(byte *)(iVar19 + lStack_7a8);
  if ((bVar1 != 2) && (bVar1 != 3)) {
  }
  uVar9 = (uint)bVar1;
  uVar3 = DAT_180cc8150;
  if (bVar1 == 2) {
    uVar3 = DAT_180cc8152;
  }
  local_7b8 = (ushort *)0x0;
  if (uVar3 != 0) {
    plVar20 = (longlong *)
              (((((ulonglong)uVar3 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)(uVar3 >> 8)) * 0x100000001b3 & DAT_180cc9cb8) * 0x10 + DAT_180cc9ca0);
    lVar11 = plVar20[1];
    if (lVar11 == DAT_180cc9c90) {
LAB_1801e7491:
      lVar11 = 0;
    }
    else {
      uVar2 = *(ushort *)(lVar11 + 0x10);
      while (uVar3 != uVar2) {
        if (lVar11 == *plVar20) goto LAB_1801e7491;
        lVar11 = *(longlong *)(lVar11 + 8);
        uVar2 = *(ushort *)(lVar11 + 0x10);
      }
    }
    lVar10 = DAT_180cc9c90;
    if (lVar11 != 0) {
      lVar10 = lVar11;
    }
    if (((lVar10 != DAT_180cc9c90) &&
        (local_7b8 = (ushort *)(*(longlong *)(lVar10 + 0x18) * 0xb8 + DAT_180cc9bf8),
        local_7b8 != (ushort *)0x0)) && ((char)local_7b8[0x59] == '\0')) {
      local_7b8 = (ushort *)0x0;
    }
  }
  if ((DAT_180b902e8 != lStack_7a8) || (DAT_180b902f0 != uVar36)) {
    DAT_180b90260 = 0;
    pppppppcVar13 = (char *******)&DAT_180b90250;
    if (0xf < DAT_180b90268) {
      pppppppcVar13 = DAT_180b90250;
    }
    *(char *)pppppppcVar13 = '\0';
    DAT_180b9030a = '\0';
    DAT_180b902a0 = 0;
    pcVar25 = (char *)&DAT_180b90290;
    if (0xf < DAT_180b902a8) {
      pcVar25 = DAT_180b90290;
    }
    *pcVar25 = '\0';
    DAT_180b9030b = '\0';
    DAT_180b902f8 = (undefined1 (*) [16])0x0;
    DAT_180b90300 = (undefined1 (*) [16])0x0;
    DAT_180b90308 = 0;
    DAT_180b90280 = 0;
    pcVar25 = (char *)&DAT_180b90270;
    if (0xf < DAT_180b90288) {
      pcVar25 = DAT_180b90270;
    }
    *pcVar25 = '\0';
    DAT_180b902c0 = 0;
    pcVar25 = (char *)&DAT_180b902b0;
    if (0xf < DAT_180b902c8) {
      pcVar25 = DAT_180b902b0;
    }
    *pcVar25 = '\0';
    DAT_180b902d0 = 0;
    DAT_180b902d8 = 0;
    DAT_180b9030c = 0;
    DAT_180b902e8 = lStack_7a8;
    DAT_180b902f0 = uVar36;
  }
  iVar19 = DAT_180c6318c;
  local_8e8 = uVar9;
  if (DAT_180c6318c == 0) {
    UVar12 = GetTickCount64();
    if (UVar12 < DAT_180c63190) {
      iVar19 = 0;
    }
    else {
      local_8f0 = (undefined1 (*) [16])&DAT_1808e6e40;
      iVar19 = FUN_1805f68d0(&DAT_1808e6e40);
      if (iVar19 != 0) goto LAB_1801e97a2;
      if (DAT_1808e6e8c == 0x7fffffff) {
        DAT_1808e6e8c = 0x7ffffffe;
        goto LAB_1801e97b7;
      }
      if ((DAT_180c6318c == 0) && (DAT_180c63190 <= UVar12)) {
        DAT_180c6318c = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c6318c == 0) {
          DAT_180c63190 = UVar12 + 1000;
        }
        else {
          DAT_180c63190 = 0xffffffffffffffff;
        }
      }
      iVar19 = DAT_180c6318c;
      FUN_1805f68fc(&DAT_1808e6e40);
    }
  }
  lVar11 = *(longlong *)(iVar19 + lStack_7a8);
  if (lVar11 == 0) {
  }
  iVar19 = DAT_180c63188;
  if (DAT_180c63188 == 0) {
    UVar12 = GetTickCount64();
    if (UVar12 < DAT_180c63180) {
      iVar19 = 0;
    }
    else {
      local_8f0 = (undefined1 (*) [16])&DAT_1808e6df0;
      iVar19 = FUN_1805f68d0(&DAT_1808e6df0);
      if (iVar19 != 0) goto LAB_1801e97a2;
      if (DAT_1808e6e3c == 0x7fffffff) {
        DAT_1808e6e3c = 0x7ffffffe;
        goto LAB_1801e97b7;
      }
      if ((DAT_180c63188 == 0) && (DAT_180c63180 <= UVar12)) {
        DAT_180c63188 = FUN_1804174b0("CSkeletonInstance",0x52ac8c4f);
        if (DAT_180c63188 == 0) {
          DAT_180c63180 = UVar12 + 1000;
        }
        else {
          DAT_180c63180 = 0xffffffffffffffff;
        }
      }
      iVar19 = DAT_180c63188;
      FUN_1805f68fc(&DAT_1808e6df0);
    }
  }
  local_7c0 = iVar19 + lVar11;
  iVar19 = DAT_180c63174;
  if (DAT_180c63174 == 0) {
    UVar12 = GetTickCount64();
    if (UVar12 < DAT_180c63178) {
      iVar19 = 0;
    }
    else {
      local_8f0 = (undefined1 (*) [16])&DAT_1808e6da0;
      iVar19 = FUN_1805f68d0(&DAT_1808e6da0);
      if (iVar19 != 0) goto LAB_1801e97a2;
      if (DAT_1808e6dec == 0x7fffffff) {
        DAT_1808e6dec = 0x7ffffffe;
        goto LAB_1801e97b7;
      }
      if ((DAT_180c63174 == 0) && (DAT_180c63178 <= UVar12)) {
        DAT_180c63174 = FUN_1804174b0("CModelState",0xe100c814);
        if (DAT_180c63174 == 0) {
          DAT_180c63178 = UVar12 + 1000;
        }
        else {
          DAT_180c63178 = 0xffffffffffffffff;
        }
      }
      iVar19 = DAT_180c63174;
      FUN_1805f68fc(&DAT_1808e6da0);
    }
  }
  lVar10 = iVar19 + local_7c0;
  lVar11 = FUN_18017ea70();
  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
  bVar38 = false;
  if (lVar10 != 0) {
    local_8f0 = (undefined1 (*) [16])0x0;
    cVar7 = FUN_1804514f0(&local_8f0,lVar10,8);
    if (cVar7 == '\0') {
      bVar38 = false;
    }
    else {
      bVar38 = true;
    }
  }
  pauVar15 = local_8f0;
  lVar11 = FUN_18017ea70();
  if (*(int *)(lVar11 + 4) != 0) {
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
  }
  pauVar26 = (undefined1 (*) [16])0x0;
  if (bVar38) {
    pauVar26 = pauVar15;
  }
  iVar19 = DAT_180c63170;
  local_8f0 = pauVar26;
  if (DAT_180c63170 == 0) {
    UVar12 = GetTickCount64();
    if (UVar12 < DAT_180c63168) {
      iVar19 = 0;
    }
    else {
      local_8e0 = (undefined1 (*) [16])&DAT_1808e6d50;
      iVar19 = FUN_1805f68d0(&DAT_1808e6d50);
      if (iVar19 != 0) {
LAB_1801e97a2:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808e6d9c == 0x7fffffff) {
        DAT_1808e6d9c = 0x7ffffffe;
LAB_1801e97b7:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c63170 == 0) && (DAT_180c63168 <= UVar12)) {
        DAT_180c63170 = FUN_1804174b0("CModelState",0xd7a1d881);
        if (DAT_180c63170 == 0) {
          DAT_180c63168 = UVar12 + 1000;
        }
        else {
          DAT_180c63168 = 0xffffffffffffffff;
        }
      }
      iVar19 = DAT_180c63170;
      FUN_1805f68fc(&DAT_1808e6d50);
    }
  }
  lVar10 = iVar19 + local_7c0;
  lVar11 = FUN_18017ea70();
  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
  if (lVar10 == 0) {
    bVar38 = false;
    pauVar15 = local_8f0;
  }
  else {
    local_8e0 = (undefined1 (*) [16])0x0;
    cVar7 = FUN_1804514f0(&local_8e0,lVar10,8);
    if (cVar7 == '\0') {
      bVar38 = false;
      pauVar15 = local_8f0;
    }
    else {
      bVar38 = true;
      pauVar15 = local_8e0;
    }
  }
  lVar11 = FUN_18017ea70();
  if (*(int *)(lVar11 + 4) != 0) {
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
  }
  pauVar24 = (undefined1 (*) [16])0x0;
  if (bVar38) {
    pauVar24 = pauVar15;
  }
  FUN_180184460(local_780,pauVar24);
  if ((pauVar26 == (undefined1 (*) [16])0x0) || (local_770 == 0)) goto LAB_1801e973c;
  FUN_1801ef200(local_718,uVar9);
  if ((local_640 == '\0') ||
     (((cVar7 = FUN_1801ef840(local_718), cVar7 == '\0' ||
       (cVar7 = FUN_1801ef550(local_718), cVar7 == '\0')) ||
      (cVar7 = FUN_1801efc70(local_718), cVar7 == '\0')))) {
    cVar7 = '\0';
  }
  else {
    cVar7 = '\x01';
  }
  local_8f8 = cVar7;
  if (cVar7 == '\0') {
    if (local_7b8 == (ushort *)0x0) {
      local_810 = 0;
      uStack_808 = 0xf;
      local_820._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar4[0xf] = 0;
      auVar4._0_15_ = local_820._1_15_;
      local_820 = auVar4 << 8;
      pauVar15 = &local_820;
    }
    else {
      pauVar15 = (undefined1 (*) [16])FUN_18015b360(local_800,local_7b8 + 0x34);
      uVar27 = 2;
    }
    local_8d8[0] = (undefined1 (*) [16])CONCAT44(local_8d8[0]._4_4_,uVar27);
    local_8c8 = (undefined1  [16])0x0;
    local_8b8 = (undefined1  [16])0x0;
    uVar34 = *(ulonglong *)pauVar15[1];
    if (0xf < *(ulonglong *)(pauVar15[1] + 8)) {
      pauVar15 = *(undefined1 (**) [16])*pauVar15;
    }
    if (0x7fffffffffffffff < uVar34) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    if (uVar34 < 0x10) {
      local_8b8._8_8_ = 0xf;
      local_8b8._0_8_ = uVar34;
      local_8c8 = *pauVar15;
    }
    else {
      uVar21 = uVar34 | 0xf;
      if (uVar21 < 0x8000000000000000) {
        if (uVar21 < 0x16) {
          uVar21 = 0x16;
        }
      }
      else {
        uVar21 = 0x7fffffffffffffff;
      }
      uVar16 = FUN_18015bca0(uVar21 + 1);
      local_8c8._0_8_ = uVar16;
      local_8b8._8_8_ = uVar21;
      local_8b8._0_8_ = uVar34;
      FUN_18063aed0(uVar16,pauVar15,uVar34 + 1);
      cVar7 = local_8f8;
    }
    puVar14 = local_8c8;
    uVar27 = uVar27 | 8;
  }
  else {
    puVar14 = (undefined1 *)FUN_18015b360(local_7e0,local_6d8);
    uVar27 = 1;
  }
  local_8d8[0] = (undefined1 (*) [16])CONCAT44(local_8d8[0]._4_4_,uVar27);
  FUN_18015b360(local_760,puVar14);
  if ((uVar27 & 8) != 0) {
    uVar27 = uVar27 & 0xfffffff7;
    FUN_18015c010();
  }
  if ((uVar27 & 4) != 0) {
    uVar27 = uVar27 & 0xfffffffb;
    FUN_18015c010();
  }
  if ((uVar27 & 2) != 0) {
    uVar27 = uVar27 & 0xfffffffd;
    FUN_18015c010();
  }
  if ((uVar27 & 1) != 0) {
    uVar27 = uVar27 & 0xfffffffe;
    FUN_18015c010();
  }
  pauVar15 = local_8f0;
  if (cVar7 != '\0') {
    local_8c8._8_8_ = &local_7b8;
    local_8c8._0_8_ = local_718;
    local_8b8._8_8_ = &local_7b0;
    local_8b8._0_8_ = &DAT_180b90250;
    local_8a8 = &local_7c0;
    pauVar26 = (undefined1 (*) [16])local_760;
    if (0xf < local_748) {
      pauVar26 = local_760[0];
    }
    pppppppcVar13 = (char *******)local_780;
    if (0xf < local_768) {
      pppppppcVar13 = local_780[0];
    }
    uVar34 = local_770;
    if (1 < local_770) {
      bVar1 = *(byte *)((longlong)pppppppcVar13 + (local_770 - 2));
      bVar38 = bVar1 < 0x5f;
      if ((bVar1 == 0x5f) &&
         (bVar1 = *(byte *)((longlong)pppppppcVar13 + (local_770 - 1)), bVar38 = bVar1 < 99,
         bVar1 == 99)) {
        uVar9 = 0;
      }
      else {
        uVar9 = -(uint)bVar38 | 1;
      }
      if (uVar9 == 0) {
        uVar34 = local_770 - 2;
      }
    }
    uVar21 = local_750;
    if (1 < local_750) {
      bVar38 = (byte)pauVar26[-1][local_750 + 0xe] < 0x5f;
      if ((pauVar26[-1][local_750 + 0xe] == 0x5f) &&
         (bVar38 = (byte)pauVar26[-1][local_750 + 0xf] < 99, pauVar26[-1][local_750 + 0xf] == 99)) {
        uVar9 = 0;
      }
      else {
        uVar9 = -(uint)bVar38 | 1;
      }
      if (uVar9 == 0) {
        uVar21 = local_750 - 2;
      }
    }
    uVar22 = (ulonglong)local_8e0 >> 0x10;
    local_8e0 = (undefined1 (*) [16])(uVar22 << 0x10);
    if ((uVar34 == 0) || (local_8e0 = (undefined1 (*) [16])(uVar22 << 0x10), uVar34 != uVar21)) {
LAB_1801e7d20:
      pauVar15 = (undefined1 (*) [16])local_760;
      if (0xf < local_748) {
        pauVar15 = local_760[0];
      }
      pppppppcVar13 = (char *******)local_780;
      if (0xf < local_768) {
        pppppppcVar13 = local_780[0];
      }
      uVar34 = local_770;
      if (1 < local_770) {
        bVar1 = *(byte *)((longlong)pppppppcVar13 + (local_770 - 2));
        bVar38 = bVar1 < 0x5f;
        if ((bVar1 == 0x5f) &&
           (bVar1 = *(byte *)((longlong)pppppppcVar13 + (local_770 - 1)), bVar38 = bVar1 < 99,
           bVar1 == 99)) {
          uVar9 = 0;
        }
        else {
          uVar9 = -(uint)bVar38 | 1;
        }
        if (uVar9 == 0) {
          uVar34 = local_770 - 2;
        }
      }
      uVar21 = local_750;
      if (1 < local_750) {
        bVar38 = (byte)pauVar15[-1][local_750 + 0xe] < 0x5f;
        if ((pauVar15[-1][local_750 + 0xe] == 0x5f) &&
           (bVar38 = (byte)pauVar15[-1][local_750 + 0xf] < 99, pauVar15[-1][local_750 + 0xf] == 99))
        {
          uVar9 = 0;
        }
        else {
          uVar9 = -(uint)bVar38 | 1;
        }
        if (uVar9 == 0) {
          uVar21 = local_750 - 2;
        }
      }
      if ((uVar34 == 0) || (uVar34 != uVar21)) goto LAB_1801e7e4e;
      if (uVar34 == 0) goto LAB_1801e7f3f;
      pauVar26 = pauVar15;
      do {
        cVar7 = *(char *)(((longlong)pppppppcVar13 - (longlong)pauVar15) + (longlong)pauVar26);
        cVar8 = (*pauVar26)[0];
        cVar29 = cVar7 + ' ';
        if (0x19 < (byte)(cVar7 + 0xbfU)) {
          cVar29 = cVar7;
        }
        cVar7 = cVar8 + ' ';
        if (0x19 < (byte)(cVar8 + 0xbfU)) {
          cVar7 = cVar8;
        }
        if (cVar29 != cVar7) goto LAB_1801e7e4e;
        pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
      } while ((ulonglong)((longlong)pauVar26 - (longlong)pauVar15) < uVar34);
      bVar38 = true;
      goto LAB_1801e7f48;
    }
    if (uVar34 != 0) {
      local_8e0 = (undefined1 (*) [16])(uVar22 << 0x10);
      pauVar24 = pauVar26;
      do {
        cVar7 = *(char *)(((longlong)pppppppcVar13 - (longlong)pauVar26) + (longlong)pauVar24);
        cVar8 = (*pauVar24)[0];
        cVar29 = cVar7 + ' ';
        if (0x19 < (byte)(cVar7 + 0xbfU)) {
          cVar29 = cVar7;
        }
        cVar7 = cVar8 + ' ';
        if (0x19 < (byte)(cVar8 + 0xbfU)) {
          cVar7 = cVar8;
        }
        if (cVar29 != cVar7) goto LAB_1801e7d20;
        pauVar24 = (undefined1 (*) [16])(*pauVar24 + 1);
      } while ((ulonglong)((longlong)pauVar24 - (longlong)pauVar26) < uVar34);
    }
    local_8e0 = (undefined1 (*) [16])(uVar22 << 0x10);
    if (local_8f0 == DAT_180b90300) goto LAB_1801e7d20;
    lVar11 = FUN_18017ea70();
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
    local_8d8[0] = (undefined1 (*) [16])0x0;
    cVar7 = FUN_1804514f0(local_8d8,pauVar15,8);
    pauVar15 = local_8f0;
    if (cVar7 != '\0') {
      pauVar15 = local_8d8[0];
    }
    lVar11 = FUN_18017ea70();
    if (*(int *)(lVar11 + 4) != 0) {
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
    }
    pauVar26 = (undefined1 (*) [16])0x0;
    if (cVar7 != '\0') {
      pauVar26 = pauVar15;
    }
    lVar11 = FUN_1801f2890(local_8d8,pauVar26);
    if (*(char *)(lVar11 + 0xc) != '\0') {
      DAT_180b90300 = local_8f0;
      goto LAB_1801e7d20;
    }
    FUN_1801e9800(local_8c8);
    goto LAB_1801e9722;
  }
  if (local_7b8 == (ushort *)0x0) {
    local_8e0 = (undefined1 (*) [16])((ulonglong)local_8e0._4_4_ << 0x20);
  }
  else {
    local_8e0 = (undefined1 (*) [16])CONCAT44(local_8e0._4_4_,(uint)*local_7b8);
  }
  local_8c8._8_8_ = &local_7b8;
  local_8c8._0_8_ = local_718;
  local_8b8._8_8_ = &local_7b0;
  local_8b8._0_8_ = &DAT_180b90250;
  local_8a8 = &local_7c0;
LAB_1801e7e4e:
  if (DAT_180b902a0 != 0) {
    pcVar25 = (char *)&DAT_180b90290;
    if (0xf < DAT_180b902a8) {
      pcVar25 = DAT_180b90290;
    }
    pppppppcVar13 = (char *******)local_780;
    if (0xf < local_768) {
      pppppppcVar13 = local_780[0];
    }
    uVar34 = local_770;
    if (1 < local_770) {
      bVar1 = *(byte *)((longlong)pppppppcVar13 + (local_770 - 2));
      bVar38 = bVar1 < 0x5f;
      if ((bVar1 == 0x5f) &&
         (bVar1 = *(byte *)((longlong)pppppppcVar13 + (local_770 - 1)), bVar38 = bVar1 < 99,
         bVar1 == 99)) {
        uVar9 = 0;
      }
      else {
        uVar9 = -(uint)bVar38 | 1;
      }
      if (uVar9 == 0) {
        uVar34 = local_770 - 2;
      }
    }
    uVar21 = DAT_180b902a0;
    if (1 < DAT_180b902a0) {
      bVar38 = (byte)pcVar25[DAT_180b902a0 - 2] < 0x5f;
      if ((pcVar25[DAT_180b902a0 - 2] == 0x5f) &&
         (bVar38 = (byte)pcVar25[DAT_180b902a0 - 1] < 99, pcVar25[DAT_180b902a0 - 1] == 99)) {
        uVar9 = 0;
      }
      else {
        uVar9 = -(uint)bVar38 | 1;
      }
      if (uVar9 == 0) {
        uVar21 = DAT_180b902a0 - 2;
      }
    }
    if ((uVar34 != 0) && (uVar34 == uVar21)) {
      if (uVar34 != 0) {
        pcVar31 = pcVar25;
        do {
          cVar7 = pcVar31[(longlong)pppppppcVar13 - (longlong)pcVar25];
          cVar8 = *pcVar31;
          cVar29 = cVar7 + ' ';
          if (0x19 < (byte)(cVar7 + 0xbfU)) {
            cVar29 = cVar7;
          }
          cVar7 = cVar8 + ' ';
          if (0x19 < (byte)(cVar8 + 0xbfU)) {
            cVar7 = cVar8;
          }
          if (cVar29 != cVar7) goto LAB_1801e7f46;
          pcVar31 = pcVar31 + 1;
        } while ((ulonglong)((longlong)pcVar31 - (longlong)pcVar25) < uVar34);
      }
LAB_1801e7f3f:
      bVar38 = true;
      goto LAB_1801e7f48;
    }
  }
LAB_1801e7f46:
  bVar38 = false;
LAB_1801e7f48:
  DAT_180bbeb00 = 0;
  if (bVar38) {
    DAT_180bbeb00 = lStack_7a8;
  }
  puVar14 = local_718;
  if (local_8f8 == '\0') {
    puVar14 = (undefined1 *)0x0;
  }
  FUN_1801f92b0(lStack_7a8,puVar14);
  uVar34 = local_768;
  pppppppcVar13 = local_780[0];
  if (local_750 == 0) {
    if ((DAT_180b9030a == '\0') || (DAT_180b90260 == 0)) goto LAB_1801e9722;
    if (DAT_180b9030c != local_8e8) {
LAB_1801e8193:
      uVar37 = 0;
LAB_1801e819d:
      pppppppcVar13 = (char *******)&DAT_180b90250;
      if (0xf < DAT_180b90268) {
        pppppppcVar13 = DAT_180b90250;
      }
      pppppppcVar33 = (char *******)local_780;
      if (0xf < local_768) {
        pppppppcVar33 = local_780[0];
      }
      FUN_18063ab10(local_638,0,0x600);
      local_910 = (undefined1 (*) [16])CONCAT44(local_910._4_4_,uVar37);
      local_928 = (undefined **)CONCAT44(local_928._4_4_,local_8e8);
      local_920 = pppppppcVar33;
      local_918 = pppppppcVar13;
      FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                    "team=%d current=%s original=%s native_call=%d phase=before_native_postdata_latch weapon_owner_mutations=0 forced_hull=0"
                   );
      local_928 = &PTR_180700558;
      if (local_638[0] != '\0') {
        local_928 = (undefined **)&DAT_1806bcfc0;
      }
      local_920 = (char *******)local_638;
      FUN_1800f6900(1,&DAT_1806bcfc0,"SkinChanger","AGENT_MODEL_RESTORE");
      DAT_180b902f8 = (undefined1 (*) [16])0x0;
      DAT_180b90308 = 0;
      DAT_180b90280 = 0;
      pcVar25 = (char *)&DAT_180b90270;
      if (0xf < DAT_180b90288) {
        pcVar25 = DAT_180b90270;
      }
      *pcVar25 = '\0';
      DAT_180b902c0 = 0;
      pcVar25 = (char *)&DAT_180b902b0;
      if (0xf < DAT_180b902c8) {
        pcVar25 = DAT_180b902b0;
      }
      *pcVar25 = '\0';
      DAT_180b902d0 = 0;
      DAT_180b90260 = 0;
      pppppppcVar13 = (char *******)&DAT_180b90250;
      if (0xf < DAT_180b90268) {
        pppppppcVar13 = DAT_180b90250;
      }
      *(char *)pppppppcVar13 = '\0';
      DAT_180b902d8 = 0;
      DAT_180b9030c = 0;
      DAT_180b9030a = '\0';
      DAT_180b902a0 = 0;
      pcVar25 = (char *)&DAT_180b90290;
      if (0xf < DAT_180b902a8) {
        pcVar25 = DAT_180b90290;
      }
      *pcVar25 = '\0';
      DAT_180bbeb00 = 0;
      DAT_180b9030b = '\0';
      goto LAB_1801e9722;
    }
    pcVar25 = (char *)&DAT_180b90270;
    if (0xf < DAT_180b90288) {
      pcVar25 = DAT_180b90270;
    }
    pppppppcVar13 = (char *******)local_780;
    if (0xf < local_768) {
      pppppppcVar13 = local_780[0];
    }
    uVar34 = local_770;
    if (1 < local_770) {
      bVar1 = *(byte *)((longlong)pppppppcVar13 + (local_770 - 2));
      bVar38 = bVar1 < 0x5f;
      if ((bVar1 == 0x5f) &&
         (bVar1 = *(byte *)((longlong)pppppppcVar13 + (local_770 - 1)), bVar38 = bVar1 < 99,
         bVar1 == 99)) {
        uVar27 = 0;
      }
      else {
        uVar27 = -(uint)bVar38 | 1;
      }
      if (uVar27 == 0) {
        uVar34 = local_770 - 2;
      }
    }
    uVar21 = DAT_180b90280;
    if (1 < DAT_180b90280) {
      bVar38 = (byte)pcVar25[DAT_180b90280 - 2] < 0x5f;
      if ((pcVar25[DAT_180b90280 - 2] == 0x5f) &&
         (bVar38 = (byte)pcVar25[DAT_180b90280 - 1] < 99, pcVar25[DAT_180b90280 - 1] == 99)) {
        uVar27 = 0;
      }
      else {
        uVar27 = -(uint)bVar38 | 1;
      }
      if (uVar27 == 0) {
        uVar21 = DAT_180b90280 - 2;
      }
    }
    if ((uVar34 == 0) || (uVar34 != uVar21)) goto LAB_1801e8193;
    if (uVar34 != 0) {
      pcVar31 = pcVar25;
      do {
        cVar7 = pcVar31[(longlong)pppppppcVar13 - (longlong)pcVar25];
        cVar8 = *pcVar31;
        cVar29 = cVar7 + ' ';
        if (0x19 < (byte)(cVar7 + 0xbfU)) {
          cVar29 = cVar7;
        }
        cVar7 = cVar8 + ' ';
        if (0x19 < (byte)(cVar8 + 0xbfU)) {
          cVar7 = cVar8;
        }
        if (cVar29 != cVar7) goto LAB_1801e8193;
        pcVar31 = pcVar31 + 1;
      } while ((ulonglong)((longlong)pcVar31 - (longlong)pcVar25) < uVar34);
    }
    pppppppcVar13 = (char *******)&DAT_180b90250;
    if (0xf < DAT_180b90268) {
      pppppppcVar13 = DAT_180b90250;
    }
    pppppppcVar33 = (char *******)local_780;
    if (0xf < local_768) {
      pppppppcVar33 = local_780[0];
    }
    if (1 < local_770) {
      bVar1 = *(byte *)((longlong)pppppppcVar33 + (local_770 - 2));
      bVar38 = bVar1 < 0x5f;
      if ((bVar1 == 0x5f) &&
         (bVar1 = *(byte *)((longlong)pppppppcVar33 + (local_770 - 1)), bVar38 = bVar1 < 99,
         bVar1 == 99)) {
        uVar27 = 0;
      }
      else {
        uVar27 = -(uint)bVar38 | 1;
      }
      if (uVar27 == 0) {
        local_770 = local_770 - 2;
      }
    }
    uVar34 = DAT_180b90260;
    if (1 < DAT_180b90260) {
      bVar1 = *(byte *)((longlong)pppppppcVar13 + (DAT_180b90260 - 2));
      bVar38 = bVar1 < 0x5f;
      if ((bVar1 == 0x5f) &&
         (bVar1 = *(byte *)((longlong)pppppppcVar13 + (DAT_180b90260 - 1)), bVar38 = bVar1 < 99,
         bVar1 == 99)) {
        uVar27 = 0;
      }
      else {
        uVar27 = -(uint)bVar38 | 1;
      }
      if (uVar27 == 0) {
        uVar34 = DAT_180b90260 - 2;
      }
    }
    if ((local_770 != 0) && (local_770 == uVar34)) {
      if (local_770 != 0) {
        pppppppcVar32 = pppppppcVar13;
        do {
          cVar7 = *(char *)((longlong)pppppppcVar32 +
                           ((longlong)pppppppcVar33 - (longlong)pppppppcVar13));
          cVar8 = *(char *)pppppppcVar32;
          cVar29 = cVar8 + ' ';
          if (0x19 < (byte)(cVar8 + 0xbfU)) {
            cVar29 = cVar8;
          }
          cVar8 = cVar7 + ' ';
          if (0x19 < (byte)(cVar7 + 0xbfU)) {
            cVar8 = cVar7;
          }
          if (cVar8 != cVar29) goto LAB_1801e8304;
          pppppppcVar32 = (char *******)((longlong)pppppppcVar32 + 1);
        } while ((ulonglong)((longlong)pppppppcVar32 - (longlong)pppppppcVar13) < local_770);
      }
      goto LAB_1801e8193;
    }
LAB_1801e8304:
    pppppppcVar13 = (char *******)&DAT_180b90250;
    if (0xf < DAT_180b90268) {
      pppppppcVar13 = DAT_180b90250;
    }
    cVar8 = FUN_180182cb0(lStack_7a8,pppppppcVar13);
    cVar7 = DAT_180c63135;
    if (cVar8 == '\0') {
      LOCK();
      DAT_180c63135 = '\x01';
      UNLOCK();
      if (cVar7 != '\0') goto LAB_1801e9722;
      FUN_18063ab10(local_638,0,0x600);
      FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"operation=restore");
      local_928 = &PTR_180700558;
      if (local_638[0] != '\0') {
        local_928 = (undefined **)&DAT_1806bcfc0;
      }
      pcVar25 = local_638;
      goto LAB_1801e8f54;
    }
    iVar19 = DAT_180c63158;
    if (DAT_180c63158 == 0) {
      UVar12 = GetTickCount64();
      if (UVar12 < DAT_180c63150) {
        iVar19 = 0;
      }
      else {
        local_8f0 = (undefined1 (*) [16])&DAT_1808e6cb0;
        iVar19 = FUN_1805f68d0(&DAT_1808e6cb0);
        if (iVar19 != 0) goto LAB_1801e97e9;
        if (DAT_1808e6cfc == 0x7fffffff) {
          DAT_1808e6cfc = 0x7ffffffe;
          goto LAB_1801e97d8;
        }
        if ((DAT_180c63158 == 0) && (DAT_180c63150 <= UVar12)) {
          DAT_180c63158 = FUN_1804174b0("CModelState",0xd7a1d881);
          if (DAT_180c63158 == 0) {
            DAT_180c63150 = UVar12 + 1000;
          }
          else {
            DAT_180c63150 = 0xffffffffffffffff;
          }
        }
        iVar19 = DAT_180c63158;
        FUN_1805f68fc(&DAT_1808e6cb0);
      }
    }
    lVar10 = iVar19 + local_7c0;
    lVar11 = FUN_18017ea70();
    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
    bVar38 = false;
    if (lVar10 != 0) {
      local_8f0 = (undefined1 (*) [16])0x0;
      cVar7 = FUN_1804514f0(&local_8f0,lVar10,8);
      if (cVar7 == '\0') {
        bVar38 = false;
      }
      else {
        bVar38 = true;
      }
    }
    pauVar15 = local_8f0;
    lVar11 = FUN_18017ea70();
    if (*(int *)(lVar11 + 4) != 0) {
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
    }
    uVar34 = DAT_180b90260;
    pauVar26 = (undefined1 (*) [16])0x0;
    if (bVar38) {
      pauVar26 = pauVar15;
    }
    pppppppcVar13 = (char *******)&DAT_180b90250;
    if (0xf < DAT_180b90268) {
      pppppppcVar13 = DAT_180b90250;
    }
    puVar17 = (undefined8 *)FUN_180184460(local_8c8,pauVar26);
    puVar28 = puVar17;
    if (0xf < (ulonglong)puVar17[3]) {
      puVar28 = (undefined8 *)*puVar17;
    }
    uVar21 = puVar17[2];
    if (1 < uVar21) {
      bVar1 = *(byte *)((uVar21 - 2) + (longlong)puVar28);
      bVar38 = bVar1 < 0x5f;
      if ((bVar1 == 0x5f) &&
         (bVar1 = *(byte *)((uVar21 - 1) + (longlong)puVar28), bVar38 = bVar1 < 99, bVar1 == 99)) {
        uVar27 = 0;
      }
      else {
        uVar27 = -(uint)bVar38 | 1;
      }
      if (uVar27 == 0) {
        uVar21 = uVar21 - 2;
      }
    }
    if (1 < uVar34) {
      bVar1 = *(byte *)((longlong)pppppppcVar13 + (uVar34 - 2));
      bVar38 = bVar1 < 0x5f;
      if ((bVar1 == 0x5f) &&
         (bVar1 = *(byte *)((longlong)pppppppcVar13 + (uVar34 - 1)), bVar38 = bVar1 < 99,
         bVar1 == 99)) {
        uVar27 = 0;
      }
      else {
        uVar27 = -(uint)bVar38 | 1;
      }
      if (uVar27 == 0) {
        uVar34 = uVar34 - 2;
      }
    }
    if ((uVar21 != 0) && (uVar21 == uVar34)) {
      if (uVar21 != 0) {
        pppppppcVar33 = pppppppcVar13;
        do {
          cVar7 = *(char *)((longlong)pppppppcVar33 + ((longlong)puVar28 - (longlong)pppppppcVar13))
          ;
          cVar8 = *(char *)pppppppcVar33;
          cVar29 = cVar7 + ' ';
          if (0x19 < (byte)(cVar7 + 0xbfU)) {
            cVar29 = cVar7;
          }
          cVar7 = cVar8 + ' ';
          if (0x19 < (byte)(cVar8 + 0xbfU)) {
            cVar7 = cVar8;
          }
          if (cVar29 != cVar7) goto LAB_1801e85ad;
          pppppppcVar33 = (char *******)((longlong)pppppppcVar33 + 1);
        } while ((ulonglong)((longlong)pppppppcVar33 - (longlong)pppppppcVar13) < uVar21);
      }
      FUN_18015c010(local_8c8);
      FUN_1801e6430(lStack_7a8);
      uVar37 = 1;
      goto LAB_1801e819d;
    }
LAB_1801e85ad:
    pppppppuVar23 = (undefined8 *******)local_8c8;
LAB_1801e971c:
    FUN_18015c010(pppppppuVar23);
  }
  else {
    local_8d8[0] = (undefined1 (*) [16])CONCAT44(local_8d8[0]._4_4_,DAT_180b9030c);
    if ((DAT_180b9030c != local_8e8) && (DAT_180b9030c != 0)) {
      DAT_180b9030a = '\0';
      DAT_180b90260 = 0;
      pppppppcVar33 = (char *******)&DAT_180b90250;
      if (0xf < DAT_180b90268) {
        pppppppcVar33 = DAT_180b90250;
      }
      *(char *)pppppppcVar33 = '\0';
    }
    cVar7 = DAT_180b9030a;
    if (DAT_180b9030a == '\0') {
LAB_1801e884a:
      pppppppcVar13 = (char *******)local_780;
      if (0xf < local_768) {
        pppppppcVar13 = local_780[0];
      }
      FUN_180113930(&DAT_180b90250,pppppppcVar13,local_770);
    }
    else {
      pppppppcVar33 = (char *******)local_780;
      if (0xf < local_768) {
        pppppppcVar33 = local_780[0];
      }
      if (6 < local_770) {
        iVar19 = memcmp(pppppppcVar33,"agents/",7);
        if (iVar19 == 0) {
          pcVar25 = (char *)&DAT_180b90270;
          if (0xf < DAT_180b90288) {
            pcVar25 = DAT_180b90270;
          }
          pppppppcVar33 = (char *******)local_780;
          if (0xf < uVar34) {
            pppppppcVar33 = pppppppcVar13;
          }
          uVar21 = local_770;
          if (1 < local_770) {
            bVar1 = *(byte *)((longlong)pppppppcVar33 + (local_770 - 2));
            bVar38 = bVar1 < 0x5f;
            if ((bVar1 == 0x5f) &&
               (bVar1 = *(byte *)((longlong)pppppppcVar33 + (local_770 - 1)), bVar38 = bVar1 < 99,
               bVar1 == 99)) {
              uVar9 = 0;
            }
            else {
              uVar9 = -(uint)bVar38 | 1;
            }
            if (uVar9 == 0) {
              uVar21 = local_770 - 2;
            }
          }
          uVar22 = DAT_180b90280;
          if (1 < DAT_180b90280) {
            bVar38 = (byte)pcVar25[DAT_180b90280 - 2] < 0x5f;
            if ((pcVar25[DAT_180b90280 - 2] == 0x5f) &&
               (bVar38 = (byte)pcVar25[DAT_180b90280 - 1] < 99, pcVar25[DAT_180b90280 - 1] == 99)) {
              uVar9 = 0;
            }
            else {
              uVar9 = -(uint)bVar38 | 1;
            }
            if (uVar9 == 0) {
              uVar22 = DAT_180b90280 - 2;
            }
          }
          if ((uVar21 == 0) || (uVar21 != uVar22)) {
LAB_1801e873b:
            pcVar25 = (char *)&DAT_180b902b0;
            if (0xf < DAT_180b902c8) {
              pcVar25 = DAT_180b902b0;
            }
            pppppppcVar33 = (char *******)local_780;
            if (0xf < uVar34) {
              pppppppcVar33 = pppppppcVar13;
            }
            uVar21 = local_770;
            if (1 < local_770) {
              bVar1 = *(byte *)((longlong)pppppppcVar33 + (local_770 - 2));
              bVar38 = bVar1 < 0x5f;
              if ((bVar1 == 0x5f) &&
                 (bVar1 = *(byte *)((longlong)pppppppcVar33 + (local_770 - 1)), bVar38 = bVar1 < 99,
                 bVar1 == 99)) {
                uVar9 = 0;
              }
              else {
                uVar9 = -(uint)bVar38 | 1;
              }
              if (uVar9 == 0) {
                uVar21 = local_770 - 2;
              }
            }
            uVar22 = DAT_180b902c0;
            if (1 < DAT_180b902c0) {
              bVar38 = (byte)pcVar25[DAT_180b902c0 - 2] < 0x5f;
              if ((pcVar25[DAT_180b902c0 - 2] == 0x5f) &&
                 (bVar38 = (byte)pcVar25[DAT_180b902c0 - 1] < 99, pcVar25[DAT_180b902c0 - 1] == 99))
              {
                uVar9 = 0;
              }
              else {
                uVar9 = -(uint)bVar38 | 1;
              }
              if (uVar9 == 0) {
                uVar22 = DAT_180b902c0 - 2;
              }
            }
            if ((uVar21 == 0) || (uVar21 != uVar22)) {
LAB_1801e8818:
              pppppppcVar33 = (char *******)local_780;
              if (0xf < uVar34) {
                pppppppcVar33 = pppppppcVar13;
              }
              FUN_180113930(&DAT_180b90250,pppppppcVar33,local_770);
              cVar7 = DAT_180b9030a;
            }
            else if (uVar21 != 0) {
              pcVar31 = pcVar25;
              do {
                cVar8 = pcVar31[(longlong)pppppppcVar33 - (longlong)pcVar25];
                cVar29 = *pcVar31;
                cVar30 = cVar8 + ' ';
                if (0x19 < (byte)(cVar8 + 0xbfU)) {
                  cVar30 = cVar8;
                }
                cVar8 = cVar29 + ' ';
                if (0x19 < (byte)(cVar29 + 0xbfU)) {
                  cVar8 = cVar29;
                }
                if (cVar30 != cVar8) goto LAB_1801e8818;
                pcVar31 = pcVar31 + 1;
              } while ((ulonglong)((longlong)pcVar31 - (longlong)pcVar25) < uVar21);
            }
          }
          else if (uVar21 != 0) {
            pcVar31 = pcVar25;
            do {
              cVar8 = pcVar31[(longlong)pppppppcVar33 - (longlong)pcVar25];
              cVar29 = *pcVar31;
              cVar30 = cVar8 + ' ';
              if (0x19 < (byte)(cVar8 + 0xbfU)) {
                cVar30 = cVar8;
              }
              cVar8 = cVar29 + ' ';
              if (0x19 < (byte)(cVar29 + 0xbfU)) {
                cVar8 = cVar29;
              }
              if (cVar30 != cVar8) goto LAB_1801e873b;
              pcVar31 = pcVar31 + 1;
            } while ((ulonglong)((longlong)pcVar31 - (longlong)pcVar25) < uVar21);
          }
        }
      }
      if (cVar7 == '\0') goto LAB_1801e884a;
    }
    uVar34 = local_748;
    pauVar15 = local_760[0];
    sVar35 = (short)local_8e0;
    if (DAT_180b90308 == sVar35) {
      pauVar26 = (undefined1 (*) [16])local_760;
      if (0xf < local_748) {
        pauVar26 = local_760[0];
      }
      pcVar25 = (char *)&DAT_180b90270;
      if (0xf < DAT_180b90288) {
        pcVar25 = DAT_180b90270;
      }
      if ((DAT_180b90280 != local_750) ||
         ((DAT_180b90280 != 0 && (iVar19 = memcmp(pcVar25,pauVar26,DAT_180b90280), iVar19 != 0))))
      goto LAB_1801e88e6;
      local_8e4 = '\x01';
    }
    else {
LAB_1801e88e6:
      local_8e4 = '\0';
    }
    pauVar26 = (undefined1 (*) [16])local_760;
    if (0xf < uVar34) {
      pauVar26 = pauVar15;
    }
    pppppppcVar13 = (char *******)local_780;
    if (0xf < local_768) {
      pppppppcVar13 = local_780[0];
    }
    uVar21 = local_770;
    if (1 < local_770) {
      bVar1 = *(byte *)((longlong)pppppppcVar13 + (local_770 - 2));
      bVar38 = bVar1 < 0x5f;
      if ((bVar1 == 0x5f) &&
         (bVar1 = *(byte *)((longlong)pppppppcVar13 + (local_770 - 1)), bVar38 = bVar1 < 99,
         bVar1 == 99)) {
        uVar9 = 0;
      }
      else {
        uVar9 = -(uint)bVar38 | 1;
      }
      if (uVar9 == 0) {
        uVar21 = local_770 - 2;
      }
    }
    uVar22 = local_750;
    if (1 < local_750) {
      bVar38 = (byte)pauVar26[-1][local_750 + 0xe] < 0x5f;
      if ((pauVar26[-1][local_750 + 0xe] == 0x5f) &&
         (bVar38 = (byte)pauVar26[-1][local_750 + 0xf] < 99, pauVar26[-1][local_750 + 0xf] == 99)) {
        uVar9 = 0;
      }
      else {
        uVar9 = -(uint)bVar38 | 1;
      }
      if (uVar9 == 0) {
        uVar22 = local_750 - 2;
      }
    }
    if ((uVar21 == 0) || (uVar21 != uVar22)) {
LAB_1801e8d78:
      pauVar26 = (undefined1 (*) [16])local_760;
      if (0xf < uVar34) {
        pauVar26 = pauVar15;
      }
      pcVar25 = (char *)&DAT_180b902b0;
      if (0xf < DAT_180b902c8) {
        pcVar25 = DAT_180b902b0;
      }
      if (DAT_180b902c0 == local_750) {
        if (DAT_180b902c0 != 0) {
          iVar19 = memcmp(pcVar25,pauVar26,DAT_180b902c0);
          if (iVar19 != 0) goto LAB_1801e8def;
        }
        uVar21 = DAT_180b902d8;
        if (DAT_180b902d0 == local_8e8) {
          UVar12 = GetTickCount64();
          if (UVar12 < uVar21) goto LAB_1801e9722;
          uVar34 = local_748;
          pauVar15 = local_760[0];
        }
      }
LAB_1801e8def:
      pauVar26 = (undefined1 (*) [16])local_760;
      if (0xf < uVar34) {
        pauVar26 = pauVar15;
      }
      FUN_180113930(&DAT_180b902b0,pauVar26,local_750);
      uVar9 = local_8e8;
      DAT_180b902d0 = local_8e8;
      UVar12 = GetTickCount64();
      cVar7 = local_8f8;
      DAT_180b902d8 = UVar12 + 0x5dc;
      if ((local_8f8 == '\0') || (cVar8 = FUN_1801ef630(local_718), cVar8 != '\0')) {
        FUN_1801f8ab0(lStack_7a8,cVar7,0);
        pauVar15 = (undefined1 (*) [16])local_760;
        if (0xf < local_748) {
          pauVar15 = local_760[0];
        }
        cVar8 = FUN_180182cb0(lStack_7a8,pauVar15);
        cVar7 = DAT_180c63134;
        if (cVar8 != '\0') {
          iVar19 = DAT_180c63144;
          if (DAT_180c63144 == 0) {
            UVar12 = GetTickCount64();
            if (UVar12 < DAT_180c63148) {
              iVar19 = 0;
            }
            else {
              local_8d8[0] = (undefined1 (*) [16])&DAT_1808e6c60;
              iVar19 = FUN_1805f68d0(&DAT_1808e6c60);
              if (iVar19 != 0) goto LAB_1801e97e9;
              if (DAT_1808e6cac == 0x7fffffff) {
                DAT_1808e6cac = 0x7ffffffe;
                goto LAB_1801e97d8;
              }
              if ((DAT_180c63144 == 0) && (DAT_180c63148 <= UVar12)) {
                DAT_180c63144 = FUN_1804174b0("CModelState",0xe100c814);
                if (DAT_180c63144 == 0) {
                  DAT_180c63148 = UVar12 + 1000;
                }
                else {
                  DAT_180c63148 = 0xffffffffffffffff;
                }
              }
              iVar19 = DAT_180c63144;
              FUN_1805f68fc(&DAT_1808e6c60);
            }
          }
          DAT_180b902f8 = *(undefined1 (**) [16])(iVar19 + local_7c0);
          pauVar15 = (undefined1 (*) [16])local_760;
          if (0xf < local_748) {
            pauVar15 = local_760[0];
          }
          DAT_180b90308 = sVar35;
          FUN_180113930(&DAT_180b90270,pauVar15,local_750);
          DAT_180b9030c = uVar9;
          DAT_180b9030a = '\x01';
          iVar19 = DAT_180c63140;
          if (DAT_180c63140 == 0) {
            UVar12 = GetTickCount64();
            if (UVar12 < DAT_180c63138) {
              iVar19 = 0;
            }
            else {
              local_8d8[0] = (undefined1 (*) [16])&DAT_1808e6c10;
              iVar19 = FUN_1805f68d0(&DAT_1808e6c10);
              if (iVar19 != 0) goto LAB_1801e97e9;
              if (DAT_1808e6c5c == 0x7fffffff) {
                DAT_1808e6c5c = 0x7ffffffe;
                goto LAB_1801e97d8;
              }
              if ((DAT_180c63140 == 0) && (DAT_180c63138 <= UVar12)) {
                DAT_180c63140 = FUN_1804174b0("CModelState",0xd7a1d881);
                if (DAT_180c63140 == 0) {
                  DAT_180c63138 = UVar12 + 1000;
                }
                else {
                  DAT_180c63138 = 0xffffffffffffffff;
                }
              }
              iVar19 = DAT_180c63140;
              FUN_1805f68fc(&DAT_1808e6c10);
            }
          }
          lVar10 = iVar19 + local_7c0;
          lVar11 = FUN_18017ea70();
          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
          if (lVar10 == 0) {
            bVar38 = false;
            pauVar15 = local_8f0;
          }
          else {
            local_8d8[0] = (undefined1 (*) [16])0x0;
            cVar7 = FUN_1804514f0(local_8d8,lVar10,8);
            if (cVar7 == '\0') {
              bVar38 = false;
              pauVar15 = local_8f0;
            }
            else {
              bVar38 = true;
              pauVar15 = local_8d8[0];
            }
          }
          lVar11 = FUN_18017ea70();
          if (*(int *)(lVar11 + 4) != 0) {
            *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
          }
          pauVar26 = (undefined1 (*) [16])0x0;
          if (bVar38) {
            pauVar26 = pauVar15;
          }
          FUN_180184460(local_740,pauVar26);
          pauVar15 = DAT_180b902f8;
          if (local_8f8 == '\0') {
LAB_1801e932c:
            DAT_180b90300 = (undefined1 (*) [16])0x0;
            uVar34 = local_750;
LAB_1801e932f:
            pauVar15 = (undefined1 (*) [16])local_760;
            if (0xf < local_748) {
              pauVar15 = local_760[0];
            }
            pppppppuVar23 = local_740;
            if (0xf < local_728) {
              pppppppuVar23 = local_740[0];
            }
            uVar21 = local_730;
            if (1 < local_730) {
              bVar1 = *(byte *)((local_730 - 2) + (longlong)pppppppuVar23);
              bVar38 = bVar1 < 0x5f;
              if ((bVar1 == 0x5f) &&
                 (bVar1 = *(byte *)((local_730 - 1) + (longlong)pppppppuVar23), bVar38 = bVar1 < 99,
                 bVar1 == 99)) {
                uVar9 = 0;
              }
              else {
                uVar9 = -(uint)bVar38 | 1;
              }
              if (uVar9 == 0) {
                uVar21 = local_730 - 2;
              }
            }
            uVar22 = uVar34;
            if (1 < uVar34) {
              bVar38 = (byte)pauVar15[-1][uVar34 + 0xe] < 0x5f;
              if ((pauVar15[-1][uVar34 + 0xe] == 0x5f) &&
                 (bVar38 = (byte)pauVar15[-1][uVar34 + 0xf] < 99, pauVar15[-1][uVar34 + 0xf] == 99))
              {
                uVar9 = 0;
              }
              else {
                uVar9 = -(uint)bVar38 | 1;
              }
              if (uVar9 == 0) {
                uVar22 = uVar34 - 2;
              }
            }
            if ((uVar21 != 0) && (uVar21 == uVar22)) {
              if (uVar21 != 0) {
                pauVar26 = pauVar15;
                do {
                  cVar7 = *(char *)(((longlong)pppppppuVar23 - (longlong)pauVar15) +
                                   (longlong)pauVar26);
                  cVar8 = (*pauVar26)[0];
                  cVar29 = cVar7 + ' ';
                  if (0x19 < (byte)(cVar7 + 0xbfU)) {
                    cVar29 = cVar7;
                  }
                  cVar7 = cVar8 + ' ';
                  if (0x19 < (byte)(cVar8 + 0xbfU)) {
                    cVar7 = cVar8;
                  }
                  if (cVar29 != cVar7) goto LAB_1801e9533;
                  pauVar26 = (undefined1 (*) [16])(*pauVar26 + 1);
                } while ((ulonglong)((longlong)pauVar26 - (longlong)pauVar15) < uVar21);
              }
              if (local_8f8 == '\0') {
                local_830 = 0;
                uStack_828 = 0xf;
                local_840._1_15_ = SUB1615((undefined1  [16])0x0,1);
                auVar6[0xf] = 0;
                auVar6._0_15_ = local_840._1_15_;
                local_840 = auVar6 << 8;
                uVar27 = uVar27 | 0x80;
                puVar18 = (undefined1 *)0x0;
                puVar14 = local_840;
              }
              else {
                local_880 = (undefined1  [16])0x0;
                local_870 = (undefined1  [16])0x0;
                pauVar15 = (undefined1 (*) [16])local_760;
                if (0xf < local_748) {
                  pauVar15 = local_760[0];
                }
                if (0x7fffffffffffffff < uVar34) {
                    /* WARNING: Subroutine does not return */
                  FUN_18015bb70();
                }
                if (uVar34 < 0x10) {
                  local_870._8_8_ = 0xf;
                  local_870._0_8_ = uVar34;
                  puVar18 = *(undefined1 **)*pauVar15;
                  local_880 = *pauVar15;
                }
                else {
                  uVar22 = uVar34 | 0xf;
                  uVar21 = 0x7fffffffffffffff;
                  if ((uVar22 < 0x8000000000000000) && (uVar21 = uVar22, uVar22 < 0x16)) {
                    uVar21 = 0x16;
                  }
                  puVar18 = (undefined1 *)FUN_18015bca0(uVar21 + 1);
                  local_880._0_8_ = puVar18;
                  local_870._8_8_ = uVar21;
                  local_870._0_8_ = uVar34;
                  FUN_18063aed0(puVar18,pauVar15,uVar34 + 1);
                }
                puVar14 = local_880;
                uVar27 = uVar27 | 0x40;
              }
              local_8d8[0] = (undefined1 (*) [16])CONCAT44(local_8d8[0]._4_4_,uVar27);
              if (*(ulonglong *)(puVar14 + 0x18) < 0x10) {
                puVar18 = puVar14;
              }
              FUN_180113930(&DAT_180b90290,puVar18,*(undefined8 *)(puVar14 + 0x10));
              if ((char)uVar27 < '\0') {
                uVar27 = uVar27 & 0xffffff7f;
                FUN_18015c010();
              }
              if ((uVar27 & 0x40) != 0) {
                FUN_18015c010();
              }
            }
LAB_1801e9533:
            pauVar15 = DAT_180b902f8;
            if (DAT_180b902a0 == 0) {
LAB_1801e9626:
              bVar38 = false;
            }
            else {
              pcVar25 = (char *)&DAT_180b90290;
              if (0xf < DAT_180b902a8) {
                pcVar25 = DAT_180b90290;
              }
              pppppppuVar23 = local_740;
              if (0xf < local_728) {
                pppppppuVar23 = local_740[0];
              }
              if (1 < local_730) {
                bVar1 = *(byte *)((longlong)pppppppuVar23 + (local_730 - 2));
                bVar38 = bVar1 < 0x5f;
                if ((bVar1 == 0x5f) &&
                   (bVar1 = *(byte *)((longlong)pppppppuVar23 + (local_730 - 1)),
                   bVar38 = bVar1 < 99, bVar1 == 99)) {
                  uVar27 = 0;
                }
                else {
                  uVar27 = -(uint)bVar38 | 1;
                }
                if (uVar27 == 0) {
                  local_730 = local_730 - 2;
                }
              }
              uVar34 = DAT_180b902a0;
              if (1 < DAT_180b902a0) {
                bVar38 = (byte)pcVar25[DAT_180b902a0 - 2] < 0x5f;
                if ((pcVar25[DAT_180b902a0 - 2] == 0x5f) &&
                   (bVar38 = (byte)pcVar25[DAT_180b902a0 - 1] < 99, pcVar25[DAT_180b902a0 - 1] == 99
                   )) {
                  uVar27 = 0;
                }
                else {
                  uVar27 = -(uint)bVar38 | 1;
                }
                if (uVar27 == 0) {
                  uVar34 = DAT_180b902a0 - 2;
                }
              }
              if ((local_730 == 0) || (local_730 != uVar34)) goto LAB_1801e9626;
              if (local_730 != 0) {
                pcVar31 = pcVar25;
                do {
                  cVar7 = pcVar31[(longlong)pppppppuVar23 - (longlong)pcVar25];
                  cVar8 = *pcVar31;
                  cVar29 = cVar7 + ' ';
                  if (0x19 < (byte)(cVar7 + 0xbfU)) {
                    cVar29 = cVar7;
                  }
                  cVar7 = cVar8 + ' ';
                  if (0x19 < (byte)(cVar8 + 0xbfU)) {
                    cVar7 = cVar8;
                  }
                  if (cVar29 != cVar7) goto LAB_1801e9626;
                  pcVar31 = pcVar31 + 1;
                } while ((ulonglong)((longlong)pcVar31 - (longlong)pcVar25) < local_730);
              }
              bVar38 = true;
            }
            DAT_180bbeb00 = 0;
            if (bVar38) {
              DAT_180bbeb00 = lStack_7a8;
            }
            DAT_180b9030b = '\x01';
            pauVar26 = (undefined1 (*) [16])local_760;
            if (0xf < local_748) {
              pauVar26 = local_760[0];
            }
            pppppppcVar13 = (char *******)local_780;
            if (0xf < local_768) {
              pppppppcVar13 = local_780[0];
            }
            FUN_18063ab10(local_638,0,0x600);
            local_900 = pauVar15;
            local_908 = local_8f0;
            local_920 = (char *******)CONCAT44(local_920._4_4_,(int)(short)local_8e0);
            local_928 = (undefined **)CONCAT44(local_928._4_4_,local_8e8);
            local_918 = pppppppcVar13;
            local_910 = pauVar26;
            FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                          "team=%d definition=%d before=%s desired=%s handles=(0x%llx,0x%llx) readback=pending phase=before_native_postdata_latch weapon_owner_mutations=0 forced_hull=0"
                         );
            local_928 = &PTR_180700558;
            if (local_638[0] != '\0') {
              local_928 = (undefined **)&DAT_1806bcfc0;
            }
            local_920 = (char *******)local_638;
            FUN_1800f6900(1,&DAT_1806bcfc0,"SkinChanger","AGENT_MODEL_SUBMITTED");
          }
          else {
            pauVar26 = (undefined1 (*) [16])local_760;
            if (0xf < local_748) {
              pauVar26 = local_760[0];
            }
            pppppppuVar23 = local_740;
            if (0xf < local_728) {
              pppppppuVar23 = local_740[0];
            }
            uVar34 = local_730;
            if (1 < local_730) {
              bVar1 = *(byte *)((local_730 - 2) + (longlong)pppppppuVar23);
              bVar38 = bVar1 < 0x5f;
              if ((bVar1 == 0x5f) &&
                 (bVar1 = *(byte *)((local_730 - 1) + (longlong)pppppppuVar23), bVar38 = bVar1 < 99,
                 bVar1 == 99)) {
                uVar9 = 0;
              }
              else {
                uVar9 = -(uint)bVar38 | 1;
              }
              if (uVar9 == 0) {
                uVar34 = local_730 - 2;
              }
            }
            uVar21 = local_750;
            if (1 < local_750) {
              bVar38 = (byte)pauVar26[-1][local_750 + 0xe] < 0x5f;
              if ((pauVar26[-1][local_750 + 0xe] == 0x5f) &&
                 (bVar38 = (byte)pauVar26[-1][local_750 + 0xf] < 99,
                 pauVar26[-1][local_750 + 0xf] == 99)) {
                uVar9 = 0;
              }
              else {
                uVar9 = -(uint)bVar38 | 1;
              }
              if (uVar9 == 0) {
                uVar21 = local_750 - 2;
              }
            }
            if ((uVar34 == 0) || (uVar34 != uVar21)) goto LAB_1801e932c;
            if (uVar34 != 0) {
              pauVar24 = pauVar26;
              do {
                cVar7 = *(char *)(((longlong)pppppppuVar23 - (longlong)pauVar26) +
                                 (longlong)pauVar24);
                cVar8 = (*pauVar24)[0];
                cVar29 = cVar7 + ' ';
                if (0x19 < (byte)(cVar7 + 0xbfU)) {
                  cVar29 = cVar7;
                }
                cVar7 = cVar8 + ' ';
                if (0x19 < (byte)(cVar8 + 0xbfU)) {
                  cVar7 = cVar8;
                }
                if (cVar29 != cVar7) goto LAB_1801e932c;
                pauVar24 = (undefined1 (*) [16])(*pauVar24 + 1);
              } while ((ulonglong)((longlong)pauVar24 - (longlong)pauVar26) < uVar34);
            }
            if (DAT_180b902f8 == (undefined1 (*) [16])0x0) {
              pauVar15 = (undefined1 (*) [16])0x0;
            }
            else {
              lVar11 = FUN_18017ea70();
              *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
              local_8d8[0] = (undefined1 (*) [16])0x0;
              cVar7 = FUN_1804514f0(local_8d8,pauVar15,8);
              pauVar26 = local_8f0;
              if (cVar7 != '\0') {
                pauVar26 = local_8d8[0];
              }
              lVar11 = FUN_18017ea70();
              if (*(int *)(lVar11 + 4) != 0) {
                *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
              }
              pauVar15 = (undefined1 (*) [16])0x0;
              if (cVar7 != '\0') {
                pauVar15 = pauVar26;
              }
            }
            lVar11 = FUN_1801f2890(local_8d8,pauVar15);
            if (*(char *)(lVar11 + 0xc) != '\0') {
              DAT_180b90300 = DAT_180b902f8;
              uVar34 = local_750;
              goto LAB_1801e932f;
            }
            FUN_1801e9800(local_8c8);
          }
          pppppppuVar23 = local_740;
          goto LAB_1801e971c;
        }
        LOCK();
        DAT_180c63134 = '\x01';
        UNLOCK();
        if (cVar7 == '\0') {
          FUN_18063ab10(local_638,0,0x600);
          local_928 = (undefined **)CONCAT44(local_928._4_4_,(int)sVar35);
          FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"operation=apply def_index=%d");
          pcVar25 = " ";
          local_928 = &PTR_180700558;
          if (local_638[0] != '\0') {
            local_928 = (undefined **)&DAT_1806bcfc0;
          }
LAB_1801e8f54:
          local_920 = (char *******)local_638;
          FUN_1800f6900(2,pcVar25,"SkinChanger","AGENT_MODEL_API_UNAVAILABLE");
        }
      }
      else {
        iVar19 = FUN_1805f68d0(&DAT_1808daea0);
        if (iVar19 != 0) {
LAB_1801e97e9:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808daeec == 0x7fffffff) {
          DAT_1808daeec = 0x7ffffffe;
LAB_1801e97d8:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        FUN_1801f3010(&DAT_180bbeba0);
        FUN_1805f68fc(&DAT_1808daea0);
        LOCK();
        DAT_180bbe88d = 1;
        UNLOCK();
        LOCK();
        DAT_1808da689 = 1;
        UNLOCK();
      }
    }
    else {
      if (uVar21 != 0) {
        pauVar24 = pauVar26;
        do {
          cVar7 = *(char *)(((longlong)pppppppcVar13 - (longlong)pauVar26) + (longlong)pauVar24);
          cVar8 = (*pauVar24)[0];
          cVar29 = cVar7 + ' ';
          if (0x19 < (byte)(cVar7 + 0xbfU)) {
            cVar29 = cVar7;
          }
          cVar7 = cVar8 + ' ';
          if (0x19 < (byte)(cVar8 + 0xbfU)) {
            cVar7 = cVar8;
          }
          if (cVar29 != cVar7) goto LAB_1801e8d78;
          pauVar24 = (undefined1 (*) [16])(*pauVar24 + 1);
        } while ((ulonglong)((longlong)pauVar24 - (longlong)pauVar26) < uVar21);
      }
      if (DAT_180b9030b == '\0') {
        if (DAT_180b902f8 != (undefined1 (*) [16])0x0) {
          pppppppcVar13 = (char *******)local_780;
          if (0xf < local_768) {
            pppppppcVar13 = local_780[0];
          }
          pcVar25 = (char *)&DAT_180b90270;
          if (0xf < DAT_180b90288) {
            pcVar25 = DAT_180b90270;
          }
          uVar21 = DAT_180b90280;
          if (1 < DAT_180b90280) {
            bVar38 = (byte)pcVar25[DAT_180b90280 - 2] < 0x5f;
            if ((pcVar25[DAT_180b90280 - 2] == 0x5f) &&
               (bVar38 = (byte)pcVar25[DAT_180b90280 - 1] < 99, pcVar25[DAT_180b90280 - 1] == 99)) {
              uVar9 = 0;
            }
            else {
              uVar9 = -(uint)bVar38 | 1;
            }
            if (uVar9 == 0) {
              uVar21 = DAT_180b90280 - 2;
            }
          }
          if (1 < local_770) {
            bVar1 = *(byte *)((longlong)pppppppcVar13 + (local_770 - 2));
            bVar38 = bVar1 < 0x5f;
            if ((bVar1 == 0x5f) &&
               (bVar1 = *(byte *)((longlong)pppppppcVar13 + (local_770 - 1)), bVar38 = bVar1 < 99,
               bVar1 == 99)) {
              uVar9 = 0;
            }
            else {
              uVar9 = -(uint)bVar38 | 1;
            }
            if (uVar9 == 0) {
              local_770 = local_770 - 2;
            }
          }
          if ((uVar21 == 0) || (uVar21 != local_770)) goto LAB_1801e8ae1;
          if (uVar21 != 0) {
            pppppppcVar33 = pppppppcVar13;
            do {
              cVar7 = *(char *)((longlong)pppppppcVar33 +
                               ((longlong)pcVar25 - (longlong)pppppppcVar13));
              cVar8 = *(char *)pppppppcVar33;
              cVar29 = cVar7 + ' ';
              if (0x19 < (byte)(cVar7 + 0xbfU)) {
                cVar29 = cVar7;
              }
              cVar7 = cVar8 + ' ';
              if (0x19 < (byte)(cVar8 + 0xbfU)) {
                cVar7 = cVar8;
              }
              if (cVar29 != cVar7) goto LAB_1801e8ae1;
              pppppppcVar33 = (char *******)((longlong)pppppppcVar33 + 1);
            } while ((ulonglong)((longlong)pppppppcVar33 - (longlong)pppppppcVar13) < uVar21);
          }
        }
LAB_1801e8b0b:
        if (((local_8e4 == '\0') || ((uint)local_8d8[0] != local_8e8)) ||
           (DAT_180b902f8 != local_8f0)) goto LAB_1801e8b2a;
        sVar35 = (short)local_8e0;
      }
      else {
LAB_1801e8ae1:
        FUN_1801e6430(lStack_7a8);
        if (DAT_180b9030b == '\0') {
          uVar34 = local_748;
          pauVar15 = local_760[0];
          goto LAB_1801e8b0b;
        }
LAB_1801e8b2a:
        pppppppcVar13 = (char *******)local_780;
        if (0xf < local_768) {
          pppppppcVar13 = local_780[0];
        }
        FUN_18063ab10(local_638,0,0x600);
        sVar35 = (short)local_8e0;
        local_910 = local_8f0;
        local_920 = (char *******)CONCAT44(local_920._4_4_,(int)sVar35);
        local_928 = (undefined **)CONCAT44(local_928._4_4_,local_8e8);
        local_918 = pppppppcVar13;
        FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                      "team=%d definition=%d model=%s handle=0x%llx native_call=0");
        local_928 = &PTR_180700558;
        if (local_638[0] != '\0') {
          local_928 = (undefined **)&DAT_1806bcfc0;
        }
        local_920 = (char *******)local_638;
        FUN_1800f6900(1,&DAT_1806bcfc0,"SkinChanger","AGENT_MODEL_OBSERVED");
        uVar34 = local_748;
        pauVar15 = local_760[0];
      }
      pauVar26 = (undefined1 (*) [16])local_760;
      if (0xf < uVar34) {
        pauVar26 = pauVar15;
      }
      DAT_180b902f8 = local_8f0;
      DAT_180b90308 = sVar35;
      FUN_180113930(&DAT_180b90270,pauVar26,local_750);
      DAT_180b9030c = local_8e8;
      if (local_8f8 == '\0') {
        local_850 = 0;
        uStack_848 = 0xf;
        local_860._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar5[0xf] = 0;
        auVar5._0_15_ = local_860._1_15_;
        local_860 = auVar5 << 8;
        uVar27 = uVar27 | 0x20;
        puVar18 = (undefined1 *)0x0;
        puVar14 = local_860;
      }
      else {
        local_8a0 = (undefined1  [16])0x0;
        local_890 = (undefined1  [16])0x0;
        pauVar15 = (undefined1 (*) [16])local_760;
        if (0xf < local_748) {
          pauVar15 = local_760[0];
        }
        if (0x7fffffffffffffff < local_750) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bb70();
        }
        if (local_750 < 0x10) {
          local_890._8_8_ = 0xf;
          local_890._0_8_ = local_750;
          puVar18 = *(undefined1 **)*pauVar15;
          local_8a0 = *pauVar15;
        }
        else {
          uVar21 = local_750 | 0xf;
          uVar34 = 0x7fffffffffffffff;
          if ((uVar21 < 0x8000000000000000) && (uVar34 = uVar21, uVar21 < 0x16)) {
            uVar34 = 0x16;
          }
          puVar18 = (undefined1 *)FUN_18015bca0(uVar34 + 1);
          local_8a0._0_8_ = puVar18;
          local_890._8_8_ = uVar34;
          local_890._0_8_ = local_750;
          FUN_18063aed0(puVar18,pauVar15,local_750 + 1);
        }
        puVar14 = local_8a0;
        uVar27 = uVar27 | 0x10;
      }
      cVar7 = local_8f8;
      local_8d8[0] = (undefined1 (*) [16])CONCAT44(local_8d8[0]._4_4_,uVar27);
      if (*(ulonglong *)(puVar14 + 0x18) < 0x10) {
        puVar18 = puVar14;
      }
      FUN_180113930(&DAT_180b90290,puVar18,*(undefined8 *)(puVar14 + 0x10));
      if ((uVar27 & 0x20) != 0) {
        uVar27 = uVar27 & 0xffffffdf;
        FUN_18015c010(local_860);
      }
      if ((uVar27 & 0x10) != 0) {
        FUN_18015c010(local_8a0);
      }
      DAT_180bbeb00 = 0;
      if (cVar7 != '\0') {
        DAT_180bbeb00 = lStack_7a8;
      }
      DAT_180b9030b = '\0';
    }
  }
LAB_1801e9722:
  FUN_18015c010(local_760);
  FUN_1801ab310(local_718);
LAB_1801e973c:
  FUN_18015c010(local_780);
}



