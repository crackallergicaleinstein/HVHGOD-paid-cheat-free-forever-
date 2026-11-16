// FUN_1803e6cb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803e6cb0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1803e6cb0(byte param_1,byte param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  ULONGLONG UVar3;
  longlong lVar4;
  undefined8 *******pppppppuVar5;
  char *pcVar6;
  undefined8 *******pppppppuVar7;
  byte bVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 auStack_108 [32];
  uint local_e8 [2];
  float local_e0;
  char *local_d8;
  undefined8 *******pppppppuStack_d0;
  undefined8 *******local_c8;
  uint *puStack_c0;
  undefined8 *******local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_a0;
  uint uStack_9c;
  uint local_98;
  undefined *local_90;
  undefined8 *******local_88 [3];
  ulonglong local_70;
  undefined8 *******local_68 [3];
  ulonglong local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  uVar10 = (uint)param_2;
  local_e8[0] = 0x4030200;
  local_e8[1] = 0x9080605;
  if (param_1 < 0xb) {
    bVar8 = param_1;
  }
  else if (param_1 < 0x13) {
    bVar8 = *(byte *)((longlong)local_e8 + (ulonglong)(param_1 - 0xb));
  }
  else {
    bVar8 = 2;
  }
  if (param_3 == 0) {
  }
  local_e8[0] = 0x4030200;
  local_e8[1] = 0x9080605;
  if (10 < param_1) {
    if (0x12 < param_1) goto LAB_1803e6d5d;
    param_1 = *(byte *)((longlong)local_e8 + (ulonglong)(param_1 - 0xb));
  }
  if ((3 < (byte)(param_1 - 1)) && (param_1 != 10)) {
  }
