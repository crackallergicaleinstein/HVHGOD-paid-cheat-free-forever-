// FUN_1802f6510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f6510 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_1802f6510(void)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ULONGLONG UVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  byte bVar13;
  uint uVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong *plVar17;
  byte bVar18;
  byte bVar19;
  bool bVar20;
  undefined1 auStack_738 [32];
  undefined **local_718;
  char *local_710;
  byte local_708;
  byte local_707;
  longlong *local_700;
  int local_6f8;
  int local_6f4;
  int local_6f0;
  int local_6ec;
  longlong *local_6e8;
  int *local_6e0;
  longlong *plStack_6d8;
  longlong *plStack_6d0;
  int *piStack_6c8;
  longlong *local_6c0;
  undefined8 local_698;
  undefined8 uStack_690;
  int local_688;
  int local_684;
  int local_680 [2];
  longlong local_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined1 local_658 [16];
  undefined8 local_648;
  char local_638 [1536];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_738;
  if (DAT_180b0da08 != '\0') {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_6e0 = _DAT_180bb8890;
    plStack_6d8 = plRam0000000180bb8898;
    plStack_6d0 = plRam0000000180bb88a0;
    piStack_6c8 = piRam0000000180bb88a8;
    local_670 = _DAT_180bb88b0;
    uStack_668 = uRam0000000180bb88b8;
    local_698 = _DAT_180bb88b0;
    uStack_690 = uRam0000000180bb88b8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_6c0 = plStack_6d0;
    local_6e8 = plStack_6d8;
    if ((plStack_6d8 == (longlong *)0x0) && (plStack_6d0 == (longlong *)0x0)) {
    }
    local_6ec = DAT_180c6efac;
    iVar4 = DAT_180c6efac;
    if (DAT_180c6efac == 0) {
      UVar7 = GetTickCount64();
      if (UVar7 < DAT_180c6efb0) {
        iVar4 = 0;
        local_6ec = 0;
      }
      else {
        local_700 = (longlong *)&DAT_1808feb90;
        iVar4 = FUN_1805f68d0(&DAT_1808feb90);
        if (iVar4 != 0) goto LAB_1802f73e0;
        if (DAT_1808febdc == 0x7fffffff) {
          DAT_1808febdc = 0x7ffffffe;
          goto LAB_1802f73f5;
        }
        local_6ec = DAT_180c6efac;
        if ((DAT_180c6efac == 0) && (DAT_180c6efb0 <= UVar7)) {
          local_6ec = FUN_1804174b0("C_CSPlayerPawn",0x32b547c);
          if (local_6ec == 0) {
            DAT_180c6efb0 = UVar7 + 1000;
          }
          else {
            DAT_180c6efb0 = 0xffffffffffffffff;
          }
        }
        iVar4 = local_6ec;
        DAT_180c6efac = local_6ec;
        FUN_1805f68fc(&DAT_1808feb90);
      }
    }
    iVar5 = DAT_180c6ef98;
    if (DAT_180c6ef98 == 0) {
      UVar7 = GetTickCount64();
      if (UVar7 < DAT_180c6efa0) {
        iVar5 = 0;
      }
      else {
        local_700 = (longlong *)&DAT_1808feb30;
        iVar5 = FUN_1805f68d0(&DAT_1808feb30);
        if (iVar5 != 0) goto LAB_1802f73e0;
        if (DAT_1808feb7c == 0x7fffffff) {
          DAT_1808feb7c = 0x7ffffffe;
          goto LAB_1802f73f5;
        }
        if ((DAT_180c6ef98 == 0) && (DAT_180c6efa0 <= UVar7)) {
          DAT_180c6ef98 = FUN_1804174b0("EntitySpottedState_t",0x6de4f1ca);
          if (DAT_180c6ef98 == 0) {
            DAT_180c6efa0 = UVar7 + 1000;
          }
          else {
            DAT_180c6efa0 = 0xffffffffffffffff;
          }
        }
        iVar5 = DAT_180c6ef98;
        FUN_1805f68fc(&DAT_1808feb30);
      }
    }
    iVar6 = DAT_180c6efa8;
    local_688 = iVar5;
    if (DAT_180c6efa8 == 0) {
      UVar7 = GetTickCount64();
      if (UVar7 < DAT_180c6ef80) {
        iVar6 = 0;
      }
      else {
        local_700 = (longlong *)&DAT_1808feae0;
        iVar5 = FUN_1805f68d0(&DAT_1808feae0);
        if (iVar5 != 0) goto LAB_1802f73e0;
        if (DAT_1808feb2c == 0x7fffffff) {
          DAT_1808feb2c = 0x7ffffffe;
          goto LAB_1802f73f5;
        }
        if ((DAT_180c6efa8 == 0) && (DAT_180c6ef80 <= UVar7)) {
          DAT_180c6efa8 = FUN_1804174b0("EntitySpottedState_t",0xbd77207);
          if (DAT_180c6efa8 == 0) {
            DAT_180c6ef80 = UVar7 + 1000;
          }
          else {
            DAT_180c6ef80 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c6efa8;
        FUN_1805f68fc(&DAT_1808feae0);
      }
    }
    local_6f8 = DAT_180c6ef88;
    iVar5 = DAT_180c6ef88;
    local_684 = iVar6;
    if (DAT_180c6ef88 == 0) {
      UVar7 = GetTickCount64();
      if (UVar7 < DAT_180c6ef90) {
        iVar5 = 0;
        local_6f8 = 0;
      }
      else {
        local_700 = (longlong *)&DAT_1808fea40;
        iVar5 = FUN_1805f68d0(&DAT_1808fea40);
        if (iVar5 != 0) goto LAB_1802f73e0;
        if (DAT_1808fea8c == 0x7fffffff) {
          DAT_1808fea8c = 0x7ffffffe;
          goto LAB_1802f73f5;
        }
        local_6f8 = DAT_180c6ef88;
        if ((DAT_180c6ef88 == 0) && (DAT_180c6ef90 <= UVar7)) {
          local_6f8 = FUN_1804174b0("CCSPlayerController",0x3db3c8d0);
          if (local_6f8 == 0) {
            DAT_180c6ef90 = UVar7 + 1000;
          }
          else {
            DAT_180c6ef90 = 0xffffffffffffffff;
          }
        }
        iVar5 = local_6f8;
        DAT_180c6ef88 = local_6f8;
        FUN_1805f68fc(&DAT_1808fea40);
      }
    }
    local_6f4 = DAT_180c6ef74;
    iVar6 = DAT_180c6ef74;
    if (DAT_180c6ef74 == 0) {
      UVar7 = GetTickCount64();
      if (UVar7 < DAT_180c6ef78) {
        iVar6 = 0;
        local_6f4 = 0;
      }
      else {
        local_700 = (longlong *)&DAT_1808fea90;
        iVar6 = FUN_1805f68d0(&DAT_1808fea90);
        if (iVar6 != 0) goto LAB_1802f73e0;
        if (DAT_1808feadc == 0x7fffffff) {
          DAT_1808feadc = 0x7ffffffe;
          goto LAB_1802f73f5;
        }
        local_6f4 = DAT_180c6ef74;
        if ((DAT_180c6ef74 == 0) && (DAT_180c6ef78 <= UVar7)) {
          local_6f4 = FUN_1804174b0("CCSPlayerController",0xd6c93e7c);
          if (local_6f4 == 0) {
            DAT_180c6ef78 = UVar7 + 1000;
          }
          else {
            DAT_180c6ef78 = 0xffffffffffffffff;
          }
        }
        iVar6 = local_6f4;
        DAT_180c6ef74 = local_6f4;
        FUN_1805f68fc(&DAT_1808fea90);
      }
    }
    local_6f0 = DAT_180c6ef60;
    iVar3 = DAT_180c6ef60;
    if (DAT_180c6ef60 == 0) {
      UVar7 = GetTickCount64();
      if (UVar7 < DAT_180c6ef68) {
        iVar3 = 0;
        local_6f0 = 0;
      }
      else {
        local_700 = (longlong *)&DAT_1808fe9f0;
        iVar3 = FUN_1805f68d0(&DAT_1808fe9f0);
        if (iVar3 != 0) {
LAB_1802f73e0:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808fea3c == 0x7fffffff) {
          DAT_1808fea3c = 0x7ffffffe;
LAB_1802f73f5:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        local_6f0 = DAT_180c6ef60;
        if ((DAT_180c6ef60 == 0) && (DAT_180c6ef68 <= UVar7)) {
          local_6f0 = FUN_1804174b0("C_BaseEntity",0xa5bfefb3);
          if (local_6f0 == 0) {
            DAT_180c6ef68 = UVar7 + 1000;
          }
          else {
            DAT_180c6ef68 = 0xffffffffffffffff;
          }
        }
        iVar3 = local_6f0;
        DAT_180c6ef60 = local_6f0;
        FUN_1805f68fc(&DAT_1808fe9f0);
      }
    }
    cVar2 = DAT_180c6ef20;
    if ((((iVar4 == 0) || (local_688 == 0)) || (local_684 == 0)) ||
       (((iVar5 == 0 || (iVar6 == 0)) || (iVar3 == 0)))) {
      LOCK();
      DAT_180c6ef20 = '\x01';
      UNLOCK();
      if (cVar2 != '\0') {
        DAT_180c6ef20 = '\x01';
      }
      FUN_18063ab10(local_638,0,0x600);
      FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"action=disabled");
      local_718 = &PTR_180700558;
      if (local_638[0] != '\0') {
        local_718 = (undefined **)&DAT_1806bcfc0;
      }
      local_710 = local_638;
      FUN_1800f6900(2);
    }
    local_658 = (undefined1  [16])0x0;
    local_648 = 0;
    FUN_1803d44c0();
    local_707 = (byte)uStack_668;
    piVar8 = piStack_6c8;
    if ((byte)uStack_668 != 0) {
      piVar8 = local_6e0;
    }
    if (piVar8 == (int *)0x0) {
      piVar8 = local_6e0;
    }
    else {
      piVar8 = piStack_6c8;
      if ((byte)uStack_668 != 0) {
        piVar8 = local_6e0;
      }
    }
    uVar1 = local_658._8_8_;
    for (plVar17 = (longlong *)local_658._0_8_;
        (plVar17 != (longlong *)local_658._8_8_ && ((int *)*plVar17 != piVar8));
        plVar17 = plVar17 + 3) {
    }
    if ((plVar17 != (longlong *)local_658._8_8_) &&
       ((ushort)(*(short *)((longlong)plVar17 + 0xc) - 1U) < 0x40)) {
      uVar14 = (int)*(short *)((longlong)plVar17 + 0xc) - 1;
      local_678 = (ulonglong)(uVar14 >> 5) << 2;
      local_680[0] = 1 << (uVar14 & 0x1f);
      local_6e0 = &local_688;
      plStack_6d8 = (longlong *)&local_684;
      plStack_6d0 = &local_678;
      piStack_6c8 = local_680;
      if (local_658._0_8_ != local_658._8_8_) {
        plVar17 = (longlong *)local_658._0_8_;
        bVar19 = (byte)uStack_668;
        iVar4 = (int)local_6e8;
        bVar18 = (byte)uStack_668;
        do {
          lVar10 = *plVar17;
          if (lVar10 != 0) {
            lVar16 = (longlong)local_6f8;
            bVar20 = false;
            if (lVar16 + lVar10 != 0) {
              local_708 = 0;
              lVar9 = FUN_18017ea70();
              *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
              cVar2 = FUN_1804514c0(&local_708,lVar16 + lVar10,1);
              bVar20 = cVar2 != '\0';
              if (bVar20) {
                bVar19 = local_708;
              }
              lVar16 = FUN_18017ea70();
              if (*(int *)(lVar16 + 4) != 0) {
                *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
              }
            }
            bVar13 = bVar19;
            if (!bVar20) {
              bVar13 = 0;
            }
            if (bVar13 != 0) {
              lVar16 = (longlong)local_6f4;
              bVar20 = false;
              if (lVar16 + lVar10 != 0) {
                local_700 = (longlong *)((ulonglong)local_700 & 0xffffffff00000000);
                lVar9 = FUN_18017ea70();
                *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
                cVar2 = FUN_1804514c0(&local_700,lVar16 + lVar10,4);
                bVar20 = cVar2 != '\0';
                if (bVar20) {
                  iVar4 = (int)local_700;
                }
                lVar10 = FUN_18017ea70();
                if (*(int *)(lVar10 + 4) != 0) {
                  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                }
              }
              iVar5 = iVar4;
              if (!bVar20) {
                iVar5 = 0;
              }
              if ((iVar5 - 1U < 0xfffffffe) &&
                 (plVar11 = (longlong *)FUN_1803d4150(), plVar11 != (longlong *)0x0)) {
                plVar15 = local_6c0;
                if (local_707 != 0) {
                  plVar15 = local_6e8;
                }
                if (plVar11 != plVar15) {
                  lVar10 = (longlong)local_6f0;
                  bVar20 = false;
                  if ((undefined *)(lVar10 + (longlong)plVar11) != (undefined *)0x0) {
                    local_708 = 0;
                    lVar16 = FUN_18017ea70();
                    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
                    cVar2 = FUN_1804514c0(&local_708,(undefined *)(lVar10 + (longlong)plVar11),1);
                    bVar20 = cVar2 != '\0';
                    if (bVar20) {
                      bVar18 = local_708;
                    }
                    lVar10 = FUN_18017ea70();
                    if (*(int *)(lVar10 + 4) != 0) {
                      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                    }
                  }
                  bVar13 = bVar18;
                  if (!bVar20) {
                    bVar13 = 0;
                  }
                  if (((byte)(bVar13 - 2) < 2) &&
                     ((uStack_690._1_1_ == '\0' || (local_698._4_4_ != bVar13)))) {
                    FUN_1802f7460(&local_6e0,(undefined *)((longlong)local_6ec + (longlong)plVar11))
                    ;
                  }
                }
              }
            }
          }
          plVar17 = plVar17 + 3;
        } while (plVar17 != (longlong *)uVar1);
      }
      iVar4 = DAT_180c6ef70;
      if (DAT_180c6ef70 == 0) {
        UVar7 = GetTickCount64();
        if (UVar7 < DAT_180c6ef48) {
          iVar4 = 0;
        }
        else {
          local_6e8 = (longlong *)&DAT_1808fe9a0;
          iVar4 = FUN_1805f68d0(&DAT_1808fe9a0);
          if (iVar4 != 0) goto LAB_1802f73d5;
          if (DAT_1808fe9ec == 0x7fffffff) {
            DAT_1808fe9ec = 0x7ffffffe;
            goto LAB_1802f740a;
          }
          if ((DAT_180c6ef70 == 0) && (DAT_180c6ef48 <= UVar7)) {
            DAT_180c6ef70 = FUN_1804174b0(&DAT_1807c5cd8,0x32b547c);
            if (DAT_180c6ef70 == 0) {
              DAT_180c6ef48 = UVar7 + 1000;
            }
            else {
              DAT_180c6ef48 = 0xffffffffffffffff;
            }
          }
          iVar4 = DAT_180c6ef70;
          FUN_1805f68fc(&DAT_1808fe9a0);
        }
      }
      iVar5 = DAT_180c6ef50;
      if (DAT_180c6ef50 == 0) {
        UVar7 = GetTickCount64();
        if (UVar7 < DAT_180c6ef58) {
          iVar5 = 0;
        }
        else {
          local_6e8 = (longlong *)&DAT_1808fe900;
          iVar5 = FUN_1805f68d0(&DAT_1808fe900);
          if (iVar5 != 0) {
LAB_1802f73d5:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808fe94c == 0x7fffffff) {
            DAT_1808fe94c = 0x7ffffffe;
LAB_1802f740a:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c6ef50 == 0) && (DAT_180c6ef58 <= UVar7)) {
            DAT_180c6ef50 = FUN_1804174b0(&DAT_1807c5cd8,0x3c00b55f);
            if (DAT_180c6ef50 == 0) {
              DAT_180c6ef58 = UVar7 + 1000;
            }
            else {
              DAT_180c6ef58 = 0xffffffffffffffff;
            }
          }
          iVar5 = DAT_180c6ef50;
          FUN_1805f68fc(&DAT_1808fe900);
        }
      }
      if ((iVar4 != 0) && (iVar5 != 0)) {
        puVar12 = (undefined8 *)FUN_1803d44c0();
        plVar17 = (longlong *)puVar12[1];
        for (plVar11 = (longlong *)*puVar12; plVar11 != plVar17; plVar11 = plVar11 + 3) {
          if (((*plVar11 != 0) && ((int)plVar11[1] == 0x75ddc158)) &&
             (lVar10 = *plVar11 + (longlong)iVar5, lVar10 != 0)) {
            local_708 = 0;
            lVar16 = FUN_18017ea70();
            *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
            cVar2 = FUN_1804514c0(&local_708,lVar10,1);
            if (cVar2 == '\0') {
              lVar10 = FUN_18017ea70();
              if (*(int *)(lVar10 + 4) != 0) {
                *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
              }
            }
            else {
              lVar10 = FUN_18017ea70();
              if (*(int *)(lVar10 + 4) != 0) {
                *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
              }
              if (local_708 == 0) {
                FUN_1802f7460(&local_6e0,(longlong)iVar4 + *plVar11);
              }
            }
          }
        }
        FUN_1801abba0(&local_670);
      }
      puVar12 = (undefined8 *)FUN_1803d44c0();
      plVar17 = (longlong *)*puVar12;
      plVar11 = (longlong *)puVar12[1];
      local_700 = plVar11;
      if (plVar17 != plVar11) {
        bVar19 = local_707;
        do {
          lVar10 = *plVar17;
          if (lVar10 != 0) {
            iVar4 = DAT_180c6ef3c;
            if (DAT_180c6ef3c == 0) {
              UVar7 = GetTickCount64();
              if (UVar7 < DAT_180c6ef40) {
                iVar4 = 0;
              }
              else {
                local_6e8 = (longlong *)&DAT_1808fe950;
                iVar4 = FUN_1805f68d0(&DAT_1808fe950);
                if (iVar4 != 0) goto LAB_1802f744b;
                if (DAT_1808fe99c == 0x7fffffff) {
                  DAT_1808fe99c = 0x7ffffffe;
                  goto LAB_1802f7440;
                }
                if ((DAT_180c6ef3c == 0) && (DAT_180c6ef40 <= UVar7)) {
                  DAT_180c6ef3c = FUN_1804174b0("C_PlantedC4",0x32b547c);
                  if (DAT_180c6ef3c == 0) {
                    DAT_180c6ef40 = UVar7 + 1000;
                  }
                  else {
                    DAT_180c6ef40 = 0xffffffffffffffff;
                  }
                }
                iVar4 = DAT_180c6ef3c;
                FUN_1805f68fc(&DAT_1808fe950);
              }
            }
            iVar5 = DAT_180c6ef28;
            if (DAT_180c6ef28 == 0) {
              UVar7 = GetTickCount64();
              if (UVar7 < DAT_180c6ef30) {
                iVar5 = 0;
              }
              else {
                local_6e8 = (longlong *)&DAT_1808fe8b0;
                iVar5 = FUN_1805f68d0(&DAT_1808fe8b0);
                if (iVar5 != 0) goto LAB_1802f744b;
                if (DAT_1808fe8fc == 0x7fffffff) {
                  DAT_1808fe8fc = 0x7ffffffe;
LAB_1802f7440:
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(6);
                }
                if ((DAT_180c6ef28 == 0) && (DAT_180c6ef30 <= UVar7)) {
                  DAT_180c6ef28 = FUN_1804174b0("C_PlantedC4",0xca7488e0);
                  if (DAT_180c6ef28 == 0) {
                    DAT_180c6ef30 = UVar7 + 1000;
                  }
                  else {
                    DAT_180c6ef30 = 0xffffffffffffffff;
                  }
                }
                iVar5 = DAT_180c6ef28;
                FUN_1805f68fc(&DAT_1808fe8b0);
              }
            }
            iVar6 = DAT_180c6ef38;
            if (DAT_180c6ef38 == 0) {
              UVar7 = GetTickCount64();
              if (UVar7 < DAT_180c6ef18) {
                iVar6 = 0;
              }
              else {
                local_6e8 = (longlong *)&DAT_1808fe860;
                iVar6 = FUN_1805f68d0(&DAT_1808fe860);
                if (iVar6 != 0) {
LAB_1802f744b:
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(5);
                }
                if (DAT_1808fe8ac == 0x7fffffff) {
                  DAT_1808fe8ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                  FUN_1805f6d44(6);
                }
                if ((DAT_180c6ef38 == 0) && (DAT_180c6ef18 <= UVar7)) {
                  DAT_180c6ef38 = FUN_1804174b0("C_PlantedC4",0xca9f868d);
                  if (DAT_180c6ef38 == 0) {
                    DAT_180c6ef18 = UVar7 + 1000;
                  }
                  else {
                    DAT_180c6ef18 = 0xffffffffffffffff;
                  }
                }
                iVar6 = DAT_180c6ef38;
                FUN_1805f68fc(&DAT_1808fe860);
              }
              plVar11 = local_700;
            }
            if (((iVar4 != 0) && (iVar5 != 0)) && (iVar6 != 0)) {
              bVar20 = false;
              if (iVar5 + lVar10 != 0) {
                local_708 = 0;
                lVar16 = FUN_18017ea70();
                *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
                cVar2 = FUN_1804514c0(&local_708,iVar5 + lVar10,1);
                bVar20 = cVar2 != '\0';
                if (bVar20) {
                  bVar19 = local_708;
                }
                lVar16 = FUN_18017ea70();
                if (*(int *)(lVar16 + 4) != 0) {
                  *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
                }
              }
              bVar18 = bVar19;
              if (!bVar20) {
                bVar18 = 0;
              }
              if ((bVar18 != 0) && (iVar6 + lVar10 != 0)) {
                local_708 = 0;
                lVar16 = FUN_18017ea70();
                *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + 1;
                cVar2 = FUN_1804514c0(&local_708,iVar6 + lVar10,1);
                if (cVar2 == '\0') {
                  lVar10 = FUN_18017ea70();
                  if (*(int *)(lVar10 + 4) != 0) {
                    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                  }
                }
                else {
                  lVar16 = FUN_18017ea70();
                  if (*(int *)(lVar16 + 4) != 0) {
                    *(int *)(lVar16 + 4) = *(int *)(lVar16 + 4) + -1;
                  }
                  if (local_708 == 0) {
                    FUN_1802f7460(&local_6e0,iVar4 + lVar10);
                  }
                }
              }
            }
          }
          plVar17 = plVar17 + 3;
        } while (plVar17 != plVar11);
      }
      FUN_1801abba0(&local_670);
    }
    FUN_1801abba0(local_658);
  }
}



