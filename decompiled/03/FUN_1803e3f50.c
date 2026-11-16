// FUN_1803e3f50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e3f50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803e3f50(undefined1 (*param_1) [16],char param_2)

{
  ulonglong uVar1;
  char *pcVar2;
  undefined1 (*pauVar3) [16];
  longlong *plVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  char **ppcVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *****pppppuVar10;
  uint uVar11;
  undefined1 auStack_158 [32];
  undefined8 local_138;
  char *local_128;
  longlong local_120;
  char *local_118;
  undefined8 local_110;
  uint local_108;
  undefined1 local_100 [16];
  undefined1 auStack_f0 [16];
  undefined8 *****local_e0;
  longlong lStack_d8;
  longlong lStack_d0;
  ulonglong uStack_c8;
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined1 (*local_80) [16];
  char *local_78 [3];
  char *local_60 [3];
  char *local_48 [2];
  
  local_48[0] = (char *)(DAT_1808d5f00 ^ (ulonglong)auStack_158);
  local_108 = 0;
  pcVar2 = 
  "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n\n                F_ADDITIVE_BLEND = 1\n                F_BLEND_MODE = 1\n                F_TRANSLUCENT = 1\n                F_IGNOREZ = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_RENDER_BACKFACES = 0\n\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n\t\t\t\tg_flFresnelExponent = 1.5\n\t\t\t\tg_flFresnelFalloff = 5.0\n\t\t\t\tg_flFresnelMax = 0.0\n\t\t\t\tg_flFresnelMin = 1.0\n\t\t\t\tg_flColorBoost = 20.0\n\t\t\t\tg_flOpacityScale = 0.6\n\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
  ;
  if (param_2 != '\0') {
    pcVar2 = 
    "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n\n                F_ADDITIVE_BLEND = 1\n                F_BLEND_MODE = 1\n                F_TRANSLUCENT = 1\n                F_IGNOREZ = 1\n                F_DISABLE_Z_BUFFERING = 1\n                F_DISABLE_Z_WRITE = 1\n                F_RENDER_BACKFACES = 0\n\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n\t\t\t\tg_flFresnelExponent = 1.5\n\t\t\t\tg_flFresnelFalloff = 5.0\n\t\t\t\tg_flFresnelMax = 0.0\n\t\t\t\tg_flFresnelMin = 1.0\n\t\t\t\tg_flColorBoost = 20.0\n\t\t\t\tg_flOpacityScale = 0.6\n\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
    ;
  }
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  lVar8 = -1;
  do {
    lVar8 = lVar8 + 1;
  } while (pcVar2[lVar8] != '\0');
  local_80 = param_1;
  FUN_18015ba30(param_1,pcVar2);
  uVar11 = 1;
  local_108 = 1;
  local_128 = "resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"";
  local_120 = 0x3e;
  local_118 = "g_tColor";
  local_110 = 8;
  FUN_1803e3d40(param_1,&local_118,&local_128);
  local_78[0] = "g_tMask1";
  local_78[1] = "g_tMask2";
  local_78[2] = "g_tMask3";
  ppcVar7 = local_78;
  do {
    local_128 = *ppcVar7;
    local_120 = -1;
    do {
      local_120 = local_120 + 1;
    } while (local_128[local_120] != '\0');
    local_118 = "resource:\"materials/default/default_mask_tga_344101f8.vtex\"";
    local_110 = 0x3b;
    FUN_1803e3d40(param_1,&local_128,&local_118);
    ppcVar7 = ppcVar7 + 1;
  } while (ppcVar7 != local_78 + 3);
  local_118 = "2.5";
  local_110 = 3;
  local_128 = "g_flFresnelExponent";
  local_120 = 0x13;
  FUN_1803e3d40(param_1,&local_128,&local_118);
  local_118 = "2.0";
  local_110 = 3;
  local_128 = "g_flFresnelFalloff";
  local_120 = 0x12;
  FUN_1803e3d40(param_1,&local_128,&local_118);
  local_118 = "4.0";
  local_110 = 3;
  local_128 = "g_flColorBoost";
  local_120 = 0xe;
  FUN_1803e3d40(param_1,&local_128,&local_118);
  local_118 = "1.0";
  local_110 = 3;
  local_128 = "g_flOpacityScale";
  local_120 = 0x10;
  FUN_1803e3d40(param_1,&local_128,&local_118);
  local_60[0] = "F_DO_NOT_CAST_SHADOWS";
  local_60[1] = "F_DISABLE_Z_PREPASS";
  local_60[2] = "F_DISABLE_Z_WRITE";
  ppcVar7 = local_78 + 3;
  do {
    pcVar2 = *ppcVar7;
    local_c0 = (undefined1  [16])0x0;
    local_b0 = (undefined1  [16])0x0;
    lVar8 = -1;
    do {
      lVar8 = lVar8 + 1;
    } while (pcVar2[lVar8] != '\0');
    FUN_18015ba30(local_c0,pcVar2);
    pauVar3 = (undefined1 (*) [16])FUN_18015b2a0(local_c0,&DAT_1808126f4,2);
    local_100 = *pauVar3;
    auStack_f0 = pauVar3[1];
    (*pauVar3)[0] = 0;
    *(undefined8 *)pauVar3[1] = 0;
    *(undefined8 *)(pauVar3[1] + 8) = 0xf;
    puVar5 = local_100;
    if (0xf < (ulonglong)auStack_f0._8_8_) {
      puVar5 = (undefined1 *)local_100._0_8_;
    }
    pauVar3 = param_1;
    if (0xf < *(ulonglong *)(param_1[1] + 8)) {
      pauVar3 = *(undefined1 (**) [16])*param_1;
    }
    local_138 = auStack_f0._0_8_;
    local_108 = uVar11 | 2;
    lVar8 = FUN_180159df0(pauVar3,*(undefined8 *)param_1[1],0,puVar5);
    FUN_18015c010(local_100);
    FUN_18015c010(local_c0);
    lVar9 = -1;
    do {
      lVar9 = lVar9 + 1;
    } while (pcVar2[lVar9] != '\0');
    if (lVar8 == -1) {
      local_a0 = (undefined1  [16])0x0;
      local_90 = (undefined1  [16])0x0;
      FUN_18015ba30(local_a0,pcVar2);
      plVar4 = (longlong *)FUN_18015b2a0(local_a0," = 1\n",5);
      local_e0 = (undefined8 *****)*plVar4;
      lStack_d8 = plVar4[1];
      lStack_d0 = plVar4[2];
      uStack_c8 = plVar4[3];
      *(undefined1 *)plVar4 = 0;
      plVar4[2] = 0;
      plVar4[3] = 0xf;
      uVar11 = uVar11 | 6;
      uVar6 = *(ulonglong *)param_1[1];
      pauVar3 = param_1;
      if (0xf < *(ulonglong *)(param_1[1] + 8)) {
        pauVar3 = *(undefined1 (**) [16])*param_1;
      }
      local_108 = uVar11;
      if (uVar6 < 8) {
LAB_1803e4366:
        uVar6 = 0xffffffffffffffff;
      }
      else {
        puVar5 = (undefined1 *)thunk_FUN_1805f9970(pauVar3,*pauVar3 + uVar6,"shader =",8);
        if (puVar5 == *pauVar3 + uVar6) goto LAB_1803e4366;
        uVar6 = (longlong)puVar5 - (longlong)pauVar3;
      }
      uVar1 = *(ulonglong *)param_1[1];
      pauVar3 = param_1;
      if (0xf < *(ulonglong *)(param_1[1] + 8)) {
        pauVar3 = *(undefined1 (**) [16])*param_1;
      }
      if (uVar6 < uVar1) {
        puVar5 = (undefined1 *)thunk_FUN_1805f7e70(*pauVar3 + uVar6,*pauVar3 + uVar1,10);
        lVar8 = -1;
        if (puVar5 != *pauVar3 + uVar1) {
          lVar8 = (longlong)puVar5 - (longlong)pauVar3;
        }
      }
      else {
        lVar8 = -1;
      }
      pppppuVar10 = &local_e0;
      if (0xf < uStack_c8) {
        pppppuVar10 = local_e0;
      }
      FUN_180141490(param_1,lVar8 + 1,pppppuVar10,lStack_d0);
      FUN_18015c010(&local_e0);
      FUN_18015c010(local_a0);
    }
    else {
      local_118 = "1";
      local_110 = 1;
      local_128 = pcVar2;
      local_120 = lVar9;
      FUN_1803e3d40(param_1,&local_128,&local_118);
      uVar11 = uVar11 | 2;
    }
    ppcVar7 = ppcVar7 + 1;
    if (ppcVar7 == local_78 + 6) {
    }
  } while( true );
}



