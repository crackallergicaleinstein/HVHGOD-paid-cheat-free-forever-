// FUN_180400590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180400590 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180400590(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  ULONGLONG UVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined4 uVar11;
  undefined1 auVar12 [64];
  undefined1 auVar13 [16];
  undefined1 auVar14 [64];
  undefined1 auVar15 [16];
  undefined1 auVar16 [64];
  undefined *local_138;
  undefined1 uStack_130;
  undefined2 local_128;
  ushort uStack_126;
  undefined4 uStack_124;
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined4 local_e0;
  undefined4 local_dc;
  uint local_d8;
  undefined4 local_d4;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  
  uVar9 = local_d8;
  local_128 = 0;
  uStack_124 = 0;
  auStack_120 = ZEXT832(0);
  auStack_100 = ZEXT832(0);
  auVar15._12_4_ = 0;
  auVar15._0_12_ = ZEXT812(0);
  auVar15 = auVar15 << 0x20;
  local_e0 = 0;
  auVar13 = SUB6416(ZEXT464(0x7fc00000),0);
  local_dc = 0x7fc00000;
  local_d8 = local_d8 & 0xffffff00;
  local_d4 = 0;
  uStack_d0 = 0;
  DAT_180b8e124._0_4_ = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  local_b4 = 0;
  local_b0 = 0;
  local_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_a0 = 0;
  uStack_9c = 0;
  uStack_98 = uStack_98 & 0xffffff00;
  uVar10 = 0xffffffffffffffff;
  uStack_94 = 0xffffffff;
  uStack_90 = 0xffffffff;
  uStack_8c = 0x7fc00000;
  uStack_88 = 0x7fc00000;
  uStack_84 = 0x7fc00000;
  uStack_80 = 0x7fc00000;
  uStack_7c = 0x7fc00000;
  local_78 = 0xffffffff;
  DAT_180b8e118 = 0;
  DAT_180b8e120 = 0;
  DAT_180b8e124._4_4_ = 0;
  DAT_180b8e12c = 0;
  _DAT_180b8e130 = 0;
  DAT_180b8e138 = 0;
  DAT_180b8e13c = 0;
  DAT_180b8e140 = 0;
  DAT_180b8e144 = 0;
  _DAT_180b8e148 = 0;
  _DAT_180b8e160 = (ulonglong)uVar9 & 0xffffffffffffff00;
  _DAT_180b8e150 = 0;
  _DAT_180b8e158 = 0x7fc0000000000000;
  DAT_180b8e168 = 0;
  _DAT_180b8e180 = 0;
  _DAT_180b8e170 = 0;
  ram0x000180b8e178 = 0;
  _DAT_180b8e188 = 0;
  _DAT_180b8e1a0 = CONCAT44(0xffffffff,uStack_98);
  _DAT_180b8e190 = 0;
  _DAT_180b8e198 = 0;
  _DAT_180b8e1a8 = 0x7fc00000ffffffff;
  _DAT_180b8e1b0 = 0x7fc000007fc00000;
  _DAT_180b8e1b8 = 0x7fc000007fc00000;
  DAT_180b8e1c0 = 0xffffffff;
  if ((param_2 == 0) || (param_3 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = 1;
  }
  _DAT_180b8e110 = CONCAT71((int7)(((ulonglong)uStack_126 << 0x10) >> 8),uVar4);
  iVar6 = DAT_180c7d648;
  if (DAT_180c7d648 == 0) {
    auVar14 = ZEXT1664(auVar13);
    auVar16 = ZEXT1264(ZEXT812(0)) << 0x20;
    UVar7 = GetTickCount64();
    auVar15 = auVar16._0_16_;
    auVar13 = auVar14._0_16_;
    if (UVar7 < DAT_180c7d610) {
      iVar6 = 0;
    }
    else {
      local_138 = &DAT_1809c03f0;
      iVar6 = FUN_1805f68d0(&DAT_1809c03f0);
      if (iVar6 != 0) goto LAB_180401371;
      if (DAT_1809c043c == 0x7fffffff) {
        DAT_1809c043c = 0x7ffffffe;
        goto LAB_180401366;
      }
      if ((DAT_180c7d648 == 0) && (DAT_180c7d610 <= UVar7)) {
        DAT_180c7d648 = FUN_1804174b0("CCSPlayer_MovementServices",0xc30201ee);
        if (DAT_180c7d648 == 0) {
          DAT_180c7d610 = UVar7 + 1000;
        }
        else {
          DAT_180c7d610 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c7d648;
      FUN_1805f68fc(&DAT_1809c03f0);
      auVar15 = auVar16._0_16_;
      auVar13 = auVar14._0_16_;
    }
  }
  _DAT_180b8e160 = CONCAT71(DAT_180b8e160_1,*(undefined1 *)(iVar6 + param_3));
  iVar6 = DAT_180c7d620;
  if (DAT_180c7d620 == 0) {
    auVar14 = ZEXT1664(auVar13);
    auVar16 = ZEXT1664(auVar15);
    UVar7 = GetTickCount64();
    auVar15 = auVar16._0_16_;
    auVar13 = auVar14._0_16_;
    if (UVar7 < DAT_180c7d618) {
      iVar6 = 0;
    }
    else {
      local_138 = &DAT_1809c0440;
      iVar6 = FUN_1805f68d0(&DAT_1809c0440);
      if (iVar6 != 0) goto LAB_180401371;
      if (DAT_1809c048c == 0x7fffffff) {
        DAT_1809c048c = 0x7ffffffe;
        goto LAB_180401366;
      }
      if ((DAT_180c7d620 == 0) && (DAT_180c7d618 <= UVar7)) {
        DAT_180c7d620 = FUN_1804174b0("CCSPlayer_MovementServices",0x32924d1f);
        if (DAT_180c7d620 == 0) {
          DAT_180c7d618 = UVar7 + 1000;
        }
        else {
          DAT_180c7d618 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c7d620;
      FUN_1805f68fc(&DAT_1809c0440);
      auVar15 = auVar16._0_16_;
      auVar13 = auVar14._0_16_;
    }
  }
  _DAT_180b8e160 = CONCAT44(*(undefined4 *)(iVar6 + param_3),_DAT_180b8e160);
  iVar6 = DAT_180c7d624;
  if (DAT_180c7d624 == 0) {
    auVar14 = ZEXT1664(auVar13);
    auVar16 = ZEXT1664(auVar15);
    UVar7 = GetTickCount64();
    auVar15 = auVar16._0_16_;
    auVar13 = auVar14._0_16_;
    if (UVar7 < DAT_180c7d628) {
      iVar6 = 0;
    }
    else {
      local_138 = &DAT_1809c0490;
      iVar6 = FUN_1805f68d0(&DAT_1809c0490);
      if (iVar6 != 0) goto LAB_180401371;
      if (DAT_1809c04dc == 0x7fffffff) {
        DAT_1809c04dc = 0x7ffffffe;
        goto LAB_180401366;
      }
      if ((DAT_180c7d624 == 0) && (DAT_180c7d628 <= UVar7)) {
        DAT_180c7d624 = FUN_1804174b0("CCSPlayer_MovementServices",0xe4f7740e);
        if (DAT_180c7d624 == 0) {
          DAT_180c7d628 = UVar7 + 1000;
        }
        else {
          DAT_180c7d628 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c7d624;
      FUN_1805f68fc(&DAT_1809c0490);
      auVar15 = auVar16._0_16_;
      auVar13 = auVar14._0_16_;
    }
  }
  _DAT_180b8e198 = CONCAT44(_DAT_180b8e19c,*(undefined4 *)(iVar6 + param_3));
  iVar6 = DAT_180c7d5f0;
  if (DAT_180c7d5f0 == 0) {
    auVar14 = ZEXT1664(auVar13);
    auVar16 = ZEXT1664(auVar15);
    UVar7 = GetTickCount64();
    auVar15 = auVar16._0_16_;
    auVar13 = auVar14._0_16_;
    if (UVar7 < DAT_180c7d5e8) {
      iVar6 = 0;
    }
    else {
      local_138 = &DAT_1809c0350;
      iVar6 = FUN_1805f68d0(&DAT_1809c0350);
      if (iVar6 != 0) goto LAB_180401371;
      if (DAT_1809c039c == 0x7fffffff) {
        DAT_1809c039c = 0x7ffffffe;
        goto LAB_180401366;
      }
      if ((DAT_180c7d5f0 == 0) && (DAT_180c7d5e8 <= UVar7)) {
        DAT_180c7d5f0 = FUN_1804174b0("C_BaseEntity",0xa4a37590);
        if (DAT_180c7d5f0 == 0) {
          DAT_180c7d5e8 = UVar7 + 1000;
        }
        else {
          DAT_180c7d5e8 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c7d5f0;
      FUN_1805f68fc(&DAT_1809c0350);
      auVar15 = auVar16._0_16_;
      auVar13 = auVar14._0_16_;
    }
  }
  _DAT_180b8e110 = CONCAT44(*(undefined4 *)(iVar6 + param_2),_DAT_180b8e110);
  iVar6 = DAT_180c7d5f4;
  if (DAT_180c7d5f4 == 0) {
    auVar14 = ZEXT1664(auVar13);
    auVar16 = ZEXT1664(auVar15);
    UVar7 = GetTickCount64();
    auVar15 = auVar16._0_16_;
    auVar13 = auVar14._0_16_;
    if (UVar7 < DAT_180c7d5f8) {
      iVar6 = 0;
    }
    else {
      local_138 = &DAT_1809c03a0;
      iVar6 = FUN_1805f68d0(&DAT_1809c03a0);
      if (iVar6 != 0) goto LAB_180401371;
      if (DAT_1809c03ec == 0x7fffffff) {
        DAT_1809c03ec = 0x7ffffffe;
        goto LAB_180401366;
      }
      if ((DAT_180c7d5f4 == 0) && (DAT_180c7d5f8 <= UVar7)) {
        DAT_180c7d5f4 = FUN_1804174b0("C_BaseEntity",0x7cf77892);
        if (DAT_180c7d5f4 == 0) {
          DAT_180c7d5f8 = UVar7 + 1000;
        }
        else {
          DAT_180c7d5f8 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c7d5f4;
      FUN_1805f68fc(&DAT_1809c03a0);
      auVar15 = auVar16._0_16_;
      auVar13 = auVar14._0_16_;
    }
  }
  DAT_180b8e118 = *(undefined8 *)(iVar6 + param_2);
  DAT_180b8e120 = *(undefined4 *)((longlong)iVar6 + 8 + param_2);
  iVar6 = DAT_180c7d608;
  if (DAT_180c7d608 == 0) {
    auVar14 = ZEXT1664(auVar13);
    auVar16 = ZEXT1664(auVar15);
    UVar7 = GetTickCount64();
    auVar15 = auVar16._0_16_;
    auVar13 = auVar14._0_16_;
    if (UVar7 < DAT_180c7d600) {
      iVar6 = 0;
    }
    else {
      local_138 = &DAT_1809c0260;
      iVar6 = FUN_1805f68d0(&DAT_1809c0260);
      if (iVar6 != 0) goto LAB_180401371;
      if (DAT_1809c02ac == 0x7fffffff) {
        DAT_1809c02ac = 0x7ffffffe;
        goto LAB_180401366;
      }
      if ((DAT_180c7d608 == 0) && (DAT_180c7d600 <= UVar7)) {
        DAT_180c7d608 = FUN_1804174b0("C_BaseEntity",0x16c096cc);
        if (DAT_180c7d608 == 0) {
          DAT_180c7d600 = UVar7 + 1000;
        }
        else {
          DAT_180c7d600 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c7d608;
      FUN_1805f68fc(&DAT_1809c0260);
      auVar15 = auVar16._0_16_;
      auVar13 = auVar14._0_16_;
    }
  }
  uVar1 = *(undefined8 *)(iVar6 + param_2);
  DAT_180b8e124._0_4_ = (undefined4)uVar1;
  DAT_180b8e124._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
  DAT_180b8e12c = *(undefined4 *)((longlong)iVar6 + 8 + param_2);
  iVar6 = DAT_180c7d5c8;
  if (DAT_180c7d5c8 == 0) {
    auVar14 = ZEXT1664(auVar13);
    auVar16 = ZEXT1664(auVar15);
    UVar7 = GetTickCount64();
    auVar15 = auVar16._0_16_;
    auVar13 = auVar14._0_16_;
    if (UVar7 < DAT_180c7d5d0) {
      iVar6 = 0;
    }
    else {
      local_138 = &DAT_1809c02b0;
      iVar6 = FUN_1805f68d0(&DAT_1809c02b0);
      if (iVar6 != 0) goto LAB_180401371;
      if (DAT_1809c02fc == 0x7fffffff) {
        DAT_1809c02fc = 0x7ffffffe;
        goto LAB_180401366;
      }
      if ((DAT_180c7d5c8 == 0) && (DAT_180c7d5d0 <= UVar7)) {
        DAT_180c7d5c8 = FUN_1804174b0("CCSPlayer_MovementServices",0xee725c8c);
        if (DAT_180c7d5c8 == 0) {
          DAT_180c7d5d0 = UVar7 + 1000;
        }
        else {
          DAT_180c7d5d0 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c7d5c8;
      FUN_1805f68fc(&DAT_1809c02b0);
      auVar15 = auVar16._0_16_;
      auVar13 = auVar14._0_16_;
    }
  }
  _DAT_180b8e158 = CONCAT44(_DAT_180b8e15c,*(undefined4 *)(iVar6 + param_3));
  iVar6 = DAT_180c7d5e0;
  if (DAT_180c7d5e0 == 0) {
    auVar14 = ZEXT1664(auVar13);
    auVar16 = ZEXT1664(auVar15);
    UVar7 = GetTickCount64();
    uVar11 = auVar14._0_4_;
    if (DAT_180c7d5d8 <= UVar7) {
      local_138 = &DAT_1809c0300;
      iVar6 = FUN_1805f68d0(&DAT_1809c0300);
      if (iVar6 != 0) goto LAB_180401371;
      if (DAT_1809c034c == 0x7fffffff) {
        DAT_1809c034c = 0x7ffffffe;
        goto LAB_180401366;
      }
      if ((DAT_180c7d5e0 == 0) && (DAT_180c7d5d8 <= UVar7)) {
        DAT_180c7d5e0 = FUN_1804174b0("C_CSPlayerPawn",0x21f4a3d1);
        if (DAT_180c7d5e0 == 0) {
          DAT_180c7d5d8 = UVar7 + 1000;
        }
        else {
          DAT_180c7d5d8 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c7d5e0;
      FUN_1805f68fc(&DAT_1809c0300);
      auVar15 = auVar16._0_16_;
      auVar13 = auVar14._0_16_;
      uVar11 = auVar14._0_4_;
      if (iVar6 != 0) goto LAB_180400cda;
    }
  }
  else {
LAB_180400cda:
    auVar14 = ZEXT1664(auVar13);
    auVar16 = ZEXT1664(auVar15);
    lVar8 = FUN_18017ea70();
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
    uVar9 = 0;
    if (iVar6 + param_2 != 0) {
      local_138 = (undefined *)CONCAT44(local_138._4_4_,auVar16._0_4_);
      cVar5 = FUN_1804514f0(&local_138,iVar6 + param_2,4);
      if (cVar5 == '\0') {
        uVar9 = 0;
      }
      else {
        uVar9 = 1;
      }
    }
    auVar12 = ZEXT464((uint)local_138);
    lVar8 = FUN_18017ea70();
    if (*(int *)(lVar8 + 4) != 0) {
      *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    }
    auVar15 = vpcmpeqd_avx(ZEXT416(uVar9),SUB6416(ZEXT464(0),0));
    auVar15 = vblendvps_avx(auVar12._0_16_,auVar14._0_16_,auVar15);
    uVar11 = auVar15._0_4_;
  }
  _DAT_180b8e158 = CONCAT44(uVar11,DAT_180b8e158);
  iVar6 = DAT_180c7d5e4;
  if (DAT_180c7d5e4 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180c7d5a8) {
      iVar6 = 0;
    }
    else {
      local_138 = &DAT_1809c0170;
      iVar6 = FUN_1805f68d0(&DAT_1809c0170);
      if (iVar6 != 0) goto LAB_180401371;
      if (DAT_1809c01bc == 0x7fffffff) {
        DAT_1809c01bc = 0x7ffffffe;
        goto LAB_180401366;
      }
      if ((DAT_180c7d5e4 == 0) && (DAT_180c7d5a8 <= UVar7)) {
        DAT_180c7d5e4 = FUN_1804174b0("CPlayer_MovementServices_Humanoid",0x2bcee768);
        if (DAT_180c7d5e4 == 0) {
          DAT_180c7d5a8 = UVar7 + 1000;
        }
        else {
          DAT_180c7d5a8 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c7d5e4;
      FUN_1805f68fc(&DAT_1809c0170);
    }
  }
  _DAT_180b8e150 = CONCAT44(*(undefined4 *)(iVar6 + param_3),DAT_180b8e150);
  iVar6 = DAT_180c7d5b8;
  if (DAT_180c7d5b8 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180c7d5b0) {
      iVar6 = 0;
    }
    else {
      local_138 = &DAT_1809c01c0;
      iVar6 = FUN_1805f68d0(&DAT_1809c01c0);
      if (iVar6 != 0) goto LAB_180401371;
      if (DAT_1809c020c == 0x7fffffff) {
        DAT_1809c020c = 0x7ffffffe;
        goto LAB_180401366;
      }
      if ((DAT_180c7d5b8 == 0) && (DAT_180c7d5b0 <= UVar7)) {
        DAT_180c7d5b8 = FUN_1804174b0("CPlayer_MovementServices",0x3976c40f);
        if (DAT_180c7d5b8 == 0) {
          DAT_180c7d5b0 = UVar7 + 1000;
        }
        else {
          DAT_180c7d5b0 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c7d5b8;
      FUN_1805f68fc(&DAT_1809c01c0);
    }
  }
  _DAT_180b8e148 = CONCAT44(DAT_180b8e14c,*(undefined4 *)(iVar6 + param_3));
  iVar6 = DAT_180c7d5bc;
  if (DAT_180c7d5bc == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180c7d5c0) {
      iVar6 = 0;
    }
    else {
      local_138 = &DAT_1809c0210;
      iVar6 = FUN_1805f68d0(&DAT_1809c0210);
      if (iVar6 != 0) goto LAB_180401371;
      if (DAT_1809c025c == 0x7fffffff) {
        DAT_1809c025c = 0x7ffffffe;
        goto LAB_180401366;
      }
      if ((DAT_180c7d5bc == 0) && (DAT_180c7d5c0 <= UVar7)) {
        DAT_180c7d5bc = FUN_1804174b0("CPlayer_MovementServices",0xb20fcc65);
        if (DAT_180c7d5bc == 0) {
          DAT_180c7d5c0 = UVar7 + 1000;
        }
        else {
          DAT_180c7d5c0 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c7d5bc;
      FUN_1805f68fc(&DAT_1809c0210);
    }
  }
  _DAT_180b8e148 = CONCAT44(*(undefined4 *)(iVar6 + param_3),DAT_180b8e148);
  iVar6 = DAT_180c7d588;
  if (DAT_180c7d588 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180c7d580) {
      iVar6 = 0;
    }
    else {
      local_138 = &DAT_1809c00d0;
      iVar6 = FUN_1805f68d0(&DAT_1809c00d0);
      if (iVar6 != 0) goto LAB_180401371;
      if (DAT_1809c011c == 0x7fffffff) {
        DAT_1809c011c = 0x7ffffffe;
        goto LAB_180401366;
      }
      if ((DAT_180c7d588 == 0) && (DAT_180c7d580 <= UVar7)) {
        DAT_180c7d588 = FUN_1804174b0("CPlayer_MovementServices",0xfd400a25);
        if (DAT_180c7d588 == 0) {
          DAT_180c7d580 = UVar7 + 1000;
        }
        else {
          DAT_180c7d580 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c7d588;
      FUN_1805f68fc(&DAT_1809c00d0);
    }
  }
  _DAT_180b8e150 = CONCAT44(DAT_180b8e154,*(undefined4 *)(iVar6 + param_3));
  iVar6 = DAT_180c7d58c;
  if (DAT_180c7d58c == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180c7d590) goto LAB_180401353;
    local_138 = &DAT_1809c0120;
    iVar6 = FUN_1805f68d0(&DAT_1809c0120);
    if (iVar6 != 0) goto LAB_180401371;
    if (DAT_1809c016c == 0x7fffffff) {
      DAT_1809c016c = 0x7ffffffe;
      goto LAB_180401366;
    }
    if ((DAT_180c7d58c == 0) && (DAT_180c7d590 <= UVar7)) {
      DAT_180c7d58c = FUN_1804174b0("CPlayer_MovementServices",0x98ccef82);
      if (DAT_180c7d58c == 0) {
        DAT_180c7d590 = UVar7 + 1000;
      }
      else {
        DAT_180c7d590 = 0xffffffffffffffff;
      }
    }
    iVar6 = DAT_180c7d58c;
    FUN_1805f68fc(&DAT_1809c0120);
    if (iVar6 == 0) goto LAB_180401353;
  }
  lVar8 = FUN_18017ea70();
  *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + 1;
  param_3 = (longlong)iVar6 + 8 + param_3;
  if (param_3 == 0) {
    uStack_130 = 0;
    bVar3 = false;
    bVar2 = false;
  }
  else {
    local_138 = (undefined *)0x0;
    cVar5 = FUN_1804514f0(&local_138,param_3,8);
    if (cVar5 == '\0') {
      bVar2 = false;
      bVar3 = false;
      uStack_130 = 0;
    }
    else {
      uStack_130 = 1;
      bVar2 = true;
      bVar3 = true;
    }
  }
  lVar8 = FUN_18017ea70();
  if (*(int *)(lVar8 + 4) != 0) {
    *(int *)(lVar8 + 4) = *(int *)(lVar8 + 4) + -1;
    bVar2 = bVar3;
  }
  if (!bVar2) {
LAB_180401353:
    _DAT_180b8e110 = _DAT_180b8e110 & 0xffffffffffffff00;
    return;
  }
  if (((ulonglong)local_138 & 0x18) == 0) {
    _DAT_180b8e148 = CONCAT44(DAT_180b8e14c,auVar16._0_4_);
  }
  if (((ulonglong)local_138 & 0x600) == 0) {
    _DAT_180b8e148 = CONCAT44(auVar16._0_4_,DAT_180b8e148);
  }
  iVar6 = DAT_180c7d5a0;
  if (DAT_180c7d5a0 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180c7d598) {
      iVar6 = 0;
    }
    else {
      local_138 = &DAT_1809bffd0;
      iVar6 = FUN_1805f68d0(&DAT_1809bffd0);
      if (iVar6 != 0) goto LAB_180401371;
      if (DAT_1809c001c == 0x7fffffff) {
        DAT_1809c001c = 0x7ffffffe;
        goto LAB_180401366;
      }
      if ((DAT_180c7d5a0 == 0) && (DAT_180c7d598 <= UVar7)) {
        DAT_180c7d5a0 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c7d5a0 == 0) {
          DAT_180c7d598 = UVar7 + 1000;
        }
        else {
          DAT_180c7d598 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c7d5a0;
      FUN_1805f68fc(&DAT_1809bffd0);
    }
  }
  lVar8 = *(longlong *)(iVar6 + param_2);
  if (lVar8 == 0) {
    return;
  }
  iVar6 = DAT_180c7d560;
  if (DAT_180c7d560 == 0) {
    UVar7 = GetTickCount64();
    if (UVar7 < DAT_180c7d568) {
      iVar6 = 0;
    }
    else {
      local_138 = &DAT_1809c0020;
      iVar6 = FUN_1805f68d0(&DAT_1809c0020);
      if (iVar6 != 0) {
LAB_180401371:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1809c006c == 0x7fffffff) {
        DAT_1809c006c = 0x7ffffffe;
LAB_180401366:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c7d560 == 0) && (DAT_180c7d568 <= UVar7)) {
        DAT_180c7d560 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
        if (DAT_180c7d560 == 0) {
          uVar10 = UVar7 + 1000;
        }
        DAT_180c7d568 = uVar10;
      }
      iVar6 = DAT_180c7d560;
      FUN_1805f68fc(&DAT_1809c0020);
    }
  }
  _DAT_180b8e130 = *(undefined8 *)(iVar6 + lVar8);
  DAT_180b8e138 = *(undefined4 *)((longlong)iVar6 + 8 + lVar8);
  DAT_180b8e13c = (undefined4)_DAT_180b8e130;
  DAT_180b8e140 = (undefined4)((ulonglong)_DAT_180b8e130 >> 0x20);
  DAT_180b8e144 = DAT_180b8e138;
  return;
}



