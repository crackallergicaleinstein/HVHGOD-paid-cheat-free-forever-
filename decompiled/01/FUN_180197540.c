// FUN_180197540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180197540 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180197540(HMODULE param_1)

{
  byte bVar1;
  ulonglong *puVar2;
  bool bVar3;
  char cVar4;
  char cVar5;
  FARPROC pFVar6;
  longlong lVar7;
  byte *******pppppppbVar8;
  ulonglong uVar9;
  byte *******pppppppbVar10;
  FARPROC pFVar11;
  ulonglong uVar12;
  undefined1 auStack_118 [32];
  HMODULE ***local_f8;
  HMODULE ***local_f0;
  undefined8 *local_e8;
  undefined8 local_d8;
  ulonglong *local_d0;
  undefined1 local_c8 [16];
  HMODULE **local_b8;
  ulonglong *local_b0;
  HMODULE **local_a8;
  ulonglong *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulonglong local_88;
  HMODULE local_80;
  HMODULE *local_78;
  ulonglong local_70;
  ulonglong local_68;
  byte *******local_60 [2];
  longlong local_50;
  ulonglong local_48;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  local_80 = param_1;
  local_80 = GetModuleHandleW(L"steam_api64.dll");
  if (local_80 == (HMODULE)0x0) {
LAB_180197add:
    *(ulonglong *)param_1 = 0;
    *(ulonglong *)(param_1 + 6) = 0;
    *(ulonglong *)(param_1 + 4) = 0;
    *(ulonglong *)(param_1 + 2) = 0;
  }
  local_78 = &local_80;
  pFVar6 = GetProcAddress(local_80,"SteamAPI_SteamUser_v023");
  cVar4 = FUN_1804513c0(pFVar6,1,2);
  pFVar11 = (FARPROC)0x0;
  if (cVar4 != '\0') {
    pFVar11 = pFVar6;
  }
  cVar5 = FUN_1804513c0(pFVar11,1,2);
  cVar4 = '\0';
  if (cVar5 != '\0') {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    FUN_1801adde0(&local_d8,pFVar11);
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    cVar4 = (char)local_d0;
  }
  uVar12 = (ulonglong)local_d8;
  if (cVar4 == '\0') {
    uVar12 = 0;
  }
  if (uVar12 == 0) goto LAB_180197add;
  pFVar6 = GetProcAddress(*local_78,"SteamAPI_ISteamUser_GetSteamID");
  cVar4 = FUN_1804513c0(pFVar6,1,2);
  pFVar11 = (FARPROC)0x0;
  if (cVar4 != '\0') {
    pFVar11 = pFVar6;
  }
  cVar5 = FUN_1804513c0(pFVar11,1,2);
  cVar4 = '\0';
  if (cVar5 != '\0') {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    FUN_1801ad7c0(&local_d8,pFVar11,uVar12);
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    cVar4 = (char)local_d0;
  }
  uVar12 = (ulonglong)local_d8;
  if (cVar4 == '\0') {
    uVar12 = 0;
  }
  if (9999999999 < uVar12 + 0xfef00000da780400) goto LAB_180197add;
  pFVar6 = GetProcAddress(*local_78,"SteamAPI_SteamFriends_v018");
  cVar4 = FUN_1804513c0(pFVar6,1,2);
  pFVar11 = (FARPROC)0x0;
  if (cVar4 != '\0') {
    pFVar11 = pFVar6;
  }
  cVar4 = FUN_1804513c0(pFVar11,1,2);
  if (cVar4 == '\0') {
    cVar4 = '\0';
  }
  else {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    FUN_1801adde0(&local_d8,pFVar11);
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    cVar4 = (char)local_d0;
  }
  local_70 = (ulonglong)local_d8;
  if (cVar4 == '\0') {
    local_70 = 0;
  }
  pFVar6 = GetProcAddress(*local_78,"SteamAPI_SteamMatchmaking_v009");
  cVar4 = FUN_1804513c0(pFVar6,1,2);
  pFVar11 = (FARPROC)0x0;
  if (cVar4 != '\0') {
    pFVar11 = pFVar6;
  }
  cVar4 = FUN_1804513c0(pFVar11,1,2);
  if (cVar4 == '\0') {
    cVar4 = '\0';
  }
  else {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    FUN_1801adde0(&local_d8,pFVar11);
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    cVar4 = (char)local_d0;
  }
  uVar9 = local_70;
  local_68 = (ulonglong)local_d8;
  if (cVar4 == '\0') {
    local_68 = 0;
  }
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  if (local_70 != 0) {
    pFVar6 = GetProcAddress(*local_78,"SteamAPI_ISteamFriends_GetFriendGamePlayed");
    cVar4 = FUN_1804513c0(pFVar6,1,2);
    pFVar11 = (FARPROC)0x0;
    if (cVar4 != '\0') {
      pFVar11 = pFVar6;
    }
    cVar4 = FUN_1804513c0(pFVar11,1,2);
    if (cVar4 != '\0') {
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      local_f8 = (HMODULE ***)&local_98;
      FUN_1801ae480(local_c8,pFVar11,uVar9);
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
    }
  }
  uVar9 = local_70;
  if (((uint)local_98 & 0xffffff) == 0x2da) {
    if (local_88 != 0) goto LAB_1801979a8;
  }
  else {
    local_88 = 0;
  }
  if (local_70 == 0) goto LAB_1801979a8;
  pFVar6 = GetProcAddress(*local_78,"SteamAPI_ISteamFriends_GetFriendRichPresence");
  cVar4 = FUN_1804513c0(pFVar6,1,2);
  pFVar11 = (FARPROC)0x0;
  if (cVar4 != '\0') {
    pFVar11 = pFVar6;
  }
  cVar5 = FUN_1804513c0(pFVar11,1,2);
  cVar4 = '\0';
  if (cVar5 != '\0') {
    lVar7 = FUN_18017ea70();
    *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
    FUN_1801ae4d0(&local_d8,pFVar11,uVar9);
    lVar7 = FUN_18017ea70();
    if (*(int *)(lVar7 + 4) != 0) {
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
    }
    cVar4 = (char)local_d0;
  }
  uVar9 = (ulonglong)local_d8;
  if (cVar4 == '\0') {
    uVar9 = 0;
  }
  FUN_180454030(local_60,uVar9,0x20);
  pppppppbVar8 = (byte *******)local_60;
  if (0xf < local_48) {
    pppppppbVar8 = local_60[0];
  }
  local_88 = 0;
  bVar3 = false;
  pppppppbVar10 = pppppppbVar8;
  if (pppppppbVar8 != (byte *******)((longlong)pppppppbVar8 + local_50)) {
    do {
      bVar1 = (&DAT_1807c5b10)[*(byte *)pppppppbVar10];
      if (9 < bVar1) break;
      if ((local_88 < 0x1999999999999999) ||
         ((local_88 == 0x1999999999999999 && ((ulonglong)bVar1 < 6)))) {
        local_88 = (ulonglong)bVar1 + local_88 * 10;
      }
      else {
        bVar3 = true;
      }
      pppppppbVar10 = (byte *******)((longlong)pppppppbVar10 + 1);
    } while (pppppppbVar10 != (byte *******)((longlong)pppppppbVar8 + local_50));
  }
  if ((pppppppbVar10 == pppppppbVar8) || (bVar3)) {
LAB_180197997:
    local_88 = 0;
  }
  else {
    pppppppbVar8 = (byte *******)local_60;
    if (0xf < local_48) {
      pppppppbVar8 = local_60[0];
    }
    if (pppppppbVar10 != (byte *******)((longlong)pppppppbVar8 + local_50)) goto LAB_180197997;
  }
  FUN_18015c010(local_60);
LAB_1801979a8:
  uVar9 = local_70;
  if (local_68 == 0) {
    *(ulonglong *)param_1 = uVar12;
    *(ulonglong *)(param_1 + 2) = 0;
    *(ulonglong *)(param_1 + 4) = 0;
    *(ulonglong *)(param_1 + 6) = 0;
    uVar9 = FUN_18015bca0(8);
    *(ulonglong *)(param_1 + 2) = uVar9;
    *(ulonglong *)(param_1 + 6) = uVar9 + 8;
    puVar2 = *(ulonglong **)(param_1 + 2);
    *puVar2 = uVar12;
    *(ulonglong **)(param_1 + 4) = puVar2 + 1;
  }
  if (local_70 == 0) {
    uVar9 = 0;
  }
  else {
    pFVar6 = GetProcAddress(*local_78,"SteamAPI_ISteamFriends_GetFriendCount");
    cVar4 = FUN_1804513c0(pFVar6,1,2);
    pFVar11 = (FARPROC)0x0;
    if (cVar4 != '\0') {
      pFVar11 = pFVar6;
    }
    cVar4 = FUN_1804513c0(pFVar11,1,2);
    if (cVar4 == '\0') {
      uVar9 = 0;
    }
    else {
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      FUN_1801ae570(&local_d8,pFVar11,uVar9);
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
      uVar9 = (ulonglong)local_d8 & 0xffffffff;
      if (local_d8._4_1_ == '\0') {
        uVar9 = 0;
      }
    }
  }
  *(ulonglong *)param_1 = uVar12;
  local_d8 = &local_78;
  local_d0 = &local_68;
  local_b8 = &local_78;
  local_b0 = &local_68;
  local_a8 = &local_78;
  local_a0 = &local_70;
  local_e8 = &local_d8;
  local_f0 = &local_b8;
  local_f8 = &local_a8;
  FUN_1801a8a50(param_1 + 2,uVar12,local_88,uVar9);
}



