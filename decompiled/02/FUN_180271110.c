// FUN_180271110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180271110 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180271110(longlong param_1)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  float fVar5;
  longlong *plVar6;
  char cVar7;
  undefined1 uVar8;
  short sVar9;
  int iVar10;
  undefined8 *puVar11;
  ULONGLONG UVar12;
  longlong lVar13;
  undefined8 *puVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  longlong *plVar18;
  longlong lVar19;
  uint uVar20;
  ulonglong uVar21;
  undefined8 *puVar22;
  PSRWLOCK SRWLock;
  longlong *plVar23;
  ulonglong uVar24;
  longlong lVar25;
  undefined8 uVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  undefined1 auStackY_2558 [32];
  char *local_2518;
  longlong lStack_2510;
  undefined8 local_2508;
  undefined4 local_2500;
  undefined *local_24f8 [2];
  PSRWLOCK local_24e8;
  undefined1 local_24e0 [16];
  longlong local_24d0;
  longlong lStack_24c8;
  undefined8 uStack_24c0;
  undefined8 uStack_24b8;
  undefined4 local_24b0;
  uint uStack_24ac;
  undefined4 uStack_24a8;
  undefined4 uStack_24a4;
  undefined1 local_24a0 [16];
  longlong *local_2490;
  undefined1 local_2488 [32];
  undefined8 local_2468;
  longlong *plStack_2460;
  ulonglong uStack_2458;
  undefined8 uStack_2450;
  undefined8 local_2448;
  undefined8 uStack_2440;
  undefined8 uStack_2438;
  undefined8 uStack_2430;
  undefined8 local_2428;
  undefined8 local_2420;
  undefined8 local_2418;
  undefined8 local_2410;
  undefined8 local_2408;
  undefined8 local_2400;
  undefined8 local_23f8;
  undefined8 local_23f0;
  undefined4 local_23e8;
  undefined4 local_23e4;
  undefined1 local_23e0 [800];
  undefined8 local_20c0;
  undefined1 local_20b8 [4];
  undefined1 auStack_20b4 [4092];
  undefined1 local_10b8 [4];
  undefined1 auStack_10b4 [4092];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  longlong local_74;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStackY_2558;
  if (DAT_180cad2e0 == 1) {
    if (DAT_180c7e1f0 != '\0') goto LAB_18027118c;
  }
  else if (DAT_180cad2e0 == 0) {
    if ((DAT_180c8fdf0 != '\0') || (DAT_180c8ff98 != '\0')) goto LAB_18027118c;
    if ((int)_DAT_180c8fdb8 == 1) {
      uVar20 = 0;
      do {
        if (((&DAT_180c8fdc4)[uVar20] != '\0') &&
           ((lVar15 = (ulonglong)uVar20 * 0xb70, (&DAT_180c90960)[lVar15] != '\0' ||
            ((&DAT_180c90b08)[lVar15] != '\0')))) goto LAB_18027118c;
        uVar20 = uVar20 + 1;
      } while (uVar20 < 6);
    }
    else if ((int)_DAT_180c8fdb8 == 2) {
      uVar21 = 0;
      do {
        if (((&DAT_180c8fdca)[uVar21] != '\0') &&
           (((&DAT_180c94e00)[uVar21 * 0xb70] != '\0' || ((&DAT_180c94fa8)[uVar21 * 0xb70] != '\0'))
           )) goto LAB_18027118c;
        uVar20 = (int)uVar21 + 1;
        uVar21 = (ulonglong)uVar20;
      } while (uVar20 < 0x22);
    }
  }
  if (DAT_180cb15f8 == '\0') {
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x40));
    FUN_18027adb0(param_1);
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x40));
    UVar12 = GetTickCount64();
    if (UVar12 < DAT_180c64e68) {
    }
    DAT_180c64e68 = UVar12 + 2000;
    FUN_18063ab10(&local_2428,0,0x600);
    FUN_18015ad60(&local_2428,0x600,0xffffffffffffffff,
                  "consumers=0 native_skeleton_evaluations=0 unused_records=cleared server_ack=unverified"
                 );
    FUN_1800f6900(0);
  }
