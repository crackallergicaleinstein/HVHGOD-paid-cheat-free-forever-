// FUN_1803c6340 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803c6340 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x0001803c7251) */
/* WARNING: Removing unreachable block (ram,0x0001803c78c9) */

void FUN_1803c6340(longlong param_1,longlong param_2,int param_3)

{
  byte *pbVar1;
  byte **ppbVar2;
  undefined1 *puVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  char cVar7;
  undefined1 uVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  byte **ppbVar15;
  undefined8 uVar16;
  int iVar17;
  uint uVar18;
  byte *pbVar19;
  undefined1 *puVar20;
  int *piVar21;
  uint uVar22;
  byte **ppbVar23;
  byte *pbVar24;
  uint uVar25;
  undefined8 uVar26;
  int iVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  undefined8 uVar31;
  undefined4 uVar32;
  int local_res18 [2];
  undefined1 auStack_4848 [32];
  undefined **local_4828;
  char *local_4820;
  uint local_4818;
  int local_4810;
  undefined8 local_4808;
  undefined4 local_4800;
  uint local_47f8;
  undefined4 local_47f4;
  longlong local_47f0;
  char local_47e8;
  char local_47e7;
  char local_47e6;
  uint local_47e4;
  byte local_47e0 [8];
  uint local_47d8;
  uint local_47d4;
  longlong local_47d0;
  uint local_47c8;
  uint local_47c4;
  undefined8 local_47c0;
  undefined8 uStack_47b8;
  byte **local_47b0;
  byte local_47a8 [24];
  byte **local_4790;
  longlong local_4788;
  byte **local_4778;
  int *piStack_4770;
  byte **local_4768;
  byte **local_4760;
  ulonglong *local_4758;
  byte ***local_4750;
  char *local_4748;
  byte ***local_4740;
  int *local_4738;
  undefined1 **local_4730;
  int *local_4728;
  byte *local_4718;
  byte ***local_4710;
  byte **local_4708;
  byte *local_4700;
  char *local_46f8;
  byte *local_46f0;
  uint *local_46e8;
  int *local_46e0;
  undefined1 local_46d8 [16];
  ulonglong local_46c8;
  undefined1 *local_46c0;
  byte *local_46b8;
  byte local_46b0 [4];
  int local_46ac;
  byte local_46a8;
  char local_46a7;
  char local_46a6 [2];
  int local_46a4;
  byte **local_46a0;
  undefined1 local_4698 [16];
  byte **local_4688;
  uint local_4680;
  int local_467c;
  byte **local_4678 [2];
  undefined1 local_4668 [16384];
  int local_668 [4];
  char local_658 [1536];
  ulonglong local_58;
  
  if (param_2 == 0) {
    return;
  }
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_4848;
  if (0xfff < param_3 - 1U) {
  }
  uVar29 = *(ulonglong *)(param_1 + 0x1048);
  local_res18[0] = param_3;
  local_47f0 = param_1;
  local_47d0 = param_2;
  UVar9 = GetTickCount64();
  if (uVar29 <= UVar9) {
  }
  local_4698 = (undefined1  [16])0x0;
  local_4760 = (byte **)FUN_180113860(param_1 + 0x1028);
  pbVar24 = *(byte **)(param_1 + 0x1020);
  local_4698._8_8_ = local_4760;
  local_4698._0_8_ = pbVar24;
  if (local_4760 != (byte **)0x0) {
    LOCK();
    *(int *)(local_4760 + 1) = *(int *)(local_4760 + 1) + 1;
    UNLOCK();
  }
  LOCK();
  uVar16 = *(undefined8 *)(param_1 + 0x1028);
  *(undefined8 *)(param_1 + 0x1028) = local_4760;
  UNLOCK();
  if (((byte)uVar16 & 3) == 2) {
    FUN_1805fa36c(param_1 + 0x1028);
  }
  if (pbVar24 != (byte *)0x0) {
    if (*(char *)(param_1 + 0xdc1) == '\0') {
      if ((pbVar24[0x138] == 0) && (*(int *)(pbVar24 + 0x140) < 0)) {
        if (*pbVar24 != 0) {
          local_46b0[0] = pbVar24[1];
          uVar22 = (uint)local_46b0[0];
          local_47e0[0] = 0;
          local_47e0[1] = 2;
          local_47e0[2] = 3;
          local_47e0[3] = 4;
          local_47e0[4] = 5;
          local_47e0[5] = 6;
          local_47e0[6] = 8;
          local_47e0[7] = 9;
          if (10 < local_46b0[0]) {
            if (local_46b0[0] < 0x13) {
              uVar22 = (uint)local_47e0[local_46b0[0] - 0xb];
            }
            else {
              uVar22 = 2;
            }
            local_46b0[0] = (byte)uVar22;
          }
          local_46a4._0_2_ = (ushort)(byte)local_46a4;
          local_4820 = (char *)CONCAT62(local_4820._2_6_,(ushort)local_46a4);
          local_4828 = (undefined **)((ulonglong)local_4828 & 0xffffffffffffff00);
          lVar10 = local_4698._0_8_;
          puVar12 = (undefined8 *)
                    FUN_18028c850(local_46d8,uVar22,*(undefined1 *)(local_4698._0_8_ + 8),
                                  *(undefined4 *)(local_4698._0_8_ + 4));
          local_4778 = (byte **)*puVar12;
          piStack_4770 = (int *)puVar12[1];
          uVar25 = (uint)piStack_4770;
          local_47c4 = (uint)piStack_4770;
          local_4678[0] = local_4778;
          if (local_4778 != (byte **)0x0) {
            iVar17 = 0;
            local_46a4 = 0;
            local_47e4 = 0;
            local_46ac = 0;
            iVar27 = 0;
            if (0 < local_res18[0]) {
              do {
                lVar11 = (longlong)iVar27 * 0x70 + local_47d0;
                lVar10 = FUN_18017ea70();
                *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                if (lVar11 + 0x18 == 0) {
                  bVar4 = false;
                }
                else {
                  local_46a0 = (byte **)0x0;
                  cVar6 = FUN_1804514f0(&local_46a0,lVar11 + 0x18,8);
                  if (cVar6 == '\0') {
                    bVar4 = false;
                  }
                  else {
                    local_47b0 = local_46a0;
                    bVar4 = true;
                  }
                }
                ppbVar23 = local_47b0;
                lVar10 = FUN_18017ea70();
                if (*(int *)(lVar10 + 4) != 0) {
                  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                }
                if ((!bVar4) || (ppbVar23 == (byte **)0x0)) {
LAB_1803c784e:
                  lVar10 = local_47f0;
                }
                else {
                  ppbVar23 = ppbVar23 + 0x18;
                  lVar10 = FUN_18017ea70();
                  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                  if (ppbVar23 == (byte **)0x0) {
                    bVar4 = false;
                  }
                  else {
                    local_47f8 = 0;
                    cVar6 = FUN_1804514f0(&local_47f8,ppbVar23,4);
                    if (cVar6 == '\0') {
                      bVar4 = false;
                    }
                    else {
                      local_47d8 = local_47f8;
                      bVar4 = true;
                    }
                  }
                  uVar22 = local_47d8;
                  lVar10 = FUN_18017ea70();
                  iVar17 = *(int *)(lVar10 + 4);
                  if (iVar17 != 0) {
                    iVar17 = iVar17 + -1;
                    *(int *)(lVar10 + 4) = iVar17;
                  }
                  uVar28 = 0;
                  if (bVar4) {
                    uVar28 = uVar22;
                  }
                  if ((0xfffffffd < uVar28 - 1) || ((uVar28 & 0x7fff) < 0x4000)) {
LAB_1803c7847:
                    iVar17 = local_46a4;
                    goto LAB_1803c784e;
                  }
                  lVar30 = FUN_1803d4150(iVar17,uVar28);
                  lVar10 = local_47f0;
                  local_4828 = (undefined **)((ulonglong)local_4828 & 0xffffffffffffff00);
                  cVar6 = FUN_1803c36b0(local_47f0,lVar30,*(undefined4 *)(local_4698._0_8_ + 0x148),
                                        0);
                  if (cVar6 == '\0') {
                    iVar17 = local_46a4;
                  }
                  else {
                    iVar17 = DAT_180c71c78;
                    if (DAT_180c71c78 == 0) {
                      UVar9 = GetTickCount64();
                      if (UVar9 < DAT_180c71c80) {
                        iVar17 = 0;
                      }
                      else {
                        local_46a0 = (byte **)&DAT_1809b9a30;
                        iVar17 = FUN_1805f68d0(&DAT_1809b9a30);
                        if (iVar17 != 0) goto LAB_1803c7e28;
                        if (DAT_1809b9a7c == 0x7fffffff) {
                          DAT_1809b9a7c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                          FUN_1805f6d44(6);
                        }
                        if ((DAT_180c71c78 == 0) && (DAT_180c71c80 <= UVar9)) {
                          DAT_180c71c78 = FUN_1804174b0("CEntityInstance",0xa8a45978);
                          if (DAT_180c71c78 == 0) {
                            DAT_180c71c80 = UVar9 + 1000;
                          }
                          else {
                            DAT_180c71c80 = 0xffffffffffffffff;
                          }
                        }
                        iVar17 = DAT_180c71c78;
                        FUN_1805f68fc(&DAT_1809b9a30);
                      }
                    }
                    lVar10 = FUN_18017ea70();
                    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                    if (iVar17 + lVar30 == 0) {
                      bVar4 = false;
                    }
                    else {
                      local_46a0 = (byte **)0x0;
                      cVar6 = FUN_1804514f0(&local_46a0,iVar17 + lVar30,8);
                      if (cVar6 == '\0') {
                        bVar4 = false;
                      }
                      else {
                        local_4688 = local_46a0;
                        bVar4 = true;
                      }
                    }
                    ppbVar23 = local_4688;
                    lVar10 = FUN_18017ea70();
                    if (*(int *)(lVar10 + 4) != 0) {
                      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                    }
                    if (bVar4) {
                      ppbVar23 = ppbVar23 + 2;
                      lVar10 = FUN_18017ea70();
                      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                      if (ppbVar23 != (byte **)0x0) goto LAB_1803c76d6;
                      bVar4 = false;
                      uVar22 = (uint)local_47c0;
                    }
                    else {
                      lVar10 = FUN_18017ea70();
                      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                      ppbVar23 = (byte **)&DAT_00000010;
LAB_1803c76d6:
                      local_47f8 = 0;
                      cVar6 = FUN_1804514f0(&local_47f8,ppbVar23,4);
                      if (cVar6 == '\0') {
                        bVar4 = false;
                        uVar22 = (uint)local_47c0;
                      }
                      else {
                        local_47c0 = (byte **)CONCAT44(local_47c0._4_4_,local_47f8);
                        bVar4 = true;
                        uVar22 = local_47f8;
                      }
                    }
                    lVar10 = FUN_18017ea70();
                    if (*(int *)(lVar10 + 4) != 0) {
                      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                    }
                    if (!bVar4) goto LAB_1803c7847;
                    iVar17 = local_46a4;
                    if (uVar22 != uVar28) goto LAB_1803c784e;
                    iVar17 = local_46a4 + 1;
                    local_46a4 = iVar17;
                    lVar10 = FUN_18017ea70();
                    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                    if (lVar11 + 0x20 == 0) {
                      bVar4 = false;
                    }
                    else {
                      local_46a0 = (byte **)0x0;
                      cVar6 = FUN_1804514f0(&local_46a0,lVar11 + 0x20,8);
                      if (cVar6 == '\0') {
                        bVar4 = false;
                      }
                      else {
                        local_4790 = local_46a0;
                        bVar4 = true;
                      }
                    }
                    ppbVar23 = local_4790;
                    lVar10 = FUN_18017ea70();
                    ppbVar2 = local_4678[0];
                    if (*(int *)(lVar10 + 4) != 0) {
                      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                    }
                    ppbVar15 = (byte **)0x0;
                    if (bVar4) {
                      ppbVar15 = ppbVar23;
                    }
                    if (ppbVar15 == local_4678[0]) {
                      lVar10 = FUN_18017ea70();
                      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                      if (lVar11 + 0x50 == 0) {
                        bVar4 = false;
                      }
                      else {
                        local_47f8 = 0;
                        cVar6 = FUN_1804514f0(&local_47f8,lVar11 + 0x50,4);
                        if (cVar6 == '\0') {
                          bVar4 = false;
                        }
                        else {
                          local_47d4 = local_47f8;
                          bVar4 = true;
                        }
                      }
                      uVar22 = local_47d4;
                      lVar10 = FUN_18017ea70();
                      if (*(int *)(lVar10 + 4) != 0) {
                        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                      }
                      uVar18 = 0;
                      uVar28 = uVar18;
                      if (bVar4) {
                        uVar28 = uVar22;
                      }
                      if (uVar28 != uVar25) goto LAB_1803c7816;
                    }
                    else {
LAB_1803c7816:
                      uVar18 = 1;
                    }
                    local_47e4 = local_47e4 + uVar18;
                    cVar6 = FUN_18027c510(lVar11,ppbVar2,&local_47c4);
                    lVar10 = local_47f0;
                    if (cVar6 == '\0') {
                      local_46ac = local_46ac + 1;
                    }
                  }
                }
                iVar27 = iVar27 + 1;
              } while (iVar27 < local_res18[0]);
              if (iVar17 != 0) {
                if (local_46ac == 0) {
                  uVar16 = *(undefined8 *)(local_4698._0_8_ + 0x150);
                }
                else {
                  uVar16 = 0;
                }
                *(undefined8 *)(lVar10 + 0x1030) = uVar16;
              }
              uVar22 = (uint)local_46b0[0];
              lVar10 = local_4698._0_8_;
            }
            iVar27 = local_46ac;
            uVar25 = local_47e4;
            UVar9 = GetTickCount64();
            if ((iVar17 != 0) && (DAT_180c71c88 <= UVar9)) {
              DAT_180c71c88 = UVar9 + 5000;
              LOCK();
              UNLOCK();
              FUN_18063ab10(local_658,0,0x600);
              local_4800 = *(undefined4 *)(lVar10 + 4);
              local_4808 = CONCAT44(local_4808._4_4_,uVar22);
              local_4820 = (char *)CONCAT44(local_4820._4_4_,iVar17);
              local_4828 = (undefined **)CONCAT44(local_4828._4_4_,*(undefined4 *)(lVar10 + 0x148));
              local_4818 = uVar25;
              local_4810 = iVar27;
              FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                            "definition=%d matched=%d changed=%d failed=%d material=%d rgba=0x%x");
              local_4828 = &PTR_180700558;
              if (local_658[0] != '\0') {
                local_4828 = (undefined **)&DAT_1806bcfc0;
              }
              local_4820 = local_658;
              FUN_1800f6900(0);
            }
          }
        }
      }
      else {
        bVar5 = 0;
        local_46b0[0] = 0;
        iVar17 = 0;
        if (0 < local_res18[0]) {
          ppbVar23 = local_4760;
          do {
            param_2 = param_2 + (longlong)iVar17 * 0x70;
            lVar10 = FUN_18017ea70();
            *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
            bVar4 = false;
            if (param_2 + 0x18 != 0) {
              local_46a0 = (byte **)0x0;
              cVar6 = FUN_1804514f0(&local_46a0,param_2 + 0x18,8);
              if (cVar6 == '\0') {
                bVar4 = false;
              }
              else {
                bVar4 = true;
                ppbVar23 = local_46a0;
              }
            }
            lVar10 = FUN_18017ea70();
            if (*(int *)(lVar10 + 4) != 0) {
              *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
            }
            if ((!bVar4) || (ppbVar23 == (byte **)0x0)) {
LAB_1803c7ce9:
              lVar10 = local_47f0;
            }
            else {
              lVar10 = FUN_18017ea70();
              *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
              if (ppbVar23 + 0x18 == (byte **)0x0) {
                bVar4 = false;
              }
              else {
                local_47f8 = 0;
                cVar6 = FUN_1804514f0(&local_47f8,ppbVar23 + 0x18,4);
                if (cVar6 == '\0') {
                  bVar4 = false;
                }
                else {
                  local_47d8 = local_47f8;
                  bVar4 = true;
                }
              }
              uVar22 = local_47d8;
              lVar10 = FUN_18017ea70();
              iVar27 = *(int *)(lVar10 + 4);
              if (iVar27 != 0) {
                iVar27 = iVar27 + -1;
                *(int *)(lVar10 + 4) = iVar27;
              }
              uVar25 = 0;
              if (bVar4) {
                uVar25 = uVar22;
              }
              if ((0xfffffffd < uVar25 - 1) || ((uVar25 & 0x7fff) < 0x4000)) {
LAB_1803c7ce0:
                pbVar24 = (byte *)local_4698._0_8_;
                goto LAB_1803c7ce9;
              }
              lVar11 = FUN_1803d4150(iVar27,uVar25);
              lVar10 = local_47f0;
              local_4828 = (undefined **)((ulonglong)local_4828 & 0xffffffffffffff00);
              pbVar24 = (byte *)local_4698._0_8_;
              cVar6 = FUN_1803c36b0(local_47f0,lVar11,*(undefined4 *)(local_4698._0_8_ + 0x148),0);
              iVar27 = DAT_180c71cb8;
              if (cVar6 != '\0') {
                if ((DAT_180c71cb8 == 0) && (UVar9 = GetTickCount64(), DAT_180c71ca8 <= UVar9)) {
                  local_4678[0] = (byte **)&DAT_1809b9ad0;
                  iVar27 = FUN_1805f68d0(&DAT_1809b9ad0);
                  if (iVar27 != 0) {
LAB_1803c7e28:
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(5);
                  }
                  if (DAT_1809b9b1c == 0x7fffffff) {
                    DAT_1809b9b1c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(6);
                  }
                  if ((DAT_180c71cb8 == 0) && (DAT_180c71ca8 <= UVar9)) {
                    DAT_180c71cb8 = FUN_1804174b0("CEntityInstance",0xa8a45978);
                    if (DAT_180c71cb8 == 0) {
                      DAT_180c71ca8 = UVar9 + 1000;
                    }
                    else {
                      DAT_180c71ca8 = 0xffffffffffffffff;
                    }
                  }
                  iVar27 = DAT_180c71cb8;
                  FUN_1805f68fc(&DAT_1809b9ad0);
                }
                lVar10 = FUN_18017ea70();
                *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                if (iVar27 + lVar11 == 0) {
                  bVar4 = false;
                }
                else {
                  local_46a0 = (byte **)0x0;
                  cVar6 = FUN_1804514f0(&local_46a0,iVar27 + lVar11,8);
                  if (cVar6 == '\0') {
                    bVar4 = false;
                  }
                  else {
                    local_47b0 = local_46a0;
                    bVar4 = true;
                  }
                }
                ppbVar2 = local_47b0;
                lVar10 = FUN_18017ea70();
                if (*(int *)(lVar10 + 4) != 0) {
                  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                }
                if ((bVar4) && (ppbVar2 != (byte **)0x0)) {
                  ppbVar2 = ppbVar2 + 2;
                  lVar10 = FUN_18017ea70();
                  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                  if (ppbVar2 == (byte **)0x0) {
                    bVar4 = false;
                    uVar22 = (uint)local_47c0;
                  }
                  else {
                    local_47f8 = 0;
                    cVar6 = FUN_1804514f0(&local_47f8,ppbVar2,4);
                    if (cVar6 == '\0') {
                      bVar4 = false;
                      uVar22 = (uint)local_47c0;
                    }
                    else {
                      local_47c0 = (byte **)CONCAT44(local_47c0._4_4_,local_47f8);
                      bVar4 = true;
                      uVar22 = local_47f8;
                    }
                  }
                  lVar10 = FUN_18017ea70();
                  if (*(int *)(lVar10 + 4) != 0) {
                    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                  }
                  if ((bVar4) && (uVar22 == uVar25)) {
                    bVar5 = 1;
                    local_46b0[0] = 1;
                    lVar10 = FUN_18017ea70();
                    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                    if (param_2 + 0x20 == 0) {
                      bVar4 = false;
                    }
                    else {
                      local_46a0 = (byte **)0x0;
                      cVar6 = FUN_1804514f0(&local_46a0,param_2 + 0x20,8);
                      if (cVar6 == '\0') {
                        bVar4 = false;
                      }
                      else {
                        local_4688 = local_46a0;
                        bVar4 = true;
                      }
                    }
                    ppbVar2 = local_4688;
                    lVar10 = FUN_18017ea70();
                    if (*(int *)(lVar10 + 4) != 0) {
                      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                    }
                    ppbVar15 = (byte **)0x0;
                    if (bVar4) {
                      ppbVar15 = ppbVar2;
                    }
                    cVar6 = FUN_18028b7f0(ppbVar15);
                    if (cVar6 == '\0') {
                      cVar6 = FUN_18028b510(ppbVar15);
                      if (cVar6 == '\0') {
                        pbVar24 = (byte *)local_4698._0_8_;
                        if (*(int *)(local_4698._0_8_ + 0x140) < 0) {
                          if (*(byte *)(local_4698._0_8_ + 0x138) == 0) {
                            local_47f8 = 0xffffffff;
                          }
                          else {
                            local_47f8 = *(uint *)(local_4698._0_8_ + 0x13c);
                          }
                        }
                        else {
                          local_47f8 = *(uint *)(local_4698._0_8_ + 0x144);
                        }
                        if (param_2 + 0x50 == 0) goto LAB_1803c7ce9;
                        lVar10 = FUN_18017ea70();
                        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                        FUN_1801ad800(param_2 + 0x50,&local_47f8);
                        lVar10 = FUN_18017ea70();
                        if (*(int *)(lVar10 + 4) != 0) {
                          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                        }
                        lVar10 = local_47f0;
                        goto LAB_1803c7cee;
                      }
                      FUN_18028b770(param_2);
                    }
                    goto LAB_1803c7ce0;
                  }
                }
                bVar5 = local_46b0[0];
                goto LAB_1803c7ce0;
              }
              bVar5 = local_46b0[0];
            }
LAB_1803c7cee:
            iVar17 = iVar17 + 1;
            if (local_res18[0] <= iVar17) goto LAB_1803c7d91;
            param_2 = local_47d0;
          } while( true );
        }
      }
    }
    else {
      uVar16 = 0;
      local_47e4 = 0;
      local_47d4 = 0;
      local_46ac = 0;
      local_47c8 = 0;
      local_47c4 = local_47c4 & 0xffffff00;
      FUN_18063ab10(local_4668,0,0x4000);
      uVar31 = FUN_1803c94f0(local_4668);
      local_46a0 = (byte **)0x0;
      local_46c0 = local_4668;
      local_46c8 = 0;
      local_4678[0] = (byte **)0x80;
      local_46a7 = '\0';
      local_4758 = &local_46c8;
      local_4750 = local_4678;
      local_4748 = &local_46a7;
      local_4740 = &local_46a0;
      local_4738 = local_res18;
      local_4730 = &local_46c0;
      local_4728 = &local_46ac;
      local_4788 = FUN_1803d4150(uVar31,*(undefined4 *)(param_1 + 0x990));
      for (pbVar19 = pbVar24; pbVar19 != pbVar24 + 0x3c; pbVar19 = pbVar19 + 0x14) {
        if (*pbVar19 != 0) {
          if (pbVar19[7] == 0) {
            bVar5 = pbVar19[1];
            local_47f8 = 0x4030200;
            local_47f4 = 0x9080605;
            if (10 < bVar5) {
              if (0x12 < bVar5) goto LAB_1803c6553;
              bVar5 = *(byte *)((longlong)&local_47f8 + (ulonglong)(bVar5 - 0xb));
            }
            if ((bVar5 != 6) || (pbVar19[0xf] == 0)) goto LAB_1803c6553;
          }
          if (pbVar19[8] != 0) {
            local_47e7 = '\x01';
            goto LAB_1803c6561;
          }
        }
LAB_1803c6553:
      }
      local_47e7 = '\0';
LAB_1803c6561:
      if (pbVar24 != pbVar24 + 0x3c) {
        pbVar19 = pbVar24 + 1;
        do {
          if (pbVar19[-1] != 0) {
            if (pbVar19[6] == 0) {
              bVar5 = *pbVar19;
              local_47f8 = 0x4030200;
              local_47f4 = 0x9080605;
              if (10 < bVar5) {
                if (0x12 < bVar5) goto LAB_1803c65af;
                bVar5 = *(byte *)((longlong)&local_47f8 + (ulonglong)(bVar5 - 0xb));
              }
              if ((bVar5 != 6) || (pbVar19[0xe] == 0)) goto LAB_1803c65af;
            }
            if (pbVar19[7] == 0) {
              local_47e6 = '\x01';
              goto LAB_1803c65c1;
            }
          }
LAB_1803c65af:
          pbVar1 = pbVar19 + 0x13;
          pbVar19 = pbVar19 + 0x14;
        } while (pbVar1 != pbVar24 + 0x3c);
      }
      local_47e6 = '\0';
LAB_1803c65c1:
      local_47f8 = 0;
      if (0 < local_res18[0]) {
        uVar32 = 0x3f800000;
        do {
          ppbVar23 = (byte **)((longlong)(int)local_47f8 * 0x70 + param_2);
          local_47b0 = ppbVar23;
          lVar10 = FUN_18017ea70();
          *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
          if (ppbVar23 + 3 == (byte **)0x0) {
            bVar4 = false;
          }
          else {
            local_47c0 = (byte **)0x0;
            cVar6 = FUN_1804514f0(&local_47c0,ppbVar23 + 3,8);
            if (cVar6 == '\0') {
              bVar4 = false;
            }
            else {
              local_4768 = local_47c0;
              bVar4 = true;
            }
          }
          ppbVar2 = local_4768;
          lVar10 = FUN_18017ea70();
          if (*(int *)(lVar10 + 4) != 0) {
            *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
          }
          if ((bVar4) && (ppbVar2 != (byte **)0x0)) {
            lVar10 = FUN_18017ea70();
            *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
            if (ppbVar2 + 0x18 == (byte **)0x0) {
              bVar4 = false;
            }
            else {
              local_47c0 = (byte **)((ulonglong)local_47c0 & 0xffffffff00000000);
              cVar6 = FUN_1804514f0(&local_47c0,ppbVar2 + 0x18,4);
              if (cVar6 == '\0') {
                bVar4 = false;
              }
              else {
                local_47d8 = (uint)local_47c0;
                bVar4 = true;
              }
            }
            uVar22 = local_47d8;
            lVar10 = FUN_18017ea70();
            iVar17 = *(int *)(lVar10 + 4);
            if (iVar17 != 0) {
              iVar17 = iVar17 + -1;
              *(int *)(lVar10 + 4) = iVar17;
            }
            uVar25 = 0;
            if (bVar4) {
              uVar25 = uVar22;
            }
            if ((uVar25 - 1 < 0xfffffffe) && (0x3fff < (uVar25 & 0x7fff))) {
              lVar10 = FUN_1803d4150(iVar17,uVar25);
              local_4828 = (undefined **)CONCAT71(local_4828._1_7_,1);
              cVar6 = FUN_1803c36b0(local_47f0,lVar10,*(undefined4 *)(local_4698._0_8_ + 0x148),0);
              if (cVar6 != '\0') {
                lVar11 = FUN_18017ea70();
                *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
                if (ppbVar23 + 4 == (byte **)0x0) {
                  bVar4 = false;
                }
                else {
                  local_47c0 = (byte **)0x0;
                  cVar6 = FUN_1804514f0(&local_47c0,ppbVar23 + 4,8);
                  if (cVar6 == '\0') {
                    bVar4 = false;
                  }
                  else {
                    local_4790 = local_47c0;
                    bVar4 = true;
                  }
                }
                ppbVar15 = local_4790;
                lVar11 = FUN_18017ea70();
                if (*(int *)(lVar11 + 4) != 0) {
                  *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
                }
                local_4688 = (byte **)0x0;
                if (bVar4) {
                  local_4688 = ppbVar15;
                }
                cVar6 = FUN_18028ca20();
                lVar11 = local_4788;
                if (cVar6 == '\0') {
                  if ((DAT_180bb8ac8 == (byte **)0x0) || (local_4688 != DAT_180bb8ac8)) {
                    local_47e8 = '\0';
                  }
                  else {
                    local_47e8 = '\x01';
                  }
                  pbVar24 = (byte *)local_4698._0_8_;
                  if (lVar10 == local_4788) {
                    if (0 < *(int *)(local_4698._0_8_ + 0x134)) {
                      pbVar24 = (byte *)(local_4698._0_8_ + 0x3c);
                    }
                  }
                  else if (*(int *)(local_4698._0_8_ + 0x134) == 0) {
                    pbVar24 = (byte *)(local_4698._0_8_ + 0xb4);
                  }
                  if (pbVar24 != pbVar24 + 0x3c) {
                    pbVar19 = pbVar24 + 1;
                    do {
                      if (pbVar19[-1] != 0) {
                        if (pbVar19[6] == 0) {
                          bVar5 = *pbVar19;
                          local_47a8[0] = 0;
                          local_47a8[1] = 2;
                          local_47a8[2] = 3;
                          local_47a8[3] = 4;
                          local_47a8[4] = 5;
                          local_47a8[5] = 6;
                          local_47a8[6] = 8;
                          local_47a8[7] = 9;
                          if (10 < bVar5) {
                            if (0x12 < bVar5) goto LAB_1803c682b;
                            bVar5 = local_47a8[bVar5 - 0xb];
                          }
                          if ((bVar5 != 6) || (pbVar19[0xe] == 0)) goto LAB_1803c682b;
                        }
                        cVar6 = '\x01';
                        goto LAB_1803c683a;
                      }
LAB_1803c682b:
                      pbVar1 = pbVar19 + 0x13;
                      pbVar19 = pbVar19 + 0x14;
                    } while (pbVar1 != pbVar24 + 0x3c);
                  }
                  cVar6 = '\0';
LAB_1803c683a:
                  local_47c4 = local_47c4 & 0xff;
                  if (lVar10 == local_4788) {
                    local_47c4 = 1;
                  }
                  local_4828 = (undefined **)CONCAT71(local_4828._1_7_,cVar6);
                  cVar7 = FUN_1803c48d0(local_47f0,ppbVar2,uVar25);
                  if (cVar7 == '\0') {
                    local_47e4 = local_47e4 + 1;
LAB_1803c6871:
                    local_46ac = local_46ac + 1;
                  }
                  else if ((((cVar6 == '\0') && (lVar10 != lVar11)) &&
                           (*(int *)(local_4698._0_8_ + 0x134) == 0)) &&
                          ((local_47e7 != '\0' && (local_47e6 != '\0')))) {
                    FUN_1803c7e60(&local_4758,ppbVar23,0);
                  }
                  else {
                    local_467c = 0;
                    local_46a8 = 0;
                    local_46a6[0] = '\0';
                    local_4680 = *(uint *)(pbVar24 + 4);
                    pbVar19 = pbVar24;
                    local_46b8 = pbVar24;
                    local_46b0[0] = FUN_18028c7b0(pbVar24[1]);
                    iVar17 = 0;
                    bVar5 = 0;
                    if (pbVar24 != pbVar24 + 0x3c) {
                      pbVar19 = pbVar24 + 0xf;
                      do {
                        if (pbVar19[-0xf] != 0) {
                          if (pbVar19[-8] == 0) {
                            bVar5 = pbVar19[-0xe];
                            local_47a8[8] = 0;
                            local_47a8[9] = 2;
                            local_47a8[10] = 3;
                            local_47a8[0xb] = 4;
                            local_47a8[0xc] = 5;
                            local_47a8[0xd] = 6;
                            local_47a8[0xe] = 8;
                            local_47a8[0xf] = 9;
                            if (10 < bVar5) {
                              if (0x12 < bVar5) goto LAB_1803c6a91;
                              bVar5 = local_47a8[(ulonglong)(bVar5 - 0xb) + 8];
                            }
                            if ((bVar5 != 6) || (*pbVar19 == 0)) goto LAB_1803c6a91;
                          }
                          iVar17 = *(int *)(pbVar19 + 1);
                          bVar5 = pbVar19[-0xe];
                          local_4718 = pbVar19 + -0xf;
                          local_4710 = &local_4688;
                          local_4708 = &local_46b8;
                          local_4700 = &local_46a8;
                          local_46f8 = local_46a6;
                          local_46f0 = local_46b0;
                          local_46e8 = &local_4680;
                          local_46e0 = &local_467c;
                          uVar29 = (ulonglong)*(uint *)(pbVar19 + -0xb);
                          local_47c0 = (byte **)CONCAT44(local_47c0._4_4_,*(uint *)(pbVar19 + -0xb))
                          ;
                          uVar8 = FUN_18028c7b0(bVar5);
                          local_46a4 = CONCAT31(local_46a4._1_3_,uVar8);
                          local_4778 = &local_4718;
                          piStack_4770 = &local_46a4;
                          FUN_1803c9ca0(uVar8,uVar29 & 0xffffffff,*(undefined4 *)(pbVar19 + -3));
                          if (iVar17 - 1U < 3) {
LAB_1803c6a67:
                            if ((iVar17 != 0) && (local_47c0._3_1_ != '\0')) {
                              local_4828 = (undefined **)&local_47c0;
                              FUN_1803c9810(&local_4718,
                                            *(undefined1 *)
                                             ((longlong)std::_Ref_count_obj2<int>::vftable +
                                             (longlong)iVar17 + 0x1f),0);
                            }
                          }
                          else {
                            local_47a8[0x10] = 0;
                            local_47a8[0x11] = 2;
                            local_47a8[0x12] = 3;
                            local_47a8[0x13] = 4;
                            local_47a8[0x14] = 5;
                            local_47a8[0x15] = 6;
                            local_47a8[0x16] = 8;
                            local_47a8[0x17] = 9;
                            if (10 < bVar5) {
                              if (bVar5 < 0x13) {
                                bVar5 = local_47a8[(ulonglong)(bVar5 - 0xb) + 0x10];
                              }
                              else {
                                bVar5 = 2;
                              }
                            }
                            uVar29 = 0;
                            do {
                              if ((&DAT_1807d1130)[uVar29] == bVar5) {
                                iVar17 = (int)uVar29 + 1;
                                goto LAB_1803c6a67;
                              }
                              uVar29 = uVar29 + 1;
                            } while (uVar29 < 3);
                          }
                        }
LAB_1803c6a91:
                        pbVar1 = pbVar19 + 5;
                        pbVar19 = pbVar19 + 0x14;
                      } while (pbVar1 != pbVar24 + 0x3c);
                      pbVar19 = local_46b8;
                      iVar17 = local_467c;
                      bVar5 = local_46a8;
                    }
                    cVar6 = local_47e8;
                    if (local_47e8 == '\0') {
                      if (iVar17 == 0) {
                        pbVar19 = (byte *)0x0;
                        local_46b8 = (byte *)0x0;
                        local_668[0] = 1;
                        local_668[1] = 0;
                        piVar21 = local_668;
                        do {
                          pbVar1 = pbVar24 + (longlong)*piVar21 * 0x14;
                          if (((*pbVar1 != 0) && (pbVar1[8] == 0)) && (pbVar1[7] != 0)) {
                            local_46b8 = pbVar1;
                            pbVar19 = pbVar1;
                          }
                          piVar21 = piVar21 + 1;
                        } while (piVar21 != local_668 + 2);
                        if (pbVar19 == (byte *)0x0) goto LAB_1803c6877;
                        local_4680 = *(uint *)(pbVar19 + 4);
                        local_46b0[0] = FUN_18028c7b0(pbVar19[1]);
                        local_47d4 = local_47d4 + 1;
                      }
                      else if (iVar17 != 1) goto LAB_1803c6871;
                    }
                    else {
                      local_467c = 1;
                    }
                    local_4820 = (char *)(CONCAT62(local_4820._2_6_,(ushort)bVar5) | 0x100);
                    local_4828 = (undefined **)((ulonglong)local_4828 & 0xffffffffffffff00);
                    puVar12 = (undefined8 *)FUN_18028c850(local_46d8,local_46b0[0],pbVar19[8]);
                    ppbVar23 = local_47b0;
                    local_47c0 = (byte **)*puVar12;
                    uStack_47b8 = puVar12[1];
                    local_47e4 = local_47e4 + 1;
                    if ((cVar6 == '\0') &&
                       (cVar7 = FUN_18027c510(local_47b0,local_47c0,&uStack_47b8), cVar7 == '\0')) {
                      bVar4 = false;
                    }
                    else {
                      bVar4 = true;
                    }
                    local_47c0 = (byte **)CONCAT44(local_47c0._4_4_,uVar32);
                    cVar7 = '\0';
                    if ((undefined *)((longlong)ppbVar23 + 0x54) != (undefined *)0x0) {
                      lVar11 = FUN_18017ea70();
                      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
                      cVar7 = FUN_1801ad800((undefined *)((longlong)ppbVar23 + 0x54),&local_47c0);
                      lVar11 = FUN_18017ea70();
                      if (*(int *)(lVar11 + 4) != 0) {
                        *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
                      }
                    }
                    if ((!bVar4) || (cVar7 == '\0')) goto LAB_1803c6871;
                    if (lVar10 == local_4788) {
                      if (cVar6 == '\0') {
                        uVar22 = 2;
                        if (local_46a6[0] == '\0') {
                          uVar22 = (uint)local_46a8;
                        }
                        local_47c8 = local_47c8 |
                                     1 << (uVar22 + (int)(((longlong)local_46b8 - (longlong)pbVar24)
                                                         / 0x14) * 3 & 0x1f);
                      }
                      else {
                        local_47c8 = local_47c8 | 0x200;
                      }
                    }
                    if (local_46a6[0] != '\0') {
                      local_47e0[0] = 0;
                      local_47e0[1] = 2;
                      local_47e0[2] = 3;
                      local_47e0[3] = 4;
                      local_47e0[4] = 5;
                      local_47e0[5] = 6;
                      local_47e0[6] = 8;
                      local_47e0[7] = 9;
                      bVar5 = local_46b0[0];
                      if (10 < local_46b0[0]) {
                        if (local_46b0[0] < 0x13) {
                          bVar5 = local_47e0[local_46b0[0] - 0xb];
                        }
                        else {
                          bVar5 = 2;
                        }
                      }
                      uVar29 = 0;
                      do {
                        if ((&DAT_1807d1130)[uVar29] == bVar5) {
                          if ((int)uVar29 != -1) {
                            iVar17 = 2;
                            goto LAB_1803c6cff;
                          }
                          break;
                        }
                        uVar29 = uVar29 + 1;
                      } while (uVar29 < 3);
                    }
                    if ((local_46a8 == 0) && (local_46b8 != pbVar24 + 0x28)) {
                      iVar17 = 0;
                    }
                    else {
                      iVar17 = 1;
                    }
LAB_1803c6cff:
                    if (cVar6 == '\0') {
                      iVar27 = 5;
                      if (local_46b8[8] != 0) {
                        iVar27 = 1;
                      }
                      FUN_1803c7e60(&local_4758,ppbVar23,iVar27 + iVar17);
                    }
                    else {
                      FUN_1803c7e60(&local_4758,ppbVar23,4);
                    }
                  }
                }
              }
            }
LAB_1803c6877:
            param_2 = local_47d0;
          }
          local_47f8 = local_47f8 + 1;
        } while ((int)local_47f8 < local_res18[0]);
      }
      if (local_46a7 == '\0') {
        puVar20 = local_46c0;
        if (local_46c0 != local_46c0 + local_46c8 * 0x80) {
          do {
            puVar20 = puVar20 + 0x80;
            if (puVar20 == local_46c0 + local_46c8 * 0x80) goto LAB_1803c71be;
          } while (*(int *)(puVar20 + -8) <= *(int *)(puVar20 + 0x78));
          lVar10 = 0;
          uVar29 = 0;
          puVar20 = local_46c0;
          if (local_46c8 != 0) {
            lVar30 = 0;
            lVar11 = 0;
            do {
              puVar3 = puVar20 + lVar11;
              if (*(int *)(puVar3 + 0x78) == 0) {
                lVar14 = *(longlong *)(puVar20 + lVar30 + 0x70);
                lVar10 = lVar10 + 1;
                lVar30 = lVar30 + 0x80;
                if ((lVar14 != 0) && (puVar3 != (undefined1 *)0x0)) {
                  lVar13 = FUN_18017ea70();
                  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
                  cVar6 = FUN_1804514c0(lVar14,puVar3,0x70);
                  lVar14 = FUN_18017ea70();
                  if (*(int *)(lVar14 + 4) != 0) {
                    *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
                  }
                  puVar20 = local_46c0;
                  if (cVar6 != '\0') goto LAB_1803c6dff;
                }
                local_46ac = local_46ac + 1;
              }
LAB_1803c6dff:
              uVar29 = uVar29 + 1;
              lVar11 = lVar11 + 0x80;
            } while (uVar29 < local_46c8);
          }
          uVar29 = 0;
          if (local_46c8 != 0) {
            lVar11 = lVar10 << 7;
            lVar30 = 0;
            do {
              puVar3 = puVar20 + lVar30;
              if (*(int *)(puVar3 + 0x78) == 1) {
                lVar14 = *(longlong *)(puVar20 + lVar11 + 0x70);
                lVar10 = lVar10 + 1;
                lVar11 = lVar11 + 0x80;
                if ((lVar14 != 0) && (puVar3 != (undefined1 *)0x0)) {
                  lVar13 = FUN_18017ea70();
                  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
                  cVar6 = FUN_1804514c0(lVar14,puVar3,0x70);
                  lVar14 = FUN_18017ea70();
                  if (*(int *)(lVar14 + 4) != 0) {
                    *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
                  }
                  puVar20 = local_46c0;
                  if (cVar6 != '\0') goto LAB_1803c6e84;
                }
                local_46ac = local_46ac + 1;
              }
LAB_1803c6e84:
              uVar29 = uVar29 + 1;
              lVar30 = lVar30 + 0x80;
            } while (uVar29 < local_46c8);
          }
          uVar29 = 0;
          if (local_46c8 != 0) {
            lVar11 = lVar10 << 7;
            lVar30 = 0;
            do {
              puVar3 = puVar20 + lVar30;
              if (*(int *)(puVar3 + 0x78) == 2) {
                lVar14 = *(longlong *)(puVar20 + lVar11 + 0x70);
                lVar10 = lVar10 + 1;
                lVar11 = lVar11 + 0x80;
                if ((lVar14 != 0) && (puVar3 != (undefined1 *)0x0)) {
                  lVar13 = FUN_18017ea70();
                  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
                  cVar6 = FUN_1804514c0(lVar14,puVar3,0x70);
                  lVar14 = FUN_18017ea70();
                  if (*(int *)(lVar14 + 4) != 0) {
                    *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
                  }
                  puVar20 = local_46c0;
                  if (cVar6 != '\0') goto LAB_1803c6f0f;
                }
                local_46ac = local_46ac + 1;
              }
LAB_1803c6f0f:
              uVar29 = uVar29 + 1;
              lVar30 = lVar30 + 0x80;
            } while (uVar29 < local_46c8);
          }
          uVar29 = 0;
          if (local_46c8 != 0) {
            lVar11 = lVar10 << 7;
            lVar30 = 0;
            do {
              puVar3 = puVar20 + lVar30;
              if (*(int *)(puVar3 + 0x78) == 3) {
                lVar14 = *(longlong *)(puVar20 + lVar11 + 0x70);
                lVar10 = lVar10 + 1;
                lVar11 = lVar11 + 0x80;
                if ((lVar14 != 0) && (puVar3 != (undefined1 *)0x0)) {
                  lVar13 = FUN_18017ea70();
                  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
                  cVar6 = FUN_1804514c0(lVar14,puVar3,0x70);
                  lVar14 = FUN_18017ea70();
                  if (*(int *)(lVar14 + 4) != 0) {
                    *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
                  }
                  puVar20 = local_46c0;
                  if (cVar6 != '\0') goto LAB_1803c6f94;
                }
                local_46ac = local_46ac + 1;
              }
LAB_1803c6f94:
              uVar29 = uVar29 + 1;
              lVar30 = lVar30 + 0x80;
            } while (uVar29 < local_46c8);
          }
          uVar29 = 0;
          if (local_46c8 != 0) {
            lVar11 = lVar10 << 7;
            lVar30 = 0;
            do {
              puVar3 = puVar20 + lVar30;
              if (*(int *)(puVar3 + 0x78) == 4) {
                lVar14 = *(longlong *)(puVar20 + lVar11 + 0x70);
                lVar10 = lVar10 + 1;
                lVar11 = lVar11 + 0x80;
                if ((lVar14 != 0) && (puVar3 != (undefined1 *)0x0)) {
                  lVar13 = FUN_18017ea70();
                  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
                  cVar6 = FUN_1804514c0(lVar14,puVar3,0x70);
                  lVar14 = FUN_18017ea70();
                  if (*(int *)(lVar14 + 4) != 0) {
                    *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
                  }
                  puVar20 = local_46c0;
                  if (cVar6 != '\0') goto LAB_1803c701f;
                }
                local_46ac = local_46ac + 1;
              }
LAB_1803c701f:
              uVar29 = uVar29 + 1;
              lVar30 = lVar30 + 0x80;
            } while (uVar29 < local_46c8);
          }
          uVar29 = 0;
          if (local_46c8 != 0) {
            lVar11 = lVar10 << 7;
            lVar30 = 0;
            do {
              puVar3 = puVar20 + lVar30;
              if (*(int *)(puVar3 + 0x78) == 5) {
                lVar14 = *(longlong *)(puVar20 + lVar11 + 0x70);
                lVar10 = lVar10 + 1;
                lVar11 = lVar11 + 0x80;
                if ((lVar14 != 0) && (puVar3 != (undefined1 *)0x0)) {
                  lVar13 = FUN_18017ea70();
                  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
                  cVar6 = FUN_1804514c0(lVar14,puVar3,0x70);
                  lVar14 = FUN_18017ea70();
                  if (*(int *)(lVar14 + 4) != 0) {
                    *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
                  }
                  puVar20 = local_46c0;
                  if (cVar6 != '\0') goto LAB_1803c70a4;
                }
                local_46ac = local_46ac + 1;
              }
LAB_1803c70a4:
              uVar29 = uVar29 + 1;
              lVar30 = lVar30 + 0x80;
            } while (uVar29 < local_46c8);
          }
          uVar29 = 0;
          if (local_46c8 != 0) {
            lVar11 = lVar10 << 7;
            lVar30 = 0;
            do {
              puVar3 = puVar20 + lVar30;
              if (*(int *)(puVar3 + 0x78) == 6) {
                lVar14 = *(longlong *)(puVar20 + lVar11 + 0x70);
                lVar10 = lVar10 + 1;
                lVar11 = lVar11 + 0x80;
                if ((lVar14 != 0) && (puVar3 != (undefined1 *)0x0)) {
                  lVar13 = FUN_18017ea70();
                  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
                  cVar6 = FUN_1804514c0(lVar14,puVar3,0x70);
                  lVar14 = FUN_18017ea70();
                  if (*(int *)(lVar14 + 4) != 0) {
                    *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
                  }
                  puVar20 = local_46c0;
                  if (cVar6 != '\0') goto LAB_1803c712f;
                }
                local_46ac = local_46ac + 1;
              }
LAB_1803c712f:
              uVar29 = uVar29 + 1;
              lVar30 = lVar30 + 0x80;
            } while (uVar29 < local_46c8);
          }
          uVar29 = 0;
          if (local_46c8 != 0) {
            lVar10 = lVar10 << 7;
            lVar11 = 0;
            do {
              puVar3 = puVar20 + lVar11;
              if (*(int *)(puVar3 + 0x78) == 7) {
                lVar30 = *(longlong *)(puVar20 + lVar10 + 0x70);
                lVar10 = lVar10 + 0x80;
                if ((lVar30 != 0) && (puVar3 != (undefined1 *)0x0)) {
                  lVar14 = FUN_18017ea70();
                  *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
                  cVar6 = FUN_1804514c0(lVar30,puVar3,0x70);
                  lVar30 = FUN_18017ea70();
                  if (*(int *)(lVar30 + 4) != 0) {
                    *(int *)(lVar30 + 4) = *(int *)(lVar30 + 4) + -1;
                  }
                  puVar20 = local_46c0;
                  if (cVar6 != '\0') goto LAB_1803c71ae;
                }
                local_46ac = local_46ac + 1;
              }
LAB_1803c71ae:
              uVar29 = uVar29 + 1;
              lVar11 = lVar11 + 0x80;
            } while (uVar29 < local_46c8);
          }
        }
      }
      else {
        local_46ac = local_46ac + 1;
      }
LAB_1803c71be:
      lVar10 = local_47f0;
      uVar31 = local_4698._0_8_;
      if ((char)local_47c4 != '\0') {
        if ((local_46ac == 0) && (local_46a7 == '\0')) {
          uVar26 = 0;
        }
        else {
          uVar26 = 1;
        }
        FUN_1803bfba0(local_47f0 + 0x250,*(undefined8 *)(local_4698._0_8_ + 0x150),local_47c8,uVar26
                     );
      }
      uVar22 = local_47e4;
      if (local_47e4 != 0) {
        if (local_46ac == 0) {
          uVar16 = *(undefined8 *)(uVar31 + 0x150);
        }
        *(undefined8 *)(lVar10 + 0x1030) = uVar16;
      }
      UVar9 = GetTickCount64();
      if ((uVar22 != 0) && (DAT_180c71c70 <= UVar9)) {
        DAT_180c71c70 = UVar9 + 5000;
        LOCK();
        UNLOCK();
        FUN_18063ab10(local_658,0,0x600);
        local_4808 = *(undefined8 *)(uVar31 + 0x150);
        local_4810 = local_46ac;
        local_4818 = local_47d4;
        local_4820 = (char *)CONCAT44(local_4820._4_4_,uVar22);
        local_4828 = (undefined **)CONCAT44(local_4828._4_4_,*(undefined4 *)(uVar31 + 0x148));
        FUN_18015ad60(local_658,0x600,0xffffffffffffffff,
                      "definition=%d primitives=%d cached_stock_rebound=%d failed=%d revision=%llu")
        ;
        local_4828 = &PTR_180700558;
        if (local_658[0] != '\0') {
          local_4828 = (undefined **)&DAT_1806bcfc0;
        }
        local_4820 = local_658;
        FUN_1800f6900(0);
      }
      ppbVar23 = local_46a0;
      if (local_46a0 != (byte **)0x0) {
        if (DAT_180c7df30 == (undefined8 *)0x0) {
          local_4778 = (byte **)0x180827288;
          piStack_4770 = (int *)0x15;
          DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_4778);
        }
        (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,ppbVar23);
      }
    }
  }
LAB_1803c7db4:
  ppbVar23 = local_4760;
  if (local_4760 != (byte **)0x0) {
    LOCK();
    ppbVar2 = local_4760 + 1;
    iVar17 = *(int *)ppbVar2;
    *(int *)ppbVar2 = *(int *)ppbVar2 + -1;
    UNLOCK();
    if (iVar17 == 1) {
      (**(code **)*local_4760)(local_4760);
      LOCK();
      piVar21 = (int *)((longlong)ppbVar23 + 0xc);
      iVar17 = *piVar21;
      *piVar21 = *piVar21 + -1;
      UNLOCK();
      if (iVar17 == 1) {
        (**(code **)(*ppbVar23 + 8))(ppbVar23);
      }
    }
  }
LAB_1803c7d91:
  if (bVar5 != 0) {
    *(undefined8 *)(lVar10 + 0x1030) = *(undefined8 *)(pbVar24 + 0x150);
  }
  goto LAB_1803c7db4;
}