LAB_1803e6d5d:
  if (param_3 != 0xff) {
    if (bVar8 == 1) {
      iVar2 = 0;
    }
    else if (bVar8 == 2) {
      iVar2 = 1;
    }
    else if (bVar8 == 4) {
      iVar2 = 2;
    }
    else {
      iVar2 = (bVar8 != 10) + 3;
    }
    local_e8[1] = 0x9080605;
    local_e8[0] = (uint)param_3;
    uVar9 = (ulonglong)((uVar10 + iVar2 * 2) * 0x100 + (uint)param_3);
    if (*(longlong *)(&DAT_180c72258 + uVar9 * 0x10) == 0) {
      local_90 = &DAT_1809bb250;
      iVar2 = FUN_1805f68d0(&DAT_1809bb250);
      if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1809bb29c == 0x7fffffff) {
        DAT_1809bb29c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((*(longlong *)(&DAT_180c72258 + uVar9 * 0x10) == 0) &&
         (UVar3 = GetTickCount64(), *(ulonglong *)(&DAT_180c72260 + uVar9 * 0x10) <= UVar3)) {
        if (bVar8 == 1) {
          pcVar6 = 
          "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_RENDER_BACKFACES = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DISABLE_Z_WRITE = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 1.0\n                g_flColorBoost = 1.0\n                g_flFresnelExponent = 6.00\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 0.50\n                g_flFresnelMax = 1.0\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
          ;
        }
        else if (bVar8 == 2) {
          pcVar6 = 
          "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_RENDER_BACKFACES = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DISABLE_Z_WRITE = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 1.0\n                g_flColorBoost = 0.38\n                g_flFresnelExponent = 1.00\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.00\n                g_flFresnelMax = 1.0\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
          ;
        }
        else if (bVar8 == 3) {
          pcVar6 = 
          "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n\n                F_RENDER_BACKFACES = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DISABLE_Z_WRITE = 1\n                F_ADDITIVE_BLEND = 0\n                F_DO_NOT_CAST_SHADOWS = 1\n                F_PAINT_VERTEX_COLORS = 1\n                F_TRANSLUCENT = 1\n                F_BLEND_MODE = 1\n\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flColorBoost = 1.0\n                g_flOpacityScale = 1.0\n                g_flFresnelExponent = 1.0\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.0\n                g_flFresnelMax = 1.0\n\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
          ;
        }
        else {
          pcVar6 = 
          "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_RENDER_BACKFACES = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DISABLE_Z_WRITE = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flOpacityScale = 1.0\n                g_flColorBoost = 1.0\n                g_flFresnelExponent = 0.80\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.00\n                g_flFresnelMax = 0.50\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
          ;
          if (bVar8 == 4) {
            pcVar6 = 
            "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d}\n            format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n            {\n                shader = \"csgo_effects.vfx\"\n                F_TRANSLUCENT = 1\n                F_ADDITIVE_BLEND = 0\n                F_ALPHA_TEST = 0\n                F_DISABLE_Z_BUFFERING = 0\n                F_DISABLE_Z_PREPASS = 1\n                F_DO_NOT_CAST_SHADOWS = 1\n                F_DISABLE_Z_WRITE = 1\n                g_vColorTint = [1.0, 1.0, 1.0, 1.0]\n                g_flColorBoost = 0.68\n                g_flOpacityScale = 1.0\n                g_flFresnelExponent = 2.0\n                g_flFresnelFalloff = 1.0\n                g_flFresnelMin = 1.0\n                g_flFresnelMax = 1.0\n                g_tColor = resource:\"materials/dev/primary_white_color_tga_21186c76.vtex\"\n                g_tMask1 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask2 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n                g_tMask3 = resource:\"materials/default/default_mask_tga_344101f8.vtex\"\n            }"
            ;
          }
        }
        FUN_1803e4430(local_88,pcVar6,uVar10);
        uVar1 = local_e8[0];
        local_e0 = (float)(int)local_e8[0] / 255.0;
        local_e8[0] = 0;
        local_e8[1] = 0x70000000;
        local_c8 = (undefined8 *******)0x1;
        puStack_c0 = local_e8;
        local_d8 = "{:.9f}";
        pppppppuStack_d0 = (undefined8 *******)0x6;
        FUN_1801d97f0(&local_b8,&local_d8,&local_c8);
        local_c8 = &local_b8;
        if (0xf < CONCAT44(uStack_9c,local_a0)) {
          local_c8 = local_b8;
        }
        puStack_c0 = (uint *)local_a8;
        local_d8 = "g_flOpacityScale";
        pppppppuStack_d0 = (undefined8 *******)0x10;
        FUN_1803e3d40(local_88,&local_d8,&local_c8);
        FUN_18015c010(&local_b8);
        local_a0 = (uint)bVar8;
        local_b8 = (undefined8 *******)0x2000000000000000;
        local_b0 = 0x2000000000000004;
        local_98 = uVar1;
        local_a8 = 0x2000000000000008;
        local_d8 = (char *)0x3;
        pppppppuStack_d0 = &local_b8;
        local_c8 = (undefined8 *******)0x180812dc8;
        puStack_c0 = (uint *)0x2c;
        uStack_9c = uVar10;
        FUN_1801d97f0(local_68,&local_c8,&local_d8);
        pppppppuVar7 = local_68;
        if (0xf < local_50) {
          pppppppuVar7 = local_68[0];
        }
        pppppppuVar5 = local_88;
        if (0xf < local_70) {
          pppppppuVar5 = local_88[0];
        }
        lVar4 = FUN_1803e7050(pppppppuVar5,pppppppuVar7);
        if (lVar4 == 0) {
          *(ULONGLONG *)(&DAT_180c72260 + uVar9 * 0x10) = UVar3 + 1000;
        }
        else {
          *(longlong *)(&DAT_180c72258 + uVar9 * 0x10) = lVar4;
        }
        FUN_18015c010(local_68);
        FUN_18015c010(local_88);
      }
      FUN_1805f68fc(&DAT_1809bb250);
    }
  }
}



