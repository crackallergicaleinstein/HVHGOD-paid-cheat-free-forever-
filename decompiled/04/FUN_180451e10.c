// FUN_180451e10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180451e10 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8 FUN_180451e10(undefined1 (*param_1) [16])

{
  ulonglong uVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
  longlong lVar4;
  char cVar5;
  int iVar6;
  LPCSTR pCVar7;
  ulonglong uVar8;
  HMODULE pHVar9;
  FARPROC pFVar10;
  undefined8 uVar11;
  LPCSTR pCVar12;
  undefined8 *puVar13;
  longlong *plVar14;
  code *pcVar15;
  longlong lVar16;
  longlong lVar17;
  size_t sVar18;
  longlong lVar19;
  undefined **ppuVar20;
  undefined1 (*pauVar21) [16];
  undefined8 local_f8;
  ulonglong uStack_f0;
  undefined1 auStack_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  longlong lStack_c0;
  undefined1 local_b8 [16];
  undefined1 auStack_a8 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  ulonglong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  undefined8 uStack_30;
  
  uVar1 = *(ulonglong *)(*param_1 + 8);
  pCVar12 = *(LPCSTR *)*param_1;
  auVar3 = *param_1;
  lVar16 = -1;
  if (((uVar1 == 0) ||
      (pCVar7 = (LPCSTR)thunk_FUN_1805f7e70(pCVar12,pCVar12 + uVar1,0x3a), pCVar7 == pCVar12 + uVar1
      )) || (uStack_f0 = (longlong)pCVar7 - (longlong)pCVar12, uStack_f0 == 0xffffffffffffffff)) {
    local_f8 = (LPCSTR)0x0;
    uStack_f0 = 0;
    cVar5 = '\0';
    auStack_e8 = auVar3;
  }
  else {
    uVar8 = uStack_f0 + 1;
    if (uVar1 < uStack_f0) {
      uStack_f0 = uVar1;
    }
    local_f8 = pCVar12;
    if (uVar1 < uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_18015ac40();
    }
    auStack_e8._8_8_ = -1;
    if (uVar1 - uVar8 != -1) {
      auStack_e8._8_8_ = uVar1 - uVar8;
    }
    auStack_e8._0_8_ = pCVar12 + uVar8;
    cVar5 = '\x01';
  }
  pauVar21 = (undefined1 (*) [16])&uStack_58;
  if (cVar5 == '\0') {
    pauVar21 = param_1;
  }
  local_d8 = CONCAT71(local_d8._1_7_,cVar5);
  local_68 = local_f8;
  uStack_60 = uStack_f0;
  uStack_58 = auStack_e8._0_8_;
  uStack_50 = auStack_e8._8_8_;
  local_48 = local_d8;
  local_38 = *(longlong *)*pauVar21;
  uStack_30 = *(undefined8 *)(*pauVar21 + 8);
  if (cVar5 == '\0') {
    ppuVar20 = &PTR_s_client_dll_180828070;
    do {
      local_b8 = (undefined1  [16])0x0;
      auStack_a8 = (undefined1  [16])0x0;
      FUN_18015ba30(local_b8,*ppuVar20,ppuVar20[1]);
      pCVar12 = local_b8;
      if (0xf < (ulonglong)auStack_a8._8_8_) {
        pCVar12 = (LPCSTR)local_b8._0_8_;
      }
      pHVar9 = GetModuleHandleA(pCVar12);
      thunk_FUN_18015c010(local_b8);
      if (pHVar9 != (HMODULE)0x0) {
        local_88._8_8_ = 0xa05181ee77d57a06;
        local_88._0_8_ = 0xdb35e39b27e1c185;
        local_c8 = (undefined8 *)0x6e49657461657243;
        lStack_c0 = 0x65636166726574;
        lVar19 = -1;
        do {
          lVar17 = lVar19 + 1;
          lVar4 = lVar19 + -0xf;
          lVar19 = lVar17;
        } while (local_b8[lVar4] != '\0');
        if (lVar17 != 0) {
          local_f8 = (LPCSTR)0x0;
          uStack_f0 = 0;
          auStack_e8 = (undefined1  [16])0x0;
          FUN_18015ba30(&local_f8,&local_c8);
          pCVar12 = (LPCSTR)&local_f8;
          if (0xf < (ulonglong)auStack_e8._8_8_) {
            pCVar12 = local_f8;
          }
          pFVar10 = GetProcAddress(pHVar9,pCVar12);
          thunk_FUN_18015c010(&local_f8);
          if (pFVar10 != (FARPROC)0x0) {
            for (plVar14 = *(longlong **)(pFVar10 + (longlong)*(int *)(pFVar10 + 3) + 7);
                plVar14 != (longlong *)0x0; plVar14 = (longlong *)plVar14[2]) {
              pvVar2 = (void *)plVar14[1];
              if ((pvVar2 != (void *)0x0) && (pcVar15 = (code *)*plVar14, pcVar15 != (code *)0x0)) {
                sVar18 = 0xffffffffffffffff;
                do {
                  sVar18 = sVar18 + 1;
                } while (*(char *)((longlong)pvVar2 + sVar18) != '\0');
                if ((sVar18 == *(size_t *)(*pauVar21 + 8)) &&
                   ((sVar18 == 0 || (iVar6 = memcmp(pvVar2,*(void **)*pauVar21,sVar18), iVar6 == 0))
                   )) goto LAB_1804528ba;
              }
            }
          }
        }
      }
      ppuVar20 = ppuVar20 + 2;
    } while (ppuVar20 !=
             (undefined **)"steam_api64.dll:SteamAPI_ISteamFriends_RequestUserInformation");
    uStack_f0 = 0xa05181ee77d57a06;
    local_f8 = (LPCSTR)0xdb35e39b27e1c185;
    auStack_e8._8_8_ = 0xa5cea54bfef7110;
    auStack_e8._0_8_ = 0x929654b1461b7377;
    local_d8 = 0xa70c9f7f916b7e19;
    uStack_d0 = 0x2b2d6d82aa402c0a;
    local_68 = (LPCSTR)0x205d726f7272655b;
    uStack_60 = 0x6361667265746e69;
    uStack_58 = 0x6f6620746f6e2065;
    uStack_50 = 0x7d7b207c20646e75;
    local_48 = 0;
    uStack_40 = 0;
    do {
      local_88._8_8_ = lVar16 + 1;
      lVar19 = lVar16 + 0x11;
      lVar16 = local_88._8_8_;
    } while (local_78[lVar19] != '\0');
    local_88._0_8_ = &local_68;
    plVar14 = &local_38;
  }
  else {
    local_b8 = (undefined1  [16])0x0;
    auStack_a8 = (undefined1  [16])0x0;
    FUN_18015ba30(local_b8,local_f8,uStack_f0);
    pCVar12 = local_b8;
    if (0xf < (ulonglong)auStack_a8._8_8_) {
      pCVar12 = (LPCSTR)local_b8._0_8_;
    }
    pHVar9 = GetModuleHandleA(pCVar12);
    thunk_FUN_18015c010(local_b8);
    if (pHVar9 == (HMODULE)0x0) {
      local_b8._8_8_ = 0xa05181ee77d57a06;
      local_b8._0_8_ = 0xdb35e39b27e1c185;
      auStack_a8._8_8_ = 0xa5cea54bfef7110;
      auStack_a8._0_8_ = 0x929654b1461b7377;
      local_98 = 0xa70c9f7f916b7e19;
      uStack_90 = 0x2b2d6d82aa402c0a;
      uStack_f0 = 0x6e20656c75646f6d;
      local_f8 = (LPCSTR)0x205d726f7272655b;
      auStack_e8._8_8_ = 0x6c75646f6d207c20;
      auStack_e8._0_8_ = 0x646e756f6620746f;
      local_d8 = 0x7d7b203a65;
      uStack_d0 = 0;
      do {
        lStack_c0 = lVar16 + 1;
        lVar19 = lVar16 + -0xf;
        lVar16 = lStack_c0;
      } while (auStack_e8[lVar19] != '\0');
      local_c8 = &local_f8;
      plVar14 = &local_68;
      puVar13 = &local_c8;
      goto LAB_180452891;
    }
    local_88._8_8_ = 0xa05181ee77d57a06;
    local_88._0_8_ = 0xdb35e39b27e1c185;
    local_c8 = (undefined8 *)0x6e49657461657243;
    lStack_c0 = 0x65636166726574;
    lVar19 = -1;
    do {
      lVar17 = lVar19 + 1;
      lVar4 = lVar19 + -0xf;
      lVar19 = lVar17;
    } while (local_b8[lVar4] != '\0');
    if (lVar17 != 0) {
      local_88 = (undefined1  [16])0x0;
      local_78 = (undefined1  [16])0x0;
      FUN_18015ba30(local_88,&local_c8);
      pCVar12 = local_88;
      if (0xf < (ulonglong)local_78._8_8_) {
        pCVar12 = (LPCSTR)local_88._0_8_;
      }
      pFVar10 = GetProcAddress(pHVar9,pCVar12);
      thunk_FUN_18015c010(local_88);
      if (pFVar10 != (FARPROC)0x0) {
        plVar14 = *(longlong **)(pFVar10 + (longlong)*(int *)(pFVar10 + 3) + 7);
        do {
          if (plVar14 == (longlong *)0x0) {
            local_b8._8_8_ = 0xa05181ee77d57a06;
            local_b8._0_8_ = 0xdb35e39b27e1c185;
            auStack_a8._8_8_ = 0xa5cea54bfef7110;
            auStack_a8._0_8_ = 0x929654b1461b7377;
            local_98 = 0xa70c9f7f916b7e19;
            uStack_90 = 0x2b2d6d82aa402c0a;
            uStack_f0 = 0x6361667265746e69;
            local_f8 = (LPCSTR)0x205d726f7272655b;
            auStack_e8._8_8_ = 0x7d7b207c20646e75;
            auStack_e8._0_8_ = 0x6f6620746f6e2065;
            local_d8 = 0x7d7b3a;
            uStack_d0 = 0;
            do {
              local_88._8_8_ = lVar16 + 1;
              lVar19 = lVar16 + -0xf;
              lVar16 = local_88._8_8_;
            } while (auStack_e8[lVar19] != '\0');
            local_88._0_8_ = &local_f8;
            FUN_1804545d0(local_88,&local_68,&local_38);
            return 0;
          }
          pvVar2 = (void *)plVar14[1];
          if ((pvVar2 != (void *)0x0) && (pcVar15 = (code *)*plVar14, pcVar15 != (code *)0x0)) {
            sVar18 = 0xffffffffffffffff;
            do {
              sVar18 = sVar18 + 1;
            } while (*(char *)((longlong)pvVar2 + sVar18) != '\0');
            if ((sVar18 == *(size_t *)(*pauVar21 + 8)) &&
               ((sVar18 == 0 || (iVar6 = memcmp(pvVar2,*(void **)*pauVar21,sVar18), iVar6 == 0)))) {
LAB_1804528ba:
              uVar11 = (*pcVar15)();
              return uVar11;
            }
          }
          plVar14 = (longlong *)plVar14[2];
        } while( true );
      }
    }
    local_b8._8_8_ = 0xa05181ee77d57a06;
    local_b8._0_8_ = 0xdb35e39b27e1c185;
    auStack_a8._8_8_ = 0xa5cea54bfef7110;
    auStack_a8._0_8_ = 0x929654b1461b7377;
    local_98 = 0xa70c9f7f916b7e19;
    uStack_90 = 0x2b2d6d82aa402c0a;
    uStack_f0 = 0x6e49657461657243;
    local_f8 = (LPCSTR)0x205d726f7272655b;
    auStack_e8._8_8_ = 0x6e756f6620746f6e;
    auStack_e8._0_8_ = 0x2065636166726574;
    local_d8 = 0x75646f6d207c2064;
    uStack_d0 = 0x7d7b203a656c;
    do {
      local_88._8_8_ = lVar16 + 1;
      lVar19 = lVar16 + -0xf;
      lVar16 = local_88._8_8_;
    } while (auStack_e8[lVar19] != '\0');
    local_88._0_8_ = &local_f8;
    plVar14 = &local_68;
  }
  puVar13 = (undefined8 *)local_88;
LAB_180452891:
  FUN_18044bc10(puVar13,plVar14);
  return 0;
}



