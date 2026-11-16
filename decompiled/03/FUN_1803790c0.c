// FUN_1803790c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803790c0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00018037d874) */
/* WARNING: Removing unreachable block (ram,0x00018037d837) */

void FUN_1803790c0(void)

{
  undefined1 uVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  HMODULE pHVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  ULONGLONG UVar9;
  char *pcVar10;
  undefined8 *puVar11;
  ulonglong *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  HMODULE pHVar15;
  undefined8 uVar16;
  LPCSTR lpModuleName;
  undefined4 uVar17;
  longlong lVar18;
  char **ppcVar19;
  longlong lVar20;
  int iVar21;
  ulonglong uVar22;
  char *pcVar23;
  ulonglong uVar24;
  undefined **ppuVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined1 auStack_4d68 [32];
  HMODULE local_4d48;
  char *local_4d40;
  char *local_4d38;
  undefined4 local_4d30;
  undefined4 local_4d28;
  char *local_4d18;
  ulonglong uStack_4d10;
  char *local_4d08;
  undefined8 *puStack_4d00;
  char *local_4cf8;
  undefined8 local_4cf0;
  char *local_4ce8;
  longlong local_4ce0;
  char *local_4cd8;
  undefined8 *puStack_4cd0;
  ulonglong local_4cc8;
  undefined8 uStack_4cc0;
  undefined8 local_4cb8;
  undefined8 uStack_4cb0;
  ulonglong local_4ca8;
  undefined4 local_4ca0;
  undefined8 local_4c98;
  undefined8 uStack_4c90;
  undefined8 local_4c88;
  undefined8 uStack_4c80;
  undefined8 local_4c78;
  undefined8 uStack_4c70;
  undefined8 local_4c68;
  undefined8 uStack_4c60;
  undefined8 local_4c58;
  undefined8 uStack_4c50;
  undefined8 local_4c48;
  undefined8 uStack_4c40;
  undefined8 local_4c38;
  undefined8 uStack_4c30;
  undefined8 local_4c28;
  undefined8 uStack_4c20;
  undefined8 local_4c18;
  undefined8 uStack_4c10;
  undefined8 local_4c08;
  undefined8 uStack_4c00;
  undefined8 local_4bf8;
  undefined8 uStack_4bf0;
  undefined8 local_4be8;
  undefined8 uStack_4be0;
  undefined8 local_4bd8;
  undefined8 uStack_4bd0;
  undefined8 local_4bc8;
  undefined8 uStack_4bc0;
  undefined8 local_4bb8;
  undefined8 uStack_4bb0;
  undefined8 local_4ba8;
  undefined8 uStack_4ba0;
  undefined8 local_4b98;
  undefined8 uStack_4b90;
  char local_4b88 [80];
  undefined8 local_4b38;
  undefined8 uStack_4b30;
  undefined8 local_4b28;
  undefined8 uStack_4b20;
  undefined8 local_4b18;
  undefined8 uStack_4b10;
  undefined8 local_4b08;
  undefined8 uStack_4b00;
  undefined8 local_4af8;
  undefined8 uStack_4af0;
  undefined8 local_4ae8;
  undefined8 uStack_4ae0;
  undefined8 local_4ad8;
  undefined8 uStack_4ad0;
  undefined8 local_4ac8;
  undefined8 uStack_4ac0;
  undefined8 local_4ab8;
  undefined8 uStack_4ab0;
  undefined8 local_4aa8;
  undefined8 uStack_4aa0;
  undefined1 local_4a98 [16];
  undefined8 local_4a88;
  ulonglong uStack_4a80;
  undefined8 local_4a78;
  undefined8 uStack_4a70;
  undefined8 local_4a68;
  undefined8 uStack_4a60;
  ulonglong local_4a58;
  ulonglong uStack_4a50;
  ulonglong local_4a48;
  undefined8 uStack_4a40;
  undefined8 local_4a38;
  undefined8 uStack_4a30;
  undefined8 local_4a28;
  undefined8 uStack_4a20;
  undefined8 local_4a18;
  undefined8 uStack_4a10;
  undefined8 local_4a08;
  undefined8 uStack_4a00;
  undefined8 local_49f8;
  undefined8 uStack_49f0;
  undefined8 local_49e8;
  undefined8 uStack_49e0;
  undefined8 local_49d8;
  undefined8 uStack_49d0;
  undefined8 local_49c8;
  undefined8 uStack_49c0;
  undefined8 local_49b8;
  undefined8 uStack_49b0;
  undefined8 local_49a8;
  undefined8 uStack_49a0;
  undefined8 local_4998;
  undefined8 uStack_4990;
  undefined8 local_4988;
  undefined8 uStack_4980;
  undefined8 local_4978;
  undefined8 uStack_4970;
  undefined8 local_4968;
  undefined8 uStack_4960;
  undefined8 local_4958;
  undefined8 uStack_4950;
  undefined8 local_4948;
  undefined8 uStack_4940;
  undefined8 local_4938;
  undefined8 uStack_4930;
  undefined8 local_4928;
  undefined8 uStack_4920;
  undefined8 local_4918;
  undefined8 uStack_4910;
  undefined8 local_4908;
  undefined8 uStack_4900;
  undefined8 local_48f8;
  undefined8 uStack_48f0;
  undefined8 local_48e8;
  undefined8 uStack_48e0;
  undefined8 local_48d8;
  undefined8 uStack_48d0;
  undefined8 local_48c8;
  undefined8 uStack_48c0;
  undefined8 local_48b8;
  undefined8 uStack_48b0;
  undefined8 local_48a8;
  undefined8 uStack_48a0;
  undefined8 local_4898;
  undefined8 uStack_4890;
  undefined8 local_4888;
  undefined8 uStack_4880;
  undefined8 local_4878;
  undefined8 uStack_4870;
  undefined8 local_4868;
  undefined8 uStack_4860;
  undefined8 local_4858;
  int local_4850;
  undefined1 local_4848 [16];
  undefined1 local_4838 [16];
  undefined **local_4828;
  char **local_4820;
  char **local_4818;
  undefined1 *local_4810;
  undefined *local_4808;
  code *local_4800;
  undefined8 *local_47f8;
  undefined8 local_47f0;
  undefined *local_47e8;
  code *local_47e0;
  undefined8 *local_47d8;
  undefined8 local_47d0;
  char *local_47c8 [21];
  code *pcStack_4720;
  char *apcStack_4718 [3];
  code *local_4700;
  ulonglong *local_46f8;
  longlong local_46f0;
  undefined8 *local_46e8;
  code *local_46e0;
  undefined8 *local_46d8;
  undefined8 local_46d0;
  undefined *local_46c8;
  code *local_46c0;
  undefined8 *local_46b8;
  undefined8 local_46b0;
  undefined8 *local_46a8;
  code *local_46a0;
  undefined8 *local_4698;
  undefined8 local_4690;
  undefined8 *local_4688;
  code *local_4680;
  undefined8 *local_4678;
  char *local_4670;
  undefined8 *local_4668;
  code *local_4660;
  undefined8 *local_4658;
  ulonglong local_4650;
  undefined *local_4648;
  code *local_4640;
  undefined8 *local_4638;
  undefined8 local_4630;
  undefined8 *local_4628;
  code *local_4620;
  undefined8 *local_4618;
  undefined8 local_4610;
  undefined8 *local_4608;
  code *local_4600;
  undefined8 *local_45f8;
  undefined8 local_45f0;
  undefined *local_45e8;
  code *local_45e0;
  undefined8 *local_45d8;
  undefined8 local_45d0;
  undefined8 *local_45c8;
  code *local_45c0;
  undefined8 *local_45b8;
  undefined8 local_45b0;
  undefined *local_45a8;
  code *local_45a0;
  undefined8 *local_4598;
  undefined8 local_4590;
  undefined *local_4588;
  code *local_4580;
  undefined8 *local_4578;
  undefined8 local_4570;
  undefined8 *local_4568;
  code *local_4560;
  undefined8 *local_4558;
  undefined8 local_4550;
  undefined *local_4548;
  code *local_4540;
  undefined8 *local_4538;
  undefined8 local_4530;
  undefined *local_4528;
  code *local_4520;
  undefined8 *local_4518;
  undefined8 local_4510;
  undefined8 *local_4508;
  code *local_4500;
  undefined8 *local_44f8;
  undefined8 local_44f0;
  undefined8 *local_44e8;
  code *local_44e0;
  undefined8 *local_44d8;
  undefined8 local_44d0;
  undefined *local_44c8;
  code *local_44c0;
  undefined8 *local_44b8;
  undefined8 local_44b0;
  undefined *local_44a8;
  code *local_44a0;
  undefined8 *local_4498;
  undefined8 local_4490;
  undefined *local_4488;
  code *local_4480;
  undefined8 *local_4478;
  longlong local_4470;
  undefined *local_4468;
  code *local_4460;
  undefined8 *local_4458;
  longlong local_4450;
  undefined8 *local_4448;
  code *local_4440;
  undefined8 *local_4438;
  longlong local_4430;
  undefined8 *local_4428;
  code *local_4420;
  undefined8 *local_4418;
  longlong local_4410;
  undefined8 *local_4408;
  code *local_4400;
  undefined8 *local_43f8;
  undefined8 local_43f0;
  undefined *local_43e8;
  code *local_43e0;
  undefined8 *local_43d8;
  longlong local_43d0;
  undefined *local_43c8;
  code *local_43c0;
  undefined8 *local_43b8;
  longlong local_43b0;
  undefined *local_43a8;
  code *local_43a0;
  undefined8 *local_4398;
  longlong local_4390;
  undefined *local_4388;
  code *local_4380;
  undefined8 *local_4378;
  undefined8 local_4370;
  undefined *local_4368;
  code *local_4360;
  undefined8 *local_4358;
  longlong local_4350;
  undefined *local_4348;
  code *local_4340;
  undefined8 *local_4338;
  longlong local_4330;
  undefined *local_4328;
  code *local_4320;
  undefined8 *local_4318;
  longlong local_4310;
  undefined *local_4308;
  code *local_4300;
  undefined8 *local_42f8;
  longlong local_42f0;
  undefined8 *local_42e8;
  code *local_42e0;
  undefined8 *local_42d8;
  longlong local_42d0;
  undefined *local_42c8;
  code *local_42c0;
  undefined8 *local_42b8;
  longlong local_42b0;
  undefined *local_42a8;
  code *local_42a0;
  undefined8 *local_4298;
  longlong local_4290;
  char *local_4288 [2];
  char *local_4278;
  char *pcStack_4270;
  char *pcStack_4268;
  char *pcStack_4260;
  undefined1 local_4258 [16];
  undefined1 local_4248 [16];
  undefined1 local_4238 [16];
  char local_4228 [1536];
  char local_3c28 [1536];
  char local_3628 [1536];
  char local_3028 [1536];
  char local_2a28 [1536];
  char local_2428 [1536];
  char local_1e28 [1536];
  char local_1828 [1536];
  char local_1228 [1536];
  char local_c28 [1536];
  char local_628 [1536];
  ulonglong local_28;
  undefined8 uStack_20;
  
  cVar6 = DAT_180c70b40;
  uStack_20 = 0x1803790e4;
  local_28 = DAT_1808d5f00 ^ (ulonglong)auStack_4d68;
  local_4cf8 = (char *)((ulonglong)local_4cf8 & 0xffffffff00000000);
  LOCK();
  UNLOCK();
  iVar21 = DAT_180c70e04 + 1;
  DAT_180c70e04 = DAT_180c70e04 + 1;
  FUN_18063ab10(local_4228,0,0x600);
  local_4d40 = "false";
  if (cVar6 != '\0') {
    local_4d40 = "true";
  }
  local_4d48 = (HMODULE)CONCAT44(local_4d48._4_4_,iVar21);
  FUN_18015ad60(local_4228,0x600,0xffffffffffffffff,"initialize_count=%u runtime_active=%s");
  local_4d48 = (HMODULE)&PTR_180700558;
  if (local_4228[0] != '\0') {
    local_4d48 = (HMODULE)&DAT_1806bcfc0;
  }
  pcVar23 = "DUPLICATE_INITIALIZATION";
  if (iVar21 == 1) {
    pcVar23 = "FEATURE_INITIALIZATION_START";
  }
  local_4ca0 = 3;
  uVar16 = 3;
  if (iVar21 == 1) {
    uVar16 = 1;
  }
  local_4d40 = local_4228;
  FUN_1800f6900(uVar16,local_4d40,"FeatureManager",pcVar23);
  if (iVar21 != 1) {
  }
  DAT_180c70b40 = 0;
  local_4808 = &DAT_180c70ae0;
  local_4800 = FUN_180383040;
  local_4c98 = 0x746e6573657270;
  uStack_4c90 = 0;
  local_47f8 = &local_4c98;
  local_47f0 = DAT_180c709f0;
  local_47e8 = &DAT_180c70990;
  local_47e0 = FUN_180383df0;
  local_4d18 = (char *)0xdb35e39b27e1c185;
  local_4ce8 = (char *)0xa05181ee77d57a06;
  uStack_4d10 = 0xa05181ee77d57a06;
  local_4c88 = 0x625f657a69736572;
  uStack_4c80 = 0x737265666675;
  local_47d8 = &local_4c88;
  local_47d0 = DAT_180c70980;
  local_4828 = &local_4808;
  local_4820 = local_47c8;
  cVar6 = FUN_18044e620(&local_4828);
  if (cVar6 == '\0') {
  }
  plVar8 = (longlong *)FUN_180377ef0(local_4258);
  local_4cf8 = (char *)*plVar8;
  uVar22 = plVar8[1];
  local_4ca8 = uVar22;
  if (local_4cf8 == (char *)0x0) {
    local_4cf8 = (char *)FUN_18037e520();
  }
  if (uVar22 == 0) {
    local_4ca8 = FUN_18037e6e0();
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  pcVar23 = DAT_1808da460;
  local_4ce8 = DAT_180902bb8;
  if ((DAT_180902bb8 != DAT_1808da460) || (lVar18 = DAT_180c70de0, DAT_180c70de0 == 0)) {
    UVar9 = GetTickCount64();
    if ((local_4ce8 == pcVar23) && (UVar9 < DAT_180c70dd8)) {
      lVar18 = 0;
    }
    else {
      local_4d18 = &DAT_180902ab0;
      iVar21 = FUN_1805f68d0(&DAT_180902ab0);
      if (iVar21 != 0) goto LAB_18037e515;
      if (DAT_180902afc == 0x7fffffff) {
        DAT_180902afc = 0x7ffffffe;
        goto LAB_18037e50a;
      }
      if (DAT_180902bb8 == pcVar23) {
        if ((DAT_180c70de0 == 0) && (DAT_180c70dd8 <= UVar9)) goto LAB_1803794ca;
      }
      else {
        DAT_180902aa0 = 1000;
LAB_1803794ca:
        lVar18 = -1;
        do {
          local_4ce0 = lVar18 + 1;
          lVar20 = lVar18 + 1;
          lVar18 = local_4ce0;
        } while ("client.dll:488D95????????488BC8E8????????0FB685????????33DB8BCB8885+F"[lVar20] !=
                 '\0');
        local_4ce8 = "client.dll:488D95????????488BC8E8????????0FB685????????33DB8BCB8885+F";
        local_4d08 = "patterns::scope_render_return";
        puStack_4d00 = (undefined8 *)0x1d;
        DAT_180c70de0 = FUN_1800e5d20(&local_4d08,&local_4ce8);
        DAT_180902bb8 = pcVar23;
        DAT_180c70dd8 = 0xffffffffffffffff;
        if (DAT_180c70de0 == 0) {
          DAT_180c70dd8 = DAT_180902aa0 + UVar9;
          if (DAT_180902aa0 < 60000) {
            DAT_180902aa0 = DAT_180902aa0 * 2;
          }
          else {
            DAT_180902aa0 = 60000;
          }
        }
        else {
          DAT_180902aa0 = 1000;
        }
      }
      lVar18 = DAT_180c70de0;
      FUN_1805f68fc(&DAT_180902ab0);
    }
  }
  FUN_18063ab10(local_3c28,0,0x600);
  local_4d48 = (HMODULE)CONCAT44(local_4d48._4_4_,(uint)(lVar18 != 0));
  FUN_18015ad60(local_3c28,0x600,0xffffffffffffffff,
                "available=%d camera_data=untouched hud_updates=preserved");
  local_4d48 = (HMODULE)&PTR_180700558;
  if (local_3c28[0] != '\0') {
    local_4d48 = (HMODULE)&DAT_1806bcfc0;
  }
  local_4d40 = local_3c28;
  FUN_1800f6900(1);
  local_47c8[0x14] = (char *)&DAT_180c70a70;
  pcStack_4720 = FUN_180387920;
  pcVar23 = (char *)0xdb35e39b27e1c185;
  local_4cd8 = (char *)0xdb35e39b27e1c185;
  uVar22 = 0xa05181ee77d57a06;
  puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
  uVar24 = 0x929654b1461b7377;
  local_4cc8 = 0x929654b1461b7377;
  local_4ce8 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_4a78 = 0x616c65725f746573;
  uStack_4a70 = 0x756f6d5f65766974;
  local_4a68 = 0x65646f6d5f6573;
  uStack_4a60 = 0;
  apcStack_4718[0] = (char *)&local_4a78;
  if (DAT_180c70a60 == 0) {
    apcStack_4718[1] = (char *)0x0;
  }
  else {
    apcStack_4718[1] = (char *)FUN_180454010(DAT_180c70a60,0x4c);
  }
  apcStack_4718[2] = (char *)&DAT_180c70a00;
  local_4700 = FUN_180388f70;
  local_4ce8 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_4a58 = (ulonglong)pcVar23 ^ 0xaf46bcfe4a80b3e3;
  uStack_4a50 = uVar22 ^ 0xc925ee8028b01d67;
  local_4a48 = uVar24 ^ 0x929654b1461b0a11;
  uStack_4a40 = 0;
  local_46f8 = &local_4a58;
  local_4cd8 = pcVar23;
  puStack_4cd0 = (undefined8 *)uVar22;
  local_4cc8 = uVar24;
  pcVar23 = (char *)FUN_1800e41f0();
  local_4ce8 = (char *)CONCAT44(local_4ce8._4_4_,2);
  lVar18 = FUN_1800efea0(&DAT_180c70dc0);
  local_4d18 = (char *)FUN_1800efea0(&DAT_180902b50);
  if ((local_4d18 != pcVar23) || (lVar18 == 0)) {
    UVar9 = GetTickCount64();
    if ((local_4d18 == pcVar23) && (uVar22 = FUN_1800efea0(&DAT_180c70db8,2), UVar9 < uVar22)) {
      lVar18 = 0;
    }
    else {
      FUN_180162870(&local_4d18,&DAT_180902b00);
      lVar18 = FUN_1800efea0(&DAT_180c70dc0,2);
      pcVar10 = (char *)FUN_1800efea0(&DAT_180902b50);
      if (pcVar10 == pcVar23) {
        if ((lVar18 == 0) && (uVar22 = FUN_1800efea0(&DAT_180c70db8), uVar22 <= UVar9))
        goto LAB_1803799ac;
      }
      else {
        FUN_18015e9b0(&DAT_180902a40,1000,3);
LAB_1803799ac:
        puVar11 = (undefined8 *)
                  FUN_18015b110(local_4248,"client.dll:48895C241848896C2420574883EC40488BF9");
        local_4d08 = (char *)*puVar11;
        puStack_4d00 = (undefined8 *)puVar11[1];
        puVar12 = (ulonglong *)FUN_18015b110(local_4238,"patterns::frame_stage_notify");
        local_4cd8 = (char *)*puVar12;
        puStack_4cd0 = (undefined8 *)puVar12[1];
        lVar18 = FUN_1800e5d20(&local_4cd8,&local_4d08);
        FUN_18015e9b0(&DAT_180c70dc0,lVar18,3);
        FUN_18015e9b0(&DAT_180902b50,pcVar23);
        lVar20 = FUN_1800efea0(&DAT_180902a40,2);
        if (lVar18 == 0) {
          uVar22 = FUN_18015e9b0(&DAT_180c70db8,lVar20 + UVar9);
          lVar20 = uVar22 * 2;
          if (59999 < uVar22) {
            lVar20 = 60000;
          }
        }
        else {
          FUN_18015e9b0(&DAT_180c70db8,0xffffffffffffffff);
          lVar20 = 1000;
        }
        FUN_18015e9b0(&DAT_180902a40,lVar20,3);
      }
      FUN_1805f68fc(local_4d18);
    }
  }
  local_46e8 = &DAT_180c70860;
  local_46e0 = FUN_180398940;
  local_4d08 = (char *)0xdb35e39b27e1c185;
  local_4d18 = (char *)0xa05181ee77d57a06;
  puStack_4d00 = (undefined8 *)0xa05181ee77d57a06;
  local_4c78 = 0x6d5f657461657263;
  uStack_4c70 = 0x65766f;
  local_46d8 = &local_4c78;
  local_46f0 = lVar18;
  local_46d0 = FUN_18037e8a0();
  local_46c8 = &DAT_180c70800;
  local_46c0 = FUN_18039d940;
  local_4cd8 = (char *)0xdb35e39b27e1c185;
  puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
  local_4cc8 = 0x929654b1461b7377;
  local_4d18 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_4a38 = 0x765f656c646e6168;
  uStack_4a30 = 0x6c676e615f776569;
  local_4a28 = 0x7365;
  uStack_4a20 = 0;
  local_46b8 = &local_4a38;
  local_46b0 = FUN_18037ea60();
  local_46a8 = &DAT_180c707a0;
  local_46a0 = FUN_1803a8ea0;
  local_4cd8 = (char *)0xdb35e39b27e1c185;
  puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
  local_4cc8 = 0x929654b1461b7377;
  local_4d18 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_4a18 = 0x6e7761705f746567;
  uStack_4a10 = 0x676e615f6579655f;
  local_4a08 = 0x73656c;
  uStack_4a00 = 0;
  local_4698 = &local_4a18;
  lVar18 = FUN_18037ec20();
  if (lVar18 == 0) {
    local_4690 = 0;
  }
  else {
    local_4690 = FUN_18037ede0();
  }
  local_4688 = &DAT_180c70920;
  local_4680 = FUN_1803a8140;
  local_4c68 = 0x69746e655f646461;
  uStack_4c60 = 0x7974;
  local_4678 = &local_4c68;
  local_4670 = local_4cf8;
  local_4668 = &DAT_180c708c0;
  local_4660 = FUN_1803a82c0;
  local_4c58 = 0x655f65766f6d6572;
  uStack_4c50 = 0x797469746e;
  local_4658 = &local_4c58;
  local_4650 = local_4ca8;
  local_4648 = &DAT_180c70620;
  local_4640 = FUN_1803a9680;
  local_4d08 = (char *)0xdb35e39b27e1c185;
  local_4d18 = (char *)0xa05181ee77d57a06;
  puStack_4d00 = (undefined8 *)0xa05181ee77d57a06;
  local_4c48 = 0x765f7265646e6572;
  uStack_4c40 = 0x776569;
  local_4638 = &local_4c48;
  local_4630 = FUN_18037efa0();
  local_4628 = &DAT_180c705c0;
  local_4620 = FUN_1803a97a0;
  local_4cd8 = (char *)0xdb35e39b27e1c185;
  puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
  local_4cc8 = 0x929654b1461b7377;
  local_4d18 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_4ad8 = 0x796b735f77617264;
  uStack_4ad0 = 0x617272615f786f62;
  local_4ac8 = 0x79;
  uStack_4ac0 = 0;
  local_4618 = &local_4ad8;
  local_4610 = FUN_18037f160();
  local_4608 = &DAT_180c70560;
  local_4600 = FUN_1803a9a00;
  local_4cd8 = (char *)0xdb35e39b27e1c185;
  puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
  local_4cc8 = 0x929654b1461b7377;
  local_4d18 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_49d8 = 0x63735f746867696c;
  uStack_49d0 = 0x656a626f5f656e65;
  local_49c8 = 0x7463;
  uStack_49c0 = 0;
  local_45f8 = &local_49d8;
  local_45f0 = FUN_18037f320();
  local_45e8 = &DAT_180c70740;
  local_45e0 = FUN_1803a9c50;
  local_4cd8 = (char *)0xdb35e39b27e1c185;
  puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
  local_4cc8 = 0x929654b1461b7377;
  local_4d18 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_49b8 = 0x6563735f77617264;
  uStack_49b0 = 0x63656a626f5f656e;
  local_49a8 = 0x79617272615f74;
  uStack_49a0 = 0;
  local_45d8 = &local_49b8;
  local_45d0 = FUN_18037f4e0();
  local_45c8 = &DAT_180c706e0;
  local_45c0 = FUN_1803a9cf0;
  local_4cd8 = (char *)0xdb35e39b27e1c185;
  puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
  local_4cc8 = 0x929654b1461b7377;
  local_4d18 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_4998 = 0x6563735f77617264;
  uStack_4990 = 0x63656a626f5f656e;
  local_4988 = 0x74;
  uStack_4980 = 0;
  local_45b8 = &local_4998;
  local_45b0 = FUN_18037f6a0();
  local_45a8 = &DAT_180c70680;
  local_45a0 = FUN_1803ac760;
  local_4d08 = (char *)0xdb35e39b27e1c185;
  local_4d18 = (char *)0xa05181ee77d57a06;
  puStack_4d00 = (undefined8 *)0xa05181ee77d57a06;
  local_4c38 = 0x69776f6c675f7369;
  uStack_4c30 = 0x676e;
  local_4598 = &local_4c38;
  local_4590 = FUN_18037f860();
  local_4588 = &DAT_180c703e0;
  local_4580 = FUN_1803acb60;
  local_4d08 = (char *)0xdb35e39b27e1c185;
  local_4d18 = (char *)0xa05181ee77d57a06;
  puStack_4d00 = (undefined8 *)0xa05181ee77d57a06;
  local_4c28 = 0x776f6c675f746567;
  uStack_4c20 = 0x726f6c6f635f;
  local_4578 = &local_4c28;
  local_4570 = FUN_18037fa20();
  local_4568 = &DAT_180c70380;
  local_4560 = FUN_1803ad0d0;
  local_4cd8 = (char *)0xdb35e39b27e1c185;
  puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
  local_4cc8 = 0x929654b1461b7377;
  local_4d18 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_4978 = 0x65746172656e6567;
  uStack_4970 = 0x6974696d6972705f;
  local_4968 = 0x736576;
  uStack_4960 = 0;
  local_4558 = &local_4978;
  local_4550 = FUN_18037fbe0();
  local_4548 = &DAT_180c70500;
  local_4540 = FUN_18039dca0;
  local_4cd8 = (char *)0xdb35e39b27e1c185;
  puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
  local_4cc8 = 0x929654b1461b7377;
  local_4d18 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_4958 = 0x65725f6573726170;
  uStack_4950 = 0x7469685f74726f70;
  local_4948 = 0;
  uStack_4940 = 0;
  local_4538 = &local_4958;
  local_4530 = FUN_18037fda0();
  local_4528 = &DAT_180c704a0;
  local_4520 = FUN_1803a9eb0;
  local_4d08 = (char *)0xdb35e39b27e1c185;
  local_4d18 = (char *)0xa05181ee77d57a06;
  puStack_4d00 = (undefined8 *)0xa05181ee77d57a06;
  local_4c18 = 0x6f665f7075746573;
  uStack_4c10 = 0x67;
  local_4518 = &local_4c18;
  local_4510 = FUN_18037ff60();
  local_4508 = &DAT_180c70440;
  local_4500 = FUN_1803a9f40;
  local_4cd8 = (char *)0xdb35e39b27e1c185;
  puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
  local_4cc8 = 0x929654b1461b7377;
  local_4d18 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_4938 = 0x646168735f746573;
  uStack_4930 = 0x6d617261705f7265;
  local_4928 = 0;
  uStack_4920 = 0;
  local_44f8 = &local_4938;
  local_44f0 = FUN_180380120();
  local_44e8 = &DAT_180c70260;
  local_44e0 = FUN_1803aa040;
  local_4cd8 = (char *)0xdb35e39b27e1c185;
  puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
  local_4cc8 = 0x929654b1461b7377;
  local_4d18 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_4918 = 0x74736f705f746573;
  uStack_4910 = 0x5f737365636f7270;
  local_4908 = 0x636576;
  uStack_4900 = 0;
  local_44d8 = &local_4918;
  local_44d0 = FUN_1803802e0();
  local_44c8 = &DAT_180c70200;
  local_44c0 = FUN_1803aa580;
  local_4d08 = (char *)0xdb35e39b27e1c185;
  local_4d18 = (char *)0xa05181ee77d57a06;
  puStack_4d00 = (undefined8 *)0xa05181ee77d57a06;
  local_4c08 = 0x656469727265766f;
  uStack_4c00 = 0x776569765f;
  local_44b8 = &local_4c08;
  local_44b0 = FUN_1803804a0();
  local_44a8 = &DAT_180c701a0;
  local_44a0 = FUN_1803aa770;
  local_4cd8 = (char *)0xdb35e39b27e1c185;
  puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
  local_4cc8 = 0x929654b1461b7377;
  local_4d18 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_48f8 = 0x665f657461647075;
  uStack_48f0 = 0x69736e65735f766f;
  local_48e8 = 0x797469766974;
  uStack_48e0 = 0;
  local_4498 = &local_48f8;
  local_4490 = FUN_180380660();
  local_4488 = &DAT_180c70320;
  local_4480 = FUN_1803afcd0;
  local_4d08 = (char *)0xdb35e39b27e1c185;
  local_4d18 = (char *)0xa05181ee77d57a06;
  puStack_4d00 = (undefined8 *)0xa05181ee77d57a06;
  local_4bf8 = 0x735f7265646e6572;
  uStack_4bf0 = 0x65706f63;
  local_4478 = &local_4bf8;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  pcVar10 = DAT_1809023d8;
  pcVar23 = DAT_1808da460;
  if ((DAT_1809023d8 != DAT_1808da460) || (lVar18 = DAT_180c70c98, DAT_180c70c98 == 0)) {
    UVar9 = GetTickCount64();
    if ((pcVar10 == pcVar23) && (UVar9 < DAT_180c70c90)) {
      lVar18 = 0;
    }
    else {
      local_4d18 = &DAT_1809022c0;
      iVar21 = FUN_1805f68d0(&DAT_1809022c0);
      if (iVar21 != 0) goto LAB_18037e515;
      if (DAT_18090230c == 0x7fffffff) {
        DAT_18090230c = 0x7ffffffe;
        goto LAB_18037e50a;
      }
      if (DAT_1809023d8 == pcVar23) {
        if ((DAT_180c70c98 == 0) && (DAT_180c70c90 <= UVar9)) goto LAB_18037add3;
      }
      else {
        DAT_1809022b0 = 1000;
LAB_18037add3:
        uVar22 = 0xffffffffffffffff;
        do {
          puStack_4d00 = (undefined8 *)(uVar22 + 1);
          lVar18 = uVar22 + 1;
          uVar22 = (ulonglong)puStack_4d00;
        } while ("client.dll:488BC453574883EC68488BFA"[lVar18] != '\0');
        local_4d08 = "client.dll:488BC453574883EC68488BFA";
        local_4cf8 = "patterns::render_scope";
        local_4cf0 = 0x16;
        DAT_180c70c98 = FUN_1800e5d20(&local_4cf8,&local_4d08);
        DAT_1809023d8 = pcVar23;
        DAT_180c70c90 = 0xffffffffffffffff;
        if (DAT_180c70c98 == 0) {
          DAT_180c70c90 = DAT_1809022b0 + UVar9;
          if (DAT_1809022b0 < 60000) {
            DAT_1809022b0 = DAT_1809022b0 * 2;
          }
          else {
            DAT_1809022b0 = 60000;
          }
        }
        else {
          DAT_1809022b0 = 1000;
        }
      }
      lVar18 = DAT_180c70c98;
      FUN_1805f68fc(&DAT_1809022c0);
    }
  }
  local_4468 = &DAT_180c702c0;
  local_4460 = FUN_1803aff60;
  local_4cd8 = (char *)0xdb35e39b27e1c185;
  puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
  local_4cc8 = 0x929654b1461b7377;
  local_4d18 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_49f8 = 0x635f7265646e6572;
  uStack_49f0 = 0x7269616873736f72;
  local_49e8 = 0;
  uStack_49e0 = 0;
  local_4458 = &local_49f8;
  local_4470 = lVar18;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  pcVar10 = DAT_1809022a8;
  pcVar23 = DAT_1808da460;
  if ((DAT_1809022a8 != DAT_1808da460) || (lVar18 = DAT_180c70c78, DAT_180c70c78 == 0)) {
    UVar9 = GetTickCount64();
    if ((pcVar10 == pcVar23) && (UVar9 < DAT_180c70c80)) {
      lVar18 = 0;
    }
    else {
      local_4d18 = &DAT_180902320;
      iVar21 = FUN_1805f68d0(&DAT_180902320);
      if (iVar21 != 0) goto LAB_18037e515;
      if (DAT_18090236c == 0x7fffffff) {
        DAT_18090236c = 0x7ffffffe;
        goto LAB_18037e50a;
      }
      if (DAT_1809022a8 == pcVar23) {
        if ((DAT_180c70c78 == 0) && (DAT_180c70c80 <= UVar9)) goto LAB_18037b07d;
      }
      else {
        DAT_180902310 = 1000;
LAB_18037b07d:
        uVar22 = 0xffffffffffffffff;
        do {
          puStack_4d00 = (undefined8 *)(uVar22 + 1);
          pcVar10 = "lient.dll:4C89442418488954241048894C2408555356574154415541564157488DAC2438EFFFFFB8C8110000E8????????482BE0488BF966C74424440000488D4C2444498BD8E8????????84C00F84????????807C2444000F84????????"
                    + uVar22;
          uVar22 = (ulonglong)puStack_4d00;
        } while (*pcVar10 != '\0');
        local_4d08 = 
        "client.dll:4C89442418488954241048894C2408555356574154415541564157488DAC2438EFFFFFB8C8110000E8????????482BE0488BF966C74424440000488D4C2444498BD8E8????????84C00F84????????807C2444000F84????????"
        ;
        local_4cf8 = "patterns::render_crosshair_pass";
        local_4cf0 = 0x1f;
        DAT_180c70c78 = FUN_1800e5d20(&local_4cf8,&local_4d08);
        DAT_1809022a8 = pcVar23;
        DAT_180c70c80 = 0xffffffffffffffff;
        if (DAT_180c70c78 == 0) {
          DAT_180c70c80 = DAT_180902310 + UVar9;
          if (DAT_180902310 < 60000) {
            DAT_180902310 = DAT_180902310 * 2;
          }
          else {
            DAT_180902310 = 60000;
          }
        }
        else {
          DAT_180902310 = 1000;
        }
      }
      lVar18 = DAT_180c70c78;
      FUN_1805f68fc(&DAT_180902320);
    }
  }
  local_4448 = &DAT_180c70020;
  local_4440 = FUN_1803aa800;
  local_4cd8 = (char *)0xdb35e39b27e1c185;
  puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
  local_4cc8 = 0x929654b1461b7377;
  local_4d18 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_48d8 = 0x5f65726170657270;
  uStack_48d0 = 0x616d5f656e656373;
  local_48c8 = 0x6c6169726574;
  uStack_48c0 = 0;
  local_4438 = &local_48d8;
  local_4450 = lVar18;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  pcVar10 = DAT_180902290;
  pcVar23 = DAT_1808da460;
  if ((DAT_180902290 != DAT_1808da460) || (lVar18 = DAT_180c70c60, DAT_180c70c60 == 0)) {
    UVar9 = GetTickCount64();
    if ((pcVar10 == pcVar23) && (UVar9 < DAT_180c70c58)) {
      lVar18 = 0;
    }
    else {
      local_4d18 = &DAT_180902240;
      iVar21 = FUN_1805f68d0(&DAT_180902240);
      if (iVar21 != 0) goto LAB_18037e515;
      if (DAT_18090228c == 0x7fffffff) {
        DAT_18090228c = 0x7ffffffe;
        goto LAB_18037e50a;
      }
      if (DAT_180902290 == pcVar23) {
        if ((DAT_180c70c60 == 0) && (DAT_180c70c58 <= UVar9)) goto LAB_18037b333;
      }
      else {
        DAT_1809022a0 = 1000;
LAB_18037b333:
        uVar22 = 0xffffffffffffffff;
        do {
          puStack_4d00 = (undefined8 *)(uVar22 + 1);
          lVar18 = uVar22 + 1;
          uVar22 = (ulonglong)puStack_4d00;
        } while ("materialsystem2.dll:48895C24084889742410574883EC30488B5920"[lVar18] != '\0');
        local_4d08 = "materialsystem2.dll:48895C24084889742410574883EC30488B5920";
        local_4cf8 = "patterns::prepare_scene_material";
        local_4cf0 = 0x20;
        DAT_180c70c60 = FUN_1800e5d20(&local_4cf8,&local_4d08);
        DAT_180902290 = pcVar23;
        DAT_180c70c58 = 0xffffffffffffffff;
        if (DAT_180c70c60 == 0) {
          DAT_180c70c58 = DAT_1809022a0 + UVar9;
          if (DAT_1809022a0 < 60000) {
            DAT_1809022a0 = DAT_1809022a0 * 2;
          }
          else {
            DAT_1809022a0 = 60000;
          }
        }
        else {
          DAT_1809022a0 = 1000;
        }
      }
      lVar18 = DAT_180c70c60;
      FUN_1805f68fc(&DAT_180902240);
    }
  }
  local_4428 = &DAT_180c6ffc0;
  local_4420 = FUN_1803aeef0;
  local_4d08 = (char *)0xdb35e39b27e1c185;
  local_4d18 = (char *)0xa05181ee77d57a06;
  puStack_4d00 = (undefined8 *)0xa05181ee77d57a06;
  local_4be8 = 0x65766f5f77617264;
  uStack_4be0 = 0x6461656872;
  local_4418 = &local_4be8;
  local_4430 = lVar18;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  pcVar10 = DAT_180902298;
  pcVar23 = DAT_1808da460;
  if ((DAT_180902298 != DAT_1808da460) || (lVar18 = DAT_180c70c70, DAT_180c70c70 == 0)) {
    UVar9 = GetTickCount64();
    if ((pcVar10 == pcVar23) && (UVar9 < DAT_180c70c68)) {
      lVar18 = 0;
    }
    else {
      local_4d18 = &DAT_180902180;
      iVar21 = FUN_1805f68d0(&DAT_180902180);
      if (iVar21 != 0) goto LAB_18037e515;
      if (DAT_1809021cc == 0x7fffffff) {
        DAT_1809021cc = 0x7ffffffe;
        goto LAB_18037e50a;
      }
      if (DAT_180902298 == pcVar23) {
        if ((DAT_180c70c70 == 0) && (DAT_180c70c68 <= UVar9)) goto LAB_18037b55e;
      }
      else {
        DAT_180902178 = 1000;
LAB_18037b55e:
        uVar22 = 0xffffffffffffffff;
        do {
          puStack_4d00 = (undefined8 *)(uVar22 + 1);
          pcVar10 = "lient.dll:40534883EC??488BD983FA??75??" + uVar22;
          uVar22 = (ulonglong)puStack_4d00;
        } while (*pcVar10 != '\0');
        local_4d08 = "client.dll:40534883EC??488BD983FA??75??";
        local_4cf8 = "patterns::draw_overhead";
        local_4cf0 = 0x17;
        DAT_180c70c70 = FUN_1800e5d20(&local_4cf8,&local_4d08);
        DAT_180902298 = pcVar23;
        DAT_180c70c68 = 0xffffffffffffffff;
        if (DAT_180c70c70 == 0) {
          DAT_180c70c68 = DAT_180902178 + UVar9;
          if (DAT_180902178 < 60000) {
            DAT_180902178 = DAT_180902178 * 2;
          }
          else {
            DAT_180902178 = 60000;
          }
        }
        else {
          DAT_180902178 = 1000;
        }
      }
      lVar18 = DAT_180c70c70;
      FUN_1805f68fc(&DAT_180902180);
    }
  }
  local_4408 = &DAT_180c6ff60;
  local_4400 = FUN_1803aea80;
  local_4cd8 = (char *)0xdb35e39b27e1c185;
  puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
  local_4cc8 = 0x929654b1461b7377;
  local_4d18 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_48b8 = 0x646165687265766f;
  uStack_48b0 = 0x61705f776569765f;
  local_48a8 = 0x6e77;
  uStack_48a0 = 0;
  local_43f8 = &local_48b8;
  local_4410 = lVar18;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  pcVar10 = DAT_180902230;
  pcVar23 = DAT_1808da460;
  if ((DAT_180902230 == DAT_1808da460) && (DAT_180c70c48 != 0)) {
LAB_18037b8c0:
    lVar18 = FUN_180380820();
    if (lVar18 == 0) goto LAB_18037b8d9;
    local_43f0 = FUN_1803809e0();
  }
  else {
    UVar9 = GetTickCount64();
    if ((pcVar10 != pcVar23) || (DAT_180c70c50 <= UVar9)) {
      local_4d18 = &DAT_1809021e0;
      iVar21 = FUN_1805f68d0(&DAT_1809021e0);
      if (iVar21 != 0) goto LAB_18037e515;
      if (DAT_18090222c == 0x7fffffff) {
        DAT_18090222c = 0x7ffffffe;
        goto LAB_18037e50a;
      }
      if (DAT_180902230 == pcVar23) {
        if ((DAT_180c70c48 == 0) && (DAT_180c70c50 <= UVar9)) goto LAB_18037b80f;
      }
      else {
        DAT_1809021d0 = 1000;
LAB_18037b80f:
        uVar22 = 0xffffffffffffffff;
        do {
          puStack_4d00 = (undefined8 *)(uVar22 + 1);
          pcVar10 = "lient.dll:E8????????4C8BF048894588E8????????488BF048894580+5" + uVar22;
          uVar22 = (ulonglong)puStack_4d00;
        } while (*pcVar10 != '\0');
        local_4d08 = "client.dll:E8????????4C8BF048894588E8????????488BF048894580+5";
        local_4cf8 = "patterns::overhead_view_pawn_return";
        local_4cf0 = 0x23;
        DAT_180c70c48 = FUN_1800e5d20(&local_4cf8,&local_4d08);
        DAT_180902230 = pcVar23;
        DAT_180c70c50 = 0xffffffffffffffff;
        if (DAT_180c70c48 == 0) {
          DAT_180c70c50 = UVar9 + DAT_1809021d0;
          if (DAT_1809021d0 < 60000) {
            DAT_1809021d0 = DAT_1809021d0 * 2;
          }
          else {
            DAT_1809021d0 = 60000;
          }
        }
        else {
          DAT_1809021d0 = 1000;
        }
      }
      lVar18 = DAT_180c70c48;
      FUN_1805f68fc(&DAT_1809021e0);
      if (lVar18 != 0) goto LAB_18037b8c0;
    }
LAB_18037b8d9:
    local_43f0 = 0;
  }
  local_43e8 = &DAT_180c70140;
  local_43e0 = FUN_1803af430;
  local_4d08 = (char *)0xdb35e39b27e1c185;
  local_4d18 = (char *)0xa05181ee77d57a06;
  puStack_4d00 = (undefined8 *)0xa05181ee77d57a06;
  local_4bd8 = 0x67656c5f77617264;
  uStack_4bd0 = 0x73;
  local_43d8 = &local_4bd8;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  pcVar10 = DAT_180902100;
  pcVar23 = DAT_1808da460;
  if ((DAT_180902100 != DAT_1808da460) || (lVar18 = DAT_180c70c18, DAT_180c70c18 == 0)) {
    UVar9 = GetTickCount64();
    if ((pcVar10 == pcVar23) && (UVar9 < DAT_180c70c28)) {
      lVar18 = 0;
    }
    else {
      local_4d18 = &DAT_1809020b0;
      iVar21 = FUN_1805f68d0(&DAT_1809020b0);
      if (iVar21 != 0) goto LAB_18037e515;
      if (DAT_1809020fc == 0x7fffffff) {
        DAT_1809020fc = 0x7ffffffe;
        goto LAB_18037e50a;
      }
      if (DAT_180902100 == pcVar23) {
        if ((DAT_180c70c18 == 0) && (DAT_180c70c28 <= UVar9)) goto LAB_18037ba57;
      }
      else {
        DAT_1809020a0 = 1000;
LAB_18037ba57:
        uVar22 = 0xffffffffffffffff;
        do {
          puStack_4d00 = (undefined8 *)(uVar22 + 1);
          lVar18 = uVar22 + 1;
          uVar22 = (ulonglong)puStack_4d00;
        } while ("client.dll:4055535641564157488DAC24????????4881EC????????F20F1042??"[lVar18] !=
                 '\0');
        local_4d08 = "client.dll:4055535641564157488DAC24????????4881EC????????F20F1042??";
        local_4cf8 = "patterns::draw_legs";
        local_4cf0 = 0x13;
        DAT_180c70c18 = FUN_1800e5d20(&local_4cf8,&local_4d08);
        DAT_180902100 = pcVar23;
        DAT_180c70c28 = 0xffffffffffffffff;
        if (DAT_180c70c18 == 0) {
          DAT_180c70c28 = DAT_1809020a0 + UVar9;
          if (DAT_1809020a0 < 60000) {
            DAT_1809020a0 = DAT_1809020a0 * 2;
          }
          else {
            DAT_1809020a0 = 60000;
          }
        }
        else {
          DAT_1809020a0 = 1000;
        }
      }
      lVar18 = DAT_180c70c18;
      FUN_1805f68fc(&DAT_1809020b0);
    }
  }
  local_43c8 = &DAT_180c700e0;
  local_43c0 = FUN_18039e010;
  local_4cd8 = (char *)0xdb35e39b27e1c185;
  puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
  local_4cc8 = 0x929654b1461b7377;
  local_4d18 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_4898 = 0x6e6172745f746567;
  uStack_4890 = 0x665f736d726f6673;
  local_4888 = 0x6f627469685f726f;
  uStack_4880 = 0x7473696c5f78;
  local_43b8 = &local_4898;
  local_43d0 = lVar18;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  pcVar10 = DAT_180901fe0;
  pcVar23 = DAT_1808da460;
  if ((DAT_180901fe0 != DAT_1808da460) || (lVar18 = DAT_180c70c08, DAT_180c70c08 == 0)) {
    UVar9 = GetTickCount64();
    if ((pcVar10 == pcVar23) && (UVar9 < DAT_180c70c00)) {
      lVar18 = 0;
    }
    else {
      local_4d18 = &DAT_180901ff0;
      iVar21 = FUN_1805f68d0(&DAT_180901ff0);
      if (iVar21 != 0) goto LAB_18037e515;
      if (DAT_18090203c == 0x7fffffff) {
        DAT_18090203c = 0x7ffffffe;
        goto LAB_18037e50a;
      }
      if (DAT_180901fe0 == pcVar23) {
        if ((DAT_180c70c08 == 0) && (DAT_180c70c00 <= UVar9)) goto LAB_18037bd1d;
      }
      else {
        DAT_180901fe8 = 1000;
LAB_18037bd1d:
        uVar22 = 0xffffffffffffffff;
        do {
          puStack_4d00 = (undefined8 *)(uVar22 + 1);
          pcVar10 = "lient.dll:48895C24??555657415441554881EC????????4963304D8BE0488BEA488BD985F6" +
                    uVar22;
          uVar22 = (ulonglong)puStack_4d00;
        } while (*pcVar10 != '\0');
        local_4d08 = "client.dll:48895C24??555657415441554881EC????????4963304D8BE0488BEA488BD985F6"
        ;
        local_4cf8 = "patterns::get_transforms_for_hitbox_list";
        local_4cf0 = 0x28;
        DAT_180c70c08 = FUN_1800e5d20(&local_4cf8,&local_4d08);
        DAT_180901fe0 = pcVar23;
        DAT_180c70c00 = 0xffffffffffffffff;
        if (DAT_180c70c08 == 0) {
          DAT_180c70c00 = DAT_180901fe8 + UVar9;
          if (DAT_180901fe8 < 60000) {
            DAT_180901fe8 = DAT_180901fe8 * 2;
          }
          else {
            DAT_180901fe8 = 60000;
          }
        }
        else {
          DAT_180901fe8 = 1000;
        }
      }
      lVar18 = DAT_180c70c08;
      FUN_1805f68fc(&DAT_180901ff0);
    }
  }
  local_43a8 = &DAT_180c70080;
  local_43a0 = FUN_1803aa9c0;
  local_4d08 = (char *)0xdb35e39b27e1c185;
  local_4d18 = (char *)0xa05181ee77d57a06;
  puStack_4d00 = (undefined8 *)0xa05181ee77d57a06;
  local_4bc8 = 0x6972705f74726f73;
  uStack_4bc0 = 0x7365766974696d;
  local_4398 = &local_4bc8;
  local_43b0 = lVar18;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  pcVar10 = DAT_180901fd0;
  pcVar23 = DAT_1808da460;
  if ((DAT_180901fd0 != DAT_1808da460) || (lVar18 = DAT_180c70c10, DAT_180c70c10 == 0)) {
    UVar9 = GetTickCount64();
    if ((pcVar10 == pcVar23) && (UVar9 < DAT_180c70be8)) {
      lVar18 = 0;
    }
    else {
      local_4d18 = &DAT_180901f80;
      iVar21 = FUN_1805f68d0(&DAT_180901f80);
      if (iVar21 != 0) goto LAB_18037e515;
      if (DAT_180901fcc == 0x7fffffff) {
        DAT_180901fcc = 0x7ffffffe;
        goto LAB_18037e50a;
      }
      if (DAT_180901fd0 == pcVar23) {
        if ((DAT_180c70c10 == 0) && (DAT_180c70be8 <= UVar9)) goto LAB_18037bf49;
      }
      else {
        DAT_180901f70 = 1000;
LAB_18037bf49:
        uVar22 = 0xffffffffffffffff;
        do {
          puStack_4d00 = (undefined8 *)(uVar22 + 1);
          lVar18 = uVar22 + 1;
          uVar22 = (ulonglong)puStack_4d00;
        } while ("scenesystem.dll:4585C90F84????????5556574883EC30"[lVar18] != '\0');
        local_4d08 = "scenesystem.dll:4585C90F84????????5556574883EC30";
        local_4cf8 = "patterns::sort_primitives";
        local_4cf0 = 0x19;
        DAT_180c70c10 = FUN_1800e5d20(&local_4cf8,&local_4d08);
        DAT_180901fd0 = pcVar23;
        DAT_180c70be8 = 0xffffffffffffffff;
        if (DAT_180c70c10 == 0) {
          DAT_180c70be8 = DAT_180901f70 + UVar9;
          if (DAT_180901f70 < 60000) {
            DAT_180901f70 = DAT_180901f70 * 2;
          }
          else {
            DAT_180901f70 = 60000;
          }
        }
        else {
          DAT_180901f70 = 1000;
        }
      }
      lVar18 = DAT_180c70c10;
      FUN_1805f68fc(&DAT_180901f80);
    }
  }
  local_4388 = &DAT_180c6fd80;
  local_4380 = FUN_18039e9d0;
  local_4d08 = (char *)0xdb35e39b27e1c185;
  local_4d18 = (char *)0xa05181ee77d57a06;
  puStack_4d00 = (undefined8 *)0xa05181ee77d57a06;
  local_4bb8 = 0x63616e695f746567;
  uStack_4bb0 = 0x796361727563;
  local_4378 = &local_4bb8;
  local_4390 = lVar18;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  pcVar10 = DAT_180901fd8;
  pcVar23 = DAT_1808da460;
  if ((DAT_180901fd8 == DAT_1808da460) && (DAT_180c70bf8 != 0)) {
LAB_18037c23a:
    local_4370 = FUN_180380d60();
  }
  else {
    UVar9 = GetTickCount64();
    if ((pcVar10 != pcVar23) || (DAT_180c70bf0 <= UVar9)) {
      local_4d18 = &DAT_180901ec0;
      iVar21 = FUN_1805f68d0(&DAT_180901ec0);
      if (iVar21 != 0) goto LAB_18037e515;
      if (DAT_180901f0c == 0x7fffffff) {
        DAT_180901f0c = 0x7ffffffe;
        goto LAB_18037e50a;
      }
      if (DAT_180901fd8 == pcVar23) {
        if ((DAT_180c70bf8 == 0) && (DAT_180c70bf0 <= UVar9)) goto LAB_18037c175;
      }
      else {
        DAT_180901eb0 = 1000;
LAB_18037c175:
        uVar22 = 0xffffffffffffffff;
        do {
          puStack_4d00 = (undefined8 *)(uVar22 + 1);
          pcVar10 = "lient.dll:FF90F80C0000448B45??488D55??498BCE0F28F0E8????????+6" + uVar22;
          uVar22 = (ulonglong)puStack_4d00;
        } while (*pcVar10 != '\0');
        local_4d08 = "client.dll:FF90F80C0000448B45??488D55??498BCE0F28F0E8????????+6";
        local_4cf8 = "patterns::base_fire_guns_get_inaccuracy";
        local_4cf0 = 0x27;
        DAT_180c70bf8 = FUN_1800e5d20(&local_4cf8,&local_4d08);
        DAT_180901fd8 = pcVar23;
        DAT_180c70bf0 = 0xffffffffffffffff;
        if (DAT_180c70bf8 == 0) {
          DAT_180c70bf0 = UVar9 + DAT_180901eb0;
          if (DAT_180901eb0 < 60000) {
            DAT_180901eb0 = DAT_180901eb0 * 2;
          }
          else {
            DAT_180901eb0 = 60000;
          }
        }
        else {
          DAT_180901eb0 = 1000;
        }
      }
      lVar18 = DAT_180c70bf8;
      FUN_1805f68fc(&DAT_180901ec0);
      if (lVar18 != 0) goto LAB_18037c23a;
    }
    lVar18 = FUN_180380ba0();
    if (lVar18 != 0) goto LAB_18037c23a;
    local_4370 = 0;
  }
  local_4368 = &DAT_180c6fd20;
  local_4360 = FUN_18039edc0;
  local_4cd8 = (char *)0xdb35e39b27e1c185;
  puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
  local_4cc8 = 0x929654b1461b7377;
  local_4d18 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_4878 = 0x65746e695f746567;
  uStack_4870 = 0x646574616c6f7072;
  local_4868 = 0x705f746f6f68735f;
  uStack_4860 = 0x6e6f697469736f;
  local_4358 = &local_4878;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  pcVar10 = DAT_180901e98;
  pcVar23 = DAT_1808da460;
  if ((DAT_180901e98 != DAT_1808da460) || (lVar18 = DAT_180c70bd0, DAT_180c70bd0 == 0)) {
    UVar9 = GetTickCount64();
    if ((pcVar10 == pcVar23) && (UVar9 < DAT_180c70bc8)) {
      lVar18 = 0;
    }
    else {
      local_4d18 = &DAT_180901d90;
      iVar21 = FUN_1805f68d0(&DAT_180901d90);
      if (iVar21 != 0) goto LAB_18037e515;
      if (DAT_180901ddc == 0x7fffffff) {
        DAT_180901ddc = 0x7ffffffe;
        goto LAB_18037e50a;
      }
      if (DAT_180901e98 == pcVar23) {
        if ((DAT_180c70bd0 == 0) && (DAT_180c70bc8 <= UVar9)) goto LAB_18037c451;
      }
      else {
        DAT_180901d88 = 1000;
LAB_18037c451:
        uVar22 = 0xffffffffffffffff;
        do {
          puStack_4d00 = (undefined8 *)(uVar22 + 1);
          lVar18 = uVar22 + 1;
          uVar22 = (ulonglong)puStack_4d00;
        } while ("client.dll:>E8????????418B86F4030000C1E804A801"[lVar18] != '\0');
        local_4d08 = "client.dll:>E8????????418B86F4030000C1E804A801";
        local_4cf8 = "patterns::get_interpolated_shoot_position";
        local_4cf0 = 0x29;
        DAT_180c70bd0 = FUN_1800e5d20(&local_4cf8,&local_4d08);
        DAT_180901e98 = pcVar23;
        DAT_180c70bc8 = 0xffffffffffffffff;
        if (DAT_180c70bd0 == 0) {
          DAT_180c70bc8 = DAT_180901d88 + UVar9;
          if (DAT_180901d88 < 60000) {
            DAT_180901d88 = DAT_180901d88 * 2;
          }
          else {
            DAT_180901d88 = 60000;
          }
        }
        else {
          DAT_180901d88 = 1000;
        }
      }
      lVar18 = DAT_180c70bd0;
      FUN_1805f68fc(&DAT_180901d90);
    }
  }
  local_4350 = lVar18;
  local_4348 = &DAT_180c6ff00;
  local_4340 = FUN_180381690;
  local_4cd8 = (char *)0xdb35e39b27e1c185;
  puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
  local_4cc8 = 0x929654b1461b7377;
  local_4d18 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_4b38 = 0x6e695f6c6576656c;
  uStack_4b30 = 0x617a696c61697469;
  local_4b28 = 0x6e6f6974;
  uStack_4b20 = 0;
  local_4338 = &local_4b38;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  pcVar10 = DAT_180901d80;
  pcVar23 = DAT_1808da460;
  if ((DAT_180901d80 != DAT_1808da460) || (lVar18 = DAT_180c70ba0, DAT_180c70ba0 == 0)) {
    UVar9 = GetTickCount64();
    if ((pcVar10 == pcVar23) && (UVar9 < DAT_180c70bb0)) {
      lVar18 = 0;
    }
    else {
      local_4d18 = &DAT_180901df0;
      iVar21 = FUN_1805f68d0(&DAT_180901df0);
      if (iVar21 != 0) goto LAB_18037e515;
      if (DAT_180901e3c == 0x7fffffff) {
        DAT_180901e3c = 0x7ffffffe;
        goto LAB_18037e50a;
      }
      if (DAT_180901d80 == pcVar23) {
        if ((DAT_180c70ba0 == 0) && (DAT_180c70bb0 <= UVar9)) goto LAB_18037c705;
      }
      else {
        DAT_180901de0 = 1000;
LAB_18037c705:
        uVar22 = 0xffffffffffffffff;
        do {
          puStack_4d00 = (undefined8 *)(uVar22 + 1);
          lVar18 = uVar22 + 1;
          uVar22 = (ulonglong)puStack_4d00;
        } while ("client.dll:488D05*????????C6411000+B8~"[lVar18] != '\0');
        local_4d08 = "client.dll:488D05*????????C6411000+B8~";
        local_4cf8 = "patterns::level_initialization";
        local_4cf0 = 0x1e;
        DAT_180c70ba0 = FUN_1800e5d20(&local_4cf8,&local_4d08);
        DAT_180901d80 = pcVar23;
        DAT_180c70bb0 = 0xffffffffffffffff;
        if (DAT_180c70ba0 == 0) {
          DAT_180c70bb0 = DAT_180901de0 + UVar9;
          if (DAT_180901de0 < 60000) {
            DAT_180901de0 = DAT_180901de0 * 2;
          }
          else {
            DAT_180901de0 = 60000;
          }
        }
        else {
          DAT_180901de0 = 1000;
        }
      }
      lVar18 = DAT_180c70ba0;
      FUN_1805f68fc(&DAT_180901df0);
    }
  }
  local_4330 = lVar18;
  local_4328 = &DAT_180c6fea0;
  local_4320 = FUN_180381a70;
  local_4d08 = (char *)0xdb35e39b27e1c185;
  local_4d18 = (char *)0xa05181ee77d57a06;
  puStack_4d00 = (undefined8 *)0xa05181ee77d57a06;
  local_4ba8 = 0x68735f6c6576656c;
  uStack_4ba0 = 0x6e776f647475;
  local_4318 = &local_4ba8;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  pcVar10 = DAT_180901d70;
  pcVar23 = DAT_1808da460;
  if ((DAT_180901d70 != DAT_1808da460) || (lVar18 = DAT_180c70ba8, DAT_180c70ba8 == 0)) {
    UVar9 = GetTickCount64();
    if ((pcVar10 == pcVar23) && (UVar9 < DAT_180c70b88)) {
      lVar18 = 0;
    }
    else {
      local_4d18 = &DAT_180901d20;
      iVar21 = FUN_1805f68d0(&DAT_180901d20);
      if (iVar21 != 0) goto LAB_18037e515;
      if (DAT_180901d6c == 0x7fffffff) {
        DAT_180901d6c = 0x7ffffffe;
        goto LAB_18037e50a;
      }
      if (DAT_180901d70 == pcVar23) {
        if ((DAT_180c70ba8 == 0) && (DAT_180c70b88 <= UVar9)) goto LAB_18037c92f;
      }
      else {
        DAT_180901d10 = 1000;
LAB_18037c92f:
        uVar22 = 0xffffffffffffffff;
        do {
          puStack_4d00 = (undefined8 *)(uVar22 + 1);
          pcVar10 = "lient.dll:4883EC??488B0D????????488D15????????4533C94533C0488B01FF50304885C074??488B0D????????488BD04C8B0141FF50404883C4??"
                    + uVar22;
          uVar22 = (ulonglong)puStack_4d00;
        } while (*pcVar10 != '\0');
        local_4d08 = 
        "client.dll:4883EC??488B0D????????488D15????????4533C94533C0488B01FF50304885C074??488B0D????????488BD04C8B0141FF50404883C4??"
        ;
        local_4cf8 = "patterns::level_shutdown";
        local_4cf0 = 0x18;
        DAT_180c70ba8 = FUN_1800e5d20(&local_4cf8,&local_4d08);
        DAT_180901d70 = pcVar23;
        DAT_180c70b88 = 0xffffffffffffffff;
        if (DAT_180c70ba8 == 0) {
          DAT_180c70b88 = DAT_180901d10 + UVar9;
          if (DAT_180901d10 < 60000) {
            DAT_180901d10 = DAT_180901d10 * 2;
          }
          else {
            DAT_180901d10 = 60000;
          }
        }
        else {
          DAT_180901d10 = 1000;
        }
      }
      lVar18 = DAT_180c70ba8;
      FUN_1805f68fc(&DAT_180901d20);
    }
  }
  local_4310 = lVar18;
  local_4308 = &DAT_180c6fe40;
  local_4300 = FUN_1803880b0;
  local_4cd8 = (char *)0xdb35e39b27e1c185;
  puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
  local_4cc8 = 0x929654b1461b7377;
  local_4d18 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_4b18 = 0x5f737365636f7270;
  uStack_4b10 = 0x76655f7475706e69;
  local_4b08 = 0x746e65;
  uStack_4b00 = 0;
  local_42f8 = &local_4b18;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  pcVar10 = DAT_180901d78;
  pcVar23 = DAT_1808da460;
  if ((DAT_180901d78 != DAT_1808da460) || (lVar18 = DAT_180c70b98, DAT_180c70b98 == 0)) {
    UVar9 = GetTickCount64();
    if ((pcVar10 == pcVar23) && (UVar9 < DAT_180c70b90)) {
      lVar18 = 0;
    }
    else {
      local_4d18 = &DAT_180901c60;
      iVar21 = FUN_1805f68d0(&DAT_180901c60);
      if (iVar21 != 0) goto LAB_18037e515;
      if (DAT_180901cac == 0x7fffffff) {
        DAT_180901cac = 0x7ffffffe;
        goto LAB_18037e50a;
      }
      if (DAT_180901d78 == pcVar23) {
        if ((DAT_180c70b98 == 0) && (DAT_180c70b90 <= UVar9)) goto LAB_18037cbe3;
      }
      else {
        DAT_180901c50 = 1000;
LAB_18037cbe3:
        uVar22 = 0xffffffffffffffff;
        do {
          puStack_4d00 = (undefined8 *)(uVar22 + 1);
          lVar18 = uVar22 + 1;
          uVar22 = (ulonglong)puStack_4d00;
        } while ("client.dll:CCCC48895C2408574883EC20C6410800488D05*????????488901488BD9+20~"
                 [lVar18] != '\0');
        local_4d08 = "client.dll:CCCC48895C2408574883EC20C6410800488D05*????????488901488BD9+20~";
        local_4cf8 = "patterns::process_input_event";
        local_4cf0 = 0x1d;
        DAT_180c70b98 = FUN_1800e5d20(&local_4cf8,&local_4d08);
        DAT_180901d78 = pcVar23;
        DAT_180c70b90 = 0xffffffffffffffff;
        if (DAT_180c70b98 == 0) {
          DAT_180c70b90 = UVar9 + DAT_180901c50;
          if (DAT_180901c50 < 60000) {
            DAT_180901c50 = DAT_180901c50 * 2;
          }
          else {
            DAT_180901c50 = 60000;
          }
        }
        else {
          DAT_180901c50 = 1000;
        }
      }
      lVar18 = DAT_180c70b98;
      FUN_1805f68fc(&DAT_180901c60);
    }
  }
  local_42f0 = lVar18;
  local_42e8 = &DAT_180c6fde0;
  local_42e0 = FUN_1803b0250;
  local_4d08 = (char *)0xdb35e39b27e1c185;
  local_4d18 = (char *)0xa05181ee77d57a06;
  puStack_4d00 = (undefined8 *)0xa05181ee77d57a06;
  local_4b98 = 0x645f7265646e6572;
  uStack_4b90 = 0x736c616365;
  local_42d8 = &local_4b98;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  pcVar10 = DAT_180901c48;
  pcVar23 = DAT_1808da460;
  if ((DAT_180901c48 != DAT_1808da460) || (lVar18 = DAT_180c70b78, DAT_180c70b78 == 0)) {
    UVar9 = GetTickCount64();
    if ((pcVar10 == pcVar23) && (UVar9 < DAT_180c70b80)) {
      lVar18 = 0;
    }
    else {
      local_4d18 = &DAT_180901cc0;
      iVar21 = FUN_1805f68d0(&DAT_180901cc0);
      if (iVar21 != 0) goto LAB_18037e515;
      if (DAT_180901d0c == 0x7fffffff) {
        DAT_180901d0c = 0x7ffffffe;
        goto LAB_18037e50a;
      }
      if (DAT_180901c48 == pcVar23) {
        if ((DAT_180c70b78 == 0) && (DAT_180c70b80 <= UVar9)) goto LAB_18037ce0d;
      }
      else {
        DAT_180901cb0 = 1000;
LAB_18037ce0d:
        uVar22 = 0xffffffffffffffff;
        do {
          puStack_4d00 = (undefined8 *)(uVar22 + 1);
          lVar18 = uVar22 + 1;
          uVar22 = (ulonglong)puStack_4d00;
        } while ("client.dll:44884C2420555341544155488D6C24C14881ECC80000004C8B15????????4C8BEA4C8BE14584C974"
                 [lVar18] != '\0');
        local_4d08 = 
        "client.dll:44884C2420555341544155488D6C24C14881ECC80000004C8B15????????4C8BEA4C8BE14584C974"
        ;
        local_4cf8 = "patterns::render_decals";
        local_4cf0 = 0x17;
        DAT_180c70b78 = FUN_1800e5d20(&local_4cf8,&local_4d08);
        DAT_180901c48 = pcVar23;
        DAT_180c70b80 = 0xffffffffffffffff;
        if (DAT_180c70b78 == 0) {
          DAT_180c70b80 = DAT_180901cb0 + UVar9;
          if (DAT_180901cb0 < 60000) {
            DAT_180901cb0 = DAT_180901cb0 * 2;
          }
          else {
            DAT_180901cb0 = 60000;
          }
        }
        else {
          DAT_180901cb0 = 1000;
        }
      }
      lVar18 = DAT_180c70b78;
      FUN_1805f68fc(&DAT_180901cc0);
    }
  }
  local_42d0 = lVar18;
  local_42c8 = &DAT_180c6fcb0;
  local_42c0 = FUN_1803b0410;
  local_4cd8 = (char *)0xdb35e39b27e1c185;
  puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
  local_4cc8 = 0x929654b1461b7377;
  local_4d18 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_4af8 = 0x735f7265646e6572;
  uStack_4af0 = 0x7361705f656b6f6d;
  local_4ae8 = 0x73;
  uStack_4ae0 = 0;
  local_42b8 = &local_4af8;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  pcVar10 = DAT_180901c30;
  pcVar23 = DAT_1808da460;
  if ((DAT_180901c30 != DAT_1808da460) || (lVar18 = DAT_180c70b60, DAT_180c70b60 == 0)) {
    UVar9 = GetTickCount64();
    if ((pcVar10 == pcVar23) && (UVar9 < DAT_180c70b58)) {
      lVar18 = 0;
    }
    else {
      local_4d18 = &DAT_180901be0;
      iVar21 = FUN_1805f68d0(&DAT_180901be0);
      if (iVar21 != 0) goto LAB_18037e515;
      if (DAT_180901c2c == 0x7fffffff) {
        DAT_180901c2c = 0x7ffffffe;
        goto LAB_18037e50a;
      }
      if (DAT_180901c30 == pcVar23) {
        if ((DAT_180c70b60 == 0) && (DAT_180c70b58 <= UVar9)) goto LAB_18037d0c3;
      }
      else {
        DAT_180901c40 = 1000;
LAB_18037d0c3:
        uVar22 = 0xffffffffffffffff;
        do {
          puStack_4d00 = (undefined8 *)(uVar22 + 1);
          pcVar10 = "lient.dll:48895C240848896C2410488974241857415641574883EC40488B9C24880000004D8BF8488BFA488BF14533C0BA249AEDCF"
                    + uVar22;
          uVar22 = (ulonglong)puStack_4d00;
        } while (*pcVar10 != '\0');
        local_4d08 = 
        "client.dll:48895C240848896C2410488974241857415641574883EC40488B9C24880000004D8BF8488BFA488BF14533C0BA249AEDCF"
        ;
        local_4cf8 = "patterns::render_smoke_pass";
        local_4cf0 = 0x1b;
        DAT_180c70b60 = FUN_1800e5d20(&local_4cf8,&local_4d08);
        DAT_180901c30 = pcVar23;
        DAT_180c70b58 = 0xffffffffffffffff;
        if (DAT_180c70b60 == 0) {
          DAT_180c70b58 = DAT_180901c40 + UVar9;
          if (DAT_180901c40 < 60000) {
            DAT_180901c40 = DAT_180901c40 * 2;
          }
          else {
            DAT_180901c40 = 60000;
          }
        }
        else {
          DAT_180901c40 = 1000;
        }
      }
      lVar18 = DAT_180c70b60;
      FUN_1805f68fc(&DAT_180901be0);
    }
  }
  local_42b0 = lVar18;
  local_42a8 = &DAT_180c6fc50;
  local_42a0 = FUN_1803b0650;
  local_4cd8 = (char *)0xdb35e39b27e1c185;
  puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
  local_4cc8 = 0x929654b1461b7377;
  local_4d18 = (char *)0xa5cea54bfef7110;
  uStack_4cc0 = 0xa5cea54bfef7110;
  local_4ab8 = 0x616c665f77617264;
  uStack_4ab0 = 0x63656666655f6873;
  local_4aa8 = 0x74;
  uStack_4aa0 = 0;
  local_4298 = &local_4ab8;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  pcVar10 = DAT_180901c38;
  pcVar23 = DAT_1808da460;
  if ((DAT_180901c38 != DAT_1808da460) || (lVar18 = DAT_180c70b70, DAT_180c70b70 == 0)) {
    UVar9 = GetTickCount64();
    if ((pcVar10 == pcVar23) && (UVar9 < DAT_180c70b68)) {
      lVar18 = 0;
    }
    else {
      local_4d18 = &DAT_180901b30;
      iVar21 = FUN_1805f68d0(&DAT_180901b30);
      if (iVar21 != 0) goto LAB_18037e515;
      if (DAT_180901b7c == 0x7fffffff) {
        DAT_180901b7c = 0x7ffffffe;
        goto LAB_18037e50a;
      }
      if (DAT_180901c38 == pcVar23) {
        if ((DAT_180c70b70 == 0) && (DAT_180c70b68 <= UVar9)) goto LAB_18037d377;
      }
      else {
        DAT_180901b20 = 1000;
LAB_18037d377:
        uVar22 = 0xffffffffffffffff;
        do {
          puStack_4d00 = (undefined8 *)(uVar22 + 1);
          lVar18 = uVar22 + 1;
          uVar22 = (ulonglong)puStack_4d00;
        } while ("client.dll:85D20F88????????48894C24??5556"[lVar18] != '\0');
        local_4d08 = "client.dll:85D20F88????????48894C24??5556";
        local_4cf8 = "patterns::draw_flash_effect";
        local_4cf0 = 0x1b;
        DAT_180c70b70 = FUN_1800e5d20(&local_4cf8,&local_4d08);
        DAT_180901c38 = pcVar23;
        DAT_180c70b68 = 0xffffffffffffffff;
        if (DAT_180c70b70 == 0) {
          DAT_180c70b68 = DAT_180901b20 + UVar9;
          if (DAT_180901b20 < 60000) {
            DAT_180901b20 = DAT_180901b20 * 2;
          }
          else {
            DAT_180901b20 = 60000;
          }
        }
        else {
          DAT_180901b20 = 1000;
        }
      }
      lVar18 = DAT_180c70b70;
      FUN_1805f68fc(&DAT_180901b30);
    }
  }
  local_4290 = lVar18;
  iVar21 = 0;
  ppcVar19 = local_47c8 + 0x14;
  do {
    local_4278 = *ppcVar19;
    pcStack_4270 = ppcVar19[1];
    pcStack_4268 = ppcVar19[2];
    pcStack_4260 = ppcVar19[3];
    local_4818 = &local_4278;
    local_4810 = local_4258;
    cVar6 = FUN_18044e620(&local_4818);
    if (cVar6 == '\0') {
      iVar21 = iVar21 + 1;
      local_4cd8 = (char *)0xdb35e39b27e1c185;
      puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
      local_4cc8 = 0x929654b1461b7377;
      local_4d18 = (char *)0xa5cea54bfef7110;
      uStack_4cc0 = 0xa5cea54bfef7110;
      builtin_strncpy(local_4b88,"skipping unavailable hook: {}",0x1e);
      local_4b88[0x1e] = '\0';
      local_4b88[0x1f] = '\0';
      uVar22 = 0xffffffffffffffff;
      do {
        puStack_4d00 = (undefined8 *)(uVar22 + 1);
        lVar18 = uVar22 + 1;
        uVar22 = (ulonglong)puStack_4d00;
      } while (local_4b88[lVar18] != '\0');
      local_4d08 = local_4b88;
      FUN_1803825d0(&local_4d08,ppcVar19 + 2);
    }
    ppcVar19 = ppcVar19 + 4;
  } while (ppcVar19 != local_4288);
  ppuVar25 = &PTR_180700558;
  if (iVar21 != 0) {
    local_4cd8 = (char *)0xdb35e39b27e1c185;
    puStack_4cd0 = (undefined8 *)0xa05181ee77d57a06;
    local_4cc8 = 0x929654b1461b7377;
    uStack_4cc0 = 0xa5cea54bfef7110;
    local_4cb8 = 0xa70c9f7f916b7e19;
    uStack_4cb0 = 0x2b2d6d82aa402c0a;
    builtin_strncpy(local_4b88 + 0x20,"feature hooks initialized with {} unavailable",0x2e);
    local_4b88[0x4e] = '\0';
    local_4b88[0x4f] = '\0';
    uStack_4d10 = 0xffffffffffffffff;
    do {
      uVar22 = uStack_4d10;
      uStack_4d10 = uVar22 + 1;
    } while (local_4b88[uVar22 + 0x21] != '\0');
    local_4d18 = local_4b88 + 0x20;
    local_4858 = 0x2000000000000000;
    local_4d08 = (char *)0x1;
    puStack_4d00 = &local_4858;
    local_4a88 = 0;
    uStack_4a80 = 0xf;
    local_4a98._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar3[0xf] = 0;
    auVar3._0_15_ = local_4a98._1_15_;
    local_4a98 = auVar3 << 8;
    local_4cf8 = (char *)CONCAT44(local_4cf8._4_4_,1);
    lVar18 = uVar22 + 9;
    if (0xfffffffffffffff7 < uStack_4d10) {
      lVar18 = -1;
    }
    local_4850 = iVar21;
    FUN_1800f5540(local_4a98,lVar18);
    local_4cd8 = local_4d08;
    puStack_4cd0 = puStack_4d00;
    local_4d08 = local_4d18;
    puStack_4d00 = (undefined8 *)uStack_4d10;
    local_4d48 = (HMODULE)0x0;
    FUN_1801da050(&local_4d18,local_4a98,&local_4d08,&local_4cd8);
    puVar14 = local_4a98;
    if (uStack_4a80 < 0x10) {
LAB_18037d8ea:
      puVar13 = (undefined1 *)FUN_1803b0a60();
      uVar1 = *puVar13;
      puVar13 = (undefined1 *)FUN_1803b0a60();
      *puVar13 = 1;
      FUN_1800a9e50(1,puVar14);
      puVar14 = (undefined1 *)FUN_1803b0a60();
      *puVar14 = uVar1;
    }
    else {
      puVar14 = (undefined1 *)local_4a98._0_8_;
      if ((undefined1 *)local_4a98._0_8_ != (undefined1 *)0x0) goto LAB_18037d8ea;
    }
    FUN_18015c010(local_4a98);
  }
  FUN_18063ab10(local_3628,0,0x600);
  FUN_18015ad60(local_3628,0x600,0xffffffffffffffff,
                "forward_only_detours=removed local_scene_flags=engine_owned render_pose_probes=removed inactive_body_dispatch=bypassed interpolation_override=0"
               );
  local_4d48 = (HMODULE)&PTR_180700558;
  if (local_3628[0] != '\0') {
    local_4d48 = (HMODULE)&DAT_1806bcfc0;
  }
  local_4d40 = local_3628;
  FUN_1800f6900(1);
  if (((DAT_180c70020 == 0) || (DAT_180c70030 == 0)) || (uVar26 = 1, DAT_180c70078 == '\0')) {
    uVar26 = 0;
  }
  if (((DAT_180c6fde0 == 0) || (DAT_180c6fdf0 == 0)) || (uVar17 = 1, DAT_180c6fe38 == '\0')) {
    uVar17 = 0;
  }
  FUN_18063ab10(local_3028,0,0x600);
  local_4d40 = (char *)CONCAT44(local_4d40._4_4_,uVar26);
  local_4d48 = (HMODULE)CONCAT44(local_4d48._4_4_,uVar17);
  FUN_18015ad60(local_3028,0x600,0xffffffffffffffff,"decals=%d material_exposure=%d");
  local_4d48 = (HMODULE)&PTR_180700558;
  if (local_3028[0] != '\0') {
    local_4d48 = (HMODULE)&DAT_1806bcfc0;
  }
  local_4d40 = local_3028;
  uVar26 = 1;
  FUN_1800f6900(1);
  if ((DAT_180c70260 == 0) || (DAT_180c70270 == 0)) {
LAB_18037da7f:
    local_4ca8 = local_4ca8 & 0xffffffff00000000;
  }
  else {
    local_4ca8 = CONCAT44(local_4ca8._4_4_,1);
    if (DAT_180c702b8 == '\0') goto LAB_18037da7f;
  }
  if ((DAT_180c70440 == 0) || (DAT_180c70450 == 0)) {
LAB_18037daa7:
    local_4cf8 = (char *)((ulonglong)local_4cf8 & 0xffffffff00000000);
  }
  else {
    local_4cf8 = (char *)CONCAT44(local_4cf8._4_4_,1);
    if (DAT_180c70498 == '\0') goto LAB_18037daa7;
  }
  if (((DAT_180c706e0 == 0) || (DAT_180c706f0 == 0)) || (uVar17 = 1, DAT_180c70738 == '\0')) {
    uVar17 = 0;
  }
  if (((DAT_180c70560 == 0) || (DAT_180c70570 == 0)) || (uVar27 = 1, DAT_180c705b8 == '\0')) {
    uVar27 = 0;
  }
  if (((DAT_180c705c0 == 0) || (DAT_180c705d0 == 0)) || (DAT_180c70618 == '\0')) {
    uVar26 = 0;
  }
  FUN_18063ab10(local_2a28,0,0x600);
  local_4d28 = (undefined4)local_4ca8;
  local_4d30 = local_4cf8._0_4_;
  local_4d38 = (char *)CONCAT44(local_4d38._4_4_,uVar17);
  local_4d40 = (char *)CONCAT44(local_4d40._4_4_,uVar27);
  local_4d48 = (HMODULE)CONCAT44(local_4d48._4_4_,uVar26);
  FUN_18015ad60(local_2a28,0x600,0xffffffffffffffff,
                "sky=%d light=%d geometry=%d shader_float4=%d postprocess=%d tint_ownership=surface_classified restoration=per_draw"
               );
  local_4d48 = (HMODULE)&PTR_180700558;
  if (local_2a28[0] != '\0') {
    local_4d48 = (HMODULE)&DAT_1806bcfc0;
  }
  local_4d40 = local_2a28;
  FUN_1800f6900(1);
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  pcVar23 = DAT_1808da460;
  local_4d18 = DAT_180901bd0;
  if ((DAT_180901bd0 != DAT_1808da460) || (lVar18 = DAT_180c70b50, DAT_180c70b50 == 0)) {
    UVar9 = GetTickCount64();
    if ((local_4d18 == pcVar23) && (UVar9 < DAT_180c70b48)) {
      lVar18 = 0;
    }
    else {
      local_4d18 = &DAT_180901b80;
      iVar7 = FUN_1805f68d0(&DAT_180901b80);
      if (iVar7 != 0) goto LAB_18037e515;
      if (DAT_180901bcc == 0x7fffffff) {
        DAT_180901bcc = 0x7ffffffe;
        goto LAB_18037e50a;
      }
      if (DAT_180901bd0 == pcVar23) {
        if ((DAT_180c70b50 == 0) && (DAT_180c70b48 <= UVar9)) goto LAB_18037dc7d;
      }
      else {
        DAT_180901ab8 = 1000;
LAB_18037dc7d:
        uVar22 = 0xffffffffffffffff;
        do {
          puStack_4d00 = (undefined8 *)(uVar22 + 1);
          lVar18 = uVar22 + 1;
          uVar22 = (ulonglong)puStack_4d00;
        } while ("client.dll:BAFFFFFFFF488BCBE8????????84C00F84????????4584ED+D"[lVar18] != '\0');
        local_4d08 = "client.dll:BAFFFFFFFF488BCBE8????????84C00F84????????4584ED+D";
        local_4cf8 = "patterns::overhead_visibility_return";
        local_4cf0 = 0x24;
        DAT_180c70b50 = FUN_1800e5d20(&local_4cf8,&local_4d08);
        DAT_180901bd0 = pcVar23;
        DAT_180c70b48 = 0xffffffffffffffff;
        if (DAT_180c70b50 == 0) {
          DAT_180c70b48 = DAT_180901ab8 + UVar9;
          if (DAT_180901ab8 < 60000) {
            DAT_180901ab8 = DAT_180901ab8 * 2;
          }
          else {
            DAT_180901ab8 = 60000;
          }
        }
        else {
          DAT_180901ab8 = 1000;
        }
      }
      lVar18 = DAT_180c70b50;
      FUN_1805f68fc(&DAT_180901b80);
    }
  }
  if (((DAT_180c6ff60 == 0) || (DAT_180c6ff70 == 0)) || (uVar26 = 1, DAT_180c6ffb8 == '\0')) {
    uVar26 = 0;
  }
  if (((DAT_180c6ffc0 == 0) || (DAT_180c6ffd0 == 0)) || (uVar17 = 1, DAT_180c70018 == '\0')) {
    uVar17 = 0;
  }
  FUN_18063ab10(local_2428,0,0x600);
  local_4d38 = (char *)CONCAT44(local_4d38._4_4_,(uint)(lVar18 != 0));
  local_4d40 = (char *)CONCAT44(local_4d40._4_4_,uVar26);
  local_4d48 = (HMODULE)CONCAT44(local_4d48._4_4_,uVar17);
  FUN_18015ad60(local_2428,0x600,0xffffffffffffffff,
                "visibility=%d view_pawn=%d hud_reader=%d native_panels=1");
  local_4d48 = (HMODULE)&PTR_180700558;
  if (local_2428[0] != '\0') {
    local_4d48 = (HMODULE)&DAT_1806bcfc0;
  }
  local_4d40 = local_2428;
  FUN_1800f6900(1);
  local_47c8[0] = "frame_stage_notify";
  local_47c8[1] = (char *)&DAT_180c70a00;
  local_47c8[2] = "create_move";
  local_47c8[3] = (char *)&DAT_180c70860;
  local_47c8[4] = "handle_view_angles";
  local_47c8[5] = &DAT_180c70800;
  local_47c8[6] = "add_entity";
  local_47c8[7] = (char *)&DAT_180c70920;
  local_47c8[8] = "remove_entity";
  local_47c8[9] = (char *)&DAT_180c708c0;
  local_47c8[10] = "override_view";
  local_47c8[0xb] = &DAT_180c70200;
  local_47c8[0xc] = "level_initialization";
  local_47c8[0xd] = &DAT_180c6ff00;
  local_47c8[0xe] = "level_shutdown";
  local_47c8[0xf] = &DAT_180c6fea0;
  local_47c8[0x10] = "process_input_event";
  local_47c8[0x11] = &DAT_180c6fe40;
  local_47c8[0x12] = "set_relative_mouse_mode";
  local_47c8[0x13] = (char *)&DAT_180c70a70;
  bVar2 = true;
  ppcVar19 = local_47c8;
  do {
    plVar8 = (longlong *)ppcVar19[1];
    if (((*plVar8 == 0) || (plVar8[2] == 0)) || ((char)plVar8[0xb] == '\0')) {
      bVar2 = false;
      pcVar23 = *ppcVar19;
      FUN_18063ab10(local_1e28,0,0x600);
      local_4d48 = (HMODULE)pcVar23;
      FUN_18015ad60(local_1e28,0x600,0xffffffffffffffff,"hook=%s action=reject_runtime");
      local_4d48 = (HMODULE)&PTR_180700558;
      if (local_1e28[0] != '\0') {
        local_4d48 = (HMODULE)&DAT_1806bcfc0;
      }
      local_4d40 = local_1e28;
      FUN_1800f6900(3);
    }
    ppcVar19 = ppcVar19 + 2;
  } while (ppcVar19 != local_47c8 + 0x14);
  uVar22 = 1000;
  lVar18 = 0;
  if (!bVar2) {
    ppcVar19 = local_47c8 + 0x14;
    do {
      FUN_18044e4e0(*ppcVar19);
      ppcVar19 = ppcVar19 + 4;
    } while (ppcVar19 != local_4288);
    FUN_18044e4e0(&DAT_180c70ae0);
    FUN_18044e4e0(&DAT_180c70990);
  }
  FUN_18063ab10(local_1828,0,0x600);
  local_4d40 = (char *)CONCAT44(local_4d40._4_4_,iVar21);
  local_4d48 = (HMODULE)0xa;
  FUN_18015ad60(local_1828,0x600,0xffffffffffffffff,
                "required=%zu optional_unavailable=%u render_readiness=pending");
  local_4d48 = (HMODULE)&PTR_180700558;
  if (local_1828[0] != '\0') {
    local_4d48 = (HMODULE)&DAT_1806bcfc0;
  }
  local_4d40 = local_1828;
  FUN_1800f6900(1,local_4d40,"Initialization","CORE_HOOKS_VALIDATED");
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  pcVar10 = DAT_180901ab0;
  pcVar23 = DAT_1808da460;
  if ((DAT_180901ab0 == DAT_1808da460) && (lVar20 = DAT_180c70ad8, DAT_180c70ad8 != 0))
  goto LAB_18037e253;
  UVar9 = GetTickCount64();
  if ((pcVar10 == pcVar23) && (UVar9 < DAT_180c70ad0)) {
    lVar20 = 0;
    goto LAB_18037e253;
  }
  local_4d18 = &DAT_180901ad0;
  iVar21 = FUN_1805f68d0(&DAT_180901ad0);
  if (iVar21 != 0) {
LAB_18037e515:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180901b1c == 0x7fffffff) {
    DAT_180901b1c = 0x7ffffffe;
LAB_18037e50a:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_180901ab0 == pcVar23) {
    if ((DAT_180c70ad8 == 0) && (DAT_180c70ad0 <= UVar9)) goto LAB_18037e1a9;
  }
  else {
    DAT_180901ac0 = 1000;
LAB_18037e1a9:
    uVar24 = 0xffffffffffffffff;
    do {
      puStack_4d00 = (undefined8 *)(uVar24 + 1);
      lVar20 = uVar24 + 1;
      uVar24 = (ulonglong)puStack_4d00;
    } while ("client.dll:488B01488D5424204C8BF1FF9070050000+11"[lVar20] != '\0');
    local_4d08 = "client.dll:488B01488D5424204C8BF1FF9070050000+11";
    local_4cf8 = "patterns::pawn_eye_update_return";
    local_4cf0 = 0x20;
    DAT_180c70ad8 = FUN_1800e5d20(&local_4cf8,&local_4d08);
    DAT_180901ab0 = pcVar23;
    DAT_180c70ad0 = 0xffffffffffffffff;
    if (DAT_180c70ad8 == 0) {
      DAT_180c70ad0 = UVar9 + DAT_180901ac0;
      uVar22 = DAT_180901ac0 * 2;
      if (59999 < DAT_180901ac0) {
        uVar22 = 60000;
      }
    }
    DAT_180901ac0 = uVar22;
  }
  lVar20 = DAT_180c70ad8;
  FUN_1805f68fc(&DAT_180901ad0);
LAB_18037e253:
  lVar5 = DAT_180c707a0;
  if ((DAT_180c707a0 == 0) || (uVar26 = 1, DAT_180c707b0 == 0)) {
    uVar26 = 0;
  }
  if ((DAT_180c707a0 != 0) && (DAT_180c707b0 != 0)) {
    local_4ca0 = 1;
  }
  FUN_18063ab10(local_1228,0,0x600);
  local_4d40 = (char *)lVar5;
  local_4d48 = (HMODULE)CONCAT44(local_4d48._4_4_,uVar26);
  local_4d38 = (char *)lVar20;
  FUN_18015ad60(local_1228,0x600,0xffffffffffffffff,
                "active=%d getter=0x%llx eye_update_return=0x%llx source=serialized_command");
  local_4d48 = (HMODULE)&PTR_180700558;
  if (local_1228[0] != '\0') {
    local_4d48 = (HMODULE)&DAT_1806bcfc0;
  }
  local_4d40 = local_1228;
  FUN_1800f6900(local_4ca0);
  lVar5 = DAT_180c70920;
  lVar20 = DAT_180c708c0;
  if ((((DAT_180c70920 == 0) || (DAT_180c70930 == 0)) || (DAT_180c708c0 == 0)) ||
     (pcVar23 = "initial_only", DAT_180c708d0 == 0)) {
    pcVar23 = "periodic";
  }
  if (((DAT_180c70920 != 0) && (DAT_180c70930 != 0)) &&
     ((DAT_180c708c0 != 0 && (DAT_180c708d0 != 0)))) {
    local_4ce8 = (char *)CONCAT44(local_4ce8._4_4_,1);
  }
  FUN_18063ab10(local_c28,0,0x600);
  local_4d40 = (char *)lVar20;
  local_4d48 = (HMODULE)lVar5;
  local_4d38 = pcVar23;
  FUN_18015ad60(local_c28,0x600,0xffffffffffffffff,"add=0x%llx remove=0x%llx reconciliation=%s");
  local_4d48 = (HMODULE)&PTR_180700558;
  if (local_c28[0] != '\0') {
    local_4d48 = (HMODULE)&DAT_1806bcfc0;
  }
  local_4d40 = local_c28;
  FUN_1800f6900((ulonglong)local_4ce8 & 0xffffffff);
  local_4848 = (undefined1  [16])0x0;
  local_4838 = (undefined1  [16])0x0;
  FUN_18015ba30(local_4848,"scenesystem.dll",0xf);
  lpModuleName = local_4848;
  if (0xf < (ulonglong)local_4838._8_8_) {
    lpModuleName = (LPCSTR)local_4848._0_8_;
  }
  pHVar15 = GetModuleHandleA(lpModuleName);
  thunk_FUN_18015c010(local_4848);
  FUN_180219d30();
  pHVar4 = DAT_180c70380;
  if ((pHVar15 != (HMODULE)0x0) && (pHVar15 <= DAT_180c70380)) {
    lVar18 = (longlong)DAT_180c70380 - (longlong)pHVar15;
  }
  FUN_18063ab10(local_628,0,0x600);
  local_4d48 = pHVar4;
  local_4d40 = (char *)lVar18;
  FUN_18015ad60(local_628,0x600,0xffffffffffffffff,
                "animatable=0x%llx animatable_rva=0x%llx route=entity_events");
  if (local_628[0] != '\0') {
    ppuVar25 = (undefined **)&DAT_1806bcfc0;
  }
  local_4d40 = local_628;
  local_4d48 = (HMODULE)ppuVar25;
  FUN_1800f6900(1);
}



