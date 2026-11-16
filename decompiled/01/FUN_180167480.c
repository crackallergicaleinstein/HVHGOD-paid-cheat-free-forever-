// FUN_180167480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180167480 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180167480(longlong *param_1,char param_2)

{
  int *piVar1;
  byte bVar2;
  size_t sVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined8 *puVar27;
  undefined8 uVar28;
  char cVar29;
  undefined1 uVar30;
  BOOL BVar31;
  int iVar32;
  DWORD DVar33;
  undefined4 uVar34;
  ULONGLONG UVar35;
  undefined8 uVar36;
  longlong *plVar37;
  ulonglong uVar38;
  undefined8 *puVar39;
  undefined1 *puVar40;
  longlong lVar41;
  undefined1 (*pauVar42) [16];
  longlong *plVar43;
  char **ppcVar44;
  undefined1 *puVar45;
  LPCWSTR ******pppppppWVar46;
  undefined8 *******pppppppuVar47;
  longlong *_Buf1;
  size_t sVar48;
  char **ppcVar49;
  undefined8 *puVar50;
  longlong *plVar51;
  char *pcVar52;
  longlong lVar53;
  ulonglong uVar54;
  uint uVar55;
  uint uVar56;
  longlong *plVar57;
  bool bVar58;
  bool bVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [64];
  undefined1 auStackY_dc8 [32];
  byte local_d78 [8];
  undefined8 local_d70;
  char *local_d68;
  longlong *plStack_d60;
  longlong *local_d58;
  longlong lStack_d50;
  char *local_d48;
  longlong local_d40;
  undefined8 local_d38;
  longlong *plStack_d30;
  longlong local_d28;
  undefined1 local_d20 [16];
  undefined1 local_d10 [16];
  longlong local_d00;
  ULONGLONG local_cf8;
  undefined1 *local_cf0;
  undefined1 *local_ce8;
  undefined1 local_ce0 [16];
  undefined1 local_cd0 [16];
  longlong local_cc0 [4];
  char local_ca0;
  undefined1 local_c98 [16];
  longlong local_c88;
  ulonglong local_c80;
  undefined1 local_c78 [16];
  longlong lStack_c68;
  ulonglong uStack_c60;
  undefined1 local_c58 [16];
  longlong local_c48;
  undefined1 local_c40 [16];
  undefined1 auStack_c30 [16];
  undefined1 local_c20 [16];
  longlong local_c10;
  undefined8 local_c08;
  undefined1 local_c00 [16];
  longlong *plStack_bf0;
  ulonglong uStack_be8;
  undefined1 local_be0 [16];
  size_t local_bd0;
  ulonglong local_bc8;
  ulonglong local_bb8;
  undefined8 uStack_bb0;
  undefined1 auStack_ba8 [16];
  uint local_b98;
  undefined4 uStack_b94;
  undefined8 uStack_b90;
  undefined1 auStack_b88 [16];
  undefined1 local_b78 [16];
  size_t sStack_b68;
  ulonglong uStack_b60;
  longlong local_b58;
  undefined8 *******local_b50 [2];
  size_t local_b40;
  ulonglong local_b38;
  LPCWSTR ******local_b30 [3];
  ulonglong local_b18;
  LPCWSTR ******local_b10 [3];
  ulonglong local_af8;
  undefined1 local_ae8 [16];
  size_t sStack_ad8;
  ulonglong uStack_ad0;
  undefined1 local_ac8 [16];
  undefined1 auStack_ab8 [16];
  undefined1 local_aa8 [16];
  undefined1 local_a98 [16];
  undefined1 local_a88 [16];
  undefined1 local_a78 [16];
  undefined1 local_a68 [16];
  undefined1 local_a58 [16];
  undefined1 local_a48 [16];
  longlong local_a38;
  ulonglong local_a30;
  undefined1 local_a28 [16];
  longlong local_a18;
  ulonglong local_a10;
  undefined1 local_a08 [16];
  longlong local_9f8;
  ulonglong local_9f0;
  undefined1 local_9e8 [16];
  longlong local_9d8;
  ulonglong local_9d0;
  undefined1 local_9c8 [16];
  size_t local_9b8;
  ulonglong local_9b0;
  undefined1 local_9a8 [16];
  longlong local_998;
  ulonglong local_990;
  undefined2 local_988;
  undefined1 local_978 [16];
  longlong lStack_968;
  undefined8 uStack_960;
  undefined1 local_958 [16];
  longlong *local_948;
  ulonglong local_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined4 uStack_928;
  undefined4 uStack_924;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  undefined4 local_918;
  undefined8 *******local_910 [2];
  size_t local_900;
  ulonglong local_8f8;
  undefined1 local_8f0 [16];
  undefined1 local_8e0 [16];
  undefined1 local_8d0 [16];
  undefined1 local_8c0 [16];
  undefined1 local_8a8 [32];
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 local_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 local_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined1 local_7c8;
  char local_7c7;
  undefined1 local_7c0 [32];
  undefined1 local_7a0 [32];
  undefined1 local_780 [32];
  undefined1 local_760 [36];
  int iStack_73c;
  longlong local_738 [2];
  undefined1 local_728 [128];
  undefined **local_6a8 [12];
  char local_648 [1536];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStackY_dc8;
  local_d70 = (char *)((ulonglong)local_d70 & 0xffffffff00000000);
  local_d58 = param_1;
  UVar35 = GetTickCount64();
  local_cf8 = UVar35;
  if ((param_2 == '\0') && (UVar35 - param_1[0xa4] < 0x28a)) {
    FUN_18016da30(param_1,param_1 + 5,0);
  }
  param_1[0xa4] = UVar35;
  FUN_180165920(local_b10,0,L"config-library.bridge");
  local_bb8 = 0;
  uStack_bb0 = 0;
  auStack_ba8 = ZEXT816(0);
  local_b98 = 0;
  pppppppWVar46 = (LPCWSTR ******)local_b10;
  if (7 < local_af8) {
    pppppppWVar46 = local_b10[0];
  }
  BVar31 = GetFileAttributesExW((LPCWSTR)pppppppWVar46,GetFileExInfoStandard,&local_bb8);
  if (BVar31 == 0) {
    lVar41 = 0;
  }
  else {
    lVar41 = auStack_ba8._4_8_;
  }
  local_c20 = (undefined1  [16])0x0;
  local_c10 = 0;
  local_c08 = 0;
  local_d00 = lVar41;
  FUN_180159e60(local_c20,L"authorization.bridge",0x14);
  FUN_180165920(local_d20,1,L"account.bridge");
  uVar55 = 0x7800;
  local_d70._0_4_ = 0x7800;
  uVar36 = FUN_18015c130(local_d20,&local_bb8);
  FUN_1800a7e60(local_b30,uVar36,local_c20);
  FUN_18015b930(&local_bb8);
  FUN_18015b930(local_d20);
  FUN_18015b930(local_c20);
  local_938 = 0;
  uStack_930 = 0;
  uStack_928 = 0;
  uStack_924 = 0;
  uStack_920 = 0;
  uStack_91c = 0;
  local_918 = 0;
  pppppppWVar46 = (LPCWSTR ******)local_b30;
  if (7 < local_b18) {
    pppppppWVar46 = local_b30[0];
  }
  BVar31 = GetFileAttributesExW((LPCWSTR)pppppppWVar46,GetFileExInfoStandard,&local_938);
  if (BVar31 == 0) {
    local_d28 = 0;
  }
  else {
    local_d28 = CONCAT44(uStack_920,uStack_924);
  }
  if ((((param_2 == '\0') && (lVar41 != 0)) && (lVar41 == param_1[0xa2])) &&
     ((local_d28 == param_1[0xa3] && (UVar35 - param_1[0xa5] < 5000)))) {
    FUN_180173120(param_1,UVar35);
    FUN_18016da30(param_1,param_1 + 5,0);
    FUN_18015b930(local_b30);
    FUN_18015b930(local_b10);
  }
  lStack_c68 = 0;
  uStack_c60 = 0xf;
  local_c78._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar60[0xf] = 0;
  auVar60._0_15_ = local_c78._1_15_;
  local_c78 = auVar60 << 8;
  auVar61 = ZEXT1664(_DAT_18086d450);
  auStack_c30 = _DAT_18086d450;
  local_c40._1_15_ = SUB1615((undefined1  [16])0x0,1);
  auVar5[0xf] = 0;
  auVar5._0_15_ = local_c40._1_15_;
  local_c40 = auVar5 << 8;
  local_ce8 = local_c78;
  local_cf0 = local_c40;
  bVar59 = false;
  if (param_2 != '\0') {
    cVar29 = FUN_180166df0(local_b10,0xc000000,local_c78);
    if (cVar29 != '\0') {
      local_d48 = "config";
      local_d40 = 6;
      cVar29 = FUN_180010790(&local_d48,local_c78);
      if (cVar29 != '\0') goto LAB_180167d38;
    }
    FUN_18003ad90();
    *(undefined1 *)((longlong)param_1 + 0x54c) = 0;
    FUN_180113930(param_1 + 0x8c,"Waiting for the internal loader config bridge...",0x30);
    FUN_18063ab10(local_648,0,0x600);
    FUN_18015ad60(local_648,0x600,0xffffffffffffffff,"operation=%s reason=manifest_unavailable");
    FUN_1800f6900(2);
    goto LAB_180167c90;
  }
  if ((*param_1 == 0) || (((char)param_1[1] != '\0' && (*(char *)(*param_1 + 0xf8) != '\0')))) {
    param_1[2] = lVar41;
    param_1[3] = local_d28;
    param_1[4] = UVar35;
    FUN_1800f5370(&local_bb8,local_b10);
    FUN_1800f5370(&local_b98,local_b30);
    plVar37 = (longlong *)FUN_180174ee0(&local_d48);
    if (param_1 != plVar37) {
      puVar39 = (undefined8 *)*param_1;
      if (puVar39 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(puVar39 + 1);
        iVar32 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar32 == 1) {
          puVar50 = (undefined8 *)puVar39[0x21];
          if (puVar50 == (undefined8 *)0x0) {
            (**(code **)*puVar39)(puVar39,1);
          }
          else {
            (**(code **)*puVar50)(puVar50,puVar39);
          }
        }
      }
      lVar41 = *plVar37;
      *plVar37 = 0;
      *param_1 = lVar41;
      *(char *)(param_1 + 1) = (char)plVar37[1];
    }
    if (local_d48 != (char *)0x0) {
      LOCK();
      piVar1 = (int *)(local_d48 + 8);
      iVar32 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar32 == 1) {
        puVar39 = *(undefined8 **)(local_d48 + 0x108);
        if (puVar39 == (undefined8 *)0x0) {
          (*(code *)**(undefined8 **)local_d48)(local_d48,1);
        }
        else {
          (**(code **)*puVar39)(puVar39,local_d48);
        }
      }
    }
    FUN_18015b930(&local_b98);
    FUN_18015b930(&local_bb8);
  }
  local_d28 = 0;
  iVar32 = FUN_180175100(param_1,&local_d28);
  if (iVar32 != 0) {
    if (2000 < UVar35 - param_1[4]) {
      *(undefined1 *)((longlong)param_1 + 0x54c) = 0;
      FUN_18003ad90();
    }
    FUN_180173120(param_1,UVar35);
    FUN_18016da30(param_1,param_1 + 5,0);
    if (auStack_c30._0_8_ != 0) {
      lVar41 = auStack_c30._0_8_;
      puVar45 = local_c40;
      if (0xf < (ulonglong)auStack_c30._8_8_) {
        puVar45 = (undefined1 *)local_c40._0_8_;
      }
      for (; lVar41 != 0; lVar41 = lVar41 + -1) {
        *puVar45 = 0;
        puVar45 = puVar45 + 1;
      }
    }
    uVar36 = auStack_c30._8_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = auStack_c30._8_8_;
    auStack_c30 = auVar6 << 0x40;
    puVar45 = local_c40;
    if (0xf < (ulonglong)uVar36) {
      puVar45 = (undefined1 *)local_c40._0_8_;
    }
    *puVar45 = 0;
    if (lStack_c68 != 0) {
      lVar41 = lStack_c68;
      puVar45 = local_c78;
      if (0xf < uStack_c60) {
        puVar45 = (undefined1 *)local_c78._0_8_;
      }
      for (; lVar41 != 0; lVar41 = lVar41 + -1) {
        *puVar45 = 0;
        puVar45 = puVar45 + 1;
      }
    }
    lStack_c68 = 0;
    puVar45 = local_c78;
    if (0xf < uStack_c60) {
      puVar45 = (undefined1 *)local_c78._0_8_;
    }
    *puVar45 = 0;
    FUN_18015c010(local_c40);
    FUN_18015c010(local_c78);
    FUN_18015b930(local_b30);
    FUN_18015b930(local_b10);
  }
  FUN_180176500(param_1,&local_bb8);
  FUN_18015c010(local_c78);
  local_c78._8_8_ = uStack_bb0;
  local_c78._0_8_ = local_bb8;
  lStack_c68 = auStack_ba8._0_8_;
  uStack_c60 = auStack_ba8._8_8_;
  auStack_ba8 = auVar61._0_16_;
  local_bb8 = local_bb8 & 0xffffffffffffff00;
  auVar61 = ZEXT1664(auStack_ba8);
  FUN_18015c010(local_c40);
  local_c40._4_4_ = uStack_b94;
  local_c40._0_4_ = local_b98;
  local_c40._8_8_ = uStack_b90;
  auStack_c30 = auStack_b88;
  auStack_b88 = auVar61._0_16_;
  local_b98 = local_b98 & 0xffffff00;
  auVar61 = ZEXT1664(auStack_b88);
  FUN_18015c010(&local_b98);
  FUN_18015c010(&local_bb8);
  local_d00 = param_1[2];
  local_d28 = param_1[3];
  bVar59 = true;
  if (lStack_c68 != 0) {
    local_d48 = "config";
    local_d40 = 6;
    cVar29 = FUN_180010790(&local_d48,local_c78);
    if (cVar29 != '\0') {
LAB_180167d38:
      local_d48 = local_c78;
      if (0xf < uStack_c60) {
        local_d48 = (char *)local_c78._0_8_;
      }
      local_d40 = lStack_c68;
      cVar29 = FUN_180164e20(&local_d48);
      if (cVar29 == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x54c) = 0;
        FUN_180113930(param_1 + 0x8c,"The loader configuration bridge is malformed.",0x2d);
        FUN_18003ad90();
        goto LAB_180167c90;
      }
      FUN_18063ab10(local_738,0,0xf0);
      FUN_180176d20(local_738,local_c78);
      local_c58 = (undefined1  [16])0x0;
      local_c48 = 0;
      local_bd0 = 0;
      local_bc8 = 0xf;
      local_be0._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar8[0xf] = 0;
      auVar8._0_15_ = local_be0._1_15_;
      local_be0 = auVar8 << 8;
      sStack_b68 = 0;
      uStack_b60 = 0xf;
      local_b78._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar9[0xf] = 0;
      auVar9._0_15_ = local_b78._1_15_;
      local_b78 = auVar9 << 8;
      lStack_968 = 0;
      uStack_960 = 0xf;
      local_978._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar10[0xf] = 0;
      auVar10._0_15_ = local_978._1_15_;
      local_978 = auVar10 << 8;
      local_ae8 = (undefined1  [16])0x0;
      sStack_ad8 = 0;
      uStack_ad0 = 0;
      FUN_18015ba30(local_ae8,"player",6);
      local_ac8 = (undefined1  [16])0x0;
      auStack_ab8 = (undefined1  [16])0x0;
      FUN_18015ba30(local_ac8,"Subscription unknown",0x14);
      local_a98 = auVar61._0_16_;
      local_aa8._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar11[0xf] = 0;
      auVar11._0_15_ = local_aa8._1_15_;
      local_aa8 = auVar11 << 8;
      local_a88 = (undefined1  [16])0x0;
      local_a78 = (undefined1  [16])0x0;
      FUN_18015ba30(local_a88,"0.1.411",7);
      local_a58 = auVar61._0_16_;
      local_a68._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar12[0xf] = 0;
      auVar12._0_15_ = local_a68._1_15_;
      local_a68 = auVar12 << 8;
      local_a38 = 0;
      local_a30 = 0xf;
      local_a48._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar13[0xf] = 0;
      auVar13._0_15_ = local_a48._1_15_;
      local_a48 = auVar13 << 8;
      local_a18 = 0;
      local_a10 = 0xf;
      local_a28._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar14[0xf] = 0;
      auVar14._0_15_ = local_a28._1_15_;
      local_a28 = auVar14 << 8;
      local_9f8 = 0;
      local_9f0 = 0xf;
      local_a08._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar15[0xf] = 0;
      auVar15._0_15_ = local_a08._1_15_;
      local_a08 = auVar15 << 8;
      local_9d8 = 0;
      local_9d0 = 0xf;
      local_9e8._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar16[0xf] = 0;
      auVar16._0_15_ = local_9e8._1_15_;
      local_9e8 = auVar16 << 8;
      local_9b8 = 0;
      local_9b0 = 0xf;
      local_9c8._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar17[0xf] = 0;
      auVar17._0_15_ = local_9c8._1_15_;
      local_9c8 = auVar17 << 8;
      local_998 = 0;
      local_990 = 0xf;
      local_9a8._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar18[0xf] = 0;
      auVar18._0_15_ = local_9a8._1_15_;
      local_9a8 = auVar18 << 8;
      local_988 = 0;
      local_c88 = 0;
      local_c80 = 0xf;
      local_c98._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar19[0xf] = 0;
      auVar19._0_15_ = local_c98._1_15_;
      local_c98 = auVar19 << 8;
      FUN_180156de0((longlong)local_738 + (longlong)*(int *)(local_738[0] + 4),10);
      plVar37 = (longlong *)FUN_1801775a0(local_738,local_c98);
      if ((*(byte *)((longlong)*(int *)(*plVar37 + 4) + 0x10 + (longlong)plVar37) & 6) == 0) {
        local_d68 = local_c98;
        do {
          if (local_c88 != 0) {
            pcVar52 = local_c98;
            if (0xf < local_c80) {
              pcVar52 = (char *)local_c98._0_8_;
            }
            if (pcVar52[local_c88 + -1] == '\r') {
              local_c88 = local_c88 + -1;
              pcVar52 = local_c98;
              if (0xf < local_c80) {
                pcVar52 = (char *)local_c98._0_8_;
              }
              pcVar52[local_c88] = '\0';
            }
          }
          local_c20 = (undefined1  [16])0x0;
          local_c10 = 0;
          local_d48 = local_c98;
          if (0xf < local_c80) {
            local_d48 = (char *)local_c98._0_8_;
          }
          local_d40 = local_c88;
          FUN_180166230(local_c20,&local_d48);
          uVar28 = local_c20._8_8_;
          uVar36 = local_c20._0_8_;
          uVar38 = (longlong)(local_c20._8_8_ - local_c20._0_8_) >> 4;
          if (uVar38 < 2) {
LAB_1801682b9:
            if ((8 < (ulonglong)((longlong)(uVar28 - uVar36) >> 4)) &&
               (*(longlong *)(uVar36 + 8) == 6)) {
              lVar41 = 0;
              do {
                lVar53 = lVar41 + 1;
                if (*(byte *)(*(longlong *)uVar36 + lVar41) != "config"[lVar41]) {
                  uVar56 = -(uint)(*(byte *)(*(longlong *)uVar36 + lVar41) < (byte)"config"[lVar41])
                           | 1;
                  goto LAB_1801682fe;
                }
                lVar41 = lVar53;
              } while (lVar53 != 6);
              uVar56 = 0;
LAB_1801682fe:
              if (uVar56 == 0) {
                FUN_18016a4e0(local_8a8);
                FUN_180113930(local_8a8,*(undefined8 *)(local_c20._0_8_ + 0x10));
                local_d58 = *(longlong **)(local_c20._0_8_ + 0x20);
                lStack_d50 = *(undefined8 *)(local_c20._0_8_ + 0x28);
                puVar39 = (undefined8 *)FUN_180166360(&local_bb8,&local_d58);
                auVar60 = auVar61._0_16_;
                if (&local_888 != puVar39) {
                  FUN_18015c010(&local_888);
                  auVar60 = auVar61._0_16_;
                  local_888 = *puVar39;
                  uStack_880 = puVar39[1];
                  uStack_878 = puVar39[2];
                  uStack_870 = puVar39[3];
                  puVar39[2] = 0;
                  puVar39[3] = 0xf;
                  *(undefined1 *)puVar39 = 0;
                }
                auVar61 = ZEXT1664(auVar60);
                FUN_18015c010(&local_bb8);
                if (*(longlong *)(local_c20._0_8_ + 0x38) == 1) {
                  if (**(byte **)(local_c20._0_8_ + 0x30) == 0x31) {
                    uVar56 = 0;
                  }
                  else {
                    uVar56 = -(uint)(**(byte **)(local_c20._0_8_ + 0x30) < 0x31) | 1;
                  }
                  local_7c8 = uVar56 == 0;
                }
                else {
                  local_7c8 = false;
                }
                if (*(longlong *)(local_c20._0_8_ + 0x48) == 1) {
                  if (**(byte **)(local_c20._0_8_ + 0x40) == 0x31) {
                    uVar56 = 0;
                  }
                  else {
                    uVar56 = -(uint)(**(byte **)(local_c20._0_8_ + 0x40) < 0x31) | 1;
                  }
                  local_7c7 = uVar56 == 0;
                }
                else {
                  local_7c7 = false;
                }
                local_d58 = *(longlong **)(local_c20._0_8_ + 0x50);
                lStack_d50 = *(undefined8 *)(local_c20._0_8_ + 0x58);
                puVar39 = (undefined8 *)FUN_180166360(&local_bb8,&local_d58);
                auVar60 = auVar61._0_16_;
                if (&local_868 != puVar39) {
                  FUN_18015c010(&local_868);
                  auVar60 = auVar61._0_16_;
                  local_868 = *puVar39;
                  uStack_860 = puVar39[1];
                  uStack_858 = puVar39[2];
                  uStack_850 = puVar39[3];
                  puVar39[2] = 0;
                  puVar39[3] = 0xf;
                  *(undefined1 *)puVar39 = 0;
                }
                auVar61 = ZEXT1664(auVar60);
                FUN_18015c010(&local_bb8);
                local_d58 = *(longlong **)(local_c20._0_8_ + 0x60);
                lStack_d50 = *(undefined8 *)(local_c20._0_8_ + 0x68);
                puVar39 = (undefined8 *)FUN_180166360(&local_bb8,&local_d58);
                auVar60 = auVar61._0_16_;
                if (&local_848 != puVar39) {
                  FUN_18015c010(&local_848);
                  auVar60 = auVar61._0_16_;
                  local_848 = *puVar39;
                  uStack_840 = puVar39[1];
                  uStack_838 = puVar39[2];
                  uStack_830 = puVar39[3];
                  puVar39[2] = 0;
                  puVar39[3] = 0xf;
                  *(undefined1 *)puVar39 = 0;
                }
                auVar61 = ZEXT1664(auVar60);
                FUN_18015c010(&local_bb8);
                local_d58 = *(longlong **)(local_c20._0_8_ + 0x70);
                lStack_d50 = *(undefined8 *)(local_c20._0_8_ + 0x78);
                puVar39 = (undefined8 *)FUN_180166360(&local_bb8,&local_d58);
                auVar60 = auVar61._0_16_;
                if (&local_828 != puVar39) {
                  FUN_18015c010(&local_828);
                  auVar60 = auVar61._0_16_;
                  local_828 = *puVar39;
                  uStack_820 = puVar39[1];
                  uStack_818 = puVar39[2];
                  uStack_810 = puVar39[3];
                  puVar39[2] = 0;
                  puVar39[3] = 0xf;
                  *(undefined1 *)puVar39 = 0;
                }
                auVar61 = ZEXT1664(auVar60);
                FUN_18015c010(&local_bb8);
                local_d58 = *(longlong **)(local_c20._0_8_ + 0x80);
                lStack_d50 = *(longlong *)(local_c20._0_8_ + 0x88);
                puVar39 = (undefined8 *)FUN_180166360(&local_bb8,&local_d58);
                auVar60 = auVar61._0_16_;
                if (&local_808 != puVar39) {
                  FUN_18015c010(&local_808);
                  auVar60 = auVar61._0_16_;
                  local_808 = *puVar39;
                  uStack_800 = puVar39[1];
                  uStack_7f8 = puVar39[2];
                  uStack_7f0 = puVar39[3];
                  puVar39[2] = 0;
                  puVar39[3] = 0xf;
                  *(undefined1 *)puVar39 = 0;
                }
                auVar61 = ZEXT1664(auVar60);
                FUN_18015c010(&local_bb8);
                if ((ulonglong)((longlong)(local_c20._8_8_ - local_c20._0_8_) >> 4) < 10) {
                  puVar39 = (undefined8 *)FUN_18015b0f0(&local_bb8);
                  uVar55 = uVar55 | 2;
                }
                else {
                  local_d58 = *(longlong **)(local_c20._0_8_ + 0x90);
                  lStack_d50 = *(longlong *)(local_c20._0_8_ + 0x98);
                  puVar39 = (undefined8 *)FUN_180166360(local_d20,&local_d58);
                  uVar55 = uVar55 | 1;
                }
                auVar60 = auVar61._0_16_;
                local_d70._0_4_ = uVar55;
                if (&local_7e8 != puVar39) {
                  FUN_18015c010(&local_7e8);
                  auVar60 = auVar61._0_16_;
                  local_7e8 = *puVar39;
                  uStack_7e0 = puVar39[1];
                  uStack_7d8 = puVar39[2];
                  uStack_7d0 = puVar39[3];
                  puVar39[2] = 0;
                  puVar39[3] = 0xf;
                  *(undefined1 *)puVar39 = 0;
                }
                if ((uVar55 & 2) != 0) {
                  uVar55 = uVar55 & 0xfffffffd;
                  auVar61 = ZEXT1664(auVar60);
                  local_d70._0_4_ = uVar55;
                  FUN_18015c010(&local_bb8);
                  auVar60 = auVar61._0_16_;
                }
                if ((uVar55 & 1) != 0) {
                  uVar55 = uVar55 & 0xfffffffe;
                  auVar61 = ZEXT1664(auVar60);
                  local_d70._0_4_ = uVar55;
                  FUN_18015c010(local_d20);
                  auVar60 = auVar61._0_16_;
                }
                if (local_7c7 != '\0') {
                  if (10 < (ulonglong)((longlong)(local_c20._8_8_ - local_c20._0_8_) >> 4)) {
                    local_d58 = *(longlong **)(local_c20._0_8_ + 0xa0);
                    lStack_d50 = *(longlong *)(local_c20._0_8_ + 0xa8);
                    auVar61 = ZEXT1664(auVar60);
                    uVar36 = FUN_180166360(&local_bb8,&local_d58);
                    FUN_1800f5780(local_760,uVar36);
                    FUN_18015c010(&local_bb8);
                    auVar60 = auVar61._0_16_;
                  }
                }
                if (local_c58._8_8_ == local_c48) {
                  auVar61 = ZEXT1664(auVar60);
                  FUN_180178db0(local_c58,local_c58._8_8_);
                }
                else {
                  auVar61 = ZEXT1664(auVar60);
                  FUN_18017a9c0(local_c58._8_8_,local_8a8);
                  local_c58._8_8_ = local_c58._8_8_ + 0x168;
                }
                FUN_18015c010(local_760);
                FUN_18015c010(local_780);
                FUN_18015c010(local_7a0);
                FUN_18015c010(local_7c0);
                FUN_18015c010(&local_7e8);
                FUN_18015c010(&local_808);
                FUN_18015c010(&local_828);
                FUN_18015c010(&local_848);
                FUN_18015c010(&local_868);
                FUN_18015c010(&local_888);
                FUN_18015c010(local_8a8);
                goto LAB_1801681a5;
              }
            }
            if ((longlong *)uVar36 != (longlong *)0x0) {
              plVar37 = (longlong *)uVar36;
              if ((0xfff < (local_c10 - uVar36 & 0xfffffffffffffff0U)) &&
                 (plVar37 = *(longlong **)(uVar36 + -8),
                 0x1f < (ulonglong)(uVar36 + (-8 - (longlong)plVar37)))) goto LAB_18016a4b0;
              goto LAB_180168801;
            }
          }
          else {
            if (*(longlong *)(local_c20._0_8_ + 8) == 2) {
              bVar2 = **(byte **)local_c20._0_8_;
              bVar58 = bVar2 < 0x76;
              if ((bVar2 == 0x76) &&
                 (bVar2 = (*(byte **)local_c20._0_8_)[1], bVar58 = bVar2 < 0x31, bVar2 == 0x31)) {
                uVar56 = 0;
              }
              else {
                uVar56 = -(uint)bVar58 | 1;
              }
              if (uVar56 != 0) goto LAB_1801681f3;
              puVar45 = local_be0;
LAB_180168197:
              FUN_180113930(puVar45,*(longlong *)(uVar36 + 0x10));
            }
            else {
LAB_1801681f3:
              if (uVar38 != 2) goto LAB_1801682b9;
              if ((*(longlong *)(local_c20._0_8_ + 8) == 9) &&
                 (iVar32 = memcmp(*(void **)local_c20._0_8_,"fork-pipe",9), iVar32 == 0)) {
                puVar45 = local_b78;
                goto LAB_180168197;
              }
              if ((*(longlong *)(uVar36 + 8) != 0xc) ||
                 (iVar32 = memcmp(*(void **)uVar36,"config-error",0xc), iVar32 != 0))
              goto LAB_1801682b9;
              local_d58 = *(longlong **)(uVar36 + 0x10);
              lStack_d50 = *(longlong *)(uVar36 + 0x18);
              pauVar42 = (undefined1 (*) [16])FUN_180166360(&local_bb8,&local_d58);
              auVar60 = auVar61._0_16_;
              if (&local_978 != pauVar42) {
                FUN_18015c010(local_978);
                auVar60 = auVar61._0_16_;
                local_978 = *pauVar42;
                lStack_968 = *(longlong *)pauVar42[1];
                uStack_960 = *(undefined8 *)(pauVar42[1] + 8);
                *(undefined8 *)pauVar42[1] = 0;
                *(undefined8 *)(pauVar42[1] + 8) = 0xf;
                (*pauVar42)[0] = 0;
              }
              auVar61 = ZEXT1664(auVar60);
              FUN_18015c010(&local_bb8);
            }
LAB_1801681a5:
            if ((longlong *)local_c20._0_8_ != (longlong *)0x0) {
              plVar37 = (longlong *)local_c20._0_8_;
              if ((0xfff < (local_c10 - local_c20._0_8_ & 0xfffffffffffffff0U)) &&
                 (plVar37 = *(longlong **)(local_c20._0_8_ + -8),
                 0x1f < (ulonglong)(local_c20._0_8_ + (-8 - (longlong)plVar37)))) {
LAB_18016a4b0:
                    /* WARNING: Subroutine does not return */
                _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
              }
LAB_180168801:
              FUN_1804547d0(plVar37);
            }
          }
          if (local_c88 != 0) {
            lVar41 = local_c88;
            puVar45 = local_c98;
            if (0xf < local_c80) {
              puVar45 = (undefined1 *)local_c98._0_8_;
            }
            for (; lVar41 != 0; lVar41 = lVar41 + -1) {
              *puVar45 = 0;
              puVar45 = puVar45 + 1;
            }
          }
          local_c88 = 0;
          puVar45 = local_c98;
          if (0xf < local_c80) {
            puVar45 = (undefined1 *)local_c98._0_8_;
          }
          *puVar45 = 0;
          FUN_180156de0((longlong)local_738 + (longlong)*(int *)(local_738[0] + 4),10);
          plVar37 = (longlong *)FUN_1801775a0(local_738,local_c98);
        } while ((*(byte *)((longlong)*(int *)(*plVar37 + 4) + 0x10 + (longlong)plVar37) & 6) == 0);
      }
      plStack_bf0 = (longlong *)0x0;
      uStack_be8 = 0xf;
      local_c00._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar20[0xf] = 0;
      auVar20._0_15_ = local_c00._1_15_;
      local_c00 = auVar20 << 8;
      local_d48 = local_c00;
      local_8c0 = auVar61._0_16_;
      local_8d0._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar21[0xf] = 0;
      auVar21._0_15_ = local_8d0._1_15_;
      local_8d0 = auVar21 << 8;
      if (bVar59) {
        FUN_18015c010(local_c00);
        local_c00 = local_c40;
        plStack_bf0 = (longlong *)auStack_c30._0_8_;
        uStack_be8 = auStack_c30._8_8_;
        auVar60 = auVar61._0_16_;
        auVar22[0xf] = 0;
        auVar22._0_15_ = local_c40._1_15_;
        local_c40 = auVar22 << 8;
        bVar59 = (longlong *)auStack_c30._0_8_ != (longlong *)0x0;
        auStack_c30 = auVar60;
        if (bVar59) {
          auVar61 = ZEXT1664(auVar60);
          plVar37 = (longlong *)FUN_18015b110(&local_d58,"authorization");
          local_d68 = (char *)*plVar37;
          plStack_d60 = (longlong *)plVar37[1];
          cVar29 = FUN_180010790(&local_d68,local_c00);
          auVar60 = auVar61._0_16_;
          plVar37 = plStack_bf0;
          goto joined_r0x0001801689c0;
        }
      }
      else {
        cVar29 = FUN_180166df0(local_b30,0x3000000,local_c00);
        auVar60 = auVar61._0_16_;
        if (cVar29 != '\0') {
          local_d68 = "authorization";
          plStack_d60 = (longlong *)&DAT_0000000d;
          cVar29 = FUN_180010790(&local_d68,local_c00);
          auVar60 = auVar61._0_16_;
          plVar37 = plStack_bf0;
joined_r0x0001801689c0:
          plStack_bf0 = plVar37;
          if (cVar29 != '\0') {
            puVar45 = local_c00;
            if (0xf < uStack_be8) {
              puVar45 = (undefined1 *)local_c00._0_8_;
            }
            if (((plVar37 < &DAT_00000018) ||
                (iVar32 = memcmp(puVar45,"HVHGOD-AUTHORIZATION-V1\n",0x18), iVar32 != 0)) ||
               (0x1ffffe7 < (longlong)plVar37 - 0x19U)) {
LAB_180168b3b:
              FUN_1800f5710(local_c00);
            }
            else {
              pcVar52 = puVar45 + 0x18;
              puVar40 = (undefined1 *)
                        thunk_FUN_1805f7e70(pcVar52,(undefined1 *)
                                                    ((longlong)plVar37 + (longlong)puVar45),10);
              if ((puVar40 == (undefined1 *)((longlong)plVar37 + (longlong)puVar45)) ||
                 (plVar57 = (longlong *)(puVar40 + -(longlong)puVar45),
                 (longlong *)0x18000 < plVar57)) goto LAB_180168b3b;
              plStack_d60 = plVar57;
              if (plVar37 + -3 < plVar57 + -3) {
                plStack_d60 = plVar37;
              }
              plStack_d60 = plStack_d60 + -3;
              local_d68 = pcVar52;
              local_d58 = plStack_d60;
              cVar29 = FUN_180164bc0(&local_d68);
              if (cVar29 == '\0') goto LAB_180168b3b;
              plVar57 = (longlong *)((longlong)plVar57 + 1);
              if (plVar37 < plVar57) {
                    /* WARNING: Subroutine does not return */
                FUN_18015ac40();
              }
              uVar38 = 0xffffffffffffffff;
              if ((longlong)plVar37 - (longlong)plVar57 != 0xffffffffffffffff) {
                uVar38 = (longlong)plVar37 - (longlong)plVar57;
              }
              if ((uVar38 != 0) &&
                 ((uVar38 < 0x12 ||
                  (iVar32 = memcmp((char *)((longlong)plVar57 + (longlong)puVar45),
                                   "HVHGOD-FEATURE-V1\n",0x12), iVar32 != 0)))) goto LAB_180168b3b;
              plStack_d30 = local_d58;
              local_d68 = (char *)((longlong)plVar57 + (longlong)puVar45);
              plStack_d60 = (longlong *)uVar38;
              local_d38 = pcVar52;
              FUN_180175270(local_8d0,&local_d68);
              uVar36 = FUN_18015acb0(&local_bb8,&local_d38,local_d78);
              FUN_1800f5780(local_c00,uVar36);
              FUN_18015c010(&local_bb8);
            }
            local_d68 = local_c00;
            if (0xf < uStack_be8) {
              local_d68 = (char *)local_c00._0_8_;
            }
            plStack_d60 = plStack_bf0;
            cVar29 = FUN_180164bc0(&local_d68);
            auVar60 = auVar61._0_16_;
            if (cVar29 != '\0') {
              cVar29 = FUN_180176cd0(local_c00,10);
              if (cVar29 != '\0') {
                FUN_180176d00(local_c00);
              }
              cVar29 = FUN_180176cd0(local_c00,0xd);
              if (cVar29 != '\0') {
                FUN_180176d00(local_c00);
              }
              plVar37 = (longlong *)FUN_18015ac20(local_c00,&local_d58);
              local_d68 = (char *)*plVar37;
              plStack_d60 = (longlong *)plVar37[1];
              FUN_180166890(&local_d68,local_ae8);
              auVar60 = auVar61._0_16_;
            }
          }
        }
      }
      local_b58 = 0;
      auVar61 = ZEXT1664(auVar60);
      DVar33 = GetCurrentProcessId();
      local_d58 = (longlong *)CONCAT44(local_d58._4_4_,DVar33);
      local_8e0 = auVar61._0_16_;
      local_8f0._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar23[0xf] = 0;
      auVar23._0_15_ = local_8f0._1_15_;
      local_8f0 = auVar23 << 8;
      local_948 = (longlong *)0x0;
      local_940 = 0xf;
      local_958._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar24[0xf] = 0;
      auVar24._0_15_ = local_958._1_15_;
      local_958 = auVar24 << 8;
      local_ca0 = '\0';
      FUN_180001730(local_910);
      pppppppuVar47 = local_910;
      if (0xf < local_8f8) {
        pppppppuVar47 = local_910[0];
      }
      puVar45 = local_9c8;
      if (0xf < local_9b0) {
        puVar45 = (undefined1 *)local_9c8._0_8_;
      }
      if ((local_9b8 == local_900) &&
         ((local_9b8 == 0 || (iVar32 = memcmp(puVar45,pppppppuVar47,local_9b8), iVar32 == 0)))) {
        FUN_18015bae0(&local_bb8,"0.1.411");
        local_d70 = (char *)(CONCAT44(local_d70._4_4_,uVar55) | 4);
        local_d20 = (undefined1  [16])0x0;
        local_d10 = (undefined1  [16])0x0;
        FUN_18015ba30(local_d20,"internal-runtime",0x10);
        uVar55 = uVar55 | 0xc;
        local_d70._0_4_ = uVar55;
        cVar29 = FUN_18003b330(local_a48,local_a28,local_d20,DVar33);
        if ((cVar29 == '\0') || ((local_b58 < param_1[0xa7] || (local_b58 < 1))))
        goto LAB_180168e1b;
        plVar37 = (longlong *)FUN_18015ac20(local_a48,&local_938);
        local_d68 = (char *)*plVar37;
        plStack_d60 = (longlong *)plVar37[1];
        plVar37 = (longlong *)FUN_18015ac20(local_9a8,local_c20);
        local_d38 = (char *)*plVar37;
        plStack_d30 = (longlong *)plVar37[1];
        cVar29 = FUN_180027640(&local_d38,&local_d68,local_8f0,local_958);
        if (cVar29 == '\0') goto LAB_180168e1b;
        bVar59 = true;
      }
      else {
LAB_180168e1b:
        bVar59 = false;
      }
      if ((uVar55 & 8) != 0) {
        uVar55 = uVar55 & 0xfffffff7;
        local_d70._0_4_ = uVar55;
        FUN_18015c010(local_d20);
      }
      if ((uVar55 & 4) != 0) {
        uVar55 = uVar55 & 0xfffffffb;
        local_d70._0_4_ = uVar55;
        FUN_18015c010(&local_bb8);
      }
      param_1[0xa5] = local_cf8;
      if (bVar59) {
        if (*(char *)((longlong)param_1 + 0x54d) == '\0') {
          plVar37 = (longlong *)FUN_18015ac20(local_8f0,local_c20);
          local_d68 = (char *)*plVar37;
          plStack_d60 = (longlong *)plVar37[1];
          FUN_180166360(&local_bb8,&local_d68);
          lVar41 = FUN_18016fd00(local_b78);
          param_1[0xaa] = lVar41;
          FUN_18015c010(&local_bb8);
          *(bool *)((longlong)param_1 + 0x54d) = param_1[0xaa] != 0;
          if (param_1[0xaa] == 0) {
            FUN_1800efc30(3);
          }
          if (*(char *)((longlong)param_1 + 0x54d) == '\0') goto LAB_180168f77;
        }
        DVar33 = WaitForSingleObject((HANDLE)param_1[0xaa],0);
        if (DVar33 != 0x102) goto LAB_180168f77;
        bVar59 = true;
        local_d78[0] = 1;
        uVar36 = FUN_18015b330(&local_bb8,local_8d0);
        FUN_18003adf0(uVar36);
        plVar37 = (longlong *)FUN_18015ac20(local_8f0,local_c20);
        local_d68 = (char *)*plVar37;
        plStack_d60 = (longlong *)plVar37[1];
        pauVar42 = (undefined1 (*) [16])FUN_180166360(&local_938,&local_d68);
        uVar55 = uVar55 | 0x10;
      }
      else {
LAB_180168f77:
        bVar59 = false;
        local_d78[0] = 0;
        FUN_18003ad90();
        pauVar42 = (undefined1 (*) [16])FUN_18015bae0(local_d20,"player");
        uVar55 = uVar55 | 0x20;
      }
      local_d70._0_4_ = uVar55;
      if (&local_ae8 != pauVar42) {
        FUN_18015c010(local_ae8);
        local_ae8 = *pauVar42;
        sStack_ad8 = *(size_t *)pauVar42[1];
        uStack_ad0 = *(ulonglong *)(pauVar42[1] + 8);
        *(undefined8 *)pauVar42[1] = 0;
        *(undefined8 *)(pauVar42[1] + 8) = 0xf;
        (*pauVar42)[0] = 0;
      }
      if ((uVar55 & 0x20) != 0) {
        uVar55 = uVar55 & 0xffffffdf;
        local_d70._0_4_ = uVar55;
        FUN_18015c010(local_d20);
      }
      if ((uVar55 & 0x10) != 0) {
        uVar55 = uVar55 & 0xffffffef;
        local_d70._0_4_ = uVar55;
        FUN_18015c010(&local_938);
      }
      if (bVar59) {
        local_d68 = local_958;
        if (0xf < local_940) {
          local_d68 = (char *)local_958._0_8_;
        }
        plStack_d60 = local_948;
        pauVar42 = (undefined1 (*) [16])FUN_180166360(&local_bb8,&local_d68);
        uVar56 = uVar55 | 0x40;
        local_d38 = (char *)(CONCAT44(local_d38._4_4_,uVar55) | 0x40);
        local_d70 = (char *)(CONCAT44(local_d70._4_4_,uVar55) | 0x40);
        if (&local_ac8 != pauVar42) goto LAB_1801690d0;
      }
      else {
        local_d20 = (undefined1  [16])0x0;
        local_d10 = (undefined1  [16])0x0;
        FUN_18015ba30(local_d20,"Subscription unknown",0x14);
        pauVar42 = &local_d20;
        uVar56 = uVar55 | 0x80;
        local_d38 = (char *)(CONCAT44(local_d38._4_4_,uVar55) | 0x80);
        local_d70 = (char *)(CONCAT44(local_d70._4_4_,uVar55) | 0x80);
LAB_1801690d0:
        FUN_18015c010(local_ac8);
        local_ac8 = *pauVar42;
        auStack_ab8 = pauVar42[1];
        *(undefined8 *)pauVar42[1] = 0;
        *(undefined8 *)(pauVar42[1] + 8) = 0xf;
        (*pauVar42)[0] = 0;
      }
      uVar55 = uVar56;
      if ((char)uVar56 < '\0') {
        uVar55 = uVar56 & 0xffffff7f;
        local_d38 = (char *)(CONCAT44(local_d38._4_4_,uVar56) & 0xffffffffffffff7f);
        local_d70 = (char *)(CONCAT44(local_d70._4_4_,uVar56) & 0xffffffffffffff7f);
        FUN_18015c010(local_d20);
      }
      if ((uVar55 & 0x40) != 0) {
        local_d38 = (char *)(CONCAT44(local_d38._4_4_,uVar55) & 0xffffffffffffffbf);
        local_d70 = (char *)(CONCAT44(local_d70._4_4_,uVar55) & 0xffffffffffffffbf);
        FUN_18015c010(&local_bb8);
      }
      if ((!bVar59) || (local_ca0 == '\0')) {
        local_988 = (ushort)bVar59;
        if (!bVar59) {
          sStack_b68 = 0;
          puVar45 = local_b78;
          if (0xf < uStack_b60) {
            puVar45 = (undefined1 *)local_b78._0_8_;
          }
          *puVar45 = 0;
        }
      }
      else {
        local_988 = CONCAT11(1,bVar59);
      }
      uVar38 = uStack_ad0;
      sVar48 = sStack_ad8;
      plVar37 = param_1 + 0x30;
      uVar36 = local_ae8._0_8_;
      puVar45 = local_ae8;
      if (0xf < uStack_ad0) {
        puVar45 = (undefined1 *)local_ae8._0_8_;
      }
      sVar3 = param_1[0x32];
      if (0xf < (ulonglong)param_1[0x33]) {
        plVar37 = (longlong *)*plVar37;
      }
      if ((sVar3 == sStack_ad8) &&
         ((sVar3 == 0 || (iVar32 = memcmp(plVar37,puVar45,sVar3), iVar32 == 0)))) {
        plVar37 = param_1 + 0x34;
        puVar45 = local_b78;
        if (0xf < uStack_b60) {
          puVar45 = (undefined1 *)local_b78._0_8_;
        }
        sVar3 = param_1[0x36];
        if (0xf < (ulonglong)param_1[0x37]) {
          plVar37 = (longlong *)*plVar37;
        }
        if ((sVar3 != sStack_b68) ||
           ((sVar3 != 0 && (iVar32 = memcmp(plVar37,puVar45,sVar3), iVar32 != 0))))
        goto LAB_18016923c;
      }
      else {
LAB_18016923c:
        if (param_1 + 0x30 != (longlong *)local_ae8) {
          puVar45 = local_ae8;
          if (0xf < uVar38) {
            puVar45 = (undefined1 *)uVar36;
          }
          FUN_180113930(param_1 + 0x30,puVar45,sVar48);
        }
        plVar37 = param_1 + 0x34;
        if (plVar37 != (longlong *)local_b78) {
          FUN_18015c010(plVar37);
          *plVar37 = local_b78._0_8_;
          param_1[0x35] = local_b78._8_8_;
          param_1[0x36] = sStack_b68;
          param_1[0x37] = uStack_b60;
          sStack_b68 = 0;
          uStack_b60 = 0xf;
          auVar25[0xf] = 0;
          auVar25._0_15_ = local_b78._1_15_;
          local_b78 = auVar25 << 8;
        }
        lVar41 = param_1[0x2e];
        lVar53 = param_1[0x2d];
        if (lVar53 != lVar41) {
          do {
            FUN_180152210(lVar53);
            lVar53 = lVar53 + 0x168;
          } while (lVar53 != lVar41);
          param_1[0x2e] = param_1[0x2d];
        }
        plVar37 = param_1 + 0x38;
        param_1[0x3a] = 0;
        if (0xf < (ulonglong)param_1[0x3b]) {
          plVar37 = (longlong *)*plVar37;
        }
        *(undefined1 *)plVar37 = 0;
        plVar37 = param_1 + 0x3c;
        param_1[0x3e] = 0;
        if (0xf < (ulonglong)param_1[0x3f]) {
          plVar37 = (longlong *)*plVar37;
        }
        *(undefined1 *)plVar37 = 0;
        param_1[0x45] = 0;
        param_1[0x44] = 0;
        *(undefined2 *)((longlong)param_1 + 0x231) = 0;
        *(undefined1 *)(param_1 + 0x46) = 0;
        *(undefined1 *)((longlong)param_1 + 0x233) = 1;
      }
      if (param_1 + 0x40 != (longlong *)local_be0) {
        puVar45 = local_be0;
        if (0xf < local_bc8) {
          puVar45 = (undefined1 *)local_be0._0_8_;
        }
        FUN_180113930(param_1 + 0x40,puVar45,local_bd0);
      }
      if (lStack_968 != 0) {
        lVar41 = param_1[9];
        lVar53 = param_1[8];
        if (lVar53 != lVar41) {
          do {
            FUN_180152210(lVar53);
            lVar53 = lVar53 + 0x168;
          } while (lVar53 != lVar41);
          param_1[9] = param_1[8];
        }
        FUN_180176480(param_1 + 0x84);
        plVar37 = param_1 + 0x80;
        param_1[0x82] = 0;
        if (0xf < (ulonglong)param_1[0x83]) {
          plVar37 = (longlong *)*plVar37;
        }
        *(undefined1 *)plVar37 = 0;
        *(undefined4 *)((longlong)param_1 + 0x4a4) = 0;
      }
      FUN_18015b360(local_b50,param_1 + 0x78);
      puVar39 = (undefined8 *)param_1[8];
      plVar37 = (longlong *)local_c58._8_8_;
      if (puVar39 != (undefined8 *)param_1[9]) {
        do {
          for (plVar57 = (longlong *)local_c58._0_8_; plVar57 != plVar37; plVar57 = plVar57 + 0x2d)
          {
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
            if (*(char *)((longlong)plVar57 + 0xe1) == '\0') {
              puVar50 = puVar39;
              if (0xf < (ulonglong)puVar39[3]) {
                puVar50 = (undefined8 *)*puVar39;
              }
              sVar48 = plVar57[2];
              plVar43 = plVar57;
              if (0xf < (ulonglong)plVar57[3]) {
                plVar43 = (longlong *)*plVar57;
              }
              if ((sVar48 == puVar39[2]) &&
                 ((sVar48 == 0 || (iVar32 = memcmp(plVar43,puVar50,sVar48), iVar32 == 0)))) break;
            }
          }
          if (plVar57 == plVar37) {
            puVar50 = puVar39;
            if (0xf < (ulonglong)puVar39[3]) {
              puVar50 = (undefined8 *)*puVar39;
            }
            pppppppuVar47 = local_b50;
            if (0xf < local_b38) {
              pppppppuVar47 = local_b50[0];
            }
            if (local_b40 == puVar39[2]) {
              if (local_b40 == 0) {
                bVar59 = true;
              }
              else {
                iVar32 = memcmp(pppppppuVar47,puVar50,local_b40);
                bVar59 = iVar32 == 0;
              }
            }
            else {
              bVar59 = false;
            }
            *(bool *)(puVar39 + 0x1c) = bVar59;
            if (local_c58._8_8_ == local_c48) {
              FUN_180178f40(local_c58,local_c58._8_8_,puVar39);
              plVar37 = (longlong *)local_c58._8_8_;
            }
            else {
              FUN_18016c8d0(local_c58._8_8_,puVar39);
              plVar37 = (longlong *)(local_c58._8_8_ + 0x168);
              local_c58._8_8_ = plVar37;
            }
            puVar39 = puVar39 + 0x2d;
          }
          else {
            puVar50 = puVar39;
            if (0xf < (ulonglong)puVar39[3]) {
              puVar50 = (undefined8 *)*puVar39;
            }
            pppppppuVar47 = local_b50;
            if (0xf < local_b38) {
              pppppppuVar47 = local_b50[0];
            }
            if ((local_b40 == puVar39[2]) &&
               (((local_b40 == 0 || (iVar32 = memcmp(pppppppuVar47,puVar50,local_b40), iVar32 == 0))
                && ((longlong *)local_be0 != plVar57)))) {
              plVar37 = plVar57 + 2;
              if (0xf < (ulonglong)plVar57[3]) {
                plVar57 = (longlong *)*plVar57;
              }
              FUN_180113930(local_be0,plVar57,*plVar37);
            }
            puVar50 = (undefined8 *)param_1[9];
            puVar27 = puVar39;
            while (puVar27 = puVar27 + 0x2d, puVar27 != puVar50) {
              FUN_180175280(puVar27 + -0x2d,puVar27);
            }
            FUN_180152210();
            param_1[9] = param_1[9] + -0x168;
            plVar37 = (longlong *)local_c58._8_8_;
          }
        } while (puVar39 != (undefined8 *)param_1[9]);
      }
      if (local_b40 != 0) {
        plVar57 = (longlong *)local_c58._0_8_;
        if ((longlong *)local_c58._0_8_ != plVar37) {
          do {
            if (*(char *)((longlong)plVar57 + 0xe2) != '\0') {
              pppppppuVar47 = local_b50;
              if (0xf < local_b38) {
                pppppppuVar47 = local_b50[0];
              }
              sVar48 = plVar57[2];
              plVar43 = plVar57;
              if (0xf < (ulonglong)plVar57[3]) {
                plVar43 = (longlong *)*plVar57;
              }
              if ((sVar48 == local_b40) &&
                 ((sVar48 == 0 || (iVar32 = memcmp(plVar43,pppppppuVar47,sVar48), iVar32 == 0))))
              break;
            }
            plVar57 = plVar57 + 0x2d;
          } while (plVar57 != plVar37);
          if (plVar57 != plVar37) {
            pppppppuVar47 = local_b50;
            if (0xf < local_b38) {
              pppppppuVar47 = local_b50[0];
            }
            FUN_180113930(local_be0,pppppppuVar47,local_b40);
            plVar37 = (longlong *)local_c58._8_8_;
          }
        }
      }
      sVar48 = param_1[0x82];
      if (sVar48 != 0) {
        plVar57 = (longlong *)local_c58._0_8_;
        if ((longlong *)local_c58._0_8_ != plVar37) {
          uVar38 = param_1[0x83];
          do {
            plVar43 = param_1 + 0x80;
            if (0xf < uVar38) {
              plVar43 = (longlong *)param_1[0x80];
            }
            sVar3 = plVar57[2];
            plVar51 = plVar57;
            if (0xf < (ulonglong)plVar57[3]) {
              plVar51 = (longlong *)*plVar57;
            }
          } while (((sVar3 != sVar48) ||
                   ((sVar3 != 0 && (iVar32 = memcmp(plVar51,plVar43,sVar3), iVar32 != 0)))) &&
                  (plVar57 = plVar57 + 0x2d, plVar57 != plVar37));
        }
        plVar43 = param_1 + 0x80;
        if (plVar57 == plVar37) {
          param_1[0x82] = 0;
          if (0xf < (ulonglong)param_1[0x83]) {
            plVar43 = (longlong *)*plVar43;
          }
          *(undefined1 *)plVar43 = 0;
        }
        else {
          sVar48 = param_1[0x82];
          uVar38 = param_1[0x83];
          if (0xf < uVar38) {
            plVar43 = (longlong *)*plVar43;
          }
          puVar45 = local_be0;
          if (0xf < local_bc8) {
            puVar45 = (undefined1 *)local_be0._0_8_;
          }
          if ((local_bd0 == sVar48) &&
             (((local_bd0 == 0 || (iVar32 = memcmp(puVar45,plVar43,local_bd0), iVar32 == 0)) &&
              (*(char *)((longlong)plVar57 + 0xe2) == '\0')))) {
            FUN_1800f5710();
          }
          else {
            plVar57 = param_1 + 0x80;
            if ((longlong *)local_be0 == plVar57) goto LAB_1801697d0;
            if (0xf < uVar38) {
              plVar57 = (longlong *)*plVar57;
            }
            FUN_180113930(local_be0,plVar57,sVar48);
          }
        }
        plVar37 = (longlong *)local_c58._8_8_;
      }
LAB_1801697d0:
      uVar55 = 0;
      if ((longlong *)local_c58._0_8_ != plVar37) {
        plVar57 = (longlong *)(local_c58._0_8_ + 0xc0);
        do {
          plVar43 = plVar57 + -0x18;
          if (0xf < (ulonglong)plVar57[-0x15]) {
            plVar43 = (longlong *)*plVar43;
          }
          uVar54 = 0xcbf29ce484222325;
          uVar38 = 0;
          if (plVar57[-0x16] != 0) {
            do {
              uVar54 = (uVar54 ^ *(byte *)(uVar38 + (longlong)plVar43)) * 0x100000001b3;
              uVar38 = uVar38 + 1;
            } while (uVar38 < (ulonglong)plVar57[-0x16]);
          }
          lVar41 = FUN_180177b00(param_1 + 0x84,local_c20,plVar57 + -0x18,uVar54);
          plVar43 = *(longlong **)(lVar41 + 8);
          if (plVar43 == (longlong *)0x0) {
            plVar43 = (longlong *)param_1[0x85];
          }
          if (plVar43 != (longlong *)param_1[0x85]) {
            if (*(char *)((longlong)plVar57 + 0x22) == '\0') {
              plVar51 = plVar43 + 6;
              if (0xf < (ulonglong)plVar43[9]) {
                plVar51 = (longlong *)*plVar51;
              }
              sVar48 = plVar57[2];
              _Buf1 = plVar57;
              if (0xf < (ulonglong)plVar57[3]) {
                _Buf1 = (longlong *)*plVar57;
              }
              if ((sVar48 == plVar43[8]) &&
                 ((sVar48 == 0 || (iVar32 = memcmp(_Buf1,plVar51,sVar48), iVar32 == 0)))) {
                plVar51 = plVar43 + 2;
                if (0xf < (ulonglong)plVar43[5]) {
                  plVar51 = (longlong *)*plVar51;
                }
                uVar54 = 0xcbf29ce484222325;
                uVar38 = 0;
                if (plVar43[4] != 0) {
                  do {
                    uVar54 = (uVar54 ^ *(byte *)((longlong)plVar51 + uVar38)) * 0x100000001b3;
                    uVar38 = uVar38 + 1;
                  } while (uVar38 < (ulonglong)plVar43[4]);
                }
                plVar51 = (longlong *)((uVar54 & param_1[0x8a]) * 0x10 + param_1[0x87]);
                if ((longlong *)plVar51[1] == plVar43) {
                  if ((longlong *)*plVar51 == plVar43) {
                    lVar41 = param_1[0x85];
                    *plVar51 = lVar41;
                    plVar51[1] = lVar41;
                  }
                  else {
                    plVar51[1] = plVar43[1];
                  }
                }
                else if ((longlong *)*plVar51 == plVar43) {
                  *plVar51 = *plVar43;
                }
                lVar41 = *plVar43;
                param_1[0x86] = param_1[0x86] + -1;
                *(longlong *)plVar43[1] = lVar41;
                *(longlong *)(lVar41 + 8) = plVar43[1];
                FUN_18015c010(plVar43 + 6);
                FUN_18015c010(plVar43 + 2);
                FUN_1804547d0(plVar43,0x50);
                goto LAB_1801699a1;
              }
            }
            plVar51 = plVar43 + 6;
            if (plVar57 != plVar51) {
              if (0xf < (ulonglong)plVar43[9]) {
                plVar51 = (longlong *)*plVar51;
              }
              FUN_180113930(plVar57,plVar51,plVar43[8]);
            }
          }
LAB_1801699a1:
          if (local_bd0 == 0) {
LAB_180169a01:
            uVar30 = 0;
          }
          else {
            puVar45 = local_be0;
            if (0xf < local_bc8) {
              puVar45 = (undefined1 *)local_be0._0_8_;
            }
            sVar48 = plVar57[-0x16];
            plVar43 = plVar57 + -0x18;
            if (0xf < (ulonglong)plVar57[-0x15]) {
              plVar43 = (longlong *)plVar57[-0x18];
            }
            if ((sVar48 != local_bd0) ||
               ((sVar48 != 0 && (iVar32 = memcmp(plVar43,puVar45,sVar48), iVar32 != 0))))
            goto LAB_180169a01;
            uVar30 = 1;
          }
          *(undefined1 *)(plVar57 + 4) = uVar30;
          plVar43 = plVar57 + 0x15;
          plVar57 = plVar57 + 0x2d;
        } while (plVar43 != plVar37);
        uVar55 = (uint)local_d38;
      }
      FUN_18016da30(param_1,local_c58,1);
      if (local_a38 != 0) {
        lVar41 = local_a38;
        puVar45 = local_a48;
        if (0xf < local_a30) {
          puVar45 = (undefined1 *)local_a48._0_8_;
        }
        for (; lVar41 != 0; lVar41 = lVar41 + -1) {
          *puVar45 = 0;
          puVar45 = puVar45 + 1;
        }
      }
      local_a38 = 0;
      puVar45 = local_a48;
      if (0xf < local_a30) {
        puVar45 = (undefined1 *)local_a48._0_8_;
      }
      *puVar45 = 0;
      if (local_a18 != 0) {
        lVar41 = local_a18;
        puVar45 = local_a28;
        if (0xf < local_a10) {
          puVar45 = (undefined1 *)local_a28._0_8_;
        }
        for (; lVar41 != 0; lVar41 = lVar41 + -1) {
          *puVar45 = 0;
          puVar45 = puVar45 + 1;
        }
      }
      local_a18 = 0;
      puVar45 = local_a28;
      if (0xf < local_a10) {
        puVar45 = (undefined1 *)local_a28._0_8_;
      }
      *puVar45 = 0;
      if (local_9f8 != 0) {
        lVar41 = local_9f8;
        puVar45 = local_a08;
        if (0xf < local_9f0) {
          puVar45 = (undefined1 *)local_a08._0_8_;
        }
        for (; lVar41 != 0; lVar41 = lVar41 + -1) {
          *puVar45 = 0;
          puVar45 = puVar45 + 1;
        }
      }
      local_9f8 = 0;
      puVar45 = local_a08;
      if (0xf < local_9f0) {
        puVar45 = (undefined1 *)local_a08._0_8_;
      }
      *puVar45 = 0;
      if (local_9d8 != 0) {
        lVar41 = local_9d8;
        puVar45 = local_9e8;
        if (0xf < local_9d0) {
          puVar45 = (undefined1 *)local_9e8._0_8_;
        }
        for (; lVar41 != 0; lVar41 = lVar41 + -1) {
          *puVar45 = 0;
          puVar45 = puVar45 + 1;
        }
      }
      local_9d8 = 0;
      puVar45 = local_9e8;
      if (0xf < local_9d0) {
        puVar45 = (undefined1 *)local_9e8._0_8_;
      }
      *puVar45 = 0;
      if (local_9b8 != 0) {
        sVar48 = local_9b8;
        puVar45 = local_9c8;
        if (0xf < local_9b0) {
          puVar45 = (undefined1 *)local_9c8._0_8_;
        }
        for (; sVar48 != 0; sVar48 = sVar48 - 1) {
          *puVar45 = 0;
          puVar45 = puVar45 + 1;
        }
      }
      local_9b8 = 0;
      puVar45 = local_9c8;
      if (0xf < local_9b0) {
        puVar45 = (undefined1 *)local_9c8._0_8_;
      }
      *puVar45 = 0;
      if (local_998 != 0) {
        lVar41 = local_998;
        puVar45 = local_9a8;
        if (0xf < local_990) {
          puVar45 = (undefined1 *)local_9a8._0_8_;
        }
        for (; lVar41 != 0; lVar41 = lVar41 + -1) {
          *puVar45 = 0;
          puVar45 = puVar45 + 1;
        }
      }
      local_998 = 0;
      puVar45 = local_9a8;
      if (0xf < local_990) {
        puVar45 = (undefined1 *)local_9a8._0_8_;
      }
      *puVar45 = 0;
      plVar37 = param_1 + 0x5b;
      lVar41 = param_1[0x5d];
      if (lVar41 != 0) {
        plVar57 = plVar37;
        if (0xf < (ulonglong)param_1[0x5e]) {
          plVar57 = (longlong *)*plVar37;
        }
        for (; lVar41 != 0; lVar41 = lVar41 + -1) {
          *(undefined1 *)plVar57 = 0;
          plVar57 = (longlong *)((longlong)plVar57 + 1);
        }
      }
      param_1[0x5d] = 0;
      if (0xf < (ulonglong)param_1[0x5e]) {
        plVar37 = (longlong *)*plVar37;
      }
      *(undefined1 *)plVar37 = 0;
      plVar37 = param_1 + 0x5f;
      lVar41 = param_1[0x61];
      if (lVar41 != 0) {
        plVar57 = plVar37;
        if (0xf < (ulonglong)param_1[0x62]) {
          plVar57 = (longlong *)*plVar37;
        }
        for (; lVar41 != 0; lVar41 = lVar41 + -1) {
          *(undefined1 *)plVar57 = 0;
          plVar57 = (longlong *)((longlong)plVar57 + 1);
        }
      }
      param_1[0x61] = 0;
      if (0xf < (ulonglong)param_1[0x62]) {
        plVar37 = (longlong *)*plVar37;
      }
      *(undefined1 *)plVar37 = 0;
      plVar37 = param_1 + 99;
      lVar41 = param_1[0x65];
      if (lVar41 != 0) {
        plVar57 = plVar37;
        if (0xf < (ulonglong)param_1[0x66]) {
          plVar57 = (longlong *)*plVar37;
        }
        for (; lVar41 != 0; lVar41 = lVar41 + -1) {
          *(undefined1 *)plVar57 = 0;
          plVar57 = (longlong *)((longlong)plVar57 + 1);
        }
      }
      param_1[0x65] = 0;
      if (0xf < (ulonglong)param_1[0x66]) {
        plVar37 = (longlong *)*plVar37;
      }
      *(undefined1 *)plVar37 = 0;
      plVar37 = param_1 + 0x67;
      lVar41 = param_1[0x69];
      if (lVar41 != 0) {
        plVar57 = plVar37;
        if (0xf < (ulonglong)param_1[0x6a]) {
          plVar57 = (longlong *)*plVar37;
        }
        for (; lVar41 != 0; lVar41 = lVar41 + -1) {
          *(undefined1 *)plVar57 = 0;
          plVar57 = (longlong *)((longlong)plVar57 + 1);
        }
      }
      param_1[0x69] = 0;
      if (0xf < (ulonglong)param_1[0x6a]) {
        plVar37 = (longlong *)*plVar37;
      }
      *(undefined1 *)plVar37 = 0;
      plVar37 = param_1 + 0x6b;
      lVar41 = param_1[0x6d];
      if (lVar41 != 0) {
        plVar57 = plVar37;
        if (0xf < (ulonglong)param_1[0x6e]) {
          plVar57 = (longlong *)*plVar37;
        }
        for (; lVar41 != 0; lVar41 = lVar41 + -1) {
          *(undefined1 *)plVar57 = 0;
          plVar57 = (longlong *)((longlong)plVar57 + 1);
        }
      }
      param_1[0x6d] = 0;
      if (0xf < (ulonglong)param_1[0x6e]) {
        plVar37 = (longlong *)*plVar37;
      }
      *(undefined1 *)plVar37 = 0;
      plVar37 = param_1 + 0x6f;
      lVar41 = param_1[0x71];
      if (lVar41 != 0) {
        plVar57 = plVar37;
        if (0xf < (ulonglong)param_1[0x72]) {
          plVar57 = (longlong *)*plVar37;
        }
        for (; lVar41 != 0; lVar41 = lVar41 + -1) {
          *(undefined1 *)plVar57 = 0;
          plVar57 = (longlong *)((longlong)plVar57 + 1);
        }
      }
      param_1[0x71] = 0;
      if (0xf < (ulonglong)param_1[0x72]) {
        plVar37 = (longlong *)*plVar37;
      }
      *(undefined1 *)plVar37 = 0;
      plVar37 = param_1 + 5;
      if (plVar37 != (longlong *)local_c58) {
        FUN_180111850(plVar37);
        *plVar37 = local_c58._0_8_;
        param_1[6] = local_c58._8_8_;
        param_1[7] = local_c48;
        local_c58 = (undefined1  [16])0x0;
        local_c48 = 0;
      }
      FUN_18016a6c0(param_1 + 0x47,local_ae8);
      bVar2 = local_d78[0];
      if (local_d78[0] == 0) {
        local_ce0 = (undefined1  [16])0x0;
        local_cd0 = (undefined1  [16])0x0;
        FUN_18015ba30(local_ce0,&PTR_180700558,0);
        plVar37 = (longlong *)local_ce0;
        uVar55 = uVar55 | 0x200;
      }
      else {
        if (0x7fffffffffffffffU - param_1[0x4d] < 0xb) {
                    /* WARNING: Subroutine does not return */
          FUN_18015bb70();
        }
        FUN_18015a9c0(local_cc0);
        plVar37 = local_cc0;
        uVar55 = uVar55 | 0x500;
      }
      plVar57 = param_1 + 0x74;
      if (plVar57 != plVar37) {
        FUN_18015c010(plVar57);
        lVar41 = plVar37[1];
        lVar53 = plVar37[2];
        lVar4 = plVar37[3];
        *plVar57 = *plVar37;
        param_1[0x75] = lVar41;
        param_1[0x76] = lVar53;
        param_1[0x77] = lVar4;
        plVar37[2] = 0;
        plVar37[3] = 0xf;
        *(undefined1 *)plVar37 = 0;
      }
      if ((uVar55 >> 9 & 1) != 0) {
        uVar55 = uVar55 & 0xfffffdff;
        FUN_18015c010(local_ce0);
      }
      if ((uVar55 >> 8 & 1) != 0) {
        FUN_18015c010(local_cc0);
      }
      if (bVar2 != 0) {
        if (param_1[0xa7] < local_b58) {
          lVar41 = _Xtime_get_ticks();
          local_d68 = (char *)0x3c;
          local_d38 = (char *)0x0;
          lVar41 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(lVar41),8) + lVar41;
          local_d70 = (char *)(local_b58 - ((lVar41 >> 0x17) - (lVar41 >> 0x3f)));
          ppcVar49 = (char **)&local_d38;
          if (-1 < (longlong)local_d70) {
            ppcVar49 = (char **)&local_d70;
          }
          ppcVar44 = &local_d68;
          if ((longlong)local_d70 < 0x3d) {
            ppcVar44 = ppcVar49;
          }
          param_1[0xa8] = (longlong)*ppcVar44 * 1000 + local_cf8;
        }
        param_1[0xa7] = local_b58;
      }
      uVar34 = 0;
      if (bVar2 != 0) {
        uVar34 = local_d58._0_4_;
      }
      *(undefined4 *)(param_1 + 0xa9) = uVar34;
      if (param_1 + 0x78 != (longlong *)local_be0) {
        puVar45 = local_be0;
        if (0xf < local_bc8) {
          puVar45 = (undefined1 *)local_be0._0_8_;
        }
        FUN_180113930(param_1 + 0x78,puVar45,local_bd0);
      }
      param_1[0xa2] = local_d00;
      param_1[0xa3] = local_d28;
      *(undefined1 *)((longlong)param_1 + 0x54c) = 1;
      pcVar52 = "Internal cloud library connected.";
      if (param_1[5] == param_1[6]) {
        pcVar52 = "No configs found.";
      }
      lVar41 = -1;
      do {
        lVar41 = lVar41 + 1;
      } while (pcVar52[lVar41] != '\0');
      FUN_180113930(param_1 + 0x8c);
      FUN_180172d30(param_1);
      if (lStack_968 != 0) {
        FUN_18016df60(param_1,local_978,0);
      }
      FUN_180173120(param_1,local_cf8);
      FUN_18063ab10(local_648,0,0x600);
      FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                    "operation=%s configs=%zu identity_present=%s");
      FUN_1800f6900(1,local_648,"UserAPI","USER_DATA_SUCCESS");
      FUN_18063ab10(local_648,0,0x600);
      FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                    "operation=%s active=%s lifetime=%s lease_valid=%s");
      FUN_1800f6900((bVar2 ^ 1) + 1);
      FUN_18015c010(local_b50);
      FUN_18015c010(local_910);
      FUN_18015c010(local_958);
      FUN_18015c010(local_8f0);
      FUN_18015c010(local_8d0);
      if (plStack_bf0 != (longlong *)0x0) {
        plVar37 = plStack_bf0;
        puVar45 = local_c00;
        if (0xf < uStack_be8) {
          puVar45 = (undefined1 *)local_c00._0_8_;
        }
        for (; plVar37 != (longlong *)0x0; plVar37 = (longlong *)((longlong)plVar37 + -1)) {
          *puVar45 = 0;
          puVar45 = puVar45 + 1;
        }
      }
      plStack_bf0 = (longlong *)0x0;
      puVar45 = local_c00;
      if (0xf < uStack_be8) {
        puVar45 = (undefined1 *)local_c00._0_8_;
      }
      *puVar45 = 0;
      FUN_18015c010(local_c00);
      FUN_18015c010(local_c98);
      FUN_18015c010(local_9a8);
      FUN_18015c010(local_9c8);
      FUN_18015c010(local_9e8);
      FUN_18015c010(local_a08);
      FUN_18015c010(local_a28);
      FUN_18015c010(local_a48);
      FUN_18015c010(local_a68);
      FUN_18015c010(local_a88);
      FUN_18015c010(local_aa8);
      FUN_18015c010(local_ac8);
      FUN_18015c010(local_ae8);
      FUN_18015c010(local_978);
      FUN_18015c010(local_b78);
      FUN_18015c010(local_be0);
      FUN_180111850(local_c58);
      *(undefined ***)((longlong)local_738 + (longlong)*(int *)(local_738[0] + 4)) =
           std::basic_istringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
      *(int *)(local_760 + (longlong)*(int *)(local_738[0] + 4) + 0x24) =
           *(int *)(local_738[0] + 4) + -0x90;
      FUN_18017cb00(local_728);
      *(undefined ***)((longlong)local_738 + (longlong)*(int *)(local_738[0] + 4)) =
           std::basic_istream<char,std::char_traits<char>_>::vftable;
      *(int *)(local_760 + (longlong)*(int *)(local_738[0] + 4) + 0x24) =
           *(int *)(local_738[0] + 4) + -0x18;
      local_6a8[0] = std::ios_base::vftable;
      std::ios_base::_Ios_base_dtor((ios_base *)local_6a8);
      if (auStack_c30._0_8_ != 0) {
        lVar41 = auStack_c30._0_8_;
        puVar45 = local_c40;
        if (0xf < (ulonglong)auStack_c30._8_8_) {
          puVar45 = (undefined1 *)local_c40._0_8_;
        }
        for (; lVar41 != 0; lVar41 = lVar41 + -1) {
          *puVar45 = 0;
          puVar45 = puVar45 + 1;
        }
      }
      uVar36 = auStack_c30._8_8_;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = auStack_c30._8_8_;
      auStack_c30 = auVar26 << 0x40;
      puVar45 = local_c40;
      if (0xf < (ulonglong)uVar36) {
        puVar45 = (undefined1 *)local_c40._0_8_;
      }
      *puVar45 = 0;
      if (lStack_c68 != 0) {
        lVar41 = lStack_c68;
        puVar45 = local_c78;
        if (0xf < uStack_c60) {
          puVar45 = (undefined1 *)local_c78._0_8_;
        }
        for (; lVar41 != 0; lVar41 = lVar41 + -1) {
          *puVar45 = 0;
          puVar45 = puVar45 + 1;
        }
      }
      lStack_c68 = 0;
      puVar45 = local_c78;
      if (0xf < uStack_c60) {
        puVar45 = (undefined1 *)local_c78._0_8_;
      }
      *puVar45 = 0;
      FUN_18015c010(local_c40);
      FUN_18015c010(local_c78);
      FUN_18015b930(local_b30);
      FUN_18015b930(local_b10);
    }
  }
  FUN_18003ad90();
  *(undefined1 *)((longlong)param_1 + 0x54c) = 0;
  FUN_180113930(param_1 + 0x8c,"Waiting for the internal loader config bridge...",0x30);
