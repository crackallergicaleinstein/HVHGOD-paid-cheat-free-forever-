// FUN_1803e4430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e4430 */

undefined1 (*) [16] FUN_1803e4430(undefined1 (*param_1) [16],char *param_2,char param_3)

{
  ulonglong uVar1;
  undefined1 *puVar2;
  char *pcVar3;
  longlong lVar4;
  undefined1 (*pauVar5) [16];
  longlong lVar6;
  undefined1 (*local_res20) [16];
  char *local_48;
  undefined8 local_40;
  char *local_38;
  longlong local_30;
  
  pcVar3 = param_2;
  if (param_3 != '\0') {
    if (param_2 ==
        "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_RENDER_BACKFACES = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DISABLE_Z_WRITE = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 1.0\n                g_flColorBoost = 0.38\n                g_flFresnelExponent = 1.00\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.00\n                g_flFresnelMax = 1.0\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
       ) {
      pcVar3 = 
      "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_RENDER_BACKFACES = 0\n                F_DISABLE_Z_BUFFERING = 1\n                F_DISABLE_Z_PREPASS = 1\n                F_DISABLE_Z_WRITE = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 1.0\n                g_flColorBoost = 0.70\n                g_flFresnelExponent = 1.00\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.00\n                g_flFresnelMax = 1.0\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
      ;
    }
    else {
      pcVar3 = 
      "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_ALPHA_TEST = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                F_DISABLE_Z_BUFFERING = 1\n                F_DISABLE_Z_WRITE = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flColorBoost = 0.55\n                g_flOpacityScale = 1.0\n                g_flFresnelExponent = 2.0\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.0\n                g_flFresnelMax = 1.0\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
      ;
      if (param_2 !=
          "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_ALPHA_TEST = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                F_DISABLE_Z_WRITE = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flColorBoost = 0.68\n                g_flOpacityScale = 1.0\n                g_flFresnelExponent = 2.0\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.0\n                g_flFresnelMax = 1.0\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
         ) {
        pcVar3 = param_2;
      }
    }
  }
  *param_1 = (undefined1  [16])0x0;
  *(undefined8 *)param_1[1] = 0;
  *(undefined8 *)(param_1[1] + 8) = 0;
  lVar4 = -1;
  lVar6 = -1;
  do {
    lVar6 = lVar6 + 1;
  } while (pcVar3[lVar6] != '\0');
  FUN_18015ba30(param_1);
  local_48 = "1";
  local_40 = 1;
  local_38 = "F_TRANSLUCENT";
  local_30 = 0xd;
  local_res20 = param_1;
  FUN_1803e4770(&local_res20,&local_38,&local_48);
  pcVar3 = "0";
  local_38 = "0";
  local_30 = 1;
  local_48 = "F_ALPHA_TEST";
  local_40 = 0xc;
  FUN_1803e4770(&local_res20,&local_48,&local_38);
  local_38 = "1";
  local_30 = 1;
  local_48 = "F_DISABLE_Z_WRITE";
  local_40 = 0x11;
  FUN_1803e4770(&local_res20,&local_48,&local_38);
  local_38 = "1";
  local_30 = 1;
  local_48 = "F_BLEND_MODE";
  local_40 = 0xc;
  FUN_1803e4770(&local_res20,&local_48,&local_38);
  if (param_3 != '\0') {
    pcVar3 = "1";
  }
  local_30 = -1;
  do {
    local_30 = local_30 + 1;
  } while (pcVar3[local_30] != '\0');
  local_48 = "F_DISABLE_Z_BUFFERING";
  local_40 = 0x15;
  local_38 = pcVar3;
  FUN_1803e4770(&local_res20,&local_48,&local_38);
  do {
    lVar4 = lVar4 + 1;
  } while (pcVar3[lVar4] != '\0');
  local_48 = "F_IGNOREZ";
  local_40 = 9;
  local_38 = pcVar3;
  local_30 = lVar4;
  FUN_1803e4770(&local_res20,&local_48,&local_38);
  local_38 = "1";
  local_30 = 1;
  local_48 = "F_PAINT_VERTEX_COLORS";
  local_40 = 0x15;
  FUN_1803e4770(&local_res20,&local_48,&local_38);
  local_38 = "1.0";
  local_30 = 3;
  local_48 = "g_flModelTintAmount";
  local_40 = 0x13;
  FUN_1803e4770(&local_res20,&local_48,&local_38);
  local_38 = "1.0";
  local_30 = 3;
  local_48 = "g_flOpacityScale";
  local_40 = 0x10;
  FUN_1803e4770(&local_res20,&local_48,&local_38);
  uVar1 = *(ulonglong *)param_1[1];
  pauVar5 = param_1;
  if (0xf < *(ulonglong *)(param_1[1] + 8)) {
    pauVar5 = *(undefined1 (**) [16])*param_1;
  }
  if (((uVar1 < 0x1f) ||
      (puVar2 = (undefined1 *)
                thunk_FUN_1805f9970(pauVar5,*pauVar5 + uVar1,"g_flSelfIllumAlbedoFactor = 1.0",0x1f)
      , puVar2 == *pauVar5 + uVar1)) || ((longlong)puVar2 - (longlong)pauVar5 == -1)) {
    local_38 = "[1.0, 1.0, 1.0, 1.0]";
    local_30 = 0x14;
    local_48 = "g_vColorTint";
    local_40 = 0xc;
    FUN_1803e4770(&local_res20,&local_48,&local_38);
  }
  local_38 = "[1.0, 1.0, 1.0]";
  local_30 = 0xf;
  local_48 = "g_vSelfIllumTint";
  local_40 = 0x10;
  FUN_1803e4770(&local_res20,&local_48,&local_38);
  return param_1;
}



