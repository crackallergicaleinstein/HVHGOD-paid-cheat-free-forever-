// FUN_18044a8e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044a8e0 */

undefined8 FUN_18044a8e0(void)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  longlong lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  byte bVar7;
  ulonglong uVar8;
  char **ppcVar9;
  ulonglong uVar10;
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
  undefined8 uVar11;
  undefined8 extraout_XMM0_Qa_17;
  undefined8 extraout_XMM0_Qa_18;
  undefined8 extraout_XMM0_Qa_19;
  undefined8 extraout_XMM0_Qa_20;
  undefined8 uVar12;
  ulonglong uVar13;
  char *pcVar14;
  undefined8 *puVar15;
  char *pcVar16;
  undefined1 local_res10 [8];
  char *local_498;
  undefined8 uStack_490;
  char *local_488;
  char *pcStack_480;
  char local_478 [16];
  char *pcStack_468;
  char *apcStack_460 [3];
  undefined1 local_448 [16];
  undefined8 uStack_438;
  ulonglong uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  char *local_418;
  undefined8 uStack_410;
  longlong local_408;
  char *local_400;
  undefined8 local_3f8;
  longlong local_3f0;
  char *local_3e8;
  undefined8 local_3e0;
  longlong local_3d8;
  char *local_3d0;
  undefined8 local_3c8;
  longlong local_3c0;
  char *local_3b8;
  undefined8 local_3b0;
  longlong local_3a8;
  char *local_3a0;
  undefined8 local_398;
  longlong local_390;
  char *local_388;
  undefined8 local_380;
  longlong local_378;
  char *local_370;
  undefined8 local_368;
  longlong local_360;
  undefined *local_358;
  undefined8 local_350;
  longlong local_348;
  char *local_340;
  undefined8 local_338;
  longlong local_330;
  char *local_328;
  undefined8 local_320;
  longlong local_318;
  char *local_310;
  undefined8 local_308;
  longlong local_300;
  char *local_2f8;
  undefined8 local_2f0;
  longlong local_2e8;
  char *local_2e0;
  undefined8 local_2d8;
  longlong local_2d0;
  char *local_2c8;
  undefined8 local_2c0;
  longlong local_2b8;
  char *local_2b0;
  char *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  char *local_290;
  undefined8 local_288;
  undefined8 local_280;
  char *local_278;
  undefined8 local_270;
  undefined8 local_268;
  char *local_260;
  undefined8 local_258;
  undefined8 local_250;
  char *local_248;
  undefined8 local_240;
  undefined8 local_238;
  char *local_230;
  undefined8 local_228;
  undefined8 local_220;
  char *local_218;
  undefined8 local_210;
  undefined8 local_208;
  char *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  char *local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  char *local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  char *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  char *local_188;
  undefined8 local_180;
  undefined8 local_178;
  char *local_170;
  undefined8 local_168;
  undefined8 local_160;
  char *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined8 local_130;
  char *local_128;
  undefined8 local_120;
  undefined8 local_118;
  char *local_110;
  undefined8 local_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  char *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68 [6];
  
  lVar3 = DAT_180c7dda8;
  if (DAT_180c7dda8 == 0) {
    local_498 = "Source2Client002";
    uStack_490 = 0x10;
    lVar3 = FUN_180451e10(&local_498);
    if (lVar3 != 0) {
      DAT_180c7dda8 = lVar3;
    }
  }
  lVar4 = DAT_180c7ddb8;
  DAT_180c7dd38 = lVar3;
  if (DAT_180c7ddb8 == 0) {
    local_498 = "PanoramaUIEngine001";
    uStack_490 = 0x13;
    lVar4 = FUN_180451e10(&local_498);
    if (lVar4 != 0) {
      DAT_180c7ddb8 = lVar4;
    }
  }
  lVar3 = DAT_180c7ddb0;
  DAT_180bb83c0 = lVar4;
  if (DAT_180c7ddb0 == 0) {
    local_498 = "Source2EngineToClient001";
    uStack_490 = 0x18;
    lVar3 = FUN_180451e10(&local_498);
    if (lVar3 != 0) {
      DAT_180c7ddb0 = lVar3;
    }
  }
  lVar4 = DAT_180c7ddc8;
  DAT_180c64938 = lVar3;
  if (DAT_180c7ddc8 == 0) {
    local_498 = "SceneSystem_002";
    uStack_490 = 0xf;
    lVar4 = FUN_180451e10(&local_498);
    if (lVar4 != 0) {
      DAT_180c7ddc8 = lVar4;
    }
  }
  lVar3 = DAT_180c7ddc0;
  DAT_180c65518 = lVar4;
  if (DAT_180c7ddc0 == 0) {
    local_498 = "VMaterialSystem2_001";
    uStack_490 = 0x14;
    lVar3 = FUN_180451e10(&local_498);
    if (lVar3 != 0) {
      DAT_180c7ddc0 = lVar3;
    }
  }
  lVar4 = DAT_180c7dd70;
  DAT_180c7dd50 = lVar3;
  if (DAT_180c7dd70 == 0) {
    local_498 = "SchemaSystem_001";
    uStack_490 = 0x10;
    lVar4 = FUN_180451e10(&local_498);
    if (lVar4 != 0) {
      DAT_180c7dd70 = lVar4;
    }
  }
  lVar3 = DAT_180c7dd68;
  DAT_180c7d7b0 = lVar4;
  if (DAT_180c7dd68 == 0) {
    local_498 = "InputSystemVersion001";
    uStack_490 = 0x15;
    lVar3 = FUN_180451e10(&local_498);
    if (lVar3 != 0) {
      DAT_180c7dd68 = lVar3;
    }
  }
  lVar4 = DAT_180c7dd80;
  DAT_180c70a60 = lVar3;
  if (DAT_180c7dd80 == 0) {
    local_498 = "ParticleSystemMgr003";
    uStack_490 = 0x14;
    lVar4 = FUN_180451e10(&local_498);
    if (lVar4 != 0) {
      DAT_180c7dd80 = lVar4;
    }
  }
  lVar3 = DAT_180c7dd78;
  DAT_180c7dd48 = lVar4;
  if (DAT_180c7dd78 == 0) {
    local_498 = "VEngineCvar007";
    uStack_490 = 0xe;
    lVar3 = FUN_180451e10(&local_498);
    if (lVar3 != 0) {
      DAT_180c7dd78 = lVar3;
    }
  }
  lVar4 = DAT_180c7dd90;
  DAT_180c64058 = lVar3;
  if (DAT_180c7dd90 == 0) {
    local_498 = "Source2ClientPrediction001";
    uStack_490 = 0x1a;
    lVar4 = FUN_180451e10(&local_498);
    if (lVar4 != 0) {
      DAT_180c7dd90 = lVar4;
    }
  }
  lVar3 = DAT_180c7dd88;
  DAT_180c7ca78 = lVar4;
  if (DAT_180c7dd88 == 0) {
    local_498 = "NetworkClientService_001";
    uStack_490 = 0x18;
    lVar3 = FUN_180451e10(&local_498);
    if (lVar3 != 0) {
      DAT_180c7dd88 = lVar3;
    }
  }
  lVar4 = DAT_180c7dda0;
  DAT_180c64e50 = lVar3;
  if (DAT_180c7dda0 == 0) {
    local_498 = "ResourceSystem013";
    uStack_490 = 0x11;
    lVar4 = FUN_180451e10(&local_498);
    if (lVar4 != 0) {
      DAT_180c7dda0 = lVar4;
    }
  }
  lVar3 = DAT_180c7dd98;
  DAT_180c631f8 = lVar4;
  if (DAT_180c7dd98 == 0) {
    local_498 = "Localize_001";
    uStack_490 = 0xc;
    lVar3 = FUN_180451e10(&local_498);
    if (lVar3 != 0) {
      DAT_180c7dd98 = lVar3;
    }
  }
  lVar4 = DAT_180c7dd30;
  DAT_180c63930 = lVar3;
  if (DAT_180c7dd30 == 0) {
    local_498 = "MeshSystem001";
    uStack_490 = 0xd;
    lVar4 = FUN_180451e10(&local_498);
    if (lVar4 != 0) {
      DAT_180c7dd30 = lVar4;
    }
  }
  lVar3 = DAT_180c7dd28;
  DAT_180c65540 = lVar4;
  if (DAT_180c7dd28 == 0) {
    local_498 = "VFileSystem017";
    uStack_490 = 0xe;
    lVar3 = FUN_180451e10(&local_498);
    if (lVar3 != 0) {
      DAT_180c7dd28 = lVar3;
    }
  }
  DAT_180c63228 = lVar3;
  DAT_180c71f90 = FUN_18044b990();
  DAT_180c71e90 =
       FUN_18044b990(extraout_XMM0_Qa,"entity_list","patterns::entity_list",&DAT_1808269d8);
  DAT_180c72060 =
       FUN_18044b990(extraout_XMM0_Qa_00,"local_player_controller",
                     "patterns::local_player_controller",&DAT_180825af0);
  DAT_180bb8958 =
       FUN_18044b990(extraout_XMM0_Qa_01,"global_vars","patterns::global_vars",&DAT_180825fc8);
  DAT_180c7d880 =
       FUN_18044b990(extraout_XMM0_Qa_02,"view_matrix","patterns::view_matrix",&DAT_180824be8);
  DAT_180bb88d0 =
       FUN_18044b990(extraout_XMM0_Qa_03,"game_rules","patterns::game_rules",&DAT_180826608);
  DAT_180c6fa00 =
       FUN_18044b990(extraout_XMM0_Qa_04,"light_data_queue","patterns::light_data_queue",
                     &DAT_180825c90);
  DAT_180c64430 =
       FUN_18044b990(extraout_XMM0_Qa_05,"particle_manager","patterns::particle_manager",
                     &DAT_1808258e8);
  DAT_180c71ea8 =
       FUN_18044b990(extraout_XMM0_Qa_06,"game_event_manager","patterns::game_event_manager",
                     &DAT_1808265f8);
  DAT_180c64060 =
       FUN_18044b990(extraout_XMM0_Qa_07,"game_trace_manager","patterns::game_trace_manager",
                     &DAT_1808264b0);
  DAT_180c65530 =
       FUN_18044b990(extraout_XMM0_Qa_08,"render_game_system_storage",
                     "patterns::render_game_system_storage",&DAT_180825258);
  DAT_180c7dd60 =
       FUN_18044b990(extraout_XMM0_Qa_09,"material_manager","patterns::material_manager",
                     &DAT_180825bf0);
  DAT_180c70e08 =
       FUN_18044b990(extraout_XMM0_Qa_10,"game_entity_system","patterns::game_entity_system",
                     &DAT_180826778);
  DAT_180c64b18 =
       FUN_18044b990(extraout_XMM0_Qa_11,"weapon_recoil_data","patterns::weapon_recoil_data",
                     &DAT_180824a98);
  DAT_180c6e8e8 = FUN_18044b990(extraout_XMM0_Qa_12,&DAT_18081ed18,"patterns::hud",&DAT_180825f70);
  DAT_180c7ca58 =
       FUN_18044b990(extraout_XMM0_Qa_13,"prediction_seed","patterns::prediction_seed",
                     &DAT_180825770);
  DAT_180c7ca50 =
       FUN_18044b990(extraout_XMM0_Qa_14,"simulation_player","patterns::simulation_player",
                     &DAT_180824df8);
  DAT_180c7ca68 =
       FUN_18044b990(extraout_XMM0_Qa_15,"prediction_player","patterns::prediction_player",
                     &DAT_1808258d8);
  uVar11 = extraout_XMM0_Qa_16;
  if (DAT_180c7ca68 == 0) {
    local_498 = 
    "[globals] prediction_player: optional legacy slot unavailable; simulation_player path active";
    uStack_490 = 0x5c;
    uVar11 = FUN_18020e620(&local_498);
  }
  DAT_180c7dd58 = FUN_18044b990(uVar11,"planted_c4","patterns::planted_c4",&DAT_1808257e0);
  DAT_180c63938 =
       FUN_18044b990(extraout_XMM0_Qa_17,"item_system","patterns::item_system",&DAT_180825ec8);
  DAT_180c64e48 =
       FUN_18044b990(extraout_XMM0_Qa_18,"frame_input_ring_idx","patterns::frame_input_ring_idx",
                     &DAT_1808268c0);
  DAT_180c64e58 =
       FUN_18044b990(extraout_XMM0_Qa_19,"frame_input_ring_base","patterns::frame_input_ring_base",
                     &DAT_1808268b0);
  DAT_180c717c8 =
       FUN_18044b990(extraout_XMM0_Qa_20,"prediction_state","patterns::prediction_state",
                     &DAT_180825608);
  if (DAT_180c7dd40 == (undefined8 *)0x0) {
    local_498 = "tier0.dll:g_pMemAlloc";
    uStack_490 = 0x15;
    DAT_180c7dd40 = (undefined8 *)FUN_180451750(&local_498);
    if (DAT_180c7dd40 == (undefined8 *)0x0) goto LAB_18044b01a;
  }
  DAT_180c7dd20 = *DAT_180c7dd40;
