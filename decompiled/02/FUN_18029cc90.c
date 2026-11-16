// FUN_18029cc90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18029cc90 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18029cc90(longlong param_1)

{
  longlong lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong *plVar9;
  ULONGLONG UVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_f8 [48];
  char *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_a0;
  int local_98;
  undefined4 local_94;
  uint local_90;
  uint local_8c;
  longlong *local_88;
  undefined1 local_80 [16];
  longlong local_70;
  uint local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined4 local_48;
  undefined8 local_44;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  local_b8 = param_1;
  if ((DAT_180cd3d60 & 1) == 0) {
    DAT_180cd3d60 = DAT_180cd3d60 | 1;
    uRam0000000180cd3d74 = 0;
    DAT_180cd3d88 = 0;
    _DAT_180cd3d90 = ZEXT816(0);
    DAT_180cd3da0 = 0;
    DAT_180cd3da8 = 0;
    DAT_180cd3d70 = 0;
    DAT_180cd3d78 = (char *)0x0;
    DAT_180cd3d80 = 0;
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_c8 = "tier0.dll:g_pMemAlloc";
      local_c0 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_c8);
    }
    DAT_180cd3d78 =
         (char *)(**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x28);
    *(char **)DAT_180cd3d78 = DAT_180cd3d78;
    *(char **)(DAT_180cd3d78 + 8) = DAT_180cd3d78;
    DAT_180cd3d88 = 0;
    _DAT_180cd3d90 = (undefined1  [16])0x0;
    DAT_180cd3da0 = 7;
    DAT_180cd3da8 = 8;
    DAT_180cd3d70 = 0x3f800000;
    FUN_1801406e0(&DAT_180cd3d88,0x10,DAT_180cd3d78);
    atexit(FUN_180662be0);
  }
  if (local_b8 == 0) {
  }
  if (0x80 < DAT_180cd3d80) {
    if (DAT_180cd3d80 < DAT_180cd3da8 >> 3) {
      FUN_1802ac810(&DAT_180cd3d70,*(undefined8 *)DAT_180cd3d78,DAT_180cd3d78);
    }
    else {
      FUN_1802adec0();
      *(char **)DAT_180cd3d78 = DAT_180cd3d78;
      *(char **)(DAT_180cd3d78 + 8) = DAT_180cd3d78;
      DAT_180cd3d80 = 0;
      local_c8 = DAT_180cd3d78;
      FUN_1800f9880(DAT_180cd3d88,DAT_180cd3d90,&local_c8);
    }
  }
  plVar9 = (longlong *)FUN_1802ab220();
  lVar1 = *plVar9;
  if (*(longlong *)(lVar1 + 0x18) != 0) {
  }
  UVar10 = GetTickCount64();
  lVar12 = local_b8;
  if (UVar10 < *(ulonglong *)(lVar1 + 0x20)) {
  }
  *(ULONGLONG *)(lVar1 + 0x20) = UVar10 + 5000;
  uVar3 = DAT_180c7df48;
  if (DAT_180c7df38 == 0) {
    local_c8 = "steam_api64.dll:SteamAPI_ISteamFriends_GetMediumFriendAvatar";
    local_c0 = 0x3c;
    DAT_180c7df38 = FUN_180451750(&local_c8);
    if (DAT_180c7df38 == 0) {
    }
  }
  iVar7 = (*(code *)DAT_180c7df38)(uVar3,lVar12);
  uVar3 = DAT_180c7df90;
  local_90 = 0;
  local_8c = 0;
  if (iVar7 < 1) {
  }
  if (DAT_180c7dfa0 == 0) {
    local_c8 = "steam_api64.dll:SteamAPI_ISteamUtils_GetImageSize";
    local_c0 = 0x31;
    DAT_180c7dfa0 = FUN_180451750(&local_c8);
    if (DAT_180c7dfa0 == 0) {
    }
  }
  cVar6 = (*(code *)DAT_180c7dfa0)(uVar3,iVar7,&local_90,&local_8c);
  if (cVar6 == '\0') {
  }
  if (local_90 == 0) {
  }
  if (local_8c == 0) {
  }
  if (0x100 < local_90) {
  }
  if (0x100 < local_8c) {
  }
  uVar8 = local_8c * local_90 * 4;
  local_80 = (undefined1  [16])0x0;
  local_70 = 0;
  if (uVar8 == 0) {
    local_80._8_8_ = 0;
    lVar12 = local_80._8_8_;
  }
  else {
    lVar11 = FUN_18015bca0((ulonglong)uVar8);
    local_80._0_8_ = lVar11;
    lVar12 = lVar11 + (ulonglong)uVar8;
    local_70 = lVar12;
    FUN_18063ab10(lVar11,0,uVar8);
    local_80._8_8_ = lVar12;
  }
  auVar5 = local_80;
  uVar3 = DAT_180c7df90;
  uVar4 = local_80._0_8_;
  if (DAT_180c7df88 == 0) {
    local_c8 = "steam_api64.dll:SteamAPI_ISteamUtils_GetImageRGBA";
    local_c0 = 0x31;
    DAT_180c7df88 = FUN_180451750(&local_c8);
    if (DAT_180c7df88 == 0) goto LAB_18029d0e3;
  }
  cVar6 = (*(code *)DAT_180c7df88)(uVar3,iVar7,uVar4,(int)lVar12 - auVar5._0_4_);
  lVar12 = DAT_180c6e508;
  if (cVar6 != '\0') {
    local_54 = 1;
    local_44 = 0;
    local_68 = local_90;
    local_64 = local_8c;
    local_5c = 1;
    local_60 = 1;
    local_58 = 0x1c;
    local_4c = 1;
    local_48 = 8;
    local_a0 = local_80._0_8_;
    local_98 = local_90 * 4;
    local_94 = 0;
    local_88 = (longlong *)0x0;
    if ((DAT_180c6e508 != 0) &&
       (iVar7 = (**(code **)(*(longlong *)DAT_180c6e508 + 0x28))
                          (DAT_180c6e508,&local_68,&local_a0,&local_88), -1 < iVar7)) {
      pcVar2 = *(code **)(*(longlong *)lVar12 + 0x38);
      plVar9 = *(longlong **)(lVar1 + 0x18);
      if (plVar9 != (longlong *)0x0) {
        *(undefined8 *)(lVar1 + 0x18) = 0;
        (**(code **)(*plVar9 + 0x10))();
      }
      (*pcVar2)(lVar12,local_88,0,lVar1 + 0x18);
    }
    plVar9 = local_88;
    if (local_88 != (longlong *)0x0) {
      local_88 = (longlong *)0x0;
      (**(code **)(*plVar9 + 0x10))();
    }
  }
LAB_18029d0e3:
  FUN_180113710(local_80);
}



