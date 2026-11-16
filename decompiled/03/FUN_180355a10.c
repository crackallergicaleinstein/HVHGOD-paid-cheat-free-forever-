// FUN_180355a10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180355a10 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180355a10(undefined8 param_1,longlong param_2)

{
  float *pfVar1;
  undefined8 ***pppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 ***pppuVar5;
  undefined8 ***pppuVar6;
  bool bVar7;
  byte bVar8;
  ushort uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  byte bVar12;
  byte bVar13;
  undefined1 auVar14 [32];
  undefined8 ****ppppuVar15;
  undefined1 auVar16 [32];
  char cVar17;
  undefined1 uVar18;
  short sVar19;
  int iVar20;
  int iVar21;
  ULONGLONG UVar22;
  longlong lVar23;
  undefined4 *puVar24;
  undefined8 *puVar25;
  longlong *plVar26;
  undefined8 ****ppppuVar27;
  ulonglong uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  longlong *plVar31;
  longlong *plVar32;
  uint *puVar33;
  longlong lVar34;
  undefined *puVar35;
  undefined4 uVar36;
  longlong lVar37;
  int iVar38;
  uint uVar39;
  undefined1 auVar40 [8];
  bool bVar41;
  undefined1 extraout_var [56];
  undefined1 auVar42 [16];
  float fVar43;
  undefined1 auVar44 [64];
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [64];
  float fVar48;
  undefined1 auVar49 [64];
  float fVar50;
  undefined1 auVar51 [64];
  float fVar52;
  undefined1 auVar53 [16];
  undefined1 auStack_1ae8 [32];
  undefined **local_1ac8;
  undefined8 ****local_1ac0;
  uint local_1ab8;
  double local_1ab0;
  uint local_1aa8;
  uint local_1aa0;
  undefined8 *local_1a98;
  uint local_1a90;
  uint local_1a88;
  double local_1a80;
  int local_1a78;
  undefined8 local_1a70;
  double local_1a68;
  double local_1a60;
  double local_1a58;
  double local_1a50;
  double local_1a48;
  double local_1a40;
  double local_1a38;
  double local_1a30;
  double local_1a28;
  undefined8 local_1a20;
  undefined4 local_1a18;
  undefined8 local_1a10;
  undefined2 local_1a08;
  undefined1 uStack_1a06;
  byte bStack_1a05;
  undefined4 uStack_1a04;
  undefined4 uStack_1a00;
  undefined4 uStack_19fc;
  uint uStack_19f8;
  undefined1 uStack_19f4;
  undefined1 uStack_19f3;
  ushort uStack_19f2;
  undefined1 auStack_19f0 [16];
  undefined4 uStack_19e0;
  undefined4 uStack_19dc;
  uint5 uStack_19d8;
  undefined3 uStack_19d3;
  uint5 uStack_19d0;
  undefined3 uStack_19cb;
  undefined1 local_19c8;
  undefined1 uStack_19c7;
  undefined1 uStack_19c6;
  uint5 uStack_19c5;
  undefined1 uStack_19c0;
  uint7 uStack_19bf;
  undefined8 ***local_19b8;
  longlong lStack_19b0;
  undefined1 uStack_19a8;
  undefined4 uStack_19a7;
  undefined2 uStack_19a3;
  undefined1 uStack_19a1;
  undefined8 uStack_19a0;
  undefined1 local_1998 [32];
  undefined8 local_1978;
  longlong lStack_1970;
  undefined8 uStack_1968;
  undefined8 *puStack_1960;
  undefined8 local_1958;
  undefined8 uStack_1950;
  undefined1 local_1948;
  undefined8 local_1938;
  undefined1 local_1930 [2432];
  undefined8 local_fb0;
  undefined8 local_fa8;
  undefined8 local_fa0;
  undefined1 local_f98;
  undefined8 local_f88;
  longlong local_f80;
  undefined8 **local_f78;
  longlong local_f70;
  longlong local_f68;
  undefined8 local_f60;
  longlong local_f58;
  undefined8 local_f50;
  longlong local_f48;
  undefined1 local_f38 [8];
  longlong lStack_f30;
  undefined1 auStack_f28 [16];
  longlong local_f18;
  longlong local_f10;
  undefined8 *local_f08;
  longlong local_f00;
  undefined8 *local_ef8;
  undefined4 *local_ef0;
  undefined4 *local_ee8;
  longlong local_ee0;
  longlong lStack_ed8;
  undefined8 uStack_ed0;
  undefined8 uStack_ec8;
  undefined8 local_ec0;
  undefined8 uStack_eb8;
  char local_eb0 [4];
  int local_eac;
  undefined4 local_ea8;
  undefined4 local_ea4;
  undefined8 local_ea0;
  undefined8 local_e98;
  int local_e88;
  bool bStack_e84;
  char cStack_e83;
  byte bStack_e82;
  byte bStack_e81;
  byte bStack_e80;
  byte bStack_e7f;
  byte bStack_e7e;
  byte bStack_e7d;
  char cStack_e7c;
  byte bStack_e7b;
  undefined2 uStack_e7a;
  float fStack_e78;
  float fStack_e74;
  float fStack_e70;
  float fStack_e6c;
  float local_e68;
  undefined4 uStack_e64;
  longlong lStack_e60;
  char cStack_e58;
  undefined7 uStack_e57;
  undefined8 *puStack_e50;
  undefined8 local_e48;
  undefined4 uStack_e40;
  uint uStack_e3c;
  undefined1 local_e38;
  undefined7 uStack_e37;
  undefined8 local_e28;
  undefined1 local_e20 [16];
  undefined8 uStack_e10;
  undefined8 uStack_e08;
  undefined1 auStack_e00 [16];
  undefined4 local_df0;
  undefined4 uStack_dec;
  undefined4 local_de8;
  undefined8 local_dd8;
  undefined4 local_dd0;
  undefined1 local_dcc;
  undefined4 local_dc8;
  undefined1 local_dc4;
  undefined4 local_dc0;
  undefined1 local_dbc;
  undefined4 local_db8;
  undefined1 local_db4;
  undefined4 local_db0;
  undefined1 local_dac;
  undefined4 local_da8;
  undefined1 local_da4;
  undefined4 local_da0;
  undefined1 local_d9c;
  undefined4 local_d98;
  undefined1 local_d94;
  undefined4 local_d90;
  undefined1 local_d8c;
  undefined4 local_d88;
  undefined1 local_d84;
  undefined4 local_d80;
  undefined1 local_d7c;
  undefined4 local_d78;
  undefined1 local_d74;
  undefined4 local_d70;
  undefined1 local_d6c;
  undefined4 local_d68;
  undefined1 local_d64;
  undefined4 local_d60;
  undefined1 local_d5c;
  undefined4 local_d58;
  undefined1 local_d54;
  undefined4 local_d50;
  undefined1 local_d4c;
  undefined4 local_d48;
  undefined1 local_d44;
  undefined4 local_d40;
  undefined1 local_d3c;
  undefined4 local_d38;
  undefined1 local_d34;
  undefined4 local_d30;
  undefined1 local_d2c;
  undefined4 local_d28;
  undefined1 local_d24;
  undefined4 local_d20;
  undefined1 local_d1c;
  undefined4 local_d18;
  undefined1 local_d14;
  undefined4 local_d10;
  undefined1 local_d0c;
  undefined4 local_d08;
  undefined1 local_d04;
  undefined4 local_d00;
  undefined1 local_cfc;
  undefined4 local_cf8;
  undefined1 local_cf4;
  undefined4 local_cf0;
  undefined1 local_cec;
  undefined4 local_ce8;
  undefined1 local_ce4;
  undefined4 local_ce0;
  undefined1 local_cdc;
  ulonglong local_cd8;
  undefined8 uStack_cd0;
  ulonglong uStack_cc8;
  uint5 uStack_cc0;
  undefined3 uStack_cbb;
  undefined4 local_cb8;
  undefined4 uStack_cb4;
  int *local_cb0;
  longlong *local_ca8;
  undefined8 *local_ca0;
  longlong *local_c98;
  longlong *local_c90;
  ulonglong *local_c88;
  int **local_c80;
  longlong *local_c78;
  longlong *local_c70;
  undefined8 *local_c68;
  undefined *local_c58;
  undefined8 *local_c50;
  undefined1 *local_c48;
  int **local_c40;
  longlong *local_c38;
  int *local_c30;
  undefined1 *local_c28;
  int ***local_c20;
  longlong *local_c18;
  undefined8 *local_c10;
  undefined8 *local_c08;
  undefined8 *local_c00;
  int *local_bf8;
  char *local_bf0;
  undefined8 *local_be8;
  longlong local_be0;
  longlong *local_bd8;
  longlong *local_bd0;
  ulonglong *local_bc8;
  undefined8 local_bb8 [160];
  undefined8 ***local_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 local_698;
  longlong lStack_690;
  undefined8 uStack_688;
  undefined8 *puStack_680;
  undefined8 local_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined4 local_628;
  undefined8 local_624;
  undefined8 uStack_61c;
  longlong lStack_614;
  undefined8 uStack_60c;
  undefined8 local_604;
  undefined8 uStack_5fc;
  undefined8 uStack_5f4;
  undefined8 uStack_5ec;
  undefined1 local_5e4;
  undefined1 local_5e3;
  undefined1 local_5e2;
  int local_5e0;
  int local_5dc;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined4 local_5d0;
  undefined1 local_5cc;
  byte local_5cb;
  byte local_5ca;
  undefined8 local_5c8;
  undefined8 uStack_5c0;
  longlong lStack_5b8;
  undefined8 uStack_5b0;
  undefined8 local_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  ulonglong local_b8;
  
  local_b8 = DAT_1808d5f00 ^ (ulonglong)auStack_1ae8;
  _DAT_180b8fffc = 0;
  _DAT_180b8fff8 = 0x3f800000;
  if (param_2 == 0) {
    _DAT_180b8fff8 = 0x3f800000;
    _DAT_180b8fffc = 0;
  }
  local_f68 = param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_ee0 = _DAT_180bb8890;
  lStack_ed8 = lRam0000000180bb8898;
  uStack_ed0 = uRam0000000180bb88a0;
  uStack_ec8 = uRam0000000180bb88a8;
  local_ec0 = _DAT_180bb88b0;
  uStack_eb8 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if (((lStack_ed8 == 0) || ((char)uStack_eb8 == '\0')) || (DAT_180cc8360 == '\0')) {
    FUN_180353e30(&DAT_180b8fed0);
  }
  if (((DAT_180b90030 != lStack_ed8) || (*(longlong *)(local_f68 + 8) < DAT_180b90008)) ||
     (*(longlong *)(local_f68 + 8) < DAT_180b90038)) {
    FUN_180353e30(&DAT_180b8fed0);
    DAT_180b90030 = lStack_ed8;
  }
  uVar28 = (ulonglong)DAT_180c6f7c8;
  if (DAT_180c6f7c8 == 0) {
    UVar22 = GetTickCount64();
    if (UVar22 < DAT_180c6f7c0) {
      uVar28 = 0;
    }
    else {
      local_f38 = (undefined1  [8])&DAT_180900e70;
      iVar21 = FUN_1805f68d0(&DAT_180900e70);
      if (iVar21 != 0) goto LAB_18035840b;
      if (DAT_180900ebc == 0x7fffffff) {
        DAT_180900ebc = 0x7ffffffe;
        goto LAB_180358429;
      }
      uVar28 = (ulonglong)DAT_180c6f7c8;
      if ((DAT_180c6f7c8 == 0) && (DAT_180c6f7c0 <= UVar22)) {
        DAT_180c6f7c8 = FUN_1804174b0("C_BasePlayerPawn",0xcf73e28a);
        uVar28 = (ulonglong)DAT_180c6f7c8;
        if (DAT_180c6f7c8 == 0) {
          DAT_180c6f7c0 = UVar22 + 1000;
        }
        else {
          DAT_180c6f7c0 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_180900e70);
    }
  }
  if ((lStack_ed8 == 0) || ((int)uVar28 == 0)) {
LAB_180355cb2:
    auVar40 = (undefined1  [8])0x0;
  }
  else {
    lVar34 = uVar28 + lStack_ed8;
    lVar23 = FUN_18017ea70();
    *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + 1;
    if (lVar34 == 0) {
      lStack_f30._0_1_ = 0;
      bVar7 = false;
      bVar41 = false;
    }
    else {
      local_1a10 = (undefined8 *)0x0;
      cVar17 = FUN_1804514f0(&local_1a10,lVar34,8);
      if (cVar17 == '\0') {
        lStack_f30._0_1_ = 0;
        bVar41 = false;
        bVar7 = false;
      }
      else {
        lStack_f30._0_1_ = 1;
        local_f38 = (undefined1  [8])local_1a10;
        bVar41 = true;
        bVar7 = true;
      }
    }
    lVar23 = FUN_18017ea70();
    if (*(int *)(lVar23 + 4) != 0) {
      *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + -1;
      bVar41 = bVar7;
    }
    auVar40 = local_f38;
    if (!bVar41) goto LAB_180355cb2;
  }
  iVar21 = DAT_180c6f7d8;
  local_f60 = (undefined8 *)auVar40;
  if (DAT_180c6f7d8 == 0) {
    UVar22 = GetTickCount64();
    if (UVar22 < DAT_180c6f7d0) {
      iVar21 = 0;
    }
    else {
      local_f38 = (undefined1  [8])&DAT_180900e20;
      iVar21 = FUN_1805f68d0(&DAT_180900e20);
      if (iVar21 != 0) goto LAB_18035840b;
      if (DAT_180900e6c == 0x7fffffff) {
        DAT_180900e6c = 0x7ffffffe;
        goto LAB_180358429;
      }
      if ((DAT_180c6f7d8 == 0) && (DAT_180c6f7d0 <= UVar22)) {
        DAT_180c6f7d8 = FUN_1804174b0("CCSPlayer_MovementServices",0x552bd122);
        if (DAT_180c6f7d8 == 0) {
          DAT_180c6f7d0 = UVar22 + 1000;
        }
        else {
          DAT_180c6f7d0 = 0xffffffffffffffff;
        }
      }
      iVar21 = DAT_180c6f7d8;
      FUN_1805f68fc(&DAT_180900e20);
    }
  }
  uVar28 = (ulonglong)DAT_180c6f7a0;
  if (DAT_180c6f7a0 == 0) {
    UVar22 = GetTickCount64();
    if (UVar22 < DAT_180c6f798) {
      uVar28 = 0;
    }
    else {
      local_f38 = (undefined1  [8])&DAT_180900d80;
      iVar20 = FUN_1805f68d0(&DAT_180900d80);
      if (iVar20 != 0) goto LAB_18035840b;
      if (DAT_180900dcc == 0x7fffffff) {
        DAT_180900dcc = 0x7ffffffe;
        goto LAB_180358429;
      }
      uVar28 = (ulonglong)DAT_180c6f7a0;
      if ((DAT_180c6f7a0 == 0) && (DAT_180c6f798 <= UVar22)) {
        DAT_180c6f7a0 = FUN_1804174b0("CCSPlayer_MovementServices",0xb2c4ee6c);
        uVar28 = (ulonglong)DAT_180c6f7a0;
        if (DAT_180c6f7a0 == 0) {
          DAT_180c6f798 = UVar22 + 1000;
        }
        else {
          DAT_180c6f798 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_180900d80);
    }
  }
  if ((auVar40 == (undefined1  [8])0x0) || ((int)uVar28 == 0)) {
    local_f50._0_5_ = (uint5)(uint)local_f50;
    local_ea0 = local_f50;
  }
  else {
    lVar23 = FUN_18017ea70();
    *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + 1;
    if ((undefined *)((longlong)auVar40 + uVar28) == (undefined *)0x0) {
LAB_180355e6a:
      local_f88._0_5_ = (uint5)(uint)local_f88;
    }
    else {
      local_1a18 = 0;
      cVar17 = FUN_1804514f0(&local_1a18,(undefined *)((longlong)auVar40 + uVar28),4);
      if (cVar17 == '\0') goto LAB_180355e6a;
      local_f88._0_5_ = CONCAT14(1,local_1a18);
    }
    lVar23 = FUN_18017ea70();
    if (*(int *)(lVar23 + 4) != 0) {
      *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + -1;
    }
    local_ea0 = local_f88;
  }
  uVar28 = (ulonglong)DAT_180c6f794;
  if (DAT_180c6f794 == 0) {
    UVar22 = GetTickCount64();
    if (UVar22 < DAT_180c6f7b8) {
      uVar28 = 0;
    }
    else {
      local_f38 = (undefined1  [8])&DAT_180900dd0;
      iVar20 = FUN_1805f68d0(&DAT_180900dd0);
      if (iVar20 != 0) goto LAB_18035840b;
      if (DAT_180900e1c == 0x7fffffff) {
        DAT_180900e1c = 0x7ffffffe;
        goto LAB_180358429;
      }
      uVar28 = (ulonglong)DAT_180c6f794;
      if ((DAT_180c6f794 == 0) && (DAT_180c6f7b8 <= UVar22)) {
        DAT_180c6f794 = FUN_1804174b0("CCSPlayerModernJump",0x680c80ac);
        uVar28 = (ulonglong)DAT_180c6f794;
        if (DAT_180c6f794 == 0) {
          DAT_180c6f7b8 = UVar22 + 1000;
        }
        else {
          DAT_180c6f7b8 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_180900dd0);
    }
  }
  if ((((iVar21 == 0) || (auVar40 == (undefined1  [8])0x0)) ||
      ((undefined *)((longlong)auVar40 + (longlong)iVar21) == (undefined *)0x0)) ||
     ((int)uVar28 == 0)) {
    local_f50._0_5_ = (uint5)(uint)local_f50;
    local_e98 = local_f50;
  }
  else {
    puVar35 = (undefined *)((longlong)auVar40 + (longlong)iVar21) + uVar28;
    lVar23 = FUN_18017ea70();
    *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + 1;
    if (puVar35 == (undefined *)0x0) {
LAB_180355fa7:
      local_f88._0_5_ = (uint5)(uint)local_f88;
    }
    else {
      local_1a18 = 0;
      cVar17 = FUN_1804514f0(&local_1a18,puVar35,4);
      if (cVar17 == '\0') goto LAB_180355fa7;
      local_f88._0_5_ = CONCAT14(1,local_1a18);
    }
    lVar23 = FUN_18017ea70();
    if (*(int *)(lVar23 + 4) != 0) {
      *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + -1;
    }
    local_e98 = local_f88;
  }
  uVar28 = (ulonglong)DAT_180c6f7b0;
  if (DAT_180c6f7b0 == 0) {
    UVar22 = GetTickCount64();
    if (UVar22 < DAT_180c6f7a8) {
      uVar28 = 0;
    }
    else {
      local_f38 = (undefined1  [8])&DAT_180900ce0;
      iVar21 = FUN_1805f68d0(&DAT_180900ce0);
      if (iVar21 != 0) goto LAB_18035840b;
      if (DAT_180900d2c == 0x7fffffff) {
        DAT_180900d2c = 0x7ffffffe;
        goto LAB_180358429;
      }
      uVar28 = (ulonglong)DAT_180c6f7b0;
      if ((DAT_180c6f7b0 == 0) && (DAT_180c6f7a8 <= UVar22)) {
        DAT_180c6f7b0 = FUN_1804174b0("CPlayer_MovementServices",0x9927f73d);
        uVar28 = (ulonglong)DAT_180c6f7b0;
        if (DAT_180c6f7b0 == 0) {
          DAT_180c6f7a8 = UVar22 + 1000;
        }
        else {
          DAT_180c6f7a8 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_180900ce0);
    }
  }
  if ((auVar40 == (undefined1  [8])0x0) || ((int)uVar28 == 0)) {
    local_f50._0_5_ = (uint5)(uint)local_f50;
    local_1a10 = local_f50;
  }
  else {
    lVar23 = FUN_18017ea70();
    *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + 1;
    if ((undefined *)((longlong)auVar40 + uVar28) == (undefined *)0x0) {
LAB_1803560d5:
      local_f88._0_5_ = (uint5)(uint)local_f88;
    }
    else {
      local_1a18 = 0;
      cVar17 = FUN_1804514f0(&local_1a18,(undefined *)((longlong)auVar40 + uVar28),4);
      if (cVar17 == '\0') goto LAB_1803560d5;
      local_f88._0_5_ = CONCAT14(1,local_1a18);
    }
    lVar23 = FUN_18017ea70();
    if (*(int *)(lVar23 + 4) != 0) {
      *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + -1;
    }
    local_1a10 = local_f88;
  }
  lVar23 = DAT_180b90008;
  auVar47 = ZEXT864(0);
  if ((-1 < DAT_180b90008) && (lVar34 = *(longlong *)(local_f68 + 8), DAT_180b90008 < lVar34)) {
    cVar17 = (char)((ulonglong)local_1a10 >> 0x20);
    if (cVar17 == '\0') {
      bVar41 = lVar34 - DAT_180b90008 < 3;
    }
    else {
      bVar41 = (longlong)((ulonglong)local_1a10 & 0xffffffff) < DAT_180b90008;
    }
    if ((lVar34 == DAT_180b90008 + 1) || (bVar41 == false)) {
      fVar48 = ((float)DAT_180b8e118 - DAT_180b9001c) * ((float)DAT_180b8e118 - DAT_180b9001c) +
               (DAT_180b8e118._4_4_ - DAT_180b90020) * (DAT_180b8e118._4_4_ - DAT_180b90020) +
               (DAT_180b8e120 - DAT_180b90024) * (DAT_180b8e120 - DAT_180b90024);
      fVar43 = DAT_180b8e120;
      fVar45 = DAT_180b90024;
      fVar50 = DAT_180b8e118._4_4_;
      fVar52 = (float)DAT_180b8e118;
      if (fVar48 == 0.0) {
        auVar44 = ZEXT864(0);
      }
      else if (fVar48 < 0.0) {
        auVar44._0_8_ = FUN_18061e150(fVar48);
        auVar44._8_56_ = extraout_var;
        auVar44 = ZEXT1664(auVar44._0_16_);
      }
      else {
        auVar44 = ZEXT464((uint)SQRT(fVar48));
      }
      iVar21 = DAT_180b90014;
      uVar39 = _DAT_180b8e114 & 2;
      local_1a18 = CONCAT31(local_1a18._1_3_,bVar41) ^ 1;
      if ((local_ea0._4_1_ == '\0') || ((int)local_ea0 == DAT_180b90014)) {
        local_f88 = (undefined8 *)((ulonglong)local_f88._4_4_ << 0x20);
      }
      else {
        local_f88 = (undefined8 *)CONCAT44(local_f88._4_4_,1);
      }
      if (cVar17 == '\0') {
        local_f50 = (undefined8 *)0xffffffffffffffff;
      }
      else {
        local_f50 = (undefined8 *)((ulonglong)local_1a10 & 0xffffffff);
      }
      uVar36 = 0xffffffff;
      if (local_e98._4_1_ != '\0') {
        uVar36 = (undefined4)local_e98;
      }
      iVar20 = -1;
      if (local_ea0._4_1_ != '\0') {
        iVar20 = (int)local_ea0;
      }
      FUN_18063ab10(&local_6b8,0,0x600);
      local_1ab0 = (double)fVar43;
      local_1a28 = (double)auVar44._0_4_;
      local_1a30 = (double)fVar45;
      local_1a38 = (double)DAT_180b90020;
      local_1a40 = (double)DAT_180b9001c;
      local_1a50 = (double)fVar50;
      local_1a58 = (double)fVar52;
      local_1a80 = (double)DAT_180b90018;
      local_1ab8 = _DAT_180b8e114 & 1;
      local_1a60 = (double)CONCAT44(local_1a60._4_4_,(uint)(DAT_180b90010 != iVar21));
      local_1a68 = (double)CONCAT44(local_1a68._4_4_,(uint)(uVar39 != 0));
      local_1a70 = (double)(CONCAT44(local_1a70._4_4_,local_1a18) & 0xffffffff000000ff);
      local_1a78 = (uint)local_f88;
      local_1a88 = iVar21;
      local_1a90 = DAT_180b90010;
      local_1a98 = local_f50;
      local_1ac0 = (undefined8 ****)lVar23;
      local_1ac8 = (undefined **)lVar34;
      local_1aa8 = iVar20;
      local_1aa0 = uVar36;
      local_1a48 = local_1ab0;
      FUN_18015ad60(&local_6b8,0x600,0xffffffffffffffff,
                    "command=%lld prior=%lld ground=%d network_vz=%.3f jump_tick=%d landed_tick=%d last_processed=%lld expected_jump=%d previous_jump=%d expected_vz=%.3f executed_jump=%d processed=%d ducking=%d expected_jump_change=%d velocity=(%.3f,%.3f,%.3f) expected=(%.3f,%.3f,%.3f) velocity_error=%.3f client_tick_source=local_native server_ack=unverified"
                   );
      local_1ac8 = &PTR_180700558;
      if ((char)local_6b8 != '\0') {
        local_1ac8 = (undefined **)&DAT_1806bcfc0;
      }
      local_1ac0 = &local_6b8;
      FUN_1800f6900(0);
      if (bVar41 == false) {
        DAT_180b90008 = -1;
      }
    }
  }
  puVar25 = local_1a10;
  if ((-1 < DAT_180b90038) && (DAT_180b90038 < *(longlong *)(local_f68 + 8))) {
    if ((char)((ulonglong)local_1a10 >> 0x20) == '\0') {
      bVar41 = *(longlong *)(local_f68 + 8) - DAT_180b90038 < 3;
    }
    else {
      bVar41 = (longlong)((ulonglong)local_1a10 & 0xffffffff) < DAT_180b90038;
    }
    if (bVar41) {
    }
  }
  *(uint *)(local_f68 + 0x20) = *(uint *)(local_f68 + 0x20) | 1;
  local_f10 = 0;
  if (*(longlong *)(local_f68 + 0x40) != 0) {
    local_f10 = *(longlong *)(local_f68 + 0x40) + 0x10;
  }
  local_f18 = local_f10 + 8;
  if (local_f10 == 0) {
    local_f18 = 0;
  }
  if (local_f18 == 0) {
  }
  lVar23 = 0;
  if (*(longlong *)(local_f10 + 0x30) != 0) {
    lVar23 = *(longlong *)(local_f10 + 0x30) + 0x10;
  }
  if (lVar23 == 0) {
  }
  if (0x20 < *(uint *)(local_f18 + 8)) {
  }
  uVar28 = (ulonglong)DAT_180c6f780;
  if (DAT_180c6f780 == 0) {
    UVar22 = GetTickCount64();
    if (UVar22 < DAT_180c6f778) {
      uVar28 = 0;
    }
    else {
      local_f38 = (undefined1  [8])&DAT_180900c90;
      iVar21 = FUN_1805f68d0(&DAT_180900c90);
      if (iVar21 != 0) goto LAB_18035840b;
      if (DAT_180900cdc == 0x7fffffff) {
        DAT_180900cdc = 0x7ffffffe;
        goto LAB_180358429;
      }
      uVar28 = (ulonglong)DAT_180c6f780;
      if ((DAT_180c6f780 == 0) && (DAT_180c6f778 <= UVar22)) {
        DAT_180c6f780 = FUN_1804174b0("C_BaseEntity",0x5600aa92);
        uVar28 = (ulonglong)DAT_180c6f780;
        if (DAT_180c6f780 == 0) {
          DAT_180c6f778 = UVar22 + 1000;
        }
        else {
          DAT_180c6f778 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_180900c90);
    }
  }
  if ((lStack_ed8 == 0) || ((int)uVar28 == 0)) {
    local_1a18._0_2_ = (ushort)(byte)local_1a18;
  }
  else {
    lVar34 = uVar28 + lStack_ed8;
    lVar23 = FUN_18017ea70();
    *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + 1;
    if (lVar34 == 0) {
LAB_180356589:
      local_1a18._0_2_ = (ushort)(byte)local_1a18;
    }
    else {
      local_1a18 = local_1a18 & 0xffffff00;
      cVar17 = FUN_1804514f0(&local_1a18,lVar34,1);
      if (cVar17 == '\0') goto LAB_180356589;
      local_1a18._0_2_ = CONCAT11(1,(byte)local_1a18);
    }
    lVar23 = FUN_18017ea70();
    if (*(int *)(lVar23 + 4) != 0) {
      *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + -1;
    }
  }
  uVar9 = (ushort)local_1a18;
  uVar28 = (ulonglong)DAT_180c6f790;
  if (DAT_180c6f790 == 0) {
    UVar22 = GetTickCount64();
    if (UVar22 < DAT_180c6f788) {
      uVar28 = 0;
    }
    else {
      local_f38 = (undefined1  [8])&DAT_180900d30;
      iVar21 = FUN_1805f68d0(&DAT_180900d30);
      if (iVar21 != 0) goto LAB_18035840b;
      if (DAT_180900d7c == 0x7fffffff) {
        DAT_180900d7c = 0x7ffffffe;
        goto LAB_180358429;
      }
      uVar28 = (ulonglong)DAT_180c6f790;
      if ((DAT_180c6f790 == 0) && (DAT_180c6f788 <= UVar22)) {
        DAT_180c6f790 = FUN_1804174b0("CCSPlayer_MovementServices",0xa8a12375);
        uVar28 = (ulonglong)DAT_180c6f790;
        if (DAT_180c6f790 == 0) {
          DAT_180c6f788 = UVar22 + 1000;
        }
        else {
          DAT_180c6f788 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_180900d30);
    }
  }
  puVar11 = local_f60;
  if ((local_f60 == (undefined8 *)0x0) || ((int)uVar28 == 0)) {
    local_f60._0_5_ = (uint5)(uint)local_f60;
    local_f50 = local_f60;
  }
  else {
    lVar23 = FUN_18017ea70();
    *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + 1;
    if ((undefined *)((longlong)puVar11 + uVar28) == (undefined *)0x0) {
LAB_1803566b3:
      local_1a10._0_5_ = (uint5)(uint)local_1a10;
    }
    else {
      local_f88 = (undefined8 *)CONCAT44(local_f88._4_4_,auVar47._0_4_);
      cVar17 = FUN_1804514f0(&local_f88,(undefined *)((longlong)puVar11 + uVar28),4);
      if (cVar17 == '\0') goto LAB_1803566b3;
      local_1a10._0_5_ = CONCAT14(1,(uint)local_f88);
    }
    lVar23 = FUN_18017ea70();
    if (*(int *)(lVar23 + 4) != 0) {
      *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + -1;
    }
    local_f50 = local_1a10;
  }
  uVar28 = (ulonglong)DAT_180c6f784;
  local_f08 = local_f50;
  if (DAT_180c6f784 == 0) {
    UVar22 = GetTickCount64();
    if (UVar22 < DAT_180c6f770) {
      uVar28 = 0;
    }
    else {
      local_f38 = (undefined1  [8])&DAT_180900bf0;
      iVar21 = FUN_1805f68d0(&DAT_180900bf0);
      if (iVar21 != 0) goto LAB_18035840b;
      if (DAT_180900c3c == 0x7fffffff) {
        DAT_180900c3c = 0x7ffffffe;
        goto LAB_180358429;
      }
      uVar28 = (ulonglong)DAT_180c6f784;
      if ((DAT_180c6f784 == 0) && (DAT_180c6f770 <= UVar22)) {
        DAT_180c6f784 = FUN_1804174b0("CCSPlayer_MovementServices",0x8f382a43);
        uVar28 = (ulonglong)DAT_180c6f784;
        if (DAT_180c6f784 == 0) {
          DAT_180c6f770 = UVar22 + 1000;
        }
        else {
          DAT_180c6f770 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_180900bf0);
    }
  }
  if ((puVar11 == (undefined8 *)0x0) || ((int)uVar28 == 0)) {
    local_f60._0_5_ = (uint5)(uint)local_f60;
  }
  else {
    lVar23 = FUN_18017ea70();
    *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + 1;
    if ((undefined *)((longlong)puVar11 + uVar28) == (undefined *)0x0) {
LAB_1803567ea:
      local_1a10._0_5_ = (uint5)(uint)local_1a10;
    }
    else {
      local_f88 = (undefined8 *)CONCAT44(local_f88._4_4_,auVar47._0_4_);
      cVar17 = FUN_1804514f0(&local_f88,(undefined *)((longlong)puVar11 + uVar28),4);
      if (cVar17 == '\0') goto LAB_1803567ea;
      local_1a10._0_5_ = CONCAT14(1,(uint)local_f88);
    }
    lVar23 = FUN_18017ea70();
    if (*(int *)(lVar23 + 4) != 0) {
      *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + -1;
    }
    local_f60 = local_1a10;
  }
  local_f38 = (undefined1  [8])local_f60;
  uVar28 = (ulonglong)DAT_180c6f768;
  if (DAT_180c6f768 == 0) {
    UVar22 = GetTickCount64();
    if (UVar22 < DAT_180c6f760) {
      uVar28 = 0;
    }
    else {
      local_1a10 = (undefined8 *)&DAT_180900c40;
      iVar21 = FUN_1805f68d0(&DAT_180900c40);
      if (iVar21 != 0) goto LAB_18035840b;
      if (DAT_180900c8c == 0x7fffffff) {
        DAT_180900c8c = 0x7ffffffe;
        goto LAB_180358429;
      }
      uVar28 = (ulonglong)DAT_180c6f768;
      if ((DAT_180c6f768 == 0) && (DAT_180c6f760 <= UVar22)) {
        DAT_180c6f768 = FUN_1804174b0("CBasePlayerController",0x9a8c76d);
        uVar28 = (ulonglong)DAT_180c6f768;
        if (DAT_180c6f768 == 0) {
          DAT_180c6f760 = UVar22 + 1000;
        }
        else {
          DAT_180c6f760 = 0xffffffffffffffff;
        }
      }
      FUN_1805f68fc(&DAT_180900c40);
    }
  }
  if ((local_ee0 == 0) || ((int)uVar28 == 0)) {
    local_1a10._0_5_ = (uint5)(uint)local_1a10;
  }
  else {
    lVar34 = uVar28 + local_ee0;
    lVar23 = FUN_18017ea70();
    *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + 1;
    if (lVar34 == 0) {
LAB_180356923:
      local_1a10._0_5_ = (uint5)(uint)local_1a10;
    }
    else {
      local_f88 = (undefined8 *)((ulonglong)local_f88 & 0xffffffff00000000);
      cVar17 = FUN_1804514f0(&local_f88,lVar34,4);
      if (cVar17 == '\0') goto LAB_180356923;
      local_1a10._0_5_ = CONCAT14(1,(uint)local_f88);
    }
    lVar23 = FUN_18017ea70();
    if (*(int *)(lVar23 + 4) != 0) {
      *(int *)(lVar23 + 4) = *(int *)(lVar23 + 4) + -1;
    }
  }
  puVar10 = local_1a10;
  bVar8 = DAT_180cad358;
  local_f88 = local_1a10;
  local_1a10 = DAT_180b0dfd8;
  bStack_e84 = false;
  bStack_e7d = 0;
  cStack_e7c = 0;
  fStack_e74 = 0.0;
  fStack_e78 = 0.0;
  fStack_e70 = 0.0;
  fStack_e6c = 0.0;
  local_e68 = auVar47._0_4_;
  cStack_e58 = '\0';
  puStack_e50._0_5_ = (uint5)(uint)puStack_e50;
  uStack_e3c = uStack_e3c & 0xffffff00;
  local_e38 = 0;
  local_e88 = *(int *)(local_f68 + 8);
  bVar12 = local_f60._4_1_;
  bVar13 = local_f50._4_1_;
  if ((((puVar11 != (undefined8 *)0x0) && (DAT_180b8e110 != '\0')) && (local_1a18._1_1_ != '\0')) &&
     (((local_f50._4_1_ != 0 && (local_f60._4_1_ != 0)) &&
      (((char)((ulonglong)puVar10 >> 0x20) != '\0' && (local_ea0._4_1_ != '\0')))))) {
    bStack_e84 = local_e98._4_1_ != '\0';
  }
  cStack_e83 = '\x01';
  bStack_e7f = DAT_180ccaa36;
  if (((local_1a18._1_1_ == '\0') || (((char)uVar9 - 7U & 0xfd) == 0)) ||
     (((DAT_180b8e554 != '\0' ||
       (((DAT_180b90050 != '\0' || (DAT_180b900c0 != '\0')) || (DAT_180b8fc30 != '\0')))) ||
      (bStack_e82 = 1, DAT_180b8fe80 != '\0')))) {
    bStack_e82 = 0;
  }
  bStack_e81 = (byte)_DAT_180b8e114 & 1;
  bStack_e80 = DAT_180b8e120 < local_e68;
  bStack_e7e = (byte)DAT_180b0dfd8 >> 1 & 1;
  bStack_e7b = (byte)(_DAT_180b8e114 >> 1) & 1;
  if ((DAT_180cd40d0 & 1) == 0) {
    DAT_180cd40d0 = DAT_180cd40d0 | 1;
    local_f50 = (undefined8 *)CONCAT44(local_f50._4_4_,0xc37facff);
    local_f48 = 0;
    local_f78 = (undefined8 **)&local_f50;
    local_f70 = 1;
    FUN_18044c9c0(DAT_180c64058);
    DAT_180cd40d8 = local_f48;
  }
  auVar44 = ZEXT464(0x7fc00000);
  if (DAT_180cd40d8 == 0) {
    fStack_e78 = NAN;
  }
  else if ((DAT_180cd40e0 & 1) == 0) {
    DAT_180cd40e0 = DAT_180cd40e0 | 1;
    local_ef8 = (undefined8 *)CONCAT44(local_ef8._4_4_,0xc37facff);
    local_ef0 = (undefined4 *)0x0;
    local_f78 = &local_ef8;
    local_f70 = 1;
    FUN_18044c9c0(DAT_180c64058);
    DAT_180cd40e8 = (longlong)local_ef0;
    fStack_e78 = *(float *)((longlong)local_ef0 + 0x58);
  }
  else {
    fStack_e78 = *(float *)(DAT_180cd40e8 + 0x58);
  }
  iVar21 = 0;
  if (local_f88._4_1_ != '\0') {
    iVar21 = (int)puVar10;
  }
  fStack_e74 = (float)iVar21 * 0.015625;
  auVar46 = vpcmpeqd_avx(ZEXT116(bVar13),SUB6416(ZEXT464(0),0));
  auVar46 = vblendvps_avx(ZEXT416((uint)local_f08),auVar44._0_16_,auVar46);
  fStack_e70 = auVar46._0_4_;
  auVar46 = vpcmpeqd_avx(ZEXT116(bVar12),SUB6416(ZEXT464(0),0));
  auVar46 = vblendvps_avx(ZEXT416((uint)local_f38._0_4_),auVar44._0_16_,auVar46);
  fStack_e6c = auVar46._0_4_;
  if ((DAT_180cd40f0 & 1) == 0) {
    DAT_180cd40f0 = DAT_180cd40f0 | 1;
    local_f08 = (undefined8 *)CONCAT44(local_f08._4_4_,0x4b480a8e);
    local_f00 = 0;
    local_f78 = &local_f08;
    local_f70 = 1;
    FUN_18044c9c0(DAT_180c64058);
    DAT_180cd40f8 = local_f00;
  }
  if (DAT_180cd40f8 == 0) {
    local_e68 = auVar44._0_4_;
  }
  else if ((DAT_180cd4100 & 1) == 0) {
    DAT_180cd4100 = DAT_180cd4100 | 1;
    local_f88 = (undefined8 *)CONCAT44(local_f88._4_4_,0x4b480a8e);
    local_f80 = 0;
    local_f78 = (undefined8 **)&local_f88;
    local_f70 = 1;
    FUN_18044c9c0(DAT_180c64058);
    DAT_180cd4108 = local_f80;
    local_e68 = *(float *)(local_f80 + 0x58);
  }
  else {
    local_e68 = *(float *)(DAT_180cd4108 + 0x58);
  }
  if (local_ea0._4_1_ == '\0') {
    cStack_e58 = '\0';
  }
  else {
    lStack_e60 = (longlong)(int)local_ea0;
    if (cStack_e58 == '\0') {
      cStack_e58 = '\x01';
    }
  }
  puStack_e50 = puVar25;
  FUN_18063ab10(local_bb8,0,0x500);
  puVar25 = local_bb8;
  lVar23 = 0x20;
  do {
    *(undefined8 *)((longlong)puVar25 + 4) = 0;
    *(undefined8 *)((longlong)puVar25 + 0xc) = 0;
    *(undefined8 *)((longlong)puVar25 + 0x14) = 0;
    *(undefined8 *)((longlong)puVar25 + 0x1c) = 0;
    *(undefined4 *)((longlong)puVar25 + 0x24) = 0;
    *(undefined4 *)puVar25 = 0;
    puVar25 = puVar25 + 5;
    lVar23 = lVar23 + -1;
  } while (lVar23 != 0);
  auVar47 = ZEXT1664(auVar47._0_16_);
  auVar44 = ZEXT1664(auVar44._0_16_);
  FUN_18063ab10(&local_dd8,0,0x100);
  auVar53 = auVar44._0_16_;
  auVar46 = auVar47._0_16_;
  local_df0 = auVar47._0_4_;
  local_dd8._4_1_ = 0;
  local_dcc = 0;
  local_dc4 = 0;
  local_dbc = 0;
  local_db4 = 0;
  local_dac = 0;
  local_da4 = 0;
  local_d9c = 0;
  local_d94 = 0;
  local_d8c = 0;
  local_d84 = 0;
  local_d7c = 0;
  local_d74 = 0;
  local_d6c = 0;
  local_d64 = 0;
  local_d5c = 0;
  local_d54 = 0;
  local_d4c = 0;
  local_d44 = 0;
  local_d3c = 0;
  local_d34 = 0;
  local_d2c = 0;
  local_d24 = 0;
  local_d1c = 0;
  local_d14 = 0;
  local_d0c = 0;
  local_d04 = 0;
  local_cfc = 0;
  local_cf4 = 0;
  local_cec = 0;
  local_ce4 = 0;
  local_cdc = 0;
  local_eac = *(int *)(local_f18 + 8);
  local_cd8 = *(ulonglong *)(local_f68 + 0x58);
  uStack_cd0 = *(undefined8 *)(local_f68 + 0x60);
  uStack_cc8 = *(ulonglong *)(local_f68 + 0x68);
  _uStack_cc0 = *(undefined8 *)(local_f68 + 0x70);
  if ((bVar8 == 0) &&
     ((((byte)_uStack_cc0 | (byte)uStack_cc8 | (byte)uStack_cd0 | (byte)local_1a10) & 4) == 0)) {
    bStack_e7d = bVar8;
LAB_180356ffe:
    if (((bStack_e7b == 0) || (((byte)uStack_cd0 & (byte)local_1a10 & 4) == 0)) ||
       (cStack_e7c = '\x01', (((byte)_uStack_cc0 | (byte)uStack_cc8) & 4) != 0)) goto LAB_18035701e;
  }
  else {
    bStack_e7d = 1;
    if (bVar8 == 0) goto LAB_180356ffe;
LAB_18035701e:
    cStack_e7c = '\0';
  }
  if (*(longlong *)(local_f68 + 8) == DAT_180b8fbb0) {
    local_e28 = CONCAT44(DAT_180b8fbbc,DAT_180b8fbb8);
    iVar21 = DAT_180b8fbb8;
    iVar20 = DAT_180b8fbbc;
    if (((DAT_180b8fbbc < 2) || (DAT_180b8fbb8 < 0)) || (local_eac < DAT_180b8fbb8 + DAT_180b8fbbc))
    goto LAB_18035706f;
    cVar17 = '\x01';
  }
  else {
    iVar21 = 0;
    local_e28 = 0;
    iVar20 = 0;
LAB_18035706f:
    cVar17 = '\0';
  }
  iVar38 = 0;
  lVar23 = 2;
  local_eb0[0] = cVar17;
  local_dd8._0_4_ = local_df0;
  local_dd0 = local_df0;
  local_dc8 = local_df0;
  local_dc0 = local_df0;
  local_db8 = local_df0;
  local_db0 = local_df0;
  local_da8 = local_df0;
  local_da0 = local_df0;
  local_d98 = local_df0;
  local_d90 = local_df0;
  local_d88 = local_df0;
  local_d80 = local_df0;
  local_d78 = local_df0;
  local_d70 = local_df0;
  local_d68 = local_df0;
  local_d60 = local_df0;
  local_d58 = local_df0;
  local_d50 = local_df0;
  local_d48 = local_df0;
  local_d40 = local_df0;
  local_d38 = local_df0;
  local_d30 = local_df0;
  local_d28 = local_df0;
  local_d20 = local_df0;
  local_d18 = local_df0;
  local_d10 = local_df0;
  local_d08 = local_df0;
  local_d00 = local_df0;
  local_cf8 = local_df0;
  local_cf0 = local_df0;
  local_ce8 = local_df0;
  local_ce0 = local_df0;
  if (0 < local_eac) {
    lVar34 = 0;
    puVar25 = local_bb8;
    do {
      lVar37 = *(longlong *)(*(longlong *)(local_f10 + 0x18) + 8 + lVar34);
      puVar33 = (uint *)0x0;
      if (lVar37 != 0) {
        puVar33 = (uint *)(lVar37 + 0x10);
      }
      if (puVar33 == (uint *)0x0) {
      }
      uVar30 = *(undefined8 *)(puVar33 + 2);
      uVar3 = *(undefined8 *)(puVar33 + 4);
      uVar4 = *(undefined8 *)(puVar33 + 6);
      uVar29 = *(undefined8 *)(puVar33 + 8);
      *puVar25 = *(undefined8 *)puVar33;
      puVar25[1] = uVar30;
      puVar25[2] = uVar3;
      puVar25[3] = uVar4;
      puVar25[4] = uVar29;
      uVar28 = *(ulonglong *)(puVar33 + 2);
      if ((uVar28 & 4) != 0) {
        bStack_e7d = 1;
        cStack_e7c = '\0';
        uVar28 = *(ulonglong *)(puVar33 + 2);
      }
      if ((((cVar17 != '\0') && (iVar21 <= iVar38)) && (iVar38 < iVar20 + iVar21)) &&
         (((uVar28 != 0 || ((*puVar33 & 0x18) == 0)) || ((*puVar33 & 0x60) != 0)))) {
        cVar17 = '\0';
        local_eb0[0] = '\0';
        uVar28 = *(ulonglong *)(puVar33 + 2);
      }
      uVar18 = 0;
      if (((*puVar33 & 0x78) == 0) && ((uVar28 & 0xfffffffffffffff9) == 0)) {
        if ((uVar28 & 2) == 0) {
          uVar18 = 0;
          if ((uVar28 & 4) != 0) {
            uVar18 = 2;
          }
        }
        else {
          uVar18 = 1;
        }
      }
      local_f60._0_5_ = CONCAT14(uVar18,puVar33[5]);
      *(undefined8 **)((longlong)&local_dd8 + lVar34) = local_f60;
      iVar38 = iVar38 + 1;
      puVar25 = puVar25 + 5;
      lVar34 = lVar34 + 8;
    } while (iVar38 < local_eac);
  }
  local_cb0 = &local_eac;
  local_ca8 = &local_f10;
  local_ca0 = local_bb8;
  local_c98 = &local_f18;
  local_c90 = &local_f68;
  local_c88 = &local_cd8;
  _local_e20 = ZEXT832(0);
  auStack_e00 = ZEXT816(0);
  local_de8 = 0x3f333333;
  uStack_dec = local_df0;
  if ((DAT_180cd4110 & 1) == 0) {
    DAT_180cd4110 = DAT_180cd4110 | 1;
    local_f60 = (undefined8 *)CONCAT44(local_f60._4_4_,0x2bf43f77);
    local_f58 = 0;
    local_f78 = (undefined8 **)&local_f60;
    local_f70 = 1;
    auVar47 = ZEXT1664(auVar46);
    auVar44 = ZEXT1664(auVar53);
    FUN_18044c9c0(DAT_180c64058,&local_f78);
    auVar53 = auVar44._0_16_;
    auVar46 = auVar47._0_16_;
    DAT_180cd4118 = local_f58;
  }
  lVar34 = lStack_ed8;
  if (DAT_180cd4118 == 0) {
    local_ea8 = auVar53._0_4_;
  }
  else {
    local_ea8 = *(undefined4 *)(DAT_180cd4118 + 0x58);
  }
  if (((DAT_1808e3aa8 == '\0') || (DAT_1808e3a60 != lStack_ed8)) || (DAT_1808e3a68 != puVar11)) {
    local_1a08 = 0;
    uStack_1a06 = 0;
    bStack_1a05 = 0;
    uStack_1a04 = 0;
    uStack_1a00 = 0;
    uStack_19fc = 0;
    uStack_19f8 = 0;
    uStack_19f4 = 0;
    uStack_19f3 = 0;
    uStack_19f2 = 0;
    auStack_19f0 = ZEXT816(0);
    uStack_19e0 = auVar46._0_4_;
    _uStack_19d8 = 0;
    _uStack_19d0 = 0x1c3003;
    local_19c8 = 0xb;
    uStack_19c0 = 0;
    DAT_1808e3a70 = 0;
    _DAT_1808e3a78 = 0;
    _DAT_1808e3a88 = CONCAT44(uStack_19e0,uStack_19e0);
    _DAT_1808e3a80 = 0;
    _DAT_1808e3a90 = 0;
    _DAT_1808e3a98 = 0x1c3003;
    _DAT_1808e3aa0 = CONCAT53(uStack_19c5,CONCAT12(uStack_19c6,CONCAT11(uStack_19c7,0xb)));
    _DAT_1808e3aa8 = (ulonglong)uStack_19bf << 8;
    DAT_1808e3a60 = lStack_ed8;
    DAT_1808e3a68 = puVar11;
    uStack_19dc = uStack_19e0;
    if (((lStack_ed8 != 0) && (puVar11 != (undefined8 *)0x0)) &&
       (lVar37 = puVar11[7], lVar37 == lStack_ed8)) {
      DAT_1808e3a70 = *(ulonglong *)(lVar37 + 0xd50);
      iVar21 = DAT_180c6f2a0;
      if (DAT_180c6f2a0 == 0) {
        auVar47 = ZEXT1664(auVar46);
        auVar44 = ZEXT1664(auVar53);
        UVar22 = GetTickCount64();
        auVar53 = auVar44._0_16_;
        auVar46 = auVar47._0_16_;
        if (UVar22 < DAT_180c6f298) {
          iVar21 = 0;
        }
        else {
          local_f38 = (undefined1  [8])&DAT_1808ff420;
          iVar21 = FUN_1805f68d0(&DAT_1808ff420);
          if (iVar21 != 0) goto LAB_18035840b;
          if (DAT_1808ff46c == 0x7fffffff) {
            DAT_1808ff46c = 0x7ffffffe;
            goto LAB_180358429;
          }
          if ((DAT_180c6f2a0 == 0) && (DAT_180c6f298 <= UVar22)) {
            DAT_180c6f2a0 = FUN_1804174b0("C_BaseEntity",0xa4a37590);
            if (DAT_180c6f2a0 == 0) {
              DAT_180c6f298 = UVar22 + 1000;
            }
            else {
              DAT_180c6f298 = 0xffffffffffffffff;
            }
          }
          iVar21 = DAT_180c6f2a0;
          FUN_1805f68fc(&DAT_1808ff420);
          auVar53 = auVar44._0_16_;
          auVar46 = auVar47._0_16_;
        }
      }
      if ((*(byte *)(iVar21 + lVar37) & 0x10) != 0) {
        DAT_1808e3a70 = DAT_1808e3a70 | 0x20;
      }
      iVar21 = DAT_180c6f294;
      if (DAT_180c6f294 == 0) {
        auVar47 = ZEXT1664(auVar46);
        auVar44 = ZEXT1664(auVar53);
        UVar22 = GetTickCount64();
        auVar53 = auVar44._0_16_;
        auVar46 = auVar47._0_16_;
        if (UVar22 < DAT_180c6f2b8) {
          iVar21 = 0;
        }
        else {
          local_f38 = (undefined1  [8])&DAT_1808ff470;
          iVar21 = FUN_1805f68d0(&DAT_1808ff470);
          if (iVar21 != 0) goto LAB_18035840b;
          if (DAT_1808ff4bc == 0x7fffffff) {
            DAT_1808ff4bc = 0x7ffffffe;
            goto LAB_180358429;
          }
          if ((DAT_180c6f294 == 0) && (DAT_180c6f2b8 <= UVar22)) {
            DAT_180c6f294 = FUN_1804174b0("C_BaseModelEntity",0xae8e690f);
            if (DAT_180c6f294 == 0) {
              DAT_180c6f2b8 = UVar22 + 1000;
            }
            else {
              DAT_180c6f2b8 = 0xffffffffffffffff;
            }
          }
          iVar21 = DAT_180c6f294;
          FUN_1805f68fc(&DAT_1808ff470);
          auVar53 = auVar44._0_16_;
          auVar46 = auVar47._0_16_;
        }
      }
      lVar37 = iVar21 + lVar34;
      iVar21 = DAT_180c6f2b0;
      if (DAT_180c6f2b0 == 0) {
        auVar47 = ZEXT1664(auVar46);
        auVar44 = ZEXT1664(auVar53);
        UVar22 = GetTickCount64();
        auVar53 = auVar44._0_16_;
        auVar46 = auVar47._0_16_;
        if (UVar22 < DAT_180c6f2a8) {
          iVar21 = 0;
        }
        else {
          local_f38 = (undefined1  [8])&DAT_1808ff380;
          iVar21 = FUN_1805f68d0(&DAT_1808ff380);
          if (iVar21 != 0) goto LAB_18035840b;
          if (DAT_1808ff3cc == 0x7fffffff) {
            DAT_1808ff3cc = 0x7ffffffe;
            goto LAB_180358429;
          }
          if ((DAT_180c6f2b0 == 0) && (DAT_180c6f2a8 <= UVar22)) {
            DAT_180c6f2b0 = FUN_1804174b0("CCollisionProperty",0xe57f80c);
            if (DAT_180c6f2b0 == 0) {
              DAT_180c6f2a8 = UVar22 + 1000;
            }
            else {
              DAT_180c6f2a8 = 0xffffffffffffffff;
            }
          }
          iVar21 = DAT_180c6f2b0;
          FUN_1805f68fc(&DAT_1808ff380);
          auVar53 = auVar44._0_16_;
          auVar46 = auVar47._0_16_;
        }
      }
      uVar28 = *(ulonglong *)(iVar21 + lVar37);
      auVar42._8_8_ = 0;
      auVar42._0_8_ = uVar28;
      auVar42 = vshufps_avx(auVar42,auVar42,0x55);
      local_f38 = (undefined1  [8])uVar28;
      _DAT_1808e3a78 = CONCAT44(auVar42._0_4_,(int)uVar28);
      _DAT_1808e3a80 = CONCAT44(_DAT_1808e3a84,*(undefined4 *)((longlong)iVar21 + 8 + lVar37));
      iVar21 = DAT_180c6f280;
      if (DAT_180c6f280 == 0) {
        auVar47 = ZEXT1664(auVar46);
        auVar44 = ZEXT1664(auVar53);
        UVar22 = GetTickCount64();
        auVar53 = auVar44._0_16_;
        auVar46 = auVar47._0_16_;
        if (UVar22 < DAT_180c6f278) {
          iVar21 = 0;
        }
        else {
          local_f38 = (undefined1  [8])&DAT_1808ff330;
          iVar21 = FUN_1805f68d0(&DAT_1808ff330);
          if (iVar21 != 0) {
LAB_18035840b:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808ff37c == 0x7fffffff) {
            DAT_1808ff37c = 0x7ffffffe;
LAB_180358429:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c6f280 == 0) && (DAT_180c6f278 <= UVar22)) {
            DAT_180c6f280 = FUN_1804174b0("CCollisionProperty",0x7d388d3e);
            if (DAT_180c6f280 == 0) {
              DAT_180c6f278 = UVar22 + 1000;
            }
            else {
              DAT_180c6f278 = 0xffffffffffffffff;
            }
          }
          iVar21 = DAT_180c6f280;
          FUN_1805f68fc(&DAT_1808ff330);
          auVar53 = auVar44._0_16_;
          auVar46 = auVar47._0_16_;
        }
      }
      pfVar1 = (float *)(iVar21 + lVar37);
      fVar43 = *pfVar1;
      uVar29 = *(undefined8 *)pfVar1;
      fVar48 = *(float *)((longlong)iVar21 + 8 + lVar37);
      local_f38 = (undefined1  [8])uVar29;
      auVar16 = _local_f38;
      _DAT_1808e3a80 = CONCAT44(fVar43,DAT_1808e3a80);
      local_f38._4_4_ = SUB84((ulonglong)uVar29 >> 0x20,0);
      _DAT_1808e3a88 = CONCAT44(fVar48,local_f38._4_4_);
      _DAT_1808e3a90 = lVar34;
      _DAT_1808e3a98 = 0x1c3003;
      if (DAT_1808e3a70 != 0) {
        _DAT_1808e3a98 = DAT_1808e3a70;
      }
      _DAT_1808e3aa0 = CONCAT17(uStack_19a1,CONCAT25(uStack_19a3,CONCAT41(uStack_19a7,0xb)));
      if (DAT_1808e3a70 != 0) {
        auVar47 = ZEXT1664(auVar46);
        auVar44 = ZEXT1664(auVar53);
        fVar45 = (float)local_f38._4_4_;
        fVar50 = DAT_1808e3a78;
        _local_f38 = auVar16;
        sVar19 = thunk_FUN_180624430();
        auVar53 = auVar44._0_16_;
        auVar46 = auVar47._0_16_;
        auVar16 = _local_f38;
        if (sVar19 < 1) {
          auVar51 = ZEXT464(DAT_1808e3a7c);
          sVar19 = thunk_FUN_180624430(DAT_1808e3a7c);
          auVar53 = auVar44._0_16_;
          auVar46 = auVar47._0_16_;
          auVar16 = _local_f38;
          if (sVar19 < 1) {
            auVar49 = ZEXT464(DAT_1808e3a80);
            sVar19 = thunk_FUN_180624430(_DAT_1808e3a80 & 0xffffffff);
            auVar53 = auVar44._0_16_;
            auVar46 = auVar47._0_16_;
            auVar16 = _local_f38;
            if (((((sVar19 < 1) && (((uint)fVar43 & 0x7f800000) != 0x7f800000)) &&
                 (((uint)fVar45 & 0x7f800000) != 0x7f800000)) &&
                ((bVar41 = ((uint)fVar48 & 0x7f800000) != 0x7f800000, bVar41 && (fVar50 < fVar43))))
               && (auVar51._0_4_ < fVar45)) {
              _DAT_1808e3aa8 = CONCAT71(DAT_1808e3aa8_1,bVar41);
              if (auVar49._0_4_ < fVar48) goto LAB_1803577a7;
            }
          }
        }
      }
      _local_f38 = auVar16;
      _DAT_1808e3aa8 = _DAT_1808e3aa8 & 0xffffffffffffff00;
    }
  }
LAB_1803577a7:
  auVar16 = _local_f38;
  if (DAT_1808e3aa8 != '\0') {
    local_e20._4_4_ = DAT_180b8e140;
    local_e20._0_4_ = DAT_180b8e13c;
    local_e20._8_4_ = DAT_180b8e144;
    local_e20._12_4_ = (float)DAT_180b8e118;
    uStack_e10._0_4_ = DAT_180b8e118._4_4_;
    uStack_e10._4_4_ = DAT_180b8e120;
    uStack_e08 = _DAT_1808e3a78;
    auStack_e00._8_4_ = DAT_1808e3a88;
    auStack_e00._0_8_ = _DAT_1808e3a80;
    auStack_e00._12_4_ = DAT_1808e3a8c;
    if ((DAT_180cd4120 & 1) == 0) {
      DAT_180cd4120 = DAT_180cd4120 | 1;
      local_f38._0_4_ = 0x58e37709;
      auVar14 = _local_f38;
      auStack_f28 = auVar16._16_16_;
      local_f38 = auVar14._0_8_;
      lStack_f30 = 0;
      local_f78 = (undefined8 **)local_f38;
      local_f70 = 1;
      auVar47 = ZEXT1664(auVar46);
      auVar44 = ZEXT1664(auVar53);
      FUN_18044c9c0(DAT_180c64058,&local_f78);
      auVar53 = auVar44._0_16_;
      auVar46 = auVar47._0_16_;
      DAT_180cd4128 = lStack_f30;
    }
    if (DAT_180cd4128 == 0) {
      local_df0 = auVar53._0_4_;
    }
    else if ((DAT_180cd4130 & 1) == 0) {
      DAT_180cd4130 = DAT_180cd4130 | 1;
      local_f78 = (undefined8 **)CONCAT44(local_f78._4_4_,0x58e37709);
      local_f70 = 0;
      local_19b8 = &local_f78;
      lStack_19b0 = 1;
      auVar47 = ZEXT1664(auVar46);
      auVar44 = ZEXT1664(auVar53);
      FUN_18044c9c0(DAT_180c64058,&local_19b8);
      auVar53 = auVar44._0_16_;
      auVar46 = auVar47._0_16_;
      DAT_180cd4138 = local_f70;
      local_df0 = *(undefined4 *)(local_f70 + 0x58);
    }
    else {
      local_df0 = *(undefined4 *)(DAT_180cd4138 + 0x58);
    }
    iVar21 = DAT_180c6f750;
    if (DAT_180c6f750 == 0) {
      auVar47 = ZEXT1664(auVar46);
      auVar44 = ZEXT1664(auVar53);
      UVar22 = GetTickCount64();
      auVar53 = auVar44._0_16_;
      auVar46 = auVar47._0_16_;
      if (UVar22 < DAT_180c6f758) {
        iVar21 = 0;
      }
      else {
        local_f38 = (undefined1  [8])&DAT_180900ba0;
        iVar21 = FUN_1805f68d0(&DAT_180900ba0);
        if (iVar21 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_180900bec == 0x7fffffff) {
          DAT_180900bec = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c6f750 == 0) && (DAT_180c6f758 <= UVar22)) {
          DAT_180c6f750 = FUN_1804174b0("C_BaseEntity",0x328a3947);
          if (DAT_180c6f750 == 0) {
            DAT_180c6f758 = UVar22 + 1000;
          }
          else {
            DAT_180c6f758 = 0xffffffffffffffff;
          }
        }
        iVar21 = DAT_180c6f750;
        FUN_1805f68fc(&DAT_180900ba0);
        auVar53 = auVar44._0_16_;
        auVar46 = auVar47._0_16_;
      }
    }
    auVar47 = ZEXT1664(auVar46);
    auVar44 = ZEXT1664(auVar53);
    puVar24 = (undefined4 *)FUN_18035de60(&local_f08,lStack_ed8,iVar21);
    auVar46 = auVar47._0_16_;
    uStack_dec = auVar44._0_4_;
    if (*(char *)(puVar24 + 1) != '\0') {
      uStack_dec = *puVar24;
    }
    local_de8 = local_ea8;
  }
  local_ea4 = 0;
  local_ef8 = &DAT_1808e3a60;
  local_ef0 = &local_ea4;
  local_ee8 = &local_ea8;
  local_c80 = &local_cb0;
  local_c78 = &local_f68;
  local_c70 = &local_f18;
  local_c68 = local_bb8;
  local_c58 = &DAT_180b8fed0;
  local_c50 = &DAT_1808e3a60;
  local_c48 = local_e20;
  local_c40 = &local_cb0;
  local_c38 = &local_ee0;
  local_c30 = &local_e88;
  local_c28 = &DAT_180b8e110;
  local_c20 = &local_c80;
  local_c18 = &local_f68;
  local_c10 = &local_ea0;
  local_c08 = &local_e98;
  local_c00 = &local_dd8;
  local_bf8 = &local_eac;
  local_bf0 = local_eb0;
  local_be8 = &local_e28;
  local_be0 = (longlong)&local_e28 + 4;
  local_bd8 = &local_f10;
  local_bd0 = &local_f18;
  local_bc8 = &local_cd8;
  local_19b8 = (undefined8 ***)&local_dd8;
  lStack_19b0 = (longlong)local_eac;
  local_1998[4] = bStack_e84;
  local_1998._0_4_ = local_e88;
  local_1998[5] = cStack_e83;
  local_1998[6] = bStack_e82;
  local_1998[7] = bStack_e81;
  local_1998[8] = bStack_e80;
  local_1998[9] = bStack_e7f;
  local_1998[10] = bStack_e7e;
  local_1998[0xb] = bStack_e7d;
  local_1998[0xc] = cStack_e7c;
  local_1998[0xd] = bStack_e7b;
  local_1998._14_2_ = uStack_e7a;
  local_1998._16_4_ = fStack_e78;
  local_1998._20_4_ = fStack_e74;
  local_1998._24_4_ = fStack_e70;
  local_1998._28_4_ = fStack_e6c;
  local_1978 = CONCAT44(uStack_e64,local_e68);
  uStack_1968 = CONCAT71(uStack_e57,cStack_e58);
  lStack_1970 = lStack_e60;
  puStack_1960 = puStack_e50;
  uStack_1950 = CONCAT44(uStack_e3c,uStack_e40);
  local_1958 = local_e48;
  local_1948 = local_e38;
  _local_f38 = local_1998;
  if ((DAT_180b8ff6c == '\0') || (local_e88 != DAT_180b8ff68)) {
    local_1a08 = 0;
    uStack_1a06 = 0;
    uStack_1a04 = 0x3f800000;
    uStack_1a00 = 0;
    uStack_19fc = 0;
    uStack_19f8 = 0;
    uStack_19f4 = 0;
    uStack_19f3 = 0;
    auStack_19f0 = ZEXT816(0);
    uStack_19e0 = auVar46._0_4_;
    uStack_19d0 = (uint5)(uint)uStack_19d0;
    _DAT_180b8ff74 = CONCAT44(0x3f800000,(uint)bStack_1a05 << 0x18);
    lRam0000000180b8ff84 = (ulonglong)uStack_19f2 << 0x30;
    uRam0000000180b8ffbc = 0;
    uRam0000000180b8ffcc = 0;
    uRam0000000180b8ff9c = CONCAT44(uStack_19e0,uStack_19e0);
    _DAT_180b8ffd4 = 0;
    _DAT_180b8ffe4 = _uStack_19d8;
    uRam0000000180b8ffec = _uStack_19d0;
    uRam0000000180b8ff7c = 0;
    uRam0000000180b8ff8c = 0;
    _DAT_180b8ff94 = 0;
    uRam0000000180b8ffa4 = _uStack_19d8;
    uRam0000000180b8ffac = _uStack_19d0;
    _DAT_180b8ffb4 = _DAT_180b8ff74;
    lRam0000000180b8ffc4 = lRam0000000180b8ff84;
    uRam0000000180b8ffdc = uRam0000000180b8ff9c;
    uStack_19dc = uStack_19e0;
    if (((bStack_e7f == 0) && (((bStack_e84 != false && (cStack_e83 != '\0')) && (bStack_e82 != 0)))
        ) && ((bStack_e7e != 0 && (((bStack_e7d == 0 || (cStack_e7c != '\0')) && (bStack_e81 == 0)))
              ))) {
      auVar47 = ZEXT1664(auVar46);
      puVar25 = (undefined8 *)FUN_18035f700(&local_f78,local_e20,&local_ef8,&DAT_180b8ff74);
      auVar46 = auVar47._0_16_;
      local_1958 = *puVar25;
      uStack_1950 = puVar25[1];
      if ((char)lStack_f30 != '\0') {
        auVar47 = ZEXT1664(auVar46);
        cVar17 = FUN_18035fcb0(local_e20,&local_ef8,&DAT_180b8ffb4);
        auVar46 = auVar47._0_16_;
        local_1948 = 1;
        if (cVar17 != '\0') goto LAB_180357d37;
      }
      local_1948 = 0;
    }
  }
LAB_180357d37:
  auVar47 = ZEXT1664(auVar46);
  local_1a18 = FUN_180360240();
  lVar34 = lStack_ed8;
  local_19b8 = (undefined8 ***)
               CONCAT17(bStack_e81,
                        CONCAT16(bStack_e82,CONCAT15(cStack_e83,CONCAT14(bStack_e84,local_e88))));
  lStack_19b0 = CONCAT26(uStack_e7a,
                         CONCAT15(bStack_e7b,
                                  CONCAT14(cStack_e7c,
                                           CONCAT13(bStack_e7d,
                                                    CONCAT12(bStack_e7e,
                                                             CONCAT11(bStack_e7f,bStack_e80))))));
  uStack_6a8 = CONCAT44(fStack_e74,fStack_e78);
  uStack_19a0 = CONCAT44(fStack_e6c,fStack_e70);
  uStack_19a8 = SUB41(fStack_e78,0);
  uStack_19a7 = (undefined4)((ulonglong)uStack_6a8 >> 8);
  uStack_19a3 = (undefined2)((uint)fStack_e74 >> 8);
  uStack_19a1 = (undefined1)((uint)fStack_e74 >> 0x18);
  local_698 = CONCAT44(uStack_e64,local_e68);
  uStack_688 = CONCAT71(uStack_e57,cStack_e58);
  lStack_690 = lStack_e60;
  puStack_680 = puStack_e50;
  uStack_670 = CONCAT44(uStack_e3c,uStack_e40);
  local_678 = local_e48;
  uStack_668 = CONCAT71(uStack_e37,local_e38);
  uStack_660 = local_e20._0_8_;
  uStack_658 = local_e20._8_8_;
  uStack_650 = uStack_e10;
  uStack_648 = uStack_e08;
  uStack_640 = auStack_e00._0_8_;
  uStack_638 = auStack_e00._8_8_;
  local_630 = CONCAT44(uStack_dec,local_df0);
  local_628 = local_de8;
  local_624 = _DAT_180b8ff74;
  uStack_61c = uRam0000000180b8ff7c;
  lStack_614 = lRam0000000180b8ff84;
  uStack_60c = uRam0000000180b8ff8c;
  local_604 = _DAT_180b8ff94;
  uStack_5fc = uRam0000000180b8ff9c;
  uStack_5f4 = uRam0000000180b8ffa4;
  uStack_5ec = uRam0000000180b8ffac;
  local_5e4 = DAT_180b8fff4;
  local_5e3 = DAT_180b8ff61;
  local_5e2 = DAT_180b8ff62;
  local_5dc = local_eac;
  local_5d8 = local_ea4;
  local_5d4 = 0xffffffff;
  if (local_e98._4_1_ != '\0') {
    local_5d4 = (undefined4)local_e98;
  }
  local_5d0 = local_ea8;
  local_5cc = DAT_1808e3aa8;
  local_5cb = (byte)((ulonglong)local_1a10 >> 2) & 1;
  local_5ca = DAT_180cad358;
  local_5c8 = _DAT_180b8ffb4;
  uStack_5c0 = uRam0000000180b8ffbc;
  lStack_5b8 = lRam0000000180b8ffc4;
  uStack_5b0 = uRam0000000180b8ffcc;
  local_5a8 = _DAT_180b8ffd4;
  uStack_5a0 = uRam0000000180b8ffdc;
  uStack_598 = _DAT_180b8ffe4;
  uStack_590 = uRam0000000180b8ffec;
  auVar47 = ZEXT1664(auVar47._0_16_);
  local_6b8 = local_19b8;
  uStack_6b0 = lStack_19b0;
  uStack_6a0 = uStack_19a0;
  local_5e0 = local_1a18;
  plVar26 = (longlong *)FUN_18035f000();
  auVar46 = auVar47._0_16_;
  if (plVar26[0x131] == 0) {
    plVar31 = (longlong *)0x0;
  }
  else {
    plVar31 = plVar26 + (ulonglong)((int)plVar26[0x132] - 1U & 7) * 0x26 + 1;
  }
  if (*plVar26 == lVar34) {
    if (plVar31 == (longlong *)0x0) goto LAB_180357f69;
    if ((int)local_19b8 != (int)*plVar31 + 1) {
      if ((int)local_19b8 == (int)*plVar31) goto LAB_180358043;
      goto LAB_180357f17;
    }
    if (((*(char *)((longlong)plVar31 + 7) != '\0') ||
        ((char)((ulonglong)local_19b8 >> 0x38) == '\0')) ||
       ((*(char *)((longlong)plVar31 + 10) == '\0' &&
        ((char)((ulonglong)lStack_19b0 >> 0x10) == '\0')))) goto LAB_180357f69;
    bVar41 = true;
  }
  else {
LAB_180357f17:
    local_1938 = 0;
    auVar47 = ZEXT1664(auVar46);
    FUN_18063ab10(local_1930,0,0x980);
    FUN_18035d410(local_1930);
    local_fb0 = 0;
    local_fa8 = 0;
    local_fa0 = 0;
    local_f98 = 0;
    FUN_18063aed0(plVar26,&local_1938,0x9a8);
    auVar46 = auVar47._0_16_;
    *plVar26 = lVar34;
LAB_180357f69:
    bVar41 = false;
  }
  ppppuVar15 = &local_6b8;
  plVar31 = plVar26 + plVar26[0x132] * 0x26 + 1;
  do {
    plVar32 = plVar31;
    ppppuVar27 = ppppuVar15;
    pppuVar2 = ppppuVar27[1];
    pppuVar5 = ppppuVar27[2];
    pppuVar6 = ppppuVar27[3];
    *plVar32 = (longlong)*ppppuVar27;
    plVar32[1] = (longlong)pppuVar2;
    plVar32[2] = (longlong)pppuVar5;
    plVar32[3] = (longlong)pppuVar6;
    pppuVar2 = ppppuVar27[5];
    pppuVar5 = ppppuVar27[6];
    pppuVar6 = ppppuVar27[7];
    plVar32[4] = (longlong)ppppuVar27[4];
    plVar32[5] = (longlong)pppuVar2;
    plVar32[6] = (longlong)pppuVar5;
    plVar32[7] = (longlong)pppuVar6;
    pppuVar2 = ppppuVar27[9];
    pppuVar5 = ppppuVar27[10];
    pppuVar6 = ppppuVar27[0xb];
    plVar32[8] = (longlong)ppppuVar27[8];
    plVar32[9] = (longlong)pppuVar2;
    plVar32[10] = (longlong)pppuVar5;
    plVar32[0xb] = (longlong)pppuVar6;
    pppuVar2 = ppppuVar27[0xd];
    plVar32[0xc] = (longlong)ppppuVar27[0xc];
    plVar32[0xd] = (longlong)pppuVar2;
    pppuVar2 = ppppuVar27[0xf];
    plVar32[0xe] = (longlong)ppppuVar27[0xe];
    plVar32[0xf] = (longlong)pppuVar2;
    lVar23 = lVar23 + -1;
    ppppuVar15 = ppppuVar27 + 0x10;
    plVar31 = plVar32 + 0x10;
  } while (lVar23 != 0);
  pppuVar2 = ppppuVar27[0x11];
  pppuVar5 = ppppuVar27[0x12];
  pppuVar6 = ppppuVar27[0x13];
  plVar32[0x10] = (longlong)ppppuVar27[0x10];
  plVar32[0x11] = (longlong)pppuVar2;
  plVar32[0x12] = (longlong)pppuVar5;
  plVar32[0x13] = (longlong)pppuVar6;
  pppuVar2 = ppppuVar27[0x15];
  plVar32[0x14] = (longlong)ppppuVar27[0x14];
  plVar32[0x15] = (longlong)pppuVar2;
  plVar26[0x132] = (ulonglong)((int)plVar26[0x132] + 1U & 7);
  uVar28 = plVar26[0x131] + 1;
  if (8 < uVar28) {
    uVar28 = 8;
  }
  plVar26[0x131] = uVar28;
  auVar47 = ZEXT1664(auVar46);
  UVar22 = GetTickCount64();
  auVar46 = auVar47._0_16_;
  if ((bVar41) && ((ulonglong)plVar26[0x133] <= UVar22)) {
    plVar26[0x133] = UVar22 + 1000;
    *(undefined1 *)(plVar26 + 0x134) = 1;
  }
LAB_180358043:
  auVar47 = ZEXT1664(auVar46);
  UVar22 = GetTickCount64();
  uVar36 = auVar47._0_4_;
  if ((bStack_e7e != 0) && (DAT_180c6f740 <= UVar22)) {
    DAT_180c6f740 = UVar22 + 1000;
    FUN_18063ab10(&local_6b8,0,0x600);
    uVar29 = FUN_180352db0(DAT_180b8ffb4);
    uVar39 = (uint)bStack_e7f;
    uVar30 = FUN_180352db0(DAT_180b8ff74);
    local_1a48 = (double)FUN_180352db0(DAT_180b8fff4);
    iVar21 = local_1a18;
    local_1a50 = (double)fStack_e78;
    local_1a58 = (double)local_e68;
    local_1a60 = (double)fStack_e74;
    local_1a68 = (double)fStack_e6c;
    local_1a70 = (double)fStack_e70;
    local_1ab8 = (uint)DAT_180b8ff70;
    local_1a20 = 0x4038000000000000;
    local_1a30 = (double)CONCAT44(local_1a30._4_4_,uVar39);
    local_1a38 = (double)CONCAT44(local_1a38._4_4_,local_ea4);
    local_1a78 = local_eac;
    local_1a80 = (double)CONCAT44(local_1a80._4_4_,(uint)DAT_1808e3aa8);
    local_1a88 = (uint)bStack_e7b;
    local_1a90 = (uint)bStack_e7d;
    local_1a98 = (undefined8 *)CONCAT44(local_1a98._4_4_,(uint)bStack_e80);
    local_1aa0 = (uint)bStack_e81;
    local_1aa8 = (uint)bStack_e82;
    local_1ab0 = (double)CONCAT44(local_1ab0._4_4_,(uint)bStack_e84);
    local_1ac0 = (undefined8 ****)CONCAT44(local_1ac0._4_4_,local_1a18);
    local_1ac8 = *(undefined ***)(local_f68 + 8);
    local_1a40 = (double)uVar30;
    local_1a28 = (double)uVar29;
    FUN_18015ad60(&local_6b8,0x600,0xffffffffffffffff,
                  "command=%lld result=%d owned=%d readable=%d allowed=%d ground=%d falling=%d duck_held=%d ducking=%d context=%d native_steps=%d duck_speed=%.3f last_duck=%.3f sim_time=%.3f duck_interval=%.3f jump_penalty=%.4f reason=%s probe=%s trace_gate=%d input_owned=%d search_probe=%s search_reach=%.1f"
                 );
    local_1ac8 = &PTR_180700558;
    if ((char)local_6b8 != '\0') {
      local_1ac8 = (undefined **)&DAT_1806bcfc0;
    }
    local_1ac0 = &local_6b8;
    FUN_1800f6900(0);
    uVar36 = auVar47._0_4_;
    local_1a18 = iVar21;
  }
  auVar46 = auStack_19f0;
  if (local_1a18 == 5) {
    local_cd8 = local_cd8 & 0xffffffffffffff00;
    uStack_cc8 = uStack_cc8 & 0xffffffffffffff00;
    uStack_cc0 = (uint5)(uint)uStack_cc0;
    _DAT_180b8fef8 = local_cd8;
    uRam0000000180b8ff00 = uStack_cd0;
    uRam0000000180b8ff08 = uStack_cc8;
    uRam0000000180b8ff10 = _uStack_cc0;
    DAT_180b8fef0 = CONCAT44(uStack_cb4,local_cb8) & 0xffffff00ffffffff;
    _DAT_180b8fed0 = local_cd8;
    uRam0000000180b8fed8 = uStack_cd0;
    uRam0000000180b8fee0 = uStack_cc8;
    uRam0000000180b8fee8 = _uStack_cc0;
    DAT_180b8ff6c = '\0';
    auStack_19f0._0_8_ = auStack_19f0._1_8_ << 8;
    uStack_19d8 = (uint5)(uint)uStack_19d8;
    uStack_19d0 = (uint5)(uint)uStack_19d0;
    _DAT_180b8ff20 = CONCAT44(uStack_1a04,CONCAT13(bStack_1a05,CONCAT12(uStack_1a06,local_1a08)));
    uRam0000000180b8ff28 = CONCAT44(uStack_19fc,uStack_1a00);
    DAT_180b8ff30 = CONCAT26(uStack_19f2,CONCAT15(uStack_19f3,(uint5)uStack_19f8));
    _DAT_180b8ff38 = auStack_19f0._0_8_;
    auStack_19f0._8_8_ = auVar46._8_8_;
    uRam0000000180b8ff48 = CONCAT44(uStack_19dc,uStack_19e0) & 0xffffffffffffff00;
    _DAT_180b8ff40 = auStack_19f0._8_8_;
    uRam0000000180b8ff50 = _uStack_19d8;
    DAT_180b8ff58 = _uStack_19d0;
    _DAT_180b8ff60 = (ulonglong)uStack_19c5 << 0x18;
    DAT_180b8ff70 = 0;
    _DAT_180b8ff74 = CONCAT44(0x3f800000,(uint)bStack_1a05 << 0x18);
    lRam0000000180b8ff84 = (ulonglong)uStack_19f2 << 0x30;
    uRam0000000180b8ffbc = 0;
    uRam0000000180b8ffcc = 0;
    uRam0000000180b8ff9c = CONCAT44(uVar36,uVar36);
    _DAT_180b8ffd4 = 0;
    _DAT_180b8ffe4 = _uStack_19d8;
    uRam0000000180b8ffec = _uStack_19d0;
    uRam0000000180b8ff7c = 0;
    uRam0000000180b8ff8c = 0;
    _DAT_180b8ff94 = 0;
    uRam0000000180b8ffa4 = _uStack_19d8;
    uRam0000000180b8ffac = _uStack_19d0;
    DAT_180b8fff4 = 0;
    _DAT_180b8fffc = (ushort)DAT_180b8fffc_1 << 8;
    DAT_180b8ff18 = DAT_180b8fef0;
    _DAT_180b8ffb4 = _DAT_180b8ff74;
    lRam0000000180b8ffc4 = lRam0000000180b8ff84;
    uRam0000000180b8ffdc = uRam0000000180b8ff9c;
  }
  else {
    _DAT_180b8fffc = CONCAT11(DAT_180b8fffc_1,DAT_180b8ff70);
  }
}



