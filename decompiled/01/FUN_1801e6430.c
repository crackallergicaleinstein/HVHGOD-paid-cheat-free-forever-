// FUN_1801e6430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801e6430 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801e6430(longlong param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  uint uVar17;
  undefined1 auVar18 [4];
  ulonglong uVar19;
  undefined2 uVar20;
  ulonglong uVar21;
  undefined1 auStack_768 [32];
  undefined **local_748;
  char *local_740;
  uint local_738;
  ulonglong local_728;
  uint local_720;
  int local_71c;
  uint local_718;
  ulonglong local_710;
  undefined4 local_708;
  undefined4 local_704;
  undefined4 local_700;
  undefined4 local_6fc;
  undefined2 local_6f8;
  ulonglong local_6f0;
  undefined8 local_6e8;
  undefined8 uStack_6e0;
  ulonglong local_6d8;
  char local_6d0;
  char cStack_6cf;
  char cStack_6ce;
  undefined4 uStack_6cd;
  undefined1 uStack_6c9;
  undefined1 uStack_6c8;
  undefined1 uStack_6c7;
  undefined1 uStack_6c6;
  undefined1 uStack_6c5;
  undefined1 uStack_6c4;
  undefined1 uStack_6c3;
  undefined1 uStack_6c2;
  undefined1 uStack_6c1;
  undefined2 local_6c0;
  undefined2 uStack_6be;
  undefined2 local_6bc;
  longlong local_6b8;
  undefined1 local_6b0 [16];
  undefined2 local_6a0;
  longlong local_698;
  ulonglong local_690;
  ulonglong local_688;
  ulonglong local_680;
  undefined4 local_678;
  undefined4 local_674;
  undefined2 local_670;
  undefined1 local_66e;
  undefined1 local_668 [16];
  undefined1 local_658 [4];
  undefined2 local_654;
  char local_650;
  char cStack_64f;
  char cStack_64e;
  undefined1 uStack_64d;
  undefined1 uStack_64c;
  undefined1 uStack_64b;
  undefined1 uStack_64a;
  undefined1 uStack_649;
  undefined1 uStack_648;
  undefined1 uStack_647;
  undefined1 uStack_646;
  undefined1 uStack_645;
  undefined1 uStack_644;
  undefined1 uStack_643;
  undefined1 uStack_642;
  undefined1 uStack_641;
  undefined4 local_640;
  undefined2 local_63c;
  char local_63a;
  char local_638 [1536];
  ulonglong local_38;
  
  iVar4 = DAT_180c631ec;
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_768;
  local_6b8 = param_1;
  if ((DAT_180c631ec == 0) && (UVar9 = GetTickCount64(), DAT_180c631f0 <= UVar9)) {
    local_6e8 = &DAT_1808e7080;
    iVar4 = FUN_1805f68d0(&DAT_1808e7080);
    if (iVar4 != 0) goto LAB_1801e6f7d;
    if (DAT_1808e70cc == 0x7fffffff) {
      DAT_1808e70cc = 0x7ffffffe;
      goto LAB_1801e6f72;
    }
    if ((DAT_180c631ec == 0) && (DAT_180c631f0 <= UVar9)) {
      DAT_180c631ec = FUN_1804174b0("C_BasePlayerPawn",0x51b23a93);
      if (DAT_180c631ec == 0) {
        DAT_180c631f0 = UVar9 + 1000;
      }
      else {
        DAT_180c631f0 = 0xffffffffffffffff;
      }
    }
    iVar4 = DAT_180c631ec;
    FUN_1805f68fc(&DAT_1808e7080);
  }
  iVar5 = DAT_180c631e8;
  if ((DAT_180c631e8 == 0) && (UVar9 = GetTickCount64(), DAT_180c631e0 <= UVar9)) {
    local_6e8 = &DAT_1808e7030;
    iVar5 = FUN_1805f68d0(&DAT_1808e7030);
    if (iVar5 != 0) goto LAB_1801e6f7d;
    if (DAT_1808e707c == 0x7fffffff) {
      DAT_1808e707c = 0x7ffffffe;
      goto LAB_1801e6f72;
    }
    if ((DAT_180c631e8 == 0) && (DAT_180c631e0 <= UVar9)) {
      DAT_180c631e8 = FUN_1804174b0("CPlayer_WeaponServices",0x4c8a13a6);
      if (DAT_180c631e8 == 0) {
        DAT_180c631e0 = UVar9 + 1000;
      }
      else {
        DAT_180c631e0 = 0xffffffffffffffff;
      }
    }
    iVar5 = DAT_180c631e8;
    FUN_1805f68fc(&DAT_1808e7030);
  }
  iVar8 = DAT_180c631d4;
  local_71c = DAT_180c631d4;
  if (DAT_180c631d4 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c631d8) {
      local_71c = iVar8;
    }
    else {
      local_6e8 = &DAT_1808e6fe0;
      iVar8 = FUN_1805f68d0(&DAT_1808e6fe0);
      if (iVar8 != 0) goto LAB_1801e6f7d;
      if (DAT_1808e702c == 0x7fffffff) {
        DAT_1808e702c = 0x7ffffffe;
        goto LAB_1801e6f72;
      }
      local_71c = DAT_180c631d4;
      if ((DAT_180c631d4 == 0) && (DAT_180c631d8 <= UVar9)) {
        local_71c = FUN_1804174b0("C_BaseEntity",0x6d279c31);
        if (local_71c == 0) {
          DAT_180c631d8 = UVar9 + 1000;
        }
        else {
          DAT_180c631d8 = 0xffffffffffffffff;
        }
      }
      iVar8 = local_71c;
      DAT_180c631d4 = local_71c;
      FUN_1805f68fc(&DAT_1808e6fe0);
    }
  }
  iVar6 = DAT_180c631d0;
  if ((DAT_180c631d0 == 0) && (UVar9 = GetTickCount64(), DAT_180c631c8 <= UVar9)) {
    local_6e8 = &DAT_1808e6f90;
    iVar6 = FUN_1805f68d0(&DAT_1808e6f90);
    if (iVar6 != 0) goto LAB_1801e6f7d;
    if (DAT_1808e6fdc == 0x7fffffff) {
      DAT_1808e6fdc = 0x7ffffffe;
      goto LAB_1801e6f72;
    }
    if ((DAT_180c631d0 == 0) && (DAT_180c631c8 <= UVar9)) {
      DAT_180c631d0 = FUN_1804174b0("C_BaseEntity",0x9d930423);
      if (DAT_180c631d0 == 0) {
        DAT_180c631c8 = UVar9 + 1000;
      }
      else {
        DAT_180c631c8 = 0xffffffffffffffff;
      }
    }
    iVar6 = DAT_180c631d0;
    FUN_1805f68fc(&DAT_1808e6f90);
  }
  iVar7 = DAT_180c631b8;
  local_728 = CONCAT44(local_728._4_4_,DAT_180c631b8);
  if (DAT_180c631b8 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c631c0) {
      local_728 = local_728 & 0xffffffff00000000;
    }
    else {
      local_6e8 = &DAT_1808e6f40;
      iVar7 = FUN_1805f68d0(&DAT_1808e6f40);
      if (iVar7 != 0) {
LAB_1801e6f7d:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808e6f8c == 0x7fffffff) {
        DAT_1808e6f8c = 0x7ffffffe;
LAB_1801e6f72:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      local_728 = CONCAT44(local_728._4_4_,DAT_180c631b8);
      if ((DAT_180c631b8 == 0) && (DAT_180c631c0 <= UVar9)) {
        DAT_180c631b8 = FUN_1804174b0("CGameSceneNode",0xb89c7c3f);
        local_728 = CONCAT44(local_728._4_4_,DAT_180c631b8);
        if (DAT_180c631b8 == 0) {
          DAT_180c631c0 = UVar9 + 1000;
        }
        else {
          DAT_180c631c0 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c631b8;
      FUN_1805f68fc(&DAT_1808e6f40);
    }
  }
  if (((((param_1 != 0) && (iVar4 != 0)) && (iVar5 != 0)) && ((iVar8 != 0 && (iVar6 != 0)))) &&
     (iVar7 != 0)) {
    lVar10 = FUN_1801e6f90();
    if (lVar10 == 0) {
      local_63a = false;
      local_6d0 = local_650;
      cStack_6cf = cStack_64f;
      cStack_6ce = cStack_64e;
      uStack_6c9 = uStack_649;
      uStack_6c8 = uStack_648;
      uStack_6c7 = uStack_647;
      uStack_6c6 = uStack_646;
      uStack_6c5 = uStack_645;
      uStack_6c4 = uStack_644;
      uStack_6c3 = uStack_643;
      uStack_6c2 = uStack_642;
      uStack_6c1 = uStack_641;
    }
    else {
      lVar11 = FUN_18017ea70();
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
      local_668 = (undefined1  [16])0x0;
      local_658 = (undefined1  [4])0x0;
      local_654 = 0;
      cVar3 = FUN_1804514f0(local_668,lVar10,0x16);
      local_63a = cVar3 != '\0';
      if ((bool)local_63a) {
        uVar20 = local_654;
        auVar18 = local_658;
        local_6e8 = (undefined *)local_668._0_8_;
        uStack_6e0 = local_668._8_8_;
      }
      else {
        uVar20 = local_63c;
        auVar18 = (undefined1  [4])local_640;
        local_6e8 = (undefined *)
                    CONCAT17(uStack_649,
                             CONCAT16(uStack_64a,
                                      CONCAT15(uStack_64b,
                                               CONCAT14(uStack_64c,
                                                        CONCAT13(uStack_64d,
                                                                 CONCAT12(cStack_64e,
                                                                          CONCAT11(cStack_64f,
                                                                                   local_650)))))));
        uStack_6e0 = CONCAT17(uStack_641,
                              CONCAT16(uStack_642,
                                       CONCAT15(uStack_643,
                                                CONCAT14(uStack_644,
                                                         CONCAT13(uStack_645,
                                                                  CONCAT12(uStack_646,
                                                                           CONCAT11(uStack_647,
                                                                                    uStack_648))))))
                             );
      }
      lVar11 = FUN_18017ea70();
      if (*(int *)(lVar11 + 4) != 0) {
        *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
      }
      local_63c = uVar20;
      local_640 = auVar18;
      local_6d0 = (char)local_6e8;
      cStack_6cf = local_6e8._1_1_;
      cStack_6ce = local_6e8._2_1_;
      uStack_64d = local_6e8._3_1_;
      uStack_64c = local_6e8._4_1_;
      uStack_64b = local_6e8._5_1_;
      uStack_64a = local_6e8._6_1_;
      uStack_6c9 = local_6e8._7_1_;
      uStack_6c8 = (undefined1)uStack_6e0;
      uStack_6c7 = uStack_6e0._1_1_;
      uStack_6c6 = uStack_6e0._2_1_;
      uStack_6c5 = uStack_6e0._3_1_;
      uStack_6c4 = uStack_6e0._4_1_;
      uStack_6c3 = uStack_6e0._5_1_;
      uStack_6c2 = uStack_6e0._6_1_;
      uStack_6c1 = uStack_6e0._7_1_;
    }
    local_6c0 = (undefined2)local_640;
    uStack_6be = (undefined2)((uint)local_640 >> 0x10);
    uStack_6cd = CONCAT13(uStack_64a,CONCAT12(uStack_64b,CONCAT11(uStack_64c,uStack_64d)));
    local_678 = 0x245c8b48;
    local_674 = 0xc4834838;
    local_670 = 0x5f20;
    local_66e = 0xe9;
    if ((((bool)local_63a != false) && (local_6d0 == 'H')) &&
       ((cStack_6cf == -0x73 && (cStack_6ce == -0x71)))) {
      local_6bc = local_63c;
      local_650 = local_6d0;
      cStack_64f = cStack_6cf;
      cStack_64e = cStack_6ce;
      uStack_649 = uStack_6c9;
      uStack_648 = uStack_6c8;
      uStack_647 = uStack_6c7;
      uStack_646 = uStack_6c6;
      uStack_645 = uStack_6c5;
      uStack_644 = uStack_6c4;
      uStack_643 = uStack_6c3;
      uStack_642 = uStack_6c2;
      uStack_641 = uStack_6c1;
      iVar8 = memcmp(&local_678,&uStack_649,0xb);
      if ((iVar8 == 0) && (uStack_6cd - 0x1000U < 0x3001)) {
        uVar19 = (longlong)CONCAT22(local_6bc,uStack_6be) + 0x16 + lVar10;
        local_708 = 0x48535540;
        local_704 = 0xb1246c8d;
        local_700 = 0x88ec8148;
        local_6fc = 0x48000000;
        local_6f8 = 0xd98b;
        local_6e8 = (undefined *)uVar19;
        lVar10 = FUN_18017ea70();
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
        if (uVar19 == 0) {
          local_658[2] = 0;
          bVar1 = false;
        }
        else {
          local_6b0 = (undefined1  [16])0x0;
          local_6a0 = 0;
          cVar3 = FUN_1804514f0(local_6b0,uVar19,0x12);
          if (cVar3 == '\0') {
            local_658[2] = 0;
            bVar1 = false;
          }
          else {
            local_668 = local_6b0;
            local_658[2] = 1;
            local_658._0_2_ = local_6a0;
            bVar1 = true;
          }
        }
        lVar10 = FUN_18017ea70();
        if (*(int *)(lVar10 + 4) != 0) {
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
        }
        if (bVar1) {
          iVar8 = memcmp(local_668,&local_708,0x12);
          lVar10 = local_6b8;
          if (iVar8 == 0) {
            lVar11 = FUN_18017ea70();
            *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
            lVar11 = iVar4 + lVar10;
            if (lVar11 == 0) {
              bVar1 = false;
              uVar19 = local_710;
            }
            else {
              local_6f0 = 0;
              cVar3 = FUN_1804514f0(&local_6f0,lVar11,8);
              if (cVar3 == '\0') {
                bVar1 = false;
                uVar19 = local_710;
              }
              else {
                bVar1 = true;
                uVar19 = local_6f0;
              }
            }
            lVar11 = FUN_18017ea70();
            if (*(int *)(lVar11 + 4) != 0) {
              *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
            }
            uVar21 = 0;
            if (bVar1) {
              uVar21 = uVar19;
            }
            local_698 = (longlong)iVar6;
            lVar10 = local_698 + lVar10;
            lVar11 = FUN_18017ea70();
            *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
            if (lVar10 == 0) {
              bVar1 = false;
              uVar19 = local_710;
            }
            else {
              local_6f0 = 0;
              cVar3 = FUN_1804514f0(&local_6f0,lVar10,8);
              if (cVar3 == '\0') {
                bVar1 = false;
                uVar19 = local_710;
              }
              else {
                bVar1 = true;
                uVar19 = local_6f0;
              }
            }
            lVar10 = FUN_18017ea70();
            if (*(int *)(lVar10 + 4) != 0) {
              *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
            }
            local_690 = 0;
            if (bVar1) {
              local_690 = uVar19;
            }
            if ((uVar21 != 0) && (local_690 != 0)) {
              lVar10 = FUN_18017ea70();
              *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
              lVar10 = (longlong)iVar5 + uVar21;
              if (lVar10 == 0) {
                bVar1 = false;
                uVar16 = local_718;
              }
              else {
                local_720 = 0;
                cVar3 = FUN_1804514f0(&local_720,lVar10,4);
                if (cVar3 == '\0') {
                  bVar1 = false;
                  uVar16 = local_718;
                }
                else {
                  bVar1 = true;
                  uVar16 = local_720;
                }
              }
              lVar11 = FUN_18017ea70();
              if (*(int *)(lVar11 + 4) != 0) {
                *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
              }
              uVar17 = 0xffffffff;
              if (bVar1) {
                uVar17 = uVar16;
              }
              local_6f0 = CONCAT44(local_6f0._4_4_,uVar17);
              lVar11 = FUN_18017ea70();
              *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
              if (lVar10 + 8 == 0) {
                bVar1 = false;
                uVar19 = local_710;
              }
              else {
                local_6d8 = 0;
                cVar3 = FUN_1804514f0(&local_6d8,lVar10 + 8,8);
                if (cVar3 == '\0') {
                  bVar1 = false;
                  uVar19 = local_710;
                }
                else {
                  bVar1 = true;
                  uVar19 = local_6d8;
                }
              }
              lVar10 = FUN_18017ea70();
              if (*(int *)(lVar10 + 4) != 0) {
                *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
              }
              uVar21 = 0;
              if (bVar1) {
                uVar21 = uVar19;
              }
              if ((uVar17 < 0x41) && ((uVar17 == 0 || (uVar21 != 0)))) {
                bVar1 = true;
                uVar16 = 0;
                local_720 = 0;
                if (0 < (int)uVar17) {
                  local_710 = (ulonglong)uVar17;
                  lVar10 = (longlong)(int)(uint)local_728;
                  uVar19 = (ulonglong)local_6e8;
                  do {
                    lVar11 = FUN_18017ea70();
                    *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
                    if (uVar21 == 0) {
                      bVar2 = false;
                    }
                    else {
                      local_728 = local_728 & 0xffffffff00000000;
                      cVar3 = FUN_1804514f0(&local_728,uVar21,4);
                      if (cVar3 == '\0') {
                        bVar2 = false;
                      }
                      else {
                        local_718 = (uint)local_728;
                        bVar2 = true;
                      }
                    }
                    uVar17 = local_718;
                    lVar11 = FUN_18017ea70();
                    iVar4 = *(int *)(lVar11 + 4);
                    if (iVar4 != 0) {
                      iVar4 = iVar4 + -1;
                      *(int *)(lVar11 + 4) = iVar4;
                    }
                    uVar13 = 0xffffffff;
                    if (bVar2) {
                      uVar13 = uVar17;
                    }
                    uVar12 = FUN_1803d4150(iVar4,uVar13);
                    if (uVar12 != 0) {
                      lVar15 = (longlong)local_71c;
                      lVar11 = FUN_18017ea70();
                      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
                      bVar2 = false;
                      if (lVar15 + uVar12 != 0) {
                        local_728 = local_728 & 0xffffffff00000000;
                        cVar3 = FUN_1804514f0(&local_728,lVar15 + uVar12,4);
                        if (cVar3 == '\0') {
                          bVar2 = false;
                        }
                        else {
                          local_6d8 = CONCAT44(local_6d8._4_4_,(uint)local_728);
                          bVar2 = true;
                        }
                      }
                      lVar11 = FUN_18017ea70();
                      iVar4 = *(int *)(lVar11 + 4);
                      if (iVar4 != 0) {
                        iVar4 = iVar4 + -1;
                        *(int *)(lVar11 + 4) = iVar4;
                      }
                      uVar14 = 0xffffffff;
                      if (bVar2) {
                        uVar14 = local_6d8 & 0xffffffff;
                      }
                      lVar15 = FUN_1803d4150(iVar4,uVar14);
                      lVar11 = local_698;
                      if (lVar15 == local_6b8) {
                        lVar15 = FUN_18017ea70();
                        *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
                        bVar2 = false;
                        if (lVar11 + uVar12 != 0) {
                          local_728 = 0;
                          cVar3 = FUN_1804514f0(&local_728,lVar11 + uVar12,8);
                          if (cVar3 == '\0') {
                            bVar2 = false;
                          }
                          else {
                            bVar2 = true;
                            uVar19 = local_728;
                          }
                        }
                        lVar11 = FUN_18017ea70();
                        if (*(int *)(lVar11 + 4) != 0) {
                          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
                        }
                        if ((bVar2) && (uVar19 != 0)) {
                          lVar11 = FUN_18017ea70();
                          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
                          bVar2 = false;
                          if (lVar10 + uVar19 != 0) {
                            local_728 = 0;
                            cVar3 = FUN_1804514f0(&local_728,lVar10 + uVar19,8);
                            if (cVar3 == '\0') {
                              bVar2 = false;
                            }
                            else {
                              local_688 = local_728;
                              bVar2 = true;
                            }
                          }
                          lVar11 = FUN_18017ea70();
                          if (*(int *)(lVar11 + 4) != 0) {
                            *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
                          }
                          if ((bVar2) && (local_688 == local_690)) {
                            lVar15 = (longlong)uStack_6cd;
                            lVar11 = FUN_18017ea70();
                            *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
                            lVar15 = lVar15 + uVar12;
                            if (lVar15 == 0) {
                              bVar2 = false;
                            }
                            else {
                              local_728 = 0;
                              cVar3 = FUN_1804514f0(&local_728,lVar15,8);
                              if (cVar3 == '\0') {
                                bVar2 = false;
                              }
                              else {
                                local_680 = local_728;
                                bVar2 = true;
                              }
                            }
                            lVar11 = FUN_18017ea70();
                            if (*(int *)(lVar11 + 4) != 0) {
                              *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
                            }
                            if ((!bVar2) || (local_680 != uVar12)) {
                              bVar1 = false;
                              uVar16 = local_720;
                            }
                            else {
                              local_728 = CONCAT44(local_728._4_4_,0xffffffff);
                              cVar3 = FUN_1804513c0(lVar15 + 0xc,4,1);
                              if (cVar3 == '\0') {
LAB_1801e6e83:
                                iVar4 = 0;
                              }
                              else {
                                lVar11 = FUN_18017ea70();
                                *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
                                cVar3 = FUN_1801ad800(lVar15 + 0xc,&local_728);
                                lVar11 = FUN_18017ea70();
                                if (*(int *)(lVar11 + 4) != 0) {
                                  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
                                }
                                if ((cVar3 == '\0') ||
                                   (cVar3 = FUN_1801a5f80(local_6e8,lVar15), cVar3 == '\0'))
                                goto LAB_1801e6e83;
                                iVar4 = 1;
                                if (bVar1) {
                                  bVar1 = true;
                                  local_720 = local_720 + 1;
                                  uVar16 = local_720;
                                  goto LAB_1801e6e9b;
                                }
                              }
                              bVar1 = false;
                              local_720 = local_720 + iVar4;
                              uVar16 = local_720;
                            }
                          }
                        }
                      }
                    }
LAB_1801e6e9b:
                    uVar21 = uVar21 + 4;
                    local_710 = local_710 - 1;
                  } while (local_710 != 0);
                  local_710 = 0;
                  uVar17 = (uint)local_6f0;
                }
                FUN_18063ab10(local_638,0,0x600);
                local_738 = (uint)bVar1;
                local_740 = (char *)CONCAT44(local_740._4_4_,uVar16);
                local_748 = (undefined **)CONCAT44(local_748._4_4_,uVar17);
                FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                              "weapons=%d hierarchy_notifications=0 holster_refreshes=%d complete=%d owner_mutations=0 forced_parent_or_bone=0 visual_readback=unverified"
                             );
                local_748 = &PTR_180700558;
                if (local_638[0] != '\0') {
                  local_748 = (undefined **)&DAT_1806bcfc0;
                }
                local_740 = local_638;
                FUN_1800f6900(2 - (uint)(bVar1 != false),local_748,"SkinChanger",
                              "AGENT_WEAPON_HIERARCHY_REFRESH");
              }
            }
          }
        }
      }
    }
  }
}



