// FUN_1801ae5b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ae5b0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1801ae5b0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  char cVar6;
  char cVar7;
  FARPROC pFVar8;
  longlong lVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  int iVar17;
  int iVar18;
  FARPROC pFVar19;
  undefined1 auStack_f8 [32];
  int local_d8;
  undefined8 local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_a8;
  undefined8 *local_a0;
  char local_98;
  undefined1 local_90 [16];
  undefined8 *local_80;
  undefined1 local_78 [16];
  undefined8 *local_68;
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  if ((undefined8 *)0x2540be3ff < param_2 + -0x21ffffe4b0ff80) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  local_78 = (undefined1  [16])0x0;
  local_68 = (undefined8 *)0x0;
  local_c0 = param_3;
  local_b8 = param_2;
  local_a8 = param_1;
  local_78._0_8_ = FUN_18015bca0(8);
  local_68 = (undefined8 *)(local_78._0_8_ + 8);
  *(undefined8 **)local_78._0_8_ = param_2;
  local_78._8_8_ = local_68;
  if (param_3 == (undefined8 *)0x0) {
    param_1[1] = local_68;
    param_1[2] = local_68;
    puVar11 = (undefined8 *)local_78._0_8_;
  }
  else {
    uVar1 = *(undefined8 *)param_4[1];
    pFVar8 = GetProcAddress((HMODULE)**(undefined8 **)*param_4,
                            "SteamAPI_ISteamMatchmaking_GetNumLobbyMembers");
    cVar6 = FUN_1804513c0(pFVar8,1,2);
    pFVar19 = (FARPROC)0x0;
    if (cVar6 != '\0') {
      pFVar19 = pFVar8;
    }
    cVar7 = FUN_1804513c0(pFVar19,1,2);
    cVar6 = '\0';
    if (cVar7 != '\0') {
      lVar9 = FUN_18017ea70();
      *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
      FUN_1801b9b80(&local_c8,pFVar19,uVar1,param_3);
      lVar9 = FUN_18017ea70();
      if (*(int *)(lVar9 + 4) != 0) {
        *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
      }
      cVar6 = local_c8._4_1_;
    }
    puVar11 = local_c0;
    iVar17 = (int)local_c8;
    if (cVar6 == '\0') {
      iVar17 = 0;
    }
    if (iVar17 - 1U < 0xfa) {
      local_90 = (undefined1  [16])0x0;
      local_80 = (undefined8 *)0x0;
      bVar3 = false;
      iVar18 = 0;
      if (0 < iVar17) {
        local_c8 = (undefined8 *)param_5[1];
        local_b8 = (undefined8 *)*param_5;
        do {
          local_c0 = (undefined8 *)*local_c8;
          pFVar8 = GetProcAddress(*(HMODULE *)*local_b8,
                                  "SteamAPI_ISteamMatchmaking_GetLobbyMemberByIndex");
          cVar6 = FUN_1804513c0(pFVar8,1,2);
          pFVar19 = (FARPROC)0x0;
          if (cVar6 != '\0') {
            pFVar19 = pFVar8;
          }
          cVar6 = FUN_1804513c0(pFVar19,1,2);
          if (cVar6 == '\0') {
            local_98 = '\0';
          }
          else {
            lVar9 = FUN_18017ea70();
            *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
            local_d8 = iVar18;
            FUN_1801b9bc0(&local_a0,pFVar19,local_c0,puVar11);
            lVar9 = FUN_18017ea70();
            if (*(int *)(lVar9 + 4) != 0) {
              *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + -1;
            }
          }
          local_c0 = local_a0;
          if (local_98 == '\0') {
            local_c0 = (undefined8 *)0x0;
          }
          bVar3 = (bool)(bVar3 | local_c0 == param_2);
          puVar13 = (undefined8 *)local_90._8_8_;
          if ((local_c0 + -0x21ffffe4b0ff80 < (undefined8 *)0x2540be400) &&
             ((ulonglong)((longlong)(local_90._8_8_ - local_90._0_8_) >> 3) < 0x80)) {
            if ((undefined8 *)local_90._8_8_ == local_80) {
              FUN_1801b6250(local_90);
              puVar13 = (undefined8 *)local_90._8_8_;
            }
            else {
              *(undefined8 **)local_90._8_8_ = local_c0;
              local_90._8_8_ = local_90._8_8_ + 8;
              puVar13 = (undefined8 *)local_90._8_8_;
            }
          }
          puVar4 = local_a8;
          iVar18 = iVar18 + 1;
        } while (iVar18 < iVar17);
        param_1 = local_a8;
        if (bVar3) {
          FUN_1801bbfa0(local_90._0_8_,puVar13,(longlong)puVar13 - local_90._0_8_ >> 3,0);
          plVar15 = (longlong *)local_90._8_8_;
          plVar16 = (longlong *)local_90._0_8_;
          if ((local_90._0_8_ != local_90._8_8_) &&
             ((longlong *)(local_90._0_8_ + 8) != (longlong *)local_90._8_8_)) {
            plVar12 = (longlong *)local_90._0_8_;
            plVar14 = (longlong *)(local_90._0_8_ + 8);
            lVar9 = *(longlong *)local_90._0_8_;
            do {
              lVar2 = *plVar14;
              plVar10 = plVar14 + 1;
              if (lVar9 == lVar2) goto joined_r0x0001801ae8bf;
              plVar12 = plVar14;
              plVar14 = plVar10;
              lVar9 = lVar2;
            } while (plVar10 != (longlong *)local_90._8_8_);
          }
          goto LAB_1801ae906;
        }
      }
      puVar11 = local_68;
      local_68 = (undefined8 *)0x0;
      uVar5 = local_78._8_8_;
      uVar1 = local_78._0_8_;
      local_78 = ZEXT816(0);
      *param_1 = uVar1;
      param_1[1] = uVar5;
      param_1[2] = puVar11;
      FUN_1800f0160(local_90);
      goto LAB_1801ae9a3;
    }
    param_1[1] = local_78._8_8_;
    param_1[2] = local_68;
    puVar11 = (undefined8 *)local_78._0_8_;
  }
  local_68 = (undefined8 *)0x0;
  local_78 = ZEXT816(0);
  *param_1 = puVar11;
LAB_1801ae9a3:
  FUN_1800f0160(local_78);
joined_r0x0001801ae8bf:
  for (; plVar10 != (longlong *)local_90._8_8_; plVar10 = plVar10 + 1) {
    if (*plVar12 != *plVar10) {
      plVar12 = plVar12 + 1;
      *plVar12 = *plVar10;
    }
  }
  plVar12 = plVar12 + 1;
  if (plVar12 != (longlong *)local_90._8_8_) {
    FUN_18063aed0(plVar12,local_90._8_8_,0);
    local_90._8_8_ = plVar12;
    plVar15 = plVar12;
    plVar16 = (longlong *)local_90._0_8_;
  }
LAB_1801ae906:
  lVar9 = thunk_FUN_1805f8160(plVar16,plVar15);
  puVar11 = local_80;
  uVar1 = local_90._8_8_;
  if (lVar9 == local_90._8_8_) {
    *(undefined8 **)(local_90._8_8_ + -8) = param_2;
  }
  local_80 = (undefined8 *)0x0;
  uVar5 = local_90._0_8_;
  local_90 = ZEXT816(0);
  *puVar4 = uVar5;
  puVar4[1] = uVar1;
  puVar4[2] = puVar11;
  FUN_1800f0160(local_90);
  goto LAB_1801ae9a3;
}