LAB_180167c90:
  if (auStack_c30._0_8_ != 0) {
    lVar41 = auStack_c30._0_8_;
    puVar45 = local_c40;
    if (0xf < (ulonglong)auStack_c30._8_8_) {
      puVar45 = (undefined1 *)local_c40._0_8_;
    }
    for (; lVar41 != 0; lVar41 = lVar41 + -1) {
      *puVar45 = 0;
      puVar45 = puVar45 + 1;
    }
  }
  uVar36 = auStack_c30._8_8_;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = auStack_c30._8_8_;
  auStack_c30 = auVar7 << 0x40;
  puVar45 = local_c40;
  if (0xf < (ulonglong)uVar36) {
    puVar45 = (undefined1 *)local_c40._0_8_;
  }
  *puVar45 = 0;
  if (lStack_c68 != 0) {
    lVar41 = lStack_c68;
    puVar45 = local_c78;
    if (0xf < uStack_c60) {
      puVar45 = (undefined1 *)local_c78._0_8_;
    }
    for (; lVar41 != 0; lVar41 = lVar41 + -1) {
      *puVar45 = 0;
      puVar45 = puVar45 + 1;
    }
  }
  lStack_c68 = 0;
  puVar45 = local_c78;
  if (0xf < uStack_c60) {
    puVar45 = (undefined1 *)local_c78._0_8_;
  }
  *puVar45 = 0;
  FUN_18015c010(local_c40);
  FUN_18015c010(local_c78);
  FUN_18015b930(local_b30);
  FUN_18015b930(local_b10);
                    /* WARNING: Read-only address (ram,0x00018086d450) is written */
}



