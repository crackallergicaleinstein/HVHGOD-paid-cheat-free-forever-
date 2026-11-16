// FUN_180532bb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180532bb0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180532bb0(void)

{
  undefined1 auVar1 [16];
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  ULONGLONG UVar7;
  undefined1 (*pauVar8) [16];
  undefined8 *puVar9;
  char *pcVar10;
  undefined *puVar11;
  char cVar12;
  LPCSTR lpFile;
  bool bVar13;
  undefined1 auStackY_128 [32];
  undefined4 local_f8;
  undefined1 local_f0 [16];
  undefined1 auStack_e0 [16];
  undefined8 local_d0 [2];
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0 [4];
  undefined1 local_90 [32];
  undefined1 local_70 [32];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 auStack_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_1808d5f00 ^ (ulonglong)auStackY_128;
  iVar6 = FUN_1805f68d0(&DAT_1808da810);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1808da85c == 0x7fffffff) {
    DAT_1808da85c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (((DAT_180bb93ac == '\0') || (DAT_1808da8e0 == 0)) ||
     (UVar7 = GetTickCount64(), DAT_180bbea98 <= UVar7)) {
    cVar12 = '\0';
    local_f8 = 0;
  }
  else {
    cVar12 = '\x01';
    local_f8 = DAT_180bbeaa0;
  }
  FUN_1805f68fc(&DAT_1808da810);
  if (cVar12 == '\0') {
    bVar13 = DAT_180bb93ac != '\0';
    if (bVar13) {
      FUN_18015ae30(local_90,(longlong)
                             ((int)(*(double *)(DAT_180bb8ae8 + 0x10) +
                                   *(double *)(DAT_180bb8ae8 + 0x10)) % 3 + 1),0x2e);
      local_50 = (undefined1  [16])0x0;
      local_40 = (undefined1  [16])0x0;
      FUN_18015ba30(local_50,"Loading",7);
      FUN_18015a6e0(local_b0);
      puVar9 = local_b0;
    }
    else {
      local_f0 = (undefined1  [16])0x0;
      auStack_e0 = (undefined1  [16])0x0;
      FUN_18015ba30(local_f0,"No game detected",0x10);
      puVar9 = (undefined8 *)local_f0;
    }
    bVar3 = !bVar13;
    local_d0[0] = *puVar9;
    local_d0[1] = puVar9[1];
    uStack_c0 = puVar9[2];
    uStack_b8 = puVar9[3];
    *(undefined1 *)puVar9 = 0;
    puVar9[2] = 0;
    puVar9[3] = 0xf;
    pauVar8 = (undefined1 (*) [16])local_d0;
    bVar4 = false;
    bVar2 = true;
  }
  else {
    pauVar8 = (undefined1 (*) [16])FUN_18015bea0(local_70,local_f8);
    bVar4 = true;
    bVar3 = false;
    bVar13 = false;
    bVar2 = false;
  }
  local_30 = (undefined1  [16])0x0;
  auStack_20 = (undefined1  [16])0x0;
  local_30 = *pauVar8;
  auStack_20 = pauVar8[1];
  (*pauVar8)[0] = 0;
  *(undefined8 *)pauVar8[1] = 0;
  *(undefined8 *)(pauVar8[1] + 8) = 0xf;
  if (bVar2) {
    FUN_18015c010(local_d0);
  }
  if (bVar13) {
    FUN_18015c010(local_b0);
    FUN_18015c010(local_50);
    FUN_18015c010(local_90);
  }
  if (bVar3) {
    FUN_18015c010(local_f0);
  }
  if (bVar4) {
    FUN_18015c010(local_70);
  }
  bVar13 = false;
  cVar5 = FUN_18048b210();
  if (cVar5 != '\0') {
    FUN_1805303d0("##live_radar_status");
  }
  cVar5 = FUN_180488630("##live_radar_status","Live radar",0x43960000);
  if (cVar5 != '\0') {
    FUN_180488c60();
    if (cVar12 == '\0') {
      if (DAT_180bb93ac == '\0') {
        local_50 = (undefined1  [16])0x0;
        local_40 = (undefined1  [16])0x0;
        FUN_18015ba30(local_50,"No game detected",0x10);
      }
      else {
        iVar6 = FUN_1805f68d0(&DAT_1808da810);
        if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808da85c == 0x7fffffff) {
          DAT_1808da85c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        UVar7 = GetTickCount64();
        puVar11 = &DAT_180bb9240;
        if (DAT_180bbea98 <= UVar7) {
          puVar11 = &DAT_180bb9260;
        }
        FUN_18015b360(local_50,puVar11);
        FUN_1805f68fc(&DAT_1808da810);
      }
      bVar13 = true;
      pcVar10 = local_50;
      if (0xf < (ulonglong)local_40._8_8_) {
        pcVar10 = (char *)local_50._0_8_;
      }
    }
    else {
      pcVar10 = "Your match is live";
    }
    FUN_1805302b0(pcVar10);
    if (bVar13) {
      FUN_18015c010(local_50);
    }
    pcVar10 = "Open the map in your browser to follow this match.";
    if (cVar12 == '\0') {
      pcVar10 = "Connects automatically when the game is ready.";
    }
    FUN_1805302b0(pcVar10);
    FUN_180488f10();
    FUN_180488c60();
    cVar12 = FUN_18048b0e0("Open current match",&DAT_180830b38,cVar12);
    if (cVar12 != '\0') {
      local_40 = ZEXT816(0xf) << 0x40;
      local_50._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar1[0xf] = 0;
      auVar1._0_15_ = local_50._1_15_;
      local_50 = auVar1 << 8;
      iVar6 = FUN_1805f68d0(&DAT_1808da810);
      if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808da85c == 0x7fffffff) {
        DAT_1808da85c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180bb93ac == '\0') || (UVar7 = GetTickCount64(), DAT_180bbea98 <= UVar7)) {
        FUN_1805f68fc(&DAT_1808da810);
      }
      else {
        puVar9 = &DAT_1808da8d0;
        if (0xf < DAT_1808da8e8) {
          puVar9 = DAT_1808da8d0;
        }
        FUN_180113930(local_50,puVar9,DAT_1808da8e0);
        FUN_1805f68fc(&DAT_1808da810);
        if (local_40._0_8_ != 0) {
          lpFile = local_50;
          if (0xf < (ulonglong)local_40._8_8_) {
            lpFile = (LPCSTR)local_50._0_8_;
          }
          ShellExecuteA((HWND)0x0,"open",lpFile,(LPCSTR)0x0,(LPCSTR)0x0,1);
        }
      }
      FUN_18015c010(local_50);
    }
    cVar12 = FUN_18048b0e0("Browse live games",&DAT_180830b38,1);
    if (cVar12 != '\0') {
      ShellExecuteA((HWND)0x0,"open","https://cheat.hvhgods.com/games",(LPCSTR)0x0,(LPCSTR)0x0,1);
    }
    FUN_180488f10();
    FUN_1804aeac0();
  }
  FUN_18015c010(local_30);
}