LAB_18044b01a:
  local_418 = "source2client";
  uStack_410 = 0xd;
  local_408 = DAT_180c7dd38;
  local_400 = "panorama";
  local_3f8 = 8;
  local_3f0 = DAT_180bb83c0;
  local_3e8 = "source2engine_to_client";
  local_3e0 = 0x17;
  local_3d8 = DAT_180c64938;
  local_3d0 = "scene_system";
  local_3c8 = 0xc;
  local_3c0 = DAT_180c65518;
  local_3b8 = "material_system";
  local_3b0 = 0xf;
  local_3a8 = DAT_180c7dd50;
  local_3a0 = "schema_system";
  local_398 = 0xd;
  local_390 = DAT_180c7d7b0;
  local_388 = "input_system";
  local_380 = 0xc;
  local_378 = DAT_180c70a60;
  local_370 = "particle_system_mgr";
  local_368 = 0x13;
  local_360 = DAT_180c7dd48;
  local_358 = &DAT_18082775c;
  local_350 = 4;
  local_348 = DAT_180c64058;
  local_340 = "source2client_prediction";
  local_338 = 0x18;
  local_330 = DAT_180c7ca78;
  local_328 = "network_client_service";
  local_320 = 0x16;
  local_318 = DAT_180c64e50;
  local_310 = "resource_system";
  local_308 = 0xf;
  local_300 = DAT_180c631f8;
  local_2f8 = "localize";
  local_2f0 = 8;
  local_2e8 = DAT_180c63930;
  local_2e0 = "mesh_system";
  local_2d8 = 0xb;
  local_2d0 = DAT_180c65540;
  local_2c8 = "file_system";
  local_2c0 = 0xb;
  local_2b8 = DAT_180c63228;
  ppcVar9 = &local_418;
  local_498 = "[interfaces] {}: {:#x}";
  uStack_490 = 0x16;
  local_488 = (char *)0x2;
  pcVar16 = local_478;
  pcVar14 = "[interfaces] {}: {:#x}";
  uVar11 = 0x16;
  puVar15 = (undefined8 *)0x2;
  uVar12 = 0;
  uVar13 = 0xf;
  pcStack_480 = pcVar16;
  do {
    pcStack_468 = *ppcVar9;
    apcStack_460[0] = ppcVar9[1];
    local_478[0] = '\0';
    local_478[1] = '\0';
    local_478[2] = '\0';
    local_478[3] = '\0';
    local_478[4] = '\0';
    local_478[5] = '\0';
    local_478[6] = '\0';
    local_478[7] = -0x40;
    apcStack_460[1] = ppcVar9[2];
    local_478[8] = '\x10';
    local_478[9] = '\0';
    local_478[10] = '\0';
    local_478[0xb] = '\0';
    local_478[0xc] = '\0';
    local_478[0xd] = '\0';
    local_478[0xe] = '\0';
    local_478[0xf] = '@';
    uStack_438 = uVar12;
    uStack_430 = uVar13;
    local_448._1_15_ = SUB1615((undefined1  [16])0x0,1);
    auVar2[0xf] = 0;
    auVar2._0_15_ = local_448._1_15_;
    local_448 = auVar2 << 8;
    uVar8 = 0;
    uVar10 = 0;
    do {
      bVar7 = (byte)((ulonglong)apcStack_460[uVar10 - 3] >> 0x3c);
      if (bVar7 == 0xc) {
        uVar8 = uVar8 + *(longlong *)
                         ((longlong)apcStack_460 +
                         ((ulonglong)apcStack_460[uVar10 - 3] & 0xfffffffffffffff));
      }
      else if (bVar7 == 0xb) {
        uVar8 = uVar8 + 0x20;
      }
      else {
        uVar8 = uVar8 + 8;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 2);
    lVar3 = uVar8 + 0x16;
    if (0xffffffffffffffe9 < uVar8) {
      lVar3 = -1;
    }
    FUN_1800f5540(local_448,lVar3);
    local_498 = pcVar14;
    uStack_490 = uVar11;
    local_488 = (char *)puVar15;
    pcStack_480 = pcVar16;
    FUN_1801da050(local_res10,local_448,&local_498,&local_488,0);
    puVar6 = local_448;
    if ((uStack_430 < 0x10) ||
       (puVar6 = (undefined1 *)local_448._0_8_, (undefined1 *)local_448._0_8_ != (undefined1 *)0x0))
    {
      puVar5 = (undefined1 *)FUN_1803b0a60();
      uVar1 = *puVar5;
      puVar5 = (undefined1 *)FUN_1803b0a60();
      *puVar5 = 1;
      FUN_1800a9e50(1,puVar6);
      puVar6 = (undefined1 *)FUN_1803b0a60();
      *puVar6 = uVar1;
    }
    FUN_18015c010(local_448);
    ppcVar9 = ppcVar9 + 3;
  } while (ppcVar9 != &local_2b0);
  local_2a8 = "csgo_input";
  local_2a0 = 10;
  local_298 = DAT_180c71f90;
  local_290 = "entity_list";
  local_288 = 0xb;
  local_280 = DAT_180c71e90;
  local_278 = "local_player_controller";
  local_270 = 0x17;
  local_268 = DAT_180c72060;
  local_260 = "global_vars";
  local_258 = 0xb;
  local_250 = DAT_180bb8958;
  local_248 = "view_matrix";
  local_240 = 0xb;
  local_238 = DAT_180c7d880;
  local_230 = "game_rules";
  local_228 = 10;
  local_220 = DAT_180bb88d0;
  local_218 = "light_data_queue";
  local_210 = 0x10;
  local_208 = DAT_180c6fa00;
  local_200 = "particle_manager";
  local_1f8 = 0x10;
  local_1f0 = DAT_180c64430;
  local_1e8 = "game_event_manager";
  local_1e0 = 0x12;
  local_1d8 = DAT_180c71ea8;
  local_1d0 = "game_trace_manager";
  local_1c8 = 0x12;
  local_1c0 = DAT_180c64060;
  local_1b8 = "render_game_system_storage";
  local_1b0 = 0x1a;
  local_1a8 = DAT_180c65530;
  local_1a0 = "mem_alloc";
  local_198 = 9;
  local_190 = DAT_180c7dd20;
  local_188 = "material_manager";
  local_180 = 0x10;
  local_178 = DAT_180c7dd60;
  local_170 = "game_entity_system";
  local_168 = 0x12;
  local_160 = DAT_180c70e08;
  local_158 = "weapon_recoil_data";
  local_150 = 0x12;
  local_148 = DAT_180c64b18;
  local_140 = &DAT_18081ed18;
  local_138 = 3;
  local_130 = DAT_180c6e8e8;
  local_128 = "prediction_seed";
  local_120 = 0xf;
  local_118 = DAT_180c7ca58;
  local_110 = "simulation_player";
  local_108 = 0x11;
  local_100 = DAT_180c7ca50;
  local_f8 = "planted_c4";
  local_f0 = 10;
  local_e8 = DAT_180c7dd58;
  local_e0 = "item_system";
  local_d8 = 0xb;
  local_d0 = DAT_180c63938;
  local_c8 = "network_client_service";
  local_c0 = 0x16;
  local_b8 = DAT_180c64e50;
  local_b0 = "frame_input_ring_idx";
  local_a8 = 0x14;
  local_a0 = DAT_180c64e48;
  local_98 = "frame_input_ring_base";
  local_90 = 0x15;
  local_88 = DAT_180c64e58;
  local_80 = "prediction_state";
  local_78 = 0x10;
  local_70 = DAT_180c717c8;
  uVar11 = 1;
  ppcVar9 = &local_2a8;
  do {
    if (ppcVar9[2] == (char *)0x0) {
      local_448._8_8_ = 0xa05181ee77d57a06;
      local_448._0_8_ = 0xdb35e39b27e1c185;
      uStack_438 = 0x929654b1461b7377;
      uStack_430 = 0xa5cea54bfef7110;
      local_428 = 0xa70c9f7f916b7e19;
      uStack_420 = 0x2b2d6d82aa402c0a;
      builtin_strncpy(local_478,"[error] global a",0x10);
      pcStack_468 = (char *)0x6e20737365726464;
      apcStack_460[0] = (char *)0x6974696e6920746f;
      apcStack_460[1] = (char *)0x7c2064657a696c61;
      apcStack_460[2] = (char *)0x7d7b20;
      lVar3 = -1;
      do {
        pcStack_480 = (char *)(lVar3 + 1);
        lVar4 = lVar3 + -0x17;
        lVar3 = (longlong)pcStack_480;
      } while (*(char *)((longlong)apcStack_460 + lVar4) != '\0');
      local_488 = local_478;
      FUN_18044bc10(&local_488,ppcVar9);
      uVar11 = 0;
    }
    ppcVar9 = ppcVar9 + 3;
  } while (ppcVar9 != local_68);
  return uVar11;
}



