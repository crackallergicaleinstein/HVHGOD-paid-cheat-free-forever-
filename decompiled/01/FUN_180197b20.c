// FUN_180197b20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180197b20 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_180197b20(undefined8 *param_1,undefined4 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  char cVar3;
  char cVar4;
  FARPROC pFVar5;
  longlong lVar6;
  longlong lVar7;
  byte *******pppppppbVar8;
  ulonglong uVar9;
  FARPROC pFVar10;
  byte *******pppppppbVar11;
  undefined1 auStack_b8 [32];
  undefined8 *local_98;
  char local_88;
  char local_87;
  longlong local_80;
  char local_78;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  byte *******local_58 [2];
  longlong local_48;
  ulonglong local_40;
  ulonglong local_30;
  
  local_30 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  uVar2 = *(undefined8 *)param_1[1];
  pFVar5 = GetProcAddress((HMODULE)**(undefined8 **)*param_1,
                          "SteamAPI_ISteamFriends_GetFriendByIndex");
  cVar3 = FUN_1804513c0(pFVar5,1,2);
  pFVar10 = (FARPROC)0x0;
  if (cVar3 != '\0') {
    pFVar10 = pFVar5;
  }
  cVar4 = FUN_1804513c0(pFVar10,1,2);
  cVar3 = '\0';
  if (cVar4 != '\0') {
    lVar6 = FUN_18017ea70();
    *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
    local_98 = (undefined8 *)CONCAT44(local_98._4_4_,4);
    FUN_1801ae520(&local_80,pFVar10,uVar2,param_2);
    lVar6 = FUN_18017ea70();
    if (*(int *)(lVar6 + 4) != 0) {
      *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
    }
    cVar3 = local_78;
  }
  lVar6 = local_80;
  if (cVar3 == '\0') {
    lVar6 = 0;
  }
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  if (lVar6 + 0xfef00000da780400U < 10000000000) {
    uVar2 = *(undefined8 *)param_1[1];
    pFVar5 = GetProcAddress((HMODULE)**(undefined8 **)*param_1,
                            "SteamAPI_ISteamFriends_GetFriendGamePlayed");
    cVar3 = FUN_1804513c0(pFVar5,1,2);
    pFVar10 = (FARPROC)0x0;
    if (cVar3 != '\0') {
      pFVar10 = pFVar5;
    }
    cVar3 = FUN_1804513c0(pFVar10,1,2);
    if (cVar3 == '\0') {
      local_87 = '\0';
    }
    else {
      lVar7 = FUN_18017ea70();
      *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
      local_98 = &local_70;
      FUN_1801ae480(&local_88,pFVar10,uVar2,lVar6);
      lVar7 = FUN_18017ea70();
      if (*(int *)(lVar7 + 4) != 0) {
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
      }
    }
    if (local_87 == '\0') {
      local_88 = '\0';
    }
    if (((local_88 != '\0') && (((uint)local_70 & 0xffffff) == 0x2da)) && (local_60 == 0)) {
      uVar2 = *(undefined8 *)param_1[1];
      pFVar5 = GetProcAddress((HMODULE)**(undefined8 **)*param_1,
                              "SteamAPI_ISteamFriends_GetFriendRichPresence");
      cVar3 = FUN_1804513c0(pFVar5,1,2);
      pFVar10 = (FARPROC)0x0;
      if (cVar3 != '\0') {
        pFVar10 = pFVar5;
      }
      cVar4 = FUN_1804513c0(pFVar10,1,2);
      cVar3 = '\0';
      if (cVar4 != '\0') {
        lVar7 = FUN_18017ea70();
        *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
        FUN_1801ae4d0(&local_80,pFVar10,uVar2,lVar6);
        lVar6 = FUN_18017ea70();
        if (*(int *)(lVar6 + 4) != 0) {
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + -1;
        }
        cVar3 = local_78;
      }
      if (cVar3 == '\0') {
        local_80 = 0;
      }
      FUN_180454030(local_58,local_80);
      pppppppbVar8 = (byte *******)local_58;
      if (0xf < local_40) {
        pppppppbVar8 = local_58[0];
      }
      pppppppbVar11 = (byte *******)((longlong)pppppppbVar8 + local_48);
      uVar9 = 0;
      while ((pppppppbVar8 != pppppppbVar11 &&
             (bVar1 = (&DAT_1807c5b10)[*(byte *)pppppppbVar8], bVar1 < 10))) {
        if ((uVar9 < 0x1999999999999999) ||
           ((uVar9 == 0x1999999999999999 && ((ulonglong)bVar1 < 6)))) {
          uVar9 = (ulonglong)bVar1 + uVar9 * 10;
        }
        pppppppbVar8 = (byte *******)((longlong)pppppppbVar8 + 1);
      }
      FUN_18015c010(local_58);
    }
  }
}



