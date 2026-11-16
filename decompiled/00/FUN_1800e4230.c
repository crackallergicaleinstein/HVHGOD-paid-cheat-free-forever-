// FUN_1800e4230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e4230 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1800e4230(void)

{
  undefined8 uVar1;
  char cVar2;
  DWORD DVar3;
  int iVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined1 auStack_898 [32];
  undefined **local_878;
  char *local_870;
  undefined4 local_868;
  undefined8 local_860;
  undefined *local_858;
  undefined1 local_850 [16];
  longlong local_840;
  char local_828 [2048];
  ulonglong local_28;
  
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_898;
  FUN_18063ab10(local_828,0,0x600);
  local_878 = (undefined **)s_uninitialized_1808d7d90;
  FUN_18015ad60(local_828,0x600,0xffffffffffffffff,"operation=%s provider=loader_bridge");
  ppuVar6 = &PTR_180700558;
  ppuVar5 = &PTR_180700558;
  if (local_828[0] != '\0') {
    ppuVar5 = (undefined **)&DAT_1806bcfc0;
  }
  local_870 = local_828;
  local_878 = ppuVar5;
  FUN_1800f6900(1);
  FUN_1800aa120("stage: loader bridge lease");
  FUN_18063ab10(local_828,0,0x600);
  local_878 = (undefined **)s_uninitialized_1808d7d90;
  FUN_18015ad60(local_828,0x600,0xffffffffffffffff,"operation=%s source=loader_bridge");
  ppuVar5 = &PTR_180700558;
  if (local_828[0] != '\0') {
    ppuVar5 = (undefined **)&DAT_1806bcfc0;
  }
  local_870 = local_828;
  local_878 = ppuVar5;
  FUN_1800f6900(1);
  FUN_1801655d0(local_850,0);
  if (local_840 == 0) {
    FUN_180113930(&DAT_180bb8f50,"LocalAppData is unavailable.",0x1c);
    FUN_18063ab10(local_828,0,0x600);
    local_878 = (undefined **)s_uninitialized_1808d7d90;
    FUN_18015ad60(local_828,0x600,0xffffffffffffffff,
                  "operation=%s reason=local_app_data_unavailable");
    ppuVar5 = &PTR_180700558;
    if (local_828[0] != '\0') {
      ppuVar5 = (undefined **)&DAT_1806bcfc0;
    }
    local_870 = local_828;
    local_878 = ppuVar5;
    FUN_1800f6900(3);
  }
  else {
    cVar2 = FUN_1800a9120(local_850);
    if (cVar2 != '\0') {
      FUN_180167480(&DAT_180bb8af0,1);
      FUN_18063ab10(local_828,0,0x800);
      FUN_18015ad60(local_828,0x800,0xffffffffffffffff,
                    "ConfigManager: internal loader bridge initialized");
      FUN_1800a9e50(1,local_828);
      FUN_18015b930(local_850);
      DVar3 = GetCurrentProcessId();
      cVar2 = FUN_180166f60(&DAT_180bb8af0,DVar3);
      if (cVar2 != '\0') {
        FUN_1800aa120("stage: loader bridge offsets");
        if ((DAT_180cce330 & 1) == 0) {
          DAT_180cce330 = DAT_180cce330 | 1;
          atexit(FUN_180662340);
        }
        local_858 = &DAT_1808da3c0;
        iVar4 = FUN_1805f68d0(&DAT_1808da3c0);
        if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808da40c == 0x7fffffff) {
          DAT_1808da40c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        cVar2 = FUN_1801c9570(&DAT_1808da3c0,1);
        FUN_1805f68fc(&DAT_1808da3c0);
        if (cVar2 != '\0') {
          if ((DAT_180cce330 & 1) == 0) {
            DAT_180cce330 = DAT_180cce330 | 1;
            atexit(FUN_180662340);
          }
          cVar2 = FUN_1801cb530(&DAT_1808da3c0);
          if (cVar2 != '\0') {
            DAT_180bb9048 = 1;
            DAT_180bb9049 = 0;
            _DAT_180bbe870 = GetTickCount64();
            FUN_1800aa120("stage: loader bridge ready");
            FUN_18063ab10(local_828,0,0x600);
            local_878 = (undefined **)s_uninitialized_1808d7d90;
            FUN_18015ad60(local_828,0x600,0xffffffffffffffff,
                          "operation=%s provider=loader_bridge subscription_active=true");
            if (local_828[0] != '\0') {
              ppuVar6 = (undefined **)&DAT_1806bcfc0;
            }
            local_870 = local_828;
            local_878 = ppuVar6;
            FUN_1800f6900(1);
            if ((DAT_180cce330 & 1) == 0) {
              DAT_180cce330 = DAT_180cce330 | 1;
              atexit(FUN_180662340);
            }
            uVar1 = DAT_1808da460;
            FUN_18063ab10(local_828,0,0x800);
            local_860 = uVar1;
            local_868 = 10;
            local_870 = "46abdc405729fb40dc0824ff08d3cae4e97ab678";
            local_878 = (undefined **)0x1806bffd0;
            FUN_18015ad60(local_828,0x800,0xffffffffffffffff,
                          "HVHGODS loader/API bridge authorized; version=%s build=%s security_epoch=%d offset_generation=%llu"
                         );
            FUN_1800a9e50(1,local_828);
          }
        }
        FUN_18063ab10(local_828,0,0x600);
        local_878 = (undefined **)s_uninitialized_1808d7d90;
        FUN_18015ad60(local_828,0x600,0xffffffffffffffff,
                      "operation=%s provider=offset_manifest reason=manifest_rejected");
        if (local_828[0] != '\0') {
          ppuVar6 = (undefined **)&DAT_1806bcfc0;
        }
        local_870 = local_828;
        local_878 = ppuVar6;
        FUN_1800f6900(3);
        FUN_18063ab10(local_828,0,0x800);
        FUN_18015ad60(local_828,0x800,0xffffffffffffffff,
                      "HVHGODS rejected the loader offset manifest");
        FUN_1800a9e50(4,local_828);
        FUN_180167010();
      }
      goto LAB_1800e43f7;
    }
  }
  FUN_18015b930(local_850);
LAB_1800e43f7:
  FUN_18063ab10(local_828,0,0x600);
  local_878 = (undefined **)s_uninitialized_1808d7d90;
  FUN_18015ad60(local_828,0x600,0xffffffffffffffff,
                "operation=%s provider=loader_bridge reason=lease_unavailable");
  if (local_828[0] != '\0') {
    ppuVar6 = (undefined **)&DAT_1806bcfc0;
  }
  local_870 = local_828;
  local_878 = ppuVar6;
  FUN_1800f6900(3);
  FUN_18063ab10(local_828,0,0x800);
  FUN_18015ad60(local_828,0x800,0xffffffffffffffff,
                "HVHGODS requires a live process-bound loader lease");
  FUN_1800a9e50(4,local_828);
}



