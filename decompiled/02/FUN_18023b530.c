// FUN_18023b530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18023b530 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18023b530(undefined8 param_1,longlong param_2,float *param_3,float *param_4,float *param_5,
                  longlong param_6,longlong *param_7)

{
  undefined8 uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  ULONGLONG UVar14;
  longlong lVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  float *pfVar18;
  undefined8 uVar19;
  float *pfVar20;
  uint *puVar21;
  undefined8 *puVar22;
  longlong *plVar23;
  ulonglong uVar24;
  float *pfVar25;
  char *pcVar26;
  ulonglong uVar27;
  undefined1 (*pauVar28) [32];
  uint *puVar29;
  float **ppfVar30;
  longlong lVar31;
  undefined1 (*pauVar32) [32];
  undefined8 *puVar33;
  ulonglong uVar34;
  longlong lVar35;
  byte bVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  undefined8 extraout_XMM0_Qa_15;
  undefined8 extraout_XMM0_Qa_16;
  undefined8 uVar42;
  undefined8 extraout_XMM0_Qa_17;
  undefined8 extraout_XMM0_Qa_18;
  undefined8 extraout_XMM0_Qa_19;
  undefined8 extraout_XMM0_Qa_20;
  uint extraout_XMM0_Dc;
  undefined1 auVar43 [16];
  uint extraout_XMM0_Dd;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 extraout_var_03 [56];
  undefined1 extraout_var_04 [56];
  undefined1 extraout_var_05 [56];
  undefined1 extraout_var_06 [56];
  undefined1 extraout_var_07 [56];
  undefined1 extraout_var_08 [56];
  undefined1 extraout_var_09 [56];
  undefined1 extraout_var_10 [56];
  undefined1 extraout_var_11 [56];
  undefined1 extraout_var_12 [56];
  undefined1 extraout_var_13 [56];
  undefined1 extraout_var_14 [56];
  undefined1 extraout_var_15 [56];
  undefined1 extraout_var_16 [56];
  undefined1 extraout_var_17 [56];
  undefined1 extraout_var_18 [56];
  undefined1 extraout_var_19 [56];
  double dVar44;
  undefined1 auVar45 [16];
  float fVar46;
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  uint uVar53;
  float fVar54;
  double dVar55;
  uint uVar57;
  uint uVar58;
  undefined1 auVar56 [64];
  undefined1 auVar59 [64];
  uint uVar61;
  uint uVar62;
  undefined1 auVar60 [64];
  double dVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [64];
  undefined1 auStackY_1108 [32];
  char local_10b7;
  float local_10b4;
  undefined8 *local_10b0;
  undefined8 *local_10a8;
  float local_10a0;
  undefined8 local_1098;
  float local_1090;
  longlong *local_1088;
  float *local_1080;
  undefined8 *local_1078;
  undefined8 local_1068;
  undefined8 local_1060;
  float local_1054;
  longlong *local_1050;
  float *local_1048;
  longlong *local_1040;
  float local_1038;
  float local_1034;
  float local_1030;
  char *local_1028;
  undefined8 local_1020;
  float local_1018;
  float local_1014;
  float local_1010;
  float local_100c;
  float local_1008;
  float local_1004;
  float local_1000;
  float local_ffc;
  float local_ff8;
  int local_ff4;
  float local_fe8;
  int iStack_fe4;
  undefined8 uStack_fe0;
  longlong *local_fd8;
  undefined8 **local_fd0;
  float local_fc8;
  float local_fc4;
  float local_fc0;
  float *local_fb8;
  float fStack_fb0;
  int iStack_fac;
  uint uStack_fa8;
  uint uStack_fa4;
  uint uStack_fa0;
  uint uStack_f9c;
  ulonglong local_f98;
  float local_f90;
  float local_f8c;
  float local_f88;
  float local_f80;
  float fStack_f7c;
  float fStack_f78;
  uint uStack_f74;
  float *pfStack_f70;
  undefined8 uStack_f68;
  float *local_f58 [2];
  undefined4 uStack_f48;
  int iStack_f44;
  undefined8 uStack_f40;
  uint local_f38;
  float local_f34;
  ULONGLONG *local_f28;
  undefined8 *local_f20;
  char *local_f18;
  int *local_f10;
  int *local_f08;
  int *local_f00;
  int *local_ef8;
  int *local_ef0;
  float *local_ee8;
  float local_ed8;
  float local_ed4;
  float local_ed0;
  float local_ecc;
  float local_ec8;
  float local_ec4;
  float local_ec0;
  float local_ebc;
  float local_eb8;
  float local_eb0;
  float local_eac;
  float local_ea8;
  float local_ea0;
  float local_e9c;
  float local_e98;
  float local_e94;
  float local_e90;
  float local_e8c;
  undefined1 local_e88 [24];
  uint local_e70;
  float local_e6c;
  float local_e68;
  undefined1 local_e40 [16];
  float local_e30;
  char local_e2c;
  undefined1 local_e28 [32];
  undefined1 local_df8 [24];
  float local_de0;
  float local_ddc;
  float local_dd8;
  undefined1 local_db0 [16];
  float local_da0;
  char local_d9c;
  undefined1 local_d98 [12];
  undefined1 local_d8c [12];
  undefined1 local_d80 [12];
  undefined1 local_d74 [12];
  longlong local_d68 [7];
  longlong *local_d30;
  undefined1 local_d28 [16];
  undefined1 auStack_d18 [16];
  undefined1 local_d08 [16];
  undefined1 auStack_cf8 [16];
  undefined1 local_ce8 [16];
  undefined1 auStack_cd8 [16];
  undefined1 local_cc8 [16];
  undefined1 local_cb8 [16];
  undefined1 local_ca8 [16];
  undefined1 local_c98 [16];
  undefined1 local_c88 [16];
  undefined1 local_c78 [16];
  undefined1 local_c68 [16];
  undefined1 local_c58 [16];
  undefined1 local_c48 [16];
  undefined1 local_c38 [16];
  longlong local_c18;
  char local_c10 [4];
  int local_c0c;
  int local_c08;
  int local_c04;
  int local_c00;
  int local_bfc;
  float local_bf8;
  float local_bf4;
  float local_bf0;
  float local_be8;
  float local_be4;
  float local_be0;
  float local_bd8 [2];
  undefined8 *local_bd0;
  float local_bc8;
  float local_bc4;
  float local_bc0;
  char local_bbc;
  float local_bb8;
  float local_bb4;
  float local_bb0;
  char local_bac;
  float local_ba8;
  char local_ba4;
  ULONGLONG local_ba0;
  undefined1 local_b98 [16];
  longlong local_b88;
  float *local_b80;
  float *pfStack_b78;
  float *pfStack_b70;
  ulonglong uStack_b68;
  undefined1 local_b60;
  undefined1 local_b58 [32];
  float local_b38;
  uint auStack_b34 [63];
  char local_a38;
  undefined8 local_7a8 [100];
  int local_488;
  undefined1 local_478 [920];
  ulonglong local_e0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStackY_1108;
  local_1050 = param_7;
  local_f38 = 0;
  local_10b4 = 0.0;
  cVar6 = *(char *)(param_6 + 0x210);
  if ((cVar6 != '\0') || (local_10b7 = '\0', *(char *)(param_6 + 0x318) != '\0')) {
    local_10b7 = '\x01';
  }
  local_c10[0] = *(char *)(param_6 + 0x380);
  local_c18 = param_2;
  local_c0c = FUN_1802344f0(param_6,0,*(undefined4 *)(param_6 + 0x2a4));
  local_c08 = FUN_1802344f0(param_6,1,*(undefined4 *)(param_6 + 0x280));
  local_ba0 = GetTickCount64();
  local_bfc = 0;
  local_c04 = 0;
  local_c00 = 0;
  auVar51 = ZEXT864(0);
  local_bc4 = 0.0;
  local_f28 = &local_ba0;
  local_f20 = &DAT_180b8e6e0;
  local_f18 = local_c10;
  local_f10 = &local_c0c;
  local_f08 = &local_c08;
  local_f00 = &local_bfc;
  local_ef8 = &local_c04;
  local_ef0 = &local_c00;
  local_ee8 = &local_bc4;
  auVar50 = ZEXT464((uint)DAT_180cc936c);
  sVar7 = thunk_FUN_180624430(DAT_180cc936c);
  if (0 < sVar7) {
  }
  if (auVar50._0_4_ <= auVar51._0_4_) {
  }
  sVar7 = thunk_FUN_180624430(*param_4);
  if (0 < sVar7) {
  }
  sVar7 = thunk_FUN_180624430(param_4[1]);
  if (0 < sVar7) {
  }
  sVar7 = thunk_FUN_180624430(param_4[2]);
  if (0 < sVar7) {
  }
  sVar7 = thunk_FUN_180624430(*param_5);
  if (0 < sVar7) {
  }
  sVar7 = thunk_FUN_180624430(param_5[1]);
  if (0 < sVar7) {
  }
  sVar7 = thunk_FUN_180624430(param_5[2]);
  if (0 < sVar7) {
  }
  iVar8 = DAT_180c641f8;
  if (DAT_180c641f8 == 0) {
    UVar14 = GetTickCount64();
    if (UVar14 < DAT_180c64208) {
      iVar8 = 0;
    }
    else {
      local_10b0 = (undefined8 *)&DAT_1808ed210;
      iVar8 = FUN_1805f68d0(&DAT_1808ed210);
      if (iVar8 != 0) goto LAB_18023ea09;
      if (DAT_1808ed25c == 0x7fffffff) {
        DAT_1808ed25c = 0x7ffffffe;
        goto LAB_18023e9fe;
      }
      if ((DAT_180c641f8 == 0) && (DAT_180c64208 <= UVar14)) {
        DAT_180c641f8 = FUN_1804174b0("CBasePlayerController",0x9a8c76d);
        if (DAT_180c641f8 == 0) {
          DAT_180c64208 = UVar14 + 1000;
        }
        else {
          DAT_180c64208 = 0xffffffffffffffff;
        }
      }
      iVar8 = DAT_180c641f8;
      FUN_1805f68fc(&DAT_1808ed210);
    }
  }
  uVar61 = *(uint *)((longlong)iVar8 + *param_7);
  fVar46 = *param_4;
  fVar54 = param_4[1];
  fVar39 = param_4[2];
  lVar15 = *(longlong *)(local_c18 + 0x40);
  if ((lVar15 != 0) && (lVar15 != -0x10)) {
    iVar8 = *(int *)(local_c18 + 0x30);
    if ((-1 < iVar8) && (iVar8 < 0x21)) {
      auVar50 = ZEXT864(0);
      uStack_fa0 = 0;
      auVar56 = ZEXT864(0);
      uStack_f9c = 0;
      local_fb8 = *(float **)param_4;
      fStack_fb0 = fVar39;
      uStack_fa4 = *(uint *)(lVar15 + 0x54);
      iStack_fac = iVar8 + -1;
      uStack_fa8 = uVar61;
      if (-1 < iStack_fac) {
        lVar15 = *(longlong *)(*(longlong *)(local_c18 + 0x38) + (longlong)iVar8 * 8);
        puVar21 = (uint *)0x0;
        if (lVar15 != 0) {
          puVar21 = (uint *)(lVar15 + 0x10);
        }
        if (puVar21 != (uint *)0x0) {
          lVar15 = 0;
          if (*(longlong *)(puVar21 + 2) != 0) {
            lVar15 = *(longlong *)(puVar21 + 2) + 0x10;
          }
          if (lVar15 != 0) {
            fVar46 = *(float *)(lVar15 + 8);
            fVar54 = *(float *)(lVar15 + 0xc);
            local_fb8 = *(float **)(lVar15 + 8);
            fVar39 = *(float *)(lVar15 + 0x10);
            fStack_fb0 = fVar39;
          }
          if ((*puVar21 >> 0xb & 1) != 0) {
            uStack_fa8 = puVar21[0x16];
            uStack_fa0 = puVar21[0x17];
            auVar50 = ZEXT464(uStack_fa0);
          }
          fStack_fb0 = fVar39;
          if ((*puVar21 >> 9 & 1) != 0) {
            uStack_fa4 = puVar21[0x14];
            uStack_f9c = puVar21[0x15];
            auVar56 = ZEXT464(uStack_f9c);
          }
        }
      }
      if ((0 < (int)uStack_fa8) && (0 < (int)uStack_fa4)) {
        ppfVar30 = &local_fb8;
        fVar39 = fStack_fb0;
        do {
          sVar7 = thunk_FUN_180624430(*(undefined4 *)ppfVar30);
          if (0 < sVar7) goto LAB_18023e9e1;
          ppfVar30 = (float **)((longlong)ppfVar30 + 4);
        } while (ppfVar30 != (float **)&iStack_fac);
        sVar7 = thunk_FUN_180624430(auVar50._0_8_);
        if (((((sVar7 < 1) && (auVar51._0_4_ <= auVar50._0_4_)) &&
             (fVar37 = 1.0, auVar50._0_4_ < 1.0)) &&
            ((sVar7 = thunk_FUN_180624430(auVar56._0_8_), sVar7 < 1 &&
             (auVar51._0_4_ <= auVar56._0_4_)))) && (auVar56._0_4_ < fVar37)) {
          pfStack_b78 = (float *)CONCAT44(iStack_fac,fStack_fb0);
          pfStack_b70 = (float *)CONCAT44(uStack_fa4,uStack_fa8);
          uStack_b68 = CONCAT44(uStack_f9c,uStack_fa0);
          local_b80 = local_fb8;
          local_b60 = 1;
          auVar56 = ZEXT1664(auVar51._0_16_);
          local_bf8 = fVar46;
          local_bf4 = fVar54;
          local_bf0 = fVar39;
          FUN_180451150(&local_bf8);
          local_be8 = local_bf8 + *param_5;
          local_be4 = local_bf4 + param_5[1];
          local_be0 = local_bf0 + param_5[2];
          FUN_180451150(&local_be8);
          fVar41 = 0.017453292;
          auVar51 = ZEXT464((uint)(local_be8 * 0.017453292));
          auVar50 = ZEXT464((uint)(local_be4 * 0.017453292));
          fVar37 = (float)FUN_180638e00(local_be8 * 0.017453292);
          uVar61 = extraout_XMM0_Dc;
          uVar62 = extraout_XMM0_Dd;
          fVar38 = (float)FUN_180637540(auVar51._0_8_);
          fVar39 = (float)FUN_180638e00(auVar50._0_8_);
          fVar40 = (float)FUN_180637540(auVar50._0_8_);
          fVar46 = fVar40 * fVar38;
          fVar54 = fVar39 * fVar38;
          uVar53 = 0x80000000;
          uVar57 = 0;
          uVar58 = 0;
          local_f34 = -fVar37;
          auVar51 = ZEXT464((uint)(fVar41 * local_be0));
          local_1018 = fVar54;
          local_1010 = fVar46;
          fVar41 = (float)FUN_180638e00(fVar41 * local_be0);
          local_10a0 = (float)FUN_180637540(auVar51._0_8_);
          local_1014 = local_10a0 * fVar39 - fVar41 * fVar37 * fVar40;
          local_1000 = (float)((uint)fVar41 ^ uVar53) * fVar37 * fVar39 - local_10a0 * fVar40;
          local_1008 = (float)((uint)fVar41 ^ uVar53) * fVar38;
          local_100c = local_10a0 * fVar37 * fVar40 + fVar41 * fVar39;
          fVar39 = local_10a0 * fVar37 * fVar39 - fVar41 * fVar40;
          local_10a0 = local_10a0 * fVar38;
          auVar51 = ZEXT1664(CONCAT412(uVar62 ^ uVar58,
                                       CONCAT48(uVar61 ^ uVar57,(ulonglong)((uint)fVar37 ^ uVar53)))
                            );
          local_1030 = (float)((uint)fVar37 ^ uVar53) * DAT_180cc936c;
          local_1034 = fVar54 * DAT_180cc936c;
          local_1038 = fVar46 * DAT_180cc936c;
          fVar46 = 1e-08;
          local_1004 = fVar39;
          local_ffc = local_1034;
          local_ff8 = local_1030;
          local_f90 = local_1038;
          local_f8c = local_1034;
          local_f88 = local_1030;
          if (cVar6 != '\0') {
            iVar8 = DAT_180c641f0;
            if (DAT_180c641f0 == 0) {
              UVar14 = GetTickCount64();
              if (UVar14 < DAT_180c641e8) {
                iVar8 = 0;
              }
              else {
                local_10b0 = (undefined8 *)&DAT_1808ed1c0;
                iVar8 = FUN_1805f68d0(&DAT_1808ed1c0);
                if (iVar8 != 0) goto LAB_18023ea09;
                if (DAT_1808ed20c == 0x7fffffff) {
                  DAT_1808ed20c = 0x7ffffffe;
                  goto LAB_18023e9fe;
                }
                if ((DAT_180c641f0 == 0) && (DAT_180c641e8 <= UVar14)) {
                  DAT_180c641f0 = FUN_1804174b0("C_CSWeaponBase",0xc32ca614);
                  if (DAT_180c641f0 == 0) {
                    DAT_180c641e8 = UVar14 + 1000;
                  }
                  else {
                    DAT_180c641e8 = 0xffffffffffffffff;
                  }
                }
                iVar8 = DAT_180c641f0;
                FUN_1805f68fc(&DAT_1808ed1c0);
              }
            }
            iVar12 = DAT_180c641f4;
            if (DAT_180c641f4 == 0) {
              UVar14 = GetTickCount64();
              if (UVar14 < DAT_180c641d8) {
                iVar12 = 0;
              }
              else {
                local_10b0 = (undefined8 *)&DAT_1808ed160;
                iVar12 = FUN_1805f68d0(&DAT_1808ed160);
                if (iVar12 != 0) goto LAB_18023ea09;
                if (DAT_1808ed1ac == 0x7fffffff) {
                  DAT_1808ed1ac = 0x7ffffffe;
                  goto LAB_18023e9fe;
                }
                if ((DAT_180c641f4 == 0) && (DAT_180c641d8 <= UVar14)) {
                  DAT_180c641f4 = FUN_1804174b0("C_CSWeaponBase",0xd779e87b);
                  if (DAT_180c641f4 == 0) {
                    DAT_180c641d8 = UVar14 + 1000;
                  }
                  else {
                    DAT_180c641d8 = 0xffffffffffffffff;
                  }
                }
                iVar12 = DAT_180c641f4;
                FUN_1805f68fc(&DAT_1808ed160);
              }
            }
            if (((iVar8 == 0) || (iVar12 < iVar8)) || (0xfc < iVar12 - iVar8)) {
              pcVar26 = "pro_spread_accuracy_schema_unavailable";
              goto LAB_18023bf05;
            }
            if ((DAT_180cce330 & 1) == 0) {
              DAT_180cce330 = DAT_180cce330 | 1;
              atexit(FUN_180662340);
            }
            lVar35 = DAT_1808ed1b0;
            lVar15 = DAT_1808da460;
            if ((DAT_1808ed1b0 != DAT_1808da460) || (DAT_180c641e0 == 0)) {
              UVar14 = GetTickCount64();
              if ((lVar35 != lVar15) || (DAT_180c641d0 <= UVar14)) {
                local_10b0 = (undefined8 *)&DAT_1808ed100;
                iVar8 = FUN_1805f68d0(&DAT_1808ed100);
                if (iVar8 != 0) goto LAB_18023ea09;
                if (DAT_1808ed14c == 0x7fffffff) {
                  DAT_1808ed14c = 0x7ffffffe;
                  goto LAB_18023e9fe;
                }
                if (DAT_1808ed1b0 == lVar15) {
                  if ((DAT_180c641e0 == 0) && (DAT_180c641d0 <= UVar14)) goto LAB_18023be55;
                }
                else {
                  DAT_1808ed150 = 1000;
LAB_18023be55:
                  lVar35 = -1;
                  do {
                    local_1060 = lVar35 + 1;
                    lVar31 = lVar35 + 1;
                    lVar35 = local_1060;
                  } while ("client.dll:28F3440F11442420>E8????????488D85B0000000"[lVar31] != '\0');
                  local_1068 = "client.dll:28F3440F11442420>E8????????488D85B0000000";
                  local_1028 = "patterns::weapon_calculate_spread";
                  local_1020 = 0x21;
                  DAT_180c641e0 = FUN_1800e5d20(&local_1028,&local_1068);
                  DAT_1808ed1b0 = lVar15;
                  DAT_180c641d0 = 0xffffffffffffffff;
                  if (DAT_180c641e0 == 0) {
                    DAT_180c641d0 = UVar14 + DAT_1808ed150;
                    if (DAT_1808ed150 < 60000) {
                      DAT_1808ed150 = DAT_1808ed150 * 2;
                    }
                    else {
                      DAT_1808ed150 = 60000;
                    }
                  }
                  else {
                    DAT_1808ed150 = 1000;
                  }
                }
                lVar15 = DAT_180c641e0;
                FUN_1805f68fc(&DAT_1808ed100);
                if (lVar15 != 0) goto LAB_18023bf76;
              }
              pcVar26 = "pro_spread_pattern_unavailable";
              uStack_fe0 = (longlong *)CONCAT44(uStack_fe0._4_4_,(undefined4)uStack_fe0);
              goto LAB_18023bf05;
            }
LAB_18023bf76:
            if ((DAT_180cce330 & 1) == 0) {
              DAT_180cce330 = DAT_180cce330 | 1;
              atexit(FUN_180662340);
            }
            lVar35 = DAT_1808ed0a0;
            lVar15 = DAT_1808da460;
            if ((DAT_1808ed0a0 != DAT_1808da460) || (DAT_180c641c0 == 0)) {
              UVar14 = GetTickCount64();
              if ((lVar35 != lVar15) || (DAT_180c641c8 <= UVar14)) {
                local_10b0 = (undefined8 *)&DAT_1808ed0b0;
                iVar8 = FUN_1805f68d0(&DAT_1808ed0b0);
                if (iVar8 != 0) goto LAB_18023ea09;
                if (DAT_1808ed0fc == 0x7fffffff) {
                  DAT_1808ed0fc = 0x7ffffffe;
                  goto LAB_18023e9fe;
                }
                if (DAT_1808ed0a0 == lVar15) {
                  if ((DAT_180c641c0 == 0) && (DAT_180c641c8 <= UVar14)) goto LAB_18023c042;
                }
                else {
                  DAT_1808ed090 = 1000;
LAB_18023c042:
                  lVar35 = -1;
                  do {
                    local_1060 = lVar35 + 1;
                    lVar31 = lVar35 + 1;
                    lVar35 = local_1060;
                  } while ("client.dll:48895C2408574881ECF0000000F30F100A488D8C2410010000418BD8488BFAE8????????F30F104F04"
                           [lVar31] != '\0');
                  local_1068 = 
                  "client.dll:48895C2408574881ECF0000000F30F100A488D8C2410010000418BD8488BFAE8????????F30F104F04"
                  ;
                  local_1028 = "patterns::get_tick_view_angles";
                  local_1020 = 0x1e;
                  DAT_180c641c0 = FUN_1800e5d20(&local_1028,&local_1068);
                  DAT_1808ed0a0 = lVar15;
                  DAT_180c641c8 = 0xffffffffffffffff;
                  if (DAT_180c641c0 == 0) {
                    DAT_180c641c8 = DAT_1808ed090 + UVar14;
                    if (DAT_1808ed090 < 60000) {
                      DAT_1808ed090 = DAT_1808ed090 * 2;
                    }
                    else {
                      DAT_1808ed090 = 60000;
                    }
                  }
                  else {
                    DAT_1808ed090 = 1000;
                  }
                }
                lVar15 = DAT_180c641c0;
                FUN_1805f68fc(&DAT_1808ed0b0);
                if (lVar15 != 0) goto LAB_18023c0ec;
              }
              pcVar26 = "pro_spread_seed_unavailable";
              uStack_fe0 = (longlong *)CONCAT44(uStack_fe0._4_4_,(undefined4)uStack_fe0);
              goto LAB_18023bf05;
            }
LAB_18023c0ec:
            auVar50 = ZEXT464((uint)DAT_180cc9374);
            sVar7 = thunk_FUN_180624430(DAT_180cc9374);
            if ((0 < sVar7) || (auVar50._0_4_ < auVar56._0_4_)) {
              pcVar26 = "pro_spread_inaccuracy_unavailable";
              goto LAB_18023bf05;
            }
            auVar50 = ZEXT464((uint)DAT_180cc9378);
            sVar7 = thunk_FUN_180624430(DAT_180cc9378);
            if ((0 < sVar7) || (auVar50._0_4_ < auVar56._0_4_)) {
              pcVar26 = "pro_spread_spread_unavailable";
              goto LAB_18023bf05;
            }
            sVar7 = thunk_FUN_180624430(DAT_180cc9358);
            if (0 < sVar7) {
              pcVar26 = "pro_spread_recoil_unavailable";
              uStack_fe0 = (longlong *)CONCAT44(uStack_fe0._4_4_,(undefined4)uStack_fe0);
              goto LAB_18023bf05;
            }
            if ((DAT_180cce330 & 1) == 0) {
              DAT_180cce330 = DAT_180cce330 | 1;
              atexit(FUN_180662340);
            }
            lVar35 = DAT_1808ed098;
            lVar15 = DAT_1808da460;
            if ((DAT_1808ed098 != DAT_1808da460) || (lVar31 = DAT_180c641b0, DAT_180c641b0 == 0)) {
              UVar14 = GetTickCount64();
              if ((lVar35 == lVar15) && (UVar14 < DAT_180c641b8)) {
                lVar31 = 0;
              }
              else {
                local_10b0 = (undefined8 *)&DAT_1808ed040;
                iVar8 = FUN_1805f68d0(&DAT_1808ed040);
                if (iVar8 != 0) goto LAB_18023ea09;
                if (DAT_1808ed08c == 0x7fffffff) {
                  DAT_1808ed08c = 0x7ffffffe;
                  goto LAB_18023e9fe;
                }
                if (DAT_1808ed098 == lVar15) {
                  if ((DAT_180c641b0 == 0) && (DAT_180c641b8 <= UVar14)) goto LAB_18023c22c;
                }
                else {
                  DAT_1808ed030 = 1000;
LAB_18023c22c:
                  lVar35 = -1;
                  do {
                    local_1060 = lVar35 + 1;
                    lVar31 = lVar35 + 1;
                    lVar35 = local_1060;
                  } while ("client.dll:48895C2408574881ECF0000000F30F100A488D8C2410010000418BD8488BFAE8????????F30F104F04"
                           [lVar31] != '\0');
                  local_1068 = 
                  "client.dll:48895C2408574881ECF0000000F30F100A488D8C2410010000418BD8488BFAE8????????F30F104F04"
                  ;
                  local_1028 = "patterns::get_tick_view_angles";
                  local_1020 = 0x1e;
                  DAT_180c641b0 = FUN_1800e5d20(&local_1028,&local_1068);
                  DAT_1808ed098 = lVar15;
                  DAT_180c641b8 = 0xffffffffffffffff;
                  if (DAT_180c641b0 == 0) {
                    DAT_180c641b8 = UVar14 + DAT_1808ed030;
                    if (DAT_1808ed030 < 60000) {
                      DAT_1808ed030 = DAT_1808ed030 * 2;
                    }
                    else {
                      DAT_1808ed030 = 60000;
                    }
                  }
                  else {
                    DAT_1808ed030 = 1000;
                  }
                }
                lVar31 = DAT_180c641b0;
                FUN_1805f68fc(&DAT_1808ed040);
              }
            }
            cVar5 = FUN_1804513c0(lVar31,1,2);
            if (cVar5 == '\0') {
            }
            lVar15 = FUN_18017ea70();
            *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
            FUN_180241510(&local_1098,lVar31);
            lVar15 = FUN_18017ea70();
            if (*(int *)(lVar15 + 4) != 0) {
              *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
            }
            if (local_1098._4_1_ == '\0') {
            }
            FUN_1802750c0(DAT_180cc934c,&local_b38,(ulonglong)local_1098 & 0xffffffff,DAT_180cc9374)
            ;
            if (local_a38 == '\0') {
              auVar43 = vunpcklps_avx(SUB6416(ZEXT464(0x7fc00000),0),SUB6416(ZEXT464(0x7fc00000),0))
              ;
              auVar45 = vshufps_avx(auVar43,auVar43,0x55);
              auVar50 = ZEXT1664(auVar45);
              local_1098._0_4_ = auVar43._0_4_;
              local_b38 = (float)local_1098;
              local_1098 = auVar43._0_8_;
            }
            else {
              auVar50 = ZEXT464(auStack_b34[0]);
            }
            auVar65 = ZEXT464((uint)DAT_180cc936c);
            fVar54 = local_b38;
            sVar7 = thunk_FUN_180624430(local_b38);
            if (0 < sVar7) {
            }
            sVar7 = thunk_FUN_180624430(auVar50._0_8_);
            if (0 < sVar7) {
            }
            sVar7 = thunk_FUN_180624430(auVar65._0_8_);
            if (0 < sVar7) {
            }
            if (auVar65._0_4_ <= auVar56._0_4_) {
            }
            fVar38 = auVar50._0_4_;
            fVar37 = fVar54 * local_1008 + auVar51._0_4_ + fVar38 * local_10a0;
            auVar50 = ZEXT464((uint)fVar37);
            fVar39 = fVar54 * local_1000 + local_1018 + fVar39 * fVar38;
            fVar54 = fVar54 * local_1014 + local_1010 + fVar38 * local_100c;
            fVar37 = fVar39 * fVar39 + fVar54 * fVar54 + fVar37 * fVar37;
            auVar51 = ZEXT464((uint)fVar37);
            sVar7 = thunk_FUN_180624430(fVar37);
            fVar38 = auVar50._0_4_;
            fVar37 = auVar65._0_4_;
            if (0 < sVar7) {
            }
            fVar40 = auVar51._0_4_;
            if (fVar40 < fVar46) {
            }
            if (fVar40 < 0.0) {
              fVar40 = (float)FUN_18061e150(auVar51._0_8_);
              fVar38 = auVar50._0_4_;
              fVar37 = auVar65._0_4_;
            }
            else {
              fVar40 = SQRT(fVar40);
            }
            fVar37 = fVar37 / fVar40;
            local_1038 = fVar37 * fVar54;
            local_1034 = fVar37 * fVar39;
            local_1030 = fVar37 * fVar38;
            param_7 = local_1050;
          }
          auVar65 = ZEXT464((uint)local_1030);
          auVar50 = ZEXT464((uint)local_1034);
          auVar51 = ZEXT464((uint)local_1038);
          sVar7 = thunk_FUN_180624430(local_1038);
          if (0 < sVar7) {
          }
          sVar7 = thunk_FUN_180624430(auVar50._0_8_);
          if (0 < sVar7) {
          }
          sVar7 = thunk_FUN_180624430(auVar65._0_8_);
          if (0 < sVar7) {
          }
          fVar46 = auVar51._0_4_ * auVar51._0_4_;
          fVar54 = 1.0;
          if (auVar50._0_4_ * auVar50._0_4_ + fVar46 + auVar65._0_4_ * auVar65._0_4_ < 1.0) {
          }
          puVar17 = (undefined8 *)0x0;
          local_10a8 = (undefined8 *)0x0;
          local_1048 = (float *)0x0;
          local_e28._0_4_ = 0xffffffff;
          local_10b4 = 1.0;
          bVar3 = false;
          local_1098 = (undefined8 *)0x0;
          plVar16 = (longlong *)FUN_1803d44c0(fVar46,local_b58,1);
          auVar45 = auVar56._0_16_;
          local_1040 = (longlong *)*plVar16;
          plVar16 = (longlong *)plVar16[1];
          puVar33 = (undefined8 *)0x0;
          pfVar20 = (float *)0x0;
          local_1088 = plVar16;
          if (local_1040 != plVar16) {
            auVar60 = ZEXT464(0x3a83126f);
            do {
              iVar8 = DAT_180c641a8;
              if ((*local_1040 != 0) && (*local_1040 != *param_7)) {
                if (DAT_180c641a8 == 0) {
                  auVar60 = ZEXT1664(auVar60._0_16_);
                  auVar51 = ZEXT1664(auVar51._0_16_);
                  auVar56 = ZEXT1664(auVar56._0_16_);
                  auVar50 = ZEXT1664(auVar50._0_16_);
                  auVar65 = ZEXT1664(auVar65._0_16_);
                  UVar14 = GetTickCount64();
                  if (DAT_180c641a0 <= UVar14) {
                    local_10b0 = (undefined8 *)&DAT_1808ecf90;
                    iVar8 = FUN_1805f68d0(&DAT_1808ecf90);
                    if (iVar8 != 0) goto LAB_18023ea8c;
                    if (DAT_1808ecfdc == 0x7fffffff) {
                      DAT_1808ecfdc = 0x7ffffffe;
                      goto LAB_18023ea81;
                    }
                    if ((DAT_180c641a8 == 0) && (DAT_180c641a0 <= UVar14)) {
                      DAT_180c641a8 = FUN_1804174b0("CCSPlayerController",0x3db3c8d0);
                      DAT_180c641a0 = 0xffffffffffffffff;
                      if (DAT_180c641a8 == 0) {
                        DAT_180c641a0 = UVar14 + 1000;
                      }
                    }
                    iVar8 = DAT_180c641a8;
                    FUN_1805f68fc(&DAT_1808ecf90);
                  }
                  plVar16 = local_1088;
                }
                auVar64 = auVar65._0_16_;
                auVar48 = auVar50._0_16_;
                auVar47 = auVar56._0_16_;
                auVar43 = auVar51._0_16_;
                auVar45 = auVar60._0_16_;
                if (*(char *)((longlong)iVar8 + *local_1040) != '\0') {
                  if (DAT_180c64190 == 0) {
                    auVar51 = ZEXT1664(auVar45);
                    auVar50 = ZEXT1664(auVar43);
                    auVar56 = ZEXT1664(auVar47);
                    auVar65 = ZEXT1664(auVar48);
                    auVar60 = ZEXT1664(auVar64);
                    UVar14 = GetTickCount64();
                    auVar64 = auVar60._0_16_;
                    auVar48 = auVar65._0_16_;
                    auVar47 = auVar56._0_16_;
                    auVar43 = auVar50._0_16_;
                    auVar45 = auVar51._0_16_;
                    if (DAT_180c64198 <= UVar14) {
                      local_10b0 = (undefined8 *)&DAT_1808ecfe0;
                      iVar8 = FUN_1805f68d0(&DAT_1808ecfe0);
                      if (iVar8 != 0) goto LAB_18023ea8c;
                      if (DAT_1808ed02c == 0x7fffffff) {
                        DAT_1808ed02c = 0x7ffffffe;
                        goto LAB_18023ea81;
                      }
                      if ((DAT_180c64190 == 0) && (DAT_180c64198 <= UVar14)) {
                        DAT_180c64190 = FUN_1804174b0("CCSPlayerController",0xd6c93e7c);
                        DAT_180c64198 = 0xffffffffffffffff;
                        if (DAT_180c64190 == 0) {
                          DAT_180c64198 = UVar14 + 1000;
                        }
                      }
                      FUN_1805f68fc(&DAT_1808ecfe0);
                      auVar64 = auVar60._0_16_;
                      auVar48 = auVar65._0_16_;
                      auVar47 = auVar56._0_16_;
                      auVar43 = auVar50._0_16_;
                      auVar45 = auVar51._0_16_;
                    }
                  }
                  auVar60 = ZEXT1664(auVar45);
                  auVar51 = ZEXT1664(auVar43);
                  auVar56 = ZEXT1664(auVar47);
                  auVar50 = ZEXT1664(auVar48);
                  auVar65 = ZEXT1664(auVar64);
                  puVar17 = (undefined8 *)FUN_1803d4150();
                  local_1078 = puVar17;
                  if (DAT_180c64188 == 0) {
                    UVar14 = GetTickCount64();
                    if (DAT_180c64180 <= UVar14) {
                      local_10b0 = (undefined8 *)&DAT_1808ecf40;
                      iVar8 = FUN_1805f68d0(&DAT_1808ecf40);
                      if (iVar8 != 0) goto LAB_18023ea8c;
                      if (DAT_1808ecf8c == 0x7fffffff) {
                        DAT_1808ecf8c = 0x7ffffffe;
                        goto LAB_18023ea81;
                      }
                      if ((DAT_180c64188 == 0) && (DAT_180c64180 <= UVar14)) {
                        DAT_180c64188 = FUN_1804174b0("CCSPlayerController",0xd6c93e7c);
                        DAT_180c64180 = 0xffffffffffffffff;
                        if (DAT_180c64188 == 0) {
                          DAT_180c64180 = UVar14 + 1000;
                        }
                      }
                      iVar8 = DAT_180c64188;
                      FUN_1805f68fc(&DAT_1808ecf40);
                      if (iVar8 != 0) goto LAB_18023c868;
                    }
                    iVar8 = DAT_180c6418c;
                    if (DAT_180c6418c == 0) {
                      UVar14 = GetTickCount64();
                      if (DAT_180c64168 <= UVar14) {
                        local_10b0 = (undefined8 *)&DAT_1808ecef0;
                        iVar8 = FUN_1805f68d0(&DAT_1808ecef0);
                        if (iVar8 != 0) goto LAB_18023ea8c;
                        if (DAT_1808ecf3c == 0x7fffffff) {
                          DAT_1808ecf3c = 0x7ffffffe;
                          goto LAB_18023ea81;
                        }
                        if ((DAT_180c6418c == 0) && (DAT_180c64168 <= UVar14)) {
                          DAT_180c6418c = FUN_1804174b0("CBasePlayerController",0x7c628c1d);
                          DAT_180c64168 = 0xffffffffffffffff;
                          if (DAT_180c6418c == 0) {
                            DAT_180c64168 = UVar14 + 1000;
                          }
                        }
                        iVar8 = DAT_180c6418c;
                        FUN_1805f68fc(&DAT_1808ecef0);
                        if (iVar8 != 0) goto LAB_18023c84f;
                      }
                    }
                    else {
LAB_18023c84f:
                      puVar17 = (undefined8 *)
                                FUN_1803d4150(local_1040,
                                              *(undefined4 *)((longlong)iVar8 + *local_1040));
                      local_1078 = puVar17;
                    }
                  }
LAB_18023c868:
                  iVar8 = DAT_180c64178;
                  if ((puVar17 == (undefined8 *)0x0) || (puVar17 == (undefined8 *)param_7[1])) {
LAB_18023cb7e:
                    puVar17 = local_10a8;
                  }
                  else {
                    if ((DAT_180c64178 == 0) && (UVar14 = GetTickCount64(), DAT_180c64170 <= UVar14)
                       ) {
                      local_10b0 = (undefined8 *)&DAT_1808ece50;
                      iVar8 = FUN_1805f68d0(&DAT_1808ece50);
                      if (iVar8 != 0) goto LAB_18023ea8c;
                      if (DAT_1808ece9c == 0x7fffffff) {
                        DAT_1808ece9c = 0x7ffffffe;
                        goto LAB_18023ea81;
                      }
                      if ((DAT_180c64178 == 0) && (DAT_180c64170 <= UVar14)) {
                        DAT_180c64178 = FUN_1804174b0("C_BaseEntity",0xa5bfefb3);
                        DAT_180c64170 = 0xffffffffffffffff;
                        if (DAT_180c64178 == 0) {
                          DAT_180c64170 = UVar14 + 1000;
                        }
                      }
                      iVar8 = DAT_180c64178;
                      FUN_1805f68fc(&DAT_1808ece50);
                    }
                    if ((*(char *)((longlong)param_7 + 0x29) != '\0') &&
                       (*(uint *)((longlong)param_7 + 0x24) ==
                        (uint)*(byte *)((longlong)iVar8 + (longlong)puVar17))) goto LAB_18023cb7e;
                    iVar8 = DAT_180c64158;
                    if (DAT_180c64158 == 0) {
                      UVar14 = GetTickCount64();
                      if (UVar14 < DAT_180c64160) {
                        iVar8 = 0;
                      }
                      else {
                        local_10b0 = (undefined8 *)&DAT_1808ecea0;
                        iVar8 = FUN_1805f68d0(&DAT_1808ecea0);
                        if (iVar8 != 0) goto LAB_18023ea8c;
                        if (DAT_1808eceec == 0x7fffffff) {
                          DAT_1808eceec = 0x7ffffffe;
                          goto LAB_18023ea81;
                        }
                        if ((DAT_180c64158 == 0) && (DAT_180c64160 <= UVar14)) {
                          DAT_180c64158 = FUN_1804174b0("C_CSPlayerPawn",0x9c15080d);
                          DAT_180c64160 = 0xffffffffffffffff;
                          if (DAT_180c64158 == 0) {
                            DAT_180c64160 = UVar14 + 1000;
                          }
                        }
                        iVar8 = DAT_180c64158;
                        FUN_1805f68fc(&DAT_1808ecea0);
                      }
                    }
                    puVar33 = local_1078;
                    if ((*(char *)((longlong)iVar8 + (longlong)local_1078) != '\0') ||
                       ((*(char *)(param_6 + 0x9c) != '\0' &&
                        (cVar5 = FUN_1802351c0(local_1078), cVar5 != '\0')))) goto LAB_18023cb7e;
                    iVar8 = DAT_180c64150;
                    if (DAT_180c64150 == 0) {
                      UVar14 = GetTickCount64();
                      if (UVar14 < DAT_180c64148) {
                        iVar8 = 0;
                      }
                      else {
                        local_10b0 = (undefined8 *)&DAT_1808ece00;
                        iVar8 = FUN_1805f68d0(&DAT_1808ece00);
                        if (iVar8 != 0) {
LAB_18023ea8c:
                    /* WARNING: Subroutine does not return */
                          FUN_1805f6d44(5);
                        }
                        if (DAT_1808ece4c == 0x7fffffff) {
                          DAT_1808ece4c = 0x7ffffffe;
LAB_18023ea81:
                    /* WARNING: Subroutine does not return */
                          FUN_1805f6d44(6);
                        }
                        if ((DAT_180c64150 == 0) && (DAT_180c64148 <= UVar14)) {
                          DAT_180c64150 = FUN_1804174b0("C_BaseEntity",0x84cdad2);
                          DAT_180c64148 = 0xffffffffffffffff;
                          if (DAT_180c64150 == 0) {
                            DAT_180c64148 = UVar14 + 1000;
                          }
                        }
                        iVar8 = DAT_180c64150;
                        FUN_1805f68fc(&DAT_1808ece00);
                      }
                      puVar33 = local_1078;
                    }
                    local_ff4 = *(int *)((longlong)iVar8 + (longlong)puVar33);
                    if (local_ff4 < 1) goto LAB_18023cb7e;
                    local_b98 = (undefined1  [16])0x0;
                    local_b88 = 0;
                    FUN_180273020(&DAT_180cc9398,local_b98);
                    if (local_b98._0_8_ == local_b98._8_8_) {
                      if ((longlong *)local_b98._0_8_ != (longlong *)0x0) {
                        if ((0xfff < (local_b88 - local_b98._0_8_ & 0xfffffffffffffff8U)) &&
                           (0x1f < (ulonglong)
                                   (local_b98._0_8_ + (-8 - *(longlong *)(local_b98._0_8_ + -8)))))
                        goto LAB_18023ea17;
                        FUN_1804547d0();
                        local_b98 = (undefined1  [16])0x0;
                        local_b88 = 0;
                      }
                      goto LAB_18023cb7e;
                    }
                    _uStack_f48 = *(float **)local_b98._0_8_;
                    local_f58[0] = _uStack_f48;
                    if (cVar6 == '\0') {
                      local_f58[1] = *(float **)
                                      (local_b98._0_8_ +
                                      ((ulonglong)
                                       ((longlong)(local_b98._8_8_ - local_b98._0_8_) >> 3) >> 1) *
                                      8);
                      _uStack_f48 = *(float **)(local_b98._8_8_ + -8);
                    }
                    else {
                      local_f58[1] = _uStack_f48;
                    }
                    local_f98 = 0;
                    do {
                      pfVar20 = local_f58[local_f98];
                      if ((((pfVar20 != (float *)0x0) && (*(char *)(pfVar20 + 0x8ee) != '\0')) &&
                          (fVar46 = pfVar20[0xdb], (int)fVar46 - 1U < 0x80)) &&
                         (((int)pfVar20[0xda] - 1U < 0x14 &&
                          ((local_f98 == 0 || (pfVar20 != local_f58[local_f98 - 1])))))) {
                        lVar15 = 6;
                        pfVar25 = pfVar20 + 0x12;
                        puVar17 = local_7a8;
                        do {
                          puVar22 = puVar17;
                          pfVar18 = pfVar25;
                          uVar42 = *(undefined8 *)(pfVar18 + 2);
                          uVar19 = *(undefined8 *)(pfVar18 + 4);
                          uVar1 = *(undefined8 *)(pfVar18 + 6);
                          *puVar22 = *(undefined8 *)pfVar18;
                          puVar22[1] = uVar42;
                          puVar22[2] = uVar19;
                          puVar22[3] = uVar1;
                          uVar42 = *(undefined8 *)(pfVar18 + 10);
                          uVar19 = *(undefined8 *)(pfVar18 + 0xc);
                          uVar1 = *(undefined8 *)(pfVar18 + 0xe);
                          puVar22[4] = *(undefined8 *)(pfVar18 + 8);
                          puVar22[5] = uVar42;
                          puVar22[6] = uVar19;
                          puVar22[7] = uVar1;
                          uVar42 = *(undefined8 *)(pfVar18 + 0x12);
                          uVar19 = *(undefined8 *)(pfVar18 + 0x14);
                          uVar1 = *(undefined8 *)(pfVar18 + 0x16);
                          puVar22[8] = *(undefined8 *)(pfVar18 + 0x10);
                          puVar22[9] = uVar42;
                          puVar22[10] = uVar19;
                          puVar22[0xb] = uVar1;
                          uVar42 = *(undefined8 *)(pfVar18 + 0x1a);
                          puVar22[0xc] = *(undefined8 *)(pfVar18 + 0x18);
                          puVar22[0xd] = uVar42;
                          *(undefined1 (*) [16])(puVar22 + 0xe) =
                               *(undefined1 (*) [16])(pfVar18 + 0x1c);
                          lVar15 = lVar15 + -1;
                          pfVar25 = pfVar18 + 0x20;
                          puVar17 = puVar22 + 0x10;
                        } while (lVar15 != 0);
                        uVar42 = *(undefined8 *)(pfVar18 + 0x22);
                        uVar19 = *(undefined8 *)(pfVar18 + 0x24);
                        uVar1 = *(undefined8 *)(pfVar18 + 0x26);
                        puVar22[0x10] = *(undefined8 *)(pfVar18 + 0x20);
                        puVar22[0x11] = uVar42;
                        puVar22[0x12] = uVar19;
                        puVar22[0x13] = uVar1;
                        *(float *)(puVar22 + 0x14) = pfVar18[0x28];
                        local_1080 = pfVar20 + 0xdc;
                        auVar60 = ZEXT1664(auVar60._0_16_);
                        auVar51 = ZEXT1664(auVar51._0_16_);
                        auVar56 = ZEXT1664(auVar56._0_16_);
                        auVar50 = ZEXT1664(auVar50._0_16_);
                        auVar65 = ZEXT1664(auVar65._0_16_);
                        auVar52._0_8_ = FUN_18026e6a0(&DAT_180cc9380,&local_b38);
                        auVar52._8_56_ = extraout_var;
                        puVar17 = local_7a8;
                        local_10b0 = local_7a8 + (longlong)local_488 * 5;
                        if (local_7a8 != local_10b0) {
LAB_18023cd10:
                          if ((-1 < (int)*(float *)((longlong)puVar17 + 4)) &&
                             ((uint)*(float *)((longlong)puVar17 + 4) < (uint)fVar46)) {
                            uVar9 = FUN_1803db3f0(auVar52._0_8_,*(undefined4 *)puVar17);
                            cVar5 = FUN_1802404d0(param_6,uVar9);
                            auVar52._8_56_ = extraout_var_00;
                            auVar52._0_8_ = extraout_XMM0_Qa;
                            if (cVar5 != '\0') {
                              auVar52._0_8_ = FUN_180237670(local_e88,puVar17);
                              auVar52._8_56_ = extraout_var_01;
                              local_1090 = auVar56._0_4_;
                              if (local_e2c != '\0') {
                                auVar59 = ZEXT464(local_e70);
                                fVar54 = local_e30;
                                fVar39 = local_e68;
                                fVar37 = local_e6c;
                                if (local_e30 <= auVar60._0_4_) {
                                  uVar42 = FUN_180451010(local_e40,local_d98,&local_1038);
                                  local_e94 = *param_3 - auVar59._0_4_;
                                  local_e90 = param_3[1] - fVar37;
                                  local_e8c = param_3[2] - fVar39;
                                  uVar19 = FUN_180451010(local_e40,local_d8c,&local_e94);
                                  cVar5 = FUN_180241ba0(uVar19,uVar42);
                                  auVar52._8_56_ = extraout_var_03;
                                  auVar52._0_8_ = extraout_XMM0_Qa_01;
                                }
                                else {
                                  cVar5 = FUN_180241590(param_3,&local_1038);
                                  auVar52._8_56_ = extraout_var_02;
                                  auVar52._0_8_ = extraout_XMM0_Qa_00;
                                }
                                fVar38 = local_1090;
                                if (cVar5 == '\0') {
LAB_18023ce85:
                                  bVar2 = false;
                                }
                                else {
                                  sVar7 = thunk_FUN_180624430(local_1090);
                                  auVar52._8_56_ = extraout_var_04;
                                  auVar52._0_8_ = extraout_XMM0_Qa_02;
                                  if (((0 < sVar7) || (fVar38 < auVar56._0_4_)) ||
                                     (auVar52 = ZEXT464(0x3f800000), 1.0 <= fVar38))
                                  goto LAB_18023ce85;
                                  bVar2 = true;
                                }
                                if ((cVar6 != '\0') && (!bVar3)) {
                                  local_1054 = auVar56._0_4_;
                                  if (fVar54 <= auVar60._0_4_) {
                                    uVar42 = FUN_180451010(local_e40,local_d80,&local_f90);
                                    local_ed8 = *param_3 - auVar59._0_4_;
                                    local_ed4 = param_3[1] - fVar37;
                                    local_ed0 = param_3[2] - fVar39;
                                    uVar19 = FUN_180451010(local_e40,local_d74,&local_ed8);
                                    cVar5 = FUN_180241ba0(uVar19,uVar42);
                                    auVar52._8_56_ = extraout_var_06;
                                    auVar52._0_8_ = extraout_XMM0_Qa_04;
                                  }
                                  else {
                                    cVar5 = FUN_180241590(param_3,&local_f90);
                                    auVar52._8_56_ = extraout_var_05;
                                    auVar52._0_8_ = extraout_XMM0_Qa_03;
                                  }
                                  if (cVar5 != '\0') {
                                    if (*(char *)(param_6 + 0x9a) != '\0') {
                                      local_ecc = local_1054 * local_f90 + *param_3;
                                      local_ec8 = local_1054 * local_ffc + param_3[1];
                                      local_ec4 = local_1054 * local_ff8 + param_3[2];
                                      cVar5 = FUN_180235e70(local_ec8,param_3);
                                      auVar52._8_56_ = extraout_var_07;
                                      auVar52._0_8_ = extraout_XMM0_Qa_05;
                                      if (cVar5 != '\0') goto LAB_18023d110;
                                    }
                                    local_f80 = auVar56._0_4_;
                                    fStack_f7c = -NAN;
                                    fStack_f78 = -NAN;
                                    uStack_f74 = uStack_f74 & 0xffffff00;
                                    bVar3 = false;
                                    pfStack_f70 = (float *)((ulonglong)pfStack_f70 &
                                                           0xffffffff00000000);
                                    local_ec0 = local_f90 + *param_3;
                                    local_ebc = local_ffc + param_3[1];
                                    local_eb8 = local_ff8 + param_3[2];
                                    LOCK();
                                    DAT_180bbeef0 = DAT_180bbeef0 + 1;
                                    UNLOCK();
                                    cVar5 = FUN_18026ef40(&DAT_180cc9380,param_3);
                                    auVar52._8_56_ = extraout_var_08;
                                    auVar52._0_8_ = extraout_XMM0_Qa_06;
                                    if (cVar5 != '\0') {
                                      fVar54 = local_f80;
                                      sVar7 = thunk_FUN_180624430(local_f80);
                                      auVar52._8_56_ = extraout_var_09;
                                      auVar52._0_8_ = extraout_XMM0_Qa_07;
                                      if ((sVar7 < 1) && (auVar56._0_4_ < fVar54)) {
                                        switch(fStack_f7c) {
                                        case 0.0:
                                          uVar42 = 1;
                                          break;
                                        case 1.4013e-45:
                                          uVar42 = 8;
                                          break;
                                        case 2.8026e-45:
                                        case 4.2039e-45:
                                          uVar42 = 3;
                                          break;
                                        case 5.60519e-45:
                                        case 7.00649e-45:
                                        case 8.40779e-45:
                                          uVar42 = 2;
                                          break;
                                        case 9.80909e-45:
                                        case 1.26117e-44:
                                        case 1.54143e-44:
                                          uVar42 = 7;
                                          break;
                                        case 1.12104e-44:
                                        case 1.4013e-44:
                                        case 1.68156e-44:
                                          uVar42 = 6;
                                          break;
                                        case 1.82169e-44:
                                        case 2.10195e-44:
                                        case 2.24208e-44:
                                          uVar42 = 5;
                                          break;
                                        case 1.96182e-44:
                                        case 2.38221e-44:
                                        case 2.52234e-44:
                                          uVar42 = 4;
                                          break;
                                        default:
                                          uVar42 = 0;
                                        }
                                        cVar5 = FUN_1802404d0(param_6,uVar42);
                                        auVar52._8_56_ = extraout_var_10;
                                        auVar52._0_8_ = extraout_XMM0_Qa_08;
                                        if (cVar5 != '\0') {
                                          bVar3 = true;
                                          local_1098 = puVar33;
                                        }
                                      }
                                    }
                                  }
                                }
LAB_18023d110:
                                if (bVar2) {
                                  fVar54 = param_3[2];
                                  fVar39 = param_3[1];
                                  fVar37 = *param_3;
                                  local_eb0 = auVar51._0_4_ * fVar38 + fVar37;
                                  local_eac = auVar50._0_4_ * fVar38 + fVar39;
                                  local_ea8 = auVar65._0_4_ * fVar38 + fVar54;
                                  if (*(char *)(param_6 + 0x9a) != '\0') {
                                    cVar5 = FUN_180235e70(local_eac,param_3);
                                    auVar52._8_56_ = extraout_var_11;
                                    auVar52._0_8_ = extraout_XMM0_Qa_09;
                                    if (cVar5 != '\0') goto LAB_18023d4ae;
                                  }
                                  local_bfc = local_bfc + 1;
                                  local_fe8 = auVar56._0_4_;
                                  iStack_fe4 = -1;
                                  uStack_fe0._0_4_ = 0xffffffff;
                                  uStack_fe0._4_4_ = uStack_fe0._4_4_ & 0xffffff00;
                                  local_fd8 = (longlong *)
                                              ((ulonglong)local_fd8 & 0xffffffff00000000);
                                  local_ea0 = auVar51._0_4_ + fVar37;
                                  local_e9c = auVar50._0_4_ + fVar39;
                                  local_e98 = auVar65._0_4_ + fVar54;
                                  LOCK();
                                  DAT_180bbeef0 = DAT_180bbeef0 + 1;
                                  UNLOCK();
                                  cVar5 = FUN_18026ef40(&DAT_180cc9380,param_3);
                                  auVar52._8_56_ = extraout_var_12;
                                  auVar52._0_8_ = extraout_XMM0_Qa_10;
                                  if (cVar5 != '\0') {
                                    auVar59 = ZEXT464((uint)local_fe8);
                                    sVar7 = thunk_FUN_180624430(local_fe8);
                                    auVar52._8_56_ = extraout_var_13;
                                    auVar52._0_8_ = extraout_XMM0_Qa_11;
                                    if ((sVar7 < 1) && (auVar56._0_4_ < auVar59._0_4_)) {
                                      cVar5 = uStack_fe0._4_1_;
                                      if ((uStack_fe0._4_1_ == '\0') || (local_c10[0] != '\0')) {
                                        if ((uStack_fe0._4_1_ == '\0') ||
                                           (*(char *)(param_6 + 0x380) == '\0')) {
                                          uVar42 = 0;
                                        }
                                        else {
                                          uVar42 = 2;
                                        }
                                        local_bc4 = auVar59._0_4_;
                                        iVar8 = FUN_1802344f0(param_6,uVar42);
                                        auVar52._8_56_ = extraout_var_14;
                                        auVar52._0_8_ = extraout_XMM0_Qa_12;
                                        if (0 < iVar8) {
                                          if ((cVar5 == '\0') ||
                                             (*(char *)(param_6 + 0x380) == '\0')) {
                                            uVar42 = 0;
                                            uVar9 = *(undefined4 *)(param_6 + 0x2a4);
                                          }
                                          else {
                                            uVar42 = 2;
                                            uVar9 = *(undefined4 *)(param_6 + 1000);
                                          }
                                          uVar9 = FUN_1802344f0(param_6,uVar42,uVar9);
                                          cVar5 = FUN_1802342c0(auVar59._0_8_,uVar9);
                                          auVar52._8_56_ = extraout_var_15;
                                          auVar52._0_8_ = extraout_XMM0_Qa_13;
                                          if (cVar5 == '\0') {
                                            local_c00 = local_c00 + 1;
                                            goto LAB_18023d4ae;
                                          }
                                        }
                                        lVar15 = (longlong)local_488;
                                        for (pauVar32 = (undefined1 (*) [32])local_7a8;
                                            (pauVar32 !=
                                             (undefined1 (*) [32])(local_7a8 + lVar15 * 5) &&
                                            (*(int *)*pauVar32 != iStack_fe4));
                                            pauVar32 = (undefined1 (*) [32])(pauVar32[1] + 8)) {
                                        }
                                        if (pauVar32 ==
                                            (undefined1 (*) [32])(local_7a8 + lVar15 * 5))
                                        goto LAB_18023d4ae;
                                        if (-1 < (int)*(float *)(*pauVar32 + 4)) {
                                          if ((uint)*(float *)(*pauVar32 + 4) < (uint)fVar46) {
                                            uVar9 = FUN_1803db3f0(lVar15 * 5,
                                                                  *(undefined4 *)*pauVar32);
                                            cVar5 = FUN_180240730(param_6,uVar9,auVar59._0_8_);
                                            auVar52._8_56_ = extraout_var_16;
                                            auVar52._0_8_ = extraout_XMM0_Qa_14;
                                            if (cVar5 != '\0') {
                                              auVar52._0_8_ = FUN_180237670(local_df8,pauVar32);
                                              auVar52._8_56_ = extraout_var_17;
                                              if (local_d9c != '\0') {
                                                if (local_da0 <= auVar60._0_4_) {
                                                  uVar42 = FUN_180451010(local_db0,&local_1028,
                                                                         &local_1038);
                                                  local_fc8 = *param_3 - local_de0;
                                                  local_fc4 = param_3[1] - local_ddc;
                                                  local_fc0 = param_3[2] - local_dd8;
                                                  uVar19 = FUN_180451010(local_db0,&local_1068,
                                                                         &local_fc8);
                                                  cVar5 = FUN_180241ba0(uVar19,uVar42);
                                                  auVar52._8_56_ = extraout_var_19;
                                                  auVar52._0_8_ = extraout_XMM0_Qa_16;
                                                }
                                                else {
                                                  cVar5 = FUN_180241590(param_3,&local_1038);
                                                  auVar52._8_56_ = extraout_var_18;
                                                  auVar52._0_8_ = extraout_XMM0_Qa_15;
                                                }
                                                puVar33 = local_1078;
                                                if (cVar5 != '\0') {
                                                  bVar3 = true;
                                                  local_1098 = local_1078;
                                                  if ((local_10a8 != (undefined8 *)0x0) &&
                                                     (local_10b4 <= local_1090)) goto LAB_18023d4ae;
                                                  local_10a8 = local_1078;
                                                  local_1048 = local_f58[local_f98];
                                                  local_e28 = *pauVar32;
                                                  local_10b4 = local_1090;
                                                  goto LAB_18023d4c6;
                                                }
                                                goto LAB_18023d4ae;
                                              }
                                            }
                                          }
                                          puVar33 = local_1078;
                                        }
                                        goto LAB_18023d4ae;
                                      }
                                    }
                                  }
                                  local_c04 = local_c04 + 1;
                                }
                              }
                            }
                          }
LAB_18023d4ae:
                          puVar17 = puVar17 + 5;
                          if (puVar17 == local_10b0) goto LAB_18023d4c1;
                          goto LAB_18023cd10;
                        }
                      }
LAB_18023d4c1:
LAB_18023d4c6:
                      puVar17 = local_10a8;
                      local_f98 = local_f98 + 1;
                    } while (local_f98 < 3);
                    if (local_b98._0_8_ != 0) {
                      if ((0xfff < (local_b88 - local_b98._0_8_ & 0xfffffffffffffff8U)) &&
                         (0x1f < (local_b98._0_8_ - *(longlong *)(local_b98._0_8_ + -8)) - 8U)) {
LAB_18023ea17:
                    /* WARNING: Subroutine does not return */
                        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
                      }
                      auVar60 = ZEXT1664(auVar60._0_16_);
                      auVar51 = ZEXT1664(auVar51._0_16_);
                      auVar56 = ZEXT1664(auVar56._0_16_);
                      auVar50 = ZEXT1664(auVar50._0_16_);
                      auVar65 = ZEXT1664(auVar65._0_16_);
                      FUN_1804547d0();
                      local_b98 = (undefined1  [16])0x0;
                      local_b88 = 0;
                    }
                  }
                  plVar16 = local_1088;
                }
              }
              auVar45 = auVar56._0_16_;
              local_1040 = local_1040 + 3;
              if (local_1040 == plVar16) goto LAB_18023d53e;
              param_7 = local_1050;
            } while( true );
          }
          goto LAB_18023d54f;
        }
      }
    }
  }
LAB_18023e9e1:
  local_b60 = 0;
  pcVar26 = "input_clock_unavailable";
  goto LAB_18023bf05;
LAB_18023d53e:
  fVar54 = 1.0;
  puVar33 = local_1098;
  pfVar20 = local_1048;
LAB_18023d54f:
  auVar51 = ZEXT1664(auVar45);
  uVar42 = FUN_1801abba0(local_b58);
  plVar16 = local_1050;
  if (puVar17 != (undefined8 *)0x0) {
    puVar33 = puVar17;
  }
  if (puVar33 != (undefined8 *)0x0) {
    plVar23 = &DAT_180b8e7a8;
    do {
      if (((undefined8 *)*plVar23 == puVar33) && ((char)plVar23[3] != '\0')) {
        DAT_180b8e790 = plVar23[1];
        DAT_180b8e798 = plVar23[2];
        DAT_180b8e788 = puVar33;
        goto LAB_18023d5d7;
      }
      plVar23 = plVar23 + 4;
    } while (plVar23 != &DAT_180b8f7a8);
    DAT_180b8e788 = (undefined8 *)0x0;
    DAT_180b8e798 = 0;
    DAT_180b8e790 = 0;
    pcVar26 = "outside_detection_fov";
    uStack_fe0 = (longlong *)CONCAT44(uStack_fe0._4_4_,(undefined4)uStack_fe0);
    goto LAB_18023bf05;
  }
  DAT_180b8e798 = 0;
  DAT_180b8e788 = (undefined8 *)0x0;
  DAT_180b8e790 = 0;
LAB_18023d5d7:
  if (bVar3) {
    cVar5 = FUN_18023a410(uVar42,local_c18,param_3,&local_b80);
    uVar42 = extraout_XMM0_Qa_17;
    if (cVar5 != '\0') {
      pcVar26 = "preparing_scope_or_stop";
      uStack_fe0 = (longlong *)CONCAT44(uStack_fe0._4_4_,(undefined4)uStack_fe0);
      goto LAB_18023bf05;
    }
  }
  if (pfVar20 == (float *)0x0) {
    if (cVar6 != '\0') {
      pcVar26 = "waiting_for_pro_seed";
      uStack_fe0 = (longlong *)CONCAT44(uStack_fe0._4_4_,(undefined4)uStack_fe0);
      if (puVar33 != (undefined8 *)0x0) goto LAB_18023bf05;
    }
    pcVar26 = "no_crosshair_target";
    uStack_fe0 = (longlong *)CONCAT44(uStack_fe0._4_4_,(undefined4)uStack_fe0);
    goto LAB_18023bf05;
  }
  cVar5 = FUN_180278f80(uVar42,local_c18,*plVar16,1);
  if (cVar5 != '\0') {
    iVar8 = DAT_180c64154;
    if (DAT_180c64154 == 0) {
      UVar14 = GetTickCount64();
      if (UVar14 < DAT_180c64130) {
        iVar8 = 0;
      }
      else {
        local_10b0 = (undefined8 *)&DAT_1808ecdb0;
        iVar8 = FUN_1805f68d0(&DAT_1808ecdb0);
        if (iVar8 != 0) goto LAB_18023ea09;
        if (DAT_1808ecdfc == 0x7fffffff) {
          DAT_1808ecdfc = 0x7ffffffe;
          goto LAB_18023e9fe;
        }
        if ((DAT_180c64154 == 0) && (DAT_180c64130 <= UVar14)) {
          DAT_180c64154 = FUN_1804174b0("C_BasePlayerWeapon",0x11ba24e3);
          if (DAT_180c64154 == 0) {
            DAT_180c64130 = UVar14 + 1000;
          }
          else {
            DAT_180c64130 = 0xffffffffffffffff;
          }
        }
        iVar8 = DAT_180c64154;
        FUN_1805f68fc(&DAT_1808ecdb0);
      }
    }
    iVar12 = DAT_180c64140;
    if (DAT_180c64140 == 0) {
      UVar14 = GetTickCount64();
      if (UVar14 < DAT_180c64138) {
        iVar12 = 0;
      }
      else {
        local_10b0 = (undefined8 *)&DAT_1808ecd10;
        iVar12 = FUN_1805f68d0(&DAT_1808ecd10);
        if (iVar12 != 0) goto LAB_18023ea09;
        if (DAT_1808ecd5c == 0x7fffffff) {
          DAT_1808ecd5c = 0x7ffffffe;
          goto LAB_18023e9fe;
        }
        if ((DAT_180c64140 == 0) && (DAT_180c64138 <= UVar14)) {
          DAT_180c64140 = FUN_1804174b0("C_BasePlayerWeapon",0xd9a9e18);
          if (DAT_180c64140 == 0) {
            DAT_180c64138 = UVar14 + 1000;
          }
          else {
            DAT_180c64138 = 0xffffffffffffffff;
          }
        }
        iVar12 = DAT_180c64140;
        FUN_1805f68fc(&DAT_1808ecd10);
      }
    }
    iVar10 = DAT_180c64120;
    if (DAT_180c64120 == 0) {
      UVar14 = GetTickCount64();
      if (UVar14 < DAT_180c64128) {
        iVar10 = 0;
      }
      else {
        local_10b0 = (undefined8 *)&DAT_1808ecd60;
        iVar10 = FUN_1805f68d0(&DAT_1808ecd60);
        if (iVar10 != 0) goto LAB_18023ea09;
        if (DAT_1808ecdac == 0x7fffffff) {
          DAT_1808ecdac = 0x7ffffffe;
          goto LAB_18023e9fe;
        }
        if ((DAT_180c64120 == 0) && (DAT_180c64128 <= UVar14)) {
          DAT_180c64120 = FUN_1804174b0("C_CSWeaponBase",0x8d5552cc);
          if (DAT_180c64120 == 0) {
            DAT_180c64128 = UVar14 + 1000;
          }
          else {
            DAT_180c64128 = 0xffffffffffffffff;
          }
        }
        iVar10 = DAT_180c64120;
        FUN_1805f68fc(&DAT_1808ecd60);
      }
    }
    if (iVar8 == 0) {
    }
    if (iVar12 == 0) {
    }
    if (iVar10 == 0) {
    }
    lVar35 = iVar8 + DAT_180cc9330;
    lVar15 = FUN_18017ea70();
    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
    if (lVar35 == 0) {
      bVar3 = false;
      fVar46 = local_10a0;
    }
    else {
      local_10b4 = 0.0;
      cVar5 = FUN_1804514f0(&local_10b4,lVar35,4);
      if (cVar5 == '\0') {
        bVar3 = false;
        fVar46 = local_10a0;
      }
      else {
        bVar3 = true;
        fVar46 = local_10b4;
      }
    }
    lVar15 = FUN_18017ea70();
    if (*(int *)(lVar15 + 4) != 0) {
      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
    }
    lVar35 = iVar12 + DAT_180cc9330;
    lVar15 = FUN_18017ea70();
    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
    if (lVar35 == 0) {
      auVar50 = ZEXT464((uint)local_10a0);
      bVar2 = false;
    }
    else {
      local_10b4 = auVar51._0_4_;
      cVar5 = FUN_1804514f0(&local_10b4,lVar35,4);
      if (cVar5 == '\0') {
        bVar2 = false;
        auVar50 = ZEXT464((uint)local_10a0);
      }
      else {
        auVar50 = ZEXT464((uint)local_10b4);
        bVar2 = true;
      }
    }
    lVar15 = FUN_18017ea70();
    if (*(int *)(lVar15 + 4) != 0) {
      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
    }
    lVar35 = iVar10 + DAT_180cc9330;
    lVar15 = FUN_18017ea70();
    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
    if (lVar35 == 0) {
      auVar56 = ZEXT464((uint)local_10a0);
      bVar4 = false;
    }
    else {
      local_10b4 = auVar51._0_4_;
      cVar5 = FUN_1804514f0(&local_10b4,lVar35,4);
      if (cVar5 == '\0') {
        bVar4 = false;
        auVar56 = ZEXT464((uint)local_10a0);
      }
      else {
        auVar56 = ZEXT464((uint)local_10b4);
        bVar4 = true;
      }
    }
    lVar15 = FUN_18017ea70();
    if (*(int *)(lVar15 + 4) != 0) {
      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
    }
    if (!bVar3) {
    }
    if (!bVar2) {
    }
    if (!bVar4) {
    }
    FUN_180234110(&local_1068,fVar46,auVar50._0_8_,auVar56._0_8_);
    UVar14 = local_ba0;
    uVar34 = DAT_180b8e790;
    if ((local_1060._4_1_ != '\0') && ((char)local_1060 != '\0')) {
      if ((DAT_180b8e788 == (undefined8 *)0x0) || (local_ba0 < DAT_180b8e790)) {
LAB_18023e9c2:
        local_bd0._0_5_ = (uint5)(uint)local_bd0._0_4_;
      }
      else {
        fVar46 = (float)uStack_b68;
        sVar7 = thunk_FUN_180624430(uStack_b68 & 0xffffffff);
        if (((0 < sVar7) || (fVar46 < auVar51._0_4_)) || (fVar54 <= fVar46)) goto LAB_18023e9c2;
        auVar50 = ZEXT464(local_1068._4_4_);
        sVar7 = thunk_FUN_180624430(local_1068._4_4_);
        if (((0 < sVar7) || (fVar39 = auVar50._0_4_, fVar39 < auVar51._0_4_)) || (fVar54 <= fVar39))
        goto LAB_18023e9c2;
        if (UVar14 < DAT_180b8e7a0) {
          uVar27 = DAT_180b8e7a0 - UVar14;
        }
        else {
          uVar27 = 0;
        }
        if (UVar14 < uVar34) {
          uVar34 = 0;
        }
        else {
          uVar34 = UVar14 - uVar34;
        }
        uVar24 = DAT_180b8e798 - uVar34;
        if (DAT_180b8e798 <= uVar34) {
          uVar24 = 0;
        }
        if (uVar24 < uVar27) {
          uVar24 = uVar27;
        }
        auVar45._0_8_ = (double)fVar39;
        auVar45._8_8_ = auVar50._8_8_;
        auVar47._8_8_ = 0;
        auVar47._0_8_ = (double)uVar24 / 15.625 + (double)fVar46;
        auVar45 = vmaxsd_avx(auVar47,auVar45);
        auVar50 = ZEXT864(0x4050000000000000);
        auVar43._8_8_ = 0;
        auVar43._0_8_ = auVar45._0_8_ * 64.0;
        auVar45 = vroundsd_avx(ZEXT816(0),auVar43,2);
        dVar63 = auVar45._0_8_ * 0.015625;
        if (1.0 <= dVar63) {
          local_10b0._0_5_ = (uint5)(uint)local_10b0;
          local_bd0 = local_10b0;
        }
        else {
          local_1098._0_5_ = CONCAT14(1,(float)dVar63);
          local_bd0 = local_1098;
        }
        if ((char)((ulonglong)local_bd0 >> 0x20) != '\0') {
          iVar8 = DAT_180c64110;
          if (DAT_180c64110 == 0) {
            UVar14 = GetTickCount64();
            if (UVar14 < DAT_180c64108) {
              iVar8 = 0;
            }
            else {
              local_10b0 = (undefined8 *)&DAT_1808eccc0;
              iVar8 = FUN_1805f68d0(&DAT_1808eccc0);
              if (iVar8 != 0) {
LAB_18023ea09:
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(5);
              }
              if (DAT_1808ecd0c == 0x7fffffff) {
                DAT_1808ecd0c = 0x7ffffffe;
LAB_18023e9fe:
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(6);
              }
              if ((DAT_180c64110 == 0) && (DAT_180c64108 <= UVar14)) {
                DAT_180c64110 = FUN_1804174b0("CBasePlayerController",0x9a8c76d);
                if (DAT_180c64110 == 0) {
                  DAT_180c64108 = UVar14 + 1000;
                }
                else {
                  DAT_180c64108 = 0xffffffffffffffff;
                }
              }
              iVar8 = DAT_180c64110;
              FUN_1805f68fc(&DAT_1808eccc0);
            }
          }
          lVar35 = (longlong)(int)pfStack_b70 - (longlong)*(int *)((longlong)iVar8 + *plVar16);
          lVar15 = -lVar35;
          if (lVar15 < 0) {
            lVar15 = lVar35;
          }
          if (2 < lVar15) {
            pcVar26 = "stale_input_clock";
            goto LAB_18023bf05;
          }
          local_bac = '\0';
          local_bbc = '\0';
          local_bc8 = NAN;
          local_bd8[0] = NAN;
          local_ba4 = '\0';
          local_d30 = (longlong *)0x0;
          if (DAT_180c7df28 == (undefined8 *)0x0) {
            local_1068 = "tier0.dll:g_pMemAlloc";
            local_1060 = 0x15;
            DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_1068);
          }
          local_d30 = (longlong *)
                      (**(code **)(*(longlong *)*DAT_180c7df28 + 8))
                                ((longlong *)*DAT_180c7df28,0x50);
          *local_d30 = (longlong)
                       std::
                       _Func_impl_no_alloc<`private:_void___cdecl_features::combat::legit::apply_triggerbot(systems::input::usercmd*___ptr64,math::vector3_const&___ptr64,math::vector3_const&___ptr64,math::vector3_const&___ptr64,settings::combat::legitbot::weapon_group_const&___ptr64,systems::local::snapshot_const&___ptr64)___ptr64'::`117'::<lambda_20>,void>
                       ::vftable;
          local_d30[1] = (longlong)&local_bb8;
          local_d30[2] = (longlong)plVar16;
          local_d30[3] = (longlong)&local_b80;
          local_d30[4] = (longlong)&local_bd0;
          local_d30[5] = (longlong)&local_bc0;
          local_d30[6] = (longlong)&local_bc8;
          local_d30[7] = (longlong)local_bd8;
          local_d30[8] = (longlong)&local_ba8;
          local_d30[9] = (longlong)&DAT_180cc9330;
          local_10b4 = (float)(local_f38 | 1);
          cVar5 = FUN_180412b50(&DAT_180cc9330,local_c18,plVar16,local_d68);
          if (((cVar5 == '\0') || (local_bac == '\0')) || (local_bbc == '\0')) {
LAB_18023dd94:
            bVar3 = true;
          }
          else {
            fVar46 = local_bc0;
            sVar7 = thunk_FUN_180624430(local_bc0);
            if (((0 < sVar7) || (fVar46 < auVar51._0_4_)) || (0.25 < fVar46)) goto LAB_18023dd94;
            bVar3 = false;
          }
          if (local_d30 != (longlong *)0x0) {
            (**(code **)(*local_d30 + 0x20))(local_d30,local_d30 != local_d68);
          }
          if (bVar3) {
            pcVar26 = "firing_origin_unavailable";
            goto LAB_18023bf05;
          }
          fVar46 = local_bc8;
          sVar7 = thunk_FUN_180624430(local_bc8);
          if ((sVar7 < 1) && (auVar51._0_4_ <= fVar46)) {
            fVar54 = local_bd8[0];
            sVar7 = thunk_FUN_180624430(local_bd8[0]);
            if ((sVar7 < 1) && ((auVar51._0_4_ <= fVar54 && (local_ba4 != '\0')))) {
              sVar7 = thunk_FUN_180624430(local_ba8);
              puVar17 = local_10a8;
              if ((sVar7 < 1) && (auVar51._0_4_ <= local_ba8)) {
                DAT_180cc9358 = local_ba8;
                DAT_180cc9374 = fVar46;
                DAT_180cc9378 = fVar54;
                FUN_18026e6a0(&DAT_180cc9380,local_478,local_10a8,local_1048);
                iVar8 = DAT_180c640e0;
                if (DAT_180c640e0 == 0) {
                  UVar14 = GetTickCount64();
                  if (UVar14 < DAT_180c640d8) {
                    iVar8 = 0;
                  }
                  else {
                    local_10b0 = (undefined8 *)&DAT_1808ecbc0;
                    FUN_180162830(&DAT_1808ecbc0);
                    if ((DAT_180c640e0 == 0) && (DAT_180c640d8 <= UVar14)) {
                      DAT_180c640e0 = FUN_1804174b0("C_BaseEntity",0x84cdad2);
                      if (DAT_180c640e0 == 0) {
                        DAT_180c640d8 = UVar14 + 1000;
                      }
                      else {
                        DAT_180c640d8 = 0xffffffffffffffff;
                      }
                    }
                    iVar8 = DAT_180c640e0;
                    FUN_1805f68fc(&DAT_1808ecbc0);
                  }
                }
                uVar9 = *(undefined4 *)((longlong)iVar8 + (longlong)puVar17);
                local_a38 = '\0';
                if (local_10b7 != '\0') {
                  if ((DAT_180cce330 & 1) == 0) {
                    DAT_180cce330 = DAT_180cce330 | 1;
                    atexit(FUN_180662340);
                  }
                  lVar35 = DAT_1808ecb60;
                  lVar15 = DAT_1808da460;
                  if ((DAT_1808ecb60 != DAT_1808da460) ||
                     (lVar31 = DAT_180c640e8, DAT_180c640e8 == 0)) {
                    UVar14 = GetTickCount64();
                    if ((lVar35 == lVar15) && (UVar14 < DAT_180c640d0)) {
                      lVar31 = 0;
                    }
                    else {
                      local_10b0 = (undefined8 *)&DAT_1808ecb70;
                      FUN_180162830(&DAT_1808ecb70);
                      if (DAT_1808ecb60 == lVar15) {
                        if ((DAT_180c640e8 == 0) && (DAT_180c640d0 <= UVar14)) goto LAB_18023dfe6;
                      }
                      else {
                        DAT_1808ecb68 = 1000;
LAB_18023dfe6:
                        lVar35 = -1;
                        do {
                          local_1060 = lVar35 + 1;
                          lVar31 = lVar35 + 1;
                          lVar35 = local_1060;
                        } while ("client.dll:48895C2408574881ECF0000000F30F100A488D8C2410010000418BD8488BFAE8????????F30F104F04"
                                 [lVar31] != '\0');
                        local_1068 = 
                        "client.dll:48895C2408574881ECF0000000F30F100A488D8C2410010000418BD8488BFAE8????????F30F104F04"
                        ;
                        local_1028 = "patterns::get_tick_view_angles";
                        local_1020 = 0x1e;
                        DAT_180c640e8 = FUN_1800e5d20(&local_1028,&local_1068);
                        DAT_1808ecb60 = lVar15;
                        DAT_180c640d0 = 0xffffffffffffffff;
                        if (DAT_180c640e8 == 0) {
                          DAT_180c640d0 = DAT_1808ecb68 + UVar14;
                          if (DAT_1808ecb68 < 60000) {
                            DAT_1808ecb68 = DAT_1808ecb68 * 2;
                          }
                          else {
                            DAT_1808ecb68 = 60000;
                          }
                        }
                        else {
                          DAT_1808ecb68 = 1000;
                        }
                      }
                      lVar31 = DAT_180c640e8;
                      FUN_1805f68fc(&DAT_1808ecb70);
                    }
                  }
                  cVar5 = FUN_1804513c0(lVar31,1,2);
                  if (cVar5 != '\0') {
                    lVar15 = FUN_18017ea70();
                    *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
                    FUN_180241510(&local_1098,lVar31);
                    lVar15 = FUN_18017ea70();
                    if (*(int *)(lVar15 + 4) != 0) {
                      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + -1;
                    }
                    if (local_1098._4_1_ != '\0') {
                      pfVar20 = (float *)FUN_1802750c0(DAT_180cc934c,local_d28,
                                                       (ulonglong)local_1098 & 0xffffffff,
                                                       DAT_180cc9374);
                      lVar15 = 2;
                      pfVar25 = &local_b38;
                      do {
                        uVar42 = *(undefined8 *)(pfVar20 + 2);
                        uVar19 = *(undefined8 *)(pfVar20 + 4);
                        uVar1 = *(undefined8 *)(pfVar20 + 6);
                        *(undefined8 *)pfVar25 = *(undefined8 *)pfVar20;
                        *(undefined8 *)(pfVar25 + 2) = uVar42;
                        *(undefined8 *)(pfVar25 + 4) = uVar19;
                        *(undefined8 *)(pfVar25 + 6) = uVar1;
                        uVar42 = *(undefined8 *)(pfVar20 + 10);
                        uVar19 = *(undefined8 *)(pfVar20 + 0xc);
                        uVar1 = *(undefined8 *)(pfVar20 + 0xe);
                        *(undefined8 *)(pfVar25 + 8) = *(undefined8 *)(pfVar20 + 8);
                        *(undefined8 *)(pfVar25 + 10) = uVar42;
                        *(undefined8 *)(pfVar25 + 0xc) = uVar19;
                        *(undefined8 *)(pfVar25 + 0xe) = uVar1;
                        uVar42 = *(undefined8 *)(pfVar20 + 0x12);
                        uVar19 = *(undefined8 *)(pfVar20 + 0x14);
                        uVar1 = *(undefined8 *)(pfVar20 + 0x16);
                        *(undefined8 *)(pfVar25 + 0x10) = *(undefined8 *)(pfVar20 + 0x10);
                        *(undefined8 *)(pfVar25 + 0x12) = uVar42;
                        *(undefined8 *)(pfVar25 + 0x14) = uVar19;
                        *(undefined8 *)(pfVar25 + 0x16) = uVar1;
                        uVar42 = *(undefined8 *)(pfVar20 + 0x1a);
                        *(undefined8 *)(pfVar25 + 0x18) = *(undefined8 *)(pfVar20 + 0x18);
                        *(undefined8 *)(pfVar25 + 0x1a) = uVar42;
                        pfVar18 = pfVar25 + 0x20;
                        uVar42 = *(undefined8 *)(pfVar20 + 0x1e);
                        *(undefined8 *)(pfVar25 + 0x1c) = *(undefined8 *)(pfVar20 + 0x1c);
                        *(undefined8 *)(pfVar25 + 0x1e) = uVar42;
                        pfVar20 = pfVar20 + 0x20;
                        lVar15 = lVar15 + -1;
                        pfVar25 = pfVar18;
                      } while (lVar15 != 0);
                      *pfVar18 = *pfVar20;
                      if (local_a38 == '\0') {
                        pcVar26 = "invalid_spread_pattern";
                        uStack_fe0 = (longlong *)CONCAT44(uStack_fe0._4_4_,(undefined4)uStack_fe0);
                        goto LAB_18023bf05;
                      }
                      plVar16 = local_1050;
                      iVar8 = DAT_180cc9350;
                      goto LAB_18023e2a0;
                    }
                  }
                  pcVar26 = "seed_unavailable";
                  goto LAB_18023bf05;
                }
                local_d28 = ZEXT816(0);
                auStack_d18 = ZEXT816(0);
                local_d08 = local_d28;
                auStack_cf8 = auStack_d18;
                local_ce8 = local_d28;
                auStack_cd8 = auStack_d18;
                local_cc8 = local_d28;
                local_cb8 = auStack_d18;
                local_ca8 = local_d28;
                local_c98 = auStack_d18;
                local_c88 = local_d28;
                local_c78 = auStack_d18;
                local_c68 = local_d28;
                local_c58 = auStack_d18;
                local_c48 = local_d28;
                local_c38 = auStack_d18;
                puVar17 = (undefined8 *)local_d28;
                lVar15 = 2;
                pfVar20 = &local_b38;
                do {
                  uVar42 = puVar17[1];
                  uVar19 = puVar17[2];
                  uVar1 = puVar17[3];
                  *(undefined8 *)pfVar20 = *puVar17;
                  *(undefined8 *)(pfVar20 + 2) = uVar42;
                  *(undefined8 *)(pfVar20 + 4) = uVar19;
                  *(undefined8 *)(pfVar20 + 6) = uVar1;
                  uVar42 = puVar17[5];
                  uVar19 = puVar17[6];
                  uVar1 = puVar17[7];
                  *(undefined8 *)(pfVar20 + 8) = puVar17[4];
                  *(undefined8 *)(pfVar20 + 10) = uVar42;
                  *(undefined8 *)(pfVar20 + 0xc) = uVar19;
                  *(undefined8 *)(pfVar20 + 0xe) = uVar1;
                  uVar42 = puVar17[9];
                  uVar19 = puVar17[10];
                  uVar1 = puVar17[0xb];
                  *(undefined8 *)(pfVar20 + 0x10) = puVar17[8];
                  *(undefined8 *)(pfVar20 + 0x12) = uVar42;
                  *(undefined8 *)(pfVar20 + 0x14) = uVar19;
                  *(undefined8 *)(pfVar20 + 0x16) = uVar1;
                  uVar42 = puVar17[0xd];
                  *(undefined8 *)(pfVar20 + 0x18) = puVar17[0xc];
                  *(undefined8 *)(pfVar20 + 0x1a) = uVar42;
                  uVar42 = puVar17[0xf];
                  *(undefined8 *)(pfVar20 + 0x1c) = puVar17[0xe];
                  *(undefined8 *)(pfVar20 + 0x1e) = uVar42;
                  puVar17 = puVar17 + 0x10;
                  lVar15 = lVar15 + -1;
                  pfVar20 = pfVar20 + 0x20;
                } while (lVar15 != 0);
                local_a38 = '\x01';
                iVar8 = 1;
LAB_18023e2a0:
                auVar47 = auVar50._0_16_;
                auVar43 = auVar51._0_16_;
                auVar56 = ZEXT1664(auVar43);
                bVar36 = 0;
                bVar3 = false;
                auVar45 = auVar43;
                if (iVar8 < 1) {
LAB_18023e57a:
                  auVar51 = ZEXT1664(auVar43);
                  auVar50 = ZEXT1664(auVar47);
                  auVar56 = ZEXT1664(auVar45);
                  local_c0c = FUN_1802344f0(param_6,0,*(undefined4 *)(param_6 + 0x2a4));
                  if (bVar36 != 0) goto LAB_18023e59d;
LAB_18023e5b5:
                  uVar11 = 1;
                  uVar13 = *(undefined4 *)(param_6 + 0x280);
                }
                else {
                  lVar15 = 0;
                  auVar65 = ZEXT464(0x322bcc77);
                  auVar60 = ZEXT464((uint)local_f34);
                  do {
                    fVar46 = *(float *)(local_b58 + lVar15 * 8 + 0x20);
                    auVar52 = ZEXT464(auStack_b34[lVar15 * 2]);
                    auVar59 = ZEXT464((uint)DAT_180cc936c);
                    auVar56 = ZEXT1664(auVar56._0_16_);
                    auVar50 = ZEXT1664(auVar50._0_16_);
                    auVar51 = ZEXT1664(auVar51._0_16_);
                    auVar65 = ZEXT1664(auVar65._0_16_);
                    auVar60 = ZEXT1664(auVar60._0_16_);
                    sVar7 = thunk_FUN_180624430();
                    if (0 < sVar7) {
                    }
                    sVar7 = thunk_FUN_180624430(auVar52._0_8_);
                    if (0 < sVar7) {
                    }
                    sVar7 = thunk_FUN_180624430(auVar59._0_8_);
                    if (0 < sVar7) {
                    }
                    if (auVar59._0_4_ <= auVar51._0_4_) {
                    }
                    fVar37 = auVar52._0_4_;
                    fVar54 = fVar46 * local_1000 + local_1018 + fVar37 * local_1004;
                    fVar39 = fVar46 * local_1014 + local_1010 + fVar37 * local_100c;
                    fVar46 = fVar46 * local_1008 + auVar60._0_4_ + fVar37 * local_10a0;
                    fVar37 = fVar39 * fVar39 + fVar54 * fVar54 + fVar46 * fVar46;
                    auVar52 = ZEXT464((uint)fVar37);
                    sVar7 = thunk_FUN_180624430(fVar37);
                    fVar37 = auVar59._0_4_;
                    if (0 < sVar7) {
                    }
                    fVar38 = auVar52._0_4_;
                    if (fVar38 < auVar65._0_4_) {
                    }
                    if (fVar38 < 0.0) {
                      fVar38 = (float)FUN_18061e150(auVar52._0_8_);
                      fVar37 = auVar59._0_4_;
                    }
                    else {
                      fVar38 = SQRT(fVar38);
                    }
                    fVar37 = fVar37 / fVar38;
                    local_fe8 = auVar51._0_4_;
                    iStack_fe4 = -1;
                    uStack_fe0._0_4_ = 0xffffffff;
                    uStack_fe0._4_4_ = uStack_fe0._4_4_ & 0xffffff00;
                    local_fd8 = (longlong *)((ulonglong)local_fd8 & 0xffffffff00000000);
                    local_fc8 = fVar37 * fVar39 + local_bb8;
                    local_fc4 = fVar37 * fVar54 + local_bb4;
                    local_fc0 = fVar37 * fVar46 + local_bb0;
                    LOCK();
                    DAT_180bbeef0 = DAT_180bbeef0 + 1;
                    UNLOCK();
                    cVar5 = FUN_18026ef40(&DAT_180cc9380,&local_bb8,&local_fc8,local_478);
                    if (cVar5 != '\0') {
                      fVar46 = local_fe8;
                      sVar7 = thunk_FUN_180624430(local_fe8);
                      if ((sVar7 < 1) && (auVar51._0_4_ < fVar46)) {
                        switch(iStack_fe4) {
                        case 0:
                          uVar42 = 1;
                          break;
                        case 1:
                          uVar42 = 8;
                          break;
                        case 2:
                        case 3:
                          uVar42 = 3;
                          break;
                        case 4:
                        case 5:
                        case 6:
                          uVar42 = 2;
                          break;
                        case 7:
                        case 9:
                        case 0xb:
                          uVar42 = 7;
                          break;
                        case 8:
                        case 10:
                        case 0xc:
                          uVar42 = 6;
                          break;
                        case 0xd:
                        case 0xf:
                        case 0x10:
                          uVar42 = 5;
                          break;
                        case 0xe:
                        case 0x11:
                        case 0x12:
                          uVar42 = 4;
                          break;
                        default:
                          uVar42 = 0;
                        }
                        iVar12 = iStack_fe4;
                        cVar5 = FUN_1802404d0(param_6,uVar42);
                        if (cVar5 == '\0') {
                          pcVar26 = "blocked_hitbox";
                          goto LAB_18023bf05;
                        }
                        if (!bVar3) {
                          pauVar28 = (undefined1 (*) [32])(local_1048 + 0x12);
                          pauVar32 = (undefined1 (*) [32])
                                     ((longlong)pauVar28 + (longlong)(int)local_1048[0xda] * 0x28);
                          while( true ) {
                            if (pauVar28 == pauVar32) {
                            }
                            if (*(int *)*pauVar28 == iVar12) break;
                            pauVar28 = (undefined1 (*) [32])(pauVar28[1] + 8);
                          }
                          local_e28 = *pauVar28;
                          bVar3 = true;
                        }
                        auVar56 = ZEXT464((uint)(auVar56._0_4_ + fVar46));
                        bVar36 = bVar36 | uStack_fe0._4_1_;
                      }
                    }
                    auVar45 = auVar51._0_16_;
                    auVar47 = auVar50._0_16_;
                    auVar43 = auVar56._0_16_;
                    lVar15 = lVar15 + 1;
                  } while (lVar15 < iVar8);
                  if ((bVar36 == 0) || (*(char *)(param_6 + 0x380) == '\0')) goto LAB_18023e57a;
                  auVar51 = ZEXT1664(auVar43);
                  auVar50 = ZEXT1664(auVar47);
                  auVar56 = ZEXT1664(auVar45);
                  local_c0c = FUN_1802344f0(param_6,2,*(undefined4 *)(param_6 + 1000));
LAB_18023e59d:
                  if (*(char *)(param_6 + 0x380) == '\0') goto LAB_18023e5b5;
                  uVar13 = *(undefined4 *)(param_6 + 0x284);
                  uVar11 = 3;
                }
                iVar8 = local_c0c;
                iVar12 = FUN_1802344f0(param_6,uVar11,uVar13);
                local_c08 = iVar12;
                if (bVar3) {
                  uVar13 = FUN_1803db3f0(extraout_XMM0_Qa_18,local_e28._0_4_);
                  cVar5 = FUN_180240730(param_6,uVar13,auVar51._0_8_,uVar9);
                  if (cVar5 != '\0') {
                    uVar42 = extraout_XMM0_Qa_19;
                    if (0 < iVar8) {
                      cVar5 = FUN_1802342c0(auVar51._0_8_,iVar8,uVar9);
                      uVar42 = extraout_XMM0_Qa_20;
                      if (cVar5 == '\0') goto LAB_18023e9aa;
                    }
                    auVar45 = auVar56._0_16_;
                    dVar63 = auVar50._0_8_;
                    if ((cVar6 == '\0') && (0 < iVar12)) {
                      uVar42 = FUN_180238590(uVar42,&local_bb8,&local_be8,local_1048);
                      cVar6 = FUN_180234240(uVar42,local_c08);
                      auVar45 = auVar56._0_16_;
                      dVar63 = auVar50._0_8_;
                      if (cVar6 == '\0') {
                        pcVar26 = "waiting_for_hit_chance";
                        goto LAB_18023bf05;
                      }
                    }
                    local_f80 = SUB84(local_b80,0);
                    fStack_f7c = (float)((ulonglong)local_b80 >> 0x20);
                    fStack_f78 = SUB84(pfStack_b78,0);
                    uStack_f74 = (uint)((ulonglong)pfStack_b78 >> 0x20);
                    pfStack_f70 = pfStack_b70;
                    uStack_f68 = CONCAT44((int)(uStack_b68 >> 0x20),local_bd0._0_4_);
                    dVar49 = (double)local_bc0 * dVar63;
                    dVar63 = (double)local_1048[0x8ec] * dVar63;
                    local_f58[0] = local_b80;
                    local_f58[1] = pfStack_b78;
                    _uStack_f48 = pfStack_b70;
                    uStack_f40 = uStack_f68;
                    auVar51 = ZEXT1664(auVar45);
                    sVar7 = thunk_FUN_1806243d0();
                    if ((((sVar7 < 1) && (dVar55 = 0.0, 0.0 < dVar63)) &&
                        (sVar7 = thunk_FUN_1806243d0(dVar49), sVar7 < 1)) &&
                       ((dVar55 <= dVar49 && (dVar49 <= 16.0)))) {
                      auVar48._8_8_ = 0;
                      auVar48._0_8_ = dVar63 + dVar49;
                      auVar45 = vroundsd_avx(ZEXT816(0),auVar48,1);
                      dVar44 = auVar45._0_8_;
                      if ((dVar55 < dVar44) && (dVar44 <= 2147483647.0)) {
                        _uStack_f48 = (float *)CONCAT44((int)dVar44,uStack_f48);
                        uStack_f40 = CONCAT44((float)((dVar63 + dVar49) - dVar44),
                                              (undefined4)uStack_f40);
                        uStack_f74 = (uint)((ulonglong)local_f58[1] >> 0x20);
                        pfStack_f70 = _uStack_f48;
                        uStack_f68 = uStack_f40;
                        local_f80 = local_bf8;
                        fStack_f7c = local_bf4;
                        fStack_f78 = local_bf0;
                        local_fe8 = -1.6980554e-38;
                        iStack_fe4 = 1;
                        uStack_fe0 = &local_c18;
                        local_fd0 = &local_bd0;
                        local_f58[0] = &local_bf8;
                        local_f58[1] = &local_bb8;
                        _uStack_f48 = (float *)&local_c18;
                        auVar51 = ZEXT1664(auVar51._0_16_);
                        local_fd8 = plVar16;
                        puVar21 = (uint *)FUN_180241250(local_c18,&local_f80,local_f58,&local_fe8);
                        if (puVar21 == (uint *)0x0) {
                          pcVar26 = "shot_not_staged";
                        }
                        else {
                          DAT_180b8f808 = 1;
                          DAT_180b8f809 = local_10b7;
                          iVar8 = FUN_18023f130();
                          DAT_180b8f80c = *(uint *)((longlong)iVar8 + *plVar16);
                          uVar34 = (ulonglong)DAT_180b8f80c;
                          if ((*puVar21 & 4) != 0) {
                            *puVar21 = *puVar21 | 4;
                            uVar34 = *(ulonglong *)(puVar21 + 6);
                            puVar29 = (uint *)0x0;
                            if (uVar34 != 0) {
                              puVar29 = (uint *)(uVar34 + 0x10);
                            }
                            puVar29[3] = 0xffffffff;
                            puVar29[4] = 0xffffffff;
                            *puVar29 = *puVar29 | 7;
                            puVar29[2] = 0;
                          }
                          if ((*puVar21 & 8) != 0) {
                            *puVar21 = *puVar21 | 8;
                            uVar34 = *(ulonglong *)(puVar21 + 8);
                            puVar29 = (uint *)0x0;
                            if (uVar34 != 0) {
                              puVar29 = (uint *)(uVar34 + 0x10);
                            }
                            puVar29[3] = 0xffffffff;
                            puVar29[4] = 0xffffffff;
                            *puVar29 = *puVar29 | 7;
                            puVar29[2] = 0;
                          }
                          if ((*puVar21 & 2) != 0) {
                            *puVar21 = *puVar21 | 2;
                            uVar34 = *(ulonglong *)(puVar21 + 4);
                            puVar21 = (uint *)0x0;
                            if (uVar34 != 0) {
                              puVar21 = (uint *)(uVar34 + 0x10);
                            }
                            *puVar21 = *puVar21 | 1;
                            puVar21[2] = 0;
                          }
                          uVar42 = FUN_1803db3f0(uVar34,local_e28._0_4_);
                          FUN_18023f230(uVar42,local_c18,local_10a8,local_1048);
                          FUN_180234430(param_6,&local_1098);
                          iVar8 = FUN_180454920((ulonglong)local_1098 & 0xffffffff,local_1098._4_4_)
                          ;
                          DAT_180b8f7a8 = (longlong)iVar8;
                          auVar45 = vmaxss_avx(ZEXT416((uint)(local_bd0._0_4_ - (float)uStack_b68)),
                                               auVar51._0_16_);
                          auVar45 = vroundss_avx(ZEXT816(0),
                                                 ZEXT416((uint)(auVar45._0_4_ * 0.015625 * 1000.0)),
                                                 2);
                          fVar46 = auVar45._0_4_;
                          lVar15 = 0;
                          if ((9.223372e+18 <= fVar46) &&
                             (fVar46 = fVar46 - 9.223372e+18, fVar46 < 9.223372e+18)) {
                            lVar15 = -0x8000000000000000;
                          }
                          DAT_180b8f7b0 = (longlong)fVar46 + lVar15 + local_ba0;
                          pcVar26 = "attack_staged";
                        }
                        goto LAB_18023bf05;
                      }
                    }
                    pcVar26 = "invalid_target_clock";
                    goto LAB_18023bf05;
                  }
                }
LAB_18023e9aa:
                pcVar26 = "final_shot_rejected";
                goto LAB_18023bf05;
              }
            }
          }
          pcVar26 = "firing_accuracy_unavailable";
          goto LAB_18023bf05;
        }
      }
      pcVar26 = "waiting_for_timer";
      goto LAB_18023bf05;
    }
  }
  pcVar26 = "waiting_for_weapon";
LAB_18023bf05:
  FUN_18023eb30(&local_f28,pcVar26);
}



