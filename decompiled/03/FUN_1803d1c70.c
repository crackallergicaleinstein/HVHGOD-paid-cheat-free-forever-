// FUN_1803d1c70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d1c70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803d1c70(undefined8 param_1,byte param_2)

{
  bool bVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  BOOL BVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  longlong lVar11;
  HCURSOR pHVar12;
  int *piVar13;
  tagPOINT *ptVar14;
  tagPOINT *ptVar15;
  undefined8 uVar16;
  int *piVar17;
  byte bVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  undefined1 auStack_6a8 [32];
  undefined **local_688;
  char *local_680;
  uint local_678;
  int local_670;
  undefined4 local_668;
  int local_664;
  tagPOINT local_660;
  tagPOINT local_658;
  tagCURSORINFO local_650;
  char local_638 [1536];
  ulonglong local_38;
  
  cVar3 = DAT_180ccaa35;
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_6a8;
  uVar20 = 1;
  LOCK();
  DAT_180ccaa35 = 1;
  UNLOCK();
  if (cVar3 != '\0') {
    DAT_180ccaa35 = 1;
  }
  local_660 = (tagPOINT)&DAT_180ccaa35;
  if ((DAT_180ccaa20 == '\0') || (param_2 == 0)) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  if (cVar3 == DAT_180ccaa36) {
    DAT_180ccaa35 = 0;
  }
  UVar9 = GetTickCount64();
  lVar11 = DAT_180c70a60;
  if (UVar9 < DAT_180ccaa38) {
    DAT_180ccaa35 = 0;
  }
  if (cVar3 == '\0') {
    local_658.x = 0;
    local_658.y = 0;
    if ((param_2 == 0) || (BVar8 = GetCursorPos(&local_658), BVar8 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    iVar19 = DAT_180ccaa44;
    bVar21 = DAT_180ccaa44 == 0;
    if (DAT_180ccaa44 < 0) {
      bVar21 = DAT_180ccaa34 == '\0';
    }
    if ((DAT_180ccaa40 != 0) && (cVar3 = FUN_180387970(!bVar21), cVar3 != '\0')) {
      if (bVar1) {
        DAT_180ccaa4c = local_658.x;
        DAT_180ccaa50 = local_658.y;
        DAT_180ccaa48 = '\x01';
      }
      DAT_180ccaa36 = '\0';
      DAT_180ccaa40 = 0;
      FUN_18063ab10(local_638,0,0x600);
      local_670 = iVar19;
      local_678 = (uint)(DAT_180ccaa34 != '\0');
      local_680 = (char *)CONCAT44(local_680._4_4_,(uint)param_2);
      local_688 = (undefined **)CONCAT44(local_688._4_4_,(uint)!bVar21);
      FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                    "relative=%d captured=1 focused=%d saved_relative=%d native_requested=%d");
      local_688 = &PTR_180700558;
      if (local_638[0] != '\0') {
        local_688 = (undefined **)&DAT_1806bcfc0;
      }
      uVar16 = 0;
      goto LAB_1803d2128;
    }
    bVar18 = DAT_180ccaa40;
    DAT_180ccaa38 = UVar9 + 1000;
    FUN_18063ab10(local_638,0,0x600);
    local_688 = (undefined **)CONCAT44(local_688._4_4_,(uint)bVar18);
    FUN_18015ad60(local_638,0x600,0xffffffffffffffff,"operation=restore saved_mode_valid=%d");
  }
  else {
    if (DAT_180c70a60 == 0) {
      local_668._0_2_ = (ushort)(byte)local_668;
    }
    else {
      lVar10 = FUN_18017ea70();
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
      if (lVar11 + 0x54 == 0) {
LAB_1803d1d56:
        local_668._0_2_ = (ushort)(byte)local_668;
      }
      else {
        local_668 = local_668 & 0xffffff00;
        cVar3 = FUN_1804514f0(&local_668,lVar11 + 0x54,1);
        if (cVar3 == '\0') goto LAB_1803d1d56;
        local_668._0_2_ = CONCAT11(1,(byte)local_668);
      }
      lVar11 = FUN_18017ea70();
      if (*(int *)(lVar11 + 4) != 0) {
        *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
      }
    }
    uVar2 = local_668;
    bVar18 = (byte)(local_668 >> 8);
    if ((bVar18 != 0) && (cVar3 = FUN_180387970(0), cVar3 != '\0')) {
      DAT_180ccaa40 = 1;
      DAT_180ccaa36 = '\x01';
      DAT_180ccaa34 = (char)uVar2;
      pHVar12 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
      SetCursor(pHVar12);
      if (DAT_180ccaa48 != '\0') {
        iVar4 = GetSystemMetrics(0x4c);
        local_660.x = iVar4;
        uVar5 = GetSystemMetrics(0x4d);
        local_668 = uVar5;
        iVar6 = GetSystemMetrics(0x4e);
        iVar7 = GetSystemMetrics(0x4f);
        iVar19 = 1;
        if (1 < iVar6) {
          iVar19 = iVar6;
        }
        local_658.x = iVar19 + -1 + iVar4;
        iVar19 = 1;
        if (1 < iVar7) {
          iVar19 = iVar7;
        }
        local_664 = iVar19 + -1 + uVar5;
        piVar13 = &local_668;
        if ((int)uVar5 <= DAT_180ccaa50) {
          piVar13 = &DAT_180ccaa50;
        }
        piVar17 = &local_664;
        if (DAT_180ccaa50 <= local_664) {
          piVar17 = piVar13;
        }
        ptVar14 = &local_660;
        if (iVar4 <= DAT_180ccaa4c) {
          ptVar14 = (tagPOINT *)&DAT_180ccaa4c;
        }
        ptVar15 = &local_658;
        if (DAT_180ccaa4c <= local_658.x) {
          ptVar15 = ptVar14;
        }
        SetCursorPos(ptVar15->x,*piVar17);
        pHVar12 = LoadCursorW((HINSTANCE)0x0,(LPCWSTR)0x7f00);
        SetCursor(pHVar12);
      }
      local_650.cbSize = 0x18;
      local_650.flags = 0;
      local_650.hCursor = (HCURSOR)0x0;
      local_650.ptScreenPos.x = 0;
      local_650.ptScreenPos.y = 0;
      BVar8 = GetCursorInfo(&local_650);
      if ((BVar8 == 0) || (((byte)local_650.flags & 1) == 0)) {
        uVar20 = 0;
      }
      FUN_18063ab10(local_638,0,0x600);
      local_680 = (char *)CONCAT44(local_680._4_4_,(uint)(BVar8 != 0));
      local_688 = (undefined **)CONCAT44(local_688._4_4_,(uint)((char)uVar2 != '\0'));
      local_678 = uVar20;
      FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                    "saved_relative=%d focused=1 cursor_known=%d cursor_visible=%d");
      local_688 = &PTR_180700558;
      if (local_638[0] != '\0') {
        local_688 = (undefined **)&DAT_1806bcfc0;
      }
      uVar16 = 0;
      goto LAB_1803d2128;
    }
    lVar11 = DAT_180c70a60;
    DAT_180ccaa38 = UVar9 + 1000;
    FUN_18063ab10(local_638,0,0x600);
    local_680 = (char *)CONCAT44(local_680._4_4_,(uint)bVar18);
    local_688 = (undefined **)lVar11;
    FUN_18015ad60(local_638,0x600,0xffffffffffffffff,
                  "operation=acquire input=0x%llx saved_mode_valid=%d");
  }
  local_688 = &PTR_180700558;
  if (local_638[0] != '\0') {
    local_688 = (undefined **)&DAT_1806bcfc0;
  }
  uVar16 = 3;
LAB_1803d2128:
  local_680 = local_638;
  FUN_1800f6900(uVar16);
  DAT_180ccaa35 = 0;
}



