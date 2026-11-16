// FUN_18022aee0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18022aee0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18022aee0(ulonglong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  char cVar10;
  char cVar11;
  byte bVar12;
  ushort uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  longlong lVar20;
  ULONGLONG UVar21;
  longlong lVar22;
  ulonglong uVar23;
  undefined8 uVar24;
  char *_Str1;
  int *piVar25;
  longlong *plVar26;
  byte bVar27;
  uint uVar28;
  uint uVar29;
  undefined *puVar30;
  longlong lVar31;
  bool bVar32;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined1 auStack_758 [32];
  undefined **local_738;
  char *local_730;
  uint local_728;
  uint local_720;
  char local_718;
  char local_717;
  uint local_714;
  char local_710;
  char local_70f;
  char local_70e;
  uint local_70c;
  undefined4 local_708;
  undefined4 local_704;
  undefined1 local_700 [16];
  undefined1 local_6f0;
  undefined2 local_6e8;
  ulonglong local_6e0;
  longlong local_6d8;
  undefined *local_6d0;
  undefined1 local_6c8 [16];
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  uint uStack_6a8;
  undefined4 uStack_6a4;
  undefined8 uStack_6a0;
  longlong local_698;
  longlong local_690;
  longlong local_688;
  ulonglong local_680;
  undefined1 local_678 [16];
  longlong local_668;
  longlong local_660;
  uint local_658;
  int local_654 [3];
  char local_648 [1544];
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_758;
  local_6e0 = param_1;
  local_698 = param_2;
  if ((DAT_180cd3b10 & 1) == 0) {
    DAT_180cd3b10 = DAT_180cd3b10 | 1;
    FUN_18022c5f0();
  }
  if (DAT_180cd3b18 != 0) {
    lVar31 = (longlong)DAT_180cd3b30 + param_1;
    lVar19 = FUN_18017ea70();
    *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + 1;
    if (lVar31 + 0x10 == 0) {
      bVar32 = false;
      uVar29 = local_714;
    }
    else {
      local_70c = 0;
      cVar10 = FUN_1804514f0(&local_70c,lVar31 + 0x10,4);
      if (cVar10 == '\0') {
        bVar32 = false;
        uVar29 = local_714;
      }
      else {
        bVar32 = true;
        uVar29 = local_70c;
      }
    }
    lVar19 = FUN_18017ea70();
    if (*(int *)(lVar19 + 4) != 0) {
      *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + -1;
    }
    lVar19 = lVar31 + 0x14;
    local_660 = lVar19;
    lVar20 = FUN_18017ea70();
    *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
    if (lVar19 == 0) {
      bVar7 = false;
      uVar28 = local_714;
    }
    else {
      local_70c = 0;
      cVar10 = FUN_1804514f0(&local_70c,lVar19,4);
      if (cVar10 == '\0') {
        bVar7 = false;
        uVar28 = local_714;
      }
      else {
        bVar7 = true;
        uVar28 = local_70c;
      }
    }
    local_70c = uVar28;
    lVar19 = FUN_18017ea70();
    if (*(int *)(lVar19 + 4) != 0) {
      *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + -1;
    }
    if (!bVar32) {
    }
    if (!bVar7) {
    }
    if (0x80 < uVar29) {
    }
    if ((int)uVar28 < (int)uVar29) {
    }
    if (0x100 < (int)uVar28) {
    }
    if ((DAT_180cd3ae0 & 1) == 0) {
      DAT_180cd3ae0 = DAT_180cd3ae0 | 1;
      FUN_18022a170();
    }
    iVar14 = DAT_180c63dd8;
    if (DAT_180cd3ae8 == 0) {
    }
    if ((DAT_180c63dd8 == 0) && (UVar21 = GetTickCount64(), DAT_180c63dd0 <= UVar21)) {
      local_6d0 = &DAT_1808eba90;
      iVar14 = FUN_1805f68d0(&DAT_1808eba90);
      if (iVar14 != 0) goto LAB_18022c56d;
      if (DAT_1808ebadc == 0x7fffffff) {
        DAT_1808ebadc = 0x7ffffffe;
        goto LAB_18022c582;
      }
      if ((DAT_180c63dd8 == 0) && (DAT_180c63dd0 <= UVar21)) {
        DAT_180c63dd8 = FUN_1804174b0("C_EconEntity");
        if (DAT_180c63dd8 == 0) {
          DAT_180c63dd0 = UVar21 + 1000;
        }
        else {
          DAT_180c63dd0 = 0xffffffffffffffff;
        }
      }
      iVar14 = DAT_180c63dd8;
      FUN_1805f68fc(&DAT_1808eba90);
    }
    iVar15 = DAT_180c63dc4;
    if ((DAT_180c63dc4 == 0) && (UVar21 = GetTickCount64(), DAT_180c63dc8 <= UVar21)) {
      local_6d0 = &DAT_1808eba40;
      iVar15 = FUN_1805f68d0(&DAT_1808eba40);
      if (iVar15 != 0) goto LAB_18022c56d;
      if (DAT_1808eba8c == 0x7fffffff) {
        DAT_1808eba8c = 0x7ffffffe;
        goto LAB_18022c582;
      }
      if ((DAT_180c63dc4 == 0) && (DAT_180c63dc8 <= UVar21)) {
        DAT_180c63dc4 = FUN_1804174b0("C_AttributeContainer");
        if (DAT_180c63dc4 == 0) {
          DAT_180c63dc8 = UVar21 + 1000;
        }
        else {
          DAT_180c63dc8 = 0xffffffffffffffff;
        }
      }
      iVar15 = DAT_180c63dc4;
      FUN_1805f68fc(&DAT_1808eba40);
    }
    iVar16 = DAT_180c63dc0;
    if ((DAT_180c63dc0 == 0) && (UVar21 = GetTickCount64(), DAT_180c63db8 <= UVar21)) {
      local_6d0 = &DAT_1808eb9f0;
      iVar16 = FUN_1805f68d0(&DAT_1808eb9f0);
      if (iVar16 != 0) goto LAB_18022c56d;
      if (DAT_1808eba3c == 0x7fffffff) {
        DAT_1808eba3c = 0x7ffffffe;
        goto LAB_18022c582;
      }
      if ((DAT_180c63dc0 == 0) && (DAT_180c63db8 <= UVar21)) {
        DAT_180c63dc0 = FUN_1804174b0("C_EconItemView");
        if (DAT_180c63dc0 == 0) {
          DAT_180c63db8 = UVar21 + 1000;
        }
        else {
          DAT_180c63db8 = 0xffffffffffffffff;
        }
      }
      iVar16 = DAT_180c63dc0;
      FUN_1805f68fc(&DAT_1808eb9f0);
    }
    lVar19 = FUN_18017ea70();
    *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + 1;
    lVar19 = (longlong)iVar16 + (longlong)iVar14 + iVar15 + param_2;
    if (lVar19 == 0) {
      bVar32 = false;
      lVar19 = local_6c8._0_8_;
    }
    else {
      local_6d8 = 0;
      cVar10 = FUN_1804514f0(&local_6d8,lVar19,8);
      if (cVar10 == '\0') {
        bVar32 = false;
        lVar19 = local_6c8._0_8_;
      }
      else {
        bVar32 = true;
        lVar19 = local_6d8;
      }
    }
    local_6d8 = lVar19;
    lVar20 = FUN_18017ea70();
    if (*(int *)(lVar20 + 4) != 0) {
      *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
    }
    iVar14 = DAT_180c63dac;
    if (bVar32) {
      if ((DAT_180c63dac == 0) && (UVar21 = GetTickCount64(), DAT_180c63db0 <= UVar21)) {
        local_6d0 = &DAT_1808eb9a0;
        iVar14 = FUN_1805f68d0(&DAT_1808eb9a0);
        if (iVar14 != 0) {
LAB_18022c56d:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808eb9ec == 0x7fffffff) {
          DAT_1808eb9ec = 0x7ffffffe;
LAB_18022c582:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c63dac == 0) && (DAT_180c63db0 <= UVar21)) {
          DAT_180c63dac = FUN_1804174b0("CEntityInstance");
          if (DAT_180c63dac == 0) {
            DAT_180c63db0 = UVar21 + 1000;
          }
          else {
            DAT_180c63db0 = 0xffffffffffffffff;
          }
        }
        iVar14 = DAT_180c63dac;
        FUN_1805f68fc(&DAT_1808eb9a0);
      }
      lVar20 = FUN_18017ea70();
      *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
      if ((longlong)iVar14 + param_1 == 0) {
        bVar32 = false;
        lVar20 = local_6c8._0_8_;
      }
      else {
        auVar1._8_8_ = 0;
        auVar1._0_8_ = local_700._8_8_;
        local_700 = auVar1 << 0x40;
        cVar10 = FUN_1804514f0(local_700,(longlong)iVar14 + param_1,8);
        if (cVar10 == '\0') {
          bVar32 = false;
          lVar20 = local_6c8._0_8_;
        }
        else {
          bVar32 = true;
          lVar20 = local_700._0_8_;
        }
      }
      lVar22 = FUN_18017ea70();
      if (*(int *)(lVar22 + 4) != 0) {
        *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + -1;
      }
      if ((bVar32) && (lVar20 != 0)) {
        lVar22 = FUN_18017ea70();
        *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + 1;
        if (lVar20 + 0x10 == 0) {
          bVar32 = false;
          uVar28 = local_714;
        }
        else {
          local_708 = 0;
          cVar10 = FUN_1804514f0(&local_708,lVar20 + 0x10,4);
          if (cVar10 == '\0') {
            bVar32 = false;
            uVar28 = local_714;
          }
          else {
            bVar32 = true;
            uVar28 = local_708;
          }
        }
        lVar20 = FUN_18017ea70();
        if (*(int *)(lVar20 + 4) != 0) {
          *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
        }
        local_704 = 0;
        if (bVar32) {
          local_704 = uVar28;
        }
        if (local_704 != 0) {
          uVar23 = FUN_1803d4150();
          lVar20 = DAT_180cd3ae8;
          if (uVar23 == param_1) {
            local_658 = 0xffffffff;
            cVar10 = FUN_1804513c0(DAT_180cd3ae8,1,2);
            if (cVar10 != '\0') {
              lVar22 = FUN_18017ea70();
              *(int *)(lVar22 + 4) = *(int *)(lVar22 + 4) + 1;
              FUN_1801ae0e0(&local_708,lVar20,param_2,&local_658);
              lVar20 = FUN_18017ea70();
              iVar14 = *(int *)(lVar20 + 4);
              if (iVar14 != 0) {
                iVar14 = iVar14 + -1;
                *(int *)(lVar20 + 4) = iVar14;
              }
              if (local_708._1_1_ != '\0') {
                if (local_658 != 0xffffffff) {
                  uVar24 = FUN_1803d4150(iVar14,local_658);
                  cVar10 = FUN_18022a5d0(uVar24,param_2,"C_KeychainModule");
                  if (cVar10 == '\0') {
                  }
                }
                plVar26 = (longlong *)
                          (((((((ulonglong)local_704 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                              (ulonglong)local_704._1_1_) * 0x100000001b3 ^
                             (ulonglong)local_704._2_1_) * 0x100000001b3 ^
                            (ulonglong)local_704._3_1_) * 0x100000001b3 & DAT_180bbee80) * 0x10 +
                          DAT_180bbee68);
                lVar20 = plVar26[1];
                if (lVar20 == DAT_180bbee58) {
LAB_18022b580:
                  lVar20 = 0;
                }
                else {
                  uVar28 = *(uint *)(lVar20 + 0x10);
                  while (local_704 != uVar28) {
                    if (lVar20 == *plVar26) goto LAB_18022b580;
                    lVar20 = *(longlong *)(lVar20 + 8);
                    uVar28 = *(uint *)(lVar20 + 0x10);
                  }
                }
                lVar22 = DAT_180bbee58;
                if (lVar20 != 0) {
                  lVar22 = lVar20;
                }
                if ((((lVar22 == DAT_180bbee58) || (*(ulonglong *)(lVar22 + 0x18) != param_1)) ||
                    (*(longlong *)(lVar22 + 0x20) != lVar19)) ||
                   (local_717 = '\0', *(uint *)(lVar22 + 0x28) != local_658)) {
                  local_717 = '\x01';
                }
                local_70e = '\0';
                lVar19 = FUN_18017ea70();
                *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + 1;
                if (lVar31 + 4 == 0) {
                  bVar32 = false;
                  uVar28 = local_714;
                }
                else {
                  local_708 = 0;
                  cVar10 = FUN_1804514f0(&local_708,lVar31 + 4,4);
                  if (cVar10 == '\0') {
                    bVar32 = false;
                    uVar28 = local_714;
                  }
                  else {
                    bVar32 = true;
                    uVar28 = local_708;
                  }
                }
                lVar19 = FUN_18017ea70();
                if (*(int *)(lVar19 + 4) != 0) {
                  *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + -1;
                }
                lVar31 = lVar31 + 8;
                local_6d0 = (undefined *)lVar31;
                lVar19 = FUN_18017ea70();
                *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + 1;
                if (lVar31 == 0) {
                  bVar7 = false;
                  lVar31 = local_6c8._0_8_;
                }
                else {
                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = local_700._8_8_;
                  local_700 = auVar2 << 0x40;
                  cVar10 = FUN_1804514f0(local_700,lVar31,8);
                  if (cVar10 == '\0') {
                    bVar7 = false;
                    lVar31 = local_6c8._0_8_;
                  }
                  else {
                    bVar7 = true;
                    lVar31 = local_700._0_8_;
                  }
                }
                lVar19 = FUN_18017ea70();
                if (*(int *)(lVar19 + 4) != 0) {
                  *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + -1;
                }
                local_668 = 0;
                if (bVar7) {
                  local_668 = lVar31;
                }
                if ((uVar29 == 0) ||
                   (((bVar32 && ((uVar28 & 0x7fffffff) != 0)) &&
                    ((local_668 != 0 && ((local_70c != 0 && ((local_70c - 1 & local_70c) == 0)))))))
                   ) {
                  local_714 = 0;
                  uVar24 = extraout_XMM0_Qa;
                  if (0 < (int)local_70c) {
                    do {
                      lVar31 = (longlong)(int)local_714 * 0x10 + local_668;
                      local_6c8._0_8_ = lVar31;
                      lVar19 = FUN_18017ea70();
                      *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + 1;
                      if (lVar31 == 0) {
                        bVar12 = 0;
                        bVar32 = false;
                      }
                      else {
                        local_700 = (undefined1  [16])0x0;
                        cVar10 = FUN_1804514f0(local_700,lVar31,0x10);
                        if (cVar10 == '\0') {
                          bVar12 = 0;
                          bVar32 = false;
                        }
                        else {
                          local_6b8 = local_700._0_8_;
                          uStack_6b0 = local_700._8_8_;
                          bVar12 = 1;
                          bVar32 = true;
                        }
                      }
                      uStack_6a8 = CONCAT31(uStack_6a8._1_3_,bVar12);
                      lVar19 = FUN_18017ea70();
                      iVar14 = *(int *)(lVar19 + 4);
                      if (iVar14 != 0) {
                        iVar14 = iVar14 + -1;
                        *(int *)(lVar19 + 4) = iVar14;
                      }
                      if (!bVar32) {
                      }
                      uVar24 = extraout_XMM0_Qa_00;
                      if ((local_6b8 & 0x80000000) == 0) {
                        iVar15 = local_6b8._4_4_;
                        if (((local_6b8._4_4_ == -0x59141647) || (local_6b8._4_4_ == 0xaa5272a)) ||
                           (local_6b8._4_4_ == DAT_180cd3b34)) {
                          uVar29 = uStack_6b0._4_4_;
                          if (uStack_6b0._4_4_ - 1 < 0xfffffffe) {
                            if (((local_6b8._4_4_ == 0xaa5272a) && (local_717 == '\0')) &&
                               (local_658 != 0xffffffff)) {
                              uVar24 = FUN_1803d4150(iVar14,uStack_6b0._4_4_);
                              cVar10 = FUN_18022a5d0(uVar24,local_6e0,"C_CS2HudModelAddon");
                              uVar24 = extraout_XMM0_Qa_01;
                              if (cVar10 != '\0') {
                                local_70e = '\x01';
                                goto LAB_18022bc00;
                              }
                            }
                            iVar14 = DAT_180c63da8;
                            if (iVar15 == -0x59141647) {
                              if ((DAT_180c63da8 == 0) &&
                                 (UVar21 = GetTickCount64(), DAT_180c63da0 <= UVar21)) {
                                local_700._0_8_ = &DAT_1808eb950;
                                iVar14 = FUN_1805f68d0(&DAT_1808eb950);
                                if (iVar14 != 0) goto LAB_18022c562;
                                if (DAT_1808eb99c == 0x7fffffff) {
                                  DAT_1808eb99c = 0x7ffffffe;
                                  goto LAB_18022c5df;
                                }
                                if ((DAT_180c63da8 == 0) && (DAT_180c63da0 <= UVar21)) {
                                  DAT_180c63da8 = FUN_1804174b0("C_EconItemView",0xafd12ee8);
                                  DAT_180c63da0 = 0xffffffffffffffff;
                                  if (DAT_180c63da8 == 0) {
                                    DAT_180c63da0 = UVar21 + 1000;
                                  }
                                }
                                iVar14 = DAT_180c63da8;
                                FUN_1805f68fc(&DAT_1808eb950);
                              }
                              iVar16 = DAT_180c63d94;
                              if ((DAT_180c63d94 == 0) &&
                                 (UVar21 = GetTickCount64(), DAT_180c63d98 <= UVar21)) {
                                local_700._0_8_ = &DAT_1808eb900;
                                iVar16 = FUN_1805f68d0(&DAT_1808eb900);
                                if (iVar16 != 0) goto LAB_18022c562;
                                if (DAT_1808eb94c == 0x7fffffff) {
                                  DAT_1808eb94c = 0x7ffffffe;
                                  goto LAB_18022c5df;
                                }
                                if ((DAT_180c63d94 == 0) && (DAT_180c63d98 <= UVar21)) {
                                  DAT_180c63d94 = FUN_1804174b0("C_EconItemView",0xa74a6ed8);
                                  DAT_180c63d98 = 0xffffffffffffffff;
                                  if (DAT_180c63d94 == 0) {
                                    DAT_180c63d98 = UVar21 + 1000;
                                  }
                                }
                                iVar16 = DAT_180c63d94;
                                FUN_1805f68fc(&DAT_1808eb900);
                              }
                              iVar17 = DAT_180c63d7c;
                              if (iVar14 == 0) {
                              }
                              if (iVar16 == 0) {
                              }
                              if ((DAT_180c63d7c == 0) &&
                                 (UVar21 = GetTickCount64(), DAT_180c63d80 <= UVar21)) {
                                local_700._0_8_ = &DAT_1808eb860;
                                iVar17 = FUN_1805f68d0(&DAT_1808eb860);
                                if (iVar17 != 0) goto LAB_18022c562;
                                if (DAT_1808eb8ac == 0x7fffffff) {
                                  DAT_1808eb8ac = 0x7ffffffe;
                                  goto LAB_18022c5df;
                                }
                                if ((DAT_180c63d7c == 0) && (DAT_180c63d80 <= UVar21)) {
                                  DAT_180c63d7c = FUN_1804174b0("C_AttributeContainer",0xdce71866);
                                  DAT_180c63d80 = 0xffffffffffffffff;
                                  if (DAT_180c63d7c == 0) {
                                    DAT_180c63d80 = UVar21 + 1000;
                                  }
                                }
                                iVar17 = DAT_180c63d7c;
                                FUN_1805f68fc(&DAT_1808eb860);
                              }
                              iVar18 = DAT_180c63d90;
                              if ((DAT_180c63d90 == 0) &&
                                 (UVar21 = GetTickCount64(), DAT_180c63d88 <= UVar21)) {
                                local_700._0_8_ = &DAT_1808eb8b0;
                                iVar18 = FUN_1805f68d0(&DAT_1808eb8b0);
                                if (iVar18 != 0) goto LAB_18022c562;
                                if (DAT_1808eb8fc == 0x7fffffff) {
                                  DAT_1808eb8fc = 0x7ffffffe;
                                  goto LAB_18022c5df;
                                }
                                if ((DAT_180c63d90 == 0) && (DAT_180c63d88 <= UVar21)) {
                                  DAT_180c63d90 = FUN_1804174b0("C_EconEntity",0x537b0586);
                                  DAT_180c63d88 = 0xffffffffffffffff;
                                  if (DAT_180c63d90 == 0) {
                                    DAT_180c63d88 = UVar21 + 1000;
                                  }
                                }
                                iVar18 = DAT_180c63d90;
                                FUN_1805f68fc(&DAT_1808eb8b0);
                              }
                              lVar19 = (longlong)iVar17 + iVar18 + local_698;
                              lVar31 = FUN_18017ea70();
                              *(int *)(lVar31 + 4) = *(int *)(lVar31 + 4) + 1;
                              lVar31 = iVar14 + lVar19;
                              if (lVar31 == 0) {
                                bVar32 = false;
                              }
                              else {
                                local_718 = '\0';
                                cVar10 = FUN_1804514f0(&local_718,lVar31,1);
                                if (cVar10 == '\0') {
                                  bVar32 = false;
                                }
                                else {
                                  local_710 = local_718;
                                  bVar32 = true;
                                }
                              }
                              cVar10 = local_710;
                              lVar31 = FUN_18017ea70();
                              if (*(int *)(lVar31 + 4) != 0) {
                                *(int *)(lVar31 + 4) = *(int *)(lVar31 + 4) + -1;
                              }
                              lVar31 = FUN_18017ea70();
                              *(int *)(lVar31 + 4) = *(int *)(lVar31 + 4) + 1;
                              lVar19 = iVar16 + lVar19;
                              if (lVar19 == 0) {
                                bVar7 = false;
                              }
                              else {
                                local_718 = '\0';
                                cVar11 = FUN_1804514f0(&local_718,lVar19,1);
                                if (cVar11 == '\0') {
                                  bVar7 = false;
                                }
                                else {
                                  local_70f = local_718;
                                  bVar7 = true;
                                }
                              }
                              cVar11 = local_70f;
                              lVar31 = FUN_18017ea70();
                              if (*(int *)(lVar31 + 4) != 0) {
                                *(int *)(lVar31 + 4) = *(int *)(lVar31 + 4) + -1;
                              }
                              if (!bVar32) {
                              }
                              if (!bVar7) {
                              }
                              uVar24 = extraout_XMM0_Qa_02;
                              if ((cVar10 != '\0') || (cVar11 != '\0')) goto LAB_18022bc00;
                              lVar31 = local_6c8._0_8_;
                              uVar29 = uStack_6b0._4_4_;
                            }
                            local_654[0] = -1;
                            if (iVar15 == 0xaa5272a) {
                              local_6e8 = 0x100;
                              uVar13 = 0x100;
                            }
                            else {
                              uVar24 = DAT_180cd3b20;
                              if (iVar15 == -0x59141647) {
                                uVar24 = DAT_180cd3b28;
                              }
                              cVar10 = FUN_1804513c0(uVar24,1,2);
                              if (cVar10 == '\0') {
                                local_708._0_2_ = (ushort)(byte)local_708;
                                uVar24 = extraout_XMM0_Qa_03;
                              }
                              else {
                                lVar19 = FUN_18017ea70();
                                *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + 1;
                                FUN_1801ae0e0(&local_708,uVar24,local_698,local_654);
                                lVar19 = FUN_18017ea70();
                                uVar24 = extraout_XMM0_Qa_04;
                                if (*(int *)(lVar19 + 4) != 0) {
                                  *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + -1;
                                }
                              }
                              uVar13 = (ushort)local_708;
                            }
                            if ((char)(uVar13 >> 8) == '\0') {
                            }
                            if (local_654[0] == -1) {
                              if ((uVar29 & 0x7fff) < 0x4000) {
                              }
                              lVar19 = FUN_1803d4150(uVar13 >> 8,uVar29);
                              if (lVar19 != 0) {
                                _Str1 = (char *)FUN_1803d3fa0(extraout_XMM0_Qa_05,lVar19);
                                iVar14 = DAT_180c63d78;
                                if ((DAT_180c63d78 == 0) &&
                                   (UVar21 = GetTickCount64(), DAT_180c63d70 <= UVar21)) {
                                  local_700._0_8_ = &DAT_1808eb810;
                                  iVar14 = FUN_1805f68d0(&DAT_1808eb810);
                                  if (iVar14 != 0) goto LAB_18022c562;
                                  if (DAT_1808eb85c == 0x7fffffff) {
                                    DAT_1808eb85c = 0x7ffffffe;
                                    goto LAB_18022c5df;
                                  }
                                  if ((DAT_180c63d78 == 0) && (DAT_180c63d70 <= UVar21)) {
                                    DAT_180c63d78 = FUN_1804174b0("C_BaseEntity",0x9d930423);
                                    DAT_180c63d70 = 0xffffffffffffffff;
                                    if (DAT_180c63d78 == 0) {
                                      DAT_180c63d70 = UVar21 + 1000;
                                    }
                                  }
                                  iVar14 = DAT_180c63d78;
                                  FUN_1805f68fc(&DAT_1808eb810);
                                }
                                iVar15 = DAT_180c63d64;
                                if ((DAT_180c63d64 == 0) &&
                                   (UVar21 = GetTickCount64(), DAT_180c63d68 <= UVar21)) {
                                  local_700._0_8_ = &DAT_1808eb7c0;
                                  iVar15 = FUN_1805f68d0(&DAT_1808eb7c0);
                                  if (iVar15 != 0) goto LAB_18022c562;
                                  if (DAT_1808eb80c == 0x7fffffff) {
                                    DAT_1808eb80c = 0x7ffffffe;
                                    goto LAB_18022c5df;
                                  }
                                  if ((DAT_180c63d64 == 0) && (DAT_180c63d68 <= UVar21)) {
                                    DAT_180c63d64 = FUN_1804174b0("CGameSceneNode",0xb89c7c3f);
                                    DAT_180c63d68 = 0xffffffffffffffff;
                                    if (DAT_180c63d64 == 0) {
                                      DAT_180c63d68 = UVar21 + 1000;
                                    }
                                  }
                                  iVar15 = DAT_180c63d64;
                                  FUN_1805f68fc(&DAT_1808eb7c0);
                                }
                                iVar16 = DAT_180c63d60;
                                if ((DAT_180c63d60 == 0) &&
                                   (UVar21 = GetTickCount64(), DAT_180c63d58 <= UVar21)) {
                                  local_700._0_8_ = &DAT_1808eb770;
                                  iVar16 = FUN_1805f68d0(&DAT_1808eb770);
                                  if (iVar16 != 0) {
LAB_18022c562:
                    /* WARNING: Subroutine does not return */
                                    FUN_1805f6d44(5);
                                  }
                                  if (DAT_1808eb7bc == 0x7fffffff) {
                                    DAT_1808eb7bc = 0x7ffffffe;
LAB_18022c5df:
                    /* WARNING: Subroutine does not return */
                                    FUN_1805f6d44(6);
                                  }
                                  if ((DAT_180c63d60 == 0) && (DAT_180c63d58 <= UVar21)) {
                                    DAT_180c63d60 = FUN_1804174b0("CGameSceneNode",0x6b325da);
                                    DAT_180c63d58 = 0xffffffffffffffff;
                                    if (DAT_180c63d60 == 0) {
                                      DAT_180c63d58 = UVar21 + 1000;
                                    }
                                  }
                                  iVar16 = DAT_180c63d60;
                                  FUN_1805f68fc(&DAT_1808eb770);
                                }
                                if (iVar14 == 0) {
                                }
                                if (iVar15 == 0) {
                                }
                                if (iVar16 == 0) {
                                }
                                lVar31 = FUN_18017ea70();
                                *(int *)(lVar31 + 4) = *(int *)(lVar31 + 4) + 1;
                                if (iVar14 + lVar19 == 0) {
                                  bVar32 = false;
                                }
                                else {
                                  auVar3._8_8_ = 0;
                                  auVar3._0_8_ = local_700._8_8_;
                                  local_700 = auVar3 << 0x40;
                                  cVar10 = FUN_1804514f0(local_700,iVar14 + lVar19,8);
                                  if (cVar10 == '\0') {
                                    bVar32 = false;
                                  }
                                  else {
                                    local_690 = local_700._0_8_;
                                    bVar32 = true;
                                  }
                                }
                                lVar31 = local_690;
                                lVar20 = FUN_18017ea70();
                                if (*(int *)(lVar20 + 4) != 0) {
                                  *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
                                }
                                if ((!bVar32) || (lVar31 == 0)) {
LAB_18022bfe2:
                                  uVar23 = 0;
                                }
                                else {
                                  lVar20 = FUN_18017ea70();
                                  *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
                                  lVar31 = iVar15 + lVar31;
                                  if (lVar31 == 0) {
                                    bVar32 = false;
                                  }
                                  else {
                                    auVar4._8_8_ = 0;
                                    auVar4._0_8_ = local_700._8_8_;
                                    local_700 = auVar4 << 0x40;
                                    cVar10 = FUN_1804514f0(local_700,lVar31,8);
                                    if (cVar10 == '\0') {
                                      bVar32 = false;
                                    }
                                    else {
                                      local_688 = local_700._0_8_;
                                      bVar32 = true;
                                    }
                                  }
                                  lVar31 = local_688;
                                  lVar20 = FUN_18017ea70();
                                  if (*(int *)(lVar20 + 4) != 0) {
                                    *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
                                  }
                                  lVar20 = 0;
                                  if (bVar32) {
                                    lVar20 = lVar31;
                                  }
                                  if (lVar20 == 0) goto LAB_18022bfe2;
                                  lVar31 = FUN_18017ea70();
                                  *(int *)(lVar31 + 4) = *(int *)(lVar31 + 4) + 1;
                                  if (iVar16 + lVar20 == 0) {
                                    bVar32 = false;
                                  }
                                  else {
                                    auVar5._8_8_ = 0;
                                    auVar5._0_8_ = local_700._8_8_;
                                    local_700 = auVar5 << 0x40;
                                    cVar10 = FUN_1804514f0(local_700,iVar16 + lVar20,8);
                                    if (cVar10 == '\0') {
                                      bVar32 = false;
                                    }
                                    else {
                                      local_680 = local_700._0_8_;
                                      bVar32 = true;
                                    }
                                  }
                                  uVar9 = local_680;
                                  lVar31 = FUN_18017ea70();
                                  if (*(int *)(lVar31 + 4) != 0) {
                                    *(int *)(lVar31 + 4) = *(int *)(lVar31 + 4) + -1;
                                  }
                                  uVar23 = 0;
                                  if (bVar32) {
                                    uVar23 = uVar9;
                                  }
                                }
                                if (_Str1 == (char *)0x0) {
                                }
                                iVar14 = strcmp(_Str1,"C_CS2HudModelAddon");
                                if (iVar14 != 0) {
                                }
                                if (uVar23 != local_6e0) {
                                }
                                lVar31 = FUN_18017ea70();
                                *(int *)(lVar31 + 4) = *(int *)(lVar31 + 4) + 1;
                                uVar24 = local_6c8._0_8_;
                                if (local_6c8._0_8_ == 0) {
                                  local_6f0 = 0;
                                  bVar27 = 0;
                                }
                                else {
                                  local_6c8 = (undefined1  [16])0x0;
                                  cVar10 = FUN_1804514f0(local_6c8,uVar24,0x10);
                                  if (cVar10 == '\0') {
                                    bVar27 = 0;
                                    local_6f0 = 0;
                                  }
                                  else {
                                    local_700 = local_6c8;
                                    local_6f0 = 1;
                                    bVar27 = 1;
                                  }
                                }
                                lVar31 = FUN_18017ea70();
                                if (*(int *)(lVar31 + 4) != 0) {
                                  *(int *)(lVar31 + 4) = *(int *)(lVar31 + 4) + -1;
                                }
                                if ((bVar27 == 0) || (bVar12 == 0)) {
                                  bVar32 = (bool)(bVar12 ^ bVar27);
                                }
                                else {
                                  iVar14 = memcmp(local_700,&local_6b8,0x10);
                                  bVar32 = iVar14 != 0;
                                }
                                if (bVar32 != false) {
                                }
                                uVar8 = uStack_6b0._4_4_;
                                lVar31 = FUN_1803d4150();
                                if (lVar31 != lVar19) {
                                }
                                bVar12 = FUN_1801a5f80(DAT_180cd3b18,lVar19);
                                if (bVar12 == 0) {
LAB_18022c13e:
                                  uVar29 = 0;
                                }
                                else {
                                  local_700._0_4_ = 0xffffffff;
                                  lVar31 = uVar24 + 0xc;
                                  cVar10 = FUN_1804513c0(lVar31,4,1);
                                  if (cVar10 == '\0') goto LAB_18022c13e;
                                  lVar19 = FUN_18017ea70();
                                  *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + 1;
                                  cVar10 = FUN_1801ad800(lVar31,local_700);
                                  lVar19 = FUN_18017ea70();
                                  if (*(int *)(lVar19 + 4) != 0) {
                                    *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + -1;
                                  }
                                  if (((cVar10 == '\0') ||
                                      (piVar25 = (int *)FUN_1801a5f00(local_678,lVar31),
                                      (char)piVar25[1] == '\0')) || (*piVar25 != -1))
                                  goto LAB_18022c13e;
                                  uVar29 = 1;
                                }
                                FUN_18063ab10(local_648,0,0x600);
                                param_1 = local_6e0;
                                local_728 = (uint)bVar12;
                                local_730 = (char *)CONCAT44(local_730._4_4_,uVar8);
                                local_738 = (undefined **)local_6e0;
                                local_720 = uVar29;
                                FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                                              "model=%p addon_handle=0x%x submitted=%d slot_cleared=%d rendered=unverified"
                                             );
                                local_738 = &PTR_180700558;
                                if (local_648[0] != '\0') {
                                  local_738 = (undefined **)&DAT_1806bcfc0;
                                }
                                local_730 = local_648;
                                uVar24 = FUN_1800f6900((uVar29 ^ 1) * 2);
                                if ((char)uVar29 == '\0') {
                                }
                                goto LAB_18022bc05;
                              }
                              local_700._0_4_ = 0xffffffff;
                              cVar10 = FUN_1804513c0(lVar31 + 0xc,4,1);
                              if (cVar10 == '\0') {
                              }
                              lVar19 = FUN_18017ea70();
                              *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + 1;
                              cVar10 = FUN_1801ad800(lVar31 + 0xc,local_700);
                              lVar31 = FUN_18017ea70();
                              if (*(int *)(lVar31 + 4) != 0) {
                                *(int *)(lVar31 + 4) = *(int *)(lVar31 + 4) + -1;
                              }
                              bVar32 = cVar10 == '\0';
                              uVar24 = extraout_XMM0_Qa_06;
                            }
                            else {
                              if ((char)uVar13 == '\0') {
                              }
                              bVar32 = local_654[0] == 0;
                            }
                            if (bVar32) {
                            }
                          }
                        }
LAB_18022bc00:
                        param_1 = local_6e0;
                      }
LAB_18022bc05:
                      local_714 = local_714 + 1;
                    } while ((int)local_714 < (int)local_70c);
                  }
                  if (0x7f < DAT_180bbee60) {
                    plVar26 = (longlong *)
                              (((((((ulonglong)local_704 & 0xff ^ 0xcbf29ce484222325) *
                                   0x100000001b3 ^ (ulonglong)local_704._1_1_) * 0x100000001b3 ^
                                 (ulonglong)local_704._2_1_) * 0x100000001b3 ^
                                (ulonglong)local_704._3_1_) * 0x100000001b3 & DAT_180bbee80) * 0x10
                              + DAT_180bbee68);
                    lVar31 = plVar26[1];
                    if (lVar31 == DAT_180bbee58) {
LAB_18022c2b4:
                      uVar24 = FUN_18022f760(&DAT_180bbee50);
                    }
                    else {
                      uVar29 = *(uint *)(lVar31 + 0x10);
                      while (local_704 != uVar29) {
                        if (lVar31 == *plVar26) goto LAB_18022c2b4;
                        lVar31 = *(longlong *)(lVar31 + 8);
                        uVar29 = *(uint *)(lVar31 + 0x10);
                      }
                    }
                  }
                  plVar26 = (longlong *)FUN_1802300c0(uVar24,local_678,&local_704);
                  lVar31 = *plVar26;
                  if (local_717 != '\0') {
                    uStack_6b0 = local_6d8;
                    uStack_6a8 = local_658;
                    uStack_6a0 = 0;
                    *(ulonglong *)(lVar31 + 0x18) = param_1;
                    *(longlong *)(lVar31 + 0x20) = local_6d8;
                    *(ulonglong *)(lVar31 + 0x28) = CONCAT44(uStack_6a4,local_658);
                    *(undefined8 *)(lVar31 + 0x30) = 0;
                    local_6b8 = param_1;
                  }
                  if ((local_658 == 0xffffffff) || ((local_717 == '\0' && (local_70e != '\0')))) {
LAB_18022c546:
                    *(undefined8 *)(lVar31 + 0x30) = 0;
                  }
                  else {
                    UVar21 = GetTickCount64();
                    if (*(ulonglong *)(lVar31 + 0x30) <= UVar21) {
                      *(ULONGLONG *)(lVar31 + 0x30) = UVar21 + 100;
                      cVar10 = FUN_1801a5f80(DAT_180cd3b08,param_1);
                      if (cVar10 != '\0') {
                        lVar19 = FUN_18017ea70();
                        *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + 1;
                        if (local_6d0 == (undefined *)0x0) {
                          bVar32 = false;
                          puVar30 = local_6d0;
                        }
                        else {
                          auVar6._8_8_ = 0;
                          auVar6._0_8_ = local_6c8._8_8_;
                          local_6c8 = auVar6 << 0x40;
                          cVar10 = FUN_1804514f0(local_6c8,local_6d0,8);
                          if (cVar10 == '\0') {
                            bVar32 = false;
                            puVar30 = local_6d0;
                          }
                          else {
                            bVar32 = true;
                            puVar30 = (undefined *)local_6c8._0_8_;
                          }
                        }
                        lVar19 = FUN_18017ea70();
                        if (*(int *)(lVar19 + 4) != 0) {
                          *(int *)(lVar19 + 4) = *(int *)(lVar19 + 4) + -1;
                        }
                        lVar19 = 0;
                        if (bVar32) {
                          lVar19 = (longlong)puVar30;
                        }
                        lVar20 = FUN_18017ea70();
                        *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
                        if (local_660 == 0) {
                          bVar32 = false;
                          uVar29 = local_700._0_4_;
                        }
                        else {
                          local_714 = 0;
                          cVar10 = FUN_1804514f0(&local_714,local_660,4);
                          if (cVar10 == '\0') {
                            bVar32 = false;
                            uVar29 = local_700._0_4_;
                          }
                          else {
                            bVar32 = true;
                            uVar29 = local_714;
                          }
                        }
                        lVar20 = FUN_18017ea70();
                        if (*(int *)(lVar20 + 4) != 0) {
                          *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
                        }
                        uVar28 = 0;
                        if (bVar32) {
                          uVar28 = uVar29;
                        }
                        if (((lVar19 != 0) && (uVar28 - 1 < 0x100)) && (iVar14 = 0, 0 < (int)uVar28)
                           ) {
                          iVar15 = 0;
                          do {
                            lVar20 = FUN_18017ea70();
                            *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + 1;
                            bVar32 = false;
                            if (iVar15 + lVar19 != 0) {
                              local_678 = (undefined1  [16])0x0;
                              cVar10 = FUN_1804514f0(local_678,iVar15 + lVar19,0x10);
                              if (cVar10 == '\0') {
                                bVar32 = false;
                              }
                              else {
                                local_6b8 = local_678._0_8_;
                                uStack_6b0 = local_678._8_8_;
                                bVar32 = true;
                              }
                            }
                            lVar20 = FUN_18017ea70();
                            iVar16 = *(int *)(lVar20 + 4);
                            if (iVar16 != 0) {
                              iVar16 = iVar16 + -1;
                              *(int *)(lVar20 + 4) = iVar16;
                            }
                            if (!bVar32) {
                            }
                            if (((local_6b8 & 0x80000000) == 0) && (local_6b8._4_4_ == 0xaa5272a)) {
                              uVar24 = FUN_1803d4150(iVar16,uStack_6b0._4_4_);
                              cVar10 = FUN_18022a5d0(uVar24,param_1,"C_CS2HudModelAddon");
                              if (cVar10 != '\0') {
                                FUN_18063ab10(local_648,0,0x600);
                                local_728 = local_658;
                                local_730 = (char *)local_6d8;
                                local_738 = (undefined **)param_1;
                                FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                                              "model=%p item=%llu source=0x%x addon_readback=1 rendered=unverified"
                                             );
                                local_738 = &PTR_180700558;
                                if (local_648[0] != '\0') {
                                  local_738 = (undefined **)&DAT_1806bcfc0;
                                }
                                local_730 = local_648;
                                FUN_1800f6900(0);
                                goto LAB_18022c546;
                              }
                            }
                            iVar14 = iVar14 + 1;
                            iVar15 = iVar15 + 0x10;
                          } while (iVar14 < (int)uVar28);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}



