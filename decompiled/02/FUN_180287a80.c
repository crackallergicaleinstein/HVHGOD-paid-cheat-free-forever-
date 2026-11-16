// FUN_180287a80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180287a80 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180287a80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  ULONGLONG UVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  undefined8 *puVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong *puVar19;
  ulonglong *puVar20;
  undefined8 uVar21;
  undefined1 auStackY_1238 [32];
  longlong local_1208;
  ulonglong *local_1200;
  int local_11f8 [2];
  ulonglong local_11f0;
  ulonglong *local_11e8;
  undefined1 local_11d8 [16];
  undefined8 *local_11c8;
  undefined1 local_11b8 [16];
  undefined8 *local_11a8;
  undefined1 local_11a0 [16];
  undefined8 *local_1190;
  undefined1 local_1188;
  undefined7 uStack_1187;
  longlong lStack_1180;
  longlong lStack_1178;
  ulonglong uStack_1170;
  undefined8 local_1168;
  undefined1 local_1160 [24];
  char local_1148 [127];
  char cStack_10c9;
  undefined8 local_10c8 [528];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStackY_1238;
  if ((DAT_180cc7fe0 != '\0') &&
     (((DAT_180c653f0 == '\0' || (DAT_1808f2c58 != 10)) ||
      (iVar7 = memcmp(DAT_1808f2c50,"spectators",10), iVar7 != 0)))) {
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_1188 = (undefined1)_DAT_180bb8890;
    uStack_1187 = (undefined7)((ulonglong)_DAT_180bb8890 >> 8);
    lStack_1180 = lRam0000000180bb8898;
    lStack_1178 = lRam0000000180bb88a0;
    uStack_1170 = uRam0000000180bb88a8;
    uVar21 = uRam0000000180bb88b8;
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    cVar6 = (char)uVar21;
    if ((DAT_180cd3d18 & 1) == 0) {
      DAT_180cd3d18 = DAT_180cd3d18 | 1;
      local_11e8 = (ulonglong *)&DAT_180cd3d20;
      DAT_180cd3d20 = 0;
      DAT_180cd3d28 = (ulonglong *)0x0;
      DAT_180cd3d30 = 0;
      if (DAT_180c7df28 == (undefined8 *)0x0) {
        local_11d8._8_8_ = 0x15;
        local_11d8._0_8_ = "tier0.dll:g_pMemAlloc";
        DAT_180c7df28 = (undefined8 *)FUN_180451750(local_11d8);
      }
      DAT_180cd3d28 =
           (ulonglong *)
           (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x30);
      *DAT_180cd3d28 = (ulonglong)DAT_180cd3d28;
      DAT_180cd3d28[1] = (ulonglong)DAT_180cd3d28;
      DAT_180cd3d38 = 0;
      _DAT_180cd3d40 = (undefined1  [16])0x0;
      DAT_180cd3d50 = 7;
      DAT_180cd3d58 = 8;
      DAT_180cd3d20 = 0x3f800000;
      FUN_1801406e0(&DAT_180cd3d38,0x10,DAT_180cd3d28);
      atexit(FUN_180662ba0);
    }
    uVar17 = uStack_1170;
    lVar18 = lStack_1178;
    lVar13 = lStack_1180;
    if ((lStack_1180 != 0) || (lStack_1178 != 0)) {
      local_11f0 = uStack_1170;
      local_11d8._0_8_ = CONCAT71(uStack_1187,local_1188);
      uVar16 = uStack_1170;
      if (cVar6 != '\0') {
        uVar16 = CONCAT71(uStack_1187,local_1188);
      }
      AcquireSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
      for (puVar20 = DAT_180b0e0e0; puVar20 != DAT_180b0e0e8; puVar20 = puVar20 + 3) {
        if (*puVar20 == uVar16) {
          ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
          lVar11 = DAT_180bb88d0;
          lVar9 = FUN_18017ea70();
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
          if (lVar11 == 0) {
            bVar4 = false;
            lVar11 = local_11d8._0_8_;
          }
          else {
            local_1208 = 0;
            cVar5 = FUN_1804514f0(&local_1208,lVar11,8);
            if (cVar5 == '\0') {
              bVar4 = false;
              lVar11 = local_11d8._0_8_;
            }
            else {
              bVar4 = true;
              lVar11 = local_1208;
            }
          }
          lVar9 = FUN_18017ea70();
          if (*(int *)(lVar9 + 4) != 0) {
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
          }
          if (!bVar4) {
          }
          if (lVar11 == 0) {
          }
          iVar7 = DAT_180c65448;
          if (DAT_180c65448 == 0) {
            UVar10 = GetTickCount64();
            if (UVar10 < DAT_180c65450) {
              iVar7 = 0;
            }
            else {
              local_11e8 = (ulonglong *)&DAT_1808f2ec0;
              iVar7 = FUN_1805f68d0(&DAT_1808f2ec0);
              if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(5);
              }
              if (DAT_1808f2f0c == 0x7fffffff) {
                DAT_1808f2f0c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(6);
              }
              if ((DAT_180c65448 == 0) && (DAT_180c65450 <= UVar10)) {
                DAT_180c65448 = FUN_1804174b0("C_CSGameRules",0xcec62ee2);
                if (DAT_180c65448 == 0) {
                  DAT_180c65450 = UVar10 + 1000;
                }
                else {
                  DAT_180c65450 = 0xffffffffffffffff;
                }
              }
              iVar7 = DAT_180c65448;
              FUN_1805f68fc(&DAT_1808f2ec0);
            }
            uVar17 = local_11f0;
          }
          lVar9 = FUN_18017ea70();
          *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
          if (iVar7 + lVar11 == 0) {
            bVar4 = false;
            iVar7 = (int)local_1200;
          }
          else {
            local_11f8[0] = 0;
            cVar5 = FUN_1804514f0(local_11f8,iVar7 + lVar11,4);
            if (cVar5 == '\0') {
              bVar4 = false;
              iVar7 = (int)local_1200;
            }
            else {
              bVar4 = true;
              iVar7 = local_11f8[0];
            }
          }
          lVar11 = FUN_18017ea70();
          if (*(int *)(lVar11 + 4) != 0) {
            *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
          }
          if (!bVar4) {
          }
          if (3 < iVar7) {
          }
          uVar16 = local_11d8._0_8_;
          if (cVar6 != '\0') {
            lVar18 = lVar13;
            uVar17 = local_11d8._0_8_;
          }
          if (lVar18 == 0) {
          }
          local_11f0 = uVar17;
          uVar21 = FUN_18063ab10(local_1148,0,0x1100);
          local_11f8[0] = 0;
          puVar12 = (undefined8 *)FUN_1803d44c0(uVar21,local_1160);
          puVar20 = (ulonglong *)*puVar12;
          puVar19 = (ulonglong *)puVar12[1];
          iVar7 = 0;
          local_11e8 = puVar19;
          if (puVar20 == puVar19) goto LAB_1802884a3;
          lVar13 = 0;
          local_1208 = 0;
          iVar7 = (int)local_1200;
          goto LAB_180287ef0;
        }
      }
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180b0e0f8);
    }
    FUN_180288c30(&DAT_180cd3d20);
  }
