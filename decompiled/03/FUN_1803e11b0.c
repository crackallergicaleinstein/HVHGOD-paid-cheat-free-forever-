// FUN_1803e11b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e11b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803e11b0(void)

{
  undefined1 auVar1 [16];
  bool bVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  ULONGLONG UVar14;
  ulonglong uVar15;
  int iVar16;
  undefined *puVar17;
  undefined4 *puVar18;
  bool bVar19;
  undefined4 *puVar20;
  uint uVar21;
  undefined4 *puVar22;
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auStack_728 [32];
  undefined **local_708;
  char *local_700;
  byte local_6f8 [8];
  undefined *local_6f0;
  undefined4 *local_6e8;
  int local_6e0 [2];
  undefined4 *local_6d8;
  undefined8 local_6d0;
  undefined *local_6c8;
  undefined4 *local_6c0;
  longlong lStack_6b8;
  longlong lStack_6b0;
  longlong lStack_6a8;
  uint local_6a0;
  uint uStack_69c;
  undefined1 uStack_698;
  undefined1 uStack_697;
  undefined6 uStack_696;
  undefined4 local_690 [2];
  undefined8 local_688;
  undefined4 local_680;
  undefined8 local_678;
  char local_668 [1536];
  ulonglong local_68;
  
  lVar13 = DAT_180c72060;
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStack_728;
  lVar12 = FUN_18017ea70();
  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
  bVar19 = false;
  if (lVar13 != 0) {
    local_6e8 = (undefined4 *)0x0;
    cVar7 = FUN_1804514f0(&local_6e8,lVar13,8);
    if (cVar7 == '\0') {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
  }
  puVar22 = local_6e8;
  lVar13 = FUN_18017ea70();
  if (*(int *)(lVar13 + 4) != 0) {
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
  }
  if ((!bVar19) || (puVar22 == (undefined4 *)0x0)) {
LAB_1803e239e:
    FUN_1803e2410();
  }
  iVar9 = DAT_180c72110;
  if (DAT_180c72110 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c72108) {
      iVar9 = 0;
    }
    else {
      local_6c8 = &DAT_1809bafa0;
      iVar9 = FUN_1805f68d0(&DAT_1809bafa0);
      if (iVar9 != 0) goto LAB_1803e23e5;
      if (DAT_1809bafec == 0x7fffffff) {
        DAT_1809bafec = 0x7ffffffe;
        goto LAB_1803e23fa;
      }
      if ((DAT_180c72110 == 0) && (DAT_180c72108 <= UVar14)) {
        DAT_180c72110 = FUN_1804174b0("CBasePlayerController",0x7c628c1d);
        if (DAT_180c72110 == 0) {
          DAT_180c72108 = UVar14 + 1000;
        }
        else {
          DAT_180c72108 = 0xffffffffffffffff;
        }
      }
      iVar9 = DAT_180c72110;
      FUN_1805f68fc(&DAT_1809bafa0);
    }
  }
  iVar10 = DAT_180c720e8;
  if (DAT_180c720e8 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c720f0) {
      iVar10 = 0;
    }
    else {
      local_6c8 = &DAT_1809baff0;
      iVar10 = FUN_1805f68d0(&DAT_1809baff0);
      if (iVar10 != 0) goto LAB_1803e23e5;
      if (DAT_1809bb03c == 0x7fffffff) {
        DAT_1809bb03c = 0x7ffffffe;
        goto LAB_1803e23fa;
      }
      if ((DAT_180c720e8 == 0) && (DAT_180c720f0 <= UVar14)) {
        DAT_180c720e8 = FUN_1804174b0("C_BaseEntity",0xa5bfefb3);
        if (DAT_180c720e8 == 0) {
          DAT_180c720f0 = UVar14 + 1000;
        }
        else {
          DAT_180c720f0 = 0xffffffffffffffff;
        }
      }
      iVar10 = DAT_180c720e8;
      FUN_1805f68fc(&DAT_1809baff0);
    }
  }
  iVar11 = DAT_180c72100;
  if (DAT_180c72100 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c720f8) {
      iVar11 = 0;
    }
    else {
      local_6c8 = &DAT_1809bb040;
      iVar11 = FUN_1805f68d0(&DAT_1809bb040);
      if (iVar11 != 0) goto LAB_1803e23e5;
      if (DAT_1809bb08c == 0x7fffffff) {
        DAT_1809bb08c = 0x7ffffffe;
        goto LAB_1803e23fa;
      }
      if ((DAT_180c72100 == 0) && (DAT_180c720f8 <= UVar14)) {
        DAT_180c72100 = FUN_1804174b0("C_BaseEntity",0x84cdad2);
        if (DAT_180c72100 == 0) {
          DAT_180c720f8 = UVar14 + 1000;
        }
        else {
          DAT_180c720f8 = 0xffffffffffffffff;
        }
      }
      iVar11 = DAT_180c72100;
      FUN_1805f68fc(&DAT_1809bb040);
    }
  }
  iVar8 = DAT_180c72104;
  if (DAT_180c72104 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c720c8) {
      iVar8 = 0;
    }
    else {
      local_6c8 = &DAT_1809baeb0;
      iVar8 = FUN_1805f68d0(&DAT_1809baeb0);
      if (iVar8 != 0) goto LAB_1803e23e5;
      if (DAT_1809baefc == 0x7fffffff) {
        DAT_1809baefc = 0x7ffffffe;
        goto LAB_1803e23fa;
      }
      if ((DAT_180c72104 == 0) && (DAT_180c720c8 <= UVar14)) {
        DAT_180c72104 = FUN_1804174b0("C_BaseEntity",0x1c93bcf0);
        if (DAT_180c72104 == 0) {
          DAT_180c720c8 = UVar14 + 1000;
        }
        else {
          DAT_180c720c8 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c72104;
      FUN_1805f68fc(&DAT_1809baeb0);
    }
    puVar22 = local_6e8;
  }
  if ((((iVar9 == 0) || (iVar10 == 0)) || (iVar11 == 0)) || (iVar8 == 0)) goto LAB_1803e239e;
  puVar17 = (undefined *)((longlong)iVar9 + (longlong)puVar22);
  local_6c8 = puVar17;
  lVar13 = FUN_18017ea70();
  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
  if (puVar17 == (undefined *)0x0) {
    bVar19 = false;
    iVar9 = (uint)local_6f0;
  }
  else {
    local_6e0[0] = 0;
    cVar7 = FUN_1804514f0(local_6e0,puVar17,4);
    if (cVar7 == '\0') {
      bVar19 = false;
      iVar9 = (uint)local_6f0;
    }
    else {
      bVar19 = true;
      iVar9 = local_6e0[0];
    }
  }
  local_6e0[0] = iVar9;
  lVar13 = FUN_18017ea70();
  iVar16 = *(int *)(lVar13 + 4);
  if (iVar16 != 0) {
    iVar16 = iVar16 + -1;
    *(int *)(lVar13 + 4) = iVar16;
  }
  if (((!bVar19) || (iVar9 == 0)) || (lVar13 = FUN_1803d4150(iVar16,iVar9), lVar13 == 0))
  goto LAB_1803e239e;
  lStack_6b0 = 0;
  lStack_6a8 = 0;
  local_6a0 = 0;
  local_6d8 = (undefined4 *)(longlong)iVar10;
  puVar17 = (undefined *)((longlong)local_6d8 + lVar13);
  local_6c0 = puVar22;
  lStack_6b8 = lVar13;
  lVar12 = FUN_18017ea70();
  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
  if (puVar17 == (undefined *)0x0) {
    bVar19 = false;
  }
  else {
    local_6f8[0] = 0;
    cVar7 = FUN_1804514f0(local_6f8,puVar17,1);
    if (cVar7 == '\0') {
      bVar19 = false;
    }
    else {
      bVar19 = true;
    }
  }
  bVar4 = local_6f8[0];
  lVar12 = FUN_18017ea70();
  if (*(int *)(lVar12 + 4) != 0) {
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
  }
  lVar12 = FUN_18017ea70();
  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
  if (iVar11 + lVar13 == 0) {
    bVar2 = false;
  }
  else {
    local_6f0 = (undefined *)((ulonglong)local_6f0 & 0xffffffff00000000);
    cVar7 = FUN_1804514f0(&local_6f0,iVar11 + lVar13,4);
    if (cVar7 == '\0') {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  iVar9 = (uint)local_6f0;
  lVar12 = FUN_18017ea70();
  if (*(int *)(lVar12 + 4) != 0) {
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
  }
  lVar12 = FUN_18017ea70();
  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
  bVar3 = false;
  if (lVar13 + iVar8 != 0) {
    local_6f8[0] = 0;
    cVar7 = FUN_1804514f0(local_6f8,lVar13 + iVar8,1);
    if (cVar7 == '\0') {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
  }
  bVar5 = local_6f8[0];
  lVar13 = FUN_18017ea70();
  if (*(int *)(lVar13 + 4) != 0) {
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
  }
  if (((!bVar19) || (!bVar2)) || (!bVar3)) goto LAB_1803e239e;
  uVar21 = (uint)bVar4;
  local_6a0 = uVar21;
  if ((iVar9 < 1) || (bVar5 != 0)) {
    uStack_698 = 0;
    iVar9 = DAT_180c720d8;
    if (DAT_180c720d8 == 0) {
      UVar14 = GetTickCount64();
      if (DAT_180c720d0 <= UVar14) {
        local_6f0 = &DAT_1809baf00;
        iVar9 = FUN_1805f68d0(&DAT_1809baf00);
        if (iVar9 != 0) goto LAB_1803e23e5;
        if (DAT_1809baf4c == 0x7fffffff) {
          DAT_1809baf4c = 0x7ffffffe;
          goto LAB_1803e23fa;
        }
        if ((DAT_180c720d8 == 0) && (DAT_180c720d0 <= UVar14)) {
          DAT_180c720d8 = FUN_1804174b0("CCSPlayerController",0x54df971f);
          if (DAT_180c720d8 == 0) {
            DAT_180c720d0 = UVar14 + 1000;
          }
          else {
            DAT_180c720d0 = 0xffffffffffffffff;
          }
        }
        iVar9 = DAT_180c720d8;
        FUN_1805f68fc(&DAT_1809baf00);
        if (iVar9 != 0) goto LAB_1803e186f;
      }
      goto LAB_1803e1726;
    }
LAB_1803e186f:
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    if ((undefined *)((longlong)iVar9 + (longlong)local_6e8) == (undefined *)0x0) {
      bVar19 = false;
    }
    else {
      local_6f0 = (undefined *)((ulonglong)local_6f0 & 0xffffffff00000000);
      cVar7 = FUN_1804514f0(&local_6f0,(undefined *)((longlong)iVar9 + (longlong)local_6e8),4);
      if (cVar7 == '\0') {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
    }
    puVar17 = local_6f0;
    iVar9 = 0;
    lVar13 = FUN_18017ea70();
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
    if (bVar19) {
      iVar9 = (int)puVar17;
    }
    if ((iVar9 == 0) || (lVar13 = FUN_1803d4150(), lVar13 == 0)) goto LAB_1803e1726;
    iVar9 = DAT_180c720dc;
    if (DAT_180c720dc == 0) {
      UVar14 = GetTickCount64();
      if (DAT_180c720e0 <= UVar14) {
        local_6e8 = (undefined4 *)&DAT_1809baf50;
        iVar9 = FUN_1805f68d0(&DAT_1809baf50);
        if (iVar9 != 0) goto LAB_1803e23e5;
        if (DAT_1809baf9c == 0x7fffffff) {
          DAT_1809baf9c = 0x7ffffffe;
          goto LAB_1803e23fa;
        }
        if ((DAT_180c720dc == 0) && (DAT_180c720e0 <= UVar14)) {
          DAT_180c720dc = FUN_1804174b0("C_BasePlayerPawn",0x4ed1a579);
          if (DAT_180c720dc == 0) {
            DAT_180c720e0 = UVar14 + 1000;
          }
          else {
            DAT_180c720e0 = 0xffffffffffffffff;
          }
        }
        iVar9 = DAT_180c720dc;
        FUN_1805f68fc(&DAT_1809baf50);
        if (iVar9 != 0) goto LAB_1803e199c;
      }
      goto LAB_1803e1726;
    }
LAB_1803e199c:
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    bVar19 = false;
    if (iVar9 + lVar13 != 0) {
      local_6e8 = (undefined4 *)0x0;
      cVar7 = FUN_1804514f0(&local_6e8,iVar9 + lVar13,8);
      if (cVar7 == '\0') {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
    }
    puVar22 = local_6e8;
    lVar13 = FUN_18017ea70();
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
    puVar18 = (undefined4 *)0x0;
    if (bVar19) {
      puVar18 = puVar22;
    }
    if (puVar18 == (undefined4 *)0x0) goto LAB_1803e1726;
    iVar9 = DAT_180c720a8;
    if (DAT_180c720a8 == 0) {
      UVar14 = GetTickCount64();
      if (DAT_180c720a0 <= UVar14) {
        local_6e8 = (undefined4 *)&DAT_1809bae10;
        iVar9 = FUN_1805f68d0(&DAT_1809bae10);
        if (iVar9 != 0) goto LAB_1803e23e5;
        if (DAT_1809bae5c == 0x7fffffff) {
          DAT_1809bae5c = 0x7ffffffe;
          goto LAB_1803e23fa;
        }
        if ((DAT_180c720a8 == 0) && (DAT_180c720a0 <= UVar14)) {
          DAT_180c720a8 = FUN_1804174b0("CPlayer_ObserverServices",0x24779c4c);
          if (DAT_180c720a8 == 0) {
            DAT_180c720a0 = UVar14 + 1000;
          }
          else {
            DAT_180c720a0 = 0xffffffffffffffff;
          }
        }
        iVar9 = DAT_180c720a8;
        FUN_1805f68fc(&DAT_1809bae10);
        if (iVar9 != 0) goto LAB_1803e1ab1;
      }
      goto LAB_1803e1726;
    }
LAB_1803e1ab1:
    iVar10 = 0;
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    bVar19 = false;
    if ((undefined *)((longlong)iVar9 + (longlong)puVar18) != (undefined *)0x0) {
      local_6f0 = (undefined *)((ulonglong)local_6f0 & 0xffffffff00000000);
      cVar7 = FUN_1804514f0(&local_6f0,(undefined *)((longlong)iVar9 + (longlong)puVar18),4);
      if (cVar7 == '\0') {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
    }
    puVar17 = local_6f0;
    lVar13 = FUN_18017ea70();
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
    iVar9 = iVar10;
    if (bVar19) {
      iVar9 = (int)puVar17;
    }
    if (iVar9 == 0) goto LAB_1803e1726;
    lVar13 = FUN_1803d4150();
    puVar22 = local_6d8;
    if (lVar13 == 0) goto LAB_1803e1726;
    lStack_6b0 = lVar13;
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    bVar19 = false;
    if ((undefined *)((longlong)puVar22 + lVar13) != (undefined *)0x0) {
      local_6f0 = (undefined *)((ulonglong)local_6f0 & 0xffffffff00000000);
      cVar7 = FUN_1804514f0(&local_6f0,(undefined *)((longlong)puVar22 + lVar13),4);
      if (cVar7 == '\0') {
        bVar19 = false;
      }
      else {
        bVar19 = true;
      }
    }
    uVar6 = (uint)local_6f0;
    lVar12 = FUN_18017ea70();
    if (*(int *)(lVar12 + 4) != 0) {
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
    }
    uStack_69c = uVar21;
    if (bVar19) {
      uStack_69c = uVar6;
    }
    iVar9 = DAT_180c720ac;
    if (DAT_180c720ac == 0) {
      UVar14 = GetTickCount64();
      if (DAT_180c720b0 <= UVar14) {
        local_6d8 = (undefined4 *)&DAT_1809bae60;
        iVar9 = FUN_1805f68d0(&DAT_1809bae60);
        if (iVar9 != 0) goto LAB_1803e23e5;
        if (DAT_1809baeac == 0x7fffffff) {
          DAT_1809baeac = 0x7ffffffe;
          goto LAB_1803e23fa;
        }
        if ((DAT_180c720ac == 0) && (DAT_180c720b0 <= UVar14)) {
          DAT_180c720ac = FUN_1804174b0("C_BasePlayerPawn",0x29882a6b);
          if (DAT_180c720ac == 0) {
            DAT_180c720b0 = UVar14 + 1000;
          }
          else {
            DAT_180c720b0 = 0xffffffffffffffff;
          }
        }
        iVar9 = DAT_180c720ac;
        FUN_1805f68fc(&DAT_1809bae60);
        if (iVar9 != 0) goto LAB_1803e1c29;
      }
    }
    else {
LAB_1803e1c29:
      lVar12 = FUN_18017ea70();
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
      bVar19 = false;
      if (iVar9 + lVar13 != 0) {
        local_6f0 = (undefined *)((ulonglong)local_6f0 & 0xffffffff00000000);
        cVar7 = FUN_1804514f0(&local_6f0,iVar9 + lVar13,4);
        if (cVar7 == '\0') {
          bVar19 = false;
        }
        else {
          bVar19 = true;
        }
      }
      puVar17 = local_6f0;
      lVar13 = FUN_18017ea70();
      if (*(int *)(lVar13 + 4) != 0) {
        *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
      }
      if (bVar19) {
        iVar10 = (int)puVar17;
      }
      if (iVar10 != 0) {
        lVar13 = FUN_1803d4150();
        if (lVar13 != 0) {
          lStack_6a8 = lVar13;
        }
      }
    }
  }
  else {
    uStack_698 = 1;
LAB_1803e1726:
    uStack_69c = (uint)bVar4;
  }
  puVar22 = (undefined4 *)0x0;
  local_690[0] = 0x371bf260;
  local_688 = 0;
  local_680 = 0xd2c5001b;
  local_678 = 0;
  if (DAT_180c64058 != 0) {
    local_6d8 = local_690;
    local_6d0 = 2;
    FUN_18044c9c0(DAT_180c64058,&local_6d8);
  }
  iVar9 = FUN_1803e1120(local_688);
  iVar10 = FUN_1803e1120();
  lVar13 = DAT_180bb88d0;
  if (iVar9 == 1) {
    if (iVar10 != 2) goto LAB_1803e1794;
LAB_1803e1ca8:
    uStack_697 = 0;
  }
  else {
    if ((iVar9 == 2) && (iVar10 == 0)) goto LAB_1803e1ca8;
LAB_1803e1794:
    uStack_697 = 1;
  }
  if ((iVar9 == 1) && (iVar10 == 2)) {
    DAT_180bb88c8 = 1;
  }
  else {
    DAT_180bb88c8 = 0;
  }
  LOCK();
  UNLOCK();
  lVar12 = FUN_18017ea70();
  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
  if (lVar13 == 0) {
    bVar19 = false;
    puVar18 = local_6d8;
  }
  else {
    local_6e8 = (undefined4 *)0x0;
    cVar7 = FUN_1804514f0(&local_6e8,lVar13,8);
    if (cVar7 == '\0') {
      bVar19 = false;
      puVar18 = local_6d8;
    }
    else {
      bVar19 = true;
      puVar18 = local_6e8;
    }
  }
  lVar13 = FUN_18017ea70();
  if (*(int *)(lVar13 + 4) != 0) {
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
  }
  lVar13 = DAT_180bb8958;
  puVar20 = puVar22;
  if (bVar19) {
    puVar20 = puVar18;
  }
  lVar12 = FUN_18017ea70();
  *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
  if (lVar13 == 0) {
    bVar19 = false;
    puVar18 = local_6d8;
  }
  else {
    local_6e8 = (undefined4 *)0x0;
    cVar7 = FUN_1804514f0(&local_6e8,lVar13,8);
    if (cVar7 == '\0') {
      bVar19 = false;
      puVar18 = local_6d8;
    }
    else {
      bVar19 = true;
      puVar18 = local_6e8;
    }
  }
  uVar15 = FUN_18017ea70();
  if (*(int *)(uVar15 + 4) != 0) {
    *(int *)(uVar15 + 4) = *(int *)(uVar15 + 4) + -1;
  }
  local_6d8 = puVar22;
  if (bVar19) {
    local_6d8 = puVar18;
  }
  bVar19 = false;
  uVar15 = uVar15 & 0xffffffffffffff00;
  local_6e8 = (undefined4 *)CONCAT44(local_6e8._4_4_,(int)uVar15);
  if ((puVar20 == (undefined4 *)0x0) || (local_6d8 == (undefined4 *)0x0)) goto LAB_1803e227f;
  puVar18 = (undefined4 *)(ulonglong)DAT_180c720c0;
  if (DAT_180c720c0 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c720b8) {
      puVar18 = puVar22;
    }
    else {
      local_6f0 = &DAT_1809bad20;
      iVar9 = FUN_1805f68d0(&DAT_1809bad20);
      if (iVar9 != 0) goto LAB_1803e23e5;
      if (DAT_1809bad6c == 0x7fffffff) {
        DAT_1809bad6c = 0x7ffffffe;
        goto LAB_1803e23fa;
      }
      puVar18 = (undefined4 *)(ulonglong)DAT_180c720c0;
      if ((DAT_180c720c0 == 0) && (DAT_180c720b8 <= UVar14)) {
        DAT_180c720c0 = FUN_1804174b0("C_CSGameRules",0x50fce177);
        puVar18 = (undefined4 *)(ulonglong)DAT_180c720c0;
        if (DAT_180c720c0 == 0) {
          DAT_180c720b8 = UVar14 + 1000;
        }
        else {
          DAT_180c720b8 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_1809bad20);
    }
  }
  iVar9 = DAT_180c72080;
  if (DAT_180c72080 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c72088) {
      iVar9 = 0;
    }
    else {
      local_6f0 = &DAT_1809bad70;
      iVar9 = FUN_1805f68d0(&DAT_1809bad70);
      if (iVar9 != 0) goto LAB_1803e23e5;
      if (DAT_1809badbc == 0x7fffffff) {
        DAT_1809badbc = 0x7ffffffe;
        goto LAB_1803e23fa;
      }
      if ((DAT_180c72080 == 0) && (DAT_180c72088 <= UVar14)) {
        DAT_180c72080 = FUN_1804174b0("C_CSGameRules",0xcec62ee2);
        if (DAT_180c72080 == 0) {
          DAT_180c72088 = UVar14 + 1000;
        }
        else {
          DAT_180c72088 = 0xffffffffffffffff;
        }
      }
      iVar9 = DAT_180c72080;
      FUN_1805f68fc(&DAT_1809bad70);
    }
  }
  iVar10 = DAT_180c72098;
  if ((DAT_180c72098 == 0) && (UVar14 = GetTickCount64(), DAT_180c72090 <= UVar14)) {
    local_6f0 = &DAT_1809badc0;
    iVar10 = FUN_1805f68d0(&DAT_1809badc0);
    if (iVar10 != 0) goto LAB_1803e23e5;
    if (DAT_1809bae0c == 0x7fffffff) {
      DAT_1809bae0c = 0x7ffffffe;
      goto LAB_1803e23fa;
    }
    if ((DAT_180c72098 == 0) && (DAT_180c72090 <= UVar14)) {
      DAT_180c72098 = FUN_1804174b0("C_CSGameRules",0xde408e3);
      DAT_180c72090 = 0xffffffffffffffff;
      if (DAT_180c72098 == 0) {
        DAT_180c72090 = UVar14 + 1000;
      }
    }
    iVar10 = DAT_180c72098;
    FUN_1805f68fc(&DAT_1809badc0);
  }
  iVar11 = DAT_180c7209c;
  if ((DAT_180c7209c == 0) && (UVar14 = GetTickCount64(), DAT_180c72078 <= UVar14)) {
    local_6f0 = &DAT_1809bacd0;
    iVar11 = FUN_1805f68d0(&DAT_1809bacd0);
    if (iVar11 != 0) {
LAB_1803e23e5:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1809bad1c == 0x7fffffff) {
      DAT_1809bad1c = 0x7ffffffe;
LAB_1803e23fa:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    if ((DAT_180c7209c == 0) && (DAT_180c72078 <= UVar14)) {
      DAT_180c7209c = FUN_1804174b0("C_CSGameRules",0xc262ee3c);
      DAT_180c72078 = 0xffffffffffffffff;
      if (DAT_180c7209c == 0) {
        DAT_180c72078 = UVar14 + 1000;
      }
    }
    iVar11 = DAT_180c7209c;
    FUN_1805f68fc(&DAT_1809bacd0);
  }
  if ((int)puVar18 == 0) {
LAB_1803e20fc:
    if (iVar9 != 0) {
      lVar13 = FUN_18017ea70();
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
      bVar2 = false;
      if ((undefined *)((longlong)iVar9 + (longlong)puVar20) != (undefined *)0x0) {
        local_6f0 = (undefined *)((ulonglong)local_6f0 & 0xffffffff00000000);
        cVar7 = FUN_1804514f0(&local_6f0,(undefined *)((longlong)iVar9 + (longlong)puVar20),4);
        if (cVar7 == '\0') {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
      }
      iVar9 = (uint)local_6f0;
      lVar13 = FUN_18017ea70();
      if (*(int *)(lVar13 + 4) != 0) {
        *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
      }
      if (bVar2) {
        bVar19 = 3 < iVar9;
      }
    }
  }
  else {
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    puVar17 = (undefined *)((longlong)(int)puVar18 + (longlong)puVar20);
    bVar2 = false;
    if (puVar17 != (undefined *)0x0) {
      local_6f8[0] = 0;
      cVar7 = FUN_1804514f0(local_6f8,puVar17,1);
      if (cVar7 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    bVar4 = local_6f8[0];
    lVar13 = FUN_18017ea70();
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
    if ((!bVar2) || (bVar4 == 0)) goto LAB_1803e20fc;
    bVar19 = true;
  }
  if (iVar10 != 0) {
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    bVar2 = false;
    if ((undefined *)((longlong)iVar10 + (longlong)puVar20) != (undefined *)0x0) {
      local_6f8[0] = 0;
      cVar7 = FUN_1804514f0(local_6f8,(undefined *)((longlong)iVar10 + (longlong)puVar20),1);
      if (cVar7 == '\0') {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
    }
    bVar4 = local_6f8[0];
    lVar13 = FUN_18017ea70();
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
    if ((bVar2) && (bVar4 != 0)) {
      uVar15 = 1;
      goto LAB_1803e227f;
    }
  }
  if (iVar11 == 0) {
    auVar23 = ZEXT864(0);
    auVar1 = ZEXT816(0);
  }
  else {
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    auVar23 = ZEXT864(0);
    uVar21 = 0;
    if ((undefined *)((longlong)iVar11 + (longlong)puVar20) != (undefined *)0x0) {
      local_6f0 = (undefined *)((ulonglong)local_6f0 & 0xffffffff00000000);
      cVar7 = FUN_1804514f0(&local_6f0,(undefined *)((longlong)iVar11 + (longlong)puVar20),4);
      if (cVar7 == '\0') {
        uVar21 = 0;
      }
      else {
        uVar21 = 1;
      }
    }
    auVar24 = ZEXT464((uint)local_6f0);
    lVar13 = FUN_18017ea70();
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
    auVar1 = vpcmpeqd_avx(ZEXT416(uVar21),ZEXT416(0));
    auVar1 = vblendvps_avx(auVar24._0_16_,auVar23._0_16_,auVar1);
  }
  puVar22 = local_6d8;
  auVar24 = ZEXT1664(auVar1);
  lVar13 = FUN_18017ea70();
  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
  uVar21 = 0;
  if (puVar22 + 0xc != (undefined4 *)0x0) {
    local_6f0 = (undefined *)CONCAT44(local_6f0._4_4_,auVar23._0_4_);
    cVar7 = FUN_1804514f0(&local_6f0,puVar22 + 0xc,4);
    if (cVar7 == '\0') {
      uVar21 = 0;
    }
    else {
      uVar21 = 1;
    }
  }
  auVar25 = ZEXT464((uint)local_6f0);
  lVar13 = FUN_18017ea70();
  if (*(int *)(lVar13 + 4) != 0) {
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
  }
  auVar1 = vpcmpeqd_avx(ZEXT416(uVar21),ZEXT416(0));
  auVar1 = vblendvps_avx(auVar25._0_16_,auVar23._0_16_,auVar1);
  uVar15 = (ulonglong)((uint)local_6e8 & 0xff);
  if (auVar1._0_4_ < auVar24._0_4_) {
    uVar15 = 1;
  }
LAB_1803e227f:
  LOCK();
  UNLOCK();
  LOCK();
  DAT_180bb88ca = (undefined1)uVar15;
  UNLOCK();
  DAT_180bb88c9 = bVar19;
  lVar13 = FUN_18017ea70();
  *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
  iVar9 = 0;
  if (local_6c8 == (undefined *)0x0) {
    bVar19 = false;
    iVar10 = (uint)local_6e8;
  }
  else {
    local_6f0 = (undefined *)((ulonglong)local_6f0 & 0xffffffff00000000);
    cVar7 = FUN_1804514f0(&local_6f0,local_6c8,4);
    if (cVar7 == '\0') {
      bVar19 = false;
      iVar10 = (uint)local_6e8;
    }
    else {
      bVar19 = true;
      iVar10 = (uint)local_6f0;
    }
  }
  lVar13 = FUN_18017ea70();
  iVar11 = local_6e0[0];
  if (*(int *)(lVar13 + 4) != 0) {
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
  }
  if ((bVar19) && (iVar9 = iVar10, iVar10 == local_6e0[0])) {
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_180bb88c0);
    _DAT_180bb8890 = local_6c0;
    lRam0000000180bb8898 = lStack_6b8;
    lRam0000000180bb88a0 = lStack_6b0;
    lRam0000000180bb88a8 = lStack_6a8;
    _DAT_180bb88b0 = CONCAT44(uStack_69c,local_6a0);
    uRam0000000180bb88b8 = CONCAT62(uStack_696,CONCAT11(uStack_697,uStack_698));
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_180bb88c0);
  }
  FUN_1803e2410();
  FUN_18063ab10(local_668,0,0x600);
  local_700 = (char *)CONCAT44(local_700._4_4_,iVar9);
  local_708 = (undefined **)CONCAT44(local_708._4_4_,iVar11);
  FUN_18015ad60(local_668,0x600,0xffffffffffffffff,"old_handle=0x%X new_handle=0x%X");
  local_708 = &PTR_180700558;
  if (local_668[0] != '\0') {
    local_708 = (undefined **)&DAT_1806bcfc0;
  }
  local_700 = local_668;
  FUN_1800f6900(0);
}



