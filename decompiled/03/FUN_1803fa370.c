// FUN_1803fa370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803fa370 */

undefined8 *
FUN_1803fa370(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  double dVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 uVar5;
  int iVar6;
  int *piVar7;
  ULONGLONG UVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong *puVar11;
  undefined8 *puVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  undefined *local_3b8;
  undefined1 local_3b0 [16];
  undefined1 local_3a0 [888];
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = param_7;
  param_1[0xc] = param_5;
  *(undefined4 *)(param_1 + 0xd) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6c) = param_6;
  *(undefined1 *)((longlong)param_1 + 0x6d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x7c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x8c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined1 *)((longlong)param_1 + 0xac) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((longlong)param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 0;
  *(undefined1 *)((longlong)param_1 + 300) = 0;
  *(undefined1 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x14c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x16c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0x38) = 0;
  *(undefined1 *)((longlong)param_1 + 500) = 0;
  *(undefined1 *)((longlong)param_1 + 0x214) = 0;
  *(undefined1 *)((longlong)param_1 + 0x219) = 0;
  *(undefined1 *)((longlong)param_1 + 0x21b) = 0;
  *(undefined1 *)((longlong)param_1 + 0x21d) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x264) = 0;
  *(undefined1 *)((longlong)param_1 + 0x27c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x284) = 0;
  *(undefined1 *)(param_1 + 0x56) = 0;
  *(undefined1 *)((longlong)param_1 + 0x304) = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  *(undefined1 *)((longlong)param_1 + 0x33c) = 0;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(undefined1 *)((longlong)param_1 + 0x39c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3ac) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3bc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3c4) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3e4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3f4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x404) = 0;
  *(undefined1 *)((longlong)param_1 + 0x414) = 0;
  *(undefined1 *)(param_1 + 0x86) = 0;
  *(undefined1 *)((longlong)param_1 + 0x43c) = 0;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)((longlong)param_1 + 0x484) = 0;
  *(undefined1 *)((longlong)param_1 + 0x494) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4a4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4b4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4c4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4d4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x4e4) = 0;
  *(undefined1 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  *(undefined1 *)((longlong)param_1 + 0x55c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x57c) = 0;
  *(undefined1 *)((longlong)param_1 + 0x581) = 0;
  *(undefined1 *)((longlong)param_1 + 0x583) = 0;
  *(undefined1 *)((longlong)param_1 + 0x585) = 0;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5cc) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5e4) = 0;
  *(undefined1 *)((longlong)param_1 + 0x5ec) = 0;
  *(undefined1 *)(param_1 + 0xc3) = 0;
  *(undefined1 *)((longlong)param_1 + 0x66c) = 0;
  *(undefined1 *)(param_1 + 0xcf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x6a4) = 0;
  *(undefined1 *)(param_1 + 0xdf) = 0;
  *(undefined1 *)((longlong)param_1 + 0x704) = 0;
  *(undefined1 *)((longlong)param_1 + 0x714) = 0;
  *(undefined1 *)((longlong)param_1 + 0x724) = 0;
  *(undefined1 *)((longlong)param_1 + 0x72c) = 0;
  *(undefined1 *)(param_1 + 0xe7) = 0;
  *(undefined1 *)((longlong)param_1 + 0x74c) = 0;
  piVar7 = (int *)FUN_180415e00();
  if (*piVar7 == 1) {
    uVar15 = -(uint)(*(char *)((longlong)param_1 + 0x6c) != '\0') & 8;
    UVar8 = GetTickCount64();
    uVar17 = *(ulonglong *)(&DAT_180c7d6e8 + uVar15);
    if (UVar8 < uVar17) {
      return param_1;
    }
    LOCK();
    bVar22 = uVar17 == *(ulonglong *)(&DAT_180c7d6e8 + uVar15);
    if (bVar22) {
      *(ULONGLONG *)(&DAT_180c7d6e8 + uVar15) = UVar8 + 2000;
    }
    UNLOCK();
    if (!bVar22) {
      return param_1;
    }
    local_3b0 = ZEXT816(0x18081ab20);
    FUN_18017bf40(local_3b0 + 8);
    uVar17 = 0xffffffffffffffff;
    iVar6 = DAT_180c7d7a8;
    if (DAT_180c7d7a8 == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c7d788) {
        iVar6 = 0;
      }
      else {
        local_3b8 = &DAT_1809c0c10;
        iVar6 = FUN_1805f68d0(&DAT_1809c0c10);
        if (iVar6 != 0) goto LAB_1803fb434;
        if (DAT_1809c0c5c == 0x7fffffff) {
          DAT_1809c0c5c = 0x7ffffffe;
          goto LAB_1803fb429;
        }
        if ((DAT_180c7d7a8 == 0) && (DAT_180c7d788 <= UVar8)) {
          DAT_180c7d7a8 = FUN_1804174b0("C_CSPlayerPawn",0x4ee662ac);
          if (DAT_180c7d7a8 == 0) {
            DAT_180c7d788 = UVar8 + 1000;
          }
          else {
            DAT_180c7d788 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c7d7a8;
        FUN_1805f68fc(&DAT_1809c0c10);
      }
    }
    *(int *)(param_1 + 3) = iVar6;
    iVar6 = DAT_180c7d798;
    if (DAT_180c7d798 == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c7d790) {
        iVar6 = 0;
      }
      else {
        local_3b8 = &DAT_1809c0c60;
        iVar6 = FUN_1805f68d0(&DAT_1809c0c60);
        if (iVar6 != 0) goto LAB_1803fb434;
        if (DAT_1809c0cac == 0x7fffffff) {
          DAT_1809c0cac = 0x7ffffffe;
          goto LAB_1803fb429;
        }
        if ((DAT_180c7d798 == 0) && (DAT_180c7d790 <= UVar8)) {
          DAT_180c7d798 = FUN_1804174b0("CGameSceneNode",0x5e8229ed);
          if (DAT_180c7d798 == 0) {
            DAT_180c7d790 = UVar8 + 1000;
          }
          else {
            DAT_180c7d790 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c7d798;
        FUN_1805f68fc(&DAT_1809c0c60);
      }
    }
    *(int *)((longlong)param_1 + 0x1c) = iVar6;
    iVar6 = DAT_180c7d79c;
    if (DAT_180c7d79c == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c7d7a0) {
        iVar6 = 0;
      }
      else {
        local_3b8 = &DAT_1809c0cb0;
        iVar6 = FUN_1805f68d0(&DAT_1809c0cb0);
        if (iVar6 != 0) goto LAB_1803fb434;
        if (DAT_1809c0cfc == 0x7fffffff) {
          DAT_1809c0cfc = 0x7ffffffe;
          goto LAB_1803fb429;
        }
        if ((DAT_180c7d79c == 0) && (DAT_180c7d7a0 <= UVar8)) {
          DAT_180c7d79c = FUN_1804174b0("CGameSceneNode",0xae099497);
          if (DAT_180c7d79c == 0) {
            DAT_180c7d7a0 = UVar8 + 1000;
          }
          else {
            DAT_180c7d7a0 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c7d79c;
        FUN_1805f68fc(&DAT_1809c0cb0);
      }
    }
    *(int *)(param_1 + 4) = iVar6;
    iVar6 = DAT_180c7d768;
    if (DAT_180c7d768 == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c7d760) {
        iVar6 = 0;
      }
      else {
        local_3b8 = &DAT_1809c0b70;
        iVar6 = FUN_1805f68d0(&DAT_1809c0b70);
        if (iVar6 != 0) goto LAB_1803fb434;
        if (DAT_1809c0bbc == 0x7fffffff) {
          DAT_1809c0bbc = 0x7ffffffe;
          goto LAB_1803fb429;
        }
        if ((DAT_180c7d768 == 0) && (DAT_180c7d760 <= UVar8)) {
          DAT_180c7d768 = FUN_1804174b0("CGameSceneNode",0xe9eb4068);
          if (DAT_180c7d768 == 0) {
            DAT_180c7d760 = UVar8 + 1000;
          }
          else {
            DAT_180c7d760 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c7d768;
        FUN_1805f68fc(&DAT_1809c0b70);
      }
    }
    *(int *)((longlong)param_1 + 0x24) = iVar6;
    iVar6 = DAT_180c7d76c;
    if (DAT_180c7d76c == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c7d770) {
        iVar6 = 0;
      }
      else {
        local_3b8 = &DAT_1809c0bc0;
        iVar6 = FUN_1805f68d0(&DAT_1809c0bc0);
        if (iVar6 != 0) goto LAB_1803fb434;
        if (DAT_1809c0c0c == 0x7fffffff) {
          DAT_1809c0c0c = 0x7ffffffe;
          goto LAB_1803fb429;
        }
        if ((DAT_180c7d76c == 0) && (DAT_180c7d770 <= UVar8)) {
          DAT_180c7d76c = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
          if (DAT_180c7d76c == 0) {
            DAT_180c7d770 = UVar8 + 1000;
          }
          else {
            DAT_180c7d770 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c7d76c;
        FUN_1805f68fc(&DAT_1809c0bc0);
      }
    }
    *(int *)(param_1 + 5) = iVar6;
    iVar6 = DAT_180c7d780;
    if (DAT_180c7d780 == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c7d778) {
        iVar6 = 0;
      }
      else {
        local_3b8 = &DAT_1809c0a80;
        iVar6 = FUN_1805f68d0(&DAT_1809c0a80);
        if (iVar6 != 0) goto LAB_1803fb434;
        if (DAT_1809c0acc == 0x7fffffff) {
          DAT_1809c0acc = 0x7ffffffe;
          goto LAB_1803fb429;
        }
        if ((DAT_180c7d780 == 0) && (DAT_180c7d778 <= UVar8)) {
          DAT_180c7d780 = FUN_1804174b0("CGameSceneNode",0x2874c05f);
          if (DAT_180c7d780 == 0) {
            DAT_180c7d778 = UVar8 + 1000;
          }
          else {
            DAT_180c7d778 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c7d780;
        FUN_1805f68fc(&DAT_1809c0a80);
      }
    }
    *(int *)((longlong)param_1 + 0x2c) = iVar6;
    iVar6 = DAT_180c7d740;
    if (DAT_180c7d740 == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c7d748) {
        iVar6 = 0;
      }
      else {
        local_3b8 = &DAT_1809c0ad0;
        iVar6 = FUN_1805f68d0(&DAT_1809c0ad0);
        if (iVar6 != 0) goto LAB_1803fb434;
        if (DAT_1809c0b1c == 0x7fffffff) {
          DAT_1809c0b1c = 0x7ffffffe;
          goto LAB_1803fb429;
        }
        if ((DAT_180c7d740 == 0) && (DAT_180c7d748 <= UVar8)) {
          DAT_180c7d740 = FUN_1804174b0("CGameSceneNode",0x7b9bf275);
          if (DAT_180c7d740 == 0) {
            DAT_180c7d748 = UVar8 + 1000;
          }
          else {
            DAT_180c7d748 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c7d740;
        FUN_1805f68fc(&DAT_1809c0ad0);
      }
    }
    *(int *)(param_1 + 6) = iVar6;
    iVar6 = DAT_180c7d758;
    if (DAT_180c7d758 == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c7d750) {
        iVar6 = 0;
      }
      else {
        local_3b8 = &DAT_1809c0b20;
        iVar6 = FUN_1805f68d0(&DAT_1809c0b20);
        if (iVar6 != 0) goto LAB_1803fb434;
        if (DAT_1809c0b6c == 0x7fffffff) {
          DAT_1809c0b6c = 0x7ffffffe;
          goto LAB_1803fb429;
        }
        if ((DAT_180c7d758 == 0) && (DAT_180c7d750 <= UVar8)) {
          DAT_180c7d758 = FUN_1804174b0("CPlayer_MovementServices",0x3976c40f);
          if (DAT_180c7d758 == 0) {
            DAT_180c7d750 = UVar8 + 1000;
          }
          else {
            DAT_180c7d750 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c7d758;
        FUN_1805f68fc(&DAT_1809c0b20);
      }
    }
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    iVar6 = DAT_180c7d75c;
    if (DAT_180c7d75c == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c7d720) {
        iVar6 = 0;
      }
      else {
        local_3b8 = &DAT_1809c0990;
        iVar6 = FUN_1805f68d0(&DAT_1809c0990);
        if (iVar6 != 0) goto LAB_1803fb434;
        if (DAT_1809c09dc == 0x7fffffff) {
          DAT_1809c09dc = 0x7ffffffe;
          goto LAB_1803fb429;
        }
        if ((DAT_180c7d75c == 0) && (DAT_180c7d720 <= UVar8)) {
          DAT_180c7d75c = FUN_1804174b0("CPlayer_MovementServices",0xb87214c);
          if (DAT_180c7d75c == 0) {
            DAT_180c7d720 = UVar8 + 1000;
          }
          else {
            DAT_180c7d720 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c7d75c;
        FUN_1805f68fc(&DAT_1809c0990);
      }
    }
    *(int *)(param_1 + 7) = iVar6;
    iVar6 = DAT_180c7d730;
    if (DAT_180c7d730 == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c7d728) {
        iVar6 = 0;
      }
      else {
        local_3b8 = &DAT_1809c09e0;
        iVar6 = FUN_1805f68d0(&DAT_1809c09e0);
        if (iVar6 != 0) goto LAB_1803fb434;
        if (DAT_1809c0a2c == 0x7fffffff) {
          DAT_1809c0a2c = 0x7ffffffe;
          goto LAB_1803fb429;
        }
        if ((DAT_180c7d730 == 0) && (DAT_180c7d728 <= UVar8)) {
          DAT_180c7d730 = FUN_1804174b0("CPlayer_MovementServices",0x98ccef82);
          if (DAT_180c7d730 == 0) {
            DAT_180c7d728 = UVar8 + 1000;
          }
          else {
            DAT_180c7d728 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c7d730;
        FUN_1805f68fc(&DAT_1809c09e0);
      }
    }
    *(int *)((longlong)param_1 + 0x3c) = iVar6;
    iVar6 = DAT_180c7d734;
    if (DAT_180c7d734 == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c7d738) {
        iVar6 = 0;
      }
      else {
        local_3b8 = &DAT_1809c0a30;
        iVar6 = FUN_1805f68d0(&DAT_1809c0a30);
        if (iVar6 != 0) goto LAB_1803fb434;
        if (DAT_1809c0a7c == 0x7fffffff) {
          DAT_1809c0a7c = 0x7ffffffe;
          goto LAB_1803fb429;
        }
        if ((DAT_180c7d734 == 0) && (DAT_180c7d738 <= UVar8)) {
          DAT_180c7d734 = FUN_1804174b0("C_BaseEntity",0x7cf77892);
          if (DAT_180c7d734 == 0) {
            DAT_180c7d738 = UVar8 + 1000;
          }
          else {
            DAT_180c7d738 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c7d734;
        FUN_1805f68fc(&DAT_1809c0a30);
      }
    }
    *(int *)(param_1 + 8) = iVar6;
    iVar6 = DAT_180c7d700;
    if (DAT_180c7d700 == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c7d6f8) {
        iVar6 = 0;
      }
      else {
        local_3b8 = &DAT_1809c08f0;
        iVar6 = FUN_1805f68d0(&DAT_1809c08f0);
        if (iVar6 != 0) goto LAB_1803fb434;
        if (DAT_1809c093c == 0x7fffffff) {
          DAT_1809c093c = 0x7ffffffe;
          goto LAB_1803fb429;
        }
        if ((DAT_180c7d700 == 0) && (DAT_180c7d6f8 <= UVar8)) {
          DAT_180c7d700 = FUN_1804174b0("C_BaseModelEntity",0x39db834b);
          if (DAT_180c7d700 == 0) {
            DAT_180c7d6f8 = UVar8 + 1000;
          }
          else {
            DAT_180c7d6f8 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c7d700;
        FUN_1805f68fc(&DAT_1809c08f0);
      }
    }
    *(int *)((longlong)param_1 + 0x44) = iVar6;
    iVar6 = DAT_180c7d704;
    if (DAT_180c7d704 == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c7d708) {
        iVar6 = 0;
      }
      else {
        local_3b8 = &DAT_1809c0940;
        iVar6 = FUN_1805f68d0(&DAT_1809c0940);
        if (iVar6 != 0) goto LAB_1803fb434;
        if (DAT_1809c098c == 0x7fffffff) {
          DAT_1809c098c = 0x7ffffffe;
          goto LAB_1803fb429;
        }
        if ((DAT_180c7d704 == 0) && (DAT_180c7d708 <= UVar8)) {
          DAT_180c7d704 = FUN_1804174b0("C_BaseModelEntity",0xae8e690f);
          if (DAT_180c7d704 == 0) {
            DAT_180c7d708 = UVar8 + 1000;
          }
          else {
            DAT_180c7d708 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c7d704;
        FUN_1805f68fc(&DAT_1809c0940);
      }
    }
    *(int *)(param_1 + 9) = iVar6;
    iVar6 = DAT_180c7d718;
    if (DAT_180c7d718 == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c7d710) {
        iVar6 = 0;
      }
      else {
        local_3b8 = &DAT_1809c0800;
        iVar6 = FUN_1805f68d0(&DAT_1809c0800);
        if (iVar6 != 0) goto LAB_1803fb434;
        if (DAT_1809c084c == 0x7fffffff) {
          DAT_1809c084c = 0x7ffffffe;
          goto LAB_1803fb429;
        }
        if ((DAT_180c7d718 == 0) && (DAT_180c7d710 <= UVar8)) {
          DAT_180c7d718 = FUN_1804174b0("CCollisionProperty",0xe57f80c);
          if (DAT_180c7d718 == 0) {
            DAT_180c7d710 = UVar8 + 1000;
          }
          else {
            DAT_180c7d710 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c7d718;
        FUN_1805f68fc(&DAT_1809c0800);
      }
    }
    *(int *)((longlong)param_1 + 0x4c) = iVar6;
    iVar6 = DAT_180c7d6cc;
    if (DAT_180c7d6cc == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c7d6d0) {
        iVar6 = 0;
      }
      else {
        local_3b8 = &DAT_1809c0850;
        iVar6 = FUN_1805f68d0(&DAT_1809c0850);
        if (iVar6 != 0) goto LAB_1803fb434;
        if (DAT_1809c089c == 0x7fffffff) {
          DAT_1809c089c = 0x7ffffffe;
          goto LAB_1803fb429;
        }
        if ((DAT_180c7d6cc == 0) && (DAT_180c7d6d0 <= UVar8)) {
          DAT_180c7d6cc = FUN_1804174b0("CCollisionProperty",0x7d388d3e);
          if (DAT_180c7d6cc == 0) {
            DAT_180c7d6d0 = UVar8 + 1000;
          }
          else {
            DAT_180c7d6d0 = 0xffffffffffffffff;
          }
        }
        iVar6 = DAT_180c7d6cc;
        FUN_1805f68fc(&DAT_1809c0850);
      }
    }
    *(int *)(param_1 + 10) = iVar6;
    iVar6 = DAT_180c7d6e0;
    if (DAT_180c7d6e0 == 0) {
      UVar8 = GetTickCount64();
      if (UVar8 < DAT_180c7d6d8) {
        iVar6 = 0;
      }
      else {
        local_3b8 = &DAT_1809c08a0;
        iVar6 = FUN_1805f68d0(&DAT_1809c08a0);
        if (iVar6 != 0) {
LAB_1803fb434:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1809c08ec == 0x7fffffff) {
          DAT_1809c08ec = 0x7ffffffe;
LAB_1803fb429:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c7d6e0 == 0) && (DAT_180c7d6d8 <= UVar8)) {
          DAT_180c7d6e0 = FUN_1804174b0("CCollisionProperty",0x4c638611);
          if (DAT_180c7d6e0 == 0) {
            uVar17 = UVar8 + 1000;
          }
          DAT_180c7d6d8 = uVar17;
        }
        iVar6 = DAT_180c7d6e0;
        FUN_1805f68fc(&DAT_1809c08a0);
      }
    }
    *(int *)((longlong)param_1 + 0x54) = iVar6;
    if ((DAT_180cad2e0 == 1) && (DAT_180cad6b8 != '\0')) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    *(undefined1 *)((longlong)param_1 + 0x6b) = uVar5;
    *(undefined1 *)(param_1 + 0xd) = 1;
    puVar9 = (undefined8 *)FUN_1803fb440(param_1,local_3a0);
    lVar14 = 6;
    puVar4 = param_1 + 0xe;
    do {
      puVar12 = puVar4;
      puVar10 = puVar9;
      uVar2 = puVar10[1];
      *puVar12 = *puVar10;
      puVar12[1] = uVar2;
      uVar2 = puVar10[3];
      puVar12[2] = puVar10[2];
      puVar12[3] = uVar2;
      uVar2 = puVar10[5];
      puVar12[4] = puVar10[4];
      puVar12[5] = uVar2;
      uVar2 = puVar10[7];
      puVar12[6] = puVar10[6];
      puVar12[7] = uVar2;
      uVar2 = puVar10[9];
      puVar12[8] = puVar10[8];
      puVar12[9] = uVar2;
      uVar2 = puVar10[0xb];
      puVar12[10] = puVar10[10];
      puVar12[0xb] = uVar2;
      uVar2 = puVar10[0xd];
      puVar12[0xc] = puVar10[0xc];
      puVar12[0xd] = uVar2;
      uVar2 = puVar10[0xf];
      puVar12[0xe] = puVar10[0xe];
      puVar12[0xf] = uVar2;
      lVar14 = lVar14 + -1;
      puVar9 = puVar10 + 0x10;
      puVar4 = puVar12 + 0x10;
    } while (lVar14 != 0);
    uVar2 = puVar10[0x11];
    puVar12[0x10] = puVar10[0x10];
    puVar12[0x11] = uVar2;
    uVar2 = puVar10[0x13];
    puVar12[0x12] = puVar10[0x12];
    puVar12[0x13] = uVar2;
    uVar2 = puVar10[0x15];
    puVar12[0x14] = puVar10[0x14];
    puVar12[0x15] = uVar2;
    uVar2 = puVar10[0x17];
    puVar12[0x16] = puVar10[0x16];
    puVar12[0x17] = uVar2;
    uVar2 = puVar10[0x19];
    puVar12[0x18] = puVar10[0x18];
    puVar12[0x19] = uVar2;
    uVar2 = puVar10[0x1b];
    puVar12[0x1a] = puVar10[0x1a];
    puVar12[0x1b] = uVar2;
    puVar12[0x1c] = puVar10[0x1c];
    FUN_18017bf40(&local_3b8);
    puVar3 = local_3b8;
    uVar16 = (longlong)local_3b8 - local_3b0._8_8_;
    puVar11 = (ulonglong *)FUN_180416430();
    uVar18 = *puVar11 + 1;
    *puVar11 = uVar18;
    uVar17 = puVar11[1];
    puVar11[1] = uVar17 + uVar16;
    uVar19 = puVar11[3] + (ulonglong)(999999 < uVar16);
    puVar11[3] = uVar19;
    uVar20 = puVar11[4] + (ulonglong)(4999999 < uVar16);
    puVar11[4] = uVar20;
    uVar21 = puVar11[5] + (ulonglong)(15999999 < uVar16);
    puVar11[5] = uVar21;
    uVar13 = puVar11[2];
    if (puVar11[2] < uVar16) {
      puVar11[2] = uVar16;
      uVar13 = uVar16;
    }
    if ((puVar3 == (undefined *)puVar11[7]) || ((longlong)puVar11[7] <= (longlong)puVar3)) {
      dVar25 = (double)(longlong)((longlong)puVar3 - puVar11[6]) / 1000000.0;
      dVar1 = (double)(uVar17 + uVar16);
      dVar24 = 0.0;
      if (0.0 < dVar25) {
        dVar24 = (dVar1 / 1000.0) / dVar25;
      }
      dVar23 = (dVar1 / (double)uVar18) / 1000.0;
      FUN_1801af8a0(dVar1 / (double)uVar18,dVar23,local_3b0._0_8_,uVar19,uVar18,dVar23,
                    (double)uVar13 / 1000.0,dVar1 / 1000000.0,dVar25,dVar24,uVar19,uVar20,uVar21);
      puVar11[2] = 0;
      puVar11[1] = 0;
      *puVar11 = 0;
      puVar11[5] = 0;
      puVar11[4] = 0;
      puVar11[3] = 0;
      puVar11[6] = (ulonglong)puVar3;
      puVar11[7] = (ulonglong)(puVar3 + 5000000000);
    }
  }
  return param_1;
}



