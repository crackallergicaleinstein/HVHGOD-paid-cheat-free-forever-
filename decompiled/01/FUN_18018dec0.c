// FUN_18018dec0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18018dec0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18018dec0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  char cVar8;
  HMODULE hModule;
  FARPROC pFVar9;
  FARPROC pFVar10;
  longlong lVar11;
  undefined1 auStack_138 [32];
  longlong *local_118;
  char local_110;
  longlong *local_100;
  longlong *local_f8;
  FARPROC local_f0;
  FARPROC local_e8;
  FARPROC local_e0;
  FARPROC local_d8;
  FARPROC local_d0;
  FARPROC local_c8;
  FARPROC local_c0;
  FARPROC local_b8;
  undefined4 local_b0 [2];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  FARPROC local_68;
  FARPROC local_60;
  FARPROC local_58;
  FARPROC local_50;
  FARPROC local_48;
  longlong local_40;
  longlong local_38;
  ulonglong local_20;
  
  local_20 = DAT_1808d5f00 ^ (ulonglong)auStack_138;
  local_100 = param_1;
  hModule = GetModuleHandleW(L"steam_api64.dll");
  if (hModule == (HMODULE)0x0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    plVar1 = param_1 + 9;
    *(undefined4 *)plVar1 = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    local_118 = plVar1;
    FUN_1801bb550(param_1 + 10);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 7;
    param_1[0x10] = 8;
    *(undefined4 *)plVar1 = 0x3f800000;
    FUN_1801406e0(param_1 + 0xc,0x10,param_1[10]);
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x18] = 0;
    FUN_1801b85f0();
  }
  else {
    FUN_18018e640(&local_f8);
    pFVar9 = GetProcAddress(hModule,"SteamAPI_SteamNetworkingMessages_SteamAPI_v002");
    cVar8 = FUN_1804513c0(pFVar9,1,2);
    pFVar10 = (FARPROC)0x0;
    if (cVar8 != '\0') {
      pFVar10 = pFVar9;
    }
    cVar8 = FUN_1804513c0(pFVar10,1,2);
    if (cVar8 == '\0') {
      cVar8 = '\0';
    }
    else {
      lVar11 = FUN_18017ea70();
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
      FUN_1801adde0(&local_118,pFVar10);
      lVar11 = FUN_18017ea70();
      if (*(int *)(lVar11 + 4) != 0) {
        *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
      }
      cVar8 = local_110;
    }
    local_f8 = local_118;
    if (cVar8 == '\0') {
      local_f8 = (longlong *)0x0;
    }
    pFVar10 = GetProcAddress(hModule,"SteamAPI_ISteamNetworkingMessages_SendMessageToUser");
    cVar8 = FUN_1804513c0(pFVar10,1,2);
    local_f0 = (FARPROC)0x0;
    if (cVar8 != '\0') {
      local_f0 = pFVar10;
    }
    pFVar10 = GetProcAddress(hModule,"SteamAPI_ISteamNetworkingMessages_ReceiveMessagesOnChannel");
    cVar8 = FUN_1804513c0(pFVar10,1,2);
    local_e8 = (FARPROC)0x0;
    if (cVar8 != '\0') {
      local_e8 = pFVar10;
    }
    pFVar10 = GetProcAddress(hModule,"SteamAPI_ISteamNetworkingMessages_AcceptSessionWithUser");
    cVar8 = FUN_1804513c0(pFVar10,1,2);
    local_e0 = (FARPROC)0x0;
    if (cVar8 != '\0') {
      local_e0 = pFVar10;
    }
    pFVar10 = GetProcAddress(hModule,"SteamAPI_ISteamNetworkingMessages_CloseChannelWithUser");
    cVar8 = FUN_1804513c0(pFVar10,1,2);
    local_d8 = (FARPROC)0x0;
    if (cVar8 != '\0') {
      local_d8 = pFVar10;
    }
    pFVar10 = GetProcAddress(hModule,"SteamAPI_SteamNetworkingMessage_t_Release");
    cVar8 = FUN_1804513c0(pFVar10,1,2);
    local_d0 = (FARPROC)0x0;
    if (cVar8 != '\0') {
      local_d0 = pFVar10;
    }
    pFVar10 = GetProcAddress(hModule,"SteamAPI_SteamNetworkingIdentity_SetSteamID64");
    cVar8 = FUN_1804513c0(pFVar10,1,2);
    local_c8 = (FARPROC)0x0;
    if (cVar8 != '\0') {
      local_c8 = pFVar10;
    }
    pFVar10 = GetProcAddress(hModule,"SteamAPI_SteamNetworkingIdentity_GetSteamID64");
    cVar8 = FUN_1804513c0(pFVar10,1,2);
    local_c0 = (FARPROC)0x0;
    if (cVar8 != '\0') {
      local_c0 = pFVar10;
    }
    pFVar10 = GetProcAddress(hModule,"SteamAPI_ISteamNetworkingMessages_GetSessionConnectionInfo");
    cVar8 = FUN_1804513c0(pFVar10,1,2);
    local_b8 = (FARPROC)0x0;
    if (cVar8 != '\0') {
      local_b8 = pFVar10;
    }
    if ((((local_f8 == (longlong *)0x0) || (local_f0 == (FARPROC)0x0)) || (local_e8 == (FARPROC)0x0)
        ) || (((local_e0 == (FARPROC)0x0 || (local_d8 == (FARPROC)0x0)) ||
              ((local_d0 == (FARPROC)0x0 ||
               ((local_c8 == (FARPROC)0x0 || (local_c0 == (FARPROC)0x0)))))))) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      plVar1 = param_1 + 9;
      *(undefined4 *)plVar1 = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      local_118 = plVar1;
      FUN_1801bb550(param_1 + 10);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 7;
      param_1[0x10] = 8;
      *(undefined4 *)plVar1 = 0x3f800000;
      FUN_1801406e0(param_1 + 0xc,0x10,param_1[10]);
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      FUN_1801b85f0();
    }
    else {
      pFVar9 = GetProcAddress(hModule,"SteamAPI_SteamNetworking_v006");
      cVar8 = FUN_1804513c0(pFVar9,1,2);
      pFVar10 = (FARPROC)0x0;
      if (cVar8 != '\0') {
        pFVar10 = pFVar9;
      }
      cVar8 = FUN_1804513c0(pFVar10,1,2);
      if (cVar8 == '\0') {
        local_110 = '\0';
      }
      else {
        lVar11 = FUN_18017ea70();
        *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
        FUN_1801adde0(&local_118,pFVar10);
        lVar11 = FUN_18017ea70();
        if (*(int *)(lVar11 + 4) != 0) {
          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
        }
      }
      if (local_110 == '\0') {
        local_118 = (longlong *)0x0;
      }
      local_70 = local_118;
      pFVar10 = GetProcAddress(hModule,"SteamAPI_ISteamNetworking_SendP2PPacket");
      cVar8 = FUN_1804513c0(pFVar10,1,2);
      local_68 = (FARPROC)0x0;
      if (cVar8 != '\0') {
        local_68 = pFVar10;
      }
      pFVar10 = GetProcAddress(hModule,"SteamAPI_ISteamNetworking_IsP2PPacketAvailable");
      cVar8 = FUN_1804513c0(pFVar10,1,2);
      local_60 = (FARPROC)0x0;
      if (cVar8 != '\0') {
        local_60 = pFVar10;
      }
      pFVar10 = GetProcAddress(hModule,"SteamAPI_ISteamNetworking_ReadP2PPacket");
      cVar8 = FUN_1804513c0(pFVar10,1,2);
      local_58 = (FARPROC)0x0;
      if (cVar8 != '\0') {
        local_58 = pFVar10;
      }
      pFVar10 = GetProcAddress(hModule,"SteamAPI_ISteamNetworking_CloseP2PChannelWithUser");
      cVar8 = FUN_1804513c0(pFVar10,1,2);
      local_50 = (FARPROC)0x0;
      if (cVar8 != '\0') {
        local_50 = pFVar10;
      }
      pFVar10 = GetProcAddress(hModule,"SteamAPI_ISteamNetworking_GetP2PSessionState");
      cVar8 = FUN_1804513c0(pFVar10,1,2);
      local_48 = (FARPROC)0x0;
      if (cVar8 != '\0') {
        local_48 = pFVar10;
      }
      if ((((local_68 == (FARPROC)0x0) || (local_60 == (FARPROC)0x0)) || (local_58 == (FARPROC)0x0))
         || (local_50 == (FARPROC)0x0)) {
        local_70 = (longlong *)0x0;
      }
      *param_1 = (longlong)local_f8;
      param_1[1] = (longlong)local_f0;
      param_1[2] = (longlong)local_e8;
      param_1[3] = (longlong)local_e0;
      param_1[4] = (longlong)local_d8;
      param_1[5] = (longlong)local_d0;
      param_1[6] = (longlong)local_c8;
      param_1[7] = (longlong)local_c0;
      param_1[8] = (longlong)local_b8;
      local_118 = param_1 + 9;
      *(undefined4 *)local_118 = local_b0[0];
      param_1[10] = 0;
      param_1[0xb] = 0;
      FUN_1801bb550(param_1 + 10);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      FUN_1801406e0(param_1 + 0xc,0x10,param_1[10]);
      lVar7 = local_78;
      lVar6 = local_80;
      lVar11 = param_1[10];
      param_1[10] = local_a8;
      lVar2 = param_1[0xb];
      param_1[0xb] = local_a0;
      lVar3 = param_1[0xc];
      param_1[0xc] = local_98;
      lVar4 = param_1[0xd];
      param_1[0xd] = local_90;
      lVar5 = param_1[0xe];
      param_1[0xe] = local_88;
      local_80 = 7;
      param_1[0xf] = lVar6;
      local_78 = 8;
      param_1[0x10] = lVar7;
      param_1[0x11] = (longlong)local_70;
      param_1[0x12] = (longlong)local_68;
      param_1[0x13] = (longlong)local_60;
      param_1[0x14] = (longlong)local_58;
      param_1[0x15] = (longlong)local_50;
      param_1[0x16] = (longlong)local_48;
      plVar1 = param_1 + 0x17;
      *plVar1 = 0;
      param_1[0x18] = 0;
      local_a8 = lVar11;
      local_a0 = lVar2;
      local_98 = lVar3;
      local_90 = lVar4;
      local_88 = lVar5;
      FUN_1801b85f0(plVar1);
      lVar11 = *plVar1;
      *plVar1 = local_40;
      lVar2 = param_1[0x18];
      param_1[0x18] = local_38;
      local_40 = lVar11;
      local_38 = lVar2;
    }
    FUN_18018f670(&local_40);
    FUN_180180c90(local_b0);
  }
}



