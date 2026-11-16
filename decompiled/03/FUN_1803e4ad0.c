// FUN_1803e4ad0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e4ad0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803e4ad0(void)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  int iVar13;
  int *piVar14;
  char **ppcVar15;
  int iVar16;
  longlong *plVar17;
  undefined8 uVar18;
  undefined1 auStack_848 [32];
  undefined **local_828;
  char *local_820;
  longlong local_818;
  longlong local_810;
  undefined8 local_808;
  char *local_7f8;
  char **ppcStack_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  char *local_7d8;
  char **ppcStack_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  longlong local_7b8;
  longlong local_7b0;
  longlong local_7a8;
  longlong local_7a0;
  longlong local_798;
  longlong local_790;
  longlong local_788;
  longlong local_780;
  longlong local_778;
  longlong local_770;
  char *local_768;
  undefined8 uStack_760;
  int local_758;
  int local_754;
  longlong local_748;
  int local_740 [2];
  char *local_738;
  undefined4 local_730;
  char *local_728;
  undefined4 local_720;
  char *local_718;
  int local_710 [2];
  char *local_708 [4];
  char *local_6e8;
  char *local_6e0;
  char *local_6d8;
  char *local_6d0;
  char *local_6c8;
  char *local_6c0;
  char *local_6b8;
  undefined1 local_6a8 [16];
  undefined1 auStack_698 [16];
  undefined8 local_688;
  undefined8 uStack_680;
  undefined1 local_678 [16];
  undefined1 auStack_668 [16];
  undefined8 local_658;
  undefined8 uStack_650;
  char local_648 [1536];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_848;
  DAT_180bb8ac0 = FUN_1803e3c20();
  DAT_180bb8ac8 =
       FUN_1803e7050("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d} format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n        {\n            shader = \"csgo_unlitgeneric.vfx\"\n            F_BLEND_MODE = 0\n            F_TRANSLUCENT = 0\n            F_ALPHA_TEST = 0\n            F_PAINT_VERTEX_COLORS = 1\n            F_DISABLE_Z_BUFFERING = 0\n            F_DISABLE_Z_PREPASS = 1\n            g_vColorTint = [0.0, 0.0, 0.0]\n            g_tColor = resource:\"materials/hvhgod/character_matte_v3.vtex\"\n        }"
                     ,"materials/hvhgod/preview_coverage_clear.vmat");
  uVar12 = (uint)DAT_180bb8ac0;
  FUN_18063ab10(local_648,0,0x600);
  local_828 = (undefined **)CONCAT44(local_828._4_4_,uVar12);
  FUN_18015ad60(local_648,0x600,0xffffffffffffffff,
                "mounted=%d rgba8888=1 metalness=G cloth=B rim=A authored_rim=0");
  local_828 = &PTR_180700558;
  if (local_648[0] != '\0') {
    local_828 = (undefined **)&DAT_1806bcfc0;
  }
  local_820 = local_648;
  FUN_1800f6900(2 - (uint)(uVar12 != 0),local_820,"Materials","CHARACTER_SURFACE_MASKS");
  local_658 = 0xa70c9f7f916b7e19;
  local_818 = 0x2b2d6d82aa402c0a;
  uStack_650 = 0x2b2d6d82aa402c0a;
  local_6a8._0_8_ = 0x6c6169726574616d;
  local_6a8._8_8_ = 0x696c2f7665642f73;
  auStack_698._0_8_ = 0x6e67695f64697571;
  auStack_698._8_8_ = 0x616d762e7a65726f;
  local_688 = 0x74;
  uStack_680 = 0;
  local_678 = (undefined1  [16])0x0;
  auStack_668 = (undefined1  [16])0x0;
  lVar8 = -1;
  do {
    lVar3 = lVar8 + 1;
    lVar8 = lVar8 + 1;
  } while ("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_RENDER_BACKFACES = 1\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_DISABLE_Z_BUFFERING = 1\n                F_DISABLE_Z_WRITE = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 0.8\n                g_flColorBoost = 1.5\n                g_flFresnelExponent = 1.8\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 0.8\n                g_flFresnelMax = 1.2\n                g_vTexCoordScrollSpeed = [0.01, 0.005]\n                g_vMask1PanSpeed = [0.05, 0.03]\n                g_vMask1Scale = [1.0, 1.0]\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/dev/water_waves.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
           [lVar3] != '\0');
  FUN_18015ba30(local_678);
  puVar10 = local_678;
  if (0xf < (ulonglong)auStack_668._8_8_) {
    puVar10 = (undefined1 *)local_678._0_8_;
  }
  local_798 = FUN_1803e7050(puVar10,local_6a8);
  FUN_18015c010(local_678);
  local_6a8._0_8_ = (undefined1 *)0xdb35e39b27e1c185;
  local_6a8._8_8_ = 0xa05181ee77d57a06;
  auStack_698._0_8_ = 0x929654b1461b7377;
  auStack_698._8_8_ = 0xa5cea54bfef7110;
  local_688 = 0xa70c9f7f916b7e19;
  local_818 = 0x2b2d6d82aa402c0a;
  uStack_680 = 0x2b2d6d82aa402c0a;
  local_678._0_8_ = 0x6c6169726574616d;
  local_678._8_8_ = 0x616d2f7665642f73;
  auStack_668._0_8_ = 0x6f6e67695f657474;
  auStack_668._8_8_ = 0x74616d762e7a6572;
  local_658 = 0;
  uStack_650 = 0;
  FUN_1803e4430(local_6a8,
                "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_RENDER_BACKFACES = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DISABLE_Z_WRITE = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 1.0\n                g_flColorBoost = 0.38\n                g_flFresnelExponent = 1.00\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.00\n                g_flFresnelMax = 1.0\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
                ,1);
  puVar10 = local_6a8;
  if (0xf < (ulonglong)auStack_698._8_8_) {
    puVar10 = (undefined1 *)local_6a8._0_8_;
  }
  local_790 = FUN_1803e7050(puVar10,local_678);
  FUN_18015c010(local_6a8);
  local_6a8._0_8_ = (undefined1 *)0xdb35e39b27e1c185;
  local_6a8._8_8_ = 0xa05181ee77d57a06;
  local_818 = 0xa5cea54bfef7110;
  auStack_698._0_8_ = 0x929654b1461b7377;
  auStack_698._8_8_ = 0xa5cea54bfef7110;
  local_7d8 = (char *)0x6c6169726574616d;
  ppcStack_7d0 = (char **)0x6c662f7665642f73;
  local_7c8 = 0x726f6e67695f7461;
  uStack_7c0 = 0x74616d762e7a65;
  FUN_1803e4430(local_6a8,
                "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n\n                F_RENDER_BACKFACES = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DISABLE_Z_WRITE = 1\n                F_ADDITIVE_BLEND = 0\n                F_DO_NOT_CAST_SHADOWS = 1\n                F_PAINT_VERTEX_COLORS = 1\n                F_TRANSLUCENT = 1\n                F_BLEND_MODE = 1\n\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flColorBoost = 1.0\n                g_flOpacityScale = 1.0\n                g_flFresnelExponent = 1.0\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.0\n                g_flFresnelMax = 1.0\n\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
                ,1);
  puVar10 = local_6a8;
  if (0xf < (ulonglong)auStack_698._8_8_) {
    puVar10 = (undefined1 *)local_6a8._0_8_;
  }
  local_788 = FUN_1803e7050(puVar10,&local_7d8);
  FUN_18015c010(local_6a8);
  local_6a8._0_8_ = (undefined1 *)0xdb35e39b27e1c185;
  local_6a8._8_8_ = 0xa05181ee77d57a06;
  auStack_698._0_8_ = 0x929654b1461b7377;
  auStack_698._8_8_ = 0xa5cea54bfef7110;
  local_688 = 0xa70c9f7f916b7e19;
  local_818 = 0x2b2d6d82aa402c0a;
  uStack_680 = 0x2b2d6d82aa402c0a;
  local_678._0_8_ = 0x6c6169726574616d;
  local_678._8_8_ = 0x6c622f7665642f73;
  auStack_668._0_8_ = 0x6f6e67695f6d6f6f;
  auStack_668._8_8_ = 0x74616d762e7a6572;
  local_658 = 0;
  uStack_650 = 0;
  FUN_1803e4430(local_6a8,
                "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_ALPHA_TEST = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                F_DISABLE_Z_WRITE = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flColorBoost = 0.68\n                g_flOpacityScale = 1.0\n                g_flFresnelExponent = 2.0\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.0\n                g_flFresnelMax = 1.0\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
                ,1);
  puVar10 = local_6a8;
  if (0xf < (ulonglong)auStack_698._8_8_) {
    puVar10 = (undefined1 *)local_6a8._0_8_;
  }
  local_780 = FUN_1803e7050(puVar10,local_678);
  FUN_18015c010(local_6a8);
  local_658 = 0xa70c9f7f916b7e19;
  local_818 = 0x2b2d6d82aa402c0a;
  uStack_650 = 0x2b2d6d82aa402c0a;
  local_6a8._0_8_ = 0x6c6169726574616d;
  local_6a8._8_8_ = 0x756f2f7665642f73;
  auStack_698._0_8_ = 0x695f73656e696c74;
  auStack_698._8_8_ = 0x762e7a65726f6e67;
  local_688 = 0x74616d;
  uStack_680 = 0;
  local_678 = (undefined1  [16])0x0;
  auStack_668 = (undefined1  [16])0x0;
  lVar8 = -1;
  do {
    lVar3 = lVar8 + 1;
    lVar8 = lVar8 + 1;
  } while ("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n\n                F_ADDITIVE_BLEND = 1\n                F_BLEND_MODE = 1\n                F_TRANSLUCENT = 1\n                F_DISABLE_Z_BUFFERING = 1\n                F_DISABLE_Z_WRITE = 1\n\n                g_vColorTint = [1.0, 1.0, 1.0, 0.0]\n                g_flOpacityScale = 0.45\n                g_flFresnelExponent = 0.75\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMax = 0.0\n                g_flFresnelMin = 1.0\n\t\t\t\tg_flColorBoost = 2.25\n                g_flToolsVisCubemapReflectionRoughness = 1.0\n                g_flBeginMixingRoughness = 1.0\n\n                g_tColor = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n                g_tSceneDepth = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n            }"
           [lVar3] != '\0');
  FUN_18015ba30(local_678);
  puVar10 = local_678;
  if (0xf < (ulonglong)auStack_668._8_8_) {
    puVar10 = (undefined1 *)local_678._0_8_;
  }
  local_778 = FUN_1803e7050(puVar10,local_6a8);
  FUN_18015c010(local_678);
  local_6a8._0_8_ = 0xdb35e39b27e1c185;
  local_6a8._8_8_ = 0xa05181ee77d57a06;
  local_818 = 0xa5cea54bfef7110;
  auStack_698._0_8_ = 0x929654b1461b7377;
  auStack_698._8_8_ = 0xa5cea54bfef7110;
  local_7d8 = (char *)0x6c6169726574616d;
  ppcStack_7d0 = (char **)0x6c672f7665642f73;
  local_7c8 = 0x726f6e67695f776f;
  uStack_7c0 = 0x74616d762e7a65;
  local_678 = (undefined1  [16])0x0;
  auStack_668 = (undefined1  [16])0x0;
  lVar8 = -1;
  do {
    lVar3 = lVar8 + 1;
    lVar8 = lVar8 + 1;
  } while ("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n\n                F_ADDITIVE_BLEND = 1\n                F_BLEND_MODE = 1\n                F_TRANSLUCENT = 1\n                F_IGNOREZ = 1\n                F_DISABLE_Z_BUFFERING = 1\n                F_DISABLE_Z_WRITE = 1\n                F_RENDER_BACKFACES = 0\n\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n\t\t\t\tg_flFresnelExponent = 1.5\n\t\t\t\tg_flFresnelFalloff = 5.0\n\t\t\t\tg_flFresnelMax = 0.0\n\t\t\t\tg_flFresnelMin = 1.0\n\t\t\t\tg_flColorBoost = 20.0\n\t\t\t\tg_flOpacityScale = 0.6\n\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
           [lVar3] != '\0');
  FUN_18015ba30(local_678);
  puVar10 = local_678;
  if (0xf < (ulonglong)auStack_668._8_8_) {
    puVar10 = (undefined1 *)local_678._0_8_;
  }
  local_770 = FUN_1803e7050(puVar10,&local_7d8);
  FUN_18015c010(local_678);
  local_658 = 0xa70c9f7f916b7e19;
  local_818 = 0x2b2d6d82aa402c0a;
  uStack_650 = 0x2b2d6d82aa402c0a;
  local_6a8._0_8_ = 0x6c6169726574616d;
  local_6a8._8_8_ = 0x69642f7665642f73;
  auStack_698._0_8_ = 0x6e6f6974726f7473;
  auStack_698._8_8_ = 0x7a65726f6e67695f;
  local_688 = 0x74616d762e;
  uStack_680 = 0;
  local_678 = (undefined1  [16])0x0;
  auStack_668 = (undefined1  [16])0x0;
  lVar8 = -1;
  do {
    lVar3 = lVar8 + 1;
    lVar8 = lVar8 + 1;
  } while ("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n\t\t\tformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n\t\t\t{\n\t\t\t\tshader = \"csgo_effects.vfx\"\n\n\t\t\t\tF_ADDITIVE_BLEND = 1\n\t\t\t\tF_BLEND_MODE = 1\n\t\t\t\tF_TRANSLUCENT = 1\n\t\t\t\tF_RENDER_BACKFACES = 1\n\t\t\t\tF_DISABLE_Z_BUFFERING = 1\n\t\t\t\tF_DISABLE_Z_WRITE = 1\n\n\t\t\t\tg_vColorTint = [1.0, 1.0, 1.0, 1.0]\n\t\t\t\tg_flOpacityScale = 0.85\n\t\t\t\tg_flFresnelExponent = 1.25\n\t\t\t\tg_flFresnelFalloff = 2.25\n\t\t\t\tg_flFresnelMax = 0.32\n\t\t\t\tg_flFresnelMin = 1.0\n\t\t\t\tg_flColorBoost = 14.0\n\t\t\t\tg_vTexCoordScrollSpeed = [0.24, 0.17]\n\t\t\t\tg_vTexCoordScale = [2.75, 2.75]\n\t\t\t\tg_flToolsVisCubemapReflectionRoughness = 1.0\n\t\t\t\tg_flBeginMixingRoughness = 1.0\n\n\t\t\t\tg_tColor = resource:\"materials/dev/water_waves.vtex\"\n\t\t\t\tg_tMask1 = resource:\"materials/dev/water_waves.vtex\"\n\t\t\t\tg_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n\t\t\t\tg_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n\t\t\t\tg_tSceneDepth = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n\t\t\t}"
           [lVar3] != '\0');
  FUN_18015ba30(local_678);
  puVar10 = local_678;
  if (0xf < (ulonglong)auStack_668._8_8_) {
    puVar10 = (undefined1 *)local_678._0_8_;
  }
  local_818 = FUN_1803e7050(puVar10,local_6a8);
  FUN_18015c010(local_678);
  local_658 = 0xa70c9f7f916b7e19;
  local_810 = 0x2b2d6d82aa402c0a;
  uStack_650 = 0x2b2d6d82aa402c0a;
  local_6a8._0_8_ = 0x6c6169726574616d;
  local_6a8._8_8_ = 0x6f682f7665642f73;
  auStack_698._0_8_ = 0x695f6d6172676f6c;
  auStack_698._8_8_ = 0x762e7a65726f6e67;
  local_688 = 0x74616d;
  uStack_680 = 0;
  local_678 = (undefined1  [16])0x0;
  auStack_668 = (undefined1  [16])0x0;
  lVar8 = -1;
  do {
    lVar3 = lVar8 + 1;
    lVar8 = lVar8 + 1;
  } while ("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_RENDER_BACKFACES = 1\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_DISABLE_Z_BUFFERING = 1\n                F_DISABLE_Z_WRITE = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 0.6\n                g_flColorBoost = 2.0\n                g_flFresnelExponent = 1.8\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 0.4\n                g_flFresnelMax = 1.0\n                g_vTexCoordScrollSpeed = [0.0, 0.0]\n                g_vMask1PanSpeed = [0.0, 0.35]\n                g_vMask1Scale = [0.75, 9.0]\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/dev/water_waves.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
           [lVar3] != '\0');
  FUN_18015ba30(local_678);
  puVar10 = local_678;
  if (0xf < (ulonglong)auStack_668._8_8_) {
    puVar10 = (undefined1 *)local_678._0_8_;
  }
  pcVar2 = (char *)FUN_1803e7050(puVar10,local_6a8);
  local_7d8 = pcVar2;
  FUN_18015c010(local_678);
  local_6a8._0_8_ = 0xdb35e39b27e1c185;
  local_6a8._8_8_ = 0xa05181ee77d57a06;
  local_810 = 0xa5cea54bfef7110;
  auStack_698._0_8_ = 0x929654b1461b7377;
  auStack_698._8_8_ = 0xa5cea54bfef7110;
  local_7f8 = (char *)0x6c6169726574616d;
  ppcStack_7f0 = (char **)0x696c2f7665642f73;
  local_7e8 = 0x616d762e64697571;
  uStack_7e0 = 0x74;
  local_678 = (undefined1  [16])0x0;
  auStack_668 = (undefined1  [16])0x0;
  lVar8 = -1;
  do {
    lVar3 = lVar8 + 1;
    lVar8 = lVar8 + 1;
  } while ("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_RENDER_BACKFACES = 1\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_WRITE = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 0.8\n                g_flColorBoost = 1.5\n                g_flFresnelExponent = 1.8\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 0.8\n                g_flFresnelMax = 1.2\n                g_vTexCoordScrollSpeed = [0.01, 0.005]\n                g_vMask1PanSpeed = [0.05, 0.03]\n                g_vMask1Scale = [1.0, 1.0]\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/dev/water_waves.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
           [lVar3] != '\0');
  FUN_18015ba30(local_678,
                "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_RENDER_BACKFACES = 1\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_WRITE = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 0.8\n                g_flColorBoost = 1.5\n                g_flFresnelExponent = 1.8\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 0.8\n                g_flFresnelMax = 1.2\n                g_vTexCoordScrollSpeed = [0.01, 0.005]\n                g_vMask1PanSpeed = [0.05, 0.03]\n                g_vMask1Scale = [1.0, 1.0]\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/dev/water_waves.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
               );
  puVar10 = local_678;
  if (0xf < (ulonglong)auStack_668._8_8_) {
    puVar10 = (undefined1 *)local_678._0_8_;
  }
  local_7b8 = FUN_1803e7050(puVar10,&local_7f8);
  FUN_18015c010(local_678);
  local_6a8._0_8_ = 0xdb35e39b27e1c185;
  local_6a8._8_8_ = 0xa05181ee77d57a06;
  local_810 = 0xa5cea54bfef7110;
  auStack_698._0_8_ = 0x929654b1461b7377;
  auStack_698._8_8_ = 0xa5cea54bfef7110;
  local_7f8 = (char *)0x6c6169726574616d;
  ppcStack_7f0 = (char **)0x656d2f7665642f73;
  local_7e8 = 0x762e63696c6c6174;
  uStack_7e0 = 0x74616d;
  local_678 = (undefined1  [16])0x0;
  auStack_668 = (undefined1  [16])0x0;
  lVar8 = -1;
  do {
    lVar3 = lVar8 + 1;
    lVar8 = lVar8 + 1;
  } while ("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_RENDER_BACKFACES = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DISABLE_Z_WRITE = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 1.0\n                g_flColorBoost = 1.0\n                g_flFresnelExponent = 6.00\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 0.50\n                g_flFresnelMax = 1.0\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
           [lVar3] != '\0');
  FUN_18015ba30(local_678,
                "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_RENDER_BACKFACES = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DISABLE_Z_WRITE = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 1.0\n                g_flColorBoost = 1.0\n                g_flFresnelExponent = 6.00\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 0.50\n                g_flFresnelMax = 1.0\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
               );
  puVar10 = local_678;
  if (0xf < (ulonglong)auStack_668._8_8_) {
    puVar10 = (undefined1 *)local_678._0_8_;
  }
  local_7b0 = FUN_1803e7050(puVar10,&local_7f8);
  FUN_18015c010(local_678);
  local_6a8._0_8_ = (undefined1 *)0xdb35e39b27e1c185;
  local_6a8._8_8_ = 0xa05181ee77d57a06;
  local_810 = 0xa5cea54bfef7110;
  auStack_698._0_8_ = 0x929654b1461b7377;
  auStack_698._8_8_ = 0xa5cea54bfef7110;
  local_7f8 = (char *)0x6c6169726574616d;
  ppcStack_7f0 = (char **)0x616d2f7665642f73;
  local_7e8 = 0x74616d762e657474;
  uStack_7e0 = 0;
  FUN_1803e4430(local_6a8,
                "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_RENDER_BACKFACES = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DISABLE_Z_WRITE = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 1.0\n                g_flColorBoost = 0.38\n                g_flFresnelExponent = 1.00\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.00\n                g_flFresnelMax = 1.0\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
                ,0);
  puVar10 = local_6a8;
  if (0xf < (ulonglong)auStack_698._8_8_) {
    puVar10 = (undefined1 *)local_6a8._0_8_;
  }
  local_7a8 = FUN_1803e7050(puVar10,&local_7f8);
  FUN_18015c010(local_6a8);
  local_6a8._0_8_ = (undefined1 *)0xdb35e39b27e1c185;
  local_6a8._8_8_ = 0xa05181ee77d57a06;
  local_810 = 0xa5cea54bfef7110;
  auStack_698._0_8_ = 0x929654b1461b7377;
  auStack_698._8_8_ = 0xa5cea54bfef7110;
  local_7f8 = (char *)0x6c6169726574616d;
  ppcStack_7f0 = (char **)0x6c662f7665642f73;
  local_7e8 = 0x74616d762e7461;
  uStack_7e0 = 0;
  FUN_1803e4430(local_6a8,
                "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n\n                F_RENDER_BACKFACES = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DISABLE_Z_WRITE = 1\n                F_ADDITIVE_BLEND = 0\n                F_DO_NOT_CAST_SHADOWS = 1\n                F_PAINT_VERTEX_COLORS = 1\n                F_TRANSLUCENT = 1\n                F_BLEND_MODE = 1\n\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flColorBoost = 1.0\n                g_flOpacityScale = 1.0\n                g_flFresnelExponent = 1.0\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.0\n                g_flFresnelMax = 1.0\n\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
                ,0);
  puVar10 = local_6a8;
  if (0xf < (ulonglong)auStack_698._8_8_) {
    puVar10 = (undefined1 *)local_6a8._0_8_;
  }
  local_7a0 = FUN_1803e7050(puVar10,&local_7f8);
  FUN_18015c010(local_6a8);
  local_6a8._0_8_ = (undefined1 *)0xdb35e39b27e1c185;
  local_6a8._8_8_ = 0xa05181ee77d57a06;
  local_810 = 0xa5cea54bfef7110;
  auStack_698._0_8_ = 0x929654b1461b7377;
  auStack_698._8_8_ = 0xa5cea54bfef7110;
  local_7f8 = (char *)0x6c6169726574616d;
  ppcStack_7f0 = (char **)0x6c622f7665642f73;
  local_7e8 = 0x74616d762e6d6f6f;
  uStack_7e0 = 0;
  FUN_1803e4430(local_6a8,
                "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_ALPHA_TEST = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                F_DISABLE_Z_WRITE = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flColorBoost = 0.68\n                g_flOpacityScale = 1.0\n                g_flFresnelExponent = 2.0\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.0\n                g_flFresnelMax = 1.0\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
                ,0);
  puVar10 = local_6a8;
  if (0xf < (ulonglong)auStack_698._8_8_) {
    puVar10 = (undefined1 *)local_6a8._0_8_;
  }
  local_810 = FUN_1803e7050(puVar10,&local_7f8);
  FUN_18015c010(local_6a8);
  local_6a8._0_8_ = 0xdb35e39b27e1c185;
  local_6a8._8_8_ = 0xa05181ee77d57a06;
  local_808 = 0xa5cea54bfef7110;
  auStack_698._0_8_ = 0x929654b1461b7377;
  auStack_698._8_8_ = 0xa5cea54bfef7110;
  local_7f8 = (char *)0x6c6169726574616d;
  ppcStack_7f0 = (char **)0x756f2f7665642f73;
  local_7e8 = 0x762e73656e696c74;
  uStack_7e0 = 0x74616d;
  local_678 = (undefined1  [16])0x0;
  auStack_668 = (undefined1  [16])0x0;
  lVar8 = -1;
  do {
    lVar3 = lVar8 + 1;
    lVar8 = lVar8 + 1;
  } while ("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n\n                F_ADDITIVE_BLEND = 1\n                F_BLEND_MODE = 1\n                F_TRANSLUCENT = 1\n\n                g_vColorTint = [1.0, 1.0, 1.0, 0.0]\n                g_flOpacityScale = 0.45\n                g_flFresnelExponent = 0.75\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMax = 0.0\n                g_flFresnelMin = 1.0\n\t\t\t\tg_flColorBoost = 2.25\n                g_flToolsVisCubemapReflectionRoughness = 1.0\n                g_flBeginMixingRoughness = 1.0\n\n                g_tColor = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n                g_tSceneDepth = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n            }"
           [lVar3] != '\0');
  FUN_18015ba30(local_678,
                "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n\n                F_ADDITIVE_BLEND = 1\n                F_BLEND_MODE = 1\n                F_TRANSLUCENT = 1\n\n                g_vColorTint = [1.0, 1.0, 1.0, 0.0]\n                g_flOpacityScale = 0.45\n                g_flFresnelExponent = 0.75\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMax = 0.0\n                g_flFresnelMin = 1.0\n\t\t\t\tg_flColorBoost = 2.25\n                g_flToolsVisCubemapReflectionRoughness = 1.0\n                g_flBeginMixingRoughness = 1.0\n\n                g_tColor = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n                g_tSceneDepth = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n            }"
               );
  puVar10 = local_678;
  if (0xf < (ulonglong)auStack_668._8_8_) {
    puVar10 = (undefined1 *)local_678._0_8_;
  }
  lVar3 = FUN_1803e7050(puVar10,&local_7f8);
  local_748 = lVar3;
  FUN_18015c010(local_678);
  local_6a8._0_8_ = 0xdb35e39b27e1c185;
  local_6a8._8_8_ = 0xa05181ee77d57a06;
  local_808 = 0xa5cea54bfef7110;
  auStack_698._0_8_ = 0x929654b1461b7377;
  auStack_698._8_8_ = 0xa5cea54bfef7110;
  local_7f8 = (char *)0x6c6169726574616d;
  ppcStack_7f0 = (char **)0x6c672f7665642f73;
  local_7e8 = 0x74616d762e776f;
  uStack_7e0 = 0;
  local_678 = (undefined1  [16])0x0;
  auStack_668 = (undefined1  [16])0x0;
  lVar8 = -1;
  do {
    lVar6 = lVar8 + 1;
    lVar8 = lVar8 + 1;
  } while ("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n\n                F_ADDITIVE_BLEND = 1\n                F_BLEND_MODE = 1\n                F_TRANSLUCENT = 1\n                F_IGNOREZ = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_RENDER_BACKFACES = 0\n\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n\t\t\t\tg_flFresnelExponent = 1.5\n\t\t\t\tg_flFresnelFalloff = 5.0\n\t\t\t\tg_flFresnelMax = 0.0\n\t\t\t\tg_flFresnelMin = 1.0\n\t\t\t\tg_flColorBoost = 20.0\n\t\t\t\tg_flOpacityScale = 0.6\n\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
           [lVar6] != '\0');
  FUN_18015ba30(local_678,
                "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n\n                F_ADDITIVE_BLEND = 1\n                F_BLEND_MODE = 1\n                F_TRANSLUCENT = 1\n                F_IGNOREZ = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_RENDER_BACKFACES = 0\n\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n\t\t\t\tg_flFresnelExponent = 1.5\n\t\t\t\tg_flFresnelFalloff = 5.0\n\t\t\t\tg_flFresnelMax = 0.0\n\t\t\t\tg_flFresnelMin = 1.0\n\t\t\t\tg_flColorBoost = 20.0\n\t\t\t\tg_flOpacityScale = 0.6\n\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
               );
  puVar10 = local_678;
  if (0xf < (ulonglong)auStack_668._8_8_) {
    puVar10 = (undefined1 *)local_678._0_8_;
  }
  pcVar4 = (char *)FUN_1803e7050(puVar10,&local_7f8);
  local_768 = pcVar4;
  FUN_18015c010(local_678);
  local_808 = 0xa5cea54bfef7110;
  local_678._0_8_ = 0x6c6169726574616d;
  local_678._8_8_ = 0x6c652f7665642f73;
  auStack_668._0_8_ = 0x762e636972746365;
  auStack_668._8_8_ = 0x74616d;
  local_6a8 = (undefined1  [16])0x0;
  auStack_698 = (undefined1  [16])0x0;
  lVar8 = -1;
  do {
    lVar6 = lVar8 + 1;
    lVar8 = lVar8 + 1;
  } while ("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_RENDER_BACKFACES = 1\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_WRITE = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 0.8\n                g_flColorBoost = 3.0\n                g_flFresnelExponent = 1.8\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 0.4\n                g_flFresnelMax = 1.0\n                g_vTexCoordScrollSpeed = [0.03, 0.02]\n                g_vMask1PanSpeed = [0.15, 0.1]\n                g_vMask1Scale = [2.0, 2.0]\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/particle/electrical/electrical_cracks.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
           [lVar6] != '\0');
  FUN_18015ba30(local_6a8,
                "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_RENDER_BACKFACES = 1\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_WRITE = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 0.8\n                g_flColorBoost = 3.0\n                g_flFresnelExponent = 1.8\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 0.4\n                g_flFresnelMax = 1.0\n                g_vTexCoordScrollSpeed = [0.03, 0.02]\n                g_vMask1PanSpeed = [0.15, 0.1]\n                g_vMask1Scale = [2.0, 2.0]\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/particle/electrical/electrical_cracks.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
               );
  puVar10 = local_6a8;
  if (0xf < (ulonglong)auStack_698._8_8_) {
    puVar10 = (undefined1 *)local_6a8._0_8_;
  }
  pcVar5 = (char *)FUN_1803e7050(puVar10,local_678);
  local_7f8 = pcVar5;
  FUN_18015c010(local_6a8);
  local_808 = 0xa5cea54bfef7110;
  local_678._0_8_ = 0x6c6169726574616d;
  local_678._8_8_ = 0x69642f7665642f73;
  auStack_668._0_8_ = 0x6e6f6974726f7473;
  auStack_668._8_8_ = 0x74616d762e;
  local_6a8 = (undefined1  [16])0x0;
  auStack_698 = (undefined1  [16])0x0;
  lVar8 = -1;
  do {
    lVar6 = lVar8 + 1;
    lVar8 = lVar8 + 1;
  } while ("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n\t\t\tformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n\t\t\t{\n\t\t\t\tshader = \"csgo_effects.vfx\"\n\n\t\t\t\tF_ADDITIVE_BLEND = 1\n\t\t\t\tF_BLEND_MODE = 1\n\t\t\t\tF_TRANSLUCENT = 1\n\t\t\t\tF_RENDER_BACKFACES = 1\n\t\t\t\tF_DISABLE_Z_WRITE = 1\n\n\t\t\t\tg_vColorTint = [1.0, 1.0, 1.0, 1.0]\n\t\t\t\tg_flOpacityScale = 0.85\n\t\t\t\tg_flFresnelExponent = 1.25\n\t\t\t\tg_flFresnelFalloff = 2.25\n\t\t\t\tg_flFresnelMax = 0.32\n\t\t\t\tg_flFresnelMin = 1.0\n\t\t\t\tg_flColorBoost = 14.0\n\t\t\t\tg_vTexCoordScrollSpeed = [0.24, 0.17]\n\t\t\t\tg_vTexCoordScale = [2.75, 2.75]\n\t\t\t\tg_flToolsVisCubemapReflectionRoughness = 1.0\n\t\t\t\tg_flBeginMixingRoughness = 1.0\n\n\t\t\t\tg_tColor = resource:\"materials/dev/water_waves.vtex\"\n\t\t\t\tg_tMask1 = resource:\"materials/dev/water_waves.vtex\"\n\t\t\t\tg_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n\t\t\t\tg_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n\t\t\t\tg_tSceneDepth = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n\t\t\t}"
           [lVar6] != '\0');
  FUN_18015ba30(local_6a8,
                "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n\t\t\tformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n\t\t\t{\n\t\t\t\tshader = \"csgo_effects.vfx\"\n\n\t\t\t\tF_ADDITIVE_BLEND = 1\n\t\t\t\tF_BLEND_MODE = 1\n\t\t\t\tF_TRANSLUCENT = 1\n\t\t\t\tF_RENDER_BACKFACES = 1\n\t\t\t\tF_DISABLE_Z_WRITE = 1\n\n\t\t\t\tg_vColorTint = [1.0, 1.0, 1.0, 1.0]\n\t\t\t\tg_flOpacityScale = 0.85\n\t\t\t\tg_flFresnelExponent = 1.25\n\t\t\t\tg_flFresnelFalloff = 2.25\n\t\t\t\tg_flFresnelMax = 0.32\n\t\t\t\tg_flFresnelMin = 1.0\n\t\t\t\tg_flColorBoost = 14.0\n\t\t\t\tg_vTexCoordScrollSpeed = [0.24, 0.17]\n\t\t\t\tg_vTexCoordScale = [2.75, 2.75]\n\t\t\t\tg_flToolsVisCubemapReflectionRoughness = 1.0\n\t\t\t\tg_flBeginMixingRoughness = 1.0\n\n\t\t\t\tg_tColor = resource:\"materials/dev/water_waves.vtex\"\n\t\t\t\tg_tMask1 = resource:\"materials/dev/water_waves.vtex\"\n\t\t\t\tg_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n\t\t\t\tg_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n\t\t\t\tg_tSceneDepth = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n\t\t\t}"
               );
  puVar10 = local_6a8;
  if (0xf < (ulonglong)auStack_698._8_8_) {
    puVar10 = (undefined1 *)local_6a8._0_8_;
  }
  lVar6 = FUN_1803e7050(puVar10,local_678);
  FUN_18015c010(local_6a8);
  local_808 = 0xa5cea54bfef7110;
  local_678._0_8_ = 0x6c6169726574616d;
  local_678._8_8_ = 0x6f682f7665642f73;
  auStack_668._0_8_ = 0x762e6d6172676f6c;
  auStack_668._8_8_ = 0x74616d;
  local_6a8 = (undefined1  [16])0x0;
  auStack_698 = (undefined1  [16])0x0;
  lVar8 = -1;
  do {
    lVar7 = lVar8 + 1;
    lVar8 = lVar8 + 1;
  } while ("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_RENDER_BACKFACES = 1\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_WRITE = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 0.6\n                g_flColorBoost = 2.0\n                g_flFresnelExponent = 1.8\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 0.4\n                g_flFresnelMax = 1.0\n                g_vTexCoordScrollSpeed = [0.0, 0.0]\n                g_vMask1PanSpeed = [0.0, 0.35]\n                g_vMask1Scale = [0.75, 9.0]\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/dev/water_waves.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
           [lVar7] != '\0');
  FUN_18015ba30(local_6a8,
                "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_RENDER_BACKFACES = 1\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_WRITE = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 0.6\n                g_flColorBoost = 2.0\n                g_flFresnelExponent = 1.8\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 0.4\n                g_flFresnelMax = 1.0\n                g_vTexCoordScrollSpeed = [0.0, 0.0]\n                g_vMask1PanSpeed = [0.0, 0.35]\n                g_vMask1Scale = [0.75, 9.0]\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/dev/water_waves.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
               );
  puVar10 = local_6a8;
  if (0xf < (ulonglong)auStack_698._8_8_) {
    puVar10 = (undefined1 *)local_6a8._0_8_;
  }
  lVar7 = FUN_1803e7050(puVar10,local_678);
  FUN_18015c010(local_6a8);
  local_808 = 0xa5cea54bfef7110;
  local_678._8_8_ = 0x65702f7665642f73;
  local_678._0_8_ = 0x6c6169726574616d;
  auStack_668 = ZEXT816(0x74616d762e6c7261);
  local_6a8 = (undefined1  [16])0x0;
  auStack_698 = (undefined1  [16])0x0;
  lVar8 = -1;
  do {
    lVar1 = lVar8 + 1;
    lVar8 = lVar8 + 1;
  } while ("<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_RENDER_BACKFACES = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DISABLE_Z_WRITE = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 1.0\n                g_flColorBoost = 1.0\n                g_flFresnelExponent = 0.80\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.00\n                g_flFresnelMax = 0.50\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
           [lVar1] != '\0');
  FUN_18015ba30(local_6a8,
                "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_RENDER_BACKFACES = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DISABLE_Z_WRITE = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 1.0\n                g_flColorBoost = 1.0\n                g_flFresnelExponent = 0.80\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.00\n                g_flFresnelMax = 0.50\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
               );
  puVar10 = local_6a8;
  if (0xf < (ulonglong)auStack_698._8_8_) {
    puVar10 = (undefined1 *)local_6a8._0_8_;
  }
  lVar8 = FUN_1803e7050(puVar10,local_678);
  FUN_18015c010(local_6a8);
  if (((((((local_7b8 != 0) && (local_7b0 != 0)) && (local_7a8 != 0)) &&
        ((local_7a0 != 0 && (local_810 != 0)))) &&
       ((lVar3 != 0 && ((pcVar4 != (char *)0x0 && (pcVar5 != (char *)0x0)))))) && (lVar6 != 0)) &&
     (((((lVar7 != 0 && (lVar8 != 0)) && (local_798 != 0)) &&
       (((local_790 != 0 && (local_788 != 0)) &&
        ((local_780 != 0 && ((local_778 != 0 && (local_770 != 0)))))))) &&
      ((local_818 != 0 && (pcVar2 != (char *)0x0)))))) {
    iVar13 = 0;
    plVar17 = &DAT_180c6e288;
    do {
      FUN_1803e3f50(local_6a8,iVar13 != 0);
      puVar10 = local_6a8;
      if (0xf < (ulonglong)auStack_698._8_8_) {
        puVar10 = (undefined1 *)local_6a8._0_8_;
      }
      pcVar2 = "materials/dev/player_soft_glow_visible.vmat";
      if (iVar13 != 0) {
        pcVar2 = "materials/dev/player_soft_glow_hidden.vmat";
      }
      lVar3 = FUN_1803e7050(puVar10,pcVar2);
      *plVar17 = lVar3;
      if (lVar3 == 0) {
        FUN_18063ab10(local_648,0,0x600);
        local_828 = (undefined **)CONCAT44(local_828._4_4_,iVar13);
        FUN_18015ad60(local_648,0x600,0xffffffffffffffff,"depth=%d");
        local_828 = &PTR_180700558;
        if (local_648[0] != '\0') {
          local_828 = (undefined **)&DAT_1806bcfc0;
        }
        local_820 = local_648;
        FUN_1800f6900(2);
      }
      uVar18 = FUN_18015c010(local_6a8);
      iVar13 = iVar13 + 1;
      plVar17 = plVar17 + 1;
    } while (iVar13 < 2);
    _DAT_180c7c270 = local_7b8;
    _DAT_180c7c278 = local_7b0;
    _DAT_180c7c280 = local_7a8;
    DAT_180c7c288 = local_7a0;
    _DAT_180c7c290 = local_810;
    _DAT_180c7c298 = local_748;
    _DAT_180c7c2a0 = local_768;
    DAT_180c7c2a8 = local_7f8;
    _DAT_180c7c2c8 = local_798;
    _DAT_180c7c2d0 = local_790;
    _DAT_180c7c2d8 = local_788;
    _DAT_180c7c2e0 = local_780;
    _DAT_180c7c2e8 = local_778;
    _DAT_180c7c2f0 = local_770;
    _DAT_180c7c2f8 = local_818;
    _DAT_180c7c300 = local_7d8;
    _DAT_180c72200 = local_798;
    DAT_180c72208 = 0;
    DAT_180c72210 = local_790;
    DAT_180c72218 = local_788;
    _DAT_180c72220 = local_780;
    _DAT_180c72228 = local_778;
    _DAT_180c72230 = local_770;
    DAT_180c72238 = 0;
    _DAT_180c72240 = local_818;
    _DAT_180c72248 = local_7d8;
    _DAT_180c72250 = 0;
    local_740[0] = 1;
    local_738 = 
    "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_RENDER_BACKFACES = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DISABLE_Z_WRITE = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 1.0\n                g_flColorBoost = 1.0\n                g_flFresnelExponent = 6.00\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 0.50\n                g_flFresnelMax = 1.0\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
    ;
    local_730 = 7;
    local_728 = 
    "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_RENDER_BACKFACES = 1\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_WRITE = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 0.8\n                g_flColorBoost = 3.0\n                g_flFresnelExponent = 1.8\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 0.4\n                g_flFresnelMax = 1.0\n                g_vTexCoordScrollSpeed = [0.03, 0.02]\n                g_vMask1PanSpeed = [0.15, 0.1]\n                g_vMask1Scale = [2.0, 2.0]\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/particle/electrical/electrical_cracks.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
    ;
    local_720 = 10;
    local_718 = 
    "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_RENDER_BACKFACES = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DISABLE_Z_WRITE = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 1.0\n                g_flColorBoost = 1.0\n                g_flFresnelExponent = 0.80\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.00\n                g_flFresnelMax = 0.50\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
    ;
    piVar14 = local_740;
    local_7d8 = "materials/dev/depth_variant_{}.vmat";
    ppcStack_7d0 = (char **)0x23;
    pcVar2 = "materials/dev/depth_variant_{}.vmat";
    uVar9 = 0x23;
    _DAT_180c7c2b0 = lVar6;
    _DAT_180c7c2b8 = lVar7;
    DAT_180c7c2c0 = lVar8;
    do {
      FUN_1803e6b20(uVar18,local_678,*(undefined8 *)(piVar14 + 2));
      iVar13 = *piVar14;
      ppcStack_7d0 = (char **)CONCAT44(ppcStack_7d0._4_4_,iVar13);
      local_7d8 = (char *)0x1000000000000000;
      local_7f8 = (char *)0x1;
      ppcStack_7f0 = &local_7d8;
      local_768 = pcVar2;
      uStack_760 = uVar9;
      FUN_1801d97f0(local_6a8,&local_768,&local_7f8);
      puVar10 = local_6a8;
      if (0xf < (ulonglong)auStack_698._8_8_) {
        puVar10 = (undefined1 *)local_6a8._0_8_;
      }
      puVar11 = local_678;
      if (0xf < (ulonglong)auStack_668._8_8_) {
        puVar11 = (undefined1 *)local_678._0_8_;
      }
      lVar8 = FUN_1803e7050(puVar11,puVar10);
      *(longlong *)(&DAT_180c72200 + (longlong)iVar13 * 8) = lVar8;
      if (lVar8 == 0) {
        FUN_18063ab10(local_648,0,0x600);
        local_828 = (undefined **)CONCAT44(local_828._4_4_,iVar13);
        FUN_18015ad60(local_648,0x600,0xffffffffffffffff,"material=%d fallback=none");
        local_828 = &PTR_180700558;
        if (local_648[0] != '\0') {
          local_828 = (undefined **)&DAT_1806bcfc0;
        }
        local_820 = local_648;
        FUN_1800f6900(2);
      }
      FUN_18015c010(local_6a8);
      uVar18 = FUN_18015c010(local_678);
      piVar14 = piVar14 + 4;
    } while (piVar14 != local_710);
    local_708[0] = 
    "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_RENDER_BACKFACES = 1\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_WRITE = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 0.8\n                g_flColorBoost = 1.5\n                g_flFresnelExponent = 1.8\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 0.8\n                g_flFresnelMax = 1.2\n                g_vTexCoordScrollSpeed = [0.01, 0.005]\n                g_vMask1PanSpeed = [0.05, 0.03]\n                g_vMask1Scale = [1.0, 1.0]\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/dev/water_waves.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
    ;
    local_708[1] = 
    "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_RENDER_BACKFACES = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DISABLE_Z_WRITE = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 1.0\n                g_flColorBoost = 1.0\n                g_flFresnelExponent = 6.00\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 0.50\n                g_flFresnelMax = 1.0\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
    ;
    local_708[2] = 
    "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_RENDER_BACKFACES = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DISABLE_Z_WRITE = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 1.0\n                g_flColorBoost = 0.38\n                g_flFresnelExponent = 1.00\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.00\n                g_flFresnelMax = 1.0\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
    ;
    local_708[3] = 
    "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n\n                F_RENDER_BACKFACES = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DISABLE_Z_WRITE = 1\n                F_ADDITIVE_BLEND = 0\n                F_DO_NOT_CAST_SHADOWS = 1\n                F_PAINT_VERTEX_COLORS = 1\n                F_TRANSLUCENT = 1\n                F_BLEND_MODE = 1\n\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flColorBoost = 1.0\n                g_flOpacityScale = 1.0\n                g_flFresnelExponent = 1.0\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.0\n                g_flFresnelMax = 1.0\n\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
    ;
    local_6e8 = 
    "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_ALPHA_TEST = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                F_DISABLE_Z_WRITE = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flColorBoost = 0.68\n                g_flOpacityScale = 1.0\n                g_flFresnelExponent = 2.0\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.0\n                g_flFresnelMax = 1.0\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
    ;
    local_6e0 = 
    "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n\n                F_ADDITIVE_BLEND = 1\n                F_BLEND_MODE = 1\n                F_TRANSLUCENT = 1\n\n                g_vColorTint = [1.0, 1.0, 1.0, 0.0]\n                g_flOpacityScale = 0.45\n                g_flFresnelExponent = 0.75\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMax = 0.0\n                g_flFresnelMin = 1.0\n\t\t\t\tg_flColorBoost = 2.25\n                g_flToolsVisCubemapReflectionRoughness = 1.0\n                g_flBeginMixingRoughness = 1.0\n\n                g_tColor = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n                g_tSceneDepth = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n            }"
    ;
    local_6d8 = 
    "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n\n                F_ADDITIVE_BLEND = 1\n                F_BLEND_MODE = 1\n                F_TRANSLUCENT = 1\n                F_IGNOREZ = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_RENDER_BACKFACES = 0\n\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n\t\t\t\tg_flFresnelExponent = 1.5\n\t\t\t\tg_flFresnelFalloff = 5.0\n\t\t\t\tg_flFresnelMax = 0.0\n\t\t\t\tg_flFresnelMin = 1.0\n\t\t\t\tg_flColorBoost = 20.0\n\t\t\t\tg_flOpacityScale = 0.6\n\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
    ;
    local_6d0 = 
    "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_RENDER_BACKFACES = 1\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_WRITE = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 0.8\n                g_flColorBoost = 3.0\n                g_flFresnelExponent = 1.8\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 0.4\n                g_flFresnelMax = 1.0\n                g_vTexCoordScrollSpeed = [0.03, 0.02]\n                g_vMask1PanSpeed = [0.15, 0.1]\n                g_vMask1Scale = [2.0, 2.0]\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/particle/electrical/electrical_cracks.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
    ;
    local_6c8 = 
    "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n\t\t\tformat:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n\t\t\t{\n\t\t\t\tshader = \"csgo_effects.vfx\"\n\n\t\t\t\tF_ADDITIVE_BLEND = 1\n\t\t\t\tF_BLEND_MODE = 1\n\t\t\t\tF_TRANSLUCENT = 1\n\t\t\t\tF_RENDER_BACKFACES = 1\n\t\t\t\tF_DISABLE_Z_WRITE = 1\n\n\t\t\t\tg_vColorTint = [1.0, 1.0, 1.0, 1.0]\n\t\t\t\tg_flOpacityScale = 0.85\n\t\t\t\tg_flFresnelExponent = 1.25\n\t\t\t\tg_flFresnelFalloff = 2.25\n\t\t\t\tg_flFresnelMax = 0.32\n\t\t\t\tg_flFresnelMin = 1.0\n\t\t\t\tg_flColorBoost = 14.0\n\t\t\t\tg_vTexCoordScrollSpeed = [0.24, 0.17]\n\t\t\t\tg_vTexCoordScale = [2.75, 2.75]\n\t\t\t\tg_flToolsVisCubemapReflectionRoughness = 1.0\n\t\t\t\tg_flBeginMixingRoughness = 1.0\n\n\t\t\t\tg_tColor = resource:\"materials/dev/water_waves.vtex\"\n\t\t\t\tg_tMask1 = resource:\"materials/dev/water_waves.vtex\"\n\t\t\t\tg_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n\t\t\t\tg_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n\t\t\t\tg_tSceneDepth = resource:\"materials/default/default_mask_tga_fde710a5.vtex\"\n\t\t\t}"
    ;
    local_6c0 = 
    "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_RENDER_BACKFACES = 1\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_WRITE = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 0.6\n                g_flColorBoost = 2.0\n                g_flFresnelExponent = 1.8\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 0.4\n                g_flFresnelMax = 1.0\n                g_vTexCoordScrollSpeed = [0.0, 0.0]\n                g_vMask1PanSpeed = [0.0, 0.35]\n                g_vMask1Scale = [0.75, 9.0]\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/dev/water_waves.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
    ;
    local_6b8 = 
    "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_RENDER_BACKFACES = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DISABLE_Z_WRITE = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 1.0\n                g_flColorBoost = 1.0\n                g_flFresnelExponent = 0.80\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.00\n                g_flFresnelMax = 0.50\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
    ;
    iVar13 = 0;
    lVar8 = (longlong)&DAT_180c72150 - (longlong)local_708;
    pcVar2 = "materials/dev/death_{}_{}.vmat";
    uVar18 = 0x1e;
    do {
      iVar16 = 0;
      ppcVar15 = local_708;
      do {
        local_768 = (char *)0x1000000000000000;
        uStack_760 = 0x1000000000000004;
        local_7d8 = (char *)0x2;
        ppcStack_7d0 = &local_768;
        local_7f8 = pcVar2;
        ppcStack_7f0 = (char **)uVar18;
        local_758 = iVar13;
        local_754 = iVar16;
        FUN_1801d97f0(local_678,&local_7f8,&local_7d8);
        puVar10 = local_678;
        if (0xf < (ulonglong)auStack_668._8_8_) {
          puVar10 = (undefined1 *)local_678._0_8_;
        }
        FUN_1803e4430(local_6a8,*ppcVar15,iVar13 != 0);
        puVar11 = local_6a8;
        if (0xf < (ulonglong)auStack_698._8_8_) {
          puVar11 = (undefined1 *)local_6a8._0_8_;
        }
        uVar9 = FUN_1803e7050(puVar11,puVar10);
        FUN_18015c010(local_6a8);
        *(undefined8 *)((longlong)ppcVar15 + lVar8) = uVar9;
        FUN_18015c010(local_678);
        iVar16 = iVar16 + 1;
        ppcVar15 = ppcVar15 + 1;
      } while (iVar16 < 0xb);
      iVar13 = iVar13 + 1;
      lVar8 = lVar8 + 0x58;
    } while (iVar13 < 2);
  }
}



