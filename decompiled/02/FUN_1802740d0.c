// FUN_1802740d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802740d0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802740d0(void)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined1 auVar4 [16];
  undefined4 uVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  longlong lVar12;
  ULONGLONG UVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined2 uStack_84;
  ushort uStack_82;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined2 local_60;
  undefined1 uStack_5e;
  undefined1 auStack_5d [13];
  undefined8 local_50;
  longlong lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  local_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  local_80 = 0;
  uVar15 = 0xffffffffffffffff;
  uStack_7c = 0xffffffff;
  uStack_78 = 0;
  uStack_74 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  local_60 = 0;
  uStack_5e = 0;
  _DAT_180cc9348 = (ulonglong)uStack_82 << 0x30;
  DAT_180cc9330 = 0;
  DAT_180cc9338 = 0;
  DAT_180cc9340 = 0;
  _DAT_180cc9350 = 0xffffffff00000000;
  _DAT_180cc9358 = 0;
  _DAT_180cc9360 = 0;
  _DAT_180cc9368 = 0;
  auVar2._13_3_ = 0;
  auVar2._0_13_ = auStack_5d;
  auVar2 = vinsertps_avx(auVar2 << 0x18,ZEXT816(0),0x10);
  _DAT_180cc9370 = vinsertps_avx(auVar2,ZEXT816(0),0x20);
  lVar12 = FUN_18027abc0();
  *(undefined1 *)(lVar12 + 0x1c) = 0;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_50 = _DAT_180bb8890;
  lStack_48 = lRam0000000180bb8898;
  uStack_40 = uRam0000000180bb88a0;
  uStack_38 = uRam0000000180bb88a8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  lVar12 = lStack_48;
  if (lStack_48 == 0) {
    return;
  }
  lVar14 = *DAT_180bb8958;
  iVar10 = DAT_180c64e38;
  if (DAT_180c64e38 == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c64e40) {
      iVar10 = 0;
    }
    else {
      local_a8 = &DAT_1808f0cb0;
      iVar10 = FUN_1805f68d0(&DAT_1808f0cb0);
      if (iVar10 != 0) goto LAB_180274ed6;
      if (DAT_1808f0cfc == 0x7fffffff) {
        DAT_1808f0cfc = 0x7ffffffe;
        goto LAB_180274ecb;
      }
      if ((DAT_180c64e38 == 0) && (DAT_180c64e40 <= UVar13)) {
        DAT_180c64e38 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
        if (DAT_180c64e38 == 0) {
          DAT_180c64e40 = UVar13 + 1000;
        }
        else {
          DAT_180c64e40 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c64e38;
      FUN_1805f68fc(&DAT_1808f0cb0);
    }
  }
  lVar1 = *(longlong *)(iVar10 + lVar12);
  if (lVar14 == 0) {
    return;
  }
  if (lVar1 == 0) {
    return;
  }
  _DAT_180cc9358 = CONCAT44(*(undefined4 *)(lVar14 + 0x44),DAT_180cc9358);
  _DAT_180cc9360 = CONCAT44(*(undefined4 *)(lVar14 + 0x30),_DAT_180cc9360);
  iVar10 = DAT_180c64e30;
  if (DAT_180c64e30 == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c64e28) {
      iVar10 = 0;
    }
    else {
      local_a8 = &DAT_1808f0c60;
      iVar10 = FUN_1805f68d0(&DAT_1808f0c60);
      if (iVar10 != 0) goto LAB_180274ed6;
      if (DAT_1808f0cac == 0x7fffffff) {
        DAT_1808f0cac = 0x7ffffffe;
        goto LAB_180274ecb;
      }
      if ((DAT_180c64e30 == 0) && (DAT_180c64e28 <= UVar13)) {
        DAT_180c64e30 = FUN_1804174b0("C_CSPlayerPawn",0xf3e9a9ed);
        if (DAT_180c64e30 == 0) {
          DAT_180c64e28 = UVar13 + 1000;
        }
        else {
          DAT_180c64e28 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c64e30;
      FUN_1805f68fc(&DAT_1808f0c60);
    }
  }
  DAT_180cc9371 = *(undefined1 *)(iVar10 + lVar12);
  iVar10 = DAT_180c64e34;
  if (DAT_180c64e34 == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c64e10) {
      iVar10 = 0;
    }
    else {
      local_a8 = &DAT_1808f0c10;
      iVar10 = FUN_1805f68d0(&DAT_1808f0c10);
      if (iVar10 != 0) goto LAB_180274ed6;
      if (DAT_1808f0c5c == 0x7fffffff) {
        DAT_1808f0c5c = 0x7ffffffe;
        goto LAB_180274ecb;
      }
      if ((DAT_180c64e34 == 0) && (DAT_180c64e10 <= UVar13)) {
        DAT_180c64e34 = FUN_1804174b0("CCSPlayer_MovementServices",0x552bd122);
        if (DAT_180c64e34 == 0) {
          DAT_180c64e10 = UVar13 + 1000;
        }
        else {
          DAT_180c64e10 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c64e34;
      FUN_1805f68fc(&DAT_1808f0c10);
    }
  }
  iVar8 = DAT_180c64e20;
  if (DAT_180c64e20 == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c64e18) {
      iVar8 = 0;
    }
    else {
      local_a8 = &DAT_1808f0b70;
      iVar8 = FUN_1805f68d0(&DAT_1808f0b70);
      if (iVar8 != 0) goto LAB_180274ed6;
      if (DAT_1808f0bbc == 0x7fffffff) {
        DAT_1808f0bbc = 0x7ffffffe;
        goto LAB_180274ecb;
      }
      if ((DAT_180c64e20 == 0) && (DAT_180c64e18 <= UVar13)) {
        DAT_180c64e20 = FUN_1804174b0("CCSPlayerModernJump",0x680c80ac);
        if (DAT_180c64e20 == 0) {
          DAT_180c64e18 = UVar13 + 1000;
        }
        else {
          DAT_180c64e18 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c64e20;
      FUN_1805f68fc(&DAT_1808f0b70);
    }
  }
  _DAT_180cc9360 =
       CONCAT44(DAT_180cc9364,DAT_180cc935c - *(int *)((longlong)iVar10 + iVar8 + lVar1));
  iVar10 = DAT_180c64e00;
  if (DAT_180c64e00 == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c64e08) {
      iVar10 = 0;
    }
    else {
      local_a8 = &DAT_1808f0bc0;
      iVar10 = FUN_1805f68d0(&DAT_1808f0bc0);
      if (iVar10 != 0) goto LAB_180274ed6;
      if (DAT_1808f0c0c == 0x7fffffff) {
        DAT_1808f0c0c = 0x7ffffffe;
        goto LAB_180274ecb;
      }
      if ((DAT_180c64e00 == 0) && (DAT_180c64e08 <= UVar13)) {
        DAT_180c64e00 = FUN_1804174b0("C_BasePlayerPawn",0x51b23a93);
        if (DAT_180c64e00 == 0) {
          DAT_180c64e08 = UVar13 + 1000;
        }
        else {
          DAT_180c64e08 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c64e00;
      FUN_1805f68fc(&DAT_1808f0bc0);
    }
  }
  DAT_180cc9338 = *(longlong *)(iVar10 + lVar12);
  if (DAT_180cc9338 == 0) {
    return;
  }
  iVar10 = DAT_180c64df8;
  if (DAT_180c64df8 == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c64df0) {
      iVar10 = 0;
    }
    else {
      local_a8 = &DAT_1808f0b20;
      iVar10 = FUN_1805f68d0(&DAT_1808f0b20);
      if (iVar10 != 0) goto LAB_180274ed6;
      if (DAT_1808f0b6c == 0x7fffffff) {
        DAT_1808f0b6c = 0x7ffffffe;
        goto LAB_180274ecb;
      }
      if ((DAT_180c64df8 == 0) && (DAT_180c64df0 <= UVar13)) {
        DAT_180c64df8 = FUN_1804174b0("CPlayer_WeaponServices",0x940131c5);
        if (DAT_180c64df8 == 0) {
          DAT_180c64df0 = UVar13 + 1000;
        }
        else {
          DAT_180c64df0 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c64df8;
      FUN_1805f68fc(&DAT_1808f0b20);
    }
  }
  if (*(int *)(iVar10 + DAT_180cc9338) == 0) {
    return;
  }
  DAT_180cc9330 = FUN_1803d4150();
  if (DAT_180cc9330 == 0) {
    return;
  }
  iVar10 = DAT_180c64dfc;
  if (DAT_180c64dfc == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c64dd8) {
      iVar10 = 0;
    }
    else {
      local_a8 = &DAT_1808f0ad0;
      iVar10 = FUN_1805f68d0(&DAT_1808f0ad0);
      if (iVar10 != 0) goto LAB_180274ed6;
      if (DAT_1808f0b1c == 0x7fffffff) {
        DAT_1808f0b1c = 0x7ffffffe;
        goto LAB_180274ecb;
      }
      if ((DAT_180c64dfc == 0) && (DAT_180c64dd8 <= UVar13)) {
        DAT_180c64dfc = FUN_1804174b0("C_BaseEntity",0xc02ce796);
        if (DAT_180c64dfc == 0) {
          DAT_180c64dd8 = UVar13 + 1000;
        }
        else {
          DAT_180c64dd8 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c64dfc;
      FUN_1805f68fc(&DAT_1808f0ad0);
    }
  }
  DAT_180cc9340 = *(longlong *)((longlong)iVar10 + 8 + DAT_180cc9330);
  if (DAT_180cc9340 == 0) {
    return;
  }
  iVar10 = DAT_180c64de8;
  if (DAT_180c64de8 == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c64de0) {
      iVar10 = 0;
    }
    else {
      local_a8 = &DAT_1808f0a30;
      iVar10 = FUN_1805f68d0(&DAT_1808f0a30);
      if (iVar10 != 0) goto LAB_180274ed6;
      if (DAT_1808f0a7c == 0x7fffffff) {
        DAT_1808f0a7c = 0x7ffffffe;
        goto LAB_180274ecb;
      }
      if ((DAT_180c64de8 == 0) && (DAT_180c64de0 <= UVar13)) {
        DAT_180c64de8 = FUN_1804174b0("CCSWeaponBaseVData",0x3fc92844);
        if (DAT_180c64de8 == 0) {
          DAT_180c64de0 = UVar13 + 1000;
        }
        else {
          DAT_180c64de0 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c64de8;
      FUN_1805f68fc(&DAT_1808f0a30);
    }
  }
  _DAT_180cc9368 = CONCAT44(*(undefined4 *)(iVar10 + DAT_180cc9340),DAT_180cc9368);
  iVar10 = DAT_180c64dc8;
  if (DAT_180c64dc8 == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c64dd0) {
      iVar10 = 0;
    }
    else {
      local_a8 = &DAT_1808f0a80;
      iVar10 = FUN_1805f68d0(&DAT_1808f0a80);
      if (iVar10 != 0) goto LAB_180274ed6;
      if (DAT_1808f0acc == 0x7fffffff) {
        DAT_1808f0acc = 0x7ffffffe;
        goto LAB_180274ecb;
      }
      if ((DAT_180c64dc8 == 0) && (DAT_180c64dd0 <= UVar13)) {
        DAT_180c64dc8 = FUN_1804174b0("CCSWeaponBaseVData",0xb2a4b729);
        if (DAT_180c64dc8 == 0) {
          DAT_180c64dd0 = UVar13 + 1000;
        }
        else {
          DAT_180c64dd0 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c64dc8;
      FUN_1805f68fc(&DAT_1808f0a80);
    }
  }
  _DAT_180cc9348 = CONCAT44(_DAT_180cc934c,*(undefined4 *)(iVar10 + DAT_180cc9340));
  iVar10 = DAT_180c64dc0;
  if (DAT_180c64dc0 == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c64db8) {
      iVar10 = 0;
    }
    else {
      local_a8 = &DAT_1808f09e0;
      iVar10 = FUN_1805f68d0(&DAT_1808f09e0);
      if (iVar10 != 0) goto LAB_180274ed6;
      if (DAT_1808f0a2c == 0x7fffffff) {
        DAT_1808f0a2c = 0x7ffffffe;
        goto LAB_180274ecb;
      }
      if ((DAT_180c64dc0 == 0) && (DAT_180c64db8 <= UVar13)) {
        DAT_180c64dc0 = FUN_1804174b0("C_EconEntity",0x537b0586);
        if (DAT_180c64dc0 == 0) {
          DAT_180c64db8 = UVar13 + 1000;
        }
        else {
          DAT_180c64db8 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c64dc0;
      FUN_1805f68fc(&DAT_1808f09e0);
    }
  }
  iVar8 = DAT_180c64dc4;
  if (DAT_180c64dc4 == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c64da0) {
      iVar8 = 0;
    }
    else {
      local_a8 = &DAT_1808f0990;
      iVar8 = FUN_1805f68d0(&DAT_1808f0990);
      if (iVar8 != 0) goto LAB_180274ed6;
      if (DAT_1808f09dc == 0x7fffffff) {
        DAT_1808f09dc = 0x7ffffffe;
        goto LAB_180274ecb;
      }
      if ((DAT_180c64dc4 == 0) && (DAT_180c64da0 <= UVar13)) {
        DAT_180c64dc4 = FUN_1804174b0("C_AttributeContainer",0xdce71866);
        if (DAT_180c64dc4 == 0) {
          DAT_180c64da0 = UVar13 + 1000;
        }
        else {
          DAT_180c64da0 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c64dc4;
      FUN_1805f68fc(&DAT_1808f0990);
    }
  }
  iVar9 = DAT_180c64db0;
  if (DAT_180c64db0 == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c64da8) {
      iVar9 = 0;
    }
    else {
      local_a8 = &DAT_1808f08f0;
      iVar9 = FUN_1805f68d0(&DAT_1808f08f0);
      if (iVar9 != 0) goto LAB_180274ed6;
      if (DAT_1808f093c == 0x7fffffff) {
        DAT_1808f093c = 0x7ffffffe;
        goto LAB_180274ecb;
      }
      if ((DAT_180c64db0 == 0) && (DAT_180c64da8 <= UVar13)) {
        DAT_180c64db0 = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
        if (DAT_180c64db0 == 0) {
          DAT_180c64da8 = UVar13 + 1000;
        }
        else {
          DAT_180c64da8 = 0xffffffffffffffff;
        }
      }
      iVar9 = DAT_180c64db0;
      FUN_1805f68fc(&DAT_1808f08f0);
    }
  }
  _DAT_180cc9348 =
       CONCAT24(*(undefined2 *)((longlong)iVar10 + iVar8 + DAT_180cc9330 + (longlong)iVar9),
                DAT_180cc9348);
  iVar10 = DAT_180c64d90;
  if (DAT_180c64d90 == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c64d98) {
      iVar10 = 0;
    }
    else {
      local_a8 = &DAT_1808f0940;
      iVar10 = FUN_1805f68d0(&DAT_1808f0940);
      if (iVar10 != 0) goto LAB_180274ed6;
      if (DAT_1808f098c == 0x7fffffff) {
        DAT_1808f098c = 0x7ffffffe;
        goto LAB_180274ecb;
      }
      if ((DAT_180c64d90 == 0) && (DAT_180c64d98 <= UVar13)) {
        DAT_180c64d90 = FUN_1804174b0("CCSWeaponBaseVData",0xa23e232c);
        if (DAT_180c64d90 == 0) {
          DAT_180c64d98 = UVar13 + 1000;
        }
        else {
          DAT_180c64d98 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c64d90;
      FUN_1805f68fc(&DAT_1808f0940);
    }
  }
  _DAT_180cc9350 = CONCAT44(DAT_180cc9354,*(undefined4 *)(iVar10 + DAT_180cc9340));
  iVar10 = DAT_180c64d88;
  if (DAT_180c64d88 == 0) {
    UVar13 = GetTickCount64();
    if (DAT_180c64d80 <= UVar13) {
      local_a8 = &DAT_1808f08a0;
      iVar10 = FUN_1805f68d0(&DAT_1808f08a0);
      if (iVar10 != 0) goto LAB_180274ed6;
      if (DAT_1808f08ec == 0x7fffffff) {
        DAT_1808f08ec = 0x7ffffffe;
        goto LAB_180274ecb;
      }
      if ((DAT_180c64d88 == 0) && (DAT_180c64d80 <= UVar13)) {
        DAT_180c64d88 = FUN_1804174b0("C_CSWeaponBase",0xaa0e449e);
        if (DAT_180c64d88 == 0) {
          DAT_180c64d80 = UVar13 + 1000;
        }
        else {
          DAT_180c64d80 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c64d88;
      FUN_1805f68fc(&DAT_1808f08a0);
      if (iVar10 != 0) goto LAB_180274c86;
    }
    uVar11 = 0xffffffff;
  }
  else {
LAB_180274c86:
    lVar14 = iVar10 + DAT_180cc9330;
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    bVar3 = false;
    if (lVar14 != 0) {
      local_a8 = (undefined *)((ulonglong)local_a8 & 0xffffffff00000000);
      cVar6 = FUN_1804514f0(&local_a8,lVar14,4);
      if (cVar6 == '\0') {
        bVar3 = false;
      }
      else {
        bVar3 = true;
      }
    }
    uVar5 = local_a8._0_4_;
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    uVar11 = 0xffffffff;
    if (bVar3) {
      uVar11 = uVar5;
    }
  }
  _DAT_180cc9350 = CONCAT44(uVar11,DAT_180cc9350);
  iVar10 = DAT_180c64d8c;
  if (DAT_180c64d8c == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c64d68) {
      iVar10 = 0;
    }
    else {
      local_a8 = &DAT_1808f0850;
      iVar10 = FUN_1805f68d0(&DAT_1808f0850);
      if (iVar10 != 0) goto LAB_180274ed6;
      if (DAT_1808f089c == 0x7fffffff) {
        DAT_1808f089c = 0x7ffffffe;
        goto LAB_180274ecb;
      }
      if ((DAT_180c64d8c == 0) && (DAT_180c64d68 <= UVar13)) {
        DAT_180c64d8c = FUN_1804174b0("C_CSWeaponBase",0xd779e87b);
        if (DAT_180c64d8c == 0) {
          DAT_180c64d68 = UVar13 + 1000;
        }
        else {
          DAT_180c64d68 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c64d8c;
      FUN_1805f68fc(&DAT_1808f0850);
    }
  }
  _DAT_180cc9358 = CONCAT44(DAT_180cc935c,*(undefined4 *)(iVar10 + DAT_180cc9330));
  iVar10 = DAT_180c64d78;
  if (DAT_180c64d78 == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c64d70) {
      iVar10 = 0;
    }
    else {
      local_a8 = &DAT_1808f07f0;
      iVar10 = FUN_1805f68d0(&DAT_1808f07f0);
      if (iVar10 != 0) {
LAB_180274ed6:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808f083c == 0x7fffffff) {
        DAT_1808f083c = 0x7ffffffe;
LAB_180274ecb:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c64d78 == 0) && (DAT_180c64d70 <= UVar13)) {
        DAT_180c64d78 = FUN_1804174b0("CCSWeaponBaseVData",0xec4c9592);
        if (DAT_180c64d78 == 0) {
          uVar15 = UVar13 + 1000;
        }
        DAT_180c64d70 = uVar15;
      }
      iVar10 = DAT_180c64d78;
      FUN_1805f68fc(&DAT_1808f07f0);
    }
  }
  auVar2 = _DAT_180cc9370;
  _DAT_180cc9368 = CONCAT44(DAT_180cc936c,*(undefined4 *)(iVar10 + DAT_180cc9340));
  if ((((DAT_180b8e114 & 1) == 0) && (DAT_180cc934c == 0x28)) && (DAT_180cc9371 != '\0')) {
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  DAT_180cc9370 = uVar7;
  auVar4 = _DAT_180cc9370;
  DAT_180cc9370_1._2_13_ = auVar2._3_13_;
  _DAT_180cc9370 = auVar4._0_2_;
  DAT_180cc9372 = 1;
  FUN_18026e1c0(&DAT_180cc9380,DAT_180cc9340,DAT_180cc9330);
  return;
}



