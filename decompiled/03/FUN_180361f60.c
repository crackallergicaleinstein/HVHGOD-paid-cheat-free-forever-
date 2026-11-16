// FUN_180361f60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180361f60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180361f60(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  ushort uVar8;
  char cVar9;
  byte bVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  short sVar14;
  int iVar15;
  undefined4 uVar16;
  ULONGLONG UVar17;
  longlong lVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  longlong lVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined8 *puVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 uVar28;
  int iVar29;
  bool bVar30;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  float fVar31;
  undefined4 uVar32;
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  float fVar35;
  undefined1 auVar36 [16];
  float fVar37;
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auVar42 [64];
  undefined4 uVar43;
  undefined1 auStack_fe8 [32];
  undefined **local_fc8;
  char *local_fc0;
  uint local_fb8;
  undefined4 local_fb0;
  undefined4 local_fa8;
  uint local_fa0;
  undefined4 local_f98;
  double local_f90;
  undefined4 local_f88;
  undefined4 local_f80;
  undefined4 local_f78;
  undefined4 local_f70;
  float local_f68;
  undefined4 local_f60;
  undefined4 local_f58;
  undefined4 local_f50;
  undefined4 local_f48;
  undefined4 local_f40;
  byte local_f38;
  char local_f30;
  undefined2 local_f28;
  undefined8 local_f20;
  undefined8 local_f18;
  uint uStack_f10;
  undefined8 local_f08;
  uint local_f00;
  longlong *local_ef8;
  undefined1 *local_ef0;
  undefined *local_ee8;
  undefined8 local_ee0;
  uint local_ed8;
  char local_ed4;
  undefined *local_ed0;
  uint *local_ec8;
  undefined8 uStack_ec0;
  undefined **local_eb8;
  longlong *local_eb0;
  longlong *local_ea8;
  undefined8 *local_ea0;
  undefined8 *local_e98;
  uint *local_e90;
  longlong *local_e88;
  char *local_e80;
  longlong *local_e78;
  longlong *local_e70;
  undefined1 *local_e68;
  undefined1 *local_e60;
  undefined1 *local_e58;
  undefined4 *local_e50;
  uint *local_e48;
  longlong *local_e40;
  undefined8 *local_e38;
  longlong *local_e30;
  byte *local_e28;
  char *local_e20;
  char *local_e18;
  uint local_e10;
  uint uStack_e0c;
  longlong local_e08;
  longlong local_e00;
  undefined *local_df8;
  longlong local_df0;
  longlong local_de8;
  longlong local_de0;
  longlong lStack_dd8;
  undefined8 uStack_dd0;
  undefined8 uStack_dc8;
  undefined8 local_dc0;
  undefined8 uStack_db8;
  byte local_db0;
  char local_daf;
  char local_dae;
  char local_dad;
  char local_dac [4];
  uint local_da8 [2];
  undefined8 local_da0;
  uint local_d98;
  undefined4 local_d90;
  undefined4 local_d8c;
  undefined4 local_d88;
  undefined1 local_d84;
  undefined4 local_d80;
  undefined4 local_d7c;
  undefined4 local_d78;
  float local_d74;
  float local_d70;
  float local_d6c;
  undefined4 local_d68;
  undefined4 local_d64;
  undefined4 local_d60;
  undefined4 local_d5c;
  undefined4 local_d58;
  undefined4 local_d54;
  undefined4 local_d50;
  undefined4 local_d4c;
  undefined4 local_d48;
  undefined1 local_d38 [100];
  float local_cd4;
  float local_cd0;
  uint local_cbc;
  undefined4 local_ca4;
  undefined4 local_ca0;
  uint local_c9c;
  uint local_c98;
  char local_c84;
  undefined1 local_c78 [100];
  float local_c14;
  float local_c10;
  undefined4 local_be0;
  char local_bc4;
  undefined8 local_bb8 [160];
  char local_6b8 [1536];
  ulonglong local_b8;
  
  local_b8 = DAT_1808d5f00 ^ (ulonglong)auStack_fe8;
  DAT_180b90028 = 0;
  if (param_2 == 0) {
    DAT_180b90028 = 0;
  }
  local_e00 = param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_de0 = _DAT_180bb8890;
  lStack_dd8 = lRam0000000180bb8898;
  uStack_dd0 = uRam0000000180bb88a0;
  uStack_dc8 = uRam0000000180bb88a8;
  local_dc0 = _DAT_180bb88b0;
  uStack_db8 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if ((lStack_dd8 == 0) || ((char)uStack_db8 == '\0')) {
    FUN_180353e30(&DAT_180b8fed0);
  }
  if ((DAT_180cc8360 == '\0') || (DAT_180cc83ca == '\0')) {
    local_dad = '\0';
  }
  else {
    local_dad = '\x01';
  }
  if ((DAT_180cc8360 == '\0') || (DAT_180cc83cb == '\0')) {
    local_dac[0] = '\0';
  }
  else {
    local_dac[0] = '\x01';
  }
  if ((local_dad == '\0') && (local_dac[0] == '\0')) {
    local_f28 = (ushort)local_f28._1_1_ << 8;
    if (DAT_180b90038 < 0) {
    }
  }
  else {
    local_f28 = CONCAT11(local_f28._1_1_,1);
  }
  local_ef8 = &local_e00;
  local_ef0 = &DAT_180b8e110;
  uVar21 = (ulonglong)DAT_180c6f878;
  if (DAT_180c6f878 == 0) {
    UVar17 = GetTickCount64();
    if (UVar17 < DAT_180c6f870) {
      uVar21 = 0;
    }
    else {
      local_f18 = &DAT_180901190;
      iVar29 = FUN_1805f68d0(&DAT_180901190);
      if (iVar29 != 0) goto LAB_180363845;
      if (DAT_1809011dc == 0x7fffffff) {
        DAT_1809011dc = 0x7ffffffe;
        goto LAB_18036385a;
      }
      uVar21 = (ulonglong)DAT_180c6f878;
      if ((DAT_180c6f878 == 0) && (DAT_180c6f870 <= UVar17)) {
        DAT_180c6f878 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
        uVar21 = (ulonglong)DAT_180c6f878;
        if (DAT_180c6f878 == 0) {
          DAT_180c6f870 = UVar17 + 1000;
        }
        else {
          DAT_180c6f870 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_180901190);
    }
  }
  if ((lStack_dd8 == 0) || ((int)uVar21 == 0)) {
LAB_1803621dc:
    local_df8 = (undefined *)0x0;
  }
  else {
    lVar22 = uVar21 + lStack_dd8;
    lVar18 = FUN_18017ea70();
    *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + 1;
    if (lVar22 == 0) {
      uStack_f10 = uStack_f10 & 0xffffff00;
      bVar7 = false;
      bVar30 = false;
    }
    else {
      local_ee8 = (undefined *)0x0;
      cVar12 = FUN_1804514f0(&local_ee8,lVar22,8);
      if (cVar12 == '\0') {
        uStack_f10 = (uint)uStack_f10._1_3_ << 8;
        bVar30 = false;
        bVar7 = false;
      }
      else {
        local_f18 = local_ee8;
        uStack_f10 = CONCAT31(uStack_f10._1_3_,1);
        bVar30 = true;
        bVar7 = true;
      }
    }
    lVar18 = FUN_18017ea70();
    if (*(int *)(lVar18 + 4) != 0) {
      *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + -1;
      bVar30 = bVar7;
    }
    local_df8 = local_f18;
    if (!bVar30) goto LAB_1803621dc;
  }
  iVar29 = DAT_180c6f858;
  if (DAT_180c6f858 == 0) {
    UVar17 = GetTickCount64();
    if (UVar17 < DAT_180c6f850) {
      iVar29 = 0;
    }
    else {
      local_f18 = &DAT_180901140;
      iVar29 = FUN_1805f68d0(&DAT_180901140);
      if (iVar29 != 0) goto LAB_180363845;
      if (DAT_18090118c == 0x7fffffff) {
        DAT_18090118c = 0x7ffffffe;
        goto LAB_18036385a;
      }
      if ((DAT_180c6f858 == 0) && (DAT_180c6f850 <= UVar17)) {
        DAT_180c6f858 = FUN_1804174b0("CCSPlayer_MovementServices",0x552bd122);
        if (DAT_180c6f858 == 0) {
          DAT_180c6f850 = UVar17 + 1000;
        }
        else {
          DAT_180c6f850 = 0xffffffffffffffff;
        }
      }
      iVar29 = DAT_180c6f858;
      FUN_1805f68fc(&DAT_180901140);
    }
  }
  uVar21 = (ulonglong)DAT_180c6f868;
  if (DAT_180c6f868 == 0) {
    UVar17 = GetTickCount64();
    if (UVar17 < DAT_180c6f860) {
      uVar21 = 0;
    }
    else {
      local_f18 = &DAT_1809011e0;
      iVar15 = FUN_1805f68d0(&DAT_1809011e0);
      if (iVar15 != 0) goto LAB_180363845;
      if (DAT_18090122c == 0x7fffffff) {
        DAT_18090122c = 0x7ffffffe;
        goto LAB_18036385a;
      }
      uVar21 = (ulonglong)DAT_180c6f868;
      if ((DAT_180c6f868 == 0) && (DAT_180c6f860 <= UVar17)) {
        DAT_180c6f868 = FUN_1804174b0("CCSPlayer_MovementServices",0xb2c4ee6c);
        uVar21 = (ulonglong)DAT_180c6f868;
        if (DAT_180c6f868 == 0) {
          DAT_180c6f860 = UVar17 + 1000;
        }
        else {
          DAT_180c6f860 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_1809011e0);
    }
  }
  if ((local_df8 == (undefined *)0x0) || ((int)uVar21 == 0)) {
    local_f08._0_5_ = (uint5)(uint)local_f08;
    local_ee0 = local_f08;
  }
  else {
    puVar23 = local_df8 + uVar21;
    lVar18 = FUN_18017ea70();
    *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + 1;
    if (puVar23 == (undefined *)0x0) {
LAB_180362399:
      uStack_e0c = uStack_e0c & 0xffffff00;
    }
    else {
      local_e10 = 0;
      cVar12 = FUN_1804514f0(&local_e10,puVar23,4);
      if (cVar12 == '\0') goto LAB_180362399;
      uStack_e0c = CONCAT31(uStack_e0c._1_3_,1);
    }
    lVar18 = FUN_18017ea70();
    if (*(int *)(lVar18 + 4) != 0) {
      *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + -1;
    }
    local_ee0 = (undefined *)CONCAT44(uStack_e0c,local_e10);
  }
  uVar21 = (ulonglong)DAT_180c6f85c;
  local_ed0 = local_ee0;
  if (DAT_180c6f85c == 0) {
    UVar17 = GetTickCount64();
    if (UVar17 < DAT_180c6f838) {
      uVar21 = 0;
    }
    else {
      local_f18 = &DAT_180901050;
      iVar15 = FUN_1805f68d0(&DAT_180901050);
      if (iVar15 != 0) goto LAB_180363845;
      if (DAT_18090109c == 0x7fffffff) {
        DAT_18090109c = 0x7ffffffe;
        goto LAB_18036385a;
      }
      uVar21 = (ulonglong)DAT_180c6f85c;
      if ((DAT_180c6f85c == 0) && (DAT_180c6f838 <= UVar17)) {
        DAT_180c6f85c = FUN_1804174b0("CCSPlayerModernJump",0x680c80ac);
        uVar21 = (ulonglong)DAT_180c6f85c;
        if (DAT_180c6f85c == 0) {
          DAT_180c6f838 = UVar17 + 1000;
        }
        else {
          DAT_180c6f838 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_180901050);
    }
  }
  if ((((local_df8 == (undefined *)0x0) || (iVar29 == 0)) ||
      (puVar23 = local_df8 + iVar29, puVar23 == (undefined *)0x0)) || ((int)uVar21 == 0)) {
    local_f08._0_5_ = (uint5)(uint)local_f08;
    local_f20 = local_f08;
  }
  else {
    lVar18 = FUN_18017ea70();
    *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + 1;
    if (puVar23 + uVar21 == (undefined *)0x0) {
LAB_1803624da:
      uStack_e0c = uStack_e0c & 0xffffff00;
    }
    else {
      local_e10 = 0;
      cVar12 = FUN_1804514f0(&local_e10,puVar23 + uVar21,4);
      if (cVar12 == '\0') goto LAB_1803624da;
      uStack_e0c = CONCAT31(uStack_e0c._1_3_,1);
    }
    lVar18 = FUN_18017ea70();
    if (*(int *)(lVar18 + 4) != 0) {
      *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + -1;
    }
    local_f20 = (undefined *)CONCAT44(uStack_e0c,local_e10);
  }
  uVar21 = (ulonglong)DAT_180c6f830;
  local_ee8 = local_f20;
  if (DAT_180c6f830 == 0) {
    UVar17 = GetTickCount64();
    if (UVar17 < DAT_180c6f828) {
      uVar21 = 0;
    }
    else {
      local_f18 = &DAT_1809010f0;
      iVar29 = FUN_1805f68d0(&DAT_1809010f0);
      if (iVar29 != 0) goto LAB_180363845;
      if (DAT_18090113c == 0x7fffffff) {
        DAT_18090113c = 0x7ffffffe;
        goto LAB_18036385a;
      }
      uVar21 = (ulonglong)DAT_180c6f830;
      if ((DAT_180c6f830 == 0) && (DAT_180c6f828 <= UVar17)) {
        DAT_180c6f830 = FUN_1804174b0("CPlayer_MovementServices",0x9927f73d);
        uVar21 = (ulonglong)DAT_180c6f830;
        if (DAT_180c6f830 == 0) {
          DAT_180c6f828 = UVar17 + 1000;
        }
        else {
          DAT_180c6f828 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_1809010f0);
    }
  }
  if ((local_df8 == (undefined *)0x0) || ((int)uVar21 == 0)) {
    local_f08._0_5_ = (uint5)(uint)local_f08;
    puVar23 = local_f08;
  }
  else {
    puVar23 = local_df8 + uVar21;
    lVar18 = FUN_18017ea70();
    *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + 1;
    if (puVar23 == (undefined *)0x0) {
LAB_18036260f:
      uStack_e0c = uStack_e0c & 0xffffff00;
    }
    else {
      local_e10 = 0;
      cVar12 = FUN_1804514f0(&local_e10,puVar23,4);
      if (cVar12 == '\0') goto LAB_18036260f;
      uStack_e0c = CONCAT31(uStack_e0c._1_3_,1);
    }
    lVar18 = FUN_18017ea70();
    if (*(int *)(lVar18 + 4) != 0) {
      *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + -1;
    }
    puVar23 = (undefined *)CONCAT44(uStack_e0c,local_e10);
  }
  uVar27 = DAT_180b90044;
  lVar22 = DAT_180b90038;
  lVar18 = *(longlong *)(local_e00 + 8);
  cVar12 = (char)((ulonglong)puVar23 >> 0x20);
  if ((-1 < DAT_180b90008) && (DAT_180b90008 < lVar18)) {
    if (cVar12 == '\0') {
      bVar30 = lVar18 - DAT_180b90008 < 3;
    }
    else {
      bVar30 = (longlong)((ulonglong)puVar23 & 0xffffffff) < DAT_180b90008;
    }
    if (bVar30) goto LAB_1803626c5;
  }
  cVar9 = local_ee0._4_1_;
  if ((-1 < DAT_180b90038) && (DAT_180b90038 < lVar18)) {
    if (cVar12 == '\0') {
      bVar30 = lVar18 - DAT_180b90038 < 3;
    }
    else {
      bVar30 = (longlong)((ulonglong)puVar23 & 0xffffffff) < DAT_180b90038;
    }
    if (bVar30) {
LAB_1803626c5:
      FUN_180363880(&local_ef8,0xf);
    }
    if ((-1 < DAT_180b90038) && (DAT_180b90038 < lVar18)) {
      uVar16 = 0xffffffff;
      if (local_f20._4_1_ != '\0') {
        uVar16 = local_ee8._0_4_;
      }
      uVar28 = 0xffffffff;
      if (local_ee0._4_1_ != '\0') {
        uVar28 = local_ed0._0_4_;
      }
      FUN_18063ab10(local_6b8,0,0x600);
      local_f90 = (double)DAT_180b90048;
      local_fb8 = _DAT_180b8e114 & 1;
      local_fa0 = uVar27;
      local_fb0 = DAT_180b90040;
      local_fc0 = (char *)lVar22;
      local_fc8 = (undefined **)lVar18;
      local_fa8 = uVar28;
      local_f98 = uVar16;
      FUN_18015ad60(local_6b8,0x600,0xffffffffffffffff,
                    "command=%lld prior=%lld ground=%d jump_tick=(%d,%d) landed_tick=(%d,%d) stand=%.5f server_ack=0"
                   );
      local_fc8 = &PTR_180700558;
      if (local_6b8[0] != '\0') {
        local_fc8 = (undefined **)&DAT_1806bcfc0;
      }
      local_fc0 = local_6b8;
      FUN_1800f6900(0);
      DAT_180b90038 = -1;
    }
  }
  if ((char)local_f28 == '\0') {
  }
  if ((((DAT_180b8e110 == '\0') || (cVar9 == '\0')) || (local_f20._4_1_ == '\0')) ||
     (DAT_180ccaa36 != '\0')) {
    FUN_180363880(&local_ef8,0);
  }
  if ((_DAT_180b8e114 & 1) != 0) {
    FUN_180363880(&local_ef8,1);
  }
  uVar27 = _DAT_180b8e114 & 2;
  auVar40 = ZEXT864(0);
  if (0.0 <= DAT_180b8e120) {
    FUN_180363880(&local_ef8,3);
  }
  if (((((DAT_180b90050 != '\0') || (DAT_180b8fffc != '\0')) ||
       ((DAT_1808fedf1 != '\0' || ((DAT_180b900c0 != '\0' || (DAT_180b8fc30 != '\0')))))) ||
      (DAT_180b8fe80 != '\0')) || (DAT_180cad358 != '\0')) {
    FUN_180363880(&local_ef8,4);
  }
  uVar21 = *(ulonglong *)(local_e00 + 0x60) | DAT_180b0dfd8;
  if ((uVar27 == 0) || (((byte)*(ulonglong *)(local_e00 + 0x60) & (byte)DAT_180b0dfd8 & 4) == 0)) {
    local_db0 = 0;
  }
  else {
    local_db0 = 1;
  }
  if (((uVar21 & 4) != 0) && (local_db0 == 0)) {
LAB_1803637ac:
    FUN_180363880(&local_ef8,5);
  }
  if ((uVar27 != 0) && (local_db0 == 0)) {
    FUN_180363880(&local_ef8,2);
  }
  if ((((*(byte *)(local_e00 + 0x70) | *(byte *)(local_e00 + 0x68)) & 4) != 0) ||
     (((uVar21 & 2) != 0 && (DAT_180cc81b0 == '\0')))) goto LAB_1803637ac;
  uVar21 = (ulonglong)DAT_180c6f848;
  if (DAT_180c6f848 == 0) {
    UVar17 = GetTickCount64();
    if (UVar17 < DAT_180c6f840) {
      uVar21 = 0;
    }
    else {
      local_f18 = &DAT_1809010a0;
      iVar29 = FUN_1805f68d0(&DAT_1809010a0);
      if (iVar29 != 0) goto LAB_180363845;
      if (DAT_1809010ec == 0x7fffffff) {
        DAT_1809010ec = 0x7ffffffe;
        goto LAB_18036385a;
      }
      uVar21 = (ulonglong)DAT_180c6f848;
      if ((DAT_180c6f848 == 0) && (DAT_180c6f840 <= UVar17)) {
        DAT_180c6f848 = FUN_1804174b0("C_BaseEntity");
        uVar21 = (ulonglong)DAT_180c6f848;
        if (DAT_180c6f848 == 0) {
          DAT_180c6f840 = UVar17 + 1000;
        }
        else {
          DAT_180c6f840 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_1809010a0);
    }
  }
  if ((lStack_dd8 == 0) || ((int)uVar21 == 0)) {
    local_f28 = local_f28 & 0xff;
  }
  else {
    lVar22 = uVar21 + lStack_dd8;
    lVar18 = FUN_18017ea70();
    *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + 1;
    if (lVar22 == 0) {
LAB_180362a18:
      local_f28 = local_f28 & 0xff;
    }
    else {
      local_f28 = local_f28 & 0xff00;
      cVar12 = FUN_1804514f0(&local_f28,lVar22,1);
      if (cVar12 == '\0') goto LAB_180362a18;
      local_f28 = CONCAT11(1,(char)local_f28);
    }
    lVar18 = FUN_18017ea70();
    if (*(int *)(lVar18 + 4) != 0) {
      *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + -1;
    }
  }
  uVar8 = local_f28;
  uVar21 = (ulonglong)DAT_180c6f808;
  if (DAT_180c6f808 == 0) {
    UVar17 = GetTickCount64();
    if (UVar17 < DAT_180c6f800) {
      uVar21 = 0;
    }
    else {
      local_f18 = &DAT_180900fb0;
      iVar29 = FUN_1805f68d0(&DAT_180900fb0);
      if (iVar29 != 0) goto LAB_180363845;
      if (DAT_180900ffc == 0x7fffffff) {
        DAT_180900ffc = 0x7ffffffe;
        goto LAB_18036385a;
      }
      uVar21 = (ulonglong)DAT_180c6f808;
      if ((DAT_180c6f808 == 0) && (DAT_180c6f800 <= UVar17)) {
        DAT_180c6f808 = FUN_1804174b0("CBasePlayerController");
        uVar21 = (ulonglong)DAT_180c6f808;
        if (DAT_180c6f808 == 0) {
          DAT_180c6f800 = UVar17 + 1000;
        }
        else {
          DAT_180c6f800 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_180900fb0);
    }
  }
  if ((local_de0 == 0) || ((int)uVar21 == 0)) {
    local_f08._0_5_ = (uint5)(uint)local_f08;
    puVar23 = local_f08;
  }
  else {
    lVar22 = uVar21 + local_de0;
    lVar18 = FUN_18017ea70();
    *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + 1;
    if (lVar22 == 0) {
LAB_180362b39:
      local_f20._0_5_ = (uint5)(uint)(float)local_f20;
    }
    else {
      local_e10 = 0;
      cVar12 = FUN_1804514f0(&local_e10,lVar22,4);
      if (cVar12 == '\0') goto LAB_180362b39;
      local_f20._0_5_ = CONCAT14(1,local_e10);
    }
    lVar18 = FUN_18017ea70();
    if (*(int *)(lVar18 + 4) != 0) {
      *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + -1;
    }
    puVar23 = local_f20;
  }
  uVar21 = (ulonglong)DAT_180c6f7fc;
  local_ee0 = puVar23;
  if (DAT_180c6f7fc == 0) {
    UVar17 = GetTickCount64();
    if (UVar17 < DAT_180c6f820) {
      uVar21 = 0;
    }
    else {
      local_f18 = &DAT_180901000;
      iVar29 = FUN_1805f68d0(&DAT_180901000);
      if (iVar29 != 0) goto LAB_180363845;
      if (DAT_18090104c == 0x7fffffff) {
        DAT_18090104c = 0x7ffffffe;
        goto LAB_18036385a;
      }
      uVar21 = (ulonglong)DAT_180c6f7fc;
      if ((DAT_180c6f7fc == 0) && (DAT_180c6f820 <= UVar17)) {
        DAT_180c6f7fc = FUN_1804174b0("CCSPlayer_MovementServices");
        uVar21 = (ulonglong)DAT_180c6f7fc;
        if (DAT_180c6f7fc == 0) {
          DAT_180c6f820 = UVar17 + 1000;
        }
        else {
          DAT_180c6f820 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_180901000);
    }
  }
  if ((local_df8 == (undefined *)0x0) || ((int)uVar21 == 0)) {
    local_f08._0_5_ = (uint5)(uint)local_f08;
    local_f18 = local_f08;
  }
  else {
    puVar24 = local_df8 + uVar21;
    lVar18 = FUN_18017ea70();
    *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + 1;
    if (puVar24 == (undefined *)0x0) {
LAB_180362c67:
      local_f20._0_5_ = (uint5)(uint)(float)local_f20;
    }
    else {
      local_e10 = auVar40._0_4_;
      cVar12 = FUN_1804514f0(&local_e10,puVar24,4);
      if (cVar12 == '\0') goto LAB_180362c67;
      local_f20._0_5_ = CONCAT14(1,local_e10);
    }
    lVar18 = FUN_18017ea70();
    if (*(int *)(lVar18 + 4) != 0) {
      *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + -1;
    }
    local_f18 = local_f20;
  }
  uVar21 = (ulonglong)DAT_180c6f818;
  local_f08 = local_f18;
  if (DAT_180c6f818 == 0) {
    UVar17 = GetTickCount64();
    if (UVar17 < DAT_180c6f810) {
      uVar21 = 0;
    }
    else {
      local_f20 = &DAT_180900f60;
      iVar29 = FUN_1805f68d0(&DAT_180900f60);
      if (iVar29 != 0) {
LAB_180363845:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_180900fac == 0x7fffffff) {
        DAT_180900fac = 0x7ffffffe;
LAB_18036385a:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      uVar21 = (ulonglong)DAT_180c6f818;
      if ((DAT_180c6f818 == 0) && (DAT_180c6f810 <= UVar17)) {
        DAT_180c6f818 = FUN_1804174b0("CCSPlayer_MovementServices");
        uVar21 = (ulonglong)DAT_180c6f818;
        if (DAT_180c6f818 == 0) {
          DAT_180c6f810 = UVar17 + 1000;
        }
        else {
          DAT_180c6f810 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_180900f60);
    }
  }
  if ((local_df8 == (undefined *)0x0) || ((int)uVar21 == 0)) {
    local_f20._0_5_ = (uint5)(uint)(float)local_f20;
  }
  else {
    puVar24 = local_df8 + uVar21;
    lVar18 = FUN_18017ea70();
    *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + 1;
    if (puVar24 == (undefined *)0x0) {
LAB_180362d8b:
      local_f20._0_5_ = (uint5)(uint)(float)local_f20;
    }
    else {
      local_e10 = auVar40._0_4_;
      cVar12 = FUN_1804514f0(&local_e10,puVar24,4);
      if (cVar12 == '\0') goto LAB_180362d8b;
      local_f20._0_5_ = CONCAT14(1,local_e10);
    }
    lVar18 = FUN_18017ea70();
    if (*(int *)(lVar18 + 4) != 0) {
      *(int *)(lVar18 + 4) = *(int *)(lVar18 + 4) + -1;
    }
  }
  puVar24 = local_f20;
  if ((DAT_180cd4150 & 1) == 0) {
    DAT_180cd4150 = DAT_180cd4150 | 1;
    local_e10 = 0x4b480a8e;
    local_e08 = 0;
    local_ec8 = &local_e10;
    uStack_ec0._0_4_ = 1;
    uStack_ec0._4_4_ = 0;
    FUN_18044c9c0(DAT_180c64058);
    DAT_180cd4158 = local_e08;
  }
  if ((((local_f28._1_1_ == '\0') || (((char)uVar8 - 7U & 0xfd) == 0)) || (local_ee0._4_1_ == '\0'))
     || (((local_f08._4_1_ == '\0' || ((char)((ulonglong)puVar24 >> 0x20) == '\0')) ||
         (DAT_180cd4158 == 0)))) {
LAB_180363799:
    FUN_180363880(&local_ef8,8);
  }
  fVar37 = (float)(int)puVar23 * 0.015625;
  auVar33 = ZEXT464(*(uint *)(DAT_180cd4158 + 0x58));
  fVar31 = (float)local_f18;
  sVar14 = thunk_FUN_180624430((ulonglong)local_f18 & 0xffffffff);
  if ((0 < sVar14) || (((uint)(float)local_f20 & 0x7f800000) == 0x7f800000)) {
LAB_180363789:
    FUN_180363880(&local_ef8,6);
  }
  fVar35 = (float)local_f20;
  sVar14 = thunk_FUN_180624430(auVar33._0_8_);
  if (((0 < sVar14) || ((auVar33._0_4_ < auVar40._0_4_ || (fVar31 < 1.5)))) ||
     ((uVar27 == 0 && (fVar37 < fVar35 + auVar33._0_4_)))) goto LAB_180363789;
  *(uint *)(local_e00 + 0x20) = *(uint *)(local_e00 + 0x20) | 1;
  lVar18 = 0;
  if (*(longlong *)(local_e00 + 0x40) != 0) {
    lVar18 = *(longlong *)(local_e00 + 0x40) + 0x10;
  }
  local_df0 = lVar18 + 8;
  if (lVar18 == 0) {
    local_df0 = 0;
  }
  local_de8 = lVar18;
  if ((local_df0 == 0) || (uVar27 = *(uint *)(local_df0 + 8), 0x1b < uVar27)) {
    FUN_180363880(&local_ef8,7);
  }
  local_da8[0] = uVar27;
  FUN_18063ab10(local_bb8,0,0x500);
  auVar36 = auVar40._0_16_;
  puVar20 = local_bb8;
  lVar22 = 0x20;
  do {
    *(undefined8 *)((longlong)puVar20 + 4) = 0;
    *(undefined8 *)((longlong)puVar20 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar20 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar20 + 0x1c) = 0;
    *(undefined4 *)((longlong)puVar20 + 0x24) = 0;
    *(undefined4 *)puVar20 = 0;
    puVar20 = puVar20 + 5;
    lVar22 = lVar22 + -1;
  } while (lVar22 != 0);
  iVar29 = 0;
  fVar37 = 1.0;
  if (0 < (int)uVar27) {
    lVar22 = 0;
    puVar20 = local_bb8;
    fVar37 = 1.0;
    do {
      lVar2 = *(longlong *)(lVar22 + 8 + *(longlong *)(lVar18 + 0x18));
      puVar25 = (undefined8 *)0x0;
      if (lVar2 != 0) {
        puVar25 = (undefined8 *)(lVar2 + 0x10);
      }
      if (puVar25 == (undefined8 *)0x0) goto LAB_180363799;
      fVar31 = *(float *)((longlong)puVar25 + 0x14);
      auVar40 = ZEXT1664(auVar40._0_16_);
      sVar14 = thunk_FUN_180624430();
      auVar36 = auVar40._0_16_;
      if (((0 < sVar14) || (fVar31 < auVar40._0_4_)) || (fVar37 < fVar31)) goto LAB_180363799;
      if ((*(byte *)(puVar25 + 1) & 4) != 0) goto LAB_1803637ac;
      uVar4 = puVar25[1];
      uVar5 = puVar25[2];
      uVar6 = puVar25[3];
      uVar1 = puVar25[4];
      *puVar20 = *puVar25;
      puVar20[1] = uVar4;
      puVar20[2] = uVar5;
      puVar20[3] = uVar6;
      puVar20[4] = uVar1;
      iVar29 = iVar29 + 1;
      lVar22 = lVar22 + 8;
      puVar20 = puVar20 + 5;
    } while (iVar29 < (int)uVar27);
  }
  auVar40 = ZEXT1664(auVar36);
  lVar18 = FUN_1803032c0(lStack_dd8,local_df8);
  if ((DAT_180cd4160 & 1) == 0) {
    DAT_180cd4160 = DAT_180cd4160 | 1;
    DAT_180cd4168 = FUN_18044c960(DAT_180c64058,0x58e37709);
  }
  lVar22 = DAT_180cd4168;
  if ((DAT_180cd4170 & 1) == 0) {
    DAT_180cd4170 = DAT_180cd4170 | 1;
    DAT_180cd4178 = FUN_18044c960(DAT_180c64058,0x2bf43f77);
  }
  lVar2 = DAT_180cd4178;
  if (((*(char *)(lVar18 + 0x48) == '\0') || (lVar22 == 0)) || (DAT_180cd4178 == 0))
  goto LAB_180363799;
  local_d80 = DAT_180b8e13c;
  local_d7c = DAT_180b8e140;
  local_d78 = DAT_180b8e144;
  local_d74 = (float)DAT_180b8e118;
  local_d70 = DAT_180b8e118._4_4_;
  local_d6c = DAT_180b8e120;
  local_d68 = *(undefined4 *)(lVar18 + 0x18);
  local_d64 = *(undefined4 *)(lVar18 + 0x1c);
  local_d60 = *(undefined4 *)(lVar18 + 0x20);
  local_d5c = *(undefined4 *)(lVar18 + 0x24);
  local_d58 = *(undefined4 *)(lVar18 + 0x28);
  local_d54 = *(undefined4 *)(lVar18 + 0x2c);
  local_d50 = *(undefined4 *)(lVar22 + 0x58);
  uVar16 = FUN_180363b90();
  puVar19 = (undefined4 *)FUN_18035de60(&local_f18,lStack_dd8,uVar16);
  auVar33 = ZEXT464(0x7fc00000);
  if (*(char *)(puVar19 + 1) == '\0') {
    local_d4c = 0x7fc00000;
  }
  else {
    local_d4c = *puVar19;
  }
  local_d48 = *(undefined4 *)(lVar2 + 0x58);
  local_daf = '\0';
  local_ec8 = (uint *)&local_daf;
  uStack_ec0._0_4_ = (undefined4)lVar18;
  uStack_ec0._4_4_ = (uint)((ulonglong)lVar18 >> 0x20);
  local_eb8 = &local_df8;
  local_eb0 = (longlong *)&local_d80;
  FUN_180364770(&local_ee0,&local_d80,&local_ec8);
  if (local_ed4 == '\0') {
    uStack_f10 = uStack_f10 & 0xffffff00;
    puVar20 = &local_f18;
  }
  else {
    local_f18 = local_ee0;
    uStack_f10 = local_ed8;
    puVar20 = (undefined8 *)
              FUN_180361de0(&local_f08,&local_f18,(longlong)(int)local_da8[0],local_db0);
  }
  bVar10 = local_db0;
  local_da0 = (undefined *)*puVar20;
  local_d98 = *(uint *)(puVar20 + 1);
  cVar12 = '\0';
  if ((char)local_d98 == '\0') {
    if ((DAT_180b8ff6c == '\0') || (DAT_180b8ff68 != *(int *)(local_e00 + 8))) {
      uStack_ec0._4_4_ = uStack_ec0._4_4_ & 0xffffff00;
      auVar36._8_4_ = (undefined4)uStack_ec0;
      auVar36._0_8_ = local_ec8;
      auVar36._12_4_ = uStack_ec0._4_4_;
    }
    else {
      auVar36 = _DAT_180b8ffe4;
    }
    auVar34 = ZEXT1664(auVar36);
    if (auVar36[0xc] == '\0') goto LAB_180363358;
    uVar21 = (ulonglong)(int)local_da8[0];
    auVar3 = vshufps_avx(auVar36,auVar36,0x55);
    auVar39 = ZEXT1664(auVar3);
    local_f18 = (undefined *)CONCAT44(auVar3._0_4_,auVar36._0_4_);
    uStack_f10 = auVar36._8_4_;
    FUN_180361de0(&local_f08,&local_f18,uVar21,local_db0);
    if ((char)local_f00 == '\0') {
      if (((0x1b < uVar21) || (auVar34._0_4_ <= fVar37)) || (2.0 < auVar34._0_4_)) {
LAB_180363339:
        uVar27 = 0;
        local_da0 = local_f18;
      }
      else {
        bVar30 = ((uint)auVar39._0_4_ & 0x7f800000) != 0x7f800000;
        if ((!bVar30) || (auVar39._0_4_ <= auVar40._0_4_)) goto LAB_180363339;
        auVar36 = vpcmpeqd_avx(ZEXT116(bVar10),SUB6416(ZEXT464(0),0));
        auVar36 = vblendvps_avx(SUB6416(ZEXT464(0x3f7c0000),0),auVar40._0_16_,auVar36);
        uVar27 = (uint)bVar30;
        auVar36 = vunpcklps_avx(auVar36,SUB6416(ZEXT464(0x3f780000),0));
        local_da0 = auVar36._0_8_;
      }
      uStack_f10 = CONCAT31(uStack_f10._1_3_,(char)uVar27);
      local_f00 = uStack_f10;
    }
    else {
      uVar27 = local_f00;
      local_da0 = local_f08;
    }
    cVar12 = (char)uVar27;
    local_d98 = local_f00;
    if (cVar12 == '\0') {
LAB_180363358:
      if (local_daf == '\0') {
        FUN_180363880(&local_ef8,(local_ed4 != '\0') + '\n');
      }
      FUN_180363880(&local_ef8,9);
    }
  }
  else {
    auVar39 = ZEXT464(local_ee0._4_4_);
    auVar34 = ZEXT464((uint)local_ee0);
  }
  local_ec8 = local_da8;
  uStack_ec0 = &local_de8;
  local_eb8 = (undefined **)local_bb8;
  local_eb0 = &local_df0;
  local_c84 = '\0';
  local_bc4 = '\0';
  uVar28 = SUB84(local_ed0,0);
  uVar16 = SUB84(local_ee8,0);
  local_d88 = 0;
  local_d84 = 1;
  local_dae = '\0';
  local_e80 = &local_dae;
  local_e78 = &local_e00;
  local_e70 = &local_de0;
  local_e68 = local_d38;
  local_e60 = local_c78;
  local_e58 = &DAT_180b8e110;
  local_e50 = &local_d90;
  local_e48 = local_da8;
  local_e40 = &local_de8;
  local_e38 = local_bb8;
  local_e30 = &local_df0;
  local_e28 = &local_db0;
  local_e20 = &local_dad;
  local_e18 = local_dac;
  local_ea8 = &local_df0;
  local_ea0 = &local_da0;
  local_e98 = local_bb8;
  local_e90 = local_da8;
  local_e88 = &local_de8;
  local_d90 = uVar28;
  local_d8c = uVar16;
  cVar13 = FUN_180364c80(&local_ea8,&local_e80,&local_ec8);
  UVar17 = GetTickCount64();
  cVar11 = local_bc4;
  cVar9 = local_c84;
  if ((cVar13 != '\0') || (DAT_180c6f7e8 <= UVar17)) {
    DAT_180c6f7e8 = UVar17 + 500;
    auVar36 = auVar33._0_16_;
    if (local_c84 == '\0') {
      auVar41 = ZEXT1664(auVar36);
      auVar42 = ZEXT1664(auVar36);
    }
    else {
      auVar41 = ZEXT464(local_c9c);
      auVar42 = ZEXT464(local_c98);
    }
    uVar43 = DAT_180b8e158;
    if (local_bc4 == '\0') {
      auVar38 = ZEXT1664(auVar36);
    }
    else {
      fVar37 = local_c10 * local_c10 + local_c14 * local_c14;
      if (fVar37 == auVar40._0_4_) {
        auVar38 = ZEXT1664(auVar40._0_16_);
      }
      else if (fVar37 < 0.0) {
        auVar38._0_8_ = FUN_18061e150(fVar37);
        auVar38._8_56_ = extraout_var;
        auVar38 = ZEXT1664(auVar38._0_16_);
      }
      else {
        auVar38 = ZEXT464((uint)SQRT(fVar37));
      }
    }
    local_f68 = auVar40._0_4_;
    if (cVar9 != '\0') {
      fVar37 = local_cd0 * local_cd0 + local_cd4 * local_cd4;
      if (fVar37 == local_f68) {
        auVar33 = ZEXT1664(auVar40._0_16_);
      }
      else if (fVar37 < 0.0) {
        auVar33._0_8_ = FUN_18061e150(fVar37);
        local_f68 = auVar40._0_4_;
        auVar33._8_56_ = extraout_var_00;
        auVar33 = ZEXT1664(auVar33._0_16_);
      }
      else {
        auVar33 = ZEXT464((uint)SQRT(fVar37));
      }
    }
    uVar32 = auVar34._0_4_;
    uVar27 = auVar39._0_4_;
    local_f60 = auVar33._0_4_;
    local_f58 = auVar38._0_4_;
    local_f48 = auVar42._0_4_;
    local_f40 = auVar41._0_4_;
    fVar37 = (float)DAT_180b8e118 * (float)DAT_180b8e118 + DAT_180b8e118._4_4_ * DAT_180b8e118._4_4_
    ;
    if (fVar37 != local_f68) {
      if (fVar37 < 0.0) {
        local_f68 = (float)FUN_18061e150(fVar37);
        uVar32 = auVar34._0_4_;
        uVar27 = auVar39._0_4_;
        local_f60 = auVar33._0_4_;
        local_f58 = auVar38._0_4_;
        local_f48 = auVar42._0_4_;
        local_f40 = auVar41._0_4_;
      }
      else {
        local_f68 = SQRT(fVar37);
      }
    }
    local_f70 = 0xffffffff;
    if (cVar11 != '\0') {
      local_f70 = local_be0;
    }
    local_f80 = 0xffffffff;
    if (cVar9 != '\0') {
      local_f80 = local_ca0;
    }
    uVar26 = 0xffffffff;
    if (cVar9 != '\0') {
      local_fa0 = local_cbc & 1;
      uVar26 = local_ca4;
    }
    else {
      local_fa0 = 0;
    }
    local_f38 = local_db0;
    local_f78 = local_d88;
    local_f90 = (double)CONCAT44(local_f90._4_4_,uVar26);
    local_fa8 = CONCAT31(local_fa8._1_3_,cVar13);
    local_fb0 = local_da0._4_4_;
    local_fc0 = (char *)CONCAT44(local_fc0._4_4_,uVar32);
    local_fc8 = *(undefined ***)(local_e00 + 8);
    local_fb8 = uVar27;
    local_f98 = uVar28;
    local_f88 = uVar16;
    local_f50 = uVar43;
    local_f30 = cVar12;
    FUN_180364d30();
    if (cVar13 != '\0') {
      FUN_180363880(&local_ef8,0xe);
      goto LAB_180363740;
    }
  }
  FUN_180363880(&local_ef8,(local_dae != '\0') + '\f');
  if (cVar13 == '\0') {
  }
LAB_180363740:
  DAT_180b90048 = (float)local_da0._4_4_;
  DAT_180b90044 = uVar16;
  DAT_180b90040 = uVar28;
  DAT_180b90038 = *(undefined8 *)(local_e00 + 8);
  DAT_180b90028 = 1;
}



