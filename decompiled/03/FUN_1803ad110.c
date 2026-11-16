// FUN_1803ad110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803ad110 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001803ad29b) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1803ad110(undefined8 param_1,undefined8 param_2,char ******param_3,char ******param_4,
                  char ******param_5,char ******param_6)

{
  longlong *plVar1;
  double dVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  char ******ppppppcVar6;
  longlong lVar7;
  longlong lVar8;
  char ******ppppppcVar9;
  longlong lVar10;
  char cVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  char ******ppppppcVar15;
  char *****pppppcVar16;
  undefined **ppuVar17;
  undefined8 uVar18;
  int *piVar19;
  longlong lVar20;
  ulonglong *puVar21;
  longlong *plVar22;
  undefined8 *puVar23;
  ULONGLONG UVar24;
  char cVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined8 *puVar28;
  PSRWLOCK SRWLock;
  ulonglong uVar29;
  char cVar30;
  ulonglong uVar31;
  char *******pppppppcVar32;
  ulonglong uVar33;
  uint uVar34;
  char cVar35;
  char *pcVar36;
  char ******ppppppcVar37;
  bool bVar38;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 auStack_7f8 [32];
  char ******local_7d8;
  char ******local_7d0;
  char ******local_7c8;
  char ******local_7c0;
  char ******local_7b8;
  double local_7b0;
  ulonglong local_7a8;
  ulonglong local_7a0;
  ulonglong local_798;
  char local_788;
  char local_787;
  char ******local_780;
  char ******local_778;
  undefined1 local_770 [16];
  char *******local_760;
  char ******ppppppcStack_758;
  char *******pppppppcStack_750;
  char *******pppppppcStack_748;
  char *******local_740;
  ulonglong *local_738;
  undefined1 *local_730;
  undefined1 local_728 [32];
  undefined8 local_708;
  ulonglong local_700;
  undefined8 local_6f8;
  longlong local_6f0;
  PSRWLOCK pRStack_6e8;
  ulonglong uStack_6e0;
  undefined8 uStack_6d8;
  undefined1 local_6d0 [16];
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  PSRWLOCK pRStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  char ******local_690;
  char ******local_688;
  char ******local_680;
  char *******local_678;
  char ******ppppppcStack_670;
  char *******pppppppcStack_668;
  char *******pppppppcStack_660;
  char *****local_658 [192];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_7f8;
  local_708 = (char ******)((ulonglong)local_708 & 0xffffffff00000000);
  local_780 = param_3;
  local_6f8 = (char *)param_4;
  if ((DAT_180bb8ad0 & 1) != 0) {
    if (DAT_180c70390 == (char ******)0x0) {
    }
    (*(code *)DAT_180c70390)(param_3,param_4,param_5,param_6);
  }
  local_770 = ZEXT816(0x180809050);
  FUN_18017bf40(local_770 + 8);
  local_778 = DAT_180c70390;
  ppppppcVar15 = (char ******)FUN_1803af610();
  *ppppppcVar15 = (char *****)((longlong)*ppppppcVar15 + 1);
  local_708 = ppppppcVar15;
  pppppcVar16 = (char *****)GetTickCount64();
  if (ppppppcVar15[7] <= pppppcVar16) {
    ppppppcVar15[7] = (char *****)((longlong)pppppcVar16 + 500);
    if (*ppppppcVar15 != (char *****)0x0) {
      LOCK();
      DAT_180c71938 = DAT_180c71938 + (longlong)*ppppppcVar15;
      UNLOCK();
    }
    if (ppppppcVar15[1] != (char *****)0x0) {
      LOCK();
      DAT_180c71940 = DAT_180c71940 + (longlong)ppppppcVar15[1];
      UNLOCK();
    }
    if (ppppppcVar15[2] != (char *****)0x0) {
      LOCK();
      DAT_180c71928 = (char ******)((longlong)DAT_180c71928 + (longlong)ppppppcVar15[2]);
      UNLOCK();
    }
    if (ppppppcVar15[3] != (char *****)0x0) {
      LOCK();
      DAT_180c71930 = (char ******)((longlong)DAT_180c71930 + (longlong)ppppppcVar15[3]);
      UNLOCK();
    }
    if (ppppppcVar15[4] != (char *****)0x0) {
      LOCK();
      DAT_180c71958 = (char ******)((longlong)DAT_180c71958 + (longlong)ppppppcVar15[4]);
      UNLOCK();
    }
    if (ppppppcVar15[5] != (char *****)0x0) {
      LOCK();
      DAT_180c71960 = DAT_180c71960 + (longlong)ppppppcVar15[5];
      UNLOCK();
    }
    if (ppppppcVar15[6] != (char *****)0x0) {
      LOCK();
      DAT_180c71948 = DAT_180c71948 + (longlong)ppppppcVar15[6];
      UNLOCK();
    }
    ppppppcVar15[6] = (char *****)0x0;
    ppppppcVar15[5] = (char *****)0x0;
    ppppppcVar15[4] = (char *****)0x0;
    ppppppcVar15[3] = (char *****)0x0;
    ppppppcVar15[2] = (char *****)0x0;
    ppppppcVar15[1] = (char *****)0x0;
    *ppppppcVar15 = (char *****)0x0;
    lVar10 = DAT_180c71960;
    ppppppcVar9 = DAT_180c71958;
    lVar8 = DAT_180c71948;
    lVar7 = DAT_180c71940;
    lVar20 = DAT_180c71938;
    ppppppcVar6 = DAT_180c71930;
    ppppppcVar37 = DAT_180c71928;
    if (DAT_180c71950 <= pppppcVar16) {
      DAT_180c71950 = pppppcVar16 + 0x271;
      LOCK();
      UNLOCK();
      LOCK();
      DAT_180c71948 = 0;
      UNLOCK();
      LOCK();
      DAT_180c71960 = 0;
      UNLOCK();
      LOCK();
      DAT_180c71958 = (char ******)0x0;
      UNLOCK();
      LOCK();
      DAT_180c71930 = (char ******)0x0;
      UNLOCK();
      LOCK();
      DAT_180c71928 = (char ******)0x0;
      UNLOCK();
      LOCK();
      DAT_180c71940 = 0;
      UNLOCK();
      LOCK();
      DAT_180c71938 = 0;
      UNLOCK();
      FUN_18063ab10(local_658,0,0x600);
      local_7a8 = lVar8;
      local_7b0 = (double)lVar10;
      local_7b8 = ppppppcVar9;
      local_7c0 = ppppppcVar6;
      local_7c8 = ppppppcVar37;
      local_7d0 = (char ******)lVar7;
      local_7d8 = (char ******)lVar20;
      FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                    "calls=%llu route_hits=%llu route_misses=%llu fast_rejects=%llu player_dispatches=%llu item_dispatches=%llu synthetic_calls=%llu batched=1 active_batch_interval_ms=500 inactive_tail=deferred"
                   );
      ppuVar17 = &PTR_180700558;
      if ((char)local_658[0] != '\0') {
        ppuVar17 = (undefined **)&DAT_1806bcfc0;
      }
      local_7d0 = local_658;
      local_7d8 = (char ******)ppuVar17;
      FUN_1800f6900(0);
      param_4 = (char ******)local_6f8;
      param_3 = local_780;
      ppppppcVar15 = local_708;
    }
  }
  if (DAT_180c71880 == '\0') {
    LOCK();
    DAT_180c71880 = '\x01';
    UNLOCK();
    FUN_18063ab10(local_658,0,0x600);
    local_7b8 = param_6;
    local_7c0 = param_5;
    local_7d8 = (char ******)0x180809168;
    local_7d0 = param_3;
    local_7c8 = param_4;
    FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                  "route=%s this=0x%llx scene_object=0x%llx scene_view=0x%llx primitive_buffer=0x%llx"
                 );
    ppuVar17 = &PTR_180700558;
    if ((char)local_658[0] != '\0') {
      ppuVar17 = (undefined **)&DAT_1806bcfc0;
    }
    local_7d0 = local_658;
    local_7d8 = (char ******)ppuVar17;
    FUN_1800f6900(1);
  }
  if (param_4 == (char ******)0x0) {
    if (DAT_180c70390 != (char ******)0x0) {
      (*(code *)DAT_180c70390)(param_3,0,param_5,param_6);
    }
    goto LAB_1803ae171;
  }
  if (param_4 + 0x18 == (char ******)0x0) {
    bVar38 = false;
    uVar34 = (uint)local_6f8;
  }
  else {
    local_708 = (char ******)((ulonglong)local_708 & 0xffffffff00000000);
    lVar20 = FUN_18017ea70();
    *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
    cVar11 = FUN_1804514c0(&local_708,param_4 + 0x18,4);
    if (cVar11 == '\0') {
      bVar38 = false;
      lVar20 = FUN_18017ea70();
      if (*(int *)(lVar20 + 4) != 0) {
        *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
      }
      uVar34 = (uint)local_6f8;
    }
    else {
      bVar38 = true;
      lVar20 = FUN_18017ea70();
      if (*(int *)(lVar20 + 4) != 0) {
        *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
      }
      uVar34 = (uint)local_708;
    }
  }
  ppppppcVar37 = local_780;
  if (!bVar38) {
    uVar34 = 0;
  }
  if (0xfffffffd < uVar34 - 1) {
    local_788 = '\0';
    goto LAB_1803ad7b0;
  }
  local_788 = '\x01';
  if ((DAT_180c63119 == '\0') || (uVar34 != DAT_180c630c8)) {
    local_7c8 = param_5;
    local_7d0 = local_780;
    local_7d8 = local_778;
    cVar11 = FUN_1803c4bc0(&DAT_180ccf690,uVar34,param_4,param_6);
    if (cVar11 == '\0') {
      local_7c8 = param_5;
      local_7d0 = ppppppcVar37;
      local_7d8 = local_778;
      cVar11 = FUN_1803c4bc0(&DAT_180cd0770,uVar34,param_4,param_6);
      if (cVar11 == '\0') {
        local_7c8 = param_5;
        local_7d0 = ppppppcVar37;
        local_7d8 = local_778;
        cVar11 = FUN_1803c4bc0(&DAT_180cd1850,uVar34,param_4,param_6);
        if (cVar11 == '\0') {
          local_7c8 = param_5;
          local_7d0 = ppppppcVar37;
          local_7d8 = local_778;
          cVar11 = FUN_1803c4bc0(&DAT_180cd2930,uVar34,param_4);
          if (cVar11 == '\0') {
            if ((uVar34 & 0x7fff) < 0x4000) {
LAB_1803ad7b0:
              if (param_4 == (char ******)0x1) {
                cVar11 = '\0';
              }
              else {
                uVar27 = ((ulonglong)param_4 >> 0x15 ^ (ulonglong)param_4 >> 4) * 0xed5ad4bb;
                uVar31 = 0;
                do {
                  if (*(char *******)
                       (&DAT_180c65630 +
                       (uVar31 + (byte)((byte)(uVar27 >> 0xb) ^ (byte)uVar27) & 0xff) * 8) ==
                      param_4) {
                    cVar11 = '\x01';
                    goto LAB_1803ad845;
                  }
                  if (*(char *******)
                       (&DAT_180c65630 +
                       (uVar31 + (byte)((byte)(uVar27 >> 0xb) ^ (byte)uVar27) & 0xff) * 8) ==
                      (char ******)0x0) {
                    cVar11 = '\0';
                    goto LAB_1803ad925;
                  }
                  uVar31 = uVar31 + 1;
                } while (uVar31 < 0x100);
                cVar11 = DAT_180c65628;
              }
              if (cVar11 != '\0') {
LAB_1803ad845:
                ppppppcVar15[6] = (char *****)((longlong)ppppppcVar15[6] + 1);
                local_6d0 = ZEXT816(0);
                uStack_6c0 = 0;
                uStack_6b8 = 0;
                FUN_180244f40();
                ppppppcVar37 = local_780;
                if ((char)uStack_6b8 != '\0') {
                  local_7d8 = local_780;
                  local_7d0 = param_5;
                  cVar12 = FUN_180295490(&DAT_180cc96d0,param_4,param_6);
                  if (cVar12 == '\0') goto LAB_1803ad892;
LAB_1803ad95e:
                  FUN_180180bf0(local_6d0);
                  if ((char)uStack_6c0 == '\0') goto LAB_1803ae171;
                  SRWLock = (PSRWLOCK)local_6d0._8_8_;
                  goto LAB_1803ae16b;
                }
LAB_1803ad892:
                puVar28 = &DAT_180c66040;
                do {
                  if ((char ******)*puVar28 == param_4) goto LAB_1803ad95e;
                  puVar28 = puVar28 + 1;
                } while (puVar28 != (undefined8 *)&DAT_180c660c0);
                if ((char)uStack_6b8 != '\0') {
                  local_7d8 = ppppppcVar37;
                  local_7d0 = param_5;
                  cVar12 = FUN_180290750(&DAT_180cc9690,param_4,param_6);
                  if (cVar12 != '\0') goto LAB_1803ad95e;
                }
                FUN_180180bf0(local_6d0);
                if ((char)uStack_6c0 != '\0') {
                  ReleaseSRWLockShared((PSRWLOCK)local_6d0._8_8_);
                }
              }
              local_708 = (char ******)0x0;
              iVar14 = 0;
              local_6f8 = &DAT_1806bba88;
              if (cVar11 != '\0') goto LAB_1803ade1d;
LAB_1803ad925:
              local_787 = cVar11;
              if (local_788 == '\0') {
                if (DAT_180c70390 != (char ******)0x0) {
                  (*(code *)DAT_180c70390)(local_780,param_4,param_5,param_6);
                }
                goto LAB_1803ae171;
              }
              local_6f8 = "entity_event_cache";
              uVar26 = uVar34 & 0x7fff;
              if ((uVar34 - 1 < 0xfffffffe) && (uVar26 < 0x4000)) {
                uVar27 = (ulonglong)uVar26;
                if ((((&DAT_180b0e108)[uVar27 * 4] & 1) == 0) &&
                   ((&DAT_180b0e110)[uVar27 * 8] == uVar34)) {
                  ppppppcVar37 = (char ******)(&DAT_180b0e118)[uVar27 * 4];
                  iVar14 = (&DAT_180b0e120)[uVar27 * 8];
                  if (((((&DAT_180b0e108)[uVar27 * 4] == (&DAT_180b0e108)[uVar27 * 4]) &&
                       ((&DAT_180b0e110)[uVar27 * 8] == uVar34)) &&
                      (ppppppcVar37 != (char ******)0x0)) && (iVar14 != 0)) {
                    ppppppcVar15[1] = (char *****)((longlong)ppppppcVar15[1] + 1);
                    local_708 = ppppppcVar37;
                    cVar11 = local_787;
                    if (local_787 == '\0') {
                      if (iVar14 == -0x78331fc2) {
                        AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
                        local_678 = _DAT_180bb8890;
                        ppppppcStack_670 = ppppppcRam0000000180bb8898;
                        pppppppcStack_668 = ppppppcRam0000000180bb88a0;
                        pppppppcStack_660 = ppppppcRam0000000180bb88a8;
                        cVar11 = cRam0000000180bb88b8;
                        ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
                        if (ppppppcVar37 == ppppppcStack_670) {
                          if (cVar11 == '\0') {
                            cVar12 = DAT_180cb1278;
                            cVar25 = DAT_180cb12e0;
                            cVar30 = DAT_180cb13e8;
                            cVar35 = DAT_180cb14f0;
                          }
                          else {
                            cVar12 = DAT_180cb0ef8;
                            cVar25 = DAT_180cb0f60;
                            cVar30 = DAT_180cb1068;
                            cVar35 = DAT_180cb1170;
                          }
                          if ((cVar12 == '\0') ||
                             (((cVar25 == '\0' && (cVar30 == '\0')) && (cVar35 == '\0')))) {
                            bVar38 = false;
                          }
                          else {
                            bVar38 = true;
                          }
                          cVar12 = DAT_180cb2da8;
                          if (cVar11 != '\0') {
                            cVar12 = DAT_180cb2d28;
                          }
                          if ((cVar12 == '\0') || ((cVar11 != '\0' && (DAT_180b0cc88 == '\0')))) {
                            bVar3 = false;
                          }
                          else {
                            bVar3 = true;
                          }
                          if (((!bVar38) && (!bVar3)) &&
                             ((cVar11 == '\0' ||
                              (((DAT_180b0c990 == '\0' || (DAT_180b0cc88 != '\0')) &&
                               ((cVar11 == '\0' ||
                                ((DAT_180cb3528 == '\0' &&
                                 ((DAT_180b0cc88 == '\0' || (DAT_180b0d2d0 == '\0')))))))))))) {
                            if (DAT_180c70390 != (char ******)0x0) {
                              (*(code *)DAT_180c70390)(local_780,param_4,param_5,param_6);
                            }
                            goto LAB_1803ae171;
                          }
                        }
                      }
                      else {
                        if ((((iVar14 == -0x4bb6637b) || (iVar14 == 0x126045e0)) ||
                            (iVar14 == 0x5a95fe17)) && (DAT_180b8f9e8 != '\0')) goto LAB_1803ade1d;
                        if (((iVar14 != -0x78331fc2) && (iVar14 != 0x48cb9c08)) &&
                           ((iVar14 != -0x258b5465 &&
                            ((iVar14 != -0x61dd2bcb &&
                             (iVar13 = FUN_18027d2c0(iVar14), iVar13 == -1)))))) {
                          ppppppcVar15[3] = (char *****)((longlong)ppppppcVar15[3] + 1);
                          if (DAT_180c70390 != (char ******)0x0) {
                            (*(code *)DAT_180c70390)(local_780,param_4,param_5,param_6);
                          }
                          goto LAB_1803ae171;
                        }
                      }
                      local_708 = ppppppcVar37;
                      cVar11 = local_787;
                    }
LAB_1803ade1d:
                    ppppppcVar37 = local_708;
                    local_6f0 = 0;
                    pRStack_6e8 = (PSRWLOCK)0x0;
                    uStack_6e0 = 0;
                    uStack_6d8 = 0;
                    FUN_180244f40();
                    if ((char)uStack_6d8 == '\0') {
                      if (local_6f0 != 0) {
                        piVar19 = (int *)FUN_1801acaf0();
                        if ((uStack_6d8._1_1_ != '\0') && (*piVar19 != 0)) {
                          *piVar19 = *piVar19 + -1;
                        }
                        if ((char)uStack_6e0 != '\0') {
                          if (pRStack_6e8 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_18017d0c0(1);
                          }
                          ReleaseSRWLockShared(pRStack_6e8);
                          uStack_6e0 = uStack_6e0 & 0xffffffffffffff00;
                        }
                        uStack_6d8 = uStack_6d8 & 0xffffffffffffff00;
                        local_6f0 = 0;
                      }
                      if (DAT_180c70390 != (char ******)0x0) {
                        (*(code *)DAT_180c70390)(local_780,param_4,param_5,param_6);
                      }
                    }
                    else {
                      lVar20 = FUN_18017ea70();
                      uVar27 = *(ulonglong *)(lVar20 + 8);
                      local_700 = uVar27;
                      piVar19 = (int *)FUN_18017ea70();
                      *piVar19 = *piVar19 + 1;
                      *(char **)(piVar19 + 2) = "chams: generate animatable primitives";
                      if (cVar11 == '\0') {
                        if (iVar14 == -0x78331fc2) {
                          AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
                          local_760 = _DAT_180bb8890;
                          ppppppcStack_758 = ppppppcRam0000000180bb8898;
                          pppppppcStack_750 = ppppppcRam0000000180bb88a0;
                          pppppppcStack_748 = ppppppcRam0000000180bb88a8;
                          cVar11 = cRam0000000180bb88b8;
                          ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
                          if ((((ppppppcVar37 == ppppppcStack_758) && (cVar11 != '\0')) &&
                              (DAT_180b0c990 != '\0')) && (DAT_180b0cc88 == '\0'))
                          goto LAB_1803ae142;
                        }
                        local_708._0_5_ = CONCAT14(1,uVar34);
                        cVar11 = FUN_1801f67d0(ppppppcVar37,iVar14,local_708);
                        if ((cVar11 == '\0') &&
                           (cVar11 = FUN_1801f6e40(ppppppcVar37,iVar14,uVar34), cVar11 == '\0')) {
                          if (iVar14 == -0x78331fc2) {
                            FUN_1803d7b50(&DAT_180b8e2d0,ppppppcVar37,param_4);
                          }
LAB_1803adf93:
                          pcVar36 = local_6f8;
LAB_1803adf97:
                          uVar34 = 0;
                          if (ppppppcVar37 == (char ******)0x0) {
                            if (DAT_180c71858 == '\0') {
                              LOCK();
                              UNLOCK();
                              uVar34 = DAT_180c7185c + 1;
                              DAT_180c7185c = DAT_180c7185c + 1;
                            }
                            else {
                            }
                            if (DAT_180c71870 == '\0') {
                              LOCK();
                              DAT_180c71870 = '\x01';
                              UNLOCK();
                              FUN_18063ab10(local_658,0,0x600);
                              local_7d0 = (char ******)CONCAT44(local_7d0._4_4_,uVar34);
                              local_7d8 = (char ******)0x180809168;
                              local_7c8 = param_4;
                              FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                                            "generator=%s samples=%u scene_object=0x%llx action=original_rendering"
                                           );
                            }
                            else {
                              if ((uVar34 < 0x1000) || (DAT_180c71858 != '\0')) goto LAB_1803ae6d3;
                              LOCK();
                              DAT_180c71858 = '\x01';
                              UNLOCK();
                              FUN_18063ab10(local_658,0,0x600);
                              local_7d0 = (char ******)CONCAT44(local_7d0._4_4_,uVar34);
                              local_7d8 = (char ******)0x180809168;
                              FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                                            "generator=%s samples=%u action=original_rendering");
                            }
                            ppuVar17 = &PTR_180700558;
                            if ((char)local_658[0] != '\0') {
                              ppuVar17 = (undefined **)&DAT_1806bcfc0;
                            }
                            local_7d0 = local_658;
                            local_7d8 = (char ******)ppuVar17;
                            FUN_1800f6900(2);
                          }
                          else {
                            if (DAT_180c71882 == '\0') {
                              LOCK();
                              DAT_180c71882 = '\x01';
                              UNLOCK();
                              FUN_18063ab10(local_658,0,0x600);
                              local_7c8 = (char ******)CONCAT44(local_7c8._4_4_,iVar14);
                              local_7d8 = (char ******)0x180809168;
                              local_7d0 = (char ******)pcVar36;
                              FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                                            "generator=%s owner_route=%s class_hash=0x%08X");
                              ppuVar17 = &PTR_180700558;
                              if ((char)local_658[0] != '\0') {
                                ppuVar17 = (undefined **)&DAT_1806bcfc0;
                              }
                              local_7d0 = local_658;
                              local_7d8 = (char ******)ppuVar17;
                              FUN_1800f6900(1);
                            }
                            if (iVar14 != 0) {
                              local_7c0 = param_5;
                              local_7c8 = local_780;
                              local_7d0 = local_778;
                              local_7d8 = param_6;
                              cVar11 = FUN_18028d510(local_780,ppppppcVar37,iVar14,param_4);
                              if (cVar11 == '\0') {
                                local_7c0 = param_5;
                                local_7c8 = local_780;
                                local_7d0 = local_778;
                                local_7d8 = param_6;
                                cVar11 = FUN_18027c9c0(extraout_XMM0_Qa_01,ppppppcVar37,iVar14,
                                                       param_4);
                                if (cVar11 == '\0') {
                                  if ((((DAT_180c71968 != '\0') && (iVar14 == -0x61dd2bcb)) &&
                                      (DAT_180c7c4d8 == 0)) &&
                                     (UVar24 = GetTickCount64(), DAT_180c7c4d0 <= UVar24)) {
                                    local_690 = (char ******)&DAT_1809bb670;
                                    iVar14 = FUN_1805f68d0(&DAT_1809bb670);
                                    if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
                                      FUN_1805f6d44(5);
                                    }
                                    if (DAT_1809bb6bc == 0x7fffffff) {
                                      DAT_1809bb6bc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                                      FUN_1805f6d44(6);
                                    }
                                    if ((DAT_180c7c4d8 == 0) && (DAT_180c7c4d0 <= UVar24)) {
                                      DAT_180c7c4d8 = FUN_1804174b0("C_BaseEntity",0x36c7b4bd);
                                      DAT_180c7c4d0 = 0xffffffffffffffff;
                                      if (DAT_180c7c4d8 == 0) {
                                        DAT_180c7c4d0 = UVar24 + 1000;
                                      }
                                    }
                                    FUN_1805f68fc(&DAT_1809bb670);
                                  }
                                  goto LAB_1803ae6d3;
                                }
                                ppppppcVar15[5] = (char *****)((longlong)ppppppcVar15[5] + 1);
                                if (DAT_180c71864 == '\0') {
                                  LOCK();
                                  DAT_180c71864 = '\x01';
                                  UNLOCK();
                                  FUN_18063ab10(local_658,0,0x600);
                                  pcVar36 = "generator=%s kind=item class_hash=0x%08X";
                                  goto LAB_1803ae0d8;
                                }
                              }
                              else {
                                ppppppcVar15[4] = (char *****)((longlong)ppppppcVar15[4] + 1);
                                if (DAT_180c71884 == '\0') {
                                  LOCK();
                                  DAT_180c71884 = '\x01';
                                  UNLOCK();
                                  FUN_18063ab10(local_658,0,0x600);
                                  pcVar36 = "generator=%s kind=player class_hash=0x%08X";
LAB_1803ae0d8:
                                  local_7d0 = (char ******)CONCAT44(local_7d0._4_4_,iVar14);
                                  local_7d8 = (char ******)0x180809168;
                                  FUN_18015ad60(local_658,0x600,0xffffffffffffffff,pcVar36);
                                  ppuVar17 = &PTR_180700558;
                                  if ((char)local_658[0] != '\0') {
                                    ppuVar17 = (undefined **)&DAT_1806bcfc0;
                                  }
                                  local_7d0 = local_658;
                                  local_7d8 = (char ******)ppuVar17;
                                  FUN_1800f6900(1);
                                }
                              }
                              goto LAB_1803ae142;
                            }
                          }
LAB_1803ae6d3:
                          if (DAT_180c70390 != (char ******)0x0) {
                            (*(code *)DAT_180c70390)(local_780,param_4,param_5,param_6);
                          }
                          piVar19 = (int *)FUN_18017ea70();
                          *(ulonglong *)(piVar19 + 2) = uVar27;
                          if (*piVar19 != 0) {
                            *piVar19 = *piVar19 + -1;
                          }
                          if (local_6f0 == 0) {
                            cVar11 = (char)uStack_6e0;
                          }
                          else {
                            if ((char)uStack_6d8 != '\0') {
                              LOCK();
                              *(int *)(local_6f0 + 0x5c) = *(int *)(local_6f0 + 0x5c) + -1;
                              UNLOCK();
                            }
                            piVar19 = (int *)FUN_1801acaf0();
                            if ((uStack_6d8._1_1_ != '\0') && (*piVar19 != 0)) {
                              *piVar19 = *piVar19 + -1;
                            }
                            if ((char)uStack_6e0 != '\0') {
                              if (pRStack_6e8 == (PSRWLOCK)0x0) {
                    /* WARNING: Subroutine does not return */
                                FUN_18017d0c0(1);
                              }
                              ReleaseSRWLockShared(pRStack_6e8);
                              uStack_6e0 = uStack_6e0 & 0xffffffffffffff00;
                            }
                            uStack_6d8 = uStack_6d8 & 0xffffffffffffff00;
                            local_6f0 = 0;
                            cVar11 = '\0';
                          }
                          if (cVar11 != '\0') {
                            ReleaseSRWLockShared(pRStack_6e8);
                          }
                          FUN_18017bf40(&local_700);
                          uVar31 = local_700;
                          uVar33 = local_700 - local_770._8_8_;
                          puVar21 = (ulonglong *)FUN_1803af9d0();
                          local_7d8 = (char ******)(*puVar21 + 1);
                          *puVar21 = (ulonglong)local_7d8;
                          uVar27 = puVar21[1];
                          puVar21[1] = uVar27 + uVar33;
                          local_7a8 = puVar21[3] + (ulonglong)(999999 < uVar33);
                          puVar21[3] = local_7a8;
                          local_7a0 = puVar21[4] + (ulonglong)(4999999 < uVar33);
                          puVar21[4] = local_7a0;
                          local_798 = puVar21[5] + (ulonglong)(15999999 < uVar33);
                          puVar21[5] = local_798;
                          uVar29 = puVar21[2];
                          if (puVar21[2] < uVar33) {
                            puVar21[2] = uVar33;
                            uVar29 = uVar33;
                          }
                          if ((uVar31 != puVar21[7]) && ((longlong)uVar31 < (longlong)puVar21[7])) {
                          }
                          local_7b8 = (char ******)
                                      ((double)(longlong)(uVar31 - puVar21[6]) / 1000000.0);
                          dVar2 = (double)(uVar27 + uVar33);
                          local_7b0 = 0.0;
                          if (0.0 < (double)local_7b8) {
                            local_7b0 = (dVar2 / 1000.0) / (double)local_7b8;
                          }
                          local_7c0 = (char ******)(dVar2 / 1000000.0);
                          local_7c8 = (char ******)((double)uVar29 / 1000.0);
                          local_7d0 = (char ******)((dVar2 / (double)local_7d8) / 1000.0);
                          FUN_1801af8a0(dVar2 / (double)local_7d8,local_7d0,local_770._0_8_);
                          puVar21[2] = 0;
                          puVar21[1] = 0;
                          *puVar21 = 0;
                          puVar21[5] = 0;
                          puVar21[4] = 0;
                          puVar21[3] = 0;
                          goto LAB_1803ae9f5;
                        }
                      }
                      else {
                        iVar13 = FUN_1805f68d8(&DAT_180b8e3d0);
                        if (iVar13 == 0) {
                          if (DAT_180b8e41c != 0x7fffffff) {
                            for (puVar28 = (undefined8 *)*DAT_180cc9698; puVar28 != DAT_180cc9698;
                                puVar28 = (undefined8 *)*puVar28) {
                              puVar23 = puVar28;
                              while (puVar23 = puVar23 + 4, puVar23 != puVar28 + 0x14) {
                                if ((char ******)*puVar23 == param_4) {
                                  FUN_1805f68fc(&DAT_180b8e3d0);
                                  goto LAB_1803ae142;
                                }
                              }
                            }
                            FUN_1805f68fc(&DAT_180b8e3d0);
                            plVar22 = (longlong *)FUN_180113860(&DAT_180cc96d8);
                            puVar28 = DAT_180cc96d0;
                            if (plVar22 != (longlong *)0x0) {
                              LOCK();
                              *(int *)(plVar22 + 1) = (int)plVar22[1] + 1;
                              UNLOCK();
                            }
                            LOCK();
                            UNLOCK();
                            bVar5 = (byte)DAT_180cc96d8;
                            DAT_180cc96d8 = (longlong)plVar22;
                            if ((bVar5 & 3) == 2) {
                              FUN_1805fa36c(&DAT_180cc96d8);
                            }
                            if (puVar28 != (undefined8 *)0x0) {
                              for (puVar23 = (undefined8 *)*puVar28;
                                  puVar23 != (undefined8 *)puVar28[1]; puVar23 = puVar23 + 0x211) {
                                if ((char ******)*puVar23 == param_4) {
                                  if (plVar22 != (longlong *)0x0) {
                                    LOCK();
                                    plVar1 = plVar22 + 1;
                                    lVar20 = *plVar1;
                                    *(int *)plVar1 = (int)*plVar1 + -1;
                                    UNLOCK();
                                    if ((int)lVar20 == 1) {
                                      (**(code **)*plVar22)(plVar22);
                                      LOCK();
                                      piVar19 = (int *)((longlong)plVar22 + 0xc);
                                      iVar14 = *piVar19;
                                      *piVar19 = *piVar19 + -1;
                                      UNLOCK();
                                      if (iVar14 == 1) {
                                        (**(code **)(*plVar22 + 8))(plVar22);
                                      }
                                    }
                                  }
                                  goto LAB_1803ae142;
                                }
                              }
                            }
                            if (plVar22 != (longlong *)0x0) {
                              LOCK();
                              plVar1 = plVar22 + 1;
                              lVar20 = *plVar1;
                              *(int *)plVar1 = (int)*plVar1 + -1;
                              UNLOCK();
                              if ((int)lVar20 == 1) {
                                (**(code **)*plVar22)(plVar22);
                                LOCK();
                                piVar19 = (int *)((longlong)plVar22 + 0xc);
                                iVar13 = *piVar19;
                                *piVar19 = *piVar19 + -1;
                                UNLOCK();
                                if (iVar13 == 1) {
                                  (**(code **)(*plVar22 + 8))(plVar22);
                                }
                              }
                            }
                            if (local_788 == '\0') {
                              ppppppcVar37 = local_708;
                              goto LAB_1803adf93;
                            }
                            ppppppcVar37 = (char ******)0x0;
                            iVar14 = 0;
                            if (uVar34 - 1 < 0xfffffffe) {
                              if ((uVar34 & 0x7fff) < 0x4000) {
                                uVar31 = (ulonglong)(uVar34 & 0x7fff);
                                if (((&DAT_180b0e108)[uVar31 * 4] & 1) == 0) {
                                  if ((&DAT_180b0e110)[uVar31 * 8] == uVar34) {
                                    if ((&DAT_180b0e108)[uVar31 * 4] == (&DAT_180b0e108)[uVar31 * 4]
                                       ) {
                                      if ((&DAT_180b0e110)[uVar31 * 8] == uVar34) {
                                        if ((char ******)(&DAT_180b0e118)[uVar31 * 4] !=
                                            (char ******)0x0) {
                                          if ((&DAT_180b0e120)[uVar31 * 8] != 0) {
                                            ppppppcVar37 = (char ******)(&DAT_180b0e118)[uVar31 * 4]
                                            ;
                                            iVar14 = (&DAT_180b0e120)[uVar31 * 8];
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            pcVar36 = "synthetic_event_cache";
                            goto LAB_1803adf97;
                          }
                          DAT_180b8e41c = 0x7ffffffe;
                        }
                      }
LAB_1803ae142:
                      piVar19 = (int *)FUN_18017ea70();
                      *(ulonglong *)(piVar19 + 2) = uVar27;
                      if (*piVar19 != 0) {
                        *piVar19 = *piVar19 + -1;
                      }
                    }
                    FUN_180180bf0(&local_6f0);
                    if ((char)uStack_6e0 == '\0') goto LAB_1803ae171;
                    SRWLock = pRStack_6e8;
                    goto LAB_1803ae16b;
                  }
                }
              }
              ppppppcVar15[2] = (char *****)((longlong)ppppppcVar15[2] + 1);
              if (((DAT_180b8f9e8 != '\0') && (0x3fff < uVar26)) && (uVar26 != 0x7fff)) {
                local_6b0 = 0;
                pRStack_6a8 = (PSRWLOCK)0x0;
                uStack_6a0 = 0;
                uStack_698 = 0;
                uVar18 = FUN_180244f40(uVar26,&local_6b0);
                if ((char)uStack_698 != '\0') {
                  lVar20 = FUN_1803d4150(uVar18,uVar34);
                  if (lVar20 == 0) {
                    uStack_6c0 = 0;
                    uStack_6b8 = 0xf;
                    local_6d0._1_15_ = SUB1615((undefined1  [16])0x0,1);
                    auVar4[0xf] = 0;
                    auVar4._0_15_ = local_6d0._1_15_;
                    local_6d0 = auVar4 << 8;
                    plVar22 = (longlong *)local_6d0;
                  }
                  else {
                    uVar18 = FUN_1803d3fa0(extraout_XMM0_Qa_00,lVar20);
                    plVar22 = (longlong *)FUN_180454030(local_728,uVar18,0x80);
                  }
                  local_760 = (char *******)*plVar22;
                  ppppppcStack_758 = (char ******)plVar22[1];
                  pppppppcStack_750 = (char *******)plVar22[2];
                  pppppppcStack_748 = (char *******)plVar22[3];
                  local_678 = local_760;
                  ppppppcStack_670 = ppppppcStack_758;
                  pppppppcStack_668 = pppppppcStack_750;
                  pppppppcStack_660 = pppppppcStack_748;
                  *(undefined1 *)plVar22 = 0;
                  plVar22[2] = 0;
                  plVar22[3] = 0xf;
                  if (lVar20 == 0) {
                    FUN_18015c010(local_6d0);
                  }
                  else {
                    FUN_18015c010(local_728);
                  }
                  if (pppppppcStack_750 != (char *******)0x0) {
                    local_6f8._0_5_ = CONCAT14(1,uVar34);
                    pppppppcVar32 = (char *******)&local_678;
                    if ((char *******)0xf < pppppppcStack_748) {
                      pppppppcVar32 = local_760;
                    }
                    if (pppppppcVar32 == (char *******)0x0) {
                      uVar34 = 0;
                    }
                    else {
                      uVar34 = 0x811c9dc5;
                      cVar11 = *(char *)pppppppcVar32;
                      while (cVar11 != '\0') {
                        pppppppcVar32 = (char *******)((longlong)pppppppcVar32 + 1);
                        uVar34 = ((int)cVar11 ^ uVar34) * 0x1000193;
                        cVar11 = *(char *)pppppppcVar32;
                      }
                    }
                    cVar11 = FUN_1801f67d0(lVar20,uVar34,local_6f8);
                    if (cVar11 != '\0') {
                      FUN_18015c010(&local_678);
                      FUN_180180bf0(&local_6b0);
                      if ((char)uStack_6a0 == '\0') goto LAB_1803ae171;
                      SRWLock = pRStack_6a8;
                      goto LAB_1803ae16b;
                    }
                  }
                  FUN_18015c010(&local_678);
                }
                FUN_180180bf0(&local_6b0);
                if ((char)uStack_6a0 != '\0') {
                  ReleaseSRWLockShared(pRStack_6a8);
                }
              }
              if (DAT_180c70390 != (char ******)0x0) {
                (*(code *)DAT_180c70390)(local_780,param_4,param_5,param_6);
              }
            }
            else {
              uVar18 = FUN_1803d4150(extraout_XMM0_Qa,uVar34);
              cVar11 = FUN_1803ab8e0(uVar18);
              if (cVar11 != '\0') goto LAB_1803ae171;
              if (DAT_180c64054 == '\0') goto LAB_1803ad7b0;
              local_6b0 = 0;
              pRStack_6a8 = (PSRWLOCK)0x0;
              uStack_6a0 = 0;
              uStack_698 = 0;
              FUN_180244f40();
              if ((char)uStack_698 == '\0') {
LAB_1803ad795:
                FUN_180180bf0(&local_6b0);
                if ((char)uStack_6a0 != '\0') {
                  ReleaseSRWLockShared(pRStack_6a8);
                }
                goto LAB_1803ad7b0;
              }
              FUN_1803a8550(local_6d0,uVar34);
              if ((char)uStack_6c0 == '\0') goto LAB_1803ad795;
              local_700 = 0;
              local_690 = param_5;
              local_688 = ppppppcVar37;
              local_708 = local_778;
              local_6f8 = (char *)param_6;
              local_680 = param_4;
              if (((local_6d0[0] == '\0') && ((int)local_6d0._8_4_ < 0)) ||
                 (local_778 == (char ******)0x0)) goto LAB_1803ad795;
              ppppppcStack_758 = (char ******)&local_708;
              pppppppcStack_750 = &local_688;
              pppppppcStack_748 = &local_680;
              local_740 = &local_690;
              local_738 = &local_700;
              local_730 = local_6d0;
              local_760 = (char *******)&local_6f8;
              cVar11 = FUN_18028baa0(&local_760);
              if (cVar11 == '\0') goto LAB_1803ad795;
              FUN_180180bf0(&local_6b0);
              if ((char)uStack_6a0 == '\0') goto LAB_1803ae171;
              SRWLock = pRStack_6a8;
LAB_1803ae16b:
              ReleaseSRWLockShared(SRWLock);
            }
          }
        }
      }
    }
  }
  else {
    LOCK();
    UNLOCK();
    bVar38 = DAT_180c71888 != uVar34;
    DAT_180c71888 = uVar34;
    if (bVar38) {
      FUN_18063ab10(local_658,0,0x600);
      local_7d0 = (char ******)0x180809168;
      local_7d8 = (char ******)CONCAT44(local_7d8._4_4_,uVar34);
      FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                    "handle=%u route=%s scope=owned_preview primitives=blocked");
      ppuVar17 = &PTR_180700558;
      if ((char)local_658[0] != '\0') {
        ppuVar17 = (undefined **)&DAT_1806bcfc0;
      }
      local_7d0 = local_658;
      local_7d8 = (char ******)ppuVar17;
      FUN_1800f6900(0);
    }
  }
LAB_1803ae171:
  FUN_18017bf40(&local_700);
  uVar31 = local_700;
  uVar33 = local_700 - local_770._8_8_;
  puVar21 = (ulonglong *)FUN_1803af9d0();
  local_7d8 = (char ******)(*puVar21 + 1);
  *puVar21 = (ulonglong)local_7d8;
  uVar27 = puVar21[1];
  puVar21[1] = uVar27 + uVar33;
  local_7a8 = puVar21[3] + (ulonglong)(999999 < uVar33);
  puVar21[3] = local_7a8;
  local_7a0 = puVar21[4] + (ulonglong)(4999999 < uVar33);
  puVar21[4] = local_7a0;
  local_798 = puVar21[5] + (ulonglong)(15999999 < uVar33);
  puVar21[5] = local_798;
  uVar29 = puVar21[2];
  if (puVar21[2] < uVar33) {
    puVar21[2] = uVar33;
    uVar29 = uVar33;
  }
  if ((uVar31 != puVar21[7]) && ((longlong)uVar31 < (longlong)puVar21[7])) {
  }
  local_7b8 = (char ******)((double)(longlong)(uVar31 - puVar21[6]) / 1000000.0);
  dVar2 = (double)(uVar27 + uVar33);
  local_7b0 = 0.0;
  if (0.0 < (double)local_7b8) {
    local_7b0 = (dVar2 / 1000.0) / (double)local_7b8;
  }
  local_7c0 = (char ******)(dVar2 / 1000000.0);
  local_7c8 = (char ******)((double)uVar29 / 1000.0);
  local_7d0 = (char ******)((dVar2 / (double)local_7d8) / 1000.0);
  FUN_1801af8a0(dVar2 / (double)local_7d8,local_7d0,local_770._0_8_);
  puVar21[2] = 0;
  puVar21[1] = 0;
  *puVar21 = 0;
  puVar21[5] = 0;
  puVar21[4] = 0;
  puVar21[3] = 0;
LAB_1803ae9f5:
  puVar21[7] = uVar31 + 5000000000;
  puVar21[6] = uVar31;
}



