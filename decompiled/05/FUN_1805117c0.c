// FUN_1805117c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805117c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1805117c0(longlong param_1)

{
  ulonglong uVar1;
  float *pfVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  undefined8 uVar10;
  undefined1 (*pauVar11) [16];
  byte *pbVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined4 *puVar15;
  short *psVar16;
  undefined8 *puVar17;
  longlong lVar18;
  int *piVar19;
  longlong *plVar20;
  ulonglong uVar21;
  longlong lVar22;
  void *pvVar23;
  undefined8 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  undefined8 *******pppppppuVar27;
  longlong *plVar28;
  byte *pbVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  size_t _Size;
  char *pcVar33;
  char **ppcVar34;
  byte *pbVar35;
  float fVar36;
  undefined1 auVar37 [16];
  undefined4 uVar38;
  undefined4 uVar41;
  undefined4 uVar40;
  undefined4 uVar39;
  undefined4 uVar42;
  undefined1 auVar43 [64];
  undefined4 uVar45;
  undefined4 uVar44;
  undefined4 uVar46;
  undefined4 uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined1 auStackY_7f8 [32];
  undefined4 local_7a8;
  undefined4 uStack_7a4;
  undefined *puStack_7a0;
  undefined *puStack_798;
  char *pcStack_790;
  undefined *local_780;
  char *pcStack_778;
  undefined1 auStack_770 [16];
  char *local_760;
  undefined *puStack_758;
  char *local_748;
  char *pcStack_740;
  char *pcStack_738;
  char *pcStack_730;
  char *local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  undefined8 *******local_708;
  longlong lStack_700;
  ulonglong uStack_6f8;
  ulonglong uStack_6f0;
  undefined1 local_6e8 [8];
  undefined1 local_6e0 [24];
  char *local_6c8;
  char *local_6c0;
  char *local_6b8;
  char *local_6b0;
  undefined1 local_6a8 [16];
  undefined1 auStack_698 [16];
  char *local_688;
  char *local_680;
  char *local_678;
  char *local_670;
  char *local_668;
  undefined1 local_660 [32];
  longlong local_640 [4];
  undefined1 local_620 [32];
  undefined1 local_600 [32];
  undefined4 local_5e0;
  undefined4 local_5dc;
  undefined1 local_5d8 [16];
  longlong local_5c8;
  undefined8 local_5c0;
  undefined1 local_5b8 [16];
  undefined1 auStack_5a8 [16];
  undefined1 local_598 [16];
  undefined8 local_588;
  undefined8 *******local_580;
  longlong lStack_578;
  ulonglong uStack_570;
  ulonglong uStack_568;
  undefined1 local_560 [16];
  char *local_548 [9];
  char *local_500;
  undefined1 local_4f8 [8];
  undefined8 uStack_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  char local_4d8 [1024];
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStackY_7f8;
  local_5c0 = local_5c0 & 0xffffffff00000000;
  puVar24 = (undefined8 *)(param_1 + 0x38);
  if ((*(longlong *)(param_1 + 0x48) != 0) && (cVar5 = FUN_18050fed0(), cVar5 != '\0')) {
    puVar17 = (undefined8 *)(param_1 + 0x18);
    if (puVar17 != &DAT_1808e6650) {
      if (0xf < *(ulonglong *)(param_1 + 0x30)) {
        puVar17 = (undefined8 *)*puVar17;
      }
      FUN_180113930(&DAT_1808e6650,puVar17,*(undefined8 *)(param_1 + 0x28));
    }
    if (*(undefined4 **)(param_1 + 8) != &DAT_180cc8e48) {
      local_560 = (undefined1  [16])0x0;
      FUN_18050e740(local_560,param_1);
      if (local_560._8_8_ == 0) {
        uVar10 = FUN_18015b360(local_600,puVar24);
        pauVar11 = (undefined1 (*) [16])FUN_18050cb60(local_6e8,uVar10);
        uVar31 = 1;
      }
      else {
        local_7a8 = 0;
        uStack_7a4 = 0;
        puStack_7a0 = (undefined *)0x0;
        puStack_798 = (undefined *)0x0;
        pcStack_790 = (char *)0x0;
        FUN_18015ba30(&local_7a8,local_560._0_8_);
        pauVar11 = (undefined1 (*) [16])&local_7a8;
        uVar31 = 2;
      }
      local_5c0 = CONCAT44(local_5c0._4_4_,uVar31);
      local_5b8 = (undefined1  [16])0x0;
      auStack_5a8 = (undefined1  [16])0x0;
      local_5b8 = *pauVar11;
      auStack_5a8 = pauVar11[1];
      (*pauVar11)[0] = 0;
      *(undefined8 *)pauVar11[1] = 0;
      *(undefined8 *)(pauVar11[1] + 8) = 0xf;
      uVar30 = uVar31;
      if ((uVar31 & 2) != 0) {
        uVar30 = uVar31 & 0xfffffffd;
        local_5c0 = CONCAT44(local_5c0._4_4_,uVar31) & 0xfffffffffffffffd;
        FUN_18015c010(&local_7a8);
      }
      uVar31 = uVar30;
      if ((uVar30 & 1) != 0) {
        uVar31 = uVar30 & 0xfffffffe;
        local_5c0 = CONCAT44(local_5c0._4_4_,uVar30) & 0xfffffffffffffffe;
        FUN_18015c010(local_6e8);
      }
      local_548[0] = "hit sound ";
      local_548[1] = "death sound ";
      local_548[2] = "hit effect ";
      local_548[3] = "death effect ";
      local_548[4] = "bullet tracer ";
      local_548[5] = "bullet impact ";
      local_548[6] = "hit marker ";
      local_548[7] = "direction indicator ";
      local_548[8] = "scoreboard weapons ";
      ppcVar34 = local_548;
      uVar21 = *(ulonglong *)(param_1 + 0x50);
      uVar1 = *(ulonglong *)(param_1 + 0x48);
      while( true ) {
        pcVar33 = *ppcVar34;
        puVar17 = puVar24;
        if (0xf < uVar21) {
          puVar17 = (undefined8 *)*puVar24;
        }
        _Size = 0xffffffffffffffff;
        do {
          _Size = _Size + 1;
        } while (pcVar33[_Size] != '\0');
        if ((_Size <= uVar1) && (iVar9 = memcmp(puVar17,pcVar33,_Size), iVar9 == 0)) break;
        ppcVar34 = ppcVar34 + 1;
        if (ppcVar34 == local_548 + 9) goto LAB_180511a72;
      }
      uVar13 = 0xffffffffffffffff;
      do {
        uVar13 = uVar13 + 1;
      } while (pcVar33[uVar13] != '\0');
      _local_4f8 = (undefined1  [16])0x0;
      local_4e8 = (char *)0x0;
      local_4e0 = 0;
      if (uVar1 < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_180141470();
      }
      lVar22 = -1;
      if (uVar1 - uVar13 != -1) {
        lVar22 = uVar1 - uVar13;
      }
      if (0xf < uVar21) {
        puVar24 = (undefined8 *)*puVar24;
      }
      FUN_18015ba30(local_4f8,uVar13 + (longlong)puVar24,lVar22);
      local_5c0 = CONCAT44(local_5c0._4_4_,uVar31) | 0x2000;
      pauVar11 = (undefined1 (*) [16])FUN_18050cb60(&local_708,local_4f8);
      if (&local_5b8 != pauVar11) {
        FUN_18015c010(local_5b8);
        local_5b8 = *pauVar11;
        auStack_5a8 = pauVar11[1];
        *(undefined8 *)pauVar11[1] = 0;
        *(undefined8 *)(pauVar11[1] + 8) = 0xf;
        (*pauVar11)[0] = 0;
      }
      FUN_18015c010(&local_708);
      uVar31 = uVar31 | 0x2000;
LAB_180511a72:
      pfVar2 = *(float **)(param_1 + 8);
      if ((pfVar2 == (float *)&DAT_180cad950) || (pfVar2 == (float *)&DAT_180cad954)) {
        auVar37._0_8_ = -(ulonglong)(pfVar2 == (float *)&DAT_180cad950);
        auVar37._8_8_ = 0xffffffffffffffff;
        auVar37 = vblendvps_avx(SUB6416(ZEXT464(0x42b40000),0),SUB6416(ZEXT464(0xc2b40000),0),
                                auVar37);
        uVar10 = 1;
        if (pfVar2 == (float *)&DAT_180cad950) {
          uVar10 = 0xffffffff;
        }
        auVar43 = ZEXT1664(auVar37);
        fVar36 = (float)FUN_1800b4f90(uVar10);
        local_4f8._0_4_ = fVar36 - auVar43._0_4_;
        FUN_1804c28a0(pfVar2);
        cVar5 = FUN_18048a250("Adjustment",local_4f8,0xc1700000,0x41700000);
        fVar36 = auVar43._0_4_;
        iVar9 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
        if (iVar9 < 2) {
          FUN_1804c5a40("Calling PopID() too many times!");
          fVar36 = auVar43._0_4_;
        }
        else {
          *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar9 + -1;
        }
        if (cVar5 != '\0') {
          *pfVar2 = fVar36 + (float)local_4f8._0_4_;
        }
        goto LAB_180514132;
      }
      puVar24 = (undefined8 *)(param_1 + 0x38);
      if (0xf < *(ulonglong *)(param_1 + 0x50)) {
        puVar24 = (undefined8 *)*puVar24;
      }
      if ((*(longlong *)(param_1 + 0x48) == 0x3e) &&
         (iVar9 = memcmp(puVar24,"correct yaw to compensate for the models inherit sideways roll",
                         0x3e), iVar9 == 0)) {
        FUN_180113930(local_5b8,"Yaw Alignment",0xd);
      }
      pbVar12 = (byte *)FUN_18015b360(local_660,param_1 + 0x38);
      if (*(ulonglong *)(pbVar12 + 0x18) < 0x10) {
        pbVar29 = pbVar12;
      }
      else {
        pbVar29 = *(byte **)pbVar12;
      }
      pbVar35 = pbVar29 + *(longlong *)(pbVar12 + 0x10);
      for (; pbVar29 != pbVar35; pbVar29 = pbVar29 + 1) {
        iVar9 = tolower((uint)*pbVar29);
        *pbVar29 = (byte)iVar9;
        if ((byte)iVar9 == 0x5f) {
          *pbVar29 = 0x20;
        }
      }
      local_708 = *(undefined8 ********)pbVar12;
      lStack_700 = *(longlong *)(pbVar12 + 8);
      uStack_6f8 = *(ulonglong *)(pbVar12 + 0x10);
      uStack_6f0 = *(ulonglong *)(pbVar12 + 0x18);
      *pbVar12 = 0;
      pbVar12[0x10] = 0;
      pbVar12[0x11] = 0;
      pbVar12[0x12] = 0;
      pbVar12[0x13] = 0;
      pbVar12[0x14] = 0;
      pbVar12[0x15] = 0;
      pbVar12[0x16] = 0;
      pbVar12[0x17] = 0;
      pbVar12[0x18] = 0xf;
      pbVar12[0x19] = 0;
      pbVar12[0x1a] = 0;
      pbVar12[0x1b] = 0;
      pbVar12[0x1c] = 0;
      pbVar12[0x1d] = 0;
      pbVar12[0x1e] = 0;
      pbVar12[0x1f] = 0;
      local_580 = local_708;
      lStack_578 = lStack_700;
      uStack_570 = uStack_6f8;
      uStack_568 = uStack_6f0;
      FUN_18015c010(pbVar12);
      uVar21 = 0;
      if (uStack_6f8 != 0) {
        do {
          uVar21 = uVar21 + 1;
        } while (uVar21 < uStack_6f8);
      }
      lVar14 = FUN_18056f2e0(uVar21,local_4f8);
      lVar22 = DAT_180bbe7f8;
      if (*(longlong *)(lVar14 + 8) != 0) {
        lVar22 = *(longlong *)(lVar14 + 8);
      }
      FUN_18015c010(&local_580);
      auVar43 = ZEXT864(0);
      if (lVar22 == DAT_180bbe7f8) {
        local_7a8 = 0;
        uStack_7a4 = 0x42c80000;
        puStack_7a0 = (undefined *)0x0;
        puStack_798 = (undefined *)0x0;
        pcStack_790 = (char *)0x0;
        puVar15 = &local_7a8;
        uVar31 = uVar31 | 0xc;
      }
      else {
        puVar15 = (undefined4 *)FUN_180514210(local_6e8,lVar22 + 0x30);
        uVar31 = uVar31 | 0x10;
      }
      uVar46 = 0x42c80000;
      local_5c0 = CONCAT44(local_5c0._4_4_,uVar31);
      FUN_180514210(&local_5e0,puVar15);
      uVar30 = uVar31;
      if ((uVar31 & 0x10) != 0) {
        uVar30 = uVar31 & 0xffffffef;
        local_5c0 = CONCAT44(local_5c0._4_4_,uVar31) & 0xffffffffffffffef;
        FUN_1800f0160(local_6e0);
      }
      uVar31 = uVar30;
      if ((uVar30 & 8) != 0) {
        uVar31 = uVar30 & 0xfffffff7;
        local_5c0 = CONCAT44(local_5c0._4_4_,uVar30) & 0xfffffffffffffff7;
        FUN_1800f0160(&puStack_7a0);
      }
      plVar20 = (longlong *)(param_1 + 0x38);
      if (0xf < *(ulonglong *)(param_1 + 0x50)) {
        plVar20 = (longlong *)*plVar20;
      }
      if (*(longlong *)(param_1 + 0x48) == 9) {
        lVar22 = *plVar20 + -0x6c61637320647568;
        if (lVar22 == 0) {
          lVar22 = (ulonglong)*(byte *)(plVar20 + 1) - 0x65;
        }
        if (lVar22 == 0) {
          local_7a8 = 0x3f0ccccd;
          uStack_7a4 = 0x40000000;
          local_5e0 = 0x3f0ccccd;
          local_5dc = 0x40000000;
          if (local_5d8._0_8_ != 0) {
            if ((0xfff < (local_5c8 - local_5d8._0_8_ & 0xfffffffffffffff8U)) &&
               (0x1f < (local_5d8._0_8_ - *(longlong *)(local_5d8._0_8_ + -8)) - 8U))
            goto LAB_1805141c4;
            FUN_1804547d0();
          }
          local_5d8 = (undefined1  [16])0x0;
          local_5c8 = 0;
          puStack_7a0 = (undefined *)0x0;
          puStack_798 = (undefined *)0x0;
          pcStack_790 = (char *)0x0;
          FUN_1800f0160(&puStack_7a0);
        }
      }
      if (*(undefined4 **)(param_1 + 8) == &DAT_180cad808) {
        local_7a8 = 0xc0a00000;
        uStack_7a4 = 0x40a00000;
        local_5e0 = 0xc0a00000;
        local_5dc = 0x40a00000;
        if (local_5d8._0_8_ != 0) {
          if ((0xfff < (local_5c8 - local_5d8._0_8_ & 0xfffffffffffffff8U)) &&
             (0x1f < (local_5d8._0_8_ - *(longlong *)(local_5d8._0_8_ + -8)) - 8U)) {
LAB_1805141c4:
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          FUN_1804547d0();
        }
        local_5d8 = (undefined1  [16])0x0;
        local_5c8 = 0;
        puStack_7a0 = (undefined *)0x0;
        puStack_798 = (undefined *)0x0;
        pcStack_790 = (char *)0x0;
        FUN_1800f0160(&puStack_7a0);
      }
      puVar3 = *(undefined **)(param_1 + 8);
      uVar47 = 0x3f800000;
      uVar49 = auVar43._0_4_;
      if (puVar3 == &DAT_180cc84b0) {
        local_5dc = 0x3f800000;
        local_5e0 = uVar49;
      }
      if (puVar3 == &DAT_180cc84ac) {
        local_5dc = 0x42000000;
        local_5e0 = uVar49;
      }
      uVar50 = 0x42c00000;
      if (puVar3 == &DAT_180cc84b8) {
        local_5e0 = 0x41c00000;
        local_5dc = 0x42c00000;
      }
      plVar20 = (longlong *)(param_1 + 0x18);
      if (0xf < *(ulonglong *)(param_1 + 0x30)) {
        plVar20 = *(longlong **)(param_1 + 0x18);
      }
      uVar48 = 0x43fa0000;
      uVar38 = 0x43fa0000;
      uVar45 = 0x447a0000;
      uVar44 = 0x447a0000;
      if (10 < *(ulonglong *)(param_1 + 0x28)) {
        if (*plVar20 == 0x746f62746967656c) {
          if ((short)plVar20[1] == 0x2d20) {
            if (*(char *)((longlong)plVar20 + 10) == ' ') {
              lVar22 = *(longlong *)(param_1 + 0x48);
              psVar16 = (short *)(param_1 + 0x38);
              uVar21 = *(ulonglong *)(param_1 + 0x50);
              if (0xf < uVar21) {
                psVar16 = *(short **)(param_1 + 0x38);
              }
              if (((lVar22 == 3) && (*psVar16 == 0x6f66)) && ((char)psVar16[1] == 'v')) {
                local_5e0 = 0x3dcccccd;
                local_5dc = 0x42700000;
              }
              else {
                plVar20 = (longlong *)(param_1 + 0x38);
                if (0xf < uVar21) {
                  plVar20 = *(longlong **)(param_1 + 0x38);
                }
                if (((lVar22 == 0x11) && (*plVar20 == 0x646e617220766f66)) &&
                   ((plVar20[1] == 0x6f6974617a696d6f && ((char)plVar20[2] == 'n')))) {
                  local_5dc = 0x41700000;
                  uVar38 = 0x43fa0000;
                  uVar44 = 0x447a0000;
                  local_5e0 = uVar49;
                  goto LAB_1805124d3;
                }
                plVar20 = (longlong *)(param_1 + 0x38);
                if (0xf < uVar21) {
                  plVar20 = *(longlong **)(param_1 + 0x38);
                }
                if (lVar22 == 10) {
                  lVar14 = *plVar20 + -0x69746f6d206d6961;
                  if (lVar14 == 0) {
                    lVar14 = (ulonglong)*(ushort *)(plVar20 + 1) - 0x6e6f;
                  }
                  if (lVar14 == 0) {
                    uStack_4f0 = "Acceleration";
                    local_4f8 = (undefined1  [8])"Smooth";
                    local_4e8 = "Dynamic";
                    uVar38 = uVar48;
                    uVar44 = uVar45;
                    FUN_1801780e0(local_5d8,local_4f8,3);
                    goto LAB_1805124db;
                  }
                }
                pvVar23 = (void *)(param_1 + 0x38);
                if (0xf < uVar21) {
                  pvVar23 = *(void **)(param_1 + 0x38);
                }
                if ((lVar22 == 0x13) &&
                   (iVar9 = memcmp(pvVar23,"aim target priority",0x13), iVar9 == 0)) {
                  uStack_4f0 = "Highest Damage";
                  local_4f8 = (undefined1  [8])"Crosshair";
                  uVar38 = uVar48;
                  uVar44 = uVar45;
                  FUN_1801780e0(local_5d8,local_4f8,2);
                  goto LAB_1805124db;
                }
                lVar22 = *(longlong *)(param_1 + 0x48);
                pvVar23 = (void *)(param_1 + 0x38);
                uVar21 = *(ulonglong *)(param_1 + 0x50);
                if (0xf < uVar21) {
                  pvVar23 = *(void **)(param_1 + 0x38);
                }
                uVar38 = uVar48;
                uVar44 = uVar45;
                if (lVar22 == 0xf) {
                  iVar9 = memcmp(pvVar23,"target override",0xf);
                  uVar38 = uVar48;
                  uVar44 = uVar45;
                  if (iVar9 == 0) {
                    local_7a8 = 0x80866d1c;
                    uStack_7a4 = 1;
                    puStack_7a0 = &DAT_180858228;
                    puStack_798 = &DAT_180857e78;
                    pcStack_790 = "Lethal Body";
                    FUN_1801780e0(local_5d8,&local_7a8,4);
                    goto LAB_1805124db;
                  }
                }
                plVar20 = (longlong *)(param_1 + 0x38);
                if (0xf < uVar21) {
                  plVar20 = *(longlong **)(param_1 + 0x38);
                }
                if (((lVar22 != 9) || (*plVar20 != 0x65657073206d6961)) || ((char)plVar20[1] != 'd')
                   ) {
                  pvVar23 = (void *)(param_1 + 0x38);
                  if (0xf < uVar21) {
                    pvVar23 = *(void **)(param_1 + 0x38);
                  }
                  if ((lVar22 != 0xf) || (iVar9 = memcmp(pvVar23,"aim start speed",0xf), iVar9 != 0)
                     ) {
                    cVar5 = FUN_1800e7dd0(param_1 + 0x38,"aim acceleration");
                    if (cVar5 != '\0') {
                      local_5e0 = uVar47;
                      local_5dc = uVar38;
                      goto LAB_1805124db;
                    }
                    cVar5 = FUN_1800e7dd0(param_1 + 0x38,"smooth");
                    if (((cVar5 == '\0') &&
                        (cVar5 = FUN_1800e7dd0(param_1 + 0x38,"aim edge smoothing"), cVar5 == '\0'))
                       && (cVar5 = FUN_1800e7dd0(param_1 + 0x38,"standalone recoil smoothing"),
                          cVar5 == '\0')) {
                      cVar5 = FUN_1800e7dd0(param_1 + 0x38,"aim randomization");
                      if (cVar5 != '\0') {
                        local_5e0 = auVar43._0_4_;
                        goto LAB_1805124cb;
                      }
                      cVar5 = FUN_1800e7dd0(param_1 + 0x38,"standalone start bullet");
                      if (cVar5 == '\0') {
                        cVar5 = FUN_1800e7dd0(param_1 + 0x38,"trigger delay");
                        if (((cVar5 == '\0') &&
                            (cVar5 = FUN_1800e7dd0(param_1 + 0x38,"trigger reaction variation"),
                            cVar5 == '\0')) &&
                           (cVar5 = FUN_1800e7dd0(param_1 + 0x38,"trigger interval variation"),
                           cVar5 == '\0')) {
                          cVar5 = FUN_1800e7dd0(param_1 + 0x38,"trigger shot interval");
                          if (cVar5 == '\0') {
                            cVar5 = FUN_1800e7dd0(param_1 + 0x38,"trigger hitchance");
                            if (((cVar5 == '\0') &&
                                (cVar5 = FUN_1800e7dd0(param_1 + 0x38,"auto wall hit chance"),
                                cVar5 == '\0')) &&
                               ((cVar5 = FUN_1800f54b0(param_1 + 0x38,"hit chance override"),
                                cVar5 == '\0' &&
                                (cVar5 = FUN_1800f54b0(param_1 + 0x38,
                                                       "auto wall hit chance override"),
                                cVar5 == '\0')))) {
                              cVar5 = FUN_1800e7dd0(param_1 + 0x38,"trigger direct damage");
                              if (((cVar5 != '\0') ||
                                  (cVar5 = FUN_1800e7dd0(param_1 + 0x38,"min damage"), cVar5 != '\0'
                                  )) || ((cVar5 = FUN_1800f54b0(param_1 + 0x38,"min damage override"
                                                               ), cVar5 != '\0' ||
                                         (cVar5 = FUN_1800f54b0(param_1 + 0x38,
                                                                "auto wall min damage override"),
                                         cVar5 != '\0')))) {
                                local_5e0 = auVar43._0_4_;
                                local_5dc = 0x42ca0000;
                                goto LAB_1805124d3;
                              }
                              cVar5 = FUN_1800f54b0(param_1 + 0x38,&DAT_180866d08);
                              if ((((cVar5 == '\0') &&
                                   (cVar5 = FUN_1800f54b0(param_1 + 0x38,"recoil "), cVar5 == '\0'))
                                  && (cVar5 = FUN_1800f54b0(param_1 + 0x38,"standalone rcs "),
                                     cVar5 == '\0')) &&
                                 (cVar5 = FUN_1800e7dd0(param_1 + 0x38,"standalone recoil pitch"),
                                 cVar5 == '\0')) {
                                cVar5 = FUN_1800e7dd0(param_1 + 0x38,"standalone recoil yaw");
                                if (cVar5 == '\0') goto LAB_1805124db;
                              }
                              local_5e0 = auVar43._0_4_;
                              local_5dc = 0x43160000;
                              goto LAB_1805124d3;
                            }
                            local_5e0 = auVar43._0_4_;
                            local_5dc = uVar46;
                          }
                          else {
                            local_5e0 = auVar43._0_4_;
                            local_5dc = uVar44;
                          }
                        }
                        else {
                          local_5e0 = auVar43._0_4_;
                          local_5dc = uVar38;
                        }
                        goto LAB_1805124db;
                      }
                      local_5dc = 0x41200000;
                      local_5e0 = uVar47;
                    }
                    else {
                      local_5e0 = uVar47;
LAB_1805124cb:
                      local_5dc = 0x41f00000;
                    }
LAB_1805124d3:
                    goto LAB_1805124db;
                  }
                }
                local_5e0 = uVar47;
                local_5dc = uVar46;
              }
            }
          }
        }
      }
LAB_1805124db:
      plVar20 = (longlong *)(param_1 + 0x18);
      if (0xf < *(ulonglong *)(param_1 + 0x30)) {
        plVar20 = (longlong *)*plVar20;
      }
      uVar49 = 0x43480000;
      uVar47 = 0x40800000;
      if (((*(longlong *)(param_1 + 0x28) == 0xd) && (*plVar20 == 0x6d696c2065676172)) &&
         (((int)plVar20[1] == 0x72657469 && (*(char *)((longlong)plVar20 + 0xc) == 's')))) {
        piVar19 = (int *)(param_1 + 0x38);
        lVar22 = *(longlong *)(param_1 + 0x48);
        uVar21 = *(ulonglong *)(param_1 + 0x50);
        if (0xf < uVar21) {
          piVar19 = *(int **)piVar19;
        }
        if (((lVar22 == 7) && (*piVar19 == 0x206d6961)) &&
           (((short)piVar19[1] == 0x6f66 && (*(char *)((longlong)piVar19 + 6) == 'v')))) {
          local_5dc = 0x43340000;
        }
        else {
          plVar20 = (longlong *)(param_1 + 0x38);
          if (0xf < uVar21) {
            plVar20 = (longlong *)*plVar20;
          }
          if (((lVar22 == 9) && (*plVar20 == 0x65657073206d6961)) && ((char)plVar20[1] == 'd')) {
            local_5dc = uVar46;
          }
          else {
            plVar20 = (longlong *)(param_1 + 0x38);
            if (0xf < uVar21) {
              plVar20 = (longlong *)*plVar20;
            }
            if (((lVar22 == 0xd) && (*plVar20 == 0x6e6f697463616572)) &&
               (((int)plVar20[1] == 0x6d697420 && (*(char *)((longlong)plVar20 + 0xc) == 'e')))) {
              local_5dc = uVar38;
            }
            else {
              plVar20 = (longlong *)(param_1 + 0x38);
              if (0xf < uVar21) {
                plVar20 = (longlong *)*plVar20;
              }
              if (((lVar22 == 10) && (*plVar20 == 0x6c6564206c6c696b)) &&
                 ((short)plVar20[1] == 0x7961)) {
                local_5dc = uVar44;
              }
              else {
                plVar20 = (longlong *)(param_1 + 0x38);
                if (0xf < *(ulonglong *)(param_1 + 0x50)) {
                  plVar20 = (longlong *)*plVar20;
                }
                if (((*(longlong *)(param_1 + 0x48) == 9) && (*plVar20 == 0x6c6c61772078616d)) &&
                   ((char)plVar20[1] == 's')) {
                  local_5dc = 0x40800000;
                }
                else {
                  plVar20 = (longlong *)(param_1 + 0x38);
                  if (0xf < *(ulonglong *)(param_1 + 0x50)) {
                    plVar20 = (longlong *)*plVar20;
                  }
                  if (((*(longlong *)(param_1 + 0x48) != 9) || (*plVar20 != 0x636172746b636162)) ||
                     ((char)plVar20[1] != 'k')) goto LAB_180512686;
                  local_5dc = 0x43480000;
                }
              }
            }
          }
        }
        local_5e0 = auVar43._0_4_;
      }
LAB_180512686:
      plVar20 = (longlong *)(param_1 + 0x18);
      if (0xf < *(ulonglong *)(param_1 + 0x30)) {
        plVar20 = *(longlong **)(param_1 + 0x18);
      }
      if (((9 < *(ulonglong *)(param_1 + 0x28)) && (*plVar20 == 0x20746f6265676172)) &&
         ((short)plVar20[1] == 0x202d)) {
        plVar20 = (longlong *)(param_1 + 0x38);
        if (0xf < *(ulonglong *)(param_1 + 0x50)) {
          plVar20 = (longlong *)*plVar20;
        }
        if (((*(ulonglong *)(param_1 + 0x48) != 10) || (*plVar20 != 0x616d6164206e696d)) ||
           ((short)plVar20[1] != 0x6567)) {
          puVar24 = (undefined8 *)(param_1 + 0x38);
          if (0xf < *(ulonglong *)(param_1 + 0x50)) {
            puVar24 = (undefined8 *)*puVar24;
          }
          if ((*(ulonglong *)(param_1 + 0x48) < 0x19) ||
             (iVar9 = memcmp(puVar24,"min damage override value",0x19), iVar9 != 0))
          goto LAB_18051272a;
        }
        local_5e0 = auVar43._0_4_;
        local_5dc = 0x43030000;
      }
LAB_18051272a:
      plVar20 = (longlong *)(param_1 + 0x18);
      if (0xf < *(ulonglong *)(param_1 + 0x30)) {
        plVar20 = *(longlong **)(param_1 + 0x18);
      }
      if (((9 < *(ulonglong *)(param_1 + 0x28)) && (*plVar20 == 0x20746f6265676172)) &&
         ((short)plVar20[1] == 0x202d)) {
        plVar20 = (longlong *)(param_1 + 0x38);
        if (0xf < *(ulonglong *)(param_1 + 0x50)) {
          plVar20 = (longlong *)*plVar20;
        }
        if (((*(ulonglong *)(param_1 + 0x48) == 10) && (*plVar20 == 0x6e61686320746968)) &&
           ((short)plVar20[1] == 0x6563)) {
LAB_1805127a8:
          local_5e0 = auVar43._0_4_;
          local_5dc = uVar46;
        }
        else {
          puVar24 = (undefined8 *)(param_1 + 0x38);
          if (0xf < *(ulonglong *)(param_1 + 0x50)) {
            puVar24 = (undefined8 *)*puVar24;
          }
          if (0x18 < *(ulonglong *)(param_1 + 0x48)) {
            iVar9 = memcmp(puVar24,"hit chance override value",0x19);
            if (iVar9 == 0) goto LAB_1805127a8;
          }
        }
      }
      plVar20 = (longlong *)(param_1 + 0x18);
      uVar21 = *(ulonglong *)(param_1 + 0x30);
      if (0xf < uVar21) {
        plVar20 = *(longlong **)(param_1 + 0x18);
      }
      puVar26 = *(undefined1 **)(param_1 + 0x28);
      uVar44 = 0x3e4ccccd;
      uVar46 = 0x40c00000;
      uVar38 = 0x3f000000;
      uVar48 = 0x40400000;
      uVar45 = 0x41000000;
      if (((puVar26 < &DAT_0000000c) || (*plVar20 != 0x7473206874616564)) ||
         ((int)plVar20[1] != 0x20656c79)) {
        puVar24 = (undefined8 *)(param_1 + 0x18);
        if (0xf < uVar21) {
          puVar24 = (undefined8 *)*puVar24;
        }
        if (((undefined1 *)0x12 < puVar26) &&
           (iVar9 = memcmp(puVar24,"static death style ",0x13), iVar9 == 0)) goto LAB_18051286d;
        puVar24 = (undefined8 *)(param_1 + 0x18);
        if (0xf < uVar21) {
          puVar24 = (undefined8 *)*puVar24;
        }
        if (puVar26 == (undefined1 *)0xf) {
          iVar9 = memcmp(puVar24,"death shockwave",0xf);
          if (iVar9 == 0) goto LAB_18051286d;
        }
      }
      else {
LAB_18051286d:
        plVar20 = (longlong *)(param_1 + 0x38);
        lVar22 = *(longlong *)(param_1 + 0x48);
        uVar21 = *(ulonglong *)(param_1 + 0x50);
        if (0xf < uVar21) {
          plVar20 = (longlong *)*plVar20;
        }
        if ((lVar22 == 8) && (*plVar20 == 0x6e6f697461727564)) {
          local_5e0 = uVar44;
        }
        else {
          plVar20 = (longlong *)(param_1 + 0x38);
          if (0xf < uVar21) {
            plVar20 = (longlong *)*plVar20;
          }
          if ((lVar22 != 4) || (*(int *)plVar20 != 0x657a6973)) {
            piVar19 = (int *)(param_1 + 0x38);
            if (0xf < uVar21) {
              piVar19 = *(int **)piVar19;
            }
            if (((lVar22 == 6) && (*piVar19 == 0x65727073)) && ((short)piVar19[1] == 0x6461)) {
              local_5e0 = 0x3e800000;
              local_5dc = uVar48;
            }
            else {
              piVar19 = (int *)(param_1 + 0x38);
              if (0xf < uVar21) {
                piVar19 = *(int **)piVar19;
              }
              if (((lVar22 == 5) && (*piVar19 == 0x65657073)) && ((char)piVar19[1] == 'd')) {
                local_5e0 = 0x41c80000;
LAB_1805129c9:
                local_5dc = 0x43960000;
              }
              else {
                piVar19 = (int *)(param_1 + 0x38);
                lVar22 = *(longlong *)(param_1 + 0x48);
                uVar21 = *(ulonglong *)(param_1 + 0x50);
                if (0xf < uVar21) {
                  piVar19 = *(int **)piVar19;
                }
                if (((lVar22 == 7) && (*piVar19 == 0x76617267)) &&
                   (((short)piVar19[1] == 0x7469 && (*(char *)((longlong)piVar19 + 6) == 'y')))) {
                  local_5dc = 0x44480000;
                  local_5e0 = auVar43._0_4_;
                }
                else {
                  piVar19 = (int *)(param_1 + 0x38);
                  if (0xf < uVar21) {
                    piVar19 = *(int **)piVar19;
                  }
                  if (((lVar22 == 5) && (*piVar19 == 0x6e756f63)) && ((char)piVar19[1] == 't')) {
                    local_5e0 = uVar45;
                    local_5dc = uVar50;
                  }
                  else {
                    plVar20 = (longlong *)(param_1 + 0x38);
                    if (0xf < uVar21) {
                      plVar20 = (longlong *)*plVar20;
                    }
                    if ((lVar22 == 4) && (*(int *)plVar20 == 0x646c6f68)) {
                      local_5dc = 0x3fc00000;
                      local_5e0 = auVar43._0_4_;
                    }
                    else {
                      cVar5 = FUN_1800e7dd0(param_1 + 0x38,&DAT_1806be290);
                      if (cVar5 != '\0') {
                        local_5e0 = 0x41a00000;
                        goto LAB_1805129c9;
                      }
                      cVar5 = FUN_1800e7dd0(param_1 + 0x38,&DAT_1806be298);
                      if (cVar5 == '\0') {
                        cVar5 = FUN_1800e7dd0(param_1 + 0x38,"opacity");
                        if (cVar5 != '\0') {
                          local_5e0 = auVar43._0_4_;
                          local_5dc = 0x42c80000;
                        }
                      }
                      else {
                        local_5e0 = 0xc3b40000;
                        local_5dc = 0x43b40000;
                      }
                    }
                  }
                }
              }
            }
            goto LAB_1805128ad;
          }
          local_5e0 = uVar38;
        }
        local_5dc = uVar46;
      }
LAB_1805128ad:
      uVar50 = 0x42c80000;
      plVar20 = (longlong *)(param_1 + 0x18);
      if (0xf < *(ulonglong *)(param_1 + 0x30)) {
        plVar20 = (longlong *)*plVar20;
      }
      uVar42 = 0x42a00000;
      uVar41 = 0x42a00000;
      uVar40 = 0x42a00000;
      uVar39 = 0x42a00000;
      if (*(longlong *)(param_1 + 0x28) == 0xd) {
        if (*plVar20 != 0x6874206874616564) goto LAB_180512d1d;
        if ((int)plVar20[1] != 0x65646e75) goto LAB_180512d1d;
        if (*(char *)((longlong)plVar20 + 0xc) != 'r') goto LAB_180512d1d;
        plVar20 = (longlong *)(param_1 + 0x38);
        lVar22 = *(longlong *)(param_1 + 0x48);
        uVar21 = *(ulonglong *)(param_1 + 0x50);
        if (0xf < uVar21) {
          plVar20 = (longlong *)*plVar20;
        }
        if ((lVar22 == 8) && (*plVar20 == 0x6e6f697461727564)) {
          local_5e0 = uVar44;
          local_5dc = uVar48;
          goto LAB_180512d1d;
        }
        piVar19 = (int *)(param_1 + 0x38);
        if (0xf < uVar21) {
          piVar19 = *(int **)piVar19;
        }
        if (((lVar22 == 6) && (*piVar19 == 0x67696568)) && ((short)piVar19[1] == 0x7468)) {
          local_5e0 = 0x43160000;
          local_5dc = 0x45098000;
          goto LAB_180512d1d;
        }
        piVar19 = (int *)(param_1 + 0x38);
        if (0xf < uVar21) {
          piVar19 = *(int **)piVar19;
        }
        if (((lVar22 == 5) && (*piVar19 == 0x74646977)) && ((char)piVar19[1] == 'h')) {
          local_5e0 = uVar38;
          local_5dc = uVar46;
          goto LAB_180512d1d;
        }
        plVar20 = (longlong *)(param_1 + 0x38);
        if (0xf < uVar21) {
          plVar20 = (longlong *)*plVar20;
        }
        if (((lVar22 == 10) && (*plVar20 == 0x656e64656767616a)) && ((short)plVar20[1] == 0x7373)) {
          local_5dc = 0x42a00000;
LAB_180512d15:
          uVar40 = uVar41;
          local_5e0 = auVar43._0_4_;
          goto LAB_180512d1d;
        }
        plVar20 = (longlong *)(param_1 + 0x38);
        lVar22 = *(longlong *)(param_1 + 0x48);
        uVar21 = *(ulonglong *)(param_1 + 0x50);
        if (0xf < uVar21) {
          plVar20 = (longlong *)*plVar20;
        }
        if ((lVar22 == 8) && (*plVar20 == 0x736568636e617262)) {
          local_5dc = uVar45;
          goto LAB_180512d15;
        }
        piVar19 = (int *)(param_1 + 0x38);
        if (0xf < uVar21) {
          piVar19 = *(int **)piVar19;
        }
        if ((((lVar22 != 7) || (*piVar19 != 0x69727473)) || ((short)piVar19[1] != 0x656b)) ||
           (*(char *)((longlong)piVar19 + 6) != 's')) {
          plVar20 = (longlong *)(param_1 + 0x38);
          if (0xf < uVar21) {
            plVar20 = (longlong *)*plVar20;
          }
          if (((lVar22 == 0xb) && (*plVar20 == 0x6461722072756c62)) &&
             (((short)plVar20[1] == 0x7569 && (*(char *)((longlong)plVar20 + 10) == 's')))) {
            local_5e0 = uVar44;
            local_5dc = uVar47;
          }
          else {
            cVar5 = FUN_1800e7dd0(param_1 + 0x38,"bloom radius");
            if (cVar5 == '\0') {
              uVar39 = uVar42;
              cVar5 = FUN_1800e7dd0(param_1 + 0x38,"bloom strength");
              if (cVar5 != '\0') {
                local_5e0 = auVar43._0_4_;
                local_5dc = 0x3f800000;
                goto LAB_180512d25;
              }
              uVar41 = uVar39;
              cVar5 = FUN_1800e7dd0(param_1 + 0x38,"volume");
              uVar40 = uVar41;
              if (cVar5 != '\0') {
                local_5dc = uVar50;
                goto LAB_180512d15;
              }
            }
            else {
              uVar40 = uVar42;
              local_5e0 = uVar44;
              local_5dc = uVar45;
            }
          }
          goto LAB_180512d1d;
        }
        local_5e0 = 0x3f800000;
        local_5dc = uVar48;
      }
      else {
LAB_180512d1d:
        uVar39 = uVar40;
      }
LAB_180512d25:
      puVar15 = *(undefined4 **)(param_1 + 8);
      if (puVar15 == (undefined4 *)&DAT_180b0cdd0) {
        local_5e0 = 0xc0000000;
        local_5dc = 0x40200000;
      }
      if (puVar15 == (undefined4 *)&DAT_180b0cdd4) {
        local_5e0 = 0xc0000000;
        local_5dc = 0x40000000;
      }
      if (puVar15 == (undefined4 *)&DAT_180b0cdd8) {
        local_5e0 = 0xc0000000;
        local_5dc = 0x40000000;
      }
      if (puVar15 == (undefined4 *)&DAT_180b0cddc) {
        local_5e0 = 0x42700000;
        local_5dc = 0x42880000;
      }
      if (puVar15 == &DAT_180cad428) {
        local_5e0 = auVar43._0_4_;
        local_5dc = uVar49;
      }
      if (puVar15 == &DAT_180b0d5a0) {
        local_5e0 = 0x42f00000;
        local_5dc = 0x43a00000;
      }
      puVar15 = *(undefined4 **)(param_1 + 8);
      if (puVar15 == &DAT_180b0d5a4) {
        local_5e0 = 0x41c00000;
        local_5dc = uVar39;
      }
      if (puVar15 == &DAT_180b0d5d0) {
        local_5dc = 0x42700000;
        local_5e0 = auVar43._0_4_;
      }
      if (puVar15 == (undefined4 *)&DAT_180cc8f60) {
        local_5e0 = 0xbf800000;
        local_5dc = 0x3f800000;
      }
      local_598 = (undefined1  [16])0x0;
      local_588 = 0;
      lVar22 = *(longlong *)(param_1 + 0x58);
      lVar14 = *(longlong *)(param_1 + 0x60);
      if (lVar22 != lVar14) {
        do {
          uVar10 = FUN_18015b360(local_660,lVar22);
          uVar10 = FUN_18050cb60(local_6e8,uVar10);
          FUN_1801b1650(local_598,uVar10);
          FUN_18015c010(local_6e8);
          lVar22 = lVar22 + 0x20;
        } while (lVar22 != lVar14);
        if (local_5d8._0_8_ != local_5d8._8_8_) {
          local_5d8._8_8_ = local_5d8._0_8_;
        }
        uVar10 = local_598._8_8_;
        for (puVar24 = (undefined8 *)local_598._0_8_; puVar24 != (undefined8 *)uVar10;
            puVar24 = puVar24 + 4) {
          puVar17 = puVar24;
          if (0xf < (ulonglong)puVar24[3]) {
            puVar17 = (undefined8 *)*puVar24;
          }
          local_4f8 = (undefined1  [8])puVar17;
          FUN_1801543a0(local_5d8,local_4f8);
        }
      }
      plVar20 = (longlong *)(param_1 + 0x38);
      lVar22 = *(longlong *)(param_1 + 0x48);
      uVar21 = *(ulonglong *)(param_1 + 0x50);
      if (0xf < uVar21) {
        plVar20 = (longlong *)*plVar20;
      }
      if (((lVar22 == 0x11) && (*plVar20 == 0x7620746361706d69)) &&
         ((plVar20[1] == 0x74696c6962697369 && ((char)plVar20[2] == 'y')))) {
LAB_18051304a:
        uStack_4f0 = &DAT_1807c6efc;
        local_4f8 = (undefined1  [8])"Visible";
        FUN_1801780e0(local_5d8,local_4f8,2);
      }
      else {
        plVar20 = (longlong *)(param_1 + 0x38);
        if (0xf < uVar21) {
          plVar20 = (longlong *)*plVar20;
        }
        if ((((lVar22 == 0x11) && (*plVar20 == 0x7620726563617274)) &&
            (plVar20[1] == 0x74696c6962697369)) && ((char)plVar20[2] == 'y')) goto LAB_18051304a;
        plVar20 = (longlong *)(param_1 + 0x38);
        if (0xf < uVar21) {
          plVar20 = (longlong *)*plVar20;
        }
        if (((lVar22 == 10) && (*plVar20 == 0x696c696269736976)) && ((short)plVar20[1] == 0x7974)) {
          piVar19 = (int *)(param_1 + 0x18);
          if (0xf < *(ulonglong *)(param_1 + 0x30)) {
            piVar19 = *(int **)(param_1 + 0x18);
          }
          if (((*(ulonglong *)(param_1 + 0x28) < 6) || (*piVar19 != 0x74616564)) ||
             ((short)piVar19[1] != 0x2068)) {
            plVar20 = (longlong *)(param_1 + 0x18);
            if (0xf < *(ulonglong *)(param_1 + 0x30)) {
              plVar20 = (longlong *)*plVar20;
            }
            if (((*(ulonglong *)(param_1 + 0x28) < 0xc) || (*plVar20 != 0x6420636974617473)) ||
               ((int)plVar20[1] != 0x68746165)) goto LAB_180513078;
          }
          goto LAB_18051304a;
        }
      }
LAB_180513078:
      puVar24 = (undefined8 *)(param_1 + 0x38);
      if (0xf < *(ulonglong *)(param_1 + 0x50)) {
        puVar24 = (undefined8 *)*puVar24;
      }
      if (((7 < *(ulonglong *)(param_1 + 0x48)) &&
          (lVar22 = *(ulonglong *)(param_1 + 0x48) + (longlong)puVar24,
          lVar14 = thunk_FUN_1805f9970(puVar24,lVar22,"material",8), lVar14 != lVar22)) &&
         ((lVar14 - (longlong)puVar24 != -1 &&
          ((*(char *)(param_1 + 4) == '\x03' || (*(char *)(param_1 + 4) == '\x02')))))) {
        FUN_1801780e0(local_5d8,&PTR_s_Liquid_1806ff330,0x13);
      }
      if (((undefined *)0x180cbf2bf < *(undefined **)(param_1 + 8)) &&
         (*(undefined **)(param_1 + 8) < &DAT_180cc7670)) {
        puVar24 = (undefined8 *)(param_1 + 0x38);
        if (0xf < *(ulonglong *)(param_1 + 0x50)) {
          puVar24 = (undefined8 *)*puVar24;
        }
        if ((*(longlong *)(param_1 + 0x48) == 0x13) &&
           (iVar9 = memcmp(puVar24,"primary layer color",0x13), iVar9 == 0)) {
          FUN_180113930(local_5b8,"Color",5);
        }
        puVar24 = (undefined8 *)(param_1 + 0x38);
        if (0xf < *(ulonglong *)(param_1 + 0x50)) {
          puVar24 = (undefined8 *)*puVar24;
        }
        if ((*(longlong *)(param_1 + 0x48) == 0x16) &&
           (iVar9 = memcmp(puVar24,"primary layer material",0x16), iVar9 == 0)) {
          FUN_180113930(local_5b8,"Material",8);
        }
        plVar20 = (longlong *)(param_1 + 0x38);
        if (0xf < *(ulonglong *)(param_1 + 0x50)) {
          plVar20 = (longlong *)*plVar20;
        }
        if ((((*(longlong *)(param_1 + 0x48) == 0x12) && (*plVar20 == 0x207972616d697270)) &&
            (plVar20[1] == 0x696c696269736976)) && ((short)plVar20[2] == 0x7974)) {
          FUN_180113930(local_5b8,"Visibility",10);
          uStack_4f0 = "Through Walls";
          local_4f8 = (undefined1  [8])"Visible";
          FUN_1801780e0(local_5d8,local_4f8,2);
        }
      }
      FUN_1804c28a0(*(undefined8 *)(param_1 + 8));
      auVar37 = auVar43._0_16_;
      switch(*(undefined1 *)(param_1 + 4)) {
      case 0:
        puVar26 = *(undefined1 **)(param_1 + 8);
        puVar25 = local_5b8;
        if (0xf < (ulonglong)auStack_5a8._8_8_) {
          puVar25 = (undefined1 *)local_5b8._0_8_;
        }
        bVar6 = FUN_1804898a0(puVar25,puVar26,&DAT_180829dd4,1);
        if (bVar6 != 0) {
          puVar26[0x10] = *puVar26;
        }
        local_4f8 = (undefined1  [8])*(undefined8 *)(DAT_180bb8ae8 + 0x1ed4);
        local_5c0 = *(ulonglong *)(DAT_180bb8ae8 + 0x1ecc);
        FUN_18050e540(puVar26,&local_5c0,local_4f8);
        break;
      case 1:
        puVar26 = local_5b8;
        if (0xf < (ulonglong)auStack_5a8._8_8_) {
          puVar26 = (undefined1 *)local_5b8._0_8_;
        }
        bVar6 = FUN_1804898a0(puVar26,*(undefined8 *)(param_1 + 8),&DAT_180829dd4,1);
        break;
      case 2:
        piVar19 = *(int **)(param_1 + 8);
        lVar22 = param_1 + 0x38;
        if (0xf < *(ulonglong *)(param_1 + 0x50)) {
          lVar22 = *(longlong *)(param_1 + 0x38);
        }
        if ((3 < *(ulonglong *)(param_1 + 0x48)) &&
           (*(int *)((*(ulonglong *)(param_1 + 0x48) - 4) + lVar22) == 0x79656b20)) {
          puVar26 = local_5b8;
          if (0xf < (ulonglong)auStack_5a8._8_8_) {
            puVar26 = (undefined1 *)local_5b8._0_8_;
          }
          FUN_18050e080(puVar26,piVar19,0xffffffffffffffff);
          goto switchD_18051322e_default;
        }
        if (local_5d8._0_8_ == local_5d8._8_8_) {
          local_5c0 = CONCAT44(local_5c0._4_4_,(float)*piVar19);
          puVar26 = local_5b8;
          if (0xf < (ulonglong)auStack_5a8._8_8_) {
            puVar26 = (undefined1 *)local_5b8._0_8_;
          }
          bVar6 = FUN_18048a250(puVar26,&local_5c0,local_5e0,local_5dc);
          if (bVar6 != 0) {
            auVar4 = vroundps_avx(ZEXT416((uint)ABS((float)local_5c0)),0);
            auVar37 = vcmpss_avx(ZEXT416((uint)(ABS((float)local_5c0) - auVar4._0_4_)),
                                 ZEXT416(0x3f000000),0);
            *piVar19 = (int)(float)((uint)((float)(auVar37._0_4_ & 0x3f800000) + auVar4._0_4_) |
                                   (uint)(float)local_5c0 & 0x80000000);
          }
        }
        else {
          local_780 = (undefined *)0x0;
          pcStack_778 = (char *)0x0;
          auStack_770 = ZEXT816(0);
          local_760 = (char *)CONCAT71(local_760._1_7_,1);
          puStack_758 = (undefined *)0x0;
          puVar26 = local_5b8;
          if (0xf < (ulonglong)auStack_5a8._8_8_) {
            puVar26 = (undefined1 *)local_5b8._0_8_;
          }
          local_748 = (char *)0x0;
          pcStack_740 = (char *)0x0;
          pcStack_738 = (char *)0x0;
          pcStack_730 = (char *)0x0;
          local_728 = local_760;
          uStack_720 = 0;
          auVar37 = vunpcklps_avx(auVar37,auVar37);
          local_718 = auVar37._0_8_;
          uStack_4f0 = (longlong)(local_5d8._8_8_ - local_5d8._0_8_) >> 3;
          local_4f8 = (undefined1  [8])local_5d8._0_8_;
          bVar6 = FUN_18048d220(puVar26,piVar19,local_4f8,1);
        }
        break;
      case 3:
        local_5c0 = CONCAT44(local_5c0._4_4_,(uint)**(byte **)(param_1 + 8));
        if (local_5d8._0_8_ == local_5d8._8_8_) {
          local_4f8._0_4_ = (float)**(byte **)(param_1 + 8);
          puVar26 = local_5b8;
          if (0xf < (ulonglong)auStack_5a8._8_8_) {
            puVar26 = (undefined1 *)local_5b8._0_8_;
          }
          bVar6 = FUN_18048a250(puVar26,local_4f8,local_5e0,local_5dc);
          if (bVar6 != 0) {
            auVar4 = vroundps_avx(ZEXT416((uint)ABS((float)local_4f8._0_4_)),0);
            auVar37 = vcmpss_avx(ZEXT416((uint)(ABS((float)local_4f8._0_4_) - auVar4._0_4_)),
                                 ZEXT416(0x3f000000),0);
            iVar9 = (int)(float)((uint)((float)(auVar37._0_4_ & 0x3f800000) + auVar4._0_4_) |
                                local_4f8._0_4_ & 0x80000000);
            local_5c0 = CONCAT44(local_5c0._4_4_,iVar9);
            **(undefined1 **)(param_1 + 8) = (char)iVar9;
          }
        }
        else {
          local_780 = (undefined *)0x0;
          pcStack_778 = (char *)0x0;
          auStack_770 = ZEXT816(0);
          local_760 = (char *)CONCAT71(local_760._1_7_,1);
          puStack_758 = (undefined *)0x0;
          puVar26 = local_5b8;
          if (0xf < (ulonglong)auStack_5a8._8_8_) {
            puVar26 = (undefined1 *)local_5b8._0_8_;
          }
          local_748 = (char *)0x0;
          pcStack_740 = (char *)0x0;
          pcStack_738 = (char *)0x0;
          pcStack_730 = (char *)0x0;
          local_728 = local_760;
          uStack_720 = 0;
          auVar37 = vunpcklps_avx(auVar37,auVar37);
          local_718 = auVar37._0_8_;
          uStack_4f0 = (longlong)(local_5d8._8_8_ - local_5d8._0_8_) >> 3;
          local_4f8 = (undefined1  [8])local_5d8._0_8_;
          bVar6 = FUN_18048d220(puVar26,&local_5c0,local_4f8,1);
          if (bVar6 != 0) {
            **(undefined1 **)(param_1 + 8) = (char)local_5c0;
          }
        }
        break;
      case 4:
        puVar26 = local_5b8;
        if (0xf < (ulonglong)auStack_5a8._8_8_) {
          puVar26 = (undefined1 *)local_5b8._0_8_;
        }
        bVar6 = FUN_18048a250(puVar26,*(undefined8 *)(param_1 + 8),local_5e0,local_5dc);
        break;
      case 5:
        pbVar12 = *(byte **)(param_1 + 8);
        fVar36 = 255.0;
        local_4f8._4_4_ = (float)pbVar12[1] / 255.0;
        local_4f8._0_4_ = (float)*pbVar12 / 255.0;
        uStack_4f0._0_4_ = (float)pbVar12[2] / 255.0;
        uStack_4f0._4_4_ = (float)pbVar12[3] / 255.0;
        puVar26 = local_5b8;
        if (0xf < (ulonglong)auStack_5a8._8_8_) {
          puVar26 = (undefined1 *)local_5b8._0_8_;
        }
        bVar6 = FUN_180489fc0(puVar26,local_4f8,1,&DAT_18082a268);
        uVar21 = local_5c0;
        if (bVar6 != 0) {
          local_5c0._4_4_ = SUB84(uVar21,4);
          local_5c0._0_4_ =
               (float)CONCAT13((char)(int)(fVar36 * uStack_4f0._4_4_),
                               CONCAT12((char)(int)(fVar36 * (float)uStack_4f0),
                                        CONCAT11((char)(int)(fVar36 * (float)local_4f8._4_4_),
                                                 (char)(int)(fVar36 * (float)local_4f8._0_4_))));
          *(float *)pbVar12 = (float)local_5c0;
        }
        break;
      case 6:
        lVar22 = *(longlong *)(param_1 + 8);
        if (0x7fffffffffffffff - auStack_5a8._0_8_ < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bb70();
        }
        FUN_18015a9c0(&local_7a8);
        puVar15 = &local_7a8;
        if ((char *)0xf < pcStack_790) {
          puVar15 = (undefined4 *)CONCAT44(uStack_7a4,local_7a8);
        }
        bVar8 = FUN_18048a250(puVar15,lVar22,local_5e0,local_5dc);
        FUN_18015c010(&local_7a8);
        if (0x7fffffffffffffff - auStack_5a8._0_8_ < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bb70();
        }
        FUN_18015a9c0(&local_7a8);
        puVar15 = &local_7a8;
        if ((char *)0xf < pcStack_790) {
          puVar15 = (undefined4 *)CONCAT44(uStack_7a4,local_7a8);
        }
        bVar7 = FUN_18048a250(puVar15,lVar22 + 4,local_5e0,local_5dc);
        FUN_18015c010(&local_7a8);
        if (0x7fffffffffffffff - auStack_5a8._0_8_ < 2) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bb70();
        }
        FUN_18015a9c0(&local_7a8);
        puVar15 = &local_7a8;
        if ((char *)0xf < pcStack_790) {
          puVar15 = (undefined4 *)CONCAT44(uStack_7a4,local_7a8);
        }
        bVar6 = FUN_18048a250(puVar15,lVar22 + 8,local_5e0,local_5dc);
        bVar6 = bVar8 | bVar7 | bVar6;
        FUN_18015c010(&local_7a8);
        break;
      case 7:
        plVar20 = (longlong *)(param_1 + 0x18);
        if (0xf < *(ulonglong *)(param_1 + 0x30)) {
          plVar20 = (longlong *)*plVar20;
        }
        if (*(longlong *)(param_1 + 0x28) == 0x14) {
          lVar22 = *plVar20 + -0x746e656d65766f6d;
          if ((lVar22 == 0) && (lVar22 = plVar20[1] + -0x7473726961202d20, lVar22 == 0)) {
            lVar22 = (ulonglong)*(uint *)(plVar20 + 2) - 0x65666172;
          }
          if (lVar22 == 0) {
            local_688 = "Avoid Walls";
            local_680 = "Steer from View";
            local_678 = "Steer from Movement Keys";
            local_670 = "Only While Jump Held";
            local_668 = "Pause While Walking";
            FUN_1801780e0(local_5d8,&local_688,5);
          }
        }
        plVar20 = (longlong *)(param_1 + 0x18);
        if (0xf < *(ulonglong *)(param_1 + 0x30)) {
          plVar20 = (longlong *)*plVar20;
        }
        if (*(longlong *)(param_1 + 0x28) == 0x12) {
          lVar22 = *plVar20 + -0x746e656d65766f6d;
          if ((lVar22 == 0) && (lVar22 = plVar20[1] + -0x62706d756a202d20, lVar22 == 0)) {
            lVar22 = (ulonglong)*(ushort *)(plVar20 + 2) - 0x6775;
          }
          if (lVar22 == 0) {
            local_6c8 = "High Jump";
            local_6c0 = "Preserve Ramp Momentum";
            local_6b8 = "Reduce Landing Penalty";
            local_6b0 = "Avoid Fall Damage";
            FUN_1801780e0(local_5d8,&local_6c8,4);
          }
        }
        plVar20 = (longlong *)(param_1 + 0x38);
        if (0xf < *(ulonglong *)(param_1 + 0x50)) {
          plVar20 = (longlong *)*plVar20;
        }
        if ((*(longlong *)(param_1 + 0x48) == 8) && (*plVar20 == 0x7365786f62746968)) {
          local_780 = &DAT_180858228;
          pcStack_778 = "Chest";
          auStack_770._8_8_ = &DAT_18085820c;
          auStack_770._0_8_ = "Stomach";
          local_760 = "Legs";
          puStack_758 = &DAT_180830bd4;
          FUN_1801780e0(local_5d8,&local_780,6);
        }
        piVar19 = (int *)(param_1 + 0x18);
        if (0xf < *(ulonglong *)(param_1 + 0x30)) {
          piVar19 = *(int **)piVar19;
        }
        if ((((*(longlong *)(param_1 + 0x28) == 7) && (*piVar19 == 0x6f747561)) &&
            ((short)piVar19[1] == 0x7562)) && (*(char *)((longlong)piVar19 + 6) == 'y')) {
          plVar20 = (longlong *)(param_1 + 0x38);
          if (0xf < *(ulonglong *)(param_1 + 0x50)) {
            plVar20 = (longlong *)*plVar20;
          }
          if ((*(longlong *)(param_1 + 0x48) == 8) && (*plVar20 == 0x736564616e657267)) {
            local_748 = "Molotov / Incendiary";
            pcStack_740 = "HE Grenade";
            pcStack_738 = "Smoke";
            pcStack_730 = "Flashbang";
            local_728 = "Decoy";
            FUN_1801780e0(local_5d8,&local_748,5);
          }
        }
        lVar22 = *(longlong *)(param_1 + 8);
        uVar30 = 0;
        if (*(int *)(param_1 + 0x10) == 0) goto switchD_18051322e_default;
        bVar6 = 0;
        do {
          FUN_1804c2920(uVar30);
          if ((ulonglong)uVar30 < (ulonglong)((longlong)(local_5d8._8_8_ - local_5d8._0_8_) >> 3)) {
            local_6a8 = (undefined1  [16])0x0;
            auStack_698 = (undefined1  [16])0x0;
            lVar14 = -1;
            do {
              lVar14 = lVar14 + 1;
            } while (*(char *)(lVar14 + *(longlong *)(local_5d8._0_8_ + (ulonglong)uVar30 * 8)) !=
                     '\0');
            FUN_18015ba30(local_6a8);
            plVar20 = (longlong *)local_6a8;
            uVar31 = uVar31 | 0x20;
          }
          else {
            pcVar33 = (char *)((longlong)&local_4e8 + 5);
            uVar21 = (ulonglong)(uVar30 + 1);
            do {
              pcVar33 = pcVar33 + -1;
              uVar1 = uVar21 / 10;
              *pcVar33 = (char)uVar21 + (char)uVar1 * -10 + '0';
              uVar21 = uVar1;
            } while ((int)uVar1 != 0);
            FUN_18015bdb0(&local_708,pcVar33,(longlong)&local_4e8 + 5);
            local_5c0 = CONCAT44(local_5c0._4_4_,uVar31) | 0x1840;
            if (auStack_5a8._0_8_ == 0x7fffffffffffffff) {
                    /* WARNING: Subroutine does not return */
              FUN_18015bb70();
            }
            FUN_18015a9c0(local_620);
            local_5c0 = CONCAT44(local_5c0._4_4_,uVar31) | 0x1cc0;
            FUN_18015a6e0(local_640);
            plVar20 = local_640;
            uVar31 = uVar31 | 0x1fc0;
          }
          local_5c0 = CONCAT44(local_5c0._4_4_,uVar31);
          local_580 = (undefined8 *******)*plVar20;
          lStack_578 = plVar20[1];
          uStack_570 = plVar20[2];
          uStack_568 = plVar20[3];
          *(undefined1 *)plVar20 = 0;
          plVar20[2] = 0;
          plVar20[3] = 0xf;
          uVar32 = uVar31;
          if ((uVar31 >> 8 & 1) != 0) {
            uVar32 = uVar31 & 0xfffffeff;
            local_5c0 = CONCAT44(local_5c0._4_4_,uVar31) & 0xfffffffffffffeff;
            FUN_18015c010(local_640);
          }
          uVar31 = uVar32;
          if ((char)uVar32 < '\0') {
            uVar31 = uVar32 & 0xffffff7f;
            local_5c0 = CONCAT44(local_5c0._4_4_,uVar32) & 0xffffffffffffff7f;
            FUN_18015c010(local_620);
          }
          uVar32 = uVar31;
          if ((uVar31 & 0x40) != 0) {
            uVar32 = uVar31 & 0xffffffbf;
            local_5c0 = CONCAT44(local_5c0._4_4_,uVar31) & 0xffffffffffffffbf;
            FUN_18015c010(&local_708);
          }
          uVar31 = uVar32;
          if ((uVar32 & 0x20) != 0) {
            uVar31 = uVar32 & 0xffffffdf;
            local_5c0 = CONCAT44(local_5c0._4_4_,uVar32) & 0xffffffffffffffdf;
            FUN_18015c010(local_6a8);
          }
          pppppppuVar27 = &local_580;
          if (0xf < uStack_568) {
            pppppppuVar27 = local_580;
          }
          bVar8 = FUN_18048d5d0(pppppppuVar27,(ulonglong)uVar30 + lVar22,1);
          bVar6 = bVar6 | bVar8;
          iVar9 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
          if (iVar9 < 2) {
            FUN_1804c5a40("Calling PopID() too many times!");
          }
          else {
            *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar9 + -1;
          }
          FUN_18015c010(&local_580);
          uVar30 = uVar30 + 1;
        } while (uVar30 < *(uint *)(param_1 + 0x10));
        break;
      case 8:
        plVar20 = *(longlong **)(param_1 + 8);
        FUN_18063ab10(local_4d8,0,0x400);
        local_4f8 = (undefined1  [8])0x3ff;
        local_5c0 = plVar20[2];
        puVar24 = (undefined8 *)local_4f8;
        if ((ulonglong)plVar20[2] < 0x400) {
          puVar24 = &local_5c0;
        }
        plVar28 = plVar20;
        if (0xf < (ulonglong)plVar20[3]) {
          plVar28 = (longlong *)*plVar20;
        }
        FUN_18063aed0(local_4d8,plVar28,*puVar24);
        puVar26 = local_5b8;
        if (0xf < (ulonglong)auStack_5a8._8_8_) {
          puVar26 = (undefined1 *)local_5b8._0_8_;
        }
        bVar6 = FUN_18048bb10(puVar26,local_4d8,0x400,0);
        if (bVar6 != 0) {
          lVar22 = -1;
          do {
            lVar18 = lVar22 + 1;
            lVar14 = lVar22 + 1;
            lVar22 = lVar18;
          } while (local_4d8[lVar14] != '\0');
          FUN_180113930(plVar20,local_4d8,lVar18);
        }
        break;
      default:
switchD_18051322e_default:
        bVar6 = 0;
      }
      iVar9 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar9 < 2) {
        FUN_1804c5a40("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar9 + -1;
      }
      if (bVar6 != 0) {
        FUN_18050cd00();
      }
      FUN_180111b90(local_598);
      FUN_1800f0160(local_5d8);
LAB_180514132:
      FUN_18015c010(local_5b8);
    }
    FUN_180541c90();
  }
}



