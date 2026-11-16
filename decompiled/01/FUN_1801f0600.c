// FUN_1801f0600 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801f0600 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1801f0600(int *param_1)

{
  short *psVar1;
  byte *pbVar2;
  short sVar3;
  longlong lVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  ushort uVar11;
  byte *pbVar12;
  short *psVar13;
  char cVar14;
  byte bVar15;
  char cVar16;
  int iVar17;
  undefined4 uVar18;
  DWORD DVar19;
  int *piVar20;
  short *psVar21;
  undefined8 uVar22;
  longlong lVar23;
  undefined8 *puVar24;
  ULONGLONG UVar25;
  longlong *plVar26;
  short *psVar27;
  char *******pppppppcVar28;
  longlong lVar29;
  longlong lVar30;
  char *pcVar31;
  undefined8 *******pppppppuVar32;
  undefined1 *puVar33;
  LPCWSTR lpFileName;
  char *******pppppppcVar34;
  uint uVar35;
  byte *pbVar36;
  undefined8 extraout_XMM0_Qa;
  undefined1 auStack_818 [32];
  undefined **local_7f8;
  char *local_7f0;
  undefined8 local_7e8;
  undefined1 local_7d8 [16];
  undefined8 local_7c8;
  undefined8 local_7c0;
  char local_7b8;
  char cStack_7b7;
  ushort uStack_7b6;
  undefined4 uStack_7b4;
  undefined8 local_7a8;
  ulonglong local_7a0;
  undefined1 *local_798;
  undefined1 auStack_790 [16];
  undefined8 uStack_780;
  undefined1 auStack_778 [16];
  undefined1 local_768 [16];
  longlong local_758;
  ulonglong local_750;
  undefined1 local_748 [16];
  undefined8 local_738;
  ulonglong local_730;
  undefined1 local_728 [16];
  undefined1 local_718 [16];
  undefined8 *******local_708 [2];
  longlong local_6f8;
  ulonglong local_6f0;
  undefined1 local_6e8 [16];
  longlong local_6d8;
  ulonglong local_6d0;
  undefined8 *******local_6c8 [3];
  ulonglong local_6b0;
  char *******local_6a8 [2];
  longlong local_698;
  ulonglong local_690;
  undefined1 *local_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined1 local_668 [16];
  undefined1 local_658 [32];
  char local_638 [1544];
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_818;
  uVar11 = 0;
  bVar7 = false;
  bVar5 = false;
  local_7b8 = '\0';
  cStack_7b7 = 0;
  uStack_7b6 = 0;
  piVar20 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 6)) {
    piVar20 = *(int **)param_1;
  }
  if ((((*(ulonglong *)(param_1 + 4) < 5) || (*piVar20 != 0x636e7973)) || ((char)piVar20[1] != '/'))
     || (*(ulonglong *)(param_1 + 4) != 0x45)) {
LAB_1801f07b1:
    bVar6 = true;
  }
  else {
    plVar26 = (longlong *)(param_1 + 0x20);
    local_768._0_8_ = plVar26;
    if (7 < *(ulonglong *)(param_1 + 0x26)) {
      local_768._0_8_ = *plVar26;
    }
    local_768._8_8_ = *(longlong *)(param_1 + 0x24);
    iVar17 = FUN_180162c60(param_1 + 0x28,local_768);
    if (iVar17 != 0) goto LAB_1801f07b1;
    local_748 = (undefined1  [16])0x0;
    local_738 = 0;
    local_730 = 0;
    FUN_180159e60(local_748,L"content_dir.vpk",0xf);
    local_7b8 = '\x01';
    cStack_7b7 = 0;
    uStack_7b6 = 6;
    if (7 < *(ulonglong *)(param_1 + 0x26)) {
      plVar26 = (longlong *)*plVar26;
    }
    psVar1 = (short *)((longlong)plVar26 + *(longlong *)(param_1 + 0x24) * 2);
    psVar21 = (short *)FUN_1800a7b00(plVar26,psVar1);
    psVar27 = psVar1;
    if (psVar21 != psVar1) {
      do {
        psVar13 = psVar1;
        if ((*psVar21 != 0x5c) && (*psVar21 != 0x2f)) break;
        psVar21 = psVar21 + 1;
      } while (psVar21 != psVar1);
      do {
        psVar27 = psVar13;
        if (psVar21 == psVar27) break;
        sVar3 = psVar27[-1];
        if ((sVar3 == 0x5c) || (psVar13 = psVar27 + -1, sVar3 == 0x2f)) break;
      } while( true );
    }
    local_728 = (undefined1  [16])0x0;
    local_718 = ZEXT816(0);
    FUN_180159e60(local_728,psVar27,(longlong)psVar1 - (longlong)psVar27 >> 1);
    uVar11 = 0x3e;
    bVar7 = true;
    bVar5 = true;
    local_768._0_8_ = local_748;
    if (7 < local_730) {
      local_768._0_8_ = local_748._0_8_;
    }
    local_768._8_8_ = local_738;
    iVar17 = FUN_180162c60(local_728,local_768);
    if ((iVar17 != 0) || (cVar14 = FUN_1801ef630(param_1), cVar14 == '\0')) goto LAB_1801f07b1;
    bVar6 = false;
  }
  if (bVar7) {
    FUN_18015b930(local_728);
  }
  if (bVar5) {
    FUN_18015b930(local_748);
  }
  cVar14 = '\0';
  if (bVar6) {
  }
  local_7d8 = (undefined1  [16])0x0;
  local_7c8 = 0;
  local_7c0 = 0;
  FUN_180159e60(local_7d8,L"Models",6);
  local_748 = (undefined1  [16])0x0;
  local_738 = 0;
  local_730 = 0;
  FUN_180159e60(local_748,L"Synchronization",0xf);
  cStack_7b7 = '\a';
  local_728 = (undefined1  [16])0x0;
  local_718 = ZEXT816(0);
  local_7b8 = cVar14;
  uStack_7b6 = uVar11;
  FUN_180159e60(local_728,L"Cache",5);
  uVar22 = FUN_1800a8ec0(&local_798);
  uVar22 = FUN_1800a7e60(&local_688,uVar22,local_728);
  uVar22 = FUN_1800a7e60(local_6c8,uVar22,local_748);
  FUN_1800a7e60(local_658,uVar22,local_7d8);
  FUN_18015b930(local_6c8);
  FUN_18015b930(&local_688);
  FUN_18015b930(&local_798);
  FUN_18015b930(local_728);
  FUN_18015b930(local_748);
  FUN_18015b930(local_7d8);
  local_6e8 = (undefined1  [16])0x0;
  local_6d8 = 0;
  local_6d0 = 0;
  if (*(ulonglong *)(param_1 + 4) < 5) {
                    /* WARNING: Subroutine does not return */
    FUN_180141470();
  }
  lVar23 = *(ulonglong *)(param_1 + 4) - 5;
  lVar30 = -1;
  if (lVar23 != -1) {
    lVar30 = lVar23;
  }
  piVar20 = param_1;
  if (0xf < *(ulonglong *)(param_1 + 6)) {
    piVar20 = *(int **)param_1;
  }
  FUN_18015ba30(local_6e8,(longlong)piVar20 + 5,lVar30);
  bVar8 = false;
  bVar6 = false;
  bVar7 = false;
  bVar5 = false;
  pbVar36 = local_6e8;
  if (0xf < local_6d0) {
    pbVar36 = (byte *)local_6e8._0_8_;
  }
  if (local_6d8 != 0) {
    pbVar2 = pbVar36 + local_6d8;
    FUN_18063ab10(local_638,0,0x100);
    pcVar31 = "0123456789abcdef";
    do {
      local_638[(byte)*pcVar31] = '\x01';
      pcVar31 = pcVar31 + 1;
      pbVar12 = pbVar36;
    } while ((byte *)pcVar31 != (byte *)0x1807c2428);
    for (; pbVar12 < pbVar2; pbVar12 = pbVar12 + 1) {
      if (local_638[*pbVar12] == '\0') {
        if ((longlong)pbVar12 - (longlong)pbVar36 != -1) goto LAB_1801f0a9b;
        break;
      }
    }
  }
  local_7d8 = (undefined1  [16])0x0;
  local_7c8 = 0;
  local_7c0 = 0;
  FUN_180159e60(local_7d8,L"content_dir.vpk",0xf);
  lVar30 = local_6d8;
  cStack_7b7 = 0x7f;
  puVar33 = local_6e8;
  if (0xf < local_6d0) {
    puVar33 = (undefined1 *)local_6e8._0_8_;
  }
  local_7b8 = cVar14;
  uStack_7b6 = uVar11;
  uVar18 = __std_fs_code_page();
  local_768._8_8_ = lVar30;
  local_768._0_8_ = puVar33;
  FUN_1801628d0(local_6c8,uVar18,local_768);
  uStack_7b6 = uVar11 | 1;
  cStack_7b7 = 0xff;
  local_7b8 = cVar14;
  uVar22 = FUN_1800a7e60(&local_688,local_658,local_6c8);
  uStack_7b6 = uVar11 | 1;
  cStack_7b7 = -1;
  local_7b8 = cVar14;
  puVar24 = (undefined8 *)FUN_1800a7e60(&local_798,uVar22,local_7d8);
  bVar8 = true;
  bVar6 = true;
  bVar7 = true;
  bVar5 = true;
  local_768._0_8_ = puVar24;
  if (7 < (ulonglong)puVar24[3]) {
    local_768._0_8_ = *puVar24;
  }
  local_768._8_8_ = puVar24[2];
  iVar17 = FUN_180162c60(param_1 + 0x20,local_768);
  if (iVar17 == 0) {
    bVar9 = false;
  }
  else {
LAB_1801f0a9b:
    bVar9 = true;
  }
  if (bVar5) {
    FUN_18015b930(&local_798);
  }
  if (bVar7) {
    FUN_18015b930(&local_688);
  }
  if (bVar6) {
    FUN_18015b930(local_6c8);
  }
  if (bVar8) {
    FUN_18015b930(local_7d8);
  }
  if (bVar9) goto LAB_1801f1009;
  cVar14 = FUN_1801ef550(param_1);
  if (cVar14 == '\0') {
    UVar25 = GetTickCount64();
    plVar26 = (longlong *)FUN_1801b0c90(&DAT_180bbeb20,local_768,param_1);
    if (UVar25 < *(ulonglong *)(*plVar26 + 0x30)) goto LAB_1801f1009;
    plVar26 = (longlong *)FUN_1801b0c90(&DAT_180bbeb20,local_768,param_1);
    *(ULONGLONG *)(*plVar26 + 0x30) = UVar25 + 5000;
    plVar26 = (longlong *)FUN_1801edc30(local_768);
    lVar23 = *plVar26;
    lVar4 = plVar26[1];
    lVar30 = plVar26[2];
    local_758 = lVar30;
    if (((lVar23 == 0) || (lVar4 == 0)) || (lVar30 == 0)) goto LAB_1801f1009;
    local_7d8 = (undefined1  [16])0x0;
    local_7c8 = 0;
    local_7c0 = 0;
    FUN_180159e60(local_7d8,L"resources",9);
    uVar22 = FUN_18015c130(param_1 + 0x20,&local_798);
    FUN_1800a7e60(local_708,uVar22,local_7d8);
    FUN_18015b930(&local_798);
    FUN_18015b930(local_7d8);
    local_7f8 = *(undefined ***)(param_1 + 0x14);
    if (0x7fffffffffffffffU - (longlong)local_7f8 < 2) {
                    /* WARNING: Subroutine does not return */
      FUN_18015bb70();
    }
    local_7e8 = 2;
    local_7f0 = "_c";
    FUN_18015a9c0(&local_7b8);
    local_768._0_8_ = &local_7b8;
    if (0xf < local_7a0) {
      local_768._0_8_ =
           (char *)CONCAT44(uStack_7b4,CONCAT22(uStack_7b6,CONCAT11(cStack_7b7,local_7b8)));
    }
    local_768._8_8_ = local_7a8;
    cVar14 = FUN_18017eed0(local_768);
    FUN_18015c010(&local_7b8);
    if (cVar14 != '\0') {
      pppppppuVar32 = local_708;
      if (7 < local_6f0) {
        pppppppuVar32 = local_708[0];
      }
      psVar1 = (short *)((longlong)pppppppuVar32 + local_6f8 * 2);
      for (psVar27 = (short *)FUN_1800a7b00(pppppppuVar32,psVar1);
          (psVar27 != psVar1 && ((*psVar27 == 0x5c || (*psVar27 == 0x2f)))); psVar27 = psVar27 + 1)
      {
      }
      local_748 = (undefined1  [16])0x0;
      local_738 = 0;
      local_730 = 0;
      FUN_180159e60(local_748,pppppppuVar32,(longlong)psVar27 - (longlong)pppppppuVar32 >> 1);
      pppppppuVar32 = local_708;
      if (7 < local_6f0) {
        pppppppuVar32 = local_708[0];
      }
      psVar1 = (short *)((longlong)pppppppuVar32 + local_6f8 * 2);
      for (psVar27 = (short *)FUN_1800a7b00(pppppppuVar32,psVar1);
          (psVar27 != psVar1 && ((*psVar27 == 0x5c || (*psVar27 == 0x2f)))); psVar27 = psVar27 + 1)
      {
      }
      local_768 = (undefined1  [16])0x0;
      local_758 = 0;
      local_750 = 0;
      FUN_180159e60(local_768,psVar27,(longlong)psVar1 - (longlong)psVar27 >> 1);
      local_688 = (undefined1 *)0x0;
      uStack_680 = 0;
      uStack_678 = 0;
      uStack_670 = 0;
      local_668 = (undefined1  [16])0x0;
      FUN_18017d720(local_768,&local_688);
      puVar33 = local_768;
      if (7 < local_750) {
        puVar33 = (undefined1 *)local_768._0_8_;
      }
      lVar29 = local_758 * 2;
      uStack_780 = 0;
      auStack_790._2_14_ = SUB1614((undefined1  [16])0x0,2);
      auVar10._14_2_ = 0;
      auVar10._0_14_ = auStack_790._2_14_;
      auStack_790 = auVar10 << 0x10;
      auStack_778._8_8_ = local_768;
      auStack_778._0_8_ = 7;
      local_798 = puVar33 + lVar29;
      while (local_688 != puVar33 + lVar29) {
        FUN_1800a7c10(local_748,&uStack_680);
        lpFileName = (LPCWSTR)local_748;
        if (7 < local_730) {
          lpFileName = (LPCWSTR)local_748._0_8_;
        }
        DVar19 = GetFileAttributesW(lpFileName);
        if ((DVar19 == 0xffffffff) || ((DVar19 & 0x410) != 0x10)) {
          FUN_18015b930(auStack_790);
          FUN_18015b930(&uStack_680);
          FUN_18015b930(local_768);
          goto LAB_1801f0ff4;
        }
        FUN_1801ad0b0(&local_688);
      }
      FUN_18015b930(auStack_790);
      FUN_18015b930(&uStack_680);
      FUN_18015b930(local_768);
      local_768._0_8_ = local_708;
      if (7 < local_6f0) {
        local_768._0_8_ = local_708[0];
      }
      local_768._8_8_ = local_6f8;
      FUN_1801a4fb0(local_6a8);
      pppppppcVar34 = (char *******)local_6a8;
      if (0xf < local_690) {
        pppppppcVar34 = local_6a8[0];
      }
      pppppppcVar34 = (char *******)((longlong)pppppppcVar34 + local_698);
      pppppppcVar28 = (char *******)local_6a8;
      if (0xf < local_690) {
        pppppppcVar28 = local_6a8[0];
      }
      if (pppppppcVar28 != pppppppcVar34) {
        do {
          if (*(char *)pppppppcVar28 == '\\') {
            *(char *)pppppppcVar28 = '/';
          }
          pppppppcVar28 = (char *******)((longlong)pppppppcVar28 + 1);
        } while (pppppppcVar28 != pppppppcVar34);
      }
      pppppppcVar34 = (char *******)local_6a8;
      if (0xf < local_690) {
        pppppppcVar34 = local_6a8[0];
      }
      local_728 = (undefined1  [16])0x0;
      local_718 = (undefined1  [16])0x0;
      FUN_18015ba30(local_728,pppppppcVar34,local_698);
      FUN_18015c010(local_6a8);
      if (0x7fffffffffffffffU - *(longlong *)(param_1 + 0x14) < 2) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      local_7e8 = 2;
      local_7f0 = "_c";
      local_7f8 = (undefined **)*(longlong *)(param_1 + 0x14);
      FUN_18015a9c0(local_6c8);
      puVar33 = local_728;
      if (0xf < (ulonglong)local_718._8_8_) {
        puVar33 = (undefined1 *)local_728._0_8_;
      }
      cVar14 = FUN_1804513c0(lVar30,1,2);
      if (cVar14 == '\0') {
        uVar35 = 0;
      }
      else {
        lVar29 = FUN_18017ea70();
        *(int *)(lVar29 + 4) = *(int *)(lVar29 + 4) + 1;
        bVar15 = FUN_1801f3b50(lVar30,lVar23,puVar33);
        uVar35 = (uint)bVar15;
        lVar30 = FUN_18017ea70();
        if (*(int *)(lVar30 + 4) != 0) {
          *(int *)(lVar30 + 4) = *(int *)(lVar30 + 4) + -1;
        }
        if (bVar15 != 0) {
          pppppppuVar32 = local_6c8;
          if (0xf < local_6b0) {
            pppppppuVar32 = local_6c8[0];
          }
          cVar14 = FUN_1804513c0(lVar4,1,2);
          if (cVar14 == '\0') {
            cVar14 = '\0';
          }
          else {
            lVar30 = FUN_18017ea70();
            *(int *)(lVar30 + 4) = *(int *)(lVar30 + 4) + 1;
            FUN_1801f3b90(&local_7b8,lVar4,lVar23,pppppppuVar32);
            lVar30 = FUN_18017ea70();
            if (*(int *)(lVar30 + 4) != 0) {
              *(int *)(lVar30 + 4) = *(int *)(lVar30 + 4) + -1;
            }
            cVar14 = cStack_7b7;
          }
          cVar16 = local_7b8;
          if (cVar14 == '\0') {
            cVar16 = '\0';
          }
          if (cVar16 != '\0') {
            local_768._0_8_ = &DAT_1808daea0;
            iVar17 = FUN_1805f68d0(&DAT_1808daea0);
            if (iVar17 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(5);
            }
            if (DAT_1808daeec == 0x7fffffff) {
              DAT_1808daeec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            plVar26 = (longlong *)FUN_1801f4250(extraout_XMM0_Qa,&local_7b8,param_1 + 0x20);
            *(undefined1 *)(*plVar26 + 0x30) = 1;
            FUN_1805f68fc(&DAT_1808daea0);
            plVar26 = (longlong *)(param_1 + 0x10);
            if (0xf < *(ulonglong *)(param_1 + 0x16)) {
              plVar26 = (longlong *)*plVar26;
            }
            FUN_18063ab10(local_638,0,0x600);
            local_7f8 = (undefined **)plVar26;
            FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"model=%s cache_only=1");
            local_7f8 = &PTR_180700558;
            if (local_638[0] != '\0') {
              local_7f8 = (undefined **)&DAT_1806bcfc0;
            }
            local_7f0 = local_638;
            FUN_1800f6900(0);
            FUN_18015c010(local_6c8);
            FUN_18015c010(local_728);
            FUN_18015b930(local_748);
            FUN_18015b930(local_708);
            goto LAB_1801f120d;
          }
        }
      }
      piVar20 = param_1 + 0x10;
      if (0xf < *(ulonglong *)(param_1 + 0x16)) {
        piVar20 = *(int **)piVar20;
      }
      FUN_18063ab10(local_638,0,0x600);
      local_7f0 = (char *)CONCAT44(local_7f0._4_4_,uVar35);
      local_7f8 = (undefined **)piVar20;
      FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                    "model=%s submitted=%d file_visible=0 retry_ms=5000");
      local_7f8 = &PTR_180700558;
      if (local_638[0] != '\0') {
        local_7f8 = (undefined **)&DAT_1806bcfc0;
      }
      local_7f0 = local_638;
      FUN_1800f6900(0);
      FUN_18015c010(local_6c8);
      FUN_18015c010(local_728);
LAB_1801f0ff4:
      FUN_18015b930(local_748);
    }
    FUN_18015b930(local_708);
  }
  else {
LAB_1801f120d:
    FUN_1801efc70(param_1);
  }
LAB_1801f1009:
  FUN_18015c010(local_6e8);
  FUN_18015b930(local_658);
}