LAB_18027118c:
  puVar11 = (undefined8 *)FUN_180270b60(local_24f8);
  uVar26 = *puVar11;
  local_2500 = *(undefined4 *)(puVar11 + 1);
  if ((char)local_2500 == '\0') {
    iVar10 = 0;
  }
  else {
    local_2508._4_4_ = (float)((ulonglong)uVar26 >> 0x20);
    auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(local_2508._4_4_ * 1000.0)),1);
    iVar10 = (int)auVar4._0_4_;
  }
  *(int *)(param_1 + 0x48) = iVar10;
  SRWLock = (PSRWLOCK)(param_1 + 0x40);
  local_24e0._8_8_ = 0;
  local_24e0._0_8_ = SRWLock;
  local_2508 = uVar26;
  local_24e8 = SRWLock;
  AcquireSRWLockExclusive(SRWLock);
  local_24e0[8] = 1;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_24d0 = _DAT_180bb8890;
  lStack_24c8 = lRam0000000180bb8898;
  uStack_24c0 = uRam0000000180bb88a0;
  uStack_24b8 = uRam0000000180bb88a8;
  local_24b0 = _DAT_180bb88b0;
  uStack_24ac = uRam0000000180bb88b4;
  uStack_24a8 = uRam0000000180bb88b8;
  uStack_24a4 = uRam0000000180bb88bc;
  uVar28 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if ((char)uVar28 == '\0') {
    FUN_18027adb0(param_1);
  }
  else {
    local_2468 = 0;
    plStack_2460 = (longlong *)0x0;
    uStack_2458 = 0;
    uStack_2450 = 0;
    local_2448 = 0;
    uStack_2440 = 0;
    uStack_2438 = 0;
    uStack_2430 = 0;
    uVar26 = FUN_1801abd10(&local_2468);
    puVar11 = (undefined8 *)FUN_1803d44c0(uVar26,local_2488);
    uVar20 = uStack_24ac;
    lVar15 = local_24d0;
    plVar18 = (longlong *)puVar11[1];
    iVar10 = DAT_180c64eb0;
    for (plVar23 = (longlong *)*puVar11; DAT_180c64eb0 = iVar10, plVar23 != plVar18;
        plVar23 = plVar23 + 3) {
      if ((*plVar23 != 0) && (*plVar23 != lVar15)) {
        if ((iVar10 == 0) && (UVar12 = GetTickCount64(), DAT_180c64eb8 <= UVar12)) {
          iVar10 = FUN_1805f68d0(&DAT_1808f0ef0);
          if (iVar10 != 0) goto LAB_1802725c3;
          if (DAT_1808f0f3c == 0x7fffffff) {
            DAT_1808f0f3c = 0x7ffffffe;
            goto LAB_1802725b8;
          }
          if ((DAT_180c64eb0 == 0) && (DAT_180c64eb8 <= UVar12)) {
            DAT_180c64eb0 = FUN_1804174b0("CCSPlayerController",0x3db3c8d0);
            if (DAT_180c64eb0 == 0) {
              DAT_180c64eb8 = UVar12 + 1000;
            }
            else {
              DAT_180c64eb8 = 0xffffffffffffffff;
            }
          }
          iVar10 = DAT_180c64eb0;
          FUN_1805f68fc(&DAT_1808f0ef0);
        }
        if (*(char *)((longlong)iVar10 + *plVar23) != '\0') {
          if ((DAT_180c64ea8 == 0) && (UVar12 = GetTickCount64(), DAT_180c64ea0 <= UVar12)) {
            iVar10 = FUN_1805f68d0(&DAT_1808f0e50);
            if (iVar10 != 0) goto LAB_1802725c3;
            if (DAT_1808f0e9c == 0x7fffffff) {
              DAT_1808f0e9c = 0x7ffffffe;
LAB_1802725b8:
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            if ((DAT_180c64ea8 == 0) && (DAT_180c64ea0 <= UVar12)) {
              DAT_180c64ea8 = FUN_1804174b0("CBasePlayerController",0x7c628c1d);
              if (DAT_180c64ea8 == 0) {
                DAT_180c64ea0 = UVar12 + 1000;
              }
              else {
                DAT_180c64ea0 = 0xffffffffffffffff;
              }
            }
            FUN_1805f68fc(&DAT_1808f0e50);
          }
          lVar13 = FUN_1803d4150();
          iVar10 = DAT_180c64eac;
          if ((lVar13 != 0) && (lVar13 != lStack_24c8)) {
            if ((DAT_180c64eac == 0) && (UVar12 = GetTickCount64(), DAT_180c64e90 <= UVar12)) {
              local_24f8[0] = &DAT_1808f0e00;
              iVar10 = FUN_1805f68d0(&DAT_1808f0e00);
              if (iVar10 != 0) {
LAB_1802725c3:
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(5);
              }
              if (DAT_1808f0e4c == 0x7fffffff) {
                DAT_1808f0e4c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(6);
              }
              if ((DAT_180c64eac == 0) && (DAT_180c64e90 <= UVar12)) {
                DAT_180c64eac = FUN_1804174b0("C_BaseEntity",0xa5bfefb3);
                if (DAT_180c64eac == 0) {
                  DAT_180c64e90 = UVar12 + 1000;
                }
                else {
                  DAT_180c64e90 = 0xffffffffffffffff;
                }
              }
              iVar10 = DAT_180c64eac;
              FUN_1805f68fc(&DAT_1808f0e00);
            }
            if ((uStack_24a8._1_1_ == '\0') || (uVar20 != *(byte *)(iVar10 + lVar13))) {
              FUN_1801b1240(&local_2468,&local_2518);
            }
          }
        }
      }
      iVar10 = DAT_180c64eb0;
    }
    FUN_1801abba0();
    plVar23 = (longlong *)(param_1 + 8);
    puVar11 = (undefined8 *)*plVar23;
    puVar14 = (undefined8 *)*puVar11;
    while (puVar14 != puVar11) {
      cVar7 = FUN_1801acc90(&local_2468,puVar14 + 2);
      if (cVar7 == '\0') {
        uVar21 = (((((((((ulonglong)*(byte *)(puVar14 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)puVar14 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)puVar14 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)puVar14 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)puVar14 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)puVar14 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)puVar14 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)puVar14 + 0x17)) * 0x100000001b3 &
                 *(ulonglong *)(param_1 + 0x30);
        lVar15 = *(longlong *)(param_1 + 0x18);
        puVar22 = *(undefined8 **)(lVar15 + uVar21 * 0x10);
        if (*(undefined8 **)(lVar15 + 8 + uVar21 * 0x10) == puVar14) {
          if (puVar22 == puVar14) {
            lVar13 = *plVar23;
            *(longlong *)(lVar15 + uVar21 * 0x10) = lVar13;
            *(longlong *)(lVar15 + 8 + uVar21 * 0x10) = lVar13;
            puVar14 = (undefined8 *)FUN_18027bf20(plVar23,puVar14);
          }
          else {
            *(undefined8 *)(lVar15 + 8 + uVar21 * 0x10) = puVar14[1];
            puVar14 = (undefined8 *)FUN_18027bf20(plVar23,puVar14);
          }
        }
        else {
          if (puVar22 == puVar14) {
            *(undefined8 *)(lVar15 + uVar21 * 0x10) = *puVar14;
          }
          puVar14 = (undefined8 *)FUN_18027bf20(plVar23,puVar14);
        }
      }
      else {
        puVar14 = (undefined8 *)*puVar14;
      }
    }
    local_24a0 = (undefined1  [16])0x0;
    local_2490 = (longlong *)0x0;
    if (uStack_2458 == 0) {
      local_24a0._0_8_ = 0;
      lVar15 = local_24a0._0_8_;
    }
    else {
      if (0xfffffffffffffff < uStack_2458) {
                    /* WARNING: Subroutine does not return */
        FUN_1801baf80();
      }
      lVar13 = uStack_2458 * 0x10;
      lVar15 = FUN_18015bca0(lVar13);
      FUN_18063aed0(lVar15);
      if (local_24a0._0_8_ != 0) {
        if ((0xfff < ((longlong)local_2490 - local_24a0._0_8_ & 0xfffffffffffffff0U)) &&
           (0x1f < (local_24a0._0_8_ - *(longlong *)(local_24a0._0_8_ + -8)) - 8U)) {
LAB_180272600:
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        FUN_1804547d0();
      }
      local_24a0._8_8_ = lVar15;
      local_24a0._0_8_ = lVar15;
      local_2490 = (longlong *)(lVar13 + lVar15);
    }
    plVar6 = plStack_2460;
    plVar18 = (longlong *)*plStack_2460;
    if (plVar18 != plStack_2460) {
      fVar29 = 64.0;
      fVar30 = 0.5;
      do {
        iVar10 = DAT_180c64e98;
        if ((DAT_180c64e98 == 0) && (UVar12 = GetTickCount64(), DAT_180c64e78 <= UVar12)) {
          local_24f8[0] = &DAT_1808f0db0;
          iVar10 = FUN_1805f68d0(&DAT_1808f0db0);
          if (iVar10 != 0) goto LAB_1802725f5;
          if (DAT_1808f0dfc == 0x7fffffff) {
            DAT_1808f0dfc = 0x7ffffffe;
            goto LAB_1802725ea;
          }
          if ((DAT_180c64e98 == 0) && (DAT_180c64e78 <= UVar12)) {
            DAT_180c64e98 = FUN_1804174b0("C_BaseEntity",0x84cdad2);
            if (DAT_180c64e98 == 0) {
              DAT_180c64e78 = UVar12 + 1000;
            }
            else {
              DAT_180c64e78 = 0xffffffffffffffff;
            }
          }
          iVar10 = DAT_180c64e98;
          FUN_1805f68fc(&DAT_1808f0db0);
        }
        uVar21 = plVar18[2];
        if (*(int *)((longlong)iVar10 + uVar21) < 1) {
          uVar24 = ((((((((uVar21 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ uVar21 >> 8 & 0xff)
                         * 0x100000001b3 ^ uVar21 >> 0x10 & 0xff) * 0x100000001b3 ^
                       uVar21 >> 0x18 & 0xff) * 0x100000001b3 ^ uVar21 >> 0x20 & 0xff) *
                      0x100000001b3 ^ uVar21 >> 0x28 & 0xff) * 0x100000001b3 ^ uVar21 >> 0x30 & 0xff
                    ) * 0x100000001b3 ^ uVar21 >> 0x38) * 0x100000001b3 &
                   *(ulonglong *)(param_1 + 0x30);
          lVar15 = *(longlong *)(param_1 + 0x18);
          puVar11 = *(undefined8 **)(lVar15 + 8 + uVar24 * 0x10);
          puVar14 = (undefined8 *)*plVar23;
          if (puVar11 == puVar14) {
LAB_1802719f7:
            puVar22 = (undefined8 *)0x0;
          }
          else {
            uVar2 = puVar11[2];
            puVar22 = puVar11;
            while (uVar21 != uVar2) {
              if (puVar22 == *(undefined8 **)(lVar15 + uVar24 * 0x10)) goto LAB_1802719f7;
              puVar22 = (undefined8 *)puVar22[1];
              uVar2 = puVar22[2];
            }
          }
          if (puVar22 != (undefined8 *)0x0) {
            puVar3 = *(undefined8 **)(lVar15 + uVar24 * 0x10);
            if (puVar11 == puVar22) {
              if (puVar3 == puVar22) {
                *(undefined8 **)(lVar15 + uVar24 * 0x10) = puVar14;
                *(undefined8 **)(lVar15 + 8 + uVar24 * 0x10) = puVar14;
                FUN_18027bf20();
              }
              else {
                *(undefined8 *)(lVar15 + 8 + uVar24 * 0x10) = puVar22[1];
                FUN_18027bf20();
              }
            }
            else {
              if (puVar3 == puVar22) {
                *(undefined8 *)(lVar15 + uVar24 * 0x10) = *puVar22;
              }
              FUN_18027bf20();
            }
          }
        }
        else {
          plVar16 = (longlong *)FUN_18027b350(param_1,local_2488);
          iVar10 = DAT_180c64e88;
          lVar15 = *plVar16;
          if ((DAT_180c64e88 == 0) && (UVar12 = GetTickCount64(), DAT_180c64e80 <= UVar12)) {
            local_24f8[0] = &DAT_1808f0d60;
            iVar10 = FUN_1805f68d0(&DAT_1808f0d60);
            if (iVar10 != 0) {
LAB_1802725f5:
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(5);
            }
            if (DAT_1808f0dac == 0x7fffffff) {
              DAT_1808f0dac = 0x7ffffffe;
LAB_1802725ea:
                    /* WARNING: Subroutine does not return */
              FUN_1805f6d44(6);
            }
            if ((DAT_180c64e88 == 0) && (DAT_180c64e80 <= UVar12)) {
              DAT_180c64e88 = FUN_1804174b0("C_BaseEntity",0x7fcb378d);
              if (DAT_180c64e88 == 0) {
                DAT_180c64e80 = UVar12 + 1000;
              }
              else {
                DAT_180c64e80 = 0xffffffffffffffff;
              }
            }
            iVar10 = DAT_180c64e88;
            FUN_1805f68fc(&DAT_1808f0d60);
          }
          fVar27 = *(float *)((longlong)iVar10 + plVar18[2]);
          sVar9 = thunk_FUN_180624430(fVar27);
          if (sVar9 < 1) {
            iVar10 = (int)(fVar27 * fVar29 + fVar30);
            if ((*(longlong *)(lVar15 + 0x38) != 0) &&
               (iVar10 < *(int *)(*(longlong *)
                                   (*(longlong *)(lVar15 + 0x20) +
                                   (*(longlong *)(lVar15 + 0x28) - 1U &
                                   *(ulonglong *)(lVar15 + 0x30)) * 8) + 0x23b4))) {
              FUN_1801bd550();
            }
            uVar21 = *(ulonglong *)(lVar15 + 0x38);
            if (uVar21 < 3) {
LAB_180271bde:
              if (uVar21 != 0) goto LAB_180271be3;
            }
            else {
              do {
                if ((*(char *)(*(longlong *)
                                (*(longlong *)(lVar15 + 0x20) +
                                (*(longlong *)(lVar15 + 0x30) + -2 + uVar21 &
                                *(longlong *)(lVar15 + 0x28) - 1U) * 8) + 0x23b8) != '\0') &&
                   (cVar7 = FUN_180232a20(), cVar7 != '\0')) goto LAB_180271bde;
                uVar21 = uVar21 - 1;
                *(ulonglong *)(lVar15 + 0x38) = uVar21;
                if (uVar21 == 0) {
                  *(undefined8 *)(lVar15 + 0x30) = 0;
                  goto LAB_180271bff;
                }
              } while (2 < uVar21);
LAB_180271be3:
              if (iVar10 <= *(int *)(*(longlong *)
                                      (*(longlong *)(lVar15 + 0x20) +
                                      (*(longlong *)(lVar15 + 0x28) - 1U &
                                      *(ulonglong *)(lVar15 + 0x30)) * 8) + 0x23b4))
              goto LAB_180271c3b;
            }
LAB_180271bff:
            local_2518 = (char *)plVar18[2];
            lStack_2510 = CONCAT44(lStack_2510._4_4_,iVar10);
            if ((longlong *)local_24a0._8_8_ == local_2490) {
              FUN_180269e30();
            }
            else {
              *(char **)local_24a0._8_8_ = local_2518;
              *(longlong *)(local_24a0._8_8_ + 8) = lStack_2510;
              local_24a0._8_8_ = (longlong *)(local_24a0._8_8_ + 0x10);
            }
          }
        }
LAB_180271c3b:
        plVar18 = (longlong *)*plVar18;
      } while (plVar18 != plVar6);
      lVar15 = local_24a0._0_8_;
    }
    uVar26 = local_24a0._8_8_;
    if (lVar15 != local_24a0._8_8_) {
      uVar28 = 0;
      fVar29 = 4096.0;
      do {
        local_2428 = 0;
        local_2420 = 0;
        local_2418 = 0;
        local_2410 = 0;
        local_2408 = 0;
        local_2400 = 0;
        local_23f8 = 0;
        local_23f0 = 0;
        local_23e8 = 0xffffffff;
        local_23e4 = uVar28;
        FUN_18063ab10(local_23e0,0,800);
        FUN_180233c60(local_23e0);
        local_20c0 = 0;
        FUN_18063ab10(local_20b8,0,0x1000);
        puVar17 = auStack_20b4;
        lVar13 = 8;
        do {
          *(undefined8 *)(puVar17 + -4) = 0;
          *(undefined8 *)(puVar17 + 4) = 0;
          *(undefined8 *)(puVar17 + 0xc) = 0;
          *(undefined4 *)(puVar17 + 0x14) = 0;
          *(undefined8 *)(puVar17 + 0x18) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x20) = 0;
          *(undefined8 *)(puVar17 + 0x28) = 0;
          *(undefined8 *)(puVar17 + 0x30) = 0;
          *(undefined8 *)(puVar17 + 0x38) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x40) = 0;
          *(undefined8 *)(puVar17 + 0x48) = 0;
          *(undefined8 *)(puVar17 + 0x50) = 0;
          *(undefined8 *)(puVar17 + 0x58) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x60) = 0;
          *(undefined8 *)(puVar17 + 0x68) = 0;
          *(undefined8 *)(puVar17 + 0x70) = 0;
          *(undefined8 *)(puVar17 + 0x78) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x80) = 0;
          *(undefined8 *)(puVar17 + 0x88) = 0;
          *(undefined8 *)(puVar17 + 0x90) = 0;
          *(undefined8 *)(puVar17 + 0x98) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0xa0) = 0;
          *(undefined8 *)(puVar17 + 0xa8) = 0;
          *(undefined8 *)(puVar17 + 0xb0) = 0;
          *(undefined8 *)(puVar17 + 0xb8) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0xc0) = 0;
          *(undefined8 *)(puVar17 + 200) = 0;
          *(undefined8 *)(puVar17 + 0xd0) = 0;
          *(undefined8 *)(puVar17 + 0xd8) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0xe0) = 0;
          *(undefined8 *)(puVar17 + 0xe8) = 0;
          *(undefined8 *)(puVar17 + 0xf0) = 0;
          *(undefined8 *)(puVar17 + 0xf8) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x100) = 0;
          *(undefined8 *)(puVar17 + 0x108) = 0;
          *(undefined8 *)(puVar17 + 0x110) = 0;
          *(undefined8 *)(puVar17 + 0x118) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x120) = 0;
          *(undefined8 *)(puVar17 + 0x128) = 0;
          *(undefined8 *)(puVar17 + 0x130) = 0;
          *(undefined8 *)(puVar17 + 0x138) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x140) = 0;
          *(undefined8 *)(puVar17 + 0x148) = 0;
          *(undefined8 *)(puVar17 + 0x150) = 0;
          *(undefined8 *)(puVar17 + 0x158) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x160) = 0;
          *(undefined8 *)(puVar17 + 0x168) = 0;
          *(undefined8 *)(puVar17 + 0x170) = 0;
          *(undefined8 *)(puVar17 + 0x178) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x180) = 0;
          *(undefined8 *)(puVar17 + 0x188) = 0;
          *(undefined8 *)(puVar17 + 400) = 0;
          *(undefined8 *)(puVar17 + 0x198) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x1a0) = 0;
          *(undefined8 *)(puVar17 + 0x1a8) = 0;
          *(undefined8 *)(puVar17 + 0x1b0) = 0;
          *(undefined8 *)(puVar17 + 0x1b8) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x1c0) = 0;
          *(undefined8 *)(puVar17 + 0x1c8) = 0;
          *(undefined8 *)(puVar17 + 0x1d0) = 0;
          *(undefined8 *)(puVar17 + 0x1d8) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x1e0) = 0;
          *(undefined8 *)(puVar17 + 0x1e8) = 0;
          *(undefined8 *)(puVar17 + 0x1f0) = 0;
          *(undefined4 *)(puVar17 + 0x1f8) = 0x3f800000;
          puVar17 = puVar17 + 0x200;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        FUN_18063ab10(local_10b8,0);
        puVar17 = auStack_10b4;
        local_74 = 8;
        do {
          *(undefined8 *)(puVar17 + -4) = 0;
          *(undefined8 *)(puVar17 + 4) = 0;
          *(undefined8 *)(puVar17 + 0xc) = 0;
          *(undefined4 *)(puVar17 + 0x14) = 0;
          *(undefined8 *)(puVar17 + 0x18) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x20) = 0;
          *(undefined8 *)(puVar17 + 0x28) = 0;
          *(undefined8 *)(puVar17 + 0x30) = 0;
          *(undefined8 *)(puVar17 + 0x38) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x40) = 0;
          *(undefined8 *)(puVar17 + 0x48) = 0;
          *(undefined8 *)(puVar17 + 0x50) = 0;
          *(undefined8 *)(puVar17 + 0x58) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x60) = 0;
          *(undefined8 *)(puVar17 + 0x68) = 0;
          *(undefined8 *)(puVar17 + 0x70) = 0;
          *(undefined8 *)(puVar17 + 0x78) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x80) = 0;
          *(undefined8 *)(puVar17 + 0x88) = 0;
          *(undefined8 *)(puVar17 + 0x90) = 0;
          *(undefined8 *)(puVar17 + 0x98) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0xa0) = 0;
          *(undefined8 *)(puVar17 + 0xa8) = 0;
          *(undefined8 *)(puVar17 + 0xb0) = 0;
          *(undefined8 *)(puVar17 + 0xb8) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0xc0) = 0;
          *(undefined8 *)(puVar17 + 200) = 0;
          *(undefined8 *)(puVar17 + 0xd0) = 0;
          *(undefined8 *)(puVar17 + 0xd8) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0xe0) = 0;
          *(undefined8 *)(puVar17 + 0xe8) = 0;
          *(undefined8 *)(puVar17 + 0xf0) = 0;
          *(undefined8 *)(puVar17 + 0xf8) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x100) = 0;
          *(undefined8 *)(puVar17 + 0x108) = 0;
          *(undefined8 *)(puVar17 + 0x110) = 0;
          *(undefined8 *)(puVar17 + 0x118) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x120) = 0;
          *(undefined8 *)(puVar17 + 0x128) = 0;
          *(undefined8 *)(puVar17 + 0x130) = 0;
          *(undefined8 *)(puVar17 + 0x138) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x140) = 0;
          *(undefined8 *)(puVar17 + 0x148) = 0;
          *(undefined8 *)(puVar17 + 0x150) = 0;
          *(undefined8 *)(puVar17 + 0x158) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x160) = 0;
          *(undefined8 *)(puVar17 + 0x168) = 0;
          *(undefined8 *)(puVar17 + 0x170) = 0;
          *(undefined8 *)(puVar17 + 0x178) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x180) = 0;
          *(undefined8 *)(puVar17 + 0x188) = 0;
          *(undefined8 *)(puVar17 + 400) = 0;
          *(undefined8 *)(puVar17 + 0x198) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x1a0) = 0;
          *(undefined8 *)(puVar17 + 0x1a8) = 0;
          *(undefined8 *)(puVar17 + 0x1b0) = 0;
          *(undefined8 *)(puVar17 + 0x1b8) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x1c0) = 0;
          *(undefined8 *)(puVar17 + 0x1c8) = 0;
          *(undefined8 *)(puVar17 + 0x1d0) = 0;
          *(undefined8 *)(puVar17 + 0x1d8) = 0x3f800000;
          *(undefined8 *)(puVar17 + 0x1e0) = 0;
          *(undefined8 *)(puVar17 + 0x1e8) = 0;
          *(undefined8 *)(puVar17 + 0x1f0) = 0;
          *(undefined4 *)(puVar17 + 0x1f8) = 0x3f800000;
          puVar17 = puVar17 + 0x200;
          local_74 = local_74 + -1;
        } while (local_74 != 0);
        local_b8 = 0;
        uStack_b0 = 0;
        local_a8 = ZEXT816(0);
        local_98 = 0;
        uStack_90 = 0;
        local_7c = 0;
        local_88 = uVar28;
        local_84 = uVar28;
        local_80 = uVar28;
        local_78 = uVar28;
        cVar7 = FUN_18026fe00();
        if (cVar7 != '\0') {
          plVar18 = (longlong *)FUN_18027b350(param_1,local_2488);
          lVar13 = *plVar18;
          if (*(longlong *)(lVar13 + 0x38) != 0) {
            lVar25 = *(longlong *)
                      (*(longlong *)(lVar13 + 0x20) +
                      (*(longlong *)(lVar13 + 0x28) - 1U & *(ulonglong *)(lVar13 + 0x30)) * 8);
            fVar30 = (float)uStack_b0 - *(float *)(lVar25 + 0x2378);
            fVar27 = local_b8._4_4_ - *(float *)(lVar25 + 0x2374);
            fVar5 = (float)local_b8 - *(float *)(lVar25 + 0x2370);
            if (fVar29 < fVar5 * fVar5 + fVar27 * fVar27 + fVar30 * fVar30) {
              FUN_1801bd550(lVar13 + 0x18);
            }
          }
          if (*(ulonglong *)(lVar13 + 0x28) <= *(longlong *)(lVar13 + 0x38) + 1U) {
            FUN_18027bf90(lVar13 + 0x18);
          }
          uVar21 = *(longlong *)(lVar13 + 0x28) - 1;
          puVar1 = (ulonglong *)(lVar13 + 0x30);
          *puVar1 = *puVar1 & uVar21;
          lVar25 = *(longlong *)(lVar13 + 0x30);
          if (*puVar1 == 0) {
            lVar25 = *(longlong *)(lVar13 + 0x28);
          }
          uVar21 = uVar21 & lVar25 - 1U;
          if (*(longlong *)(*(longlong *)(lVar13 + 0x20) + uVar21 * 8) == 0) {
            if (DAT_180c7df28 == 0) {
              local_2518 = "tier0.dll:g_pMemAlloc";
              lStack_2510 = 0x15;
              DAT_180c7df28 = FUN_180451750(&local_2518);
            }
            lVar19 = (**(code **)(**(longlong **)DAT_180c7df28 + 8))();
            if (lVar19 == 0) goto LAB_180272600;
            uVar24 = lVar19 + 0x27U & 0xffffffffffffffe0;
            *(longlong *)(uVar24 - 8) = lVar19;
            *(ulonglong *)(*(longlong *)(lVar13 + 0x20) + uVar21 * 8) = uVar24;
          }
          FUN_18063aed0();
          *(ulonglong *)(lVar13 + 0x30) = lVar25 - 1U;
          *(longlong *)(lVar13 + 0x38) = *(longlong *)(lVar13 + 0x38) + 1;
        }
        lVar15 = lVar15 + 0x10;
      } while (lVar15 != uVar26);
      lVar15 = local_24a0._0_8_;
    }
    plVar23 = (longlong *)*plVar23;
    plVar18 = (longlong *)*plVar23;
    if (plVar18 != plVar23) {
      do {
        if (((DAT_180cad2e0 == 1) && (DAT_180cad3c0 != '\0')) || (uVar21 = 2, DAT_180cb15f8 != '\0')
           ) {
          uVar21 = 0x20;
        }
        uVar24 = plVar18[7];
        while (uVar21 < uVar24) {
          uVar24 = uVar24 - 1;
          plVar18[7] = uVar24;
          if (uVar24 == 0) {
            plVar18[6] = 0;
          }
        }
        uVar21 = plVar18[6];
        uVar24 = uVar24 + uVar21;
        for (; uVar21 != uVar24; uVar21 = uVar21 + 1) {
          lVar15 = *(longlong *)(plVar18[4] + (plVar18[5] - 1U & uVar21) * 8);
          if ((*(char *)(lVar15 + 0x23b8) == '\0') ||
             (cVar7 = FUN_180232a20(&local_2508,*(undefined4 *)(lVar15 + 0x23b0)), cVar7 == '\0')) {
            uVar8 = 0;
          }
          else {
            uVar8 = 1;
          }
          *(undefined1 *)(lVar15 + 0x23b9) = uVar8;
        }
        plVar18 = (longlong *)*plVar18;
      } while (plVar18 != plVar23);
      lVar15 = local_24a0._0_8_;
    }
    if (lVar15 != 0) {
      lVar13 = lVar15;
      if ((0xfff < ((longlong)local_2490 - lVar15 & 0xfffffffffffffff0U)) &&
         (lVar13 = *(longlong *)(lVar15 + -8), 0x1f < (lVar15 - lVar13) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar13);
      local_24a0 = (undefined1  [16])0x0;
      local_2490 = (longlong *)0x0;
    }
    FUN_18017e9a0(&local_2468);
    SRWLock = local_24e8;
  }
  ReleaseSRWLockExclusive(SRWLock);
}



