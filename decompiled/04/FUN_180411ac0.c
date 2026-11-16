// FUN_180411ac0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180411ac0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180411ac0(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined4 uVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auVar13 [64];
  undefined1 auVar14 [64];
  undefined4 uVar15;
  undefined *local_78 [8];
  
  uVar12 = 0xffffffffffffffff;
  iVar7 = DAT_180c7ca20;
  if (DAT_180c7ca20 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c7ca30) {
      iVar7 = 0;
    }
    else {
      local_78[0] = &DAT_1809bbc30;
      iVar7 = FUN_1805f68d0(&DAT_1809bbc30);
      if (iVar7 != 0) goto LAB_180412b36;
      if (DAT_1809bbc7c == 0x7fffffff) {
        DAT_1809bbc7c = 0x7ffffffe;
        goto LAB_180412b2b;
      }
      if ((DAT_180c7ca20 == 0) && (DAT_180c7ca30 <= UVar9)) {
        DAT_180c7ca20 = FUN_1804174b0("C_BaseEntity",0x9d930423);
        if (DAT_180c7ca20 == 0) {
          DAT_180c7ca30 = UVar9 + 1000;
        }
        else {
          DAT_180c7ca30 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c7ca20;
      FUN_1805f68fc(&DAT_1809bbc30);
    }
  }
  lVar10 = *(longlong *)(iVar7 + param_2);
  DAT_180b8e111 = 0;
  if (lVar10 == 0) {
    DAT_180b8e111 = 0;
    return;
  }
  iVar7 = DAT_180c7ca40;
  if (DAT_180c7ca40 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c7ca38) {
      iVar7 = 0;
    }
    else {
      local_78[0] = &DAT_1809bbc80;
      iVar7 = FUN_1805f68d0(&DAT_1809bbc80);
      if (iVar7 != 0) goto LAB_180412b36;
      if (DAT_1809bbccc == 0x7fffffff) {
        DAT_1809bbccc = 0x7ffffffe;
        goto LAB_180412b2b;
      }
      if ((DAT_180c7ca40 == 0) && (DAT_180c7ca38 <= UVar9)) {
        DAT_180c7ca40 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
        if (DAT_180c7ca40 == 0) {
          DAT_180c7ca38 = UVar9 + 1000;
        }
        else {
          DAT_180c7ca38 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c7ca40;
      FUN_1805f68fc(&DAT_1809bbc80);
    }
  }
  DAT_180b8e168 = *(undefined8 *)(iVar7 + lVar10);
  DAT_180b8e170 = *(undefined4 *)((longlong)iVar7 + 8 + lVar10);
  iVar7 = DAT_180c7ca44;
  if (DAT_180c7ca44 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c7ca00) {
      iVar7 = 0;
    }
    else {
      local_78[0] = &DAT_1809bbb40;
      iVar7 = FUN_1805f68d0(&DAT_1809bbb40);
      if (iVar7 != 0) goto LAB_180412b36;
      if (DAT_1809bbb8c == 0x7fffffff) {
        DAT_1809bbb8c = 0x7ffffffe;
        goto LAB_180412b2b;
      }
      if ((DAT_180c7ca44 == 0) && (DAT_180c7ca00 <= UVar9)) {
        DAT_180c7ca44 = FUN_1804174b0("C_BaseEntity",0x16c096cc);
        if (DAT_180c7ca44 == 0) {
          DAT_180c7ca00 = UVar9 + 1000;
        }
        else {
          DAT_180c7ca00 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c7ca44;
      FUN_1805f68fc(&DAT_1809bbb40);
    }
  }
  DAT_180b8e174 = *(undefined8 *)(iVar7 + param_2);
  DAT_180b8e17c = *(undefined4 *)((longlong)iVar7 + 8 + param_2);
  iVar7 = DAT_180c7ca10;
  if (DAT_180c7ca10 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c7ca08) {
      iVar7 = 0;
    }
    else {
      local_78[0] = &DAT_1809bbb90;
      iVar7 = FUN_1805f68d0(&DAT_1809bbb90);
      if (iVar7 != 0) goto LAB_180412b36;
      if (DAT_1809bbbdc == 0x7fffffff) {
        DAT_1809bbbdc = 0x7ffffffe;
        goto LAB_180412b2b;
      }
      if ((DAT_180c7ca10 == 0) && (DAT_180c7ca08 <= UVar9)) {
        DAT_180c7ca10 = FUN_1804174b0("C_BaseEntity",0xa4a37590);
        if (DAT_180c7ca10 == 0) {
          DAT_180c7ca08 = UVar9 + 1000;
        }
        else {
          DAT_180c7ca08 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c7ca10;
      FUN_1805f68fc(&DAT_1809bbb90);
    }
  }
  _DAT_180b8e18c = *(undefined4 *)(iVar7 + param_2);
  iVar7 = DAT_180c7ca14;
  if (DAT_180c7ca14 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c7ca18) {
      iVar7 = 0;
    }
    else {
      local_78[0] = &DAT_1809bbbe0;
      iVar7 = FUN_1805f68d0(&DAT_1809bbbe0);
      if (iVar7 != 0) goto LAB_180412b36;
      if (DAT_1809bbc2c == 0x7fffffff) {
        DAT_1809bbc2c = 0x7ffffffe;
        goto LAB_180412b2b;
      }
      if ((DAT_180c7ca14 == 0) && (DAT_180c7ca18 <= UVar9)) {
        DAT_180c7ca14 = FUN_1804174b0("C_BaseEntity",0x253120d3);
        if (DAT_180c7ca14 == 0) {
          DAT_180c7ca18 = UVar9 + 1000;
        }
        else {
          DAT_180c7ca18 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c7ca14;
      FUN_1805f68fc(&DAT_1809bbbe0);
    }
  }
  _DAT_180b8e190 = *(undefined4 *)(iVar7 + param_2);
  iVar7 = DAT_180c7c9e0;
  if (DAT_180c7c9e0 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c7c9d8) {
      iVar7 = 0;
    }
    else {
      local_78[0] = &DAT_1809bbaa0;
      iVar7 = FUN_1805f68d0(&DAT_1809bbaa0);
      if (iVar7 != 0) goto LAB_180412b36;
      if (DAT_1809bbaec == 0x7fffffff) {
        DAT_1809bbaec = 0x7ffffffe;
        goto LAB_180412b2b;
      }
      if ((DAT_180c7c9e0 == 0) && (DAT_180c7c9d8 <= UVar9)) {
        DAT_180c7c9e0 = FUN_1804174b0("CPlayer_MovementServices_Humanoid",0xed2c77cd);
        if (DAT_180c7c9e0 == 0) {
          DAT_180c7c9d8 = UVar9 + 1000;
        }
        else {
          DAT_180c7c9d8 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c7c9e0;
      FUN_1805f68fc(&DAT_1809bbaa0);
    }
  }
  _DAT_180b8e180 = *(undefined8 *)(iVar7 + param_3);
  DAT_180b8e188 = *(undefined4 *)((longlong)iVar7 + 8 + param_3);
  iVar7 = DAT_180c7c9e4;
  if (DAT_180c7c9e4 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c7c9e8) {
      iVar7 = 0;
    }
    else {
      local_78[0] = &DAT_1809bbaf0;
      iVar7 = FUN_1805f68d0(&DAT_1809bbaf0);
      if (iVar7 != 0) goto LAB_180412b36;
      if (DAT_1809bbb3c == 0x7fffffff) {
        DAT_1809bbb3c = 0x7ffffffe;
        goto LAB_180412b2b;
      }
      if ((DAT_180c7c9e4 == 0) && (DAT_180c7c9e8 <= UVar9)) {
        DAT_180c7c9e4 = FUN_1804174b0("CPlayer_MovementServices_Humanoid",0x2bcee768);
        if (DAT_180c7c9e4 == 0) {
          DAT_180c7c9e8 = UVar9 + 1000;
        }
        else {
          DAT_180c7c9e8 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c7c9e4;
      FUN_1805f68fc(&DAT_1809bbaf0);
    }
  }
  DAT_180b8e194 = *(undefined4 *)(iVar7 + param_3);
  iVar7 = DAT_180c7c9f8;
  if (DAT_180c7c9f8 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c7c9f0) {
      iVar7 = 0;
    }
    else {
      local_78[0] = &DAT_1809bb9b0;
      iVar7 = FUN_1805f68d0(&DAT_1809bb9b0);
      if (iVar7 != 0) goto LAB_180412b36;
      if (DAT_1809bb9fc == 0x7fffffff) {
        DAT_1809bb9fc = 0x7ffffffe;
        goto LAB_180412b2b;
      }
      if ((DAT_180c7c9f8 == 0) && (DAT_180c7c9f0 <= UVar9)) {
        DAT_180c7c9f8 = FUN_1804174b0("CCSPlayer_MovementServices",0xe4f7740e);
        if (DAT_180c7c9f8 == 0) {
          DAT_180c7c9f0 = UVar9 + 1000;
        }
        else {
          DAT_180c7c9f0 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c7c9f8;
      FUN_1805f68fc(&DAT_1809bb9b0);
    }
  }
  DAT_180b8e198 = *(undefined4 *)(iVar7 + param_3);
  iVar7 = DAT_180c7c9b8;
  if (DAT_180c7c9b8 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c7c9c0) {
      iVar7 = 0;
    }
    else {
      local_78[0] = &DAT_1809bba00;
      iVar7 = FUN_1805f68d0(&DAT_1809bba00);
      if (iVar7 != 0) goto LAB_180412b36;
      if (DAT_1809bba4c == 0x7fffffff) {
        DAT_1809bba4c = 0x7ffffffe;
        goto LAB_180412b2b;
      }
      if ((DAT_180c7c9b8 == 0) && (DAT_180c7c9c0 <= UVar9)) {
        DAT_180c7c9b8 = FUN_1804174b0("CCSPlayer_MovementServices",0xc30201ee);
        if (DAT_180c7c9b8 == 0) {
          DAT_180c7c9c0 = UVar9 + 1000;
        }
        else {
          DAT_180c7c9c0 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c7c9b8;
      FUN_1805f68fc(&DAT_1809bba00);
    }
  }
  DAT_180b8e1a0 = *(undefined1 *)(iVar7 + param_3);
  iVar7 = DAT_180c7c9d0;
  if (DAT_180c7c9d0 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c7c9c8) {
      iVar7 = 0;
    }
    else {
      local_78[0] = &DAT_1809bba50;
      iVar7 = FUN_1805f68d0(&DAT_1809bba50);
      if (iVar7 != 0) goto LAB_180412b36;
      if (DAT_1809bba9c == 0x7fffffff) {
        DAT_1809bba9c = 0x7ffffffe;
        goto LAB_180412b2b;
      }
      if ((DAT_180c7c9d0 == 0) && (DAT_180c7c9c8 <= UVar9)) {
        DAT_180c7c9d0 = FUN_1804174b0("CCSPlayer_MovementServices",0x32924d1f);
        if (DAT_180c7c9d0 == 0) {
          DAT_180c7c9c8 = UVar9 + 1000;
        }
        else {
          DAT_180c7c9c8 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c7c9d0;
      FUN_1805f68fc(&DAT_1809bba50);
    }
  }
  _DAT_180b8e19c = *(undefined4 *)(iVar7 + param_3);
  iVar7 = DAT_180c7c9d4;
  if (DAT_180c7c9d4 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c7c998) {
      iVar7 = 0;
    }
    else {
      local_78[0] = &DAT_1809bb8c0;
      iVar7 = FUN_1805f68d0(&DAT_1809bb8c0);
      if (iVar7 != 0) goto LAB_180412b36;
      if (DAT_1809bb90c == 0x7fffffff) {
        DAT_1809bb90c = 0x7ffffffe;
        goto LAB_180412b2b;
      }
      if ((DAT_180c7c9d4 == 0) && (DAT_180c7c998 <= UVar9)) {
        DAT_180c7c9d4 = FUN_1804174b0("CCSPlayer_MovementServices",0xb2c4ee6c);
        if (DAT_180c7c9d4 == 0) {
          DAT_180c7c998 = UVar9 + 1000;
        }
        else {
          DAT_180c7c998 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c7c9d4;
      FUN_1805f68fc(&DAT_1809bb8c0);
    }
  }
  iVar8 = DAT_180c7c9a8;
  if (DAT_180c7c9a8 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c7c9a0) {
      iVar8 = 0;
    }
    else {
      local_78[0] = &DAT_1809bb910;
      iVar8 = FUN_1805f68d0(&DAT_1809bb910);
      if (iVar8 != 0) goto LAB_180412b36;
      if (DAT_1809bb95c == 0x7fffffff) {
        DAT_1809bb95c = 0x7ffffffe;
        goto LAB_180412b2b;
      }
      if ((DAT_180c7c9a8 == 0) && (DAT_180c7c9a0 <= UVar9)) {
        DAT_180c7c9a8 = FUN_1804174b0("CCSPlayer_MovementServices",0x552bd122);
        if (DAT_180c7c9a8 == 0) {
          DAT_180c7c9a0 = UVar9 + 1000;
        }
        else {
          DAT_180c7c9a0 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c7c9a8;
      FUN_1805f68fc(&DAT_1809bb910);
    }
  }
  iVar6 = DAT_180c7c9ac;
  if (DAT_180c7c9ac == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c7c9b0) {
      iVar6 = 0;
    }
    else {
      local_78[0] = &DAT_1809bb960;
      iVar6 = FUN_1805f68d0(&DAT_1809bb960);
      if (iVar6 != 0) goto LAB_180412b36;
      if (DAT_1809bb9ac == 0x7fffffff) {
        DAT_1809bb9ac = 0x7ffffffe;
        goto LAB_180412b2b;
      }
      if ((DAT_180c7c9ac == 0) && (DAT_180c7c9b0 <= UVar9)) {
        DAT_180c7c9ac = FUN_1804174b0("CCSPlayerModernJump",0x680c80ac);
        if (DAT_180c7c9ac == 0) {
          DAT_180c7c9b0 = UVar9 + 1000;
        }
        else {
          DAT_180c7c9b0 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c7c9ac;
      FUN_1805f68fc(&DAT_1809bb960);
    }
  }
  if (iVar7 == 0) {
    DAT_180b8e1a4 = 0xffffffff;
  }
  else {
    DAT_180b8e1a4 = *(undefined4 *)(iVar7 + param_3);
  }
  if ((iVar8 == 0) || (iVar6 == 0)) {
    DAT_180b8e1a8 = 0xffffffff;
  }
  else {
    DAT_180b8e1a8 = *(undefined4 *)((longlong)iVar8 + iVar6 + param_3);
  }
  iVar7 = DAT_180c7c978;
  if (DAT_180c7c978 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c7c970) {
      iVar7 = 0;
    }
    else {
      local_78[0] = &DAT_1809bb820;
      iVar7 = FUN_1805f68d0(&DAT_1809bb820);
      if (iVar7 != 0) goto LAB_180412b36;
      if (DAT_1809bb86c == 0x7fffffff) {
        DAT_1809bb86c = 0x7ffffffe;
        goto LAB_180412b2b;
      }
      if ((DAT_180c7c978 == 0) && (DAT_180c7c970 <= UVar9)) {
        DAT_180c7c978 = FUN_1804174b0("CPlayer_MovementServices_Humanoid",0x6d8d7d9d);
        if (DAT_180c7c978 == 0) {
          DAT_180c7c970 = UVar9 + 1000;
        }
        else {
          DAT_180c7c970 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c7c978;
      FUN_1805f68fc(&DAT_1809bb820);
    }
  }
  iVar8 = DAT_180c7c97c;
  if (DAT_180c7c97c == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c7c980) {
      iVar8 = 0;
    }
    else {
      local_78[0] = &DAT_1809bb870;
      iVar8 = FUN_1805f68d0(&DAT_1809bb870);
      if (iVar8 != 0) goto LAB_180412b36;
      if (DAT_1809bb8bc == 0x7fffffff) {
        DAT_1809bb8bc = 0x7ffffffe;
        goto LAB_180412b2b;
      }
      if ((DAT_180c7c97c == 0) && (DAT_180c7c980 <= UVar9)) {
        DAT_180c7c97c = FUN_1804174b0("C_BaseEntity",0x84cdad2);
        if (DAT_180c7c97c == 0) {
          DAT_180c7c980 = UVar9 + 1000;
        }
        else {
          DAT_180c7c980 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c7c97c;
      FUN_1805f68fc(&DAT_1809bb870);
    }
  }
  iVar6 = DAT_180c7c990;
  if (DAT_180c7c990 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c7c988) {
      iVar6 = 0;
    }
    else {
      local_78[0] = &DAT_1809bb730;
      iVar6 = FUN_1805f68d0(&DAT_1809bb730);
      if (iVar6 != 0) goto LAB_180412b36;
      if (DAT_1809bb77c == 0x7fffffff) {
        DAT_1809bb77c = 0x7ffffffe;
        goto LAB_180412b2b;
      }
      if ((DAT_180c7c990 == 0) && (DAT_180c7c988 <= UVar9)) {
        DAT_180c7c990 = FUN_1804174b0("CCSPlayer_MovementServices",0xee725c8c);
        if (DAT_180c7c990 == 0) {
          DAT_180c7c988 = UVar9 + 1000;
        }
        else {
          DAT_180c7c988 = 0xffffffffffffffff;
        }
      }
      iVar6 = DAT_180c7c990;
      FUN_1805f68fc(&DAT_1809bb730);
    }
  }
  uVar15 = 0;
  if (iVar7 == 0) {
    DAT_180b8e1ac = 0x7fc00000;
  }
  else {
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    uVar11 = 0;
    if (iVar7 + param_3 != 0) {
      local_78[0] = (undefined *)CONCAT44(local_78[0]._4_4_,uVar15);
      cVar4 = FUN_1804514f0(local_78,iVar7 + param_3,4);
      if (cVar4 == '\0') {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
    }
    auVar13 = ZEXT464((uint)local_78[0]);
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    auVar1 = vpcmpeqd_avx(ZEXT416(uVar11),SUB6416(ZEXT464(0),0));
    auVar1 = vblendvps_avx(auVar13._0_16_,SUB6416(ZEXT464(0x7fc00000),0),auVar1);
    DAT_180b8e1ac = auVar1._0_4_;
  }
  auVar13 = ZEXT464(0x7fc00000);
  if (iVar8 == 0) {
    DAT_180b8e1c0 = 0xffffffff;
  }
  else {
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    bVar2 = false;
    if (iVar8 + param_2 != 0) {
      local_78[0] = (undefined *)((ulonglong)local_78[0] & 0xffffffff00000000);
      cVar4 = FUN_1804514f0(local_78,iVar8 + param_2,4);
      if (cVar4 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    uVar3 = (uint)local_78[0];
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    DAT_180b8e1c0 = 0xffffffff;
    if (bVar2) {
      DAT_180b8e1c0 = uVar3;
    }
  }
  if (iVar6 == 0) {
    DAT_180b8e1b0 = auVar13._0_4_;
  }
  else {
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    uVar11 = 0;
    if (iVar6 + param_3 != 0) {
      local_78[0] = (undefined *)CONCAT44(local_78[0]._4_4_,uVar15);
      cVar4 = FUN_1804514f0(local_78,iVar6 + param_3,4);
      if (cVar4 == '\0') {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
    }
    auVar14 = ZEXT464((uint)local_78[0]);
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    auVar1 = vpcmpeqd_avx(ZEXT416(uVar11),SUB6416(ZEXT464(0),0));
    auVar1 = vblendvps_avx(auVar14._0_16_,auVar13._0_16_,auVar1);
    DAT_180b8e1b0 = auVar1._0_4_;
  }
  iVar7 = DAT_180c7c950;
  if (DAT_180c7c950 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c7c958) {
      iVar7 = 0;
    }
    else {
      local_78[0] = &DAT_1809bb780;
      iVar7 = FUN_1805f68d0(&DAT_1809bb780);
      if (iVar7 != 0) goto LAB_180412b36;
      if (DAT_1809bb7cc == 0x7fffffff) {
        DAT_1809bb7cc = 0x7ffffffe;
        goto LAB_180412b2b;
      }
      if ((DAT_180c7c950 == 0) && (DAT_180c7c958 <= UVar9)) {
        DAT_180c7c950 = FUN_1804174b0("CCSPlayer_MovementServices",0x1736b002);
        if (DAT_180c7c950 == 0) {
          DAT_180c7c958 = UVar9 + 1000;
        }
        else {
          DAT_180c7c958 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c7c950;
      FUN_1805f68fc(&DAT_1809bb780);
    }
  }
  iVar8 = DAT_180c7c968;
  if (DAT_180c7c968 == 0) {
    UVar9 = GetTickCount64();
    if (UVar9 < DAT_180c7c960) {
      iVar8 = 0;
    }
    else {
      local_78[0] = &DAT_1809bb7d0;
      iVar8 = FUN_1805f68d0(&DAT_1809bb7d0);
      if (iVar8 != 0) {
LAB_180412b36:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1809bb81c == 0x7fffffff) {
        DAT_1809bb81c = 0x7ffffffe;
LAB_180412b2b:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c7c968 == 0) && (DAT_180c7c960 <= UVar9)) {
        DAT_180c7c968 = FUN_1804174b0("C_CSPlayerPawn",0x21f4a3d1);
        if (DAT_180c7c968 == 0) {
          uVar12 = UVar9 + 1000;
        }
        DAT_180c7c960 = uVar12;
      }
      iVar8 = DAT_180c7c968;
      FUN_1805f68fc(&DAT_1809bb7d0);
    }
  }
  if (iVar7 == 0) {
    _DAT_180b8e1b8 = auVar13._0_4_;
  }
  else {
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    uVar11 = 0;
    if (iVar7 + param_3 != 0) {
      local_78[0] = (undefined *)CONCAT44(local_78[0]._4_4_,uVar15);
      cVar4 = FUN_1804514f0(local_78,iVar7 + param_3,4);
      if (cVar4 == '\0') {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
    }
    auVar14 = ZEXT464((uint)local_78[0]);
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    auVar1 = vpcmpeqd_avx(ZEXT416(uVar11),SUB6416(ZEXT464(0),0));
    auVar1 = vblendvps_avx(auVar14._0_16_,auVar13._0_16_,auVar1);
    _DAT_180b8e1b8 = auVar1._0_4_;
  }
  if (iVar8 == 0) {
    DAT_180b8e1bc = auVar13._0_4_;
  }
  else {
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    uVar11 = 0;
    if (iVar8 + param_2 != 0) {
      local_78[0] = (undefined *)CONCAT44(local_78[0]._4_4_,uVar15);
      cVar4 = FUN_1804514f0(local_78,iVar8 + param_2,4);
      if (cVar4 == '\0') {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
      }
    }
    auVar14 = ZEXT464((uint)local_78[0]);
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    auVar1 = vpcmpeqd_avx(ZEXT416(uVar11),SUB6416(ZEXT464(0),0));
    auVar1 = vblendvps_avx(auVar14._0_16_,auVar13._0_16_,auVar1);
    DAT_180b8e1bc = auVar1._0_4_;
  }
  sVar5 = thunk_FUN_180624430((undefined4)DAT_180b8e168);
  if (sVar5 < 1) {
    sVar5 = thunk_FUN_180624430(DAT_180b8e168._4_4_);
    if ((sVar5 < 1) && (sVar5 = thunk_FUN_180624430(DAT_180b8e170), sVar5 < 1)) {
      sVar5 = thunk_FUN_180624430((undefined4)DAT_180b8e174);
      if (sVar5 < 1) {
        sVar5 = thunk_FUN_180624430(DAT_180b8e174._4_4_);
        if ((sVar5 < 1) && (sVar5 = thunk_FUN_180624430(DAT_180b8e17c), sVar5 < 1)) {
          DAT_180b8e111 = 1;
          return;
        }
      }
    }
  }
  DAT_180b8e111 = 0;
  return;
}