LAB_180287ef0:
  iVar8 = DAT_180c65440;
  if (((*puVar20 != uVar17) && (*puVar20 != uVar16)) && (lVar13 < 0x20)) {
    if ((DAT_180c65440 == 0) && (UVar10 = GetTickCount64(), DAT_180c65438 <= UVar10)) {
      local_1200 = (ulonglong *)&DAT_1808f2e70;
      iVar8 = FUN_1805f68d0(&DAT_1808f2e70);
      if (iVar8 != 0) goto LAB_1802889d1;
      if (DAT_1808f2ebc == 0x7fffffff) {
        DAT_1808f2ebc = 0x7ffffffe;
        goto LAB_1802889c6;
      }
      if ((DAT_180c65440 == 0) && (DAT_180c65438 <= UVar10)) {
        DAT_180c65440 = FUN_1804174b0("CCSPlayerController",0x3db3c8d0);
        DAT_180c65438 = 0xffffffffffffffff;
        if (DAT_180c65440 == 0) {
          DAT_180c65438 = UVar10 + 1000;
        }
      }
      iVar8 = DAT_180c65440;
      FUN_1805f68fc(&DAT_1808f2e70);
    }
    iVar15 = DAT_180c65444;
    if (*(char *)((longlong)iVar8 + *puVar20) == '\0') {
      if ((DAT_180c65444 == 0) && (UVar10 = GetTickCount64(), DAT_180c65420 <= UVar10)) {
        local_1200 = (ulonglong *)&DAT_1808f2e20;
        iVar8 = FUN_1805f68d0(&DAT_1808f2e20);
        if (iVar8 != 0) goto LAB_1802889d1;
        if (DAT_1808f2e6c == 0x7fffffff) {
          DAT_1808f2e6c = 0x7ffffffe;
          goto LAB_1802889c6;
        }
        if ((DAT_180c65444 == 0) && (DAT_180c65420 <= UVar10)) {
          DAT_180c65444 = FUN_1804174b0("CCSPlayerController",0x54df971f);
          DAT_180c65420 = 0xffffffffffffffff;
          if (DAT_180c65444 == 0) {
            DAT_180c65420 = UVar10 + 1000;
          }
        }
        iVar15 = DAT_180c65444;
        FUN_1805f68fc(&DAT_1808f2e20);
      }
      if ((*(int *)((longlong)iVar15 + *puVar20) != 0) &&
         (*(int *)((longlong)iVar15 + *puVar20) != -1)) {
        lVar13 = FUN_1803d4150();
        iVar8 = DAT_180c65430;
        if (lVar13 != 0) {
          if ((DAT_180c65430 == 0) && (UVar10 = GetTickCount64(), DAT_180c65428 <= UVar10)) {
            local_1200 = (ulonglong *)&DAT_1808f2d80;
            iVar8 = FUN_1805f68d0(&DAT_1808f2d80);
            if (iVar8 != 0) goto LAB_1802889d1;
            if (DAT_1808f2dcc == 0x7fffffff) {
              DAT_1808f2dcc = 0x7ffffffe;
              goto LAB_1802889c6;
            }
            if ((DAT_180c65430 == 0) && (DAT_180c65428 <= UVar10)) {
              DAT_180c65430 = FUN_1804174b0("C_BasePlayerPawn",0x4ed1a579);
              DAT_180c65428 = 0xffffffffffffffff;
              if (DAT_180c65430 == 0) {
                DAT_180c65428 = UVar10 + 1000;
              }
            }
            iVar8 = DAT_180c65430;
            FUN_1805f68fc(&DAT_1808f2d80);
          }
          lVar11 = FUN_18017ea70();
          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
          bVar4 = false;
          if (iVar8 + lVar13 != 0) {
            local_1200 = (ulonglong *)0x0;
            cVar6 = FUN_1804514f0(&local_1200,iVar8 + lVar13);
            if (cVar6 == '\0') {
              bVar4 = false;
            }
            else {
              bVar4 = true;
              puVar19 = local_1200;
            }
          }
          lVar13 = FUN_18017ea70();
          if (*(int *)(lVar13 + 4) != 0) {
            *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
          }
          iVar8 = DAT_180c65410;
          if ((bVar4) && ((undefined *)((longlong)puVar19 + -1) < (undefined *)0xffffffffffff)) {
            if ((DAT_180c65410 == 0) && (UVar10 = GetTickCount64(), DAT_180c65418 <= UVar10)) {
              local_1200 = (ulonglong *)&DAT_1808f2dd0;
              iVar8 = FUN_1805f68d0(&DAT_1808f2dd0);
              if (iVar8 != 0) goto LAB_1802889d1;
              if (DAT_1808f2e1c == 0x7fffffff) {
                DAT_1808f2e1c = 0x7ffffffe;
                goto LAB_1802889c6;
              }
              if ((DAT_180c65410 == 0) && (DAT_180c65418 <= UVar10)) {
                DAT_180c65410 = FUN_1804174b0("CPlayer_ObserverServices",0x24779c4c);
                DAT_180c65418 = 0xffffffffffffffff;
                if (DAT_180c65410 == 0) {
                  DAT_180c65418 = UVar10 + 1000;
                }
              }
              iVar8 = DAT_180c65410;
              FUN_1805f68fc(&DAT_1808f2dd0);
            }
            lVar13 = FUN_18017ea70();
            *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
            bVar4 = false;
            if ((undefined *)((longlong)iVar8 + (longlong)puVar19) != (undefined *)0x0) {
              local_1200 = (ulonglong *)((ulonglong)local_1200 & 0xffffffff00000000);
              cVar6 = FUN_1804514f0(&local_1200,(undefined *)((longlong)iVar8 + (longlong)puVar19));
              if (cVar6 == '\0') {
                bVar4 = false;
              }
              else {
                bVar4 = true;
                iVar7 = (int)local_1200;
              }
            }
            lVar13 = FUN_18017ea70();
            iVar8 = *(int *)(lVar13 + 4);
            if (iVar8 != 0) {
              iVar8 = iVar8 + -1;
              *(int *)(lVar13 + 4) = iVar8;
            }
            if ((bVar4) && (iVar7 != 0)) {
              lVar13 = FUN_1803d4150(iVar8,iVar7);
              iVar8 = DAT_180c65408;
              if (lVar13 == lVar18) {
                if ((DAT_180c65408 == 0) && (UVar10 = GetTickCount64(), DAT_180c65400 <= UVar10)) {
                  local_1200 = (ulonglong *)&DAT_1808f2d30;
                  iVar8 = FUN_1805f68d0(&DAT_1808f2d30);
                  if (iVar8 != 0) {
LAB_1802889d1:
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(5);
                  }
                  if (DAT_1808f2d7c == 0x7fffffff) {
                    DAT_1808f2d7c = 0x7ffffffe;
LAB_1802889c6:
                    /* WARNING: Subroutine does not return */
                    FUN_1805f6d44(6);
                  }
                  if ((DAT_180c65408 == 0) && (DAT_180c65400 <= UVar10)) {
                    DAT_180c65408 = FUN_1804174b0("CCSPlayerController",0xde63b6d1);
                    DAT_180c65400 = 0xffffffffffffffff;
                    if (DAT_180c65408 == 0) {
                      DAT_180c65400 = UVar10 + 1000;
                    }
                  }
                  iVar8 = DAT_180c65408;
                  FUN_1805f68fc(&DAT_1808f2d30);
                }
                if (*(longlong *)((longlong)iVar8 + *puVar20) != 0) {
                  FUN_180454280(&local_1188,*(longlong *)((longlong)iVar8 + *puVar20),0x7f);
                  lVar13 = local_1208;
                  lVar11 = local_1208 * 0x88;
                  local_11f8[0] = local_11f8[0] + 1;
                  local_1208 = local_1208 + 1;
                  FUN_1806157a0(local_1148 + lVar11,0x80);
                  iVar8 = DAT_180c6540c;
                  local_1148[lVar11 + 0x7f] = '\0';
                  if ((DAT_180c6540c == 0) && (UVar10 = GetTickCount64(), DAT_180c653f8 <= UVar10))
                  {
                    local_1200 = (ulonglong *)&DAT_1808f2ce0;
                    iVar8 = FUN_1805f68d0(&DAT_1808f2ce0);
                    if (iVar8 != 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_1805f6d44(5);
                    }
                    if (DAT_1808f2d2c == 0x7fffffff) {
                      DAT_1808f2d2c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                      FUN_1805f6d44(6);
                    }
                    if ((DAT_180c6540c == 0) && (DAT_180c653f8 <= UVar10)) {
                      DAT_180c6540c = FUN_1804174b0("CBasePlayerController",0xb22f805e);
                      DAT_180c653f8 = 0xffffffffffffffff;
                      if (DAT_180c6540c == 0) {
                        DAT_180c653f8 = UVar10 + 1000;
                      }
                    }
                    iVar8 = DAT_180c6540c;
                    FUN_1805f68fc(&DAT_1808f2ce0);
                  }
                  local_10c8[lVar13 * 0x11] = *(undefined8 *)((longlong)iVar8 + *puVar20);
                  FUN_18015c010(&local_1188);
                }
              }
            }
          }
        }
        uVar17 = local_11f0;
      }
    }
    lVar13 = local_1208;
  }
  puVar20 = puVar20 + 3;
  if (puVar20 == local_11e8) {
    iVar7 = local_11f8[0];
LAB_1802884a3:
    FUN_1801abba0(local_1160);
    if ((iVar7 == 0) && (DAT_180b0d6f5 == '\0')) {
    }
    if (0x7f < DAT_180cd3d30) {
      if (DAT_180cd3d30 < DAT_180cd3d58 >> 3) {
        FUN_1802893e0(&DAT_180cd3d20,*DAT_180cd3d28);
      }
      else {
        FUN_180289de0();
        *DAT_180cd3d28 = (ulonglong)DAT_180cd3d28;
        DAT_180cd3d28[1] = (ulonglong)DAT_180cd3d28;
        DAT_180cd3d30 = 0;
        local_11e8 = DAT_180cd3d28;
        FUN_1800f9880(DAT_180cd3d38,DAT_180cd3d40);
      }
    }
    local_11b8 = (undefined1  [16])0x0;
    local_11a8 = (undefined8 *)0x0;
    uVar17 = (ulonglong)iVar7;
    if (uVar17 != 0) {
      if (0x666666666666666 < uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      lVar13 = FUN_18015bca0(uVar17 * 0x28);
      if (local_11b8._0_8_ != local_11b8._8_8_) {
        puVar12 = (undefined8 *)(lVar13 + 0x18);
        puVar14 = (undefined8 *)local_11b8._0_8_;
        do {
          *(undefined1 (*) [16])(puVar12 + -3) = (undefined1  [16])0x0;
          puVar12[-1] = 0;
          *puVar12 = 0;
          uVar21 = puVar14[1];
          uVar1 = puVar14[2];
          uVar2 = puVar14[3];
          puVar12[-3] = *puVar14;
          puVar12[-2] = uVar21;
          puVar12[-1] = uVar1;
          *puVar12 = uVar2;
          *(undefined1 *)puVar14 = 0;
          puVar14[2] = 0;
          puVar14[3] = 0xf;
          puVar12[1] = puVar14[4];
          puVar12 = puVar12 + 5;
          puVar14 = puVar14 + 5;
        } while (puVar14 != (undefined8 *)local_11b8._8_8_);
      }
      FUN_180289eb0(local_11b8,lVar13);
    }
    iVar7 = 0;
    lVar13 = 0;
    uVar16 = 0xf;
    if (0 < (longlong)uVar17) {
      puVar12 = local_10c8;
      do {
        local_1188 = 0;
        uStack_1187 = 0;
        lStack_1180 = 0;
        lStack_1178 = 0;
        uStack_1170 = 0;
        lVar18 = -1;
        do {
          lVar18 = lVar18 + 1;
        } while (local_1148[lVar18 + (longlong)iVar7 * 0x88] != '\0');
        uVar21 = FUN_18015ba30(&local_1188);
        if (DAT_180b0d6f2 == '\0') {
          local_1168 = 0;
        }
        else {
          local_1168 = FUN_1802876c0(uVar21,*puVar12);
        }
        if ((undefined8 *)local_11b8._8_8_ == local_11a8) {
          FUN_180289b90(local_11b8);
        }
        else {
          *(ulonglong *)local_11b8._8_8_ = CONCAT71(uStack_1187,local_1188);
          *(longlong *)(local_11b8._8_8_ + 8) = lStack_1180;
          *(longlong *)(local_11b8._8_8_ + 0x10) = lStack_1178;
          *(ulonglong *)(local_11b8._8_8_ + 0x18) = uStack_1170;
          local_1188 = 0;
          *(undefined8 *)(local_11b8._8_8_ + 0x20) = local_1168;
          local_11b8._8_8_ = (undefined8 *)(local_11b8._8_8_ + 0x28);
          lStack_1178 = lVar13;
          uStack_1170 = uVar16;
        }
        FUN_18015c010(&local_1188);
        iVar7 = iVar7 + 1;
        puVar12 = puVar12 + 0x11;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    if (DAT_180b0d6f6 != '\0') {
      FUN_180288a10(local_11b8._0_8_,local_11b8._8_8_);
    }
    local_11a0 = (undefined1  [16])0x0;
    local_1190 = (undefined8 *)0x0;
    uVar17 = (longlong)(local_11b8._8_8_ - local_11b8._0_8_) / 0x28;
    lVar18 = local_11b8._0_8_;
    auVar3 = local_11a0;
    local_11c8 = local_1190;
    lVar11 = local_11b8._8_8_;
    if (uVar17 != 0) {
      if (0x666666666666666 < uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_1801136f0();
      }
      lVar18 = FUN_18015bca0(uVar17 * 0x28);
      if (local_11a0._0_8_ != local_11a0._8_8_) {
        puVar12 = (undefined8 *)(lVar18 + 0x18);
        puVar14 = (undefined8 *)local_11a0._0_8_;
        do {
          *(undefined1 (*) [16])(puVar12 + -3) = (undefined1  [16])0x0;
          puVar12[-1] = 0;
          *puVar12 = 0;
          uVar21 = puVar14[1];
          uVar1 = puVar14[2];
          uVar2 = puVar14[3];
          puVar12[-3] = *puVar14;
          puVar12[-2] = uVar21;
          puVar12[-1] = uVar1;
          *puVar12 = uVar2;
          *(undefined1 *)puVar14 = 0;
          puVar14[2] = 0;
          puVar14[3] = 0xf;
          puVar12[1] = puVar14[4];
          puVar12 = puVar12 + 5;
          puVar14 = puVar14 + 5;
        } while (puVar14 != (undefined8 *)local_11a0._8_8_);
      }
      FUN_180289eb0(local_11a0,lVar18);
      lVar18 = local_11b8._0_8_;
      auVar3 = local_11a0;
      local_11c8 = local_1190;
      lVar11 = local_11b8._8_8_;
    }
    for (; lVar18 != lVar11; lVar18 = lVar18 + 0x28) {
      local_11a0 = auVar3;
      local_1190 = local_11c8;
      FUN_18015b360(&local_1188,lVar18);
      local_1168 = *(undefined8 *)(lVar18 + 0x20);
      if ((undefined8 *)local_11a0._8_8_ == local_1190) {
        FUN_180289b90(local_11a0);
      }
      else {
        *(ulonglong *)local_11a0._8_8_ = CONCAT71(uStack_1187,local_1188);
        *(longlong *)(local_11a0._8_8_ + 8) = lStack_1180;
        *(longlong *)(local_11a0._8_8_ + 0x10) = lStack_1178;
        *(ulonglong *)(local_11a0._8_8_ + 0x18) = uStack_1170;
        local_1188 = 0;
        *(undefined8 *)(local_11a0._8_8_ + 0x20) = local_1168;
        local_11a0._8_8_ = (undefined8 *)(local_11a0._8_8_ + 0x28);
        lStack_1178 = lVar13;
        uStack_1170 = uVar16;
      }
      FUN_18015c010(&local_1188);
      auVar3 = local_11a0;
      local_11c8 = local_1190;
    }
    local_1190 = (undefined8 *)0x0;
    local_11a0 = ZEXT816(0);
    local_11e8 = (ulonglong *)local_11d8;
    local_11d8 = auVar3;
    iVar7 = FUN_1805f68d0(&DAT_1808e6940);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808e698c == 0x7fffffff) {
      DAT_1808e698c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    DAT_1808e68b1 = 1;
    FUN_1801b3620(&DAT_1808e68d0);
    DAT_1808e68d0 = local_11d8._0_8_;
    DAT_1808e68d8 = local_11d8._8_8_;
    _DAT_1808e68e0 = local_11c8;
    local_11d8 = (undefined1  [16])0x0;
    local_11c8 = (undefined8 *)0x0;
    FUN_1805f68fc(&DAT_1808e6940);
    FUN_1801b3620(local_11d8);
    FUN_1801b3620(local_11a0);
    if (local_11b8._0_8_ == 0) {
    }
    uVar21 = local_11b8._8_8_;
    lVar13 = local_11b8._0_8_;
    if (local_11b8._0_8_ != local_11b8._8_8_) {
      do {
        FUN_18015c010(lVar13);
        lVar13 = lVar13 + 0x28;
      } while (lVar13 != uVar21);
    }
    lVar13 = local_11b8._0_8_;
    if (((ulonglong)((((longlong)local_11a8 - local_11b8._0_8_) / 0x28) * 0x28) < 0x1000) ||
       (lVar13 = *(longlong *)(local_11b8._0_8_ + -8), (local_11b8._0_8_ - lVar13) - 8U < 0x20)) {
      FUN_1804547d0(lVar13);
    }
                    /* WARNING: Subroutine does not return */
    _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
  }
  uVar16 = local_11d8._0_8_;
  goto LAB_180287ef0;
}



