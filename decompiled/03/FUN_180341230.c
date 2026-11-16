// FUN_180341230 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180341230 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180341230(undefined8 param_1,longlong param_2)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  float *pfVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char cVar15;
  char cVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  float *pfVar20;
  uint *puVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  int *piVar24;
  longlong lVar25;
  undefined1 (*pauVar26) [16];
  undefined4 *puVar27;
  ulonglong uVar28;
  float *pfVar29;
  undefined1 (*pauVar30) [16];
  int *piVar31;
  undefined1 (*pauVar32) [16];
  undefined1 (*pauVar33) [16];
  byte *pbVar34;
  byte bVar35;
  undefined8 *puVar36;
  longlong lVar37;
  ulonglong uVar38;
  longlong *plVar39;
  char *pcVar40;
  uint uVar41;
  char cVar42;
  byte bVar43;
  bool bVar44;
  bool bVar45;
  float fVar46;
  undefined4 uVar47;
  undefined4 uVar52;
  undefined4 uVar53;
  undefined1 auVar48 [16];
  undefined4 uVar54;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  undefined8 uVar63;
  undefined1 auVar59 [64];
  undefined1 auVar60 [64];
  undefined1 auVar61 [64];
  undefined1 auVar62 [64];
  undefined1 auVar64 [64];
  undefined1 auVar65 [64];
  undefined1 auVar66 [64];
  float fVar67;
  undefined1 auVar68 [64];
  undefined1 auVar69 [64];
  undefined1 auVar70 [64];
  undefined1 auStack_f38 [32];
  undefined8 local_f18;
  undefined8 local_f10;
  undefined8 local_f08;
  float **local_f00;
  float *local_ef8;
  undefined4 *local_ef0;
  longlong *local_ee8;
  float **local_ee0;
  float **local_ed8;
  char **local_ed0;
  undefined8 *local_ec8;
  float **local_ec0;
  float **local_eb8;
  float **local_eb0;
  float *local_ea8 [2];
  char *local_e98;
  undefined8 local_e90;
  char local_e88;
  undefined1 local_e87;
  undefined1 local_e86;
  char local_e85;
  byte local_e84;
  undefined8 local_e78;
  undefined8 uStack_e70;
  float *local_e58;
  longlong local_e50;
  longlong local_e38;
  longlong local_e30;
  undefined8 uStack_e28;
  longlong local_e20;
  char *local_e18;
  longlong local_e10;
  undefined1 local_e08 [12];
  uint uStack_dfc;
  undefined1 *puStack_df8;
  undefined8 uStack_df0;
  float *local_de8;
  int *piStack_de0;
  undefined4 *puStack_dd8;
  undefined8 uStack_dd0;
  undefined8 local_dc8;
  undefined8 uStack_dc0;
  undefined8 uStack_db8;
  undefined8 uStack_db0;
  undefined8 local_da8;
  undefined8 uStack_da0;
  undefined8 uStack_d98;
  undefined8 uStack_d90;
  undefined8 local_d88;
  undefined8 uStack_d80;
  undefined8 uStack_d78;
  undefined8 uStack_d70;
  undefined8 local_d68;
  undefined8 uStack_d60;
  undefined8 uStack_d58;
  undefined8 uStack_d50;
  undefined8 local_d48;
  undefined8 uStack_d40;
  undefined8 local_d38;
  undefined8 uStack_d30;
  undefined8 *local_d28;
  undefined1 local_d20 [8];
  longlong local_d18;
  float *local_cf0;
  char local_ce8;
  char local_ce7;
  char local_ce6;
  char local_ce5 [5];
  float *local_ce0;
  float local_cd8;
  undefined8 local_cd4;
  float *local_cc8;
  char local_cc0;
  char local_cbf [7];
  float local_cb8;
  float local_cb4;
  float local_cb0;
  float *local_ca8;
  undefined1 (*local_ca0) [16];
  undefined1 (*local_c98) [16];
  longlong local_c88;
  float local_c80;
  float local_c7c;
  undefined1 local_c78 [8];
  undefined8 local_c70;
  float local_c68;
  float local_c64;
  float local_c60;
  float local_c5c;
  undefined1 local_c58 [8];
  float local_c50 [2];
  undefined8 local_c48;
  float local_c40;
  float local_c38;
  int local_c34 [3];
  undefined1 local_c28 [8];
  undefined8 uStack_c20;
  longlong lStack_c18;
  longlong lStack_c10;
  undefined1 *local_c08;
  longlong ***ppplStack_c00;
  float **ppfStack_bf8;
  float *pfStack_bf0;
  int *local_be8;
  undefined4 *puStack_be0;
  float **ppfStack_bd8;
  undefined8 uStack_bd0;
  undefined8 local_bc8;
  undefined8 uStack_bc0;
  undefined8 uStack_bb8;
  undefined8 uStack_bb0;
  undefined8 local_ba8;
  undefined8 uStack_ba0;
  undefined8 local_b98;
  undefined8 uStack_b90;
  undefined1 local_b88 [4];
  undefined1 auStack_b84 [4];
  undefined8 uStack_b80;
  undefined8 uStack_b78;
  undefined2 uStack_b70;
  undefined2 uStack_b6e;
  int iStack_b6c;
  undefined4 uStack_b68;
  uint uStack_b64;
  undefined8 uStack_b60;
  undefined1 auStack_b58 [16];
  undefined1 auStack_b48 [16];
  undefined1 local_b38 [16];
  undefined1 auStack_b28 [16];
  undefined1 local_b18 [16];
  undefined1 auStack_b08 [16];
  undefined1 local_af8 [16];
  undefined1 auStack_ae8 [16];
  undefined1 local_ad8 [16];
  ulonglong local_ac8;
  undefined8 uStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  undefined8 local_a88;
  undefined8 uStack_a80;
  undefined8 local_a78;
  undefined8 uStack_a70;
  undefined4 local_a48;
  float local_a44;
  undefined4 local_a40;
  undefined4 local_a3c;
  undefined8 local_a38;
  undefined4 local_a30;
  undefined8 local_a2c;
  undefined4 local_a24;
  undefined1 local_a20 [16];
  undefined8 local_a10;
  float *local_a08;
  float local_a00;
  float local_9fc;
  float local_9f8;
  undefined1 local_9f0 [16];
  undefined8 local_9e0;
  undefined8 local_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 local_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 local_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 local_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 local_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 local_8d8;
  undefined8 uStack_8d0;
  undefined8 local_8c8;
  undefined8 uStack_8c0;
  undefined1 local_898 [8];
  undefined1 local_890 [24];
  int local_878;
  float local_874;
  int local_868;
  undefined8 local_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  float fStack_848;
  undefined4 uStack_844;
  undefined4 local_840;
  undefined4 uStack_83c;
  undefined4 uStack_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined4 uStack_828;
  undefined4 uStack_824;
  undefined4 local_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 local_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined4 uStack_7e8;
  undefined4 uStack_7e4;
  undefined4 local_7e0;
  undefined4 uStack_7dc;
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  float fStack_7b4;
  float local_7a4;
  float local_7a0;
  undefined1 local_79c;
  char local_79b;
  undefined4 local_798;
  undefined4 local_794;
  char local_790;
  longlong **local_788;
  undefined1 *local_780;
  float *local_778;
  longlong *local_770;
  longlong *local_768;
  undefined8 **local_760;
  float *local_758;
  undefined8 *local_750;
  float *local_748;
  undefined1 *local_740;
  undefined8 *local_738;
  float *local_728;
  longlong local_720;
  longlong *local_718;
  undefined4 *local_710;
  undefined1 (**local_708) [16];
  longlong *local_6f8;
  undefined8 *local_6f0;
  undefined8 **local_6e8;
  undefined4 *local_6e0;
  undefined4 *local_6d8;
  undefined1 *local_6d0;
  float *local_6c8;
  undefined1 *local_6c0;
  undefined1 local_6b8 [40];
  float *local_690 [4];
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  float local_650 [2];
  float local_648 [36];
  undefined8 local_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  float local_598 [2];
  undefined8 uStack_590;
  ulonglong auStack_588 [3];
  ulonglong auStack_570 [18];
  int aiStack_4dc [145];
  float *local_298 [12];
  undefined8 local_238 [21];
  undefined1 local_18c [100];
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  float local_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_f38;
  DAT_180b900c0 = 0;
  DAT_180bbec89 = 0;
  DAT_180bda1d8 = 0;
  DAT_1808e3ac4 = 0x168;
  local_e20 = param_2;
  FUN_18017bf40(local_898);
  cVar16 = DAT_180cc8528;
  if (local_e20 == 0) {
    local_c88 = -1;
  }
  else {
    local_c88 = *(longlong *)(local_e20 + 8);
  }
  local_cbf[0] = DAT_180b900c1;
  local_e18 = (char *)CONCAT44(local_e18._4_4_,DAT_180b900f8);
  local_e88 = DAT_180cc8528;
  if ((local_e20 == 0) || (DAT_180cc8438 == '\0')) {
    FUN_18033de60();
    DAT_180b900c1 = '\0';
    DAT_180b900c2 = '\0';
    DAT_180b900c3 = 0;
    DAT_180b900c4 = '\0';
    _DAT_180b900c8 = _DAT_180b900c8 & 0xffffffff;
    DAT_180b90198._4_1_ = 0;
    DAT_180b900e8 = 0;
    DAT_180b900ec = 0;
    DAT_180b900f0 = 0;
    DAT_180b900c5 = '\0';
    goto LAB_180347b73;
  }
  local_ce7 = DAT_180cc84a0 == '\x01';
  local_e84 = DAT_180cc84b4;
  cVar42 = (DAT_180cc84b4 - 1 & 0xfd) == 0;
  local_ce5[0] = (byte)(DAT_180cc84b4 - 2) < 2;
  local_ce0._0_4_ = 0x43340000;
  auVar61 = ZEXT864(0);
  local_cc8 = (float *)((ulonglong)local_cc8 & 0xffffffff00000000);
  local_e85 = cVar42;
  pfVar20 = (float *)FUN_1800e75c0(&DAT_180cc84a4,&local_cc8,&local_ce0);
  fVar46 = 0.5;
  local_c64 = *pfVar20 * 0.5;
  local_ce0._0_4_ = auVar61._0_4_;
  pfVar20 = (float *)FUN_1801d6350(&local_ce0,&DAT_180cc84a8);
  local_c68 = *pfVar20;
  local_ce0._0_4_ = 0x42000000;
  local_cc8._0_4_ = auVar61._0_4_;
  puVar21 = (uint *)FUN_1800e75c0(&DAT_180cc84ac,&local_cc8,&local_ce0);
  auVar66 = ZEXT464(*puVar21);
  auVar65 = ZEXT464(0x417a0000);
  local_ce0 = (float *)CONCAT44(local_ce0._4_4_,0x417a0000);
  auVar70 = ZEXT464(0x3f800000);
  local_cc8 = (float *)CONCAT44(local_cc8._4_4_,0x3f800000);
  FUN_1801d6350(&local_cc8,&local_ce0);
  FUN_180180d50(&DAT_180bb8890,local_d20);
  local_d28 = (undefined8 *)FUN_180454860(local_e20 + 0x20);
  if ((local_d18 != 0) && (local_d28 != (undefined8 *)0x0)) {
    iVar17 = FUN_180347bf0(&local_e86);
    bVar43 = *(byte *)(iVar17 + local_d18);
    iVar17 = FUN_180347cf0(&local_e86);
    uVar41 = *(uint *)(iVar17 + local_d18);
    uVar18 = uVar41 & 2;
    local_cc0 = (char)uVar18;
    local_ce8 = uVar18 != 0;
    if (((bool)cVar42) || (uVar18 != 0)) {
      local_cc0 = '\x01';
    }
    iVar17 = FUN_180347df0(&local_e86);
    FUN_1802447f0(&local_cb8,iVar17 + local_d18);
    bVar35 = ~(byte)uVar41 & 1;
    cVar15 = FUN_18030ada0(&local_cb8);
    if (cVar15 != '\0') {
      iVar17 = FUN_180347ef0(&local_e86);
      local_e10 = *(longlong *)(iVar17 + local_d18);
      DAT_180bbec88 = 0;
      if (local_e10 == 0) {
LAB_180341601:
        fVar58 = 0.0;
      }
      else {
        puVar22 = (undefined8 *)FUN_18030a970(local_c28);
        _DAT_1808e3e00 = *puVar22;
        uRam00000001808e3e08 = puVar22[1];
        DAT_1808e3e10 = *(undefined4 *)(puVar22 + 2);
        DAT_180bbec88 = 1;
        if (local_e10 == 0) goto LAB_180341601;
        local_ce0 = (float *)CONCAT44(local_ce0._4_4_,auVar70._0_4_);
        local_cc8 = (float *)CONCAT44(local_cc8._4_4_,auVar61._0_4_);
        iVar17 = FUN_180347ff0(&local_e86);
        local_ca8 = (float *)CONCAT44(local_ca8._4_4_,*(undefined4 *)(iVar17 + local_e10));
        pfVar20 = (float *)FUN_1800e75c0(&local_ca8,&local_cc8,&local_ce0);
        fVar58 = *pfVar20;
      }
      iVar17 = FUN_1803480f0(&local_e86);
      fVar55 = *(float *)(iVar17 + local_d18);
      uVar23 = FUN_1803481f0(&local_e87);
      local_c80 = (float)FUN_180233fb0(uVar23);
      local_c80 = local_c80 * fVar55;
      cVar15 = FUN_1800e7540();
      if ((cVar15 == '\0') || (local_c80 < auVar70._0_4_)) {
        local_c80 = 800.0;
      }
      if ((bVar43 < 10) && ((0x281U >> (bVar43 & 0x1f) & 1) != 0)) {
        bVar44 = false;
      }
      else {
        bVar44 = true;
        if ((DAT_180b900c3 != 0) &&
           (cVar15 = FUN_18033cbb0(DAT_180b900f4,local_cb0,bVar35), cVar15 != '\0')) {
          if (cVar16 != '\0') {
            FUN_18033eee0(local_c88,1,"edgebug transition",&local_cb8);
          }
          FUN_18033d8f0();
          fVar55 = (float)FUN_180450df0(&local_cb8);
          local_ce0 = (float *)(double)fVar55;
          local_cc8 = (float *)(double)local_cb0;
          local_ca8 = (float *)(double)DAT_180b900f4;
          local_c28 = (undefined1  [8])0xdb35e39b27e1c185;
          uStack_c20 = 0xa05181ee77d57a06;
          lStack_c18 = -0x6d69ab4eb9e48c89;
          lStack_c10 = 0xa5cea54bfef7110;
          local_c08 = (undefined1 *)0xa70c9f7f916b7e19;
          ppplStack_c00 = (longlong ***)0x2b2d6d82aa402c0a;
          ppfStack_bf8 = (float **)0xc064ed9510bc010b;
          pfStack_bf0 = (float *)0xfec09918395f26c4;
          local_be8 = (int *)0x835e2313e2c48f8d;
          local_cf0 = (float *)0xf863c3261a551f0e;
          puStack_be0 = (undefined4 *)0xf863c3261a551f0e;
          stack0xfffffffffffff200 = 0x7d7b3d646d63205d;
          local_e08._0_8_ = 0x677562656764655b;
          puStack_df8 = (undefined1 *)0x3d746c7573657220;
          uStack_df0 = 0x7b3d7a7620746968;
          local_de8 = (float *)0x7b3e2d7d66322e3a;
          piStack_de0 = (int *)0x7073207d66322e3a;
          puStack_dd8 = (undefined4 *)0x322e3a7b3d646565;
          uStack_dd0 = 0x3d6b636f6c207d66;
          local_dc8 = 0xa7d7b;
          uStack_dc0 = 0;
          auVar61 = ZEXT1664(auVar61._0_16_);
          auVar65 = ZEXT1664(auVar65._0_16_);
          auVar66 = ZEXT1664(auVar66._0_16_);
          auVar70 = ZEXT1664(auVar70._0_16_);
          pauVar26 = (undefined1 (*) [16])FUN_18015b110(&local_e78,local_e08);
          _local_c28 = *pauVar26;
          local_f10 = (float *)local_cbf;
          local_f18 = (undefined1 (**) [16])&local_ce0;
          FUN_18034e0e0(local_c28,&local_c88,&local_ca8,&local_cc8);
          DAT_180b900c1 = '\0';
          DAT_180b900c2 = '\0';
          _DAT_180b900c8 = _DAT_180b900c8 & 0xffffffff;
          DAT_180b900c4 = DAT_180b900c5;
          DAT_180b900e0 = 0;
          DAT_180b900e4 = 0;
          DAT_180b900e8 = 0;
          DAT_180b900ec = 0;
          DAT_180b900f0 = 0;
        }
      }
      DAT_180b900f4 = local_cb0;
      DAT_180b900c3 = bVar35;
      if (bVar35 == 0) {
        if (DAT_180b900c2 != '\0') {
          local_e18 = "landed before the edge clip";
          if (DAT_180b900f0 == 1) {
            local_e18 = "prediction route was lost";
          }
          else if (DAT_180b900f0 == 2) {
            local_e18 = "predicted contact arrived late";
          }
          else if (DAT_180b900dc == 1) {
            if (DAT_180b900c4 == '\0') {
              local_e18 = "crouch command was scheduled too late";
            }
            else if (fVar58 < 0.12) {
              local_e18 = "crouch command did not engage";
            }
          }
          else if (DAT_180b900dc == 0) {
            local_e18 = "standing prediction did not clip the edge";
          }
          local_c28 = (undefined1  [8])0xdb35e39b27e1c185;
          uStack_c20 = 0xa05181ee77d57a06;
          lStack_c18 = -0x6d69ab4eb9e48c89;
          lStack_c10 = 0xa5cea54bfef7110;
          local_c08 = (undefined1 *)0xa70c9f7f916b7e19;
          local_e78 = (undefined1 *)0x2b2d6d82aa402c0a;
          ppplStack_c00 = (longlong ***)0x2b2d6d82aa402c0a;
          stack0xfffffffffffff200 = 0x7d7b3d646d63205d;
          local_e08._0_8_ = 0x677562656764655b;
          puStack_df8 = (undefined1 *)0x3d746c7573657220;
          uStack_df0 = 0x616572207373696d;
          local_de8 = (float *)0xa7d7b3d6e6f73;
          piStack_de0 = (int *)0x0;
          pauVar26 = (undefined1 (*) [16])FUN_18015b110(&local_e78,local_e08);
          _local_c28 = *pauVar26;
          FUN_18034e2a0(local_c28,&local_c88,&local_e18);
          if (cVar16 != '\0') {
            FUN_18033eee0(local_c88,0,local_e18,&local_cb8);
          }
        }
      }
      else if (bVar44) {
        if (((local_ce8 == '\0') || (DAT_180b90100 != '\0')) ||
           ((DAT_180b900c1 == '\0' && ((DAT_180b900c2 == '\0' && (DAT_180b900c4 == '\0')))))) {
          if (DAT_180b900c5 != '\0') goto LAB_180341b24;
        }
        else {
          DAT_180b900c5 = '\x01';
LAB_180341b24:
          DAT_180b900c4 = '\x01';
        }
        local_ce0._0_4_ = 0x80;
        local_cc8 = (float *)CONCAT44(local_cc8._4_4_,1);
        piVar24 = (int *)FUN_1800b0180(&DAT_180cc84b8,&local_cc8,&local_ce0);
        local_c34[0] = *piVar24;
        uVar23 = FUN_18015a9b0(local_c34,&DAT_180701e1c);
        local_ce0 = (float *)CONCAT44(local_ce0._4_4_,0x18);
        piVar24 = (int *)FUN_18015ab00(&local_ce0,uVar23);
        fVar55 = auVar66._0_4_;
        fVar58 = auVar65._0_4_;
        iVar17 = *piVar24;
        auVar59 = ZEXT464(0x3c800000);
        if (-60.0 < local_cb0) {
          auVar48._0_4_ = (local_cb0 - -60.0) / (local_c80 * 0.015625);
          auVar48._4_12_ = SUB6012((undefined1  [60])0x0,0);
          fVar58 = (float)FUN_1801d6420(auVar48._0_8_);
          local_ce0 = (float *)CONCAT44(local_ce0._4_4_,(int)fVar58);
          local_cc8 = (float *)((ulonglong)local_cc8 & 0xffffffff00000000);
          piVar24 = (int *)FUN_18015ab00(&local_cc8,&local_ce0);
          fVar55 = auVar66._0_4_;
          fVar58 = auVar65._0_4_;
          iVar19 = *piVar24;
        }
        else {
          iVar19 = 0;
        }
        if ((auVar61._0_4_ <= local_cb0) || (iVar17 < iVar19)) {
          DAT_180b900c1 = '\0';
          _DAT_180b900c8 = _DAT_180b900c8 & 0xffffffff;
          DAT_180b900e0 = 0;
          DAT_180b90198._4_1_ = 0;
        }
        else {
          if (DAT_180b900c1 == '\0') {
            if (0 < DAT_180b900e8) {
              DAT_180b900e8 = DAT_180b900e8 + -1;
              FUN_18034ba80(&DAT_180b900c0,local_e20);
              goto LAB_180347b73;
            }
          }
          else {
            if (DAT_180b900c8 < 1) {
              DAT_180b900ec = DAT_180b900ec + 1;
              if (fVar55 < (float)DAT_180b900ec * fVar58) {
                local_ce0 = (float *)(double)fVar55;
                local_cc8 = (float *)(double)((float)DAT_180b900ec * fVar58);
                local_c28 = (undefined1  [8])0xdb35e39b27e1c185;
                uStack_c20 = 0xa05181ee77d57a06;
                lStack_c18 = -0x6d69ab4eb9e48c89;
                lStack_c10 = 0xa5cea54bfef7110;
                local_c08 = (undefined1 *)0xa70c9f7f916b7e19;
                ppplStack_c00 = (longlong ***)0x2b2d6d82aa402c0a;
                ppfStack_bf8 = (float **)0xc064ed9510bc010b;
                pfStack_bf0 = (float *)0xfec09918395f26c4;
                local_be8 = (int *)0x835e2313e2c48f8d;
                puStack_be0 = (undefined4 *)0xf863c3261a551f0e;
                ppfStack_bd8 = (float **)0x56a0bc092c25563f;
                uStack_bd0 = 0x67ff882c0a9bdf38;
                local_bc8 = 0xe9fbbd57d9292e61;
                local_cf0 = (float *)0x24c1d5fafa9ec992;
                uStack_bc0 = 0x24c1d5fafa9ec992;
                stack0xfffffffffffff200 = 0x7d7b3d646d63205d;
                local_e08._0_8_ = 0x677562656764655b;
                puStack_df8 = (undefined1 *)0x3d746c7573657220;
                uStack_df0 = 0x72206b636f6c6e75;
                local_de8 = (float *)0x616d3d6e6f736165;
                piStack_de0 = (int *)0x2079616c65642d78;
                puStack_dd8 = (undefined4 *)0x7b3d73657373696d;
                uStack_dd0 = 0x657370616c65207d;
                local_dc8 = 0x2e3a7b3d736d5f64;
                uStack_dc0 = 0x5f78616d207d6632;
                uStack_db8 = 0x736d5f79616c6564;
                uStack_db0 = 0xa7d66312e3a7b3d;
                local_da8 = 0;
                uStack_da0 = 0;
                auVar59 = ZEXT1664(auVar59._0_16_);
                auVar61 = ZEXT1664(auVar61._0_16_);
                auVar70 = ZEXT1664(auVar70._0_16_);
                pauVar26 = (undefined1 (*) [16])FUN_18015b110(&local_e78,local_e08);
                _local_c28 = *pauVar26;
                local_f18 = (undefined1 (**) [16])&local_ce0;
                FUN_18034e430(local_c28,&local_c88,&DAT_180b900ec,&local_cc8);
                DAT_180b900c1 = '\0';
                _DAT_180b900c8 = _DAT_180b900c8 & 0xffffffff;
                DAT_180b900ec = 0;
                DAT_180b90198._4_1_ = 0;
                DAT_180b900f0 = 2;
                FUN_18034bb70(&DAT_180b900c0);
                if (local_e88 != '\0') {
                  FUN_18017ea60(&local_e78);
                  local_ee0 = (float **)0x1808036c8;
                  local_ee8 = (longlong *)CONCAT44(local_ee8._4_4_,auVar61._0_4_);
                  local_ef0 = (undefined4 *)CONCAT44(local_ef0._4_4_,auVar61._0_4_);
                  local_ef8 = (float *)((ulonglong)local_ef8 & 0xffffffff00000000);
                  local_f00 = (float **)((ulonglong)local_f00 & 0xffffffffffffff00);
                  local_f08 = &local_cb8;
                  local_f10 = (float *)&local_e78;
                  local_f18 = (undefined1 (**) [16])((ulonglong)local_f18 & 0xffffffffffffff00);
                  FUN_18033df00(local_c88,0,0,0);
                }
              }
            }
            else {
              _DAT_180b900c8 = CONCAT44(DAT_180b900cc,DAT_180b900c8 + -1);
            }
            if (0 < DAT_180b900cc) {
              _DAT_180b900c8 = CONCAT44(DAT_180b900cc + -1,DAT_180b900c8);
            }
            if (DAT_180b900c1 != '\0') {
              if (DAT_180b900dc == 1) {
                if (1 < DAT_180b900e0) {
                  DAT_180b900e0 = DAT_180b900e0 + -1;
                }
                if ((DAT_180b900e0 < 2) || (DAT_180b900c5 != '\0')) {
                  DAT_180b900c4 = '\x01';
                }
                else {
                  DAT_180b900c4 = '\0';
                }
              }
              if (0 < DAT_180b900e4) {
                DAT_180b900e4 = DAT_180b900e4 + -1;
                DAT_180b900c0 = 1;
                if (DAT_180b900c4 != '\0') {
                  DAT_180b900c5 = '\x01';
                }
                if (local_e88 != '\0') {
                  iVar17 = FUN_180348290(&local_e87);
                  lVar25 = *(longlong *)(iVar17 + local_d18);
                  iVar17 = FUN_180348390(&local_e86);
                  local_f10 = (float *)FUN_1802447f0(&local_e78,iVar17 + lVar25);
                  if ((DAT_180b900cc < 1) && (DAT_180b900d1 == '\0')) {
                    uVar23 = 0;
                  }
                  else {
                    uVar23 = 1;
                  }
                  local_ee0 = (float **)0x1808036f8;
                  local_ee8 = (longlong *)CONCAT44(local_ee8._4_4_,auVar61._0_4_);
                  local_ef0 = (undefined4 *)CONCAT44(local_ef0._4_4_,auVar61._0_4_);
                  local_ef8 = (float *)((ulonglong)local_ef8 & 0xffffffff00000000);
                  local_f00 = (float **)CONCAT71(local_f00._1_7_,1);
                  local_f08 = &local_cb8;
                  local_f18 = (undefined1 (**) [16])((ulonglong)local_f18 & 0xffffffffffffff00);
                  FUN_18033df00(local_c88,1,uVar23,_DAT_180b900c8 & 0xffffffff);
                }
                FUN_18034bb90(&DAT_180b900c0,local_e20);
                FUN_18034ba80(&DAT_180b900c0,local_e20);
                goto LAB_180347b73;
              }
            }
          }
          iVar17 = FUN_180348490(&local_e87);
          lVar25 = *(longlong *)(iVar17 + local_d18);
          if ((local_e10 != 0) && (lVar25 != 0)) {
            iVar17 = FUN_180348590(&local_e87);
            FUN_1802447f0(&local_c48,iVar17 + lVar25);
            cVar16 = FUN_18030ada0(&local_c48);
            if ((cVar16 != '\0') &&
               (lVar25 = FUN_1803032c0(local_d18,local_e10), *(char *)(lVar25 + 0x48) != '\0')) {
              puVar27 = (undefined4 *)(lVar25 + 0x30);
              uVar23 = FUN_180348690(&local_e87);
              local_c38 = (float)FUN_180233fb0(uVar23);
              cVar16 = FUN_1800e7540();
              if (((cVar16 == '\0') || (local_c38 < 0.1)) || (auVar70._0_4_ < local_c38)) {
                local_c38 = 0.7;
              }
              uVar23 = FUN_180348730(&local_e87);
              local_c58._4_4_ = FUN_180233fb0(uVar23);
              cVar16 = FUN_1800e7540();
              if ((cVar16 == '\0') || ((float)local_c58._4_4_ < auVar61._0_4_)) {
                local_c58._4_4_ = 12.0;
              }
              lVar25 = FUN_180234720(&DAT_180cc9330);
              if (*(char *)(lVar25 + 0x42) == '\0') {
                uVar23 = FUN_1803487d0(&local_e87);
                local_c58._0_4_ = FUN_180233fb0(uVar23);
              }
              else {
                local_c58._0_4_ = *(float *)(lVar25 + 0x38);
              }
              cVar16 = FUN_1800e7540();
              if ((cVar16 == '\0') || ((float)local_c58._0_4_ < auVar70._0_4_)) {
                local_c58._0_4_ = 250.0;
              }
              uVar23 = FUN_180348870(&local_e87);
              local_c5c = (float)FUN_180233fb0(uVar23);
              cVar16 = FUN_1800e7540();
              auVar65 = ZEXT464(0x41f00000);
              if ((cVar16 == '\0') || (local_c5c < auVar70._0_4_)) {
                local_c5c = 30.0;
              }
              lVar25 = FUN_180234710(&DAT_180b8e110);
              local_c60 = *(float *)(lVar25 + 0x44);
              cVar16 = FUN_1800e7540();
              if ((cVar16 == '\0') || (local_c60 <= auVar61._0_4_)) {
                local_c60 = auVar70._0_4_;
              }
              pfVar20 = (float *)FUN_18015a9b0(local_c34,&DAT_180701e1c);
              local_cd8 = *pfVar20;
              if (local_ce8 == '\0') {
                local_a24 = 0x42900000;
              }
              else {
                local_a24 = 0x42580000;
              }
              local_a30 = 0;
              local_a38 = 0xc1800000c1800000;
              local_a2c = 0x4180000041800000;
              fVar58 = (float)local_c34[0] * auVar59._0_4_;
              local_ce0 = (float *)CONCAT44(local_ce0._4_4_,
                                            (fVar46 * local_c80 * fVar58 * fVar58 -
                                            fVar58 * local_cb0) + 50.0);
              local_cc8 = (float *)CONCAT44(local_cc8._4_4_,0x42480000);
              pfVar20 = (float *)FUN_1801d6350(&local_cc8,&local_ce0);
              auVar66 = ZEXT464((uint)*pfVar20);
              local_a00 = (float)local_c48;
              local_9fc = local_c48._4_4_;
              local_9f8 = local_c40 - *pfVar20;
              local_f10 = (float *)local_e10;
              local_f18 = (undefined1 (**) [16])puVar27;
              puVar22 = (undefined8 *)FUN_18033d980(local_b88,&local_c48,&local_a00,&local_a38);
              lVar25 = 2;
              puVar36 = local_238;
              do {
                uVar23 = puVar22[1];
                *puVar36 = *puVar22;
                puVar36[1] = uVar23;
                uVar23 = puVar22[3];
                puVar36[2] = puVar22[2];
                puVar36[3] = uVar23;
                uVar23 = puVar22[5];
                puVar36[4] = puVar22[4];
                puVar36[5] = uVar23;
                uVar23 = puVar22[7];
                puVar36[6] = puVar22[6];
                puVar36[7] = uVar23;
                uVar23 = puVar22[9];
                puVar36[8] = puVar22[8];
                puVar36[9] = uVar23;
                uVar23 = puVar22[0xb];
                puVar36[10] = puVar22[10];
                puVar36[0xb] = uVar23;
                uVar23 = puVar22[0xd];
                puVar36[0xc] = puVar22[0xc];
                puVar36[0xd] = uVar23;
                puVar2 = puVar36 + 0x10;
                uVar23 = puVar22[0xf];
                puVar36[0xe] = puVar22[0xe];
                puVar36[0xf] = uVar23;
                puVar22 = puVar22 + 0x10;
                lVar25 = lVar25 + -1;
                puVar36 = puVar2;
              } while (lVar25 != 0);
              *puVar2 = *puVar22;
              cVar16 = FUN_18033fac0(local_238);
              auVar59 = ZEXT464(0x80000000);
              auVar68 = ZEXT464(0x40000000);
              if (cVar16 != '\0') {
                local_ce0 = (float *)CONCAT44(local_ce0._4_4_,auVar70._0_4_);
                local_cc8 = (float *)CONCAT44(local_cc8._4_4_,auVar61._0_4_);
                pfVar20 = (float *)FUN_1800e75c0(local_18c,&local_cc8,&local_ce0);
                fVar58 = (float)((uint)local_cb0 ^ auVar59._0_4_);
                auVar60 = ZEXT1664(CONCAT412(auVar59._12_4_,
                                             CONCAT48(auVar59._8_4_,(ulonglong)(uint)fVar58)));
                auVar64 = ZEXT464((uint)local_c80);
                fVar46 = auVar66._0_4_ * *pfVar20 * local_c80 * auVar68._0_4_ + fVar58 * fVar58;
                if (auVar61._0_4_ <= fVar46) {
                  if (fVar46 < 0.0) {
                    fVar46 = (float)FUN_18061e150(fVar46);
                    fVar55 = auVar64._0_4_;
                    fVar58 = auVar60._0_4_;
                  }
                  else {
                    fVar46 = SQRT(fVar46);
                    fVar55 = local_c80;
                  }
                  fVar55 = (fVar46 - fVar58) / fVar55;
                  if (auVar61._0_4_ < fVar55) {
                    local_ce0 = (float *)CONCAT44(local_ce0._4_4_,1);
                    fVar46 = (float)FUN_1801d6420(fVar55 * 64.0);
                    local_cc8 = (float *)CONCAT44(local_cc8._4_4_,(int)fVar46 + 0xc);
                    pfVar20 = (float *)FUN_1800b0180(&local_cc8,&local_ce0,&local_cd8);
                    local_cd8 = *pfVar20;
                  }
                }
              }
              local_e78 = (undefined1 *)CONCAT44(0x18,local_cd8);
              uStack_e70 = CONCAT44(uStack_e70._4_4_,iVar19 + 0xc);
              pauVar26 = (undefined1 (*) [16])
                         FUN_1800dff00(&local_e58,&local_e78,(longlong)&uStack_e70 + 4);
              _local_c28 = *pauVar26;
              local_cd8 = (float)FUN_18034e5d0(local_c28);
              pfVar20 = (float *)FUN_18015a9b0(&local_cd8,&DAT_180701e1c);
              fVar46 = *pfVar20;
              local_cd8 = fVar46;
              if (DAT_180b900c1 != '\0') {
                local_ca8 = (float *)CONCAT44(local_ca8._4_4_,1);
                local_ce0 = (float *)CONCAT44(local_ce0._4_4_,DAT_180b900c8 + 0xc);
                local_cc8 = (float *)CONCAT44(local_cc8._4_4_,8);
                uVar23 = FUN_18015ab00(&local_cc8,&local_ce0);
                uVar23 = FUN_18015a9b0(&local_cd8,uVar23);
                pfVar20 = (float *)FUN_1800b0180(uVar23,&local_ca8,&local_cd8);
                fVar46 = *pfVar20;
              }
              FUN_180113f10(&local_ca0,0x18);
              FUN_1801d7dc0(&local_ca0);
              FUN_18034fb20(&local_ca0,0xa0);
              fVar58 = (float)FUN_180450df0(&local_cb8);
              if (fVar58 <= 0.01) {
                lVar25 = FUN_180245020(&DAT_180b0dfb0);
                local_c7c = *(float *)(lVar25 + 4);
              }
              else {
                local_c7c = (float)FUN_180636c80(local_cb4,local_cb8);
                local_c7c = local_c7c * 57.295776;
              }
              lVar25 = FUN_180245020(&DAT_180b0dfb0);
              local_a3c = *(undefined4 *)(lVar25 + 4);
              FUN_1800ac940(local_690,0x20);
              local_f18 = &local_ca0;
              FUN_180348d30(local_690,&local_c7c,&DAT_180b900c0,&DAT_180cc81b0);
              local_ed8 = (float **)&local_c60;
              local_ee0 = (float **)&local_c5c;
              local_ee8 = (longlong *)local_c58;
              local_ef0 = (undefined4 *)(local_c58 + 4);
              local_ef8 = &local_c38;
              local_f00 = (float **)&local_c80;
              local_f08 = (float *)&local_e10;
              local_f18 = (undefined1 (**) [16])&local_cb8;
              local_f10 = (float *)puVar27;
              FUN_180348d50(local_298,&local_c7c,&local_ce8,&local_c48);
              local_cd4._0_4_ = 0.0;
              local_eb0 = local_690;
              local_eb8 = local_298;
              local_ec0 = (float **)&local_c60;
              local_ec8 = (undefined8 *)&local_c5c;
              local_ed0 = (char **)local_c58;
              local_ed8 = (float **)(local_c58 + 4);
              local_ee0 = (float **)&local_c80;
              local_ee8 = &local_e10;
              local_ef8 = &local_cb8;
              local_f00 = (float **)&local_c48;
              local_f08 = (float *)&local_cd4;
              local_f10 = (float *)local_ce5;
              local_f18 = (undefined1 (**) [16])&local_c64;
              local_ef0 = puVar27;
              FUN_180349410(local_648,&local_ce7,&local_c7c,&local_a3c);
              FUN_180113f10(local_890,0x18);
              FUN_1801d7dc0(local_890);
              FUN_18034f9c0(local_890,0x20);
              local_f10 = local_648;
              local_f18 = (undefined1 (**) [16])&local_cd4;
              FUN_180193710(local_6b8,&local_ce7,(longlong)&local_cd4 + 4);
              bVar43 = DAT_180b900c1 == '\0';
              if (DAT_180b900c1 != '\0') {
                local_cd4._0_4_ = 3.92364e-44;
                auVar66._0_8_ = FUN_180244aa0(DAT_180b900f8 - local_c7c);
                iVar17 = DAT_180b900dc;
                auVar66._8_56_ = extraout_var;
                auVar66 = ZEXT1664(auVar66._0_16_);
                local_ce0._0_4_ = 1;
                puVar27 = (undefined4 *)FUN_18015ab00(&local_ce0,&DAT_180b900e0);
                uVar47 = *puVar27;
                local_ce0 = (float *)CONCAT44(local_ce0._4_4_,uVar47);
                _local_e08 = _DAT_18086ede0;
                local_de8 = (float *)CONCAT44(local_de8._4_4_,auVar70._0_4_);
                auVar61 = ZEXT1664(auVar61._0_16_);
                auVar66 = ZEXT1664(auVar66._0_16_);
                auVar65 = ZEXT1664(auVar65._0_16_);
                auVar59 = ZEXT1664(auVar59._0_16_);
                auVar68 = ZEXT1664(auVar68._0_16_);
                auVar70 = ZEXT1664(auVar70._0_16_);
                FUN_18063ab10(local_b88,0,0xd8);
                FUN_18034e5e0(local_b88,9);
                uVar23 = FUN_180244aa0(DAT_180b900fc - local_c7c);
                uVar38 = 0;
                lVar25 = FUN_18034f9b0(local_e08);
                if (lVar25 != 0) {
                  do {
                    uVar52 = DAT_180b900cc;
                    pfVar20 = (float *)FUN_18034f990(local_e08,uVar38);
                    local_f00 = (float **)CONCAT44(local_f00._4_4_,uVar52);
                    local_f08 = (float *)CONCAT44(local_f08._4_4_,(int)uVar23);
                    local_f10 = (float *)CONCAT44(local_f10._4_4_,fVar46);
                    local_f18 = (undefined1 (**) [16])CONCAT44(local_f18._4_4_,uVar47);
                    pauVar26 = (undefined1 (*) [16])
                               FUN_180348db0(local_648,local_c28,iVar17,auVar66._0_4_ + *pfVar20);
                    auVar64 = ZEXT1664(*pauVar26);
                    auVar60 = ZEXT864(*(ulonglong *)pauVar26[1]);
                    pauVar26 = (undefined1 (*) [16])FUN_18034f980(local_b88,uVar38);
                    *pauVar26 = auVar64._0_16_;
                    *(longlong *)pauVar26[1] = auVar60._0_8_;
                    uVar38 = uVar38 + 1;
                    uVar28 = FUN_18034f9b0(local_e08);
                  } while (uVar38 < uVar28);
                }
                uVar38 = FUN_18034f9b0(local_b88);
                pfVar20 = local_ce0;
                if (1 < uVar38) {
                  uVar38 = 1;
                  do {
                    uVar47 = DAT_180b900cc;
                    pfVar29 = (float *)FUN_18034f980(local_b88,uVar38);
                    local_f18 = (undefined1 (**) [16])FUN_18034f980(local_b88,uVar38 - 1);
                    local_f00 = (float **)CONCAT44(local_f00._4_4_,uVar47);
                    local_f08 = (float *)CONCAT44(local_f08._4_4_,(int)uVar23);
                    local_f10 = pfVar29;
                    FUN_180349530(local_6b8,iVar17,(ulonglong)pfVar20 & 0xffffffff);
                    uVar38 = uVar38 + 1;
                    uVar28 = FUN_18034f9b0(local_b88);
                  } while (uVar38 < uVar28);
                }
                if (DAT_180b900dc == 0) {
                  puVar22 = (undefined8 *)FUN_18034fb00(&local_ca0,&local_e78);
                  uVar23 = *puVar22;
                  puVar22 = (undefined8 *)FUN_18034fb10(&local_ca0,&local_e58);
                  bVar43 = FUN_18034e610(*puVar22,uVar23,local_cd4._4_1_);
                }
                else {
                  puVar22 = (undefined8 *)FUN_18034fb00(&local_ca0,&local_e78);
                  uVar23 = *puVar22;
                  puVar22 = (undefined8 *)FUN_18034fb10(&local_ca0,&local_e58);
                  bVar43 = FUN_18034e640(*puVar22,uVar23,local_cd4._4_1_);
                }
                bVar43 = bVar43 ^ 1;
                cVar42 = local_e85;
              }
              cVar16 = local_ce8;
              auVar51 = auVar70._0_16_;
              auVar50 = auVar68._0_16_;
              auVar56 = auVar59._0_16_;
              auVar57 = auVar65._0_16_;
              auVar49 = auVar61._0_16_;
              pauVar26 = (undefined1 (*) [16])0x0;
              auVar66 = ZEXT1664(_DAT_18086dba0);
              auVar48 = _DAT_18086dba0;
              if (bVar43 != 0) {
                if (local_cb0 <= -60.0) {
                  local_ce0 = (float *)CONCAT44(local_ce0._4_4_,0x30);
                  pfVar20 = (float *)FUN_18015a9b0(&local_cd8,&local_ce0);
                  auVar51 = auVar70._0_16_;
                  auVar50 = auVar68._0_16_;
                  auVar56 = auVar59._0_16_;
                  auVar57 = auVar65._0_16_;
                  auVar48 = auVar66._0_16_;
                  auVar49 = auVar61._0_16_;
                  fVar46 = *pfVar20;
                }
                else {
                  fVar46 = local_cd8;
                }
                local_cc8 = (float *)CONCAT44(local_cc8._4_4_,fVar46);
                stack0xfffffffffffff200 = 0xc2340000c2700000;
                local_e08._0_8_ = 0xc2960000c2b40000;
                puStack_df8 = (undefined1 *)0xc1700000c1f00000;
                uStack_df0 = 0x4170000000000000;
                local_de8 = (float *)0x4234000041f00000;
                piStack_de0 = (int *)0x4296000042700000;
                puStack_dd8 = (undefined4 *)CONCAT44(puStack_dd8._4_4_,0x42b40000);
                bVar44 = local_ce8 != '\0';
                local_ce0 = (float *)CONCAT44(local_ce0._4_4_,(uint)bVar44);
                local_ca8 = (float *)CONCAT44(local_ca8._4_4_,0x22);
                auVar61 = ZEXT1664(auVar49);
                auVar65 = ZEXT1664(auVar48);
                auVar66 = ZEXT1664(auVar57);
                auVar70 = ZEXT1664(auVar56);
                auVar59 = ZEXT1664(auVar50);
                auVar68 = ZEXT1664(auVar51);
                pfVar20 = (float *)FUN_18015ab00(&local_cd4,&local_ca8);
                local_cd4._0_4_ = *pfVar20;
                FUN_18063ab10(&local_9d8,0,0x138);
                FUN_18034e5e0(&local_9d8,0xd);
                lVar25 = FUN_18034f9a0(local_e08);
                pauVar32 = pauVar26;
                if (lVar25 != 0) {
                  do {
                    puVar27 = (undefined4 *)FUN_18034f990(local_e08,pauVar32);
                    local_f00 = (float **)((ulonglong)local_f00 & 0xffffffff00000000);
                    local_f08 = (float *)CONCAT44(local_f08._4_4_,auVar61._0_4_);
                    local_f10 = (float *)CONCAT44(local_f10._4_4_,fVar46);
                    local_f18 = (undefined1 (**) [16])CONCAT44(local_f18._4_4_,1);
                    pauVar30 = (undefined1 (*) [16])
                               FUN_180348db0(local_648,&local_e78,bVar44,*puVar27);
                    auVar64 = ZEXT1664(*pauVar30);
                    auVar60 = ZEXT864(*(ulonglong *)pauVar30[1]);
                    pauVar30 = (undefined1 (*) [16])FUN_18034f980(&local_9d8,pauVar32);
                    *pauVar30 = auVar64._0_16_;
                    *(longlong *)pauVar30[1] = auVar60._0_8_;
                    pauVar32 = (undefined1 (*) [16])((longlong)*pauVar32 + 1);
                    pauVar30 = (undefined1 (*) [16])FUN_18034f9a0(local_e08);
                  } while (pauVar32 < pauVar30);
                }
                uVar38 = FUN_18034f9a0(local_e08);
                pfVar20 = local_ce0;
                if (1 < uVar38) {
                  uVar38 = 1;
                  do {
                    pfVar29 = (float *)FUN_18034f980(&local_9d8,uVar38);
                    local_f18 = (undefined1 (**) [16])FUN_18034f980(&local_9d8,uVar38 - 1);
                    local_f00 = (float **)((ulonglong)local_f00 & 0xffffffff00000000);
                    local_f08 = (float *)CONCAT44(local_f08._4_4_,auVar61._0_4_);
                    local_f10 = pfVar29;
                    FUN_180349530(local_6b8,(ulonglong)pfVar20 & 0xffffffff,1,fVar46);
                    uVar38 = uVar38 + 1;
                    uVar28 = FUN_18034f9a0(local_e08);
                  } while (uVar38 < uVar28);
                  cVar16 = local_ce8;
                }
                if ((local_ce8 == '\0') && (cVar42 != '\0')) {
                  local_ca8 = (float *)CONCAT44(local_ca8._4_4_,0x1a);
                  pfVar20 = (float *)FUN_18015ab00(&local_cd4,&local_ca8);
                  local_cd4._0_4_ = *pfVar20;
                  FUN_18063ab10(local_b88,0,0x138);
                  FUN_18034e5e0(local_b88,0xd);
                  lVar25 = FUN_18034f9a0(local_e08);
                  pauVar32 = pauVar26;
                  if (lVar25 != 0) {
                    do {
                      lVar25 = FUN_18034f980(&local_9d8,pauVar32);
                      if ((*(char *)(lVar25 + 0xb) == '\0') &&
                         ((pauVar32 == (undefined1 (*) [16])0x0 ||
                          (lVar25 = FUN_18034f980(&local_9d8,(longlong)pauVar32[-1] + 0xf),
                          *(char *)(lVar25 + 0xb) == '\0')))) {
                        uVar38 = (longlong)*pauVar32 + 1;
                        uVar28 = FUN_18034f9a0(local_e08);
                        if ((uVar38 < uVar28) &&
                           (lVar25 = FUN_18034f980(&local_9d8,uVar38),
                           *(char *)(lVar25 + 0xb) != '\0')) goto LAB_180343124;
                      }
                      else {
LAB_180343124:
                        puVar27 = (undefined4 *)FUN_18034f990(local_e08,pauVar32);
                        local_f00 = (float **)((ulonglong)local_f00 & 0xffffffff00000000);
                        local_f08 = (float *)CONCAT44(local_f08._4_4_,auVar61._0_4_);
                        local_f10 = (float *)CONCAT44(local_f10._4_4_,fVar46);
                        local_f18 = (undefined1 (**) [16])CONCAT44(local_f18._4_4_,1);
                        pauVar30 = (undefined1 (*) [16])
                                   FUN_180348db0(local_648,&local_e78,1,*puVar27);
                        auVar64 = ZEXT1664(*pauVar30);
                        auVar60 = ZEXT864(*(ulonglong *)pauVar30[1]);
                        pauVar30 = (undefined1 (*) [16])FUN_18034f980(local_b88,pauVar32);
                        *pauVar30 = auVar64._0_16_;
                        *(longlong *)pauVar30[1] = auVar60._0_8_;
                      }
                      pauVar32 = (undefined1 (*) [16])((longlong)*pauVar32 + 1);
                      pauVar30 = (undefined1 (*) [16])FUN_18034f9a0(local_e08);
                    } while (pauVar32 < pauVar30);
                  }
                  uVar38 = FUN_18034f9a0(local_e08);
                  if (1 < uVar38) {
                    uVar38 = 1;
                    do {
                      pfVar20 = (float *)FUN_18034f980(local_b88,uVar38);
                      local_f18 = (undefined1 (**) [16])FUN_18034f980(local_b88,uVar38 - 1);
                      local_f00 = (float **)((ulonglong)local_f00 & 0xffffffff00000000);
                      local_f08 = (float *)CONCAT44(local_f08._4_4_,auVar61._0_4_);
                      local_f10 = pfVar20;
                      FUN_180349530(local_6b8,1,1,fVar46);
                      uVar38 = uVar38 + 1;
                      uVar28 = FUN_18034f9a0(local_e08);
                    } while (uVar38 < uVar28);
                  }
                }
                puVar22 = (undefined8 *)FUN_18034fb00(&local_ca0,&local_e78);
                uVar23 = *puVar22;
                puVar22 = (undefined8 *)FUN_18034fb10(&local_ca0,&local_e58);
                FUN_18034e660(*puVar22,uVar23,cVar16);
                FUN_18063ab10(local_598,0,0x300);
                FUN_18034e6a0(local_598,4);
                local_c70 = (double)((ulonglong)local_c70._4_4_ << 0x20);
                pfVar20 = (float *)FUN_1800efea0(&local_ca0);
                local_cf0 = (float *)FUN_1800efe90(&local_ca0);
                auVar51 = auVar68._0_16_;
                auVar50 = auVar59._0_16_;
                auVar56 = auVar70._0_16_;
                auVar57 = auVar66._0_16_;
                auVar49 = auVar65._0_16_;
                auVar48 = auVar61._0_16_;
                pauVar32 = pauVar26;
                if (pfVar20 != local_cf0) {
                  auVar60 = ZEXT464(0x40800000);
                  pfVar20 = pfVar20 + 2;
                  pauVar30 = pauVar26;
                  do {
                    if (0 < (longlong)pauVar30) {
                      pfVar29 = local_598;
                      pauVar32 = pauVar26;
                      pauVar33 = pauVar26;
                      do {
                        if (*pfVar29 == pfVar20[-2]) {
                          auVar60 = ZEXT1664(auVar60._0_16_);
                          auVar61 = ZEXT1664(auVar61._0_16_);
                          auVar65 = ZEXT1664(auVar65._0_16_);
                          auVar66 = ZEXT1664(auVar66._0_16_);
                          auVar70 = ZEXT1664(auVar70._0_16_);
                          auVar59 = ZEXT1664(auVar59._0_16_);
                          auVar68 = ZEXT1664(auVar68._0_16_);
                          lVar25 = FUN_18034f970(local_598,(longlong)(int)pauVar32);
                          fVar46 = (float)FUN_1801c7700(*pfVar20 - *(float *)(lVar25 + 4));
                          if (fVar46 < auVar60._0_4_) {
                            pauVar32 = (undefined1 (*) [16])((ulonglong)local_c70 & 0xffffffff);
                            pauVar33 = pauVar30;
                            goto LAB_180343435;
                          }
                        }
                        pauVar32 = (undefined1 (*) [16])(ulonglong)((int)pauVar32 + 1);
                        pauVar33 = (undefined1 (*) [16])((longlong)*pauVar33 + 1);
                        pfVar29 = pfVar29 + 0x30;
                      } while ((longlong)pauVar33 < (longlong)pauVar30);
                    }
                    auVar51 = auVar68._0_16_;
                    auVar50 = auVar59._0_16_;
                    auVar56 = auVar70._0_16_;
                    auVar57 = auVar66._0_16_;
                    auVar49 = auVar65._0_16_;
                    auVar48 = auVar61._0_16_;
                    _local_b88 = CONCAT44(*pfVar20,pfVar20[-2]);
                    uStack_b80._0_4_ = (uint)pfVar20[2];
                    uStack_b80._4_4_ = 1.4013e-45;
                    if (1 < (int)pfVar20[5]) {
                      uStack_b80._4_4_ = pfVar20[5];
                    }
                    uStack_b78 = *(ulonglong *)(pfVar20 + 4);
                    uVar38 = *(ulonglong *)(pfVar20 + 6);
                    uVar28 = *(ulonglong *)(pfVar20 + 8);
                    uStack_b60 = *(ulonglong *)(pfVar20 + 10);
                    uStack_b70 = (undefined2)uVar38;
                    uStack_b6e = (undefined2)(uVar38 >> 0x10);
                    iStack_b6c = (int)(uVar38 >> 0x20);
                    uStack_b68 = (undefined4)uVar28;
                    uStack_b64 = (uint)(uVar28 >> 0x20);
                    auStack_b58 = *(undefined1 (*) [16])(pfVar20 + 0xc);
                    auStack_b48 = *(undefined1 (*) [16])(pfVar20 + 0x10);
                    auVar6 = auStack_b58;
                    auVar7 = auStack_b48;
                    local_b38 = *(undefined1 (*) [16])(pfVar20 + 0x14);
                    auStack_b28 = *(undefined1 (*) [16])(pfVar20 + 0x18);
                    auVar8 = local_b38;
                    auVar9 = auStack_b28;
                    local_b18 = *(undefined1 (*) [16])(pfVar20 + 0x1c);
                    auStack_b08 = *(undefined1 (*) [16])(pfVar20 + 0x20);
                    auVar10 = local_b18;
                    auVar11 = auStack_b08;
                    local_af8 = *(undefined1 (*) [16])(pfVar20 + 0x24);
                    auStack_ae8 = *(undefined1 (*) [16])(pfVar20 + 0x28);
                    auVar12 = local_af8;
                    auVar13 = auStack_ae8;
                    local_ad8 = *(undefined1 (*) [16])(pfVar20 + 0x2c);
                    auVar14 = local_ad8;
                    uVar41 = (int)local_c70 + 1;
                    pauVar32 = (undefined1 (*) [16])(ulonglong)uVar41;
                    local_c70 = (double)CONCAT44(local_c70._4_4_,uVar41);
                    pauVar33 = (undefined1 (*) [16])((longlong)*pauVar30 + 1);
                    *(undefined8 *)(local_598 + (longlong)pauVar30 * 0x30) = _local_b88;
                    *(undefined8 *)(local_598 + (longlong)pauVar30 * 0x30 + 2) = uStack_b80;
                    auStack_588[(longlong)pauVar30 * 0x18] = uStack_b78;
                    auStack_588[(longlong)pauVar30 * 0x18 + 1] = uVar38;
                    auStack_588[(longlong)pauVar30 * 0x18 + 2] = uVar28;
                    auStack_570[(longlong)pauVar30 * 0x18] = uStack_b60;
                    auStack_570[(longlong)pauVar30 * 0x18 + 1] = auStack_b58._0_8_;
                    auStack_570[(longlong)pauVar30 * 0x18 + 2] = auStack_b58._8_8_;
                    auStack_570[(longlong)pauVar30 * 0x18 + 3] = auStack_b48._0_8_;
                    auStack_570[(longlong)pauVar30 * 0x18 + 4] = auStack_b48._8_8_;
                    auStack_570[(longlong)pauVar30 * 0x18 + 5] = local_b38._0_8_;
                    auStack_570[(longlong)pauVar30 * 0x18 + 6] = local_b38._8_8_;
                    auStack_570[(longlong)pauVar30 * 0x18 + 7] = auStack_b28._0_8_;
                    auStack_570[(longlong)pauVar30 * 0x18 + 8] = auStack_b28._8_8_;
                    auStack_570[(longlong)pauVar30 * 0x18 + 9] = local_b18._0_8_;
                    auStack_570[(longlong)pauVar30 * 0x18 + 10] = local_b18._8_8_;
                    auStack_570[(longlong)pauVar30 * 0x18 + 0xb] = auStack_b08._0_8_;
                    auStack_570[(longlong)pauVar30 * 0x18 + 0xc] = auStack_b08._8_8_;
                    auStack_570[(longlong)pauVar30 * 0x18 + 0xd] = local_af8._0_8_;
                    auStack_570[(longlong)pauVar30 * 0x18 + 0xe] = local_af8._8_8_;
                    auStack_570[(longlong)pauVar30 * 0x18 + 0xf] = auStack_ae8._0_8_;
                    auStack_570[(longlong)pauVar30 * 0x18 + 0x10] = auStack_ae8._8_8_;
                    auStack_570[(longlong)pauVar30 * 0x18 + 0x11] = local_ad8._0_8_;
                    auStack_570[(longlong)pauVar30 * 0x18 + 0x12] = local_ad8._8_8_;
                    auStack_b58 = auVar6;
                    auStack_b48 = auVar7;
                    local_b38 = auVar8;
                    auStack_b28 = auVar9;
                    local_b18 = auVar10;
                    auStack_b08 = auVar11;
                    local_af8 = auVar12;
                    auStack_ae8 = auVar13;
                    local_ad8 = auVar14;
                    if (uVar41 == 4) break;
LAB_180343435:
                    auVar51 = auVar68._0_16_;
                    auVar50 = auVar59._0_16_;
                    auVar56 = auVar70._0_16_;
                    auVar57 = auVar66._0_16_;
                    auVar49 = auVar65._0_16_;
                    auVar48 = auVar61._0_16_;
                    pfVar29 = pfVar20 + 0x38;
                    pfVar20 = pfVar20 + 0x3a;
                    pauVar30 = pauVar33;
                  } while (pfVar29 != local_cf0);
                  cVar16 = local_ce8;
                }
                local_ca8 = (float *)CONCAT44(local_ca8._4_4_,0x2c);
                auVar61 = ZEXT1664(auVar48);
                auVar65 = ZEXT1664(auVar49);
                auVar66 = ZEXT1664(auVar57);
                auVar70 = ZEXT1664(auVar56);
                auVar59 = ZEXT1664(auVar50);
                auVar68 = ZEXT1664(auVar51);
                pfVar20 = (float *)FUN_18015ab00(&local_cd4,&local_ca8);
                local_cd4._0_4_ = *pfVar20;
                local_670 = 0xbf000000bf400000;
                uStack_668 = 0xbe19999abe99999a;
                uStack_660 = 0x3e99999a3e19999a;
                uStack_658 = 0x3f4000003f000000;
                _local_c28 = _DAT_18086d530;
                lStack_c18 = CONCAT44(lStack_c18._4_4_,2);
                iVar17 = (int)pauVar32;
                if (0 < iVar17) {
                  pfVar20 = local_598;
                  lVar25 = (longlong)iVar17;
                  do {
                    local_f00 = (float **)((ulonglong)local_f00 & 0xffffffff00000000);
                    local_f08 = (float *)CONCAT44(local_f08._4_4_,auVar61._0_4_);
                    local_f10 = (float *)CONCAT44(local_f10._4_4_,local_cd8);
                    local_f18 = (undefined1 (**) [16])CONCAT44(local_f18._4_4_,pfVar20[2]);
                    auVar61 = ZEXT1664(auVar61._0_16_);
                    auVar65 = ZEXT1664(auVar65._0_16_);
                    auVar66 = ZEXT1664(auVar66._0_16_);
                    auVar70 = ZEXT1664(auVar70._0_16_);
                    auVar59 = ZEXT1664(auVar59._0_16_);
                    auVar68 = ZEXT1664(auVar68._0_16_);
                    FUN_180348db0(local_648,&local_e78,*pfVar20);
                    if (local_ce7 != '\0') {
                      pfVar29 = (float *)&local_670;
                      do {
                        local_f00 = (float **)((ulonglong)local_f00 & 0xffffffff00000000);
                        local_f08 = (float *)CONCAT44(local_f08._4_4_,auVar61._0_4_);
                        local_f10 = (float *)CONCAT44(local_f10._4_4_,local_cd8);
                        local_f18 = (undefined1 (**) [16])CONCAT44(local_f18._4_4_,pfVar20[2]);
                        FUN_180348db0(local_648,&local_e78,*pfVar20,pfVar20[1] + *pfVar29);
                        pfVar29 = pfVar29 + 1;
                      } while (pfVar29 != local_650);
                      if ((((local_ce7 != '\0') && (*pfVar20 == 1.4013e-45)) && (local_ce8 == '\0'))
                         && (local_e85 != '\0')) {
                        piVar24 = (int *)FUN_1800ef4a0(local_c28);
                        piVar31 = (int *)FUN_1800f31d0(local_c28);
                        for (; piVar24 != piVar31; piVar24 = piVar24 + 1) {
                    /* WARNING: Read-only address (ram,0x00018086d530) is written */
                    /* WARNING: Read-only address (ram,0x00018086dba0) is written */
                    /* WARNING: Read-only address (ram,0x00018086ede0) is written */
                          fVar46 = (float)((int)pfVar20[3] - *piVar24);
                          if ((1 < (int)fVar46) && (fVar46 != pfVar20[2])) {
                            local_f00 = (float **)((ulonglong)local_f00 & 0xffffffff00000000);
                            local_f08._4_4_ = (undefined4)((ulonglong)local_f08 >> 0x20);
                            local_f08 = (float *)CONCAT44(local_f08._4_4_,auVar61._0_4_);
                            local_f10._4_4_ = (undefined4)((ulonglong)local_f10 >> 0x20);
                            local_f10 = (float *)CONCAT44(local_f10._4_4_,local_cd8);
                            local_f18._4_4_ = (undefined4)((ulonglong)local_f18 >> 0x20);
                            local_f18 = (undefined1 (**) [16])CONCAT44(local_f18._4_4_,fVar46);
                            FUN_180348db0(local_648,&local_e78,1,pfVar20[1]);
                          }
                        }
                      }
                    }
                    pfVar20 = pfVar20 + 0x30;
                    lVar25 = lVar25 + -1;
                  } while (lVar25 != 0);
                  cVar16 = local_ce8;
                }
                fVar46 = 3.36312e-44;
                if (local_e88 != '\0') {
                  fVar46 = 5.04467e-44;
                }
                if ((int)(float)local_cd4 < (int)fVar46) {
                  local_cd4._0_4_ = fVar46;
                }
                if (local_e88 == '\0') {
                  uVar47 = 8;
                  uVar52 = 0x10;
                  uVar53 = 0;
                  uVar54 = 0;
                }
                else {
                  uVar47 = 4;
                  uVar52 = 8;
                  uVar53 = 0x10;
                  uVar54 = 0x18;
                }
                local_e78 = (undefined1 *)CONCAT44(uVar52,uVar47);
                uStack_e70 = CONCAT44(uVar54,uVar53);
                local_ca8 = (float *)((ulonglong)local_ca8 & 0xffffffff00000000);
                pfVar20 = (float *)0x2;
                if (local_e88 != '\0') {
                  pfVar20 = (float *)0x4;
                }
                local_ea8[0] = pfVar20;
                if (local_ce7 != '\0') {
                  if (2 < iVar17) {
                    pauVar32 = (undefined1 (*) [16])0x2;
                  }
                  local_cf0 = (float *)CONCAT44(local_cf0._4_4_,(int)pauVar32);
                  piVar24 = (int *)((longlong)&uStack_590 + 4);
                  uVar23 = 0xc1700000c1f00000;
                  uVar63 = 0x40c00000c0c00000;
                  auVar60 = ZEXT464(0x41700000);
                  pauVar30 = pauVar26;
                  do {
                    if ((int)pauVar32 <= (int)pauVar30) break;
                    iVar17 = (int)pauVar30;
                    if (6 < *piVar24) {
                      pauVar32 = pauVar26;
                      do {
                        iVar17 = *(int *)(local_e08 + (longlong)pauVar32 * 4 + -0x70);
                        if (iVar17 < *piVar24 + -2) {
                          local_108 = uVar23;
                          uStack_100 = uVar63;
                          local_f8 = auVar60._0_4_;
                          local_f4 = auVar66._0_4_;
                          pfVar29 = (float *)&local_108;
                          do {
                            local_f00 = (float **)CONCAT44(local_f00._4_4_,iVar17);
                            local_f08 = (float *)CONCAT44(local_f08._4_4_,
                                                          (float)piVar24[-2] + *pfVar29);
                            local_f10 = (float *)CONCAT44(local_f10._4_4_,local_cd8);
                            local_f18 = (undefined1 (**) [16])CONCAT44(local_f18._4_4_,piVar24[-1]);
                            auVar60 = ZEXT1664(auVar60._0_16_);
                            auVar61 = ZEXT1664(auVar61._0_16_);
                            auVar65 = ZEXT1664(auVar65._0_16_);
                            auVar66 = ZEXT1664(auVar66._0_16_);
                            auVar70 = ZEXT1664(auVar70._0_16_);
                            auVar59 = ZEXT1664(auVar59._0_16_);
                            auVar68 = ZEXT1664(auVar68._0_16_);
                            FUN_180348db0(local_648,&local_e58,piVar24[-3]);
                            pfVar29 = pfVar29 + 1;
                          } while (pfVar29 != (float *)&local_f0);
                        }
                        pauVar32 = (undefined1 (*) [16])((longlong)*pauVar32 + 1);
                      } while ((longlong)pauVar32 < (longlong)pfVar20);
                      pauVar32 = (undefined1 (*) [16])((ulonglong)local_cf0 & 0xffffffff);
                      iVar17 = (int)local_ca8;
                    }
                    pauVar30 = (undefined1 (*) [16])(ulonglong)(iVar17 + 1U);
                    local_ca8 = (float *)CONCAT44(local_ca8._4_4_,iVar17 + 1U);
                    piVar24 = piVar24 + 0x30;
                  } while (local_ce7 != '\0');
                  cVar16 = local_ce8;
                  iVar17 = (int)local_c70;
                }
                if ((int)(float)local_cd4 < 0xc) {
                  local_cd4._0_4_ = 1.68156e-44;
                }
                if (local_ce7 != '\0') {
                  puVar22 = &uStack_590;
                  uVar23 = 0x40800000c0800000;
                  uVar63 = 0x41200000c1200000;
                  auVar66 = ZEXT464(0xc1c00000);
                  auVar60 = ZEXT464(0x41c00000);
                  pauVar32 = pauVar26;
                  do {
                    if (local_ce5[0] == '\0') break;
                    iVar19 = iVar17;
                    if (2 < iVar17) {
                      iVar19 = 2;
                    }
                    if (iVar19 <= (int)pauVar32) break;
                    if (10 < *(int *)((longlong)puVar22 + 4)) {
                      DAT_180bbeabf = 1;
                      local_120 = uVar23;
                      uStack_118 = uVar63;
                      local_110 = auVar66._0_4_;
                      local_10c = auVar60._0_4_;
                      puVar36 = &local_120;
                      do {
                        local_f00 = (float **)CONCAT44(local_f00._4_4_,8);
                        local_f08 = (float *)CONCAT44(local_f08._4_4_,*(undefined4 *)puVar36);
                        local_f10 = (float *)CONCAT44(local_f10._4_4_,local_cd8);
                        local_f18 = (undefined1 (**) [16])
                                    CONCAT44(local_f18._4_4_,*(undefined4 *)puVar22);
                        auVar66 = ZEXT1664(auVar66._0_16_);
                        auVar61 = ZEXT1664(auVar61._0_16_);
                        auVar65 = ZEXT1664(auVar65._0_16_);
                        auVar60 = ZEXT1664(auVar60._0_16_);
                        auVar70 = ZEXT1664(auVar70._0_16_);
                        auVar59 = ZEXT1664(auVar59._0_16_);
                        auVar68 = ZEXT1664(auVar68._0_16_);
                        FUN_180348db0(local_648,&local_e78,*(undefined4 *)(puVar22 + -1));
                        puVar36 = (undefined8 *)((longlong)puVar36 + 4);
                      } while (puVar36 != &local_108);
                      DAT_180bbeabf = 0;
                    }
                    pauVar32 = (undefined1 (*) [16])(ulonglong)((int)pauVar32 + 1);
                    puVar22 = puVar22 + 0x18;
                  } while (local_ce7 != '\0');
                }
                if (local_ce7 != '\0') {
                  uVar23 = 0x3fc0000000000000;
                  uVar63 = 0x40800000bfc00000;
                  fVar46 = 6.0;
                  auVar66 = ZEXT464(0xc0800000);
                  iVar17 = (int)local_c70;
                  pauVar32 = pauVar26;
                  pauVar30 = pauVar26;
                  do {
                    if (local_ce5[0] == '\0') break;
                    iVar19 = iVar17;
                    if (2 < iVar17) {
                      iVar19 = 2;
                    }
                    if (iVar19 <= (int)pauVar30) break;
                    puVar4 = local_e78;
                    if ((5 < *(int *)((longlong)&uStack_590 + (longlong)((longlong)*pauVar32 + 4)))
                       && (iVar19 = *(int *)((longlong)aiStack_4dc + (longlong)pauVar32), 0 < iVar19
                          )) {
                      local_e78 = *(undefined1 **)
                                   ((longlong)auStack_588 +
                                   (longlong)((longlong)pauVar32[1] + (longlong)iVar19 * 3 * 4));
                      auVar49._8_8_ = 0;
                      auVar49._0_8_ = local_e78;
                      uStack_e70 = CONCAT44(uStack_e70._4_4_,
                                            *(undefined4 *)
                                             ((longlong)auStack_570 +
                                             (longlong)
                                             ((longlong)*pauVar32 + (longlong)iVar19 * 3 * 4)));
                      auVar48 = vshufps_avx(auVar49,auVar49,0x55);
                      auVar70 = ZEXT1664(auVar48);
                      puVar4 = local_e78;
                      fVar55 = auVar48._0_4_ - local_c48._4_4_;
                      auVar49 = ZEXT416((uint)fVar55);
                      auVar59 = ZEXT464((uint)(float)local_e78);
                      fVar67 = (float)local_e78 - (float)local_c48;
                      auVar57 = ZEXT416((uint)fVar67);
                      fVar58 = fVar67 * fVar67 + fVar55 * fVar55;
                      if (fVar58 != auVar61._0_4_) {
                        local_e78 = puVar4;
                        if (fVar58 < 0.0) {
                          auVar68 = ZEXT464((uint)fVar55);
                          auVar70 = ZEXT1664(auVar48);
                          auVar61 = ZEXT1664(auVar61._0_16_);
                          auVar65 = ZEXT1664(auVar65._0_16_);
                          auVar59 = ZEXT464((uint)(float)local_e78);
                          auVar60 = ZEXT464((uint)fVar67);
                          auVar66 = ZEXT1664(auVar66._0_16_);
                          fVar58 = (float)FUN_18061e150();
                          auVar57 = auVar60._0_16_;
                          auVar49 = auVar68._0_16_;
                        }
                        else {
                          fVar58 = SQRT(fVar58);
                        }
                        puVar4 = local_e78;
                        if (fVar46 <= fVar58) {
                          auVar56._0_8_ =
                               CONCAT44(auVar49._4_4_,-auVar49._0_4_) ^ 0x8000000000000000;
                          auVar56._8_4_ = auVar49._8_4_ ^ 0x80000000;
                          auVar56._12_4_ = auVar49._12_4_ ^ 0x80000000;
                          auVar68 = ZEXT1664(CONCAT124(auVar56._4_12_,-auVar49._0_4_ / fVar58));
                          auVar60 = ZEXT1664(CONCAT124(auVar57._4_12_,auVar57._0_4_ / fVar58));
                          local_f0 = uVar23;
                          uStack_e8 = uVar63;
                          local_e0 = auVar66._0_4_;
                          pfVar20 = (float *)&local_f0;
                          auVar64 = ZEXT464(0x3d4ccccd);
                          auVar69 = ZEXT464(0x3f800000);
                          do {
                            fVar46 = *pfVar20;
                            _local_b88 = (undefined1  [16])0x0;
                            uStack_b78 = 0;
                            uStack_b70 = 0;
                            iStack_b6c = 0;
                            uStack_b68 = 0;
                            uStack_b64 = auVar61._0_4_;
                            uStack_b60 = CONCAT44(uStack_b64,uStack_b64);
                            auStack_b58 = (undefined1  [16])0x0;
                            auStack_b48 = ZEXT816(0);
                            local_b38 = (undefined1  [16])0x0;
                            auStack_b28 = auStack_b48;
                            local_b18 = (undefined1  [16])0x0;
                            auStack_b08 = auStack_b48;
                            local_af8 = (undefined1  [16])0x0;
                            auStack_ae8 = auStack_b48;
                            local_ad8 = (undefined1  [16])0x0;
                            local_ac8 = (ulonglong)uStack_b64;
                            uStack_ac0 = (uStack_ac0 >> 8 & 0xffffff) << 8;
                            uStack_ab8 = CONCAT44(uStack_b64,uStack_b64);
                            uStack_ab0 = uStack_ab0 & 0xffff000000000000;
                            local_aa8 = CONCAT44(uStack_b64,uStack_b64);
                            _auStack_b84 = SUB1612((undefined1  [16])0x0,4);
                            local_b88 = (undefined1  [4])
                                        *(undefined4 *)((longlong)local_598 + (longlong)pauVar32);
                            auVar48 = _local_b88;
                            uStack_b80._4_4_ = SUB164((undefined1  [16])0x0,0xc);
                            _local_b88 = auVar48._0_8_;
                            uStack_b80._0_4_ =
                                 *(undefined4 *)((longlong)(local_598 + 1) + (longlong)pauVar32);
                            auVar70 = ZEXT1664(auVar70._0_16_);
                            auVar61 = ZEXT1664(auVar61._0_16_);
                            auVar65 = ZEXT1664(auVar65._0_16_);
                            auVar59 = ZEXT1664(auVar59._0_16_);
                            auVar68 = ZEXT1664(auVar68._0_16_);
                            auVar60 = ZEXT1664(auVar60._0_16_);
                            auVar64 = ZEXT1664(auVar64._0_16_);
                            auVar69 = ZEXT1664(auVar69._0_16_);
                            auVar66 = ZEXT1664(auVar66._0_16_);
                            uVar47 = FUN_180244aa0();
                            auStack_b84 = (undefined1  [4])uVar47;
                            iVar19 = *(int *)((longlong)&uStack_590 +
                                             (longlong)((longlong)*pauVar32 + 4));
                            uStack_b80._4_4_ =
                                 ((float)((uint)fVar46 & auVar65._0_4_) * auVar64._0_4_ -
                                 auVar69._0_4_) + (float)iVar19 * 0.01;
                            uStack_b78._0_5_ =
                                 CONCAT14(1,*(undefined4 *)
                                             ((longlong)&uStack_590 + (longlong)pauVar32));
                            uVar23 = *(undefined8 *)((longlong)auStack_588 + (longlong)pauVar32);
                            uStack_b70 = (undefined2)uVar23;
                            uStack_b6e = (undefined2)((ulonglong)uVar23 >> 0x10);
                            iStack_b6c = (int)((ulonglong)uVar23 >> 0x20);
                            uStack_b68 = (undefined4)
                                         *(undefined8 *)
                                          ((longlong)(auStack_588 + 1) + (longlong)pauVar32);
                            uStack_b64 = (uint)((ulonglong)
                                                *(undefined8 *)
                                                 ((longlong)(auStack_588 + 1) + (longlong)pauVar32)
                                               >> 0x20);
                            uStack_b60 = *(ulonglong *)
                                          ((longlong)(auStack_588 + 2) + (longlong)pauVar32);
                            auStack_b58._0_8_ =
                                 *(undefined8 *)((longlong)auStack_570 + (longlong)pauVar32);
                            auStack_b58._8_8_ =
                                 *(undefined8 *)((longlong)(auStack_570 + 1) + (longlong)pauVar32);
                            auStack_b48._8_8_ =
                                 *(undefined8 *)((longlong)(auStack_570 + 3) + (longlong)pauVar32);
                            auStack_b48._0_8_ =
                                 *(undefined8 *)((longlong)(auStack_570 + 2) + (longlong)pauVar32);
                            local_b38._0_8_ =
                                 *(undefined8 *)((longlong)(auStack_570 + 4) + (longlong)pauVar32);
                            local_b38._8_8_ =
                                 *(undefined8 *)((longlong)(auStack_570 + 5) + (longlong)pauVar32);
                            auStack_b28._8_8_ =
                                 *(undefined8 *)((longlong)(auStack_570 + 7) + (longlong)pauVar32);
                            auStack_b28._0_8_ =
                                 *(undefined8 *)((longlong)(auStack_570 + 6) + (longlong)pauVar32);
                            local_b18._0_8_ =
                                 *(undefined8 *)((longlong)(auStack_570 + 8) + (longlong)pauVar32);
                            local_b18._8_8_ =
                                 *(undefined8 *)((longlong)(auStack_570 + 9) + (longlong)pauVar32);
                            auStack_b08._8_8_ =
                                 *(undefined8 *)((longlong)(auStack_570 + 0xb) + (longlong)pauVar32)
                            ;
                            auStack_b08._0_8_ =
                                 *(undefined8 *)((longlong)(auStack_570 + 10) + (longlong)pauVar32);
                            local_af8._0_8_ =
                                 *(undefined8 *)((longlong)(auStack_570 + 0xc) + (longlong)pauVar32)
                            ;
                            local_af8._8_8_ =
                                 *(undefined8 *)((longlong)(auStack_570 + 0xd) + (longlong)pauVar32)
                            ;
                            auStack_ae8._8_8_ =
                                 *(undefined8 *)((longlong)(auStack_570 + 0xf) + (longlong)pauVar32)
                            ;
                            auStack_ae8._0_8_ =
                                 *(undefined8 *)((longlong)(auStack_570 + 0xe) + (longlong)pauVar32)
                            ;
                            local_ad8._0_8_ =
                                 *(undefined8 *)
                                  ((longlong)(auStack_570 + 0x10) + (longlong)pauVar32);
                            local_ac8 = *(ulonglong *)
                                         (&stack0xfffffffffffffb20 + (longlong)pauVar32);
                            local_ad8._8_8_ =
                                 *(undefined8 *)
                                  ((longlong)(auStack_570 + 0x11) + (longlong)pauVar32);
                            uStack_ab0._0_6_ = CONCAT15(1,(undefined5)uStack_ab0);
                            local_aa8 = CONCAT44(auVar60._0_4_ * fVar46 + auVar70._0_4_,
                                                 auVar68._0_4_ * fVar46 + auVar59._0_4_);
                            uStack_ab8 = CONCAT44(uVar47,(undefined4)uStack_ab8);
                            auVar70 = ZEXT1664(auVar70._0_16_);
                            auVar61 = ZEXT1664(auVar61._0_16_);
                            auVar65 = ZEXT1664(auVar65._0_16_);
                            auVar59 = ZEXT1664(auVar59._0_16_);
                            auVar68 = ZEXT1664(auVar68._0_16_);
                            auVar60 = ZEXT1664(auVar60._0_16_);
                            auVar64 = ZEXT1664(auVar64._0_16_);
                            auVar69 = ZEXT1664(auVar69._0_16_);
                            auVar66 = ZEXT1664(auVar66._0_16_);
                            iStack_b6c = iVar19;
                            FUN_1803504a0(&local_ca0,local_b88);
                            pfVar20 = pfVar20 + 1;
                          } while (pfVar20 != &local_dc);
                          fVar46 = 6.0;
                          uVar23 = 0x3fc0000000000000;
                          uVar63 = 0x40800000bfc00000;
                          puVar4 = local_e78;
                        }
                      }
                    }
                    local_e78 = puVar4;
                    pauVar30 = (undefined1 (*) [16])(ulonglong)((int)pauVar30 + 1);
                    pauVar32 = pauVar32 + 0xc;
                  } while (local_ce7 != '\0');
                  auVar70 = ZEXT464(0x80000000);
                  auVar68 = ZEXT464(0x3f800000);
                  auVar59 = ZEXT464(0x40000000);
                  cVar16 = local_ce8;
                }
                pfVar20 = local_ce0;
                auVar51 = auVar68._0_16_;
                auVar50 = auVar59._0_16_;
                auVar56 = auVar70._0_16_;
                auVar48 = auVar65._0_16_;
                auVar49 = auVar61._0_16_;
                if ((int)local_c70 == 0) {
                  if ((int)local_cc8 < (int)local_cd8) {
                    if ((int)(float)local_cd4 < 0xe) {
                      local_cd4._0_4_ = 1.96182e-44;
                    }
                    iVar17 = -0x5a;
                    do {
                      local_f00 = (float **)((ulonglong)local_f00 & 0xffffffff00000000);
                      local_f08 = (float *)CONCAT44(local_f08._4_4_,auVar61._0_4_);
                      local_f10 = (float *)CONCAT44(local_f10._4_4_,local_cd8);
                      local_f18 = (undefined1 (**) [16])CONCAT44(local_f18._4_4_,1);
                      auVar61 = ZEXT1664(auVar61._0_16_);
                      auVar65 = ZEXT1664(auVar65._0_16_);
                      auVar70 = ZEXT1664(auVar70._0_16_);
                      auVar59 = ZEXT1664(auVar59._0_16_);
                      auVar68 = ZEXT1664(auVar68._0_16_);
                      FUN_180348db0(local_648,&local_e78,(ulonglong)pfVar20 & 0xffffffff);
                      auVar51 = auVar68._0_16_;
                      auVar50 = auVar59._0_16_;
                      auVar56 = auVar70._0_16_;
                      auVar48 = auVar65._0_16_;
                      auVar49 = auVar61._0_16_;
                      iVar17 = iVar17 + 0x1e;
                    } while (iVar17 < 0x5b);
                    cVar16 = local_ce8;
                  }
                }
              }
              auVar65 = ZEXT1664(auVar49);
              auVar66 = ZEXT1664(auVar48);
              auVar70 = ZEXT1664(auVar56);
              auVar59 = ZEXT1664(auVar50);
              auVar68 = ZEXT1664(auVar51);
              FUN_180350570(local_ea8,local_c98,&local_ca0);
              pfVar20 = local_ea8[0];
              FUN_180350570(&local_cf0,local_ca0,&local_ca0);
              FUN_18034e660(local_cf0,pfVar20,cVar16);
              local_a20 = (undefined1  [16])0x0;
              local_a10 = 0;
              FUN_1801d7dc0(local_a20);
              FUN_18034fb20(local_a20,((longlong)local_c98 - (longlong)local_ca0) / 0xe8);
              pauVar32 = local_c98;
              auVar61 = ZEXT464(0x3cf5c28f);
              if (local_ca0 != local_c98) {
                pfVar20 = (float *)((longlong)local_ca0[0xd] + 8);
                do {
                  uVar23 = local_a20._8_8_;
                  if (local_a20._0_8_ != local_a20._8_8_) {
                    pfVar29 = (float *)(local_a20._0_8_ + 0xd8);
                    do {
                      if ((((((pfVar20[-0x36] == pfVar29[-0x36]) &&
                             (pfVar20[-0x32] == pfVar29[-0x32])) && (*pfVar20 == *pfVar29)) &&
                           (((*(char *)(pfVar20 + 1) == *(char *)(pfVar29 + 1) &&
                             (*(char *)((longlong)pfVar20 + 5) == *(char *)((longlong)pfVar29 + 5)))
                            && ((*(char *)((longlong)pfVar20 + 5) == '\0' ||
                                ((float)((uint)(pfVar20[3] - pfVar29[3]) & auVar66._0_4_) +
                                 (float)((uint)(pfVar20[2] - pfVar29[2]) & auVar66._0_4_) < 0.05))))
                           )) && ((*pfVar20 == 0.0 ||
                                  (uVar41 = FUN_180244aa0(pfVar20[-1] - pfVar29[-1]),
                                  (float)(uVar41 & auVar66._0_4_) < auVar61._0_4_)))) &&
                         (uVar41 = FUN_180244aa0(pfVar20[-0x35] - pfVar29[-0x35]),
                         (float)(uVar41 & auVar66._0_4_) < auVar61._0_4_)) goto LAB_180343f6d;
                      pfVar3 = pfVar29 + 4;
                      pfVar29 = pfVar29 + 0x3a;
                    } while (pfVar3 != (float *)uVar23);
                  }
                  FUN_1803504a0(local_a20,pfVar20 + -0x36);
LAB_180343f6d:
                  pauVar30 = (undefined1 (*) [16])(pfVar20 + 4);
                  pfVar20 = pfVar20 + 0x3a;
                } while (pauVar30 != pauVar32);
              }
              FUN_18034fbf0(&local_ca0,local_a20);
              pauVar32 = local_c98;
              cVar42 = local_e88;
              pauVar30 = local_c98;
              if (local_ca0 != local_c98) {
                fVar46 = 1024.0;
                auVar60 = ZEXT464(0x3ee66666);
                pauVar33 = local_ca0;
                pfVar20 = (float *)((longlong)*local_ca0 + 0xc);
                do {
                  if (*(char *)((longlong)pfVar20 + 0xd1) == '\0') {
                    fVar58 = pfVar20[0x2e];
                    if (0 < (int)fVar58) {
                      puVar4 = *(undefined1 **)(pfVar20 + (longlong)(int)fVar58 * 3 + 7);
                      uStack_e70 = CONCAT44(uStack_e70._4_4_,pfVar20[(longlong)(int)fVar58 * 3 + 9])
                      ;
                      bVar43 = 0;
                      uVar41 = 0;
                      auVar48 = auVar65._0_16_;
                      auVar64 = ZEXT1664(auVar48);
                      auVar69 = ZEXT1664(auVar48);
                      if (pauVar33 != pauVar30) {
                        local_e78._4_4_ = (float)((ulonglong)puVar4 >> 0x20);
                        local_e78._0_4_ = SUB84(puVar4,0);
                        pcVar40 = (char *)((longlong)pauVar33[0xd] + 0xd);
                        uVar41 = 0;
                        do {
                          if ((((pfVar20[-3] == *(float *)(pcVar40 + -0xdd)) &&
                               (pfVar20[0x33] == *(float *)(pcVar40 + -5))) && (*pcVar40 == '\0'))
                             && (iVar17 = *(int *)(pcVar40 + -0x19), 0 < iVar17)) {
                            iVar19 = -((int)pfVar20[4] - *(int *)(pcVar40 + -0xc1));
                            if (iVar19 < 0) {
                              iVar19 = (int)pfVar20[4] - *(int *)(pcVar40 + -0xc1);
                            }
                            if (iVar19 < 3) {
                              fVar58 = *(float *)(pcVar40 + -0xd5) - pfVar20[-1];
                              fVar55 = (float)((uint)fVar58 & auVar66._0_4_);
                              if ((auVar61._0_4_ <= fVar55) && (fVar55 <= auVar59._0_4_)) {
                                local_e58 = *(float **)(pcVar40 + (longlong)iVar17 * 0xc + -0xb5);
                                auVar57._8_8_ = 0;
                                auVar57._0_8_ = local_e58;
                                local_e50 = CONCAT44(local_e50._4_4_,
                                                     *(undefined4 *)
                                                      (pcVar40 + (longlong)iVar17 * 0xc + -0xad));
                                fVar55 = (float)local_e78 - SUB84(local_e58,0);
                                auVar49 = vshufps_avx(auVar57,auVar57,0x55);
                                fVar67 = local_e78._4_4_ - auVar49._0_4_;
                                if (fVar67 * fVar67 + fVar55 * fVar55 <= fVar46) {
                                  fVar55 = auVar65._0_4_;
                                  bVar43 = bVar43 | fVar58 < fVar55;
                                  uVar41 = (uint)(byte)((byte)uVar41 | fVar55 < fVar58);
                                  if (fVar55 <= fVar58) {
                                    auVar50 = auVar48;
                                  }
                                  else {
                                    auVar50._0_4_ = (uint)fVar58 ^ auVar70._0_4_;
                                    auVar50._4_4_ = auVar70._4_4_;
                                    auVar50._8_4_ = auVar70._8_4_;
                                    auVar50._12_4_ = auVar70._12_4_;
                                  }
                                  auVar49 = vmaxss_avx(auVar50,auVar64._0_16_);
                                  auVar64 = ZEXT1664(auVar49);
                                  auVar49 = vmaxss_avx(ZEXT416((uint)fVar58),auVar48);
                                  auVar49 = vmaxss_avx(auVar49,auVar69._0_16_);
                                  auVar69 = ZEXT1664(auVar49);
                                }
                              }
                            }
                          }
                          pauVar33 = (undefined1 (*) [16])(pcVar40 + 0xb);
                          pcVar40 = pcVar40 + 0xe8;
                        } while (pauVar33 != pauVar30);
                      }
                      local_e78 = puVar4;
                      if (cVar42 == '\0') {
                        auVar49 = vpcmpeqd_avx(ZEXT416(uVar41),ZEXT416(0));
                        auVar49 = vblendvps_avx(auVar60._0_16_,auVar48,auVar49);
                        auVar57 = vpcmpeqd_avx(ZEXT116(bVar43),ZEXT416(0));
                        auVar48 = vblendvps_avx(auVar60._0_16_,auVar48,auVar57);
                        *pfVar20 = *pfVar20 - (auVar49._0_4_ + auVar48._0_4_);
                      }
                      else {
                        fVar58 = (float)FUN_18033c970(auVar69._0_4_ + auVar64._0_4_,pfVar20[0x33],
                                                      *(undefined1 *)((longlong)pfVar20 + 0xd1));
                        *pfVar20 = fVar58 + *pfVar20;
                      }
                      pauVar33 = local_ca0;
                      pauVar30 = local_c98;
                    }
                  }
                  pauVar1 = (undefined1 (*) [16])(pfVar20 + 0x37);
                  pfVar20 = pfVar20 + 0x3a;
                } while (pauVar1 != pauVar32);
              }
              FUN_180350570(local_ea8,pauVar30,&local_ca0);
              pfVar20 = local_ea8[0];
              FUN_180350570(&local_cf0,local_ca0,&local_ca0);
              FUN_18034e660(local_cf0,pfVar20,cVar16);
              local_a08 = (float *)0x0;
              FUN_180350570(local_ea8,local_c98,&local_ca0);
              pfVar20 = local_ea8[0];
              FUN_180350570(&local_cf0,local_ca0,&local_ca0);
              FUN_18034e750(&local_a08,local_cf0,pfVar20,local_cd4._4_1_);
              FUN_180350570(local_ea8,local_c98,&local_ca0);
              if (local_a08 != local_ea8[0]) {
                _DAT_180b90108 = *(undefined8 *)(local_a08 + 0xd);
                uRam0000000180b90110 = *(undefined8 *)(local_a08 + 0xf);
                uRam0000000180b90118 = *(undefined8 *)(local_a08 + 0x11);
                _DAT_180b90120 = *(undefined8 *)(local_a08 + 0x13);
                _DAT_180b90128 = *(undefined8 *)(local_a08 + 0x15);
                _DAT_180b90130 = *(undefined8 *)(local_a08 + 0x17);
                uRam0000000180b90138 = *(undefined8 *)(local_a08 + 0x19);
                _DAT_180b90140 = *(undefined8 *)(local_a08 + 0x1b);
                _DAT_180b90148 = *(undefined8 *)(local_a08 + 0x1d);
                uRam0000000180b90150 = *(undefined8 *)(local_a08 + 0x1f);
                uRam0000000180b90158 = *(undefined8 *)(local_a08 + 0x21);
                _DAT_180b90160 = *(undefined8 *)(local_a08 + 0x23);
                _DAT_180b90168 = *(undefined8 *)(local_a08 + 0x25);
                uRam0000000180b90170 = *(undefined8 *)(local_a08 + 0x27);
                uRam0000000180b90178 = *(undefined8 *)(local_a08 + 0x29);
                _DAT_180b90180 = *(undefined8 *)(local_a08 + 0x2b);
                _DAT_180b90188 = *(undefined8 *)(local_a08 + 0x2d);
                uRam0000000180b90190 = *(undefined8 *)(local_a08 + 0x2f);
                DAT_180b90198._0_4_ = local_a08[0x31];
                DAT_180b90198._4_1_ = 1;
              }
              local_5b8 = *(undefined8 *)(local_e20 + 0x58);
              uStack_5b0 = *(undefined8 *)(local_e20 + 0x60);
              uStack_5a8 = *(undefined8 *)(local_e20 + 0x68);
              uStack_5a0 = *(undefined8 *)(local_e20 + 0x70);
              local_a40 = *(undefined4 *)(local_d28 + 9);
              local_a48 = *(undefined4 *)((longlong)local_d28 + 0x4c);
              pauVar32 = pauVar26;
              if (local_d28[6] != 0) {
                pauVar32 = (undefined1 (*) [16])(local_d28[6] + 0x10);
              }
              local_c78[0] = pauVar32 != (undefined1 (*) [16])0x0;
              if (pauVar32 == (undefined1 (*) [16])0x0) {
                local_a44 = DAT_180b0dfc8._4_4_;
              }
              else {
                pfVar20 = (float *)&DAT_0000000c;
                if (local_d28[6] != 0) {
                  pfVar20 = (float *)(local_d28[6] + 0x1c);
                }
                local_a44 = *pfVar20;
              }
              local_9f0 = (undefined1  [16])0x0;
              local_9e0 = 0;
              auVar61 = ZEXT1664(auVar65._0_16_);
              auVar65 = ZEXT1664(auVar66._0_16_);
              auVar66 = ZEXT1664(auVar68._0_16_);
              FUN_1801d7dc0(local_9f0);
              FUN_180334790(local_9f0,(longlong)*(int *)(local_d28 + 2));
              if (0 < *(int *)(local_d28 + 2)) {
                pauVar32 = pauVar26;
                pauVar30 = pauVar26;
                puVar22 = local_d28;
                do {
                  lVar25 = *(longlong *)((longlong)*pauVar32 + puVar22[3] + 8);
                  pauVar33 = pauVar26;
                  if (lVar25 != 0) {
                    pauVar33 = (undefined1 (*) [16])(lVar25 + 0x10);
                  }
                  if (pauVar33 != (undefined1 (*) [16])0x0) {
                    FUN_180334c90(local_9f0);
                    puVar22 = local_d28;
                  }
                  uVar41 = (int)pauVar30 + 1;
                  pauVar30 = (undefined1 (*) [16])(ulonglong)uVar41;
                  pauVar32 = (undefined1 (*) [16])((longlong)*pauVar32 + 8);
                } while ((int)uVar41 < *(int *)(puVar22 + 2));
              }
              auVar56 = auVar66._0_16_;
              auVar49 = auVar65._0_16_;
              local_6f8 = &local_e20;
              local_6f0 = &local_5b8;
              local_6e8 = &local_d28;
              local_6e0 = &local_a40;
              local_6d8 = &local_a48;
              local_6d0 = local_c78;
              local_6c8 = &local_a44;
              local_6c0 = local_9f0;
              local_c50[0] = DAT_180b0dfc8._4_4_;
              local_788 = &local_6f8;
              local_780 = &DAT_180b900c0;
              local_778 = local_c50;
              local_770 = &local_e20;
              local_768 = &local_e10;
              local_760 = &local_d28;
              local_758 = &local_cb8;
              local_750 = &local_c48;
              local_748 = &local_cd8;
              local_740 = local_d20;
              local_738 = (undefined8 *)&local_c80;
              local_790 = '\0';
              local_ce6 = '\0';
              local_cd4._5_1_ = DAT_180b900c1 == '\0';
              auVar70 = ZEXT464(0x7fc00000);
              auVar57 = auVar70._0_16_;
              auVar48 = auVar61._0_16_;
              auVar59 = ZEXT1664(auVar48);
              pauVar32 = pauVar26;
              if (DAT_180b900c1 == '\0') {
                cVar16 = local_e88;
                auVar50 = auVar48;
LAB_180344a4b:
                iVar17 = (int)pauVar32;
                stack0xfffffffffffff200 = &local_cc0;
                local_e08._0_8_ = &local_ca0;
                puStack_df8 = &DAT_180b900c0;
                uStack_df0 = &local_788;
                local_de8 = &local_c68;
                piStack_de0 = &local_878;
                puStack_dd8 = (undefined4 *)&local_ce6;
                if (local_cd4._5_1_ == '\0') {
                  auVar61 = ZEXT1664(auVar48);
                  auVar65 = ZEXT1664(auVar49);
                  auVar66 = ZEXT1664(auVar57);
                  auVar70 = ZEXT1664(auVar50);
                  auVar59 = ZEXT1664(auVar56);
                  FUN_18034a2b0(local_e08,DAT_180b900dc == 0,4,0 < DAT_180b900cc);
                  auVar57 = auVar66._0_16_;
                  auVar50 = auVar70._0_16_;
                  fVar58 = auVar59._0_4_;
                  auVar49 = auVar65._0_16_;
                  fVar46 = auVar61._0_4_;
                  if (local_790 == '\0') {
                    bVar44 = DAT_180b900dc == 0;
                    bVar45 = DAT_180b900cc == 0;
                    goto LAB_180344ba4;
                  }
                }
                else {
                  DAT_1808e3ac4 = 0x82;
                  auVar61 = ZEXT1664(auVar48);
                  auVar65 = ZEXT1664(auVar49);
                  auVar66 = ZEXT1664(auVar57);
                  auVar70 = ZEXT1664(auVar50);
                  auVar59 = ZEXT1664(auVar56);
                  FUN_18034a2b0(local_e08,1,2,0);
                  DAT_1808e3ac4 = 0xe6;
                  if (local_790 == '\0') {
                    FUN_18034a2b0(local_e08,1,2);
                  }
                  DAT_1808e3ac4 = 300;
                  if (local_790 == '\0') {
                    FUN_18034a2b0(local_e08,0,2,0);
                  }
                  auVar57 = auVar66._0_16_;
                  auVar50 = auVar70._0_16_;
                  fVar58 = auVar59._0_4_;
                  auVar49 = auVar65._0_16_;
                  fVar46 = auVar61._0_4_;
                  DAT_1808e3ac4 = 0x168;
                  if (local_790 == '\0') {
                    bVar44 = false;
                    bVar45 = true;
LAB_180344ba4:
                    FUN_18034a2b0(local_e08,bVar44,2,bVar45);
                    auVar57 = auVar66._0_16_;
                    auVar50 = auVar70._0_16_;
                    fVar58 = auVar59._0_4_;
                    auVar49 = auVar65._0_16_;
                    fVar46 = auVar61._0_4_;
                    if ((local_790 == '\0') && (DAT_180bda1d8 < 0x168)) {
                      pauVar32 = local_ca0;
                      pauVar30 = pauVar26;
                      if (local_ca0 != local_c98) {
                        do {
                          if ((*(char *)((longlong)pauVar32[0xc] + 8) != '\0') &&
                             ((pauVar30 == (undefined1 (*) [16])0x0 ||
                              ((int)*(float *)((longlong)pauVar32[1] + 0xc) <
                               (int)*(float *)((longlong)pauVar30[1] + 0xc))))) {
                            pauVar30 = pauVar32;
                          }
                          pauVar33 = pauVar32 + 0xe;
                          pauVar32 = (undefined1 (*) [16])((longlong)*pauVar33 + 8);
                        } while ((undefined1 (*) [16])((longlong)*pauVar33 + 8) != local_c98);
                        if (pauVar30 != (undefined1 (*) [16])0x0) {
                          _local_b88 = *pauVar30;
                          uStack_b78 = *(ulonglong *)pauVar30[1];
                          uVar23 = *(undefined8 *)((longlong)pauVar30[1] + 8);
                          uStack_b70 = (undefined2)uVar23;
                          uStack_b6e = (undefined2)((ulonglong)uVar23 >> 0x10);
                          iStack_b6c = (int)((ulonglong)uVar23 >> 0x20);
                          uStack_b60 = *(ulonglong *)((longlong)pauVar30[2] + 8);
                          auStack_b58 = pauVar30[3];
                          uStack_b68 = (undefined4)*(undefined8 *)pauVar30[2];
                          uStack_b64 = (uint)((ulonglong)*(undefined8 *)pauVar30[2] >> 0x20);
                          auStack_b48 = pauVar30[4];
                          local_b38 = pauVar30[5];
                          auStack_b28 = pauVar30[6];
                          local_b18 = pauVar30[7];
                          auStack_b08 = pauVar30[8];
                          local_af8 = pauVar30[9];
                          auStack_ae8 = pauVar30[10];
                          local_ad8 = pauVar30[0xb];
                          local_ac8 = *(ulonglong *)pauVar30[0xc];
                          uStack_ab8 = *(undefined8 *)pauVar30[0xd];
                          uStack_ab0 = *(ulonglong *)((longlong)pauVar30[0xd] + 8);
                          local_aa8 = *(undefined8 *)pauVar30[0xe];
                          if (local_b88 == (undefined1  [4])0x1) {
                            uStack_ac0._4_4_ =
                                 (int)(*(ulonglong *)((longlong)pauVar30[0xc] + 8) >> 0x20);
                            iVar19 = 1;
                            if (1 < uStack_ac0._4_4_) {
                              iVar19 = uStack_ac0._4_4_;
                            }
                          }
                          else {
                            iVar19 = 0;
                          }
                          local_cf0 = (float *)CONCAT44(local_cf0._4_4_,iVar19);
                          local_ce0 = (float *)CONCAT44(local_ce0._4_4_,(undefined4)uStack_ab8);
                          uStack_c20 = &local_c64;
                          local_c28 = (undefined1  [8])local_c50;
                          lStack_c18 = (longlong)local_ce5;
                          lStack_c10 = (longlong)&local_c7c;
                          local_c08 = local_b88;
                          ppplStack_c00 = &local_788;
                          ppfStack_bf8 = &local_cf0;
                          pfStack_bf0 = &local_c68;
                          local_be8 = &local_878;
                          puStack_be0 = (undefined4 *)&local_ce6;
                          ppfStack_bd8 = &local_ce0;
                          auVar60 = ZEXT464((uint)auStack_b84);
                          auVar68 = ZEXT1664(auVar61._0_16_);
                          bVar44 = false;
                          local_e30 = 0x3fc000003f000000;
                          uStack_e28 = 0x4120000040800000;
                          plVar39 = &local_e30;
                          auVar64 = ZEXT464(0xbf800000);
                          uStack_ac0 = *(ulonglong *)((longlong)pauVar30[0xc] + 8);
                          do {
                            local_128 = auVar64._0_4_;
                            local_124 = auVar59._0_4_;
                            puVar22 = (undefined8 *)&local_128;
                            do {
                              auVar61 = ZEXT1664(auVar61._0_16_);
                              auVar65 = ZEXT1664(auVar65._0_16_);
                              auVar68 = ZEXT1664(auVar68._0_16_);
                              auVar60 = ZEXT1664(auVar60._0_16_);
                              auVar64 = ZEXT1664(auVar64._0_16_);
                              auVar66 = ZEXT1664(auVar66._0_16_);
                              auVar70 = ZEXT1664(auVar70._0_16_);
                              auVar59 = ZEXT1664(auVar59._0_16_);
                              auVar69._0_8_ = FUN_180244aa0();
                              auVar69._8_56_ = extraout_var_01;
                              auVar62 = ZEXT1664(auVar69._0_16_);
                              iVar19 = FUN_18034a860(local_c28,auVar69._0_8_);
                              if (iVar19 == 2) break;
                              if (iVar19 == 1) {
                                auVar68 = ZEXT1664(auVar62._0_16_);
                                bVar44 = true;
                                break;
                              }
                              puVar22 = (undefined8 *)((longlong)puVar22 + 4);
                            } while (puVar22 != &local_120);
                          } while (((local_790 == '\0') && (!bVar44)) &&
                                  (plVar39 = (longlong *)((longlong)plVar39 + 4),
                                  plVar39 != &local_e20));
                          fVar55 = 0.004;
                          fVar67 = 0.5;
                          pauVar32 = pauVar26;
                          while( true ) {
                            auVar57 = auVar66._0_16_;
                            auVar50 = auVar70._0_16_;
                            fVar58 = auVar59._0_4_;
                            auVar49 = auVar65._0_16_;
                            fVar46 = auVar61._0_4_;
                            if ((!bVar44) || (local_790 != '\0')) break;
                            fVar46 = (float)FUN_180244aa0(auVar68._0_4_ - auVar60._0_4_);
                            auVar64._0_8_ = FUN_180244aa0(fVar46 * fVar67 + auVar60._0_4_);
                            auVar64._8_56_ = extraout_var_02;
                            auVar69 = ZEXT1664(auVar64._0_16_);
                            iVar19 = FUN_18034a860(local_c28,auVar64._0_8_);
                            auVar57 = auVar66._0_16_;
                            auVar50 = auVar70._0_16_;
                            fVar58 = auVar59._0_4_;
                            auVar49 = auVar65._0_16_;
                            fVar46 = auVar61._0_4_;
                            if (iVar19 == 0) {
                              auVar60 = ZEXT1664(auVar69._0_16_);
                            }
                            else {
                              if (iVar19 != 1) break;
                              auVar68 = ZEXT1664(auVar69._0_16_);
                            }
                            uVar41 = FUN_180244aa0(auVar68._0_4_ - auVar60._0_4_);
                            auVar57 = auVar66._0_16_;
                            auVar50 = auVar70._0_16_;
                            fVar58 = auVar59._0_4_;
                            auVar49 = auVar65._0_16_;
                            fVar46 = auVar61._0_4_;
                            if (((float)(uVar41 & auVar65._0_4_) < fVar55) ||
                               (uVar41 = (int)pauVar32 + 1,
                               pauVar32 = (undefined1 (*) [16])(ulonglong)uVar41, 0xb < (int)uVar41)
                               ) break;
                          }
                        }
                      }
                    }
                  }
                }
              }
              else {
                auStack_b84 = (undefined1  [4])DAT_180b900f8;
                local_b88 = (undefined1  [4])DAT_180b900dc;
                uVar47 = FUN_180244aa0(DAT_180b900f8 - local_c7c);
                uVar38 = uStack_ab0;
                auVar51 = _local_b88;
                auVar57 = auVar70._0_16_;
                auVar50 = auVar59._0_16_;
                auVar56 = auVar66._0_16_;
                auVar49 = auVar65._0_16_;
                auVar48 = auVar61._0_16_;
                uStack_b80._0_4_ = uVar47;
                uStack_b80._4_4_ = auVar61._0_4_;
                auVar6 = _local_b88;
                if (DAT_180b900dc == 1) {
                  if (DAT_180b900c4 == '\0') {
                    iVar17 = 1;
                    if (1 < DAT_180b900e0) {
                      iVar17 = DAT_180b900e0;
                    }
                    uStack_b78 = CONCAT44(uStack_b78._4_4_,iVar17);
                  }
                  else {
                    uStack_b78 = CONCAT44(uStack_b78._4_4_,1);
                  }
                }
                else {
                  uStack_b78 = (ulonglong)uStack_b78._4_4_ << 0x20;
                }
                lVar25 = uStack_b78;
                uStack_b78._7_1_ = SUB81(lVar25,7);
                uStack_b78._0_7_ = (uint7)CONCAT24(1,(int)uStack_b78);
                uStack_b70 = 0;
                uStack_b68 = 0;
                uStack_b64 = (uint)uStack_b80._4_4_;
                uStack_b60 = CONCAT44(uStack_b80._4_4_,uStack_b80._4_4_);
                auStack_b58 = ZEXT816(0);
                auStack_b48 = ZEXT816(0);
                local_b38 = ZEXT816(0);
                auStack_b28 = auStack_b48;
                local_b18 = ZEXT816(0);
                auStack_b08 = auStack_b48;
                local_af8 = ZEXT816(0);
                auStack_ae8 = auStack_b48;
                local_ad8 = ZEXT816(0);
                local_ac8 = (ulonglong)(uint)uStack_b80._4_4_;
                uStack_ac0 = (uStack_ac0 >> 8 & 0xffffff) << 8;
                uStack_ab8 = CONCAT44(DAT_180b900fc,uStack_b80._4_4_);
                uStack_ab0._0_5_ = CONCAT14(DAT_180b900d0,DAT_180b900cc);
                uStack_ab0._6_2_ = SUB82(uVar38,6);
                uStack_ab0._0_6_ = CONCAT15(DAT_180b900d1,(undefined5)uStack_ab0);
                local_aa8 = CONCAT44(DAT_180b900d8,DAT_180b900d4);
                iStack_b6c = 1;
                if (1 < DAT_180b900c8) {
                  iStack_b6c = DAT_180b900c8;
                }
                iVar17 = local_e08._2_4_;
                _local_e08 = CONCAT412(uStack_b80._4_4_,CONCAT84(0,iVar17 << 0x10));
                _local_e08 = ZEXT1632(_local_e08);
                local_de8 = (float *)0x0;
                piStack_de0 = (int *)0x0;
                puStack_dd8 = (undefined4 *)0x0;
                uStack_dd0 = 0;
                local_dc8 = 0;
                uStack_dc0 = 0;
                uStack_db8 = 0;
                uStack_db0 = 0;
                local_da8 = 0;
                uStack_da0 = 0;
                uStack_d98 = 0;
                uStack_d90 = 0;
                local_d88 = 0;
                uStack_d80 = 0;
                uStack_d78 = 0;
                uStack_d70 = 0;
                local_d68 = CONCAT44(uStack_b80._4_4_,uStack_b80._4_4_);
                uStack_d60 = (ulonglong)(uint)uStack_b80._4_4_;
                local_b88 = auVar51._0_4_;
                _local_b88 = auVar6;
                if ((local_b88 != (undefined1  [4])0x1) || (local_cc0 != '\0')) {
                  auStack_b84 = auVar51._4_4_;
                  fVar46 = (float)auStack_b84 - local_c50[0];
                  uVar41 = FUN_180244aa0(fVar46);
                  auVar57 = auVar70._0_16_;
                  auVar50 = auVar59._0_16_;
                  auVar56 = auVar66._0_16_;
                  auVar49 = auVar65._0_16_;
                  auVar48 = auVar61._0_16_;
                  if (((float)(uVar41 & auVar65._0_4_) <= local_c64) &&
                     ((local_ce5[0] != '\0' || ((float)((uint)uStack_b80 & auVar65._0_4_) <= 0.001))
                     )) {
                    uVar38 = 1;
                    if (1 < (int)uStack_b78) {
                      uVar38 = uStack_b78 & 0xffffffff;
                    }
                    uVar41 = FUN_180349bd0(&local_788,local_b88,uVar38,local_e08);
                    auVar57 = auVar70._0_16_;
                    auVar50 = auVar59._0_16_;
                    auVar56 = auVar66._0_16_;
                    auVar49 = auVar65._0_16_;
                    auVar48 = auVar61._0_16_;
                    pauVar32 = (undefined1 (*) [16])(ulonglong)uVar41;
                    if ((uVar41 == 3) && (local_c68 <= (float)uStack_df0)) {
                      FUN_1803503f0(&local_878,local_b88);
                      auVar57 = auVar70._0_16_;
                      auVar50 = auVar59._0_16_;
                      auVar56 = auVar66._0_16_;
                      auVar49 = auVar65._0_16_;
                      auVar48 = auVar61._0_16_;
                      local_860 = local_e08._0_8_;
                      uStack_858 = stack0xfffffffffffff200;
                      uStack_850 = puStack_df8;
                      fStack_848 = local_e08._24_4_;
                      uStack_844 = local_e08._28_4_;
                      local_840 = SUB84(local_de8,0);
                      uStack_83c = (undefined4)((ulonglong)local_de8 >> 0x20);
                      uStack_838 = SUB84(piStack_de0,0);
                      uStack_834 = (undefined4)((ulonglong)piStack_de0 >> 0x20);
                      uStack_830 = SUB84(puStack_dd8,0);
                      uStack_82c = (undefined4)((ulonglong)puStack_dd8 >> 0x20);
                      uStack_828 = (undefined4)uStack_dd0;
                      uStack_824 = (undefined4)((ulonglong)uStack_dd0 >> 0x20);
                      local_820 = (undefined4)local_dc8;
                      uStack_81c = (undefined4)((ulonglong)local_dc8 >> 0x20);
                      uStack_818 = (undefined4)uStack_dc0;
                      uStack_814 = (undefined4)((ulonglong)uStack_dc0 >> 0x20);
                      uStack_810 = (undefined4)uStack_db8;
                      uStack_80c = (undefined4)((ulonglong)uStack_db8 >> 0x20);
                      uStack_808 = (undefined4)uStack_db0;
                      uStack_804 = (undefined4)((ulonglong)uStack_db0 >> 0x20);
                      local_800 = (undefined4)local_da8;
                      uStack_7fc = (undefined4)((ulonglong)local_da8 >> 0x20);
                      uStack_7f8 = (undefined4)uStack_da0;
                      uStack_7f4 = (undefined4)((ulonglong)uStack_da0 >> 0x20);
                      uStack_7f0 = (undefined4)uStack_d98;
                      uStack_7ec = (undefined4)((ulonglong)uStack_d98 >> 0x20);
                      uStack_7e8 = (undefined4)uStack_d90;
                      uStack_7e4 = (undefined4)((ulonglong)uStack_d90 >> 0x20);
                      local_7e0 = (undefined4)local_d88;
                      uStack_7dc = (undefined4)((ulonglong)local_d88 >> 0x20);
                      uStack_7d8 = (undefined4)uStack_d80;
                      uStack_7d4 = (undefined4)((ulonglong)uStack_d80 >> 0x20);
                      uStack_7d0 = (undefined4)uStack_d78;
                      uStack_7cc = (undefined4)((ulonglong)uStack_d78 >> 0x20);
                      uStack_7c8 = (undefined4)uStack_d70;
                      uStack_7c4 = (undefined4)((ulonglong)uStack_d70 >> 0x20);
                      uStack_7c0 = (undefined4)local_d68;
                      uStack_7bc = (undefined4)((ulonglong)local_d68 >> 0x20);
                      uStack_7b8 = (undefined4)uStack_d60;
                      fStack_7b4 = (float)(uStack_d60 >> 0x20);
                      local_ce6 = '\x01';
                    }
                  }
                }
                cVar16 = local_e88;
                iVar17 = (int)pauVar32;
                if ((((local_e88 != '\0') && (iVar17 == 3)) && (DAT_1808e3e48 != '\0')) &&
                   (0 < uStack_d60._4_4_)) {
                  fVar58 = *(float *)((longlong)&uStack_df0 +
                                     (longlong)(uStack_d60._4_4_ + -1) * 0xc + 4) - DAT_1808e3e5c;
                  auVar57 = ZEXT416((uint)fVar58);
                  fVar55 = *(float *)((longlong)&local_de8 + (longlong)(uStack_d60._4_4_ + -1) * 0xc
                                     ) - DAT_1808e3e60;
                  fVar46 = fVar55 * fVar55 + fVar58 * fVar58;
                  if (fVar46 < 0.0) {
                    auVar65 = ZEXT464((uint)fVar58);
                    auVar66 = ZEXT1664(auVar48);
                    auVar70 = ZEXT1664(auVar49);
                    auVar59 = ZEXT1664(auVar50);
                    auVar68 = ZEXT1664(auVar56);
                    auVar61._0_8_ = FUN_18061e150();
                    auVar56 = auVar68._0_16_;
                    auVar50 = auVar59._0_16_;
                    auVar49 = auVar70._0_16_;
                    auVar48 = auVar66._0_16_;
                    auVar57 = auVar65._0_16_;
                    auVar61._8_56_ = extraout_var_00;
                    auVar51 = auVar61._0_16_;
                  }
                  else {
                    auVar51 = ZEXT416((uint)SQRT(fVar46));
                  }
                  auVar61 = ZEXT1664(auVar57);
                  auVar65 = ZEXT1664(auVar48);
                  auVar66 = ZEXT1664(auVar49);
                  auVar70 = ZEXT1664(auVar51);
                  auVar59 = ZEXT1664(auVar50);
                  auVar68 = ZEXT1664(auVar56);
                  FUN_18033ca40(&DAT_1808e3e90);
                  auVar50 = auVar59._0_16_;
                  auVar57 = auVar70._0_16_;
                  auVar56 = auVar68._0_16_;
                  auVar49 = auVar66._0_16_;
                  fVar58 = auVar61._0_4_;
                  auVar48 = auVar65._0_16_;
                  fVar46 = local_cb4 * local_cb4 + local_cb8 * local_cb8;
                  if (fVar46 != auVar65._0_4_) {
                    if (fVar46 < 0.0) {
                      fVar46 = (float)FUN_18061e150(fVar46);
                      auVar50 = auVar59._0_16_;
                      auVar57 = auVar70._0_16_;
                      auVar56 = auVar68._0_16_;
                      auVar49 = auVar66._0_16_;
                      fVar58 = auVar61._0_4_;
                      auVar48 = auVar65._0_16_;
                    }
                    else {
                      fVar46 = SQRT(fVar46);
                    }
                    if (auVar56._0_4_ < fVar46) {
                      auVar50 = ZEXT416((uint)((fVar58 * local_cb4 - fVar55 * local_cb8) / fVar46));
                    }
                  }
                }
                fVar46 = auVar48._0_4_;
                fVar58 = auVar56._0_4_;
                if (local_790 == '\0') {
                  goto LAB_180344a4b;
                }
              }
              uVar47 = auVar57._0_4_;
              uVar52 = auVar50._0_4_;
              local_728 = (float *)&local_c48;
              local_720 = (longlong)&local_cd4 + 5;
              local_718 = &local_c88;
              local_710 = (undefined4 *)&local_ce6;
              local_708 = &local_ca0;
              if (local_790 == '\0') {
                if (DAT_180b900c1 == '\0') {
                  DAT_180b90198._4_1_ = 0;
                  if (local_cb0 <= -60.0) {
                    if ((int)local_cd8 < 0x41) {
                      uVar41 = (uint)(0x20 < (int)local_cd8);
                    }
                    else {
                      uVar41 = 2;
                    }
                  }
                  else {
                    uVar41 = 2;
                  }
                  if (local_ca0 == local_c98) {
                    if ((int)local_cd8 < 0x29) {
                      pauVar32 = (undefined1 (*) [16])(ulonglong)(0x18 < (int)local_cd8);
                    }
                    else {
                      pauVar32 = (undefined1 (*) [16])0x2;
                    }
                  }
                  else {
                    pauVar32 = pauVar26;
                  }
                  if (DAT_180bda1dc <= 3.0) {
                    if (DAT_180bda1dc <= 2.0) {
                      iVar17 = (fVar58 < DAT_180bda1dc) + 1;
                    }
                    else {
                      iVar17 = 3;
                    }
                  }
                  else {
                    iVar17 = 4;
                  }
                  DAT_180b900e8 = (int)pauVar32 + iVar17 + (uVar41 - 1);
                  DAT_180c6f678 = DAT_180c6f678 + 1;
                  local_c70 = (double)((ulonglong)local_c70 & 0xffffffff00000000);
                  local_cc8 = (float *)((ulonglong)local_cc8 & 0xffffffff00000000);
                  local_ce0 = (float *)((ulonglong)local_ce0 & 0xffffffff00000000);
                  local_ca8 = (float *)((ulonglong)local_ca8 & 0xffffffff00000000);
                  if (local_ca0 != local_c98) {
                    pbVar34 = (byte *)((longlong)local_ca0[1] + 5);
                    pauVar32 = pauVar26;
                    pauVar30 = pauVar26;
                    pauVar33 = pauVar26;
                    do {
                      uVar41 = (uint)pbVar34[-1] + (int)pauVar33;
                      local_c70 = (double)CONCAT44(local_c70._4_4_,uVar41);
                      uVar18 = (int)pauVar26 + (uint)*pbVar34;
                      pauVar26 = (undefined1 (*) [16])(ulonglong)uVar18;
                      local_cc8 = (float *)CONCAT44(local_cc8._4_4_,uVar18);
                      uVar18 = (int)pauVar32 + (uint)pbVar34[1];
                      pauVar32 = (undefined1 (*) [16])(ulonglong)uVar18;
                      local_ce0 = (float *)CONCAT44(local_ce0._4_4_,uVar18);
                      uVar18 = (int)pauVar30 + (uint)pbVar34[0xb3];
                      pauVar30 = (undefined1 (*) [16])(ulonglong)uVar18;
                      local_ca8 = (float *)CONCAT44(local_ca8._4_4_,uVar18);
                      pauVar33 = (undefined1 (*) [16])(ulonglong)uVar41;
                      pauVar1 = (undefined1 (*) [16])(pbVar34 + 0xd3);
                      pbVar34 = pbVar34 + 0xe8;
                    } while (pauVar1 != local_c98);
                  }
                  if ((-1 < local_c88) && (0x1f < local_c88 - _DAT_180900780)) {
                    _DAT_180900780 = local_c88;
                    local_e18 = (char *)CONCAT44(local_e18._4_4_,(uint)local_e84);
                    local_ea8[0] = (float *)(double)local_c68;
                    local_cf0 = (float *)(double)(local_c64 * 2.0);
                    local_e38 = ((longlong)local_c98 - (longlong)local_ca0) / 0xe8;
                    fVar58 = local_cb4 * local_cb4 + local_cb8 * local_cb8;
                    if (fVar58 != fVar46) {
                      if (fVar58 < 0.0) {
                        auVar61 = ZEXT464((uint)local_cb0);
                        auVar65 = ZEXT1664(auVar57);
                        auVar66 = ZEXT1664(auVar50);
                        fVar46 = (float)FUN_18061e150();
                        auVar50 = auVar66._0_16_;
                        auVar57 = auVar65._0_16_;
                        local_cb0 = auVar61._0_4_;
                      }
                      else {
                        fVar46 = SQRT(fVar58);
                      }
                    }
                    local_e58 = (float *)(double)fVar46;
                    local_e78 = (undefined1 *)(double)local_cb0;
                    pcVar40 = "standard";
                    if (local_ce7 != '\0') {
                      pcVar40 = "advanced";
                    }
                    uStack_b80 = 0xa05181ee77d57a06;
                    _local_b88 = 0xdb35e39b27e1c185;
                    uStack_b78 = 0x929654b1461b7377;
                    uStack_b70 = 0x7110;
                    uStack_b6e = 0xbfef;
                    iStack_b6c = 0xa5cea54;
                    uStack_b68 = 0x916b7e19;
                    uStack_b64 = 0xa70c9f7f;
                    uStack_b60 = 0x2b2d6d82aa402c0a;
                    auStack_b58._8_8_ = 0xfec09918395f26c4;
                    auStack_b58._0_8_ = 0xc064ed9510bc010b;
                    auStack_b48._8_8_ = 0xf863c3261a551f0e;
                    auStack_b48._0_8_ = 0x835e2313e2c48f8d;
                    local_b38._8_8_ = 0x67ff882c0a9bdf38;
                    local_b38._0_8_ = 0x56a0bc092c25563f;
                    auStack_b28._8_8_ = 0x24c1d5fafa9ec992;
                    auStack_b28._0_8_ = 0xe9fbbd57d9292e61;
                    local_b18._8_8_ = 0x3a86d390ee208d6c;
                    local_b18._0_8_ = 0xe0a313cd38802513;
                    auStack_b08._8_8_ = 0xc5f2049e64fab916;
                    auStack_b08._0_8_ = 0x95484dcb29dcfd95;
                    local_af8._8_8_ = 0x1047a904a2394520;
                    local_af8._0_8_ = 0x99be47e160dada07;
                    auStack_ae8._8_8_ = 0x91e97532caa6fc1a;
                    auStack_ae8._0_8_ = 0x9a6f01af4f2ca929;
                    local_ad8._8_8_ = 0xb10776480ca86bd4;
                    local_ad8._0_8_ = 0x4f948c455ded471b;
                    local_ac8 = 0x35a5004309b1b61d;
                    uStack_ac0 = 0x5b5a30d674a48d9e;
                    uStack_ab8 = 0xa73d3b392572a64f;
                    uStack_ab0 = 0x8edd3f5c2400c2c8;
                    local_aa8 = 0xefe67c07e4e44b71;
                    uStack_aa0 = 0xf3b0b42a9dc4e322;
                    uStack_a98 = 0x617eb6fd00a53ba3;
                    uStack_a90 = 0x2de935c0128ee4fc;
                    local_a88 = 0x478f2afbac69aaa5;
                    uStack_a80 = 0xcbdcc34e14e75ba6;
                    local_a78 = 0xfcb4b591bb2a4897;
                    local_e98 = (char *)0xed8a82b4c2a70f30;
                    uStack_a70 = 0xed8a82b4c2a70f30;
                    local_9d8 = 0x677562656764655b;
                    uStack_9d0 = 0x7d7b3d646d63205d;
                    uStack_9c8 = 0x3d746c7573657220;
                    uStack_9c0 = 0x6574756f722d6f6e;
                    local_9b8 = 0x7d7b3d65646f6d20;
                    uStack_9b0 = 0x6e726f6272696120;
                    uStack_9a8 = 0x2e3a7b3d7a765f65;
                    uStack_9a0 = 0x65657073207d6632;
                    local_998 = 0x7d66322e3a7b3d64;
                    uStack_990 = 0x6e6f7a69726f6820;
                    uStack_988 = 0x646e6163207d7b3d;
                    uStack_980 = 0x7b3d736574616469;
                    local_978 = 0x7365626f7270207d;
                    uStack_970 = 0x7d7b3d7466656c5f;
                    uStack_968 = 0x5f656e69676e6520;
                    uStack_960 = 0x7d7b3d7370657473;
                    local_958 = 0x625f656361727420;
                    uStack_950 = 0x756f5f7465676475;
                    uStack_948 = 0x73696d207d7b3d74;
                    uStack_940 = 0x66207d7b3d736573;
                    local_938 = 0x66312e3a7b3d766f;
                    uStack_930 = 0x6e655f6e696d207d;
                    uStack_928 = 0x3d64656570735f64;
                    uStack_920 = 0x6d207d66312e3a7b;
                    local_918 = 0x737265696669646f;
                    uStack_910 = 0x6567207c207d7b3d;
                    uStack_908 = 0x5f63697274656d6f;
                    uStack_900 = 0x6e65207d7b3d6265;
                    local_8f8 = 0x6e616c5f656e6967;
                    uStack_8f0 = 0x65207d7b3d646564;
                    uStack_8e8 = 0x65725f656e69676e;
                    uStack_8e0 = 0x7b3d64657463656a;
                    local_8d8 = 0x656e69676e65207d;
                    uStack_8d0 = 0x3d64656c6961665f;
                    local_8c8 = 0xa7d7b;
                    uStack_8c0 = 0;
                    lVar25 = -1;
                    do {
                      lVar37 = lVar25 + 1;
                      lVar5 = lVar25 + 1;
                      lVar25 = lVar37;
                    } while (*(char *)((longlong)&local_9d8 + lVar5) != '\0');
                    local_eb0 = &local_ce0;
                    local_eb8 = &local_cc8;
                    local_ec0 = &local_ca8;
                    local_ec8 = &local_c70;
                    local_ed0 = &local_e18;
                    local_ed8 = local_ea8;
                    local_ee0 = &local_cf0;
                    local_ee8 = (longlong *)&DAT_180c6f678;
                    local_ef0 = (undefined4 *)&DAT_180bbec89;
                    local_ef8 = (float *)&DAT_180bda1d8;
                    local_f00 = (float **)&local_cd4;
                    local_f08 = (float *)&local_e38;
                    local_f10 = &local_cd8;
                    local_f18 = (undefined1 (**) [16])&local_e58;
                    auVar61 = ZEXT1664(auVar57);
                    auVar65 = ZEXT1664(auVar50);
                    local_e90 = FUN_18034f490(local_b88,&local_c88,pcVar40,&local_e78);
                    local_e98 = (char *)0x11;
                    uStack_c20 = lVar37;
                    local_c28 = (undefined1  [8])&local_9d8;
                    uVar23 = FUN_1801d97f0(local_e08,local_c28,&local_e98);
                    uVar23 = FUN_18015b6c0(uVar23);
                    FUN_18044fc90(uVar23);
                    FUN_18015c010(local_e08);
                    uVar47 = auVar61._0_4_;
                    uVar52 = auVar65._0_4_;
                  }
                  if (cVar16 != '\0') {
                    local_ee0 = (float **)0x1808037c0;
                    local_ee8 = (longlong *)CONCAT44(local_ee8._4_4_,uVar52);
                    local_ef0 = (undefined4 *)CONCAT44(local_ef0._4_4_,uVar47);
                    local_ef8 = (float *)CONCAT44(local_ef8._4_4_,DAT_180bda1d8);
                    local_f00 = (float **)((ulonglong)local_f00 & 0xffffffffffffff00);
                    local_f08 = &local_cb8;
                    local_f10 = (float *)&local_c48;
                    local_f18 = (undefined1 (**) [16])
                                CONCAT71(local_f18._1_7_,local_ca0 != local_c98);
                    FUN_18033df00(local_c88,0,0,0);
                  }
                  goto LAB_1803477ef;
                }
                if (iVar17 == 0) {
                  DAT_180b900e4 = 0;
                  goto LAB_1803460a8;
                }
                local_ea8[0] = (float *)(double)DAT_180b900f8;
                local_cf0 = (float *)(((longlong)local_c98 - (longlong)local_ca0) / 0xe8);
                local_e18 = (char *)CONCAT44(local_e18._4_4_,iVar17);
                uStack_c20 = 0xa05181ee77d57a06;
                local_c28 = (undefined1  [8])0xdb35e39b27e1c185;
                lStack_c18 = -0x6d69ab4eb9e48c89;
                lStack_c10 = 0xa5cea54bfef7110;
                local_c08 = (undefined1 *)0xa70c9f7f916b7e19;
                ppplStack_c00 = (longlong ***)0x2b2d6d82aa402c0a;
                ppfStack_bf8 = (float **)0xc064ed9510bc010b;
                pfStack_bf0 = (float *)0xfec09918395f26c4;
                local_be8 = (int *)0x835e2313e2c48f8d;
                puStack_be0 = (undefined4 *)0xf863c3261a551f0e;
                ppfStack_bd8 = (float **)0x56a0bc092c25563f;
                uStack_bd0 = 0x67ff882c0a9bdf38;
                local_bc8 = 0xe9fbbd57d9292e61;
                uStack_bc0 = 0x24c1d5fafa9ec992;
                uStack_bb8 = 0xe0a313cd38802513;
                uStack_bb0 = 0x3a86d390ee208d6c;
                local_ba8 = 0x95484dcb29dcfd95;
                uStack_ba0 = 0xc5f2049e64fab916;
                local_b98 = 0x99be47e160dada07;
                local_e98 = (char *)0x1047a904a2394520;
                uStack_b90 = 0x1047a904a2394520;
                stack0xfffffffffffff200 = 0x7d7b3d646d63205d;
                local_e08._0_8_ = 0x677562656764655b;
                puStack_df8 = (undefined1 *)0x3d746c7573657220;
                uStack_df0 = 0x72206b636f6c6e75;
                local_de8 = (float *)0x6f723d6e6f736165;
                piStack_de0 = (int *)0x656a65722d657475;
                puStack_dd8 = (undefined4 *)0x7265762064657463;
                uStack_dd0 = 0x207d7b3d74636964;
                local_dc8 = 0x74616469646e6163;
                uStack_dc0 = 0x6e65207d7b3d7365;
                uStack_db8 = 0x6574735f656e6967;
                uStack_db0 = 0x7274207d7b3d7370;
                local_da8 = 0x676475625f656361;
                uStack_da0 = 0x7b3d74756f5f7465;
                uStack_d98 = 0x636964657270207d;
                uStack_d90 = 0x6b6369745f646574;
                local_d88 = 0x726174207d7b3d73;
                uStack_d80 = 0x3d7761795f746567;
                uStack_d78 = 0xa7d66322e3a7b;
                uStack_d70 = 0;
                lVar25 = -1;
                do {
                  uStack_e70 = lVar25 + 1;
                  lVar5 = lVar25 + 1;
                  lVar25 = uStack_e70;
                } while (local_e08[lVar5] != '\0');
                local_e78 = local_e08;
                local_f00 = local_ea8;
                local_f08 = (float *)&DAT_180b900c8;
                local_f10 = (float *)&DAT_180bbec89;
                local_f18 = (undefined1 (**) [16])&DAT_180bda1d8;
                auVar61 = ZEXT1664(auVar57);
                auVar65 = ZEXT1664(auVar50);
                FUN_18034f290(&local_e78,&local_c88,&local_e18,&local_cf0);
                DAT_180b900c1 = '\0';
                _DAT_180b900c8 = 0;
                DAT_180b900ec = 0;
                DAT_180b900f0 = 1;
                DAT_180b90198._4_1_ = 0;
                DAT_180b90198._0_4_ = 0.0;
                DAT_180b900c4 = '\0';
                DAT_180b900c5 = '\0';
                DAT_180b900e0 = 0;
                DAT_180b90100 = '\x01';
                if (cVar16 != '\0') {
                  local_ee0 = (float **)0x180803710;
                  local_ee8 = (longlong *)CONCAT44(local_ee8._4_4_,auVar65._0_4_);
                  local_ef0 = (undefined4 *)CONCAT44(local_ef0._4_4_,auVar61._0_4_);
                  local_ef8 = (float *)CONCAT44(local_ef8._4_4_,DAT_180bda1d8);
                  local_f00 = (float **)((ulonglong)local_f00 & 0xffffffffffffff00);
                  local_f08 = &local_cb8;
                  local_f10 = (float *)&local_c48;
                  local_f18 = (undefined1 (**) [16])CONCAT71(local_f18._1_7_,local_ca0 != local_c98)
                  ;
                  FUN_18033df00(local_c88,0,0,0);
                }
              }
              else {
                if ((local_cd4._5_1_ == '\0') && (-1 < DAT_180b90104)) {
                  auVar61 = ZEXT1664(auVar49);
                  auVar65 = ZEXT1664(auVar57);
                  auVar66 = ZEXT1664(auVar50);
                  uVar41 = FUN_180244aa0();
                  auVar50 = auVar66._0_16_;
                  auVar57 = auVar65._0_16_;
                  auVar49 = auVar61._0_16_;
                  if (10.0 < (float)(uVar41 & auVar61._0_4_)) goto LAB_180344f61;
                }
                else {
LAB_180344f61:
                  auVar48 = vpcmpeqd_avx(ZEXT416((uint)local_7a0),ZEXT416(0));
                  vblendvps_avx(ZEXT416((uint)local_7a4),ZEXT416((uint)local_874),auVar48);
                  auVar61 = ZEXT1664(auVar49);
                  auVar65 = ZEXT1664(auVar57);
                  auVar66 = ZEXT1664(auVar50);
                  lVar25 = FUN_18033d780(local_c28);
                  auVar50 = auVar66._0_16_;
                  auVar57 = auVar65._0_16_;
                  auVar49 = auVar61._0_16_;
                  DAT_180b90104 = (int)((ulonglong)*(undefined8 *)(lVar25 + 8) >> 0x20);
                }
                DAT_180b90100 = '\0';
                DAT_180c6f678 = 0;
                DAT_180b900e8 = 0;
                DAT_180b900ec = 0;
                DAT_180b900f0 = 0;
                DAT_180b900c1 = '\x01';
                DAT_180b900c2 = '\x01';
                DAT_180b900f8 = local_874;
                DAT_180b900fc = local_7a4;
                DAT_180b900d0 = local_79c;
                DAT_180b900d1 = local_79b;
                DAT_180b900d4 = local_798;
                DAT_180b900d8 = local_794;
                _DAT_180b900c8 = CONCAT44(local_7a0,local_860._4_4_);
                DAT_180b900dc = local_878;
                if (local_878 == 1) {
                  DAT_180b900e0 = 1;
                  if (1 < local_868) {
                    DAT_180b900e0 = local_868;
                  }
                  if (1 < DAT_180b900e0) goto LAB_18034511b;
LAB_18034508b:
                  DAT_180b900c4 = '\x01';
                }
                else {
                  DAT_180b900e0 = 0;
LAB_18034511b:
                  if (DAT_180b900c5 != '\0') goto LAB_18034508b;
                  DAT_180b900c4 = '\0';
                }
                _DAT_180b90108 = CONCAT44(local_840,uStack_844);
                uRam0000000180b90110 = CONCAT44(uStack_838,uStack_83c);
                uRam0000000180b90118 = CONCAT44(uStack_830,uStack_834);
                _DAT_180b90120 = CONCAT44(uStack_828,uStack_82c);
                _DAT_180b90128 = CONCAT44(local_820,uStack_824);
                _DAT_180b90130 = CONCAT44(uStack_818,uStack_81c);
                uRam0000000180b90138 = CONCAT44(uStack_810,uStack_814);
                _DAT_180b90140 = CONCAT44(uStack_808,uStack_80c);
                _DAT_180b90148 = CONCAT44(local_800,uStack_804);
                uRam0000000180b90150 = CONCAT44(uStack_7f8,uStack_7fc);
                uRam0000000180b90158 = CONCAT44(uStack_7f0,uStack_7f4);
                _DAT_180b90160 = CONCAT44(uStack_7e8,uStack_7ec);
                _DAT_180b90168 = CONCAT44(local_7e0,uStack_7e4);
                uRam0000000180b90170 = CONCAT44(uStack_7d8,uStack_7dc);
                uRam0000000180b90178 = CONCAT44(uStack_7d0,uStack_7d4);
                _DAT_180b90180 = CONCAT44(uStack_7c8,uStack_7cc);
                _DAT_180b90188 = CONCAT44(uStack_7c0,uStack_7c4);
                uRam0000000180b90190 = CONCAT44(uStack_7b8,uStack_7bc);
                DAT_180b90198._0_4_ = fStack_7b4;
                DAT_180b90198._4_1_ = 0 < (int)fStack_7b4;
                if ((local_860._4_4_ < 0x31) || (local_ce6 == '\0')) {
                  if (0x18 < local_860._4_4_) {
                    pauVar26 = (undefined1 (*) [16])(ulonglong)((local_ce6 != '\0') + 1);
                  }
                }
                else {
                  pauVar26 = (undefined1 (*) [16])0x4;
                }
                DAT_180b900e4 = (int)pauVar26;
                if (cVar16 != '\0') {
                  auVar61 = ZEXT1664(auVar49);
                  auVar65 = ZEXT1664(auVar57);
                  auVar66 = ZEXT1664(auVar50);
                  FUN_18034abd0(&local_728,&local_878);
                  cVar42 = FUN_18033cac0(&DAT_1808e3e90);
                  auVar50 = auVar66._0_16_;
                  auVar57 = auVar65._0_16_;
                  auVar49 = auVar61._0_16_;
                  if (cVar42 != '\0') {
                    DAT_180b900e4 = 0;
                    local_cf0 = (float *)(double)auVar65._0_4_;
                    uStack_c20 = 0xa05181ee77d57a06;
                    local_c28 = (undefined1  [8])0xdb35e39b27e1c185;
                    lStack_c18 = -0x6d69ab4eb9e48c89;
                    lStack_c10 = 0xa5cea54bfef7110;
                    local_c08 = (undefined1 *)0xa70c9f7f916b7e19;
                    ppplStack_c00 = (longlong ***)0x2b2d6d82aa402c0a;
                    ppfStack_bf8 = (float **)0xc064ed9510bc010b;
                    pfStack_bf0 = (float *)0xfec09918395f26c4;
                    local_be8 = (int *)0x835e2313e2c48f8d;
                    puStack_be0 = (undefined4 *)0xf863c3261a551f0e;
                    ppfStack_bd8 = (float **)0x56a0bc092c25563f;
                    uStack_bd0 = 0x67ff882c0a9bdf38;
                    local_bc8 = 0xe9fbbd57d9292e61;
                    local_ea8[0] = (float *)0x24c1d5fafa9ec992;
                    uStack_bc0 = 0x24c1d5fafa9ec992;
                    stack0xfffffffffffff200 = 0x6d63205d7664612d;
                    local_e08._0_8_ = 0x677562656764655b;
                    puStack_df8 = (undefined1 *)0x617274207d7b3d64;
                    uStack_df0 = 0x2079726f7463656a;
                    local_de8 = (float *)0x736920726f727265;
                    piStack_de0 = (int *)0x676e69776f726720;
                    puStack_dd8 = (undefined4 *)0x7d66322e3a7b2820;
                    uStack_dd0 = 0x20297374696e7520;
                    local_dc8 = 0x6e6163736572202d;
                    uStack_dc0 = 0x65766520676e696e;
                    uStack_db8 = 0x616d6d6f63207972;
                    uStack_db0 = 0x6c69746e7520646e;
                    local_da8 = 0x766e6f6320746920;
                    uStack_da0 = 0xa7365677265;
                    lVar25 = -1;
                    do {
                      uStack_e70 = lVar25 + 1;
                      lVar5 = lVar25 + 1;
                      lVar25 = uStack_e70;
                    } while (local_e08[lVar5] != '\0');
                    local_e78 = local_e08;
                    auVar61 = ZEXT1664(auVar49);
                    auVar65 = ZEXT1664(auVar57);
                    auVar66 = ZEXT1664(auVar50);
                    FUN_18034eee0(local_c88,&local_e78,&local_c88,&local_cf0);
                    auVar50 = auVar66._0_16_;
                    auVar57 = auVar65._0_16_;
                    auVar49 = auVar61._0_16_;
                  }
                }
                uVar47 = auVar57._0_4_;
                uVar52 = auVar50._0_4_;
                if (local_790 != '\0') {
                  if (local_cbf[0] != '\0') {
                    auVar61 = ZEXT1664(auVar49);
                    auVar65 = ZEXT1664(auVar57);
                    auVar66 = ZEXT1664(auVar50);
                    uVar41 = FUN_180244aa0();
                    uVar47 = auVar65._0_4_;
                    uVar52 = auVar66._0_4_;
                    auVar50 = auVar66._0_16_;
                    auVar57 = auVar65._0_16_;
                    if (((float)(uVar41 & auVar61._0_4_) <= 0.25) &&
                       (uVar41 = (uint)(local_c88 >> 0x3f) & 0x3f,
                       ((int)local_c88 + uVar41 & 0x3f) != uVar41)) goto LAB_1803460a8;
                  }
                  local_e18 = (char *)CONCAT44(local_e18._4_4_,(uint)local_e84);
                  local_cf0 = (float *)(double)local_c68;
                  local_ce0 = (float *)(double)(local_c64 * 2.0);
                  local_cc8 = (float *)(double)fStack_848;
                  local_ca8 = (float *)(double)local_7a4;
                  local_c70 = (double)local_874;
                  local_e98 = "stand";
                  if (local_878 == 1) {
                    local_e98 = "crouch";
                  }
                  stack0xfffffffffffff200 = 0xa05181ee77d57a06;
                  local_e08._0_8_ = 0xdb35e39b27e1c185;
                  puStack_df8 = (undefined1 *)0x929654b1461b7377;
                  uStack_df0 = 0xa5cea54bfef7110;
                  local_de8 = (float *)0xa70c9f7f916b7e19;
                  piStack_de0 = (int *)0x2b2d6d82aa402c0a;
                  puStack_dd8 = (undefined4 *)0xc064ed9510bc010b;
                  uStack_dd0 = 0xfec09918395f26c4;
                  local_dc8 = 0x835e2313e2c48f8d;
                  uStack_dc0 = 0xf863c3261a551f0e;
                  uStack_db8 = 0x56a0bc092c25563f;
                  uStack_db0 = 0x67ff882c0a9bdf38;
                  local_da8 = 0xe9fbbd57d9292e61;
                  uStack_da0 = 0x24c1d5fafa9ec992;
                  uStack_d98 = 0xe0a313cd38802513;
                  uStack_d90 = 0x3a86d390ee208d6c;
                  local_d88 = 0x95484dcb29dcfd95;
                  uStack_d80 = 0xc5f2049e64fab916;
                  uStack_d78 = 0x99be47e160dada07;
                  uStack_d70 = 0x1047a904a2394520;
                  local_d68 = 0x9a6f01af4f2ca929;
                  uStack_d60 = 0x91e97532caa6fc1a;
                  uStack_d58 = 0x4f948c455ded471b;
                  uStack_d50 = 0xb10776480ca86bd4;
                  local_d48 = 0x35a5004309b1b61d;
                  uStack_d40 = 0x5b5a30d674a48d9e;
                  local_d38 = 0xa73d3b392572a64f;
                  local_ea8[0] = (float *)0x8edd3f5c2400c2c8;
                  uStack_d30 = 0x8edd3f5c2400c2c8;
                  uStack_b80 = 0x7d7b3d646d63205d;
                  _local_b88 = 0x677562656764655b;
                  uStack_b78 = 0x3d746c7573657220;
                  uStack_b70 = 0x6f6c;
                  uStack_b6e = 0x6b63;
                  iStack_b6c = 0x646f6d20;
                  uStack_b68 = 0x7d7b3d65;
                  uStack_b64 = 0x77617920;
                  uStack_b60 = 0x207d66322e3a7b3d;
                  auStack_b58._8_8_ = 0x2e3a7b3d7761795f;
                  auStack_b58._0_8_ = 0x6863616f72707061;
                  auStack_b48._8_8_ = 0x6369745f6863616f;
                  auStack_b48._0_8_ = 0x72707061207d6632;
                  local_b38._8_8_ = 0x69745f746361746e;
                  local_b38._0_8_ = 0x6f63207d7b3d736b;
                  auStack_b28._8_8_ = 0x3d64656570735f64;
                  auStack_b28._0_8_ = 0x6e65207d7b3d6b63;
                  local_b18._8_8_ = 0x3d64656966697265;
                  local_b18._0_8_ = 0x76207d66322e3a7b;
                  auStack_b08._8_8_ = 0x3d73706574735f65;
                  auStack_b08._0_8_ = 0x6e69676e65207d7b;
                  local_af8._8_8_ = 0x5f7465676475625f;
                  local_af8._0_8_ = 0x6563617274207d7b;
                  auStack_ae8._8_8_ = 0x66312e3a7b3d766f;
                  auStack_ae8._0_8_ = 0x66207d7b3d74756f;
                  local_ad8._8_8_ = 0x3d64656570735f64;
                  local_ad8._0_8_ = 0x6e655f6e696d207d;
                  local_ac8 = 0x6d207d66312e3a7b;
                  uStack_ac0 = 0x737265696669646f;
                  uStack_ab8 = 0xa7d7b3d;
                  uStack_ab0 = 0;
                  lVar25 = -1;
                  do {
                    lVar37 = lVar25 + 1;
                    lVar5 = lVar25 + 1;
                    lVar25 = lVar37;
                  } while (local_b88[lVar5] != '\0');
                  local_ed0 = &local_e18;
                  local_ed8 = &local_cf0;
                  local_ee0 = &local_ce0;
                  local_ee8 = (longlong *)&DAT_180bbec89;
                  local_ef0 = &DAT_180bda1d8;
                  local_ef8 = (float *)&local_ce6;
                  local_f00 = &local_cc8;
                  local_f08 = (float *)((longlong)&local_860 + 4);
                  local_f10 = &local_7a0;
                  local_f18 = (undefined1 (**) [16])&local_ca8;
                  auVar61 = ZEXT1664(auVar57);
                  auVar65 = ZEXT1664(auVar50);
                  uStack_e70 = FUN_18034f750(local_e08,&local_c88,&local_e98,&local_c70);
                  local_e78 = &DAT_0000000d;
                  local_e58 = (float *)local_b88;
                  local_e50 = lVar37;
                  uVar23 = FUN_1801d97f0(local_c28,&local_e58,&local_e78);
                  uVar23 = FUN_18015b6c0(uVar23);
                  FUN_18044fc90(uVar23);
                  FUN_18015c010(local_c28);
                  uVar47 = auVar61._0_4_;
                  uVar52 = auVar65._0_4_;
                }
LAB_1803460a8:
                DAT_180b900c0 = 1;
                if (DAT_180b900c4 != '\0') {
                  DAT_180b900c5 = '\x01';
                }
                if (cVar16 != '\0') {
                  local_ee0 = (float **)0x1808037e0;
                  if (local_ce6 != '\0') {
                    local_ee0 = (float **)0x1808037d0;
                  }
                  if ((DAT_180b900cc < 1) && (DAT_180b900d1 == '\0')) {
                    uVar23 = 0;
                  }
                  else {
                    uVar23 = 1;
                  }
                  local_ee8 = (longlong *)CONCAT44(local_ee8._4_4_,uVar52);
                  local_ef0 = (undefined4 *)CONCAT44(local_ef0._4_4_,uVar47);
                  local_ef8 = (float *)CONCAT44(local_ef8._4_4_,DAT_180bda1d8);
                  local_f00 = (float **)CONCAT71(local_f00._1_7_,local_ce6);
                  local_f08 = &local_cb8;
                  local_f10 = (float *)&local_c48;
                  local_f18 = (undefined1 (**) [16])CONCAT71(local_f18._1_7_,local_ca0 != local_c98)
                  ;
                  FUN_18033df00(local_c88,1,uVar23,_DAT_180b900c8 & 0xffffffff);
                }
                FUN_18034bb90(&DAT_180b900c0,local_e20);
LAB_1803477ef:
                FUN_18034ba80(&DAT_180b900c0,local_e20);
              }
              FUN_1801b3590(local_9f0);
              FUN_180350580(local_a20);
              FUN_18034fa70(local_890);
              FUN_180350580(&local_ca0);
              goto LAB_180347b73;
            }
          }
        }
        goto LAB_18034784d;
      }
      DAT_180b900c1 = '\0';
      DAT_180b900c2 = '\0';
      _DAT_180b900c8 = _DAT_180b900c8 & 0xffffffff;
      DAT_180b90198._4_1_ = 0;
      DAT_180b900e4 = 0;
      DAT_180b900e8 = 0;
      DAT_180b900ec = 0;
      DAT_180b900f0 = 0;
      DAT_180c6f678 = 0;
      DAT_180b900c4 = '\0';
      DAT_180b900c5 = '\0';
      DAT_180b90100 = '\0';
      if (!bVar44) {
        DAT_180b900c3 = 0;
      }
      goto LAB_180347b73;
    }
  }
LAB_18034784d:
  FUN_18034ba80(&DAT_180b900c0,local_e20);
LAB_180347b73:
  FUN_18033db50(local_898);
}



