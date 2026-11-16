// FUN_1802f9360 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f9360 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802f9360(void)

{
  byte *pbVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  undefined1 auVar6 [16];
  undefined *puVar7;
  size_t sVar8;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  undefined1 (*pauVar13) [16];
  undefined1 (*pauVar14) [16];
  ULONGLONG UVar15;
  longlong lVar16;
  longlong lVar17;
  byte ****ppppbVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  byte ****ppppbVar21;
  uint uVar22;
  byte *pbVar23;
  undefined1 *puVar24;
  longlong lVar25;
  undefined1 auStack_7b8 [32];
  undefined **local_798;
  char *local_790;
  char *local_778;
  undefined8 uStack_770;
  undefined1 *local_768;
  undefined1 *local_760;
  undefined1 local_758 [16];
  ulonglong local_748;
  ulonglong uStack_740;
  undefined1 local_738 [16];
  undefined1 local_728 [16];
  undefined1 local_718 [16];
  undefined1 local_708 [16];
  undefined1 local_6f8 [16];
  undefined1 local_6e8 [16];
  undefined1 local_6d8 [16];
  undefined8 local_6c8;
  undefined8 uStack_6c0;
  undefined *local_6b8;
  undefined8 local_6b0;
  longlong local_6a8;
  undefined1 local_6a0 [16];
  ulonglong local_690;
  ulonglong local_688;
  byte ****local_680;
  undefined8 uStack_678;
  size_t sStack_670;
  ulonglong uStack_668;
  undefined1 local_660 [40];
  char local_638 [1536];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_7b8;
  uVar22 = 0;
  local_6b0 = (undefined *)((ulonglong)local_6b0 & 0xffffffff00000000);
  local_6b8 = &DAT_180b8f998;
  iVar10 = FUN_1805f68d0(&DAT_180b8f998);
  uVar20 = DAT_180b0b4c8;
  if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b8f9e4 == 0x7fffffff) {
    DAT_180b8f9e4 = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_180b8fa98 == 0) goto LAB_1802f9d28;
  local_680 = (byte ****)CONCAT71(DAT_180b8fa88._1_7_,(undefined1)DAT_180b8fa88);
  uStack_678 = uRam0000000180b8fa90;
  sStack_670 = DAT_180b8fa98;
  uStack_668 = DAT_180b8faa0;
  DAT_180b8faa0 = 0xf;
  DAT_180b8fa98 = 0;
  DAT_180b8fa88._0_1_ = 0;
  if ((DAT_180b0b448 == '\0') && (DAT_180b8f9f0 != 0)) {
    pbVar23 = (byte *)&DAT_180b0b4b8;
    if (0xf < DAT_180b0b4d0) {
      pbVar23 = DAT_180b0b4b8;
    }
    local_690 = 0;
    local_688 = 0xf;
    local_6a0._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar3[0xf] = 0;
    auVar3._0_15_ = local_6a0._1_15_;
    local_6a0 = auVar3 << 8;
    local_6b0 = (undefined *)CONCAT44(local_6b0._4_4_,0x10);
    uVar19 = DAT_180b0b4c8;
    if (0x20 < DAT_180b0b4c8) {
      uVar19 = 0x20;
    }
    FUN_1800f5540(local_6a0,uVar19);
    pbVar1 = pbVar23 + uVar20;
    uVar20 = DAT_180b8fa10;
    uVar19 = local_690;
    while ((DAT_180b8fa10 = uVar20, pbVar23 != pbVar1 && (uVar19 < 0x20))) {
      if ((0x1f < *pbVar23) && (*pbVar23 != 0x3b)) {
        FUN_18015af80(local_6a0);
        uVar19 = local_690;
      }
      pbVar23 = pbVar23 + 1;
      uVar20 = DAT_180b8fa10;
    }
    if (uVar19 == 0) {
      if (DAT_180b8f9ec == '\0') {
        local_6c8 = 0;
        uStack_6c0 = 0xf;
        local_6d8._1_15_ = SUB1615((undefined1  [16])0x0,1);
        auVar4[0xf] = 0;
        auVar4._0_15_ = local_6d8._1_15_;
        local_6d8 = auVar4 << 8;
        pauVar14 = &local_6d8;
        uVar22 = 0x14;
        pauVar13 = (undefined1 (*) [16])0x0;
      }
      else {
        local_718 = (undefined1  [16])0x0;
        local_708 = (undefined1  [16])0x0;
        pauVar14 = (undefined1 (*) [16])&DAT_180b8fa00;
        if (0xf < DAT_180b8fa18) {
          pauVar14 = _DAT_180b8fa00;
        }
        if (0x7fffffffffffffff < uVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bb70();
        }
        if (uVar20 < 0x10) {
          local_708._8_8_ = 0xf;
          local_708._0_8_ = uVar20;
          pauVar13 = *(undefined1 (**) [16])*pauVar14;
          local_718 = *pauVar14;
        }
        else {
          uVar19 = uVar20 | 0xf;
          if (uVar19 < 0x8000000000000000) {
            if (uVar19 < 0x16) {
              uVar19 = 0x16;
            }
          }
          else {
            uVar19 = 0x7fffffffffffffff;
          }
          pauVar13 = (undefined1 (*) [16])FUN_18015bca0(uVar19 + 1);
          local_718._0_8_ = pauVar13;
          local_708._8_8_ = uVar19;
          local_708._0_8_ = uVar20;
          FUN_18063aed0(pauVar13,pauVar14,uVar20 + 1);
        }
        pauVar14 = &local_718;
        uVar22 = 0x12;
      }
      local_6b0._0_4_ = uVar22;
      local_738 = (undefined1  [16])0x0;
      local_728 = (undefined1  [16])0x0;
      uVar20 = *(ulonglong *)pauVar14[1];
      if (*(ulonglong *)(pauVar14[1] + 8) < 0x10) {
        pauVar13 = pauVar14;
      }
      if (0x7fffffffffffffff < uVar20) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      if (uVar20 < 0x10) {
        local_728._8_8_ = 0xf;
        local_728._0_8_ = uVar20;
        puVar12 = *(undefined1 **)*pauVar13;
        local_738 = *pauVar13;
      }
      else {
        uVar11 = uVar20 | 0xf;
        uVar19 = 0x7fffffffffffffff;
        if ((uVar11 < 0x8000000000000000) && (uVar19 = uVar11, uVar11 < 0x16)) {
          uVar19 = 0x16;
        }
        puVar12 = (undefined1 *)FUN_18015bca0(uVar19 + 1);
        local_738._0_8_ = puVar12;
        local_728._8_8_ = uVar19;
        local_728._0_8_ = uVar20;
        FUN_18063aed0(puVar12,pauVar13,uVar20 + 1);
      }
      uVar22 = uVar22 | 8;
      puVar24 = local_738;
    }
    else {
      local_6f8 = (undefined1  [16])0x0;
      local_6e8 = (undefined1  [16])0x0;
      pauVar14 = &local_6a0;
      if (0xf < local_688) {
        pauVar14 = (undefined1 (*) [16])local_6a0._0_8_;
      }
      if (0x7fffffffffffffff < uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      if (uVar19 < 0x10) {
        local_6e8._8_8_ = 0xf;
        local_6e8._0_8_ = uVar19;
        puVar12 = *(undefined1 **)*pauVar14;
        local_6f8 = *pauVar14;
      }
      else {
        uVar11 = uVar19 | 0xf;
        uVar20 = 0x7fffffffffffffff;
        if ((uVar11 < 0x8000000000000000) && (uVar20 = uVar11, uVar11 < 0x16)) {
          uVar20 = 0x16;
        }
        puVar12 = (undefined1 *)FUN_18015bca0(uVar20 + 1);
        local_6f8._0_8_ = puVar12;
        local_6e8._8_8_ = uVar20;
        local_6e8._0_8_ = uVar19;
        FUN_18063aed0(puVar12,pauVar14,uVar19 + 1);
      }
      puVar24 = local_6f8;
      uVar22 = 0x11;
    }
    local_6b0 = (undefined *)CONCAT44(local_6b0._4_4_,uVar22);
    if (*(ulonglong *)(puVar24 + 0x18) < 0x10) {
      puVar12 = puVar24;
    }
    FUN_180113930(&local_680,puVar12,*(undefined8 *)(puVar24 + 0x10));
    if ((uVar22 & 8) != 0) {
      uVar22 = uVar22 & 0xfffffff7;
      FUN_18015c010(local_738);
    }
    if ((uVar22 & 4) != 0) {
      uVar22 = uVar22 & 0xfffffffb;
      FUN_18015c010(local_6d8);
    }
    if ((uVar22 & 2) != 0) {
      uVar22 = uVar22 & 0xfffffffd;
      FUN_18015c010(local_718);
    }
    if ((uVar22 & 1) != 0) {
      uVar22 = uVar22 & 0xfffffffe;
      FUN_18015c010(local_6f8);
    }
    uVar22 = uVar22 & 0xffffffef;
    FUN_18015c010(local_6a0);
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar16 = DAT_1808fe740;
  lVar17 = DAT_1808da460;
  if ((DAT_1808fe740 != DAT_1808da460) || (lVar25 = DAT_180c6eee0, DAT_180c6eee0 == 0)) {
    UVar15 = GetTickCount64();
    if ((lVar16 == lVar17) && (UVar15 < DAT_180c6eec8)) {
      lVar25 = 0;
    }
    else {
      local_6b0 = &DAT_1808fe690;
      iVar10 = FUN_1805f68d0(&DAT_1808fe690);
      if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808fe6dc == 0x7fffffff) {
        DAT_1808fe6dc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      uVar20 = 1000;
      if (DAT_1808fe740 == lVar17) {
        if ((DAT_180c6eee0 == 0) && (DAT_180c6eec8 <= UVar15)) goto LAB_1802f980a;
      }
      else {
        DAT_1808fe6e0 = 1000;
LAB_1802f980a:
        puVar12 = (undefined1 *)0xffffffffffffffff;
        do {
          local_760 = puVar12 + 1;
          pcVar2 = puVar12 + 0x180826961;
          puVar12 = local_760;
        } while (*pcVar2 != '\0');
        local_768 = &DAT_180826960;
        local_778 = "patterns::engine_client_cmd";
        uStack_770 = 0x1b;
        DAT_180c6eee0 = FUN_1800e5d20(&local_778,&local_768);
        DAT_1808fe740 = lVar17;
        DAT_180c6eec8 = 0xffffffffffffffff;
        if (DAT_180c6eee0 == 0) {
          DAT_180c6eec8 = DAT_1808fe6e0 + UVar15;
          uVar20 = 60000;
          if (DAT_1808fe6e0 < 60000) {
            uVar20 = DAT_1808fe6e0 * 2;
          }
        }
        DAT_1808fe6e0 = uVar20;
      }
      lVar25 = DAT_180c6eee0;
      FUN_1805f68fc(&DAT_1808fe690);
    }
  }
  cVar9 = DAT_180c6eed0;
  if (((sStack_670 == 0) || (lVar25 == 0)) || (DAT_180c64938 == 0)) {
    LOCK();
    DAT_180c6eed0 = '\x01';
    UNLOCK();
    if (cVar9 == '\0') {
      FUN_18063ab10(local_638,0,0x600);
      FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"action=retry");
      local_798 = &PTR_180700558;
      if (local_638[0] != '\0') {
        local_798 = (undefined **)&DAT_1806bcfc0;
      }
      local_790 = local_638;
      FUN_1800f6900(2,&DAT_1806bcfc0,"ProfileChanger","COMMAND_API_UNAVAILABLE");
    }
  }
  else {
    if (DAT_180c6eea8 != DAT_180c64058) {
      DAT_180c6eea8 = DAT_180c64058;
      DAT_180c6eeb0 = 0;
    }
    if (DAT_180c6eea8 != 0) {
      if (DAT_180c6eeb0 == 0) {
        local_6b0 = (undefined *)CONCAT44(local_6b0._4_4_,0x8d39bde6);
        local_6a8 = 0;
        local_778 = (char *)&local_6b0;
        uStack_770 = 1;
        FUN_18044c9c0(DAT_180c6eea8,&local_778);
        DAT_180c6eeb0 = local_6a8;
        if (local_6a8 == 0) goto LAB_1802f99ef;
      }
      lVar17 = DAT_180c6eeb0 + 0x30;
      lVar16 = FUN_18017ea70();
      *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
      if (lVar17 == 0) {
        bVar5 = false;
      }
      else {
        local_6b0 = (undefined *)0x0;
        cVar9 = FUN_1804514f0(&local_6b0,lVar17,8);
        if (cVar9 == '\0') {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
      }
      puVar7 = local_6b0;
      lVar16 = FUN_18017ea70();
      if (*(int *)(lVar16 + 4) != 0) {
        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
      }
      if (((bVar5) &&
          (local_6b0 = (undefined *)((ulonglong)puVar7 & 0xfffffffffffffbdf | 0x200),
          local_6b0 != puVar7)) && (cVar9 = FUN_1804513c0(lVar17,8,1), cVar9 != '\0')) {
        lVar16 = FUN_18017ea70();
        *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
        FUN_1801fde60(lVar17,&local_6b0);
        lVar17 = FUN_18017ea70();
        if (*(int *)(lVar17 + 4) != 0) {
          *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + -1;
        }
      }
    }
LAB_1802f99ef:
    sVar8 = sStack_670;
    ppppbVar21 = (byte ****)&local_680;
    if (0xf < uStack_668) {
      ppppbVar21 = local_680;
    }
    local_748 = 0;
    uStack_740 = 0xf;
    local_758._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar6[0xf] = 0;
    auVar6._0_15_ = local_758._1_15_;
    local_758 = auVar6 << 8;
    local_6b0 = (undefined *)(CONCAT44(local_6b0._4_4_,uVar22) | 0x20);
    FUN_1800f5540(local_758,sStack_670 * 2);
    ppppbVar18 = (byte ****)((longlong)ppppbVar21 + sVar8);
    for (; ppppbVar21 != ppppbVar18; ppppbVar21 = (byte ****)((longlong)ppppbVar21 + 1)) {
      cVar9 = *(char *)ppppbVar21;
      if ((cVar9 == '\\') || (cVar9 == '\"')) {
        FUN_18015af80(local_758,0x5c);
      }
      FUN_18015af80(local_758,cVar9);
    }
    local_6a0._8_8_ = local_758;
    if (0xf < uStack_740) {
      local_6a0._8_8_ = local_758._0_8_;
    }
    local_6a0._0_8_ = 0xc000000000000000;
    local_768 = (undefined1 *)0x1;
    local_760 = local_6a0;
    local_778 = "name \"{}\"";
    uStack_770 = 9;
    local_690 = local_748;
    FUN_1801d97f0(local_660,&local_778,&local_768);
    FUN_18015c010(local_758);
    local_790 = (char *)0x0;
    cVar9 = FUN_180264660(lVar25,DAT_180c64938);
    sVar8 = sStack_670;
    if (cVar9 == '\0') {
      FUN_18063ab10(local_638,0,0x600);
      local_798 = (undefined **)sStack_670;
      FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"action=retry desired_length=%zu");
      local_798 = &PTR_180700558;
      if (local_638[0] != '\0') {
        local_798 = (undefined **)&DAT_1806bcfc0;
      }
      local_790 = local_638;
      FUN_1800f6900(2,&DAT_1806bcfc0,"ProfileChanger","NAME_UPDATE_FAILED");
    }
    else {
      ppppbVar21 = (byte ****)&local_680;
      if (0xf < uStack_668) {
        ppppbVar21 = local_680;
      }
      ppppbVar18 = (byte ****)&DAT_180b8fa20;
      if (0xf < DAT_180b8fa38) {
        ppppbVar18 = _DAT_180b8fa20;
      }
      if ((DAT_180b8fa30 != sStack_670) ||
         ((DAT_180b8fa30 != 0 && (iVar10 = memcmp(ppppbVar18,ppppbVar21,DAT_180b8fa30), iVar10 != 0)
          ))) {
        FUN_18063ab10(local_638,0,0x600);
        local_798 = (undefined **)sVar8;
        FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"desired_length=%zu");
        local_798 = &PTR_180700558;
        if (local_638[0] != '\0') {
          local_798 = (undefined **)&DAT_1806bcfc0;
        }
        local_790 = local_638;
        FUN_1800f6900(1,local_790,"ProfileChanger","NAME_UPDATE_SUBMITTED");
      }
      FUN_18015c010(&DAT_180b8fa20);
      _DAT_180b8fa20 = local_680;
      uRam0000000180b8fa28 = uStack_678;
      DAT_180b8fa30 = sStack_670;
      DAT_180b8fa38 = uStack_668;
      sStack_670 = 0;
      uStack_668 = 0xf;
      local_680 = (byte ****)((ulonglong)local_680 & 0xffffffffffffff00);
    }
    FUN_18015c010(local_660);
  }
  FUN_18015c010(&local_680);
LAB_1802f9d28:
  FUN_1805f68fc(&DAT_180b8f998);
}



