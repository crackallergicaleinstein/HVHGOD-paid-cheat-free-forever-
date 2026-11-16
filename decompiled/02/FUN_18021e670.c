// FUN_18021e670 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18021e670 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18021e670(undefined8 param_1,char param_2)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  longlong *plVar5;
  bool bVar6;
  short *psVar7;
  char cVar8;
  int iVar9;
  ULONGLONG UVar10;
  ulonglong *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *plVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  short *psVar22;
  int iVar23;
  uint uVar24;
  longlong *plVar25;
  longlong *plVar26;
  uint uVar27;
  longlong *plVar28;
  double dVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined1 auStack_7d8 [32];
  undefined **local_7b8;
  longlong *local_7b0;
  double local_7a8;
  double local_7a0;
  double local_798;
  double local_790;
  ulonglong local_788;
  ulonglong local_780;
  ulonglong local_778;
  char local_768;
  char local_767;
  longlong *local_760;
  longlong *local_758;
  undefined4 *local_750;
  longlong *local_748;
  longlong *local_740;
  undefined8 local_738;
  undefined1 local_730 [16];
  undefined8 local_720;
  undefined1 local_718 [16];
  undefined8 *local_708;
  undefined1 local_700 [16];
  longlong local_6f0;
  undefined1 local_6e8 [16];
  undefined1 local_6d8 [24];
  longlong local_6c0 [5];
  undefined1 local_698 [64];
  longlong local_658;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 local_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 local_608;
  undefined8 uStack_600;
  undefined8 local_5f8;
  undefined8 uStack_5f0;
  undefined8 local_5e8;
  undefined8 uStack_5e0;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined4 local_5d0 [352];
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStack_7d8;
  local_730 = ZEXT816(0x1807cd7f0);
  local_768 = param_2;
  FUN_18017bf40(local_730 + 8);
  UVar10 = GetTickCount64();
  if ((param_2 != '\0') || (DAT_180cca120 <= UVar10)) {
    DAT_180cca120 = UVar10 + 500;
    iVar9 = FUN_1805f68d0(&DAT_180cc9e50);
    if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    plVar25 = DAT_180cca000;
    if (DAT_180cc9e9c == 0x7fffffff) {
      DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    for (; plVar25 != DAT_180cca008; plVar25 = plVar25 + 0x25) {
      if ((char)plVar25[0x22] != '\0') {
        FUN_1805f68fc(&DAT_180cc9e50);
        uVar12 = FUN_1802196a0(DAT_180cca0e0,2);
        local_720 = uVar12;
        uVar13 = FUN_1802196a0(DAT_180cca0d8,2);
        lVar14 = 0x8900000048;
        uVar30 = 0x240000005c;
        local_658 = 0x8900000048;
        uStack_650 = 0x240000005c;
        local_648 = 0x4800000018;
        uStack_640 = 0x5400000089;
        uStack_638 = 0x1000000024;
        uStack_630 = 0x5700000056;
        local_628 = 0x5600000041;
        uStack_620 = 0x8300000048;
        uStack_618 = 0x30000000ec;
        uStack_610 = 0x8b00000048;
        local_608 = 0x48000000f2;
        uStack_600 = 0xf90000008b;
        uVar31 = 0x8d00000048;
        uVar32 = 0x2400000054;
        local_5f8 = 0x8d00000048;
        uStack_5f0 = 0x2400000054;
        local_5e8 = 0x4800000058;
        uStack_5e0 = 0xc100000083;
        local_5d8 = 8;
        local_5d4 = 0xe8;
        local_758 = &local_658;
        local_750 = local_5d0;
        local_738 = uVar13;
        cVar8 = FUN_1802197b0(uVar12,&local_758);
        if (cVar8 != '\0') {
          local_648 = 0x4800000008;
          uStack_640 = 0x7400000089;
          uStack_638 = 0x1800000024;
          uStack_630 = 0x4800000057;
          local_628 = 0xec00000083;
          uStack_620 = 0xf00000030;
          uStack_618 = 0x200000010;
          uStack_610 = 0x8b00000048;
          local_608 = 0x49000000da;
          uStack_600 = 0xf80000008b;
          local_5e8 = 0x4800000020;
          uStack_5e0 = 0xf10000008b;
          local_758 = &local_658;
          local_750 = &local_5d8;
          local_658 = lVar14;
          uStack_650 = uVar30;
          local_5f8 = uVar31;
          uStack_5f0 = uVar32;
          cVar8 = FUN_1802197b0(uVar13,&local_758);
          if (cVar8 != '\0') {
            local_718 = (undefined1  [16])0x0;
            local_708 = (undefined8 *)0x0;
            iVar9 = 0x74;
            plVar25 = local_758;
            do {
              iVar23 = 0;
              do {
                if ((iVar9 == 0x74) || (iVar9 == 0xae)) {
                  lVar15 = DAT_180cca0d8 + 0x90 + (longlong)((iVar9 + iVar23) * 0x10);
                  lVar14 = FUN_18017ea70();
                  *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
                  if (lVar15 == 0) {
                    local_750 = (undefined4 *)((ulonglong)local_750 & 0xffffffffffffff00);
                    bVar6 = false;
                  }
                  else {
                    local_748 = (longlong *)0x0;
                    cVar8 = FUN_1804514f0(&local_748,lVar15,8);
                    if (cVar8 == '\0') {
                      local_750 = (undefined4 *)((ulonglong)local_750._1_7_ << 8);
                      bVar6 = false;
                    }
                    else {
                      local_758 = local_748;
                      local_750 = (undefined4 *)CONCAT71(local_750._1_7_,1);
                      bVar6 = true;
                      plVar25 = local_748;
                    }
                  }
                }
                else {
                  lVar14 = FUN_18017ea70();
                  *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
                  local_750 = (undefined4 *)((ulonglong)local_750 & 0xffffffffffffff00);
                  bVar6 = false;
                }
                lVar14 = FUN_18017ea70();
                if (*(int *)(lVar14 + 4) != 0) {
                  *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
                }
                if (!bVar6) goto LAB_18021ef9f;
                if ((undefined8 *)local_718._8_8_ == local_708) {
                  FUN_1801b6250(local_718,local_718._8_8_,&local_758);
                }
                else {
                  *(longlong **)local_718._8_8_ = plVar25;
                  local_718._8_8_ = (undefined8 *)(local_718._8_8_ + 8);
                }
                lVar14 = DAT_180cca0d8;
                iVar23 = iVar23 + 1;
              } while (iVar23 < 0x3a);
              iVar9 = iVar9 + 0x3a;
            } while (iVar9 < 0xaf);
            local_6e8 = (undefined1  [16])0x0;
            lVar15 = FUN_18017ea70();
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
            cVar8 = FUN_1804514f0(local_6e8,lVar14 + 0x10,0x10);
            lVar14 = FUN_18017ea70();
            if (*(int *)(lVar14 + 4) != 0) {
              *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
            }
            if (cVar8 == '\0') {
LAB_18021ef9f:
              FUN_1800f0160(local_718);
              goto LAB_18021e754;
            }
            local_700 = (undefined1  [16])0x0;
            local_6f0 = 0;
            FUN_180218c10(&DAT_180cc8068,local_6d8,2);
            FUN_180218c10(&DAT_180cc8068,local_698,3);
            UVar10 = GetTickCount64();
            local_758 = (longlong *)&DAT_180cc9e50;
            iVar9 = FUN_1805f68d0(&DAT_180cc9e50);
            plVar25 = DAT_180cca008;
            if (iVar9 != 0) goto LAB_18021f3ab;
            lVar14 = DAT_180cc9fc8;
            plVar26 = DAT_180cca000;
            if (DAT_180cc9e9c == 0x7fffffff) {
LAB_18021f3eb:
              DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            do {
              DAT_180cc9fc8 = lVar14;
              if (plVar26 == plVar25) {
                FUN_1805f68fc(&DAT_180cc9e50);
                local_758 = (longlong *)local_700._8_8_;
                if (local_700._0_8_ != local_700._8_8_) {
                  plVar25 = (longlong *)local_700._0_8_;
                  plVar26 = (longlong *)local_700._8_8_;
                  do {
                    lVar14 = DAT_180cca0e0;
                    if (*(char *)((longlong)plVar25 + 0x111) == '\0') {
                      lVar15 = FUN_18017ea70();
                      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
                      if (lVar14 + 8 == 0) {
                        bVar6 = false;
                        uVar24 = (uint)local_748;
                      }
                      else {
                        local_760 = (longlong *)((ulonglong)local_760 & 0xffffffff00000000);
                        cVar8 = FUN_1804514f0(&local_760,lVar14 + 8,4);
                        if (cVar8 == '\0') {
                          bVar6 = false;
                          uVar24 = (uint)local_748;
                        }
                        else {
                          local_748 = (longlong *)CONCAT44(local_748._4_4_,(uint)local_760);
                          bVar6 = true;
                          uVar24 = (uint)local_760;
                        }
                      }
                      lVar14 = FUN_18017ea70();
                      if (*(int *)(lVar14 + 4) != 0) {
                        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
                      }
                      lVar14 = DAT_180cca0e0;
                      uVar27 = 0xffffffff;
                      if (bVar6) {
                        uVar27 = uVar24;
                      }
                      lVar15 = FUN_18017ea70();
                      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
                      if (lVar14 + 0x10 == 0) {
                        bVar6 = false;
                      }
                      else {
                        local_760 = (longlong *)0x0;
                        cVar8 = FUN_1804514f0(&local_760,lVar14 + 0x10,8);
                        if (cVar8 == '\0') {
                          bVar6 = false;
                        }
                        else {
                          local_740 = local_760;
                          bVar6 = true;
                        }
                      }
                      plVar16 = local_740;
                      lVar14 = FUN_18017ea70();
                      if (*(int *)(lVar14 + 4) != 0) {
                        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
                      }
                      plVar28 = (longlong *)0x0;
                      if (bVar6) {
                        plVar28 = plVar16;
                      }
                      if ((uVar27 < 0x2711) &&
                         (((uVar27 == 0 || (plVar28 != (longlong *)0x0)) &&
                          (iVar9 = 0, 0 < (int)uVar27)))) {
                        iVar23 = 0;
                        do {
                          lVar14 = FUN_18017ea70();
                          *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
                          bVar6 = false;
                          if ((undefined *)((longlong)iVar23 + (longlong)plVar28) !=
                              (undefined *)0x0) {
                            local_760 = (longlong *)0x0;
                            cVar8 = FUN_1804514f0(&local_760,
                                                  (undefined *)
                                                  ((longlong)iVar23 + (longlong)plVar28),8);
                            if (cVar8 == '\0') {
                              bVar6 = false;
                            }
                            else {
                              bVar6 = true;
                              plVar26 = local_760;
                            }
                          }
                          lVar14 = FUN_18017ea70();
                          uVar12 = local_720;
                          if (*(int *)(lVar14 + 4) != 0) {
                            *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
                          }
                          lVar14 = DAT_180cca0e0;
                          plVar16 = (longlong *)0x0;
                          if (bVar6) {
                            plVar16 = plVar26;
                          }
                          plVar5 = (longlong *)plVar25[1];
                          if (plVar16 == plVar5) {
                            cVar8 = FUN_1804513c0(local_720,1,2);
                            if (cVar8 == '\0') {
                              local_767 = '\0';
                            }
                            else {
                              lVar15 = FUN_18017ea70();
                              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
                              FUN_1801ae0e0(&local_768,uVar12,lVar14,plVar5);
                              lVar14 = FUN_18017ea70();
                              if (*(int *)(lVar14 + 4) != 0) {
                                *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
                              }
                            }
                            cVar8 = local_768;
                            if (local_767 == '\0') {
                              cVar8 = '\0';
                            }
                            if (cVar8 != '\0') goto LAB_18021f030;
                            break;
                          }
                          iVar9 = iVar9 + 1;
                          iVar23 = iVar23 + 8;
                        } while (iVar9 < (int)uVar27);
                      }
                    }
                    else {
LAB_18021f030:
                      iVar9 = FUN_1805f68d0(&DAT_180cc9e50);
                      if (iVar9 != 0) {
LAB_18021f3ab:
                    /* WARNING: Subroutine does not return */
                        FUN_1805f6d44(5);
                      }
                      if (DAT_180cc9e9c == 0x7fffffff) goto LAB_18021f3eb;
                      if (DAT_180cca000 != DAT_180cca008) {
                        plVar16 = DAT_180cca000;
                        do {
                          if (*plVar16 == *plVar25) break;
                          plVar16 = plVar16 + 0x25;
                        } while (plVar16 != DAT_180cca008);
                        if (plVar16 != DAT_180cca008) {
                          *(undefined1 *)((longlong)plVar16 + 0x111) = 1;
                        }
                      }
                      FUN_1805f68fc(&DAT_180cc9e50);
                      lVar15 = DAT_180cca0d8;
                      lVar14 = plVar25[1];
                      cVar8 = FUN_1804513c0(local_738,1,2);
                      if (cVar8 != '\0') {
                        lVar17 = FUN_18017ea70();
                        *(int *)(lVar17 + 4) = *(int *)(lVar17 + 4) + 1;
                        cVar8 = FUN_18022ff30(local_738,lVar15,local_6e8,lVar14);
                        lVar14 = FUN_18017ea70();
                        iVar9 = *(int *)(lVar14 + 4);
                        if (iVar9 != 0) {
                          iVar9 = iVar9 + -1;
                          *(int *)(lVar14 + 4) = iVar9;
                        }
                        if ((cVar8 != '\0') && (lVar14 = FUN_18021b630(iVar9,*plVar25), lVar14 == 0)
                           ) {
                          iVar9 = FUN_1805f68d0(&DAT_180cc9e50);
                          if (iVar9 != 0) goto LAB_18021f3ab;
                          if (DAT_180cc9e9c == 0x7fffffff) {
                            DAT_180cc9e9c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                            FUN_1805f6d44(6);
                          }
                          if (DAT_180cca000 != DAT_180cca008) {
                            plVar16 = DAT_180cca000;
                            do {
                              if (*plVar16 == *plVar25) break;
                              plVar16 = plVar16 + 0x25;
                            } while (plVar16 != DAT_180cca008);
                            if (plVar16 != DAT_180cca008) {
                              *(undefined1 *)(plVar16 + 0x22) = 0;
                            }
                          }
                          FUN_1805f68fc(&DAT_180cc9e50);
                          FUN_18063ab10(&local_658,0,0x600);
                          local_7b0 = (longlong *)CONCAT44(local_7b0._4_4_,(int)(short)plVar25[2]);
                          local_7b8 = (undefined **)*plVar25;
                          FUN_18015ad60(&local_658,0x600,0xffffffffffffffff,
                                        "id=%llu definition=%d scope=changer_only storage=retained")
                          ;
                          local_7b8 = &PTR_180700558;
                          if ((char)local_658 != '\0') {
                            local_7b8 = (undefined **)&DAT_1806bcfc0;
                          }
                          local_7b0 = &local_658;
                          FUN_1800f6900(1);
                        }
                      }
                    }
                    plVar25 = plVar25 + 0x25;
                  } while (plVar25 != local_758);
                }
                _eh_vector_destructor_iterator_(local_6d8,0x40,2,thunk_FUN_1800cf8e0);
                FUN_1801b31c0(local_700);
                goto LAB_18021ef9f;
              }
              lVar15 = 0;
              if ((char)plVar26[0x22] != '\0') {
                uVar3 = *(ushort *)(plVar26 + 2);
                uVar18 = ((ulonglong)(uVar3 >> 8) ^
                         ((ulonglong)uVar3 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) *
                         0x100000001b3 & DAT_180cc9cb8;
                lVar17 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar18 * 0x10);
                if (lVar17 == DAT_180cc9c90) {
LAB_18021ebb5:
                  lVar17 = lVar15;
                }
                else {
                  uVar4 = *(ushort *)(lVar17 + 0x10);
                  while (uVar3 != uVar4) {
                    if (lVar17 == *(longlong *)(DAT_180cc9ca0 + uVar18 * 0x10)) goto LAB_18021ebb5;
                    lVar17 = *(longlong *)(lVar17 + 8);
                    uVar4 = *(ushort *)(lVar17 + 0x10);
                  }
                }
                lVar19 = DAT_180cc9c90;
                if (lVar17 != 0) {
                  lVar19 = lVar17;
                }
                if (lVar19 != DAT_180cc9c90) {
                  lVar15 = *(longlong *)(lVar19 + 0x18) * 0xb8 + DAT_180cc9bf8;
                }
                if (local_768 == '\0') {
                  if ((lVar15 != 0) && (*(char *)(lVar15 + 0xb0) == '\0')) {
                    bVar1 = *(byte *)(plVar26 + 2);
                    bVar2 = *(byte *)((longlong)plVar26 + 0x11);
                    plVar16 = local_6c0;
                    do {
                      uVar18 = plVar16[3] &
                               (((ulonglong)bVar1 ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                               (ulonglong)bVar2) * 0x100000001b3;
                      lVar15 = *(longlong *)(*plVar16 + 8 + uVar18 * 0x10);
                      if (lVar15 == plVar16[-2]) {
LAB_18021ec56:
                        lVar15 = 0;
                      }
                      else {
                        uVar4 = *(ushort *)(lVar15 + 0x10);
                        while (uVar3 != uVar4) {
                          if (lVar15 == *(longlong *)(*plVar16 + uVar18 * 0x10)) goto LAB_18021ec56;
                          lVar15 = *(longlong *)(lVar15 + 8);
                          uVar4 = *(ushort *)(lVar15 + 0x10);
                        }
                      }
                      if (((lVar15 != 0) && (lVar15 != plVar16[-2])) &&
                         (cVar8 = FUN_1801d8910(lVar15 + 0x18,plVar26 + 3), cVar8 != '\0'))
                      goto LAB_18021ed91;
                      plVar28 = plVar16 + 5;
                      plVar16 = plVar16 + 8;
                    } while (plVar28 != &local_658);
                  }
                  if ((lVar14 == 0) || (*plVar26 != lVar14)) goto LAB_18021ec9b;
                }
                else {
LAB_18021ec9b:
                  if ((DAT_180cc9fd0 <= UVar10) ||
                     ((*plVar26 != lVar14 &&
                      ((uVar3 != DAT_180cc9eb8 ||
                       (cVar8 = FUN_1801d8910(plVar26 + 3,&DAT_180cc9ec0), cVar8 == '\0')))))) {
                    lVar14 = thunk_FUN_1805f8160(local_718._0_8_,
                                                 local_718._0_8_ +
                                                 ((longlong)(local_718._8_8_ - local_718._0_8_) >> 3
                                                 ) * 8,*plVar26);
                    psVar7 = DAT_180cc9ea8;
                    if (lVar14 == local_718._8_8_) {
                      if (DAT_180cc9ea0 != DAT_180cc9ea8) {
                        lVar14 = *plVar26;
                        psVar22 = DAT_180cc9ea0;
                        do {
                          if ((*(longlong *)(psVar22 + 0x80) == lVar14) ||
                             ((((char)psVar22[0x84] == '\0' && (*psVar22 == (short)plVar26[2])) &&
                              (cVar8 = FUN_1801d8910(psVar22 + 4,plVar26 + 3), cVar8 != '\0'))))
                          goto LAB_18021ed91;
                          psVar22 = psVar22 + 0x88;
                        } while (psVar22 != psVar7);
                      }
                      if ((local_768 != '\0') || (plVar26[0x23] + 1000U <= UVar10)) {
                        if (local_700._8_8_ == local_6f0) {
                          FUN_180231710(local_700,local_700._8_8_,plVar26);
                        }
                        else {
                          FUN_180232880(local_700._8_8_,plVar26);
                          local_700._8_8_ = local_700._8_8_ + 0x128;
                        }
                      }
                      goto LAB_18021edaf;
                    }
                  }
                }
LAB_18021ed91:
                plVar26[0x23] = UVar10;
              }
LAB_18021edaf:
              lVar14 = DAT_180cc9fc8;
              plVar26 = plVar26 + 0x25;
            } while( true );
          }
        }
        cVar8 = DAT_180c63ff8;
        LOCK();
        DAT_180c63ff8 = '\x01';
        UNLOCK();
        if (cVar8 == '\0') {
          FUN_18063ab10(&local_658,0,0x600);
          FUN_18015ad60(&local_658,0x600,0xffffffffffffffff,"action=retain_items");
          local_7b8 = &PTR_180700558;
          if ((char)local_658 != '\0') {
            local_7b8 = (undefined **)&DAT_1806bcfc0;
          }
          local_7b0 = &local_658;
          FUN_1800f6900(2);
        }
        goto LAB_18021e754;
      }
    }
    FUN_1805f68fc(&DAT_180cc9e50);
  }
LAB_18021e754:
  FUN_18017bf40(&local_758);
  plVar25 = local_758;
  uVar21 = (longlong)local_758 - local_730._8_8_;
  puVar11 = (ulonglong *)FUN_1802308a0();
  local_7b8 = (undefined **)(*puVar11 + 1);
  *puVar11 = (ulonglong)local_7b8;
  uVar20 = puVar11[1] + uVar21;
  puVar11[1] = uVar20;
  local_788 = puVar11[3] + (ulonglong)(999999 < uVar21);
  puVar11[3] = local_788;
  local_780 = puVar11[4] + (ulonglong)(4999999 < uVar21);
  puVar11[4] = local_780;
  local_778 = puVar11[5] + (ulonglong)(15999999 < uVar21);
  puVar11[5] = local_778;
  uVar18 = puVar11[2];
  if (puVar11[2] < uVar21) {
    puVar11[2] = uVar21;
    uVar18 = uVar21;
  }
  if ((plVar25 == (longlong *)puVar11[7]) || ((longlong)puVar11[7] <= (longlong)plVar25)) {
    local_798 = (double)(longlong)((longlong)plVar25 - puVar11[6]) / 1000000.0;
    local_790 = 0.0;
    if (0.0 < local_798) {
      local_790 = ((double)uVar20 / 1000.0) / local_798;
    }
    local_7a0 = (double)uVar20 / 1000000.0;
    local_7a8 = (double)uVar18 / 1000.0;
    dVar29 = (double)uVar20 / (double)local_7b8;
    local_7b0 = (longlong *)(dVar29 / 1000.0);
    FUN_1801af8a0(dVar29,local_7b0,local_730._0_8_);
    puVar11[2] = 0;
    puVar11[1] = 0;
    *puVar11 = 0;
    puVar11[5] = 0;
    puVar11[4] = 0;
    puVar11[3] = 0;
    puVar11[6] = (ulonglong)plVar25;
    puVar11[7] = (ulonglong)(plVar25 + 625000000);
  }
}



