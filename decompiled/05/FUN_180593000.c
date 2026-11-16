// FUN_180593000 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180593000 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180593000(longlong *param_1,uint param_2,uint param_3,char param_4)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  ushort *puVar12;
  short sVar13;
  undefined4 *puVar14;
  longlong lVar15;
  ushort uVar16;
  int iVar17;
  int *piVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined4 *puVar22;
  undefined1 *puVar23;
  ulonglong uVar24;
  undefined1 auStack_198 [32];
  uint *local_178;
  int *local_170;
  int local_168;
  char local_164;
  ushort local_160 [2];
  uint local_15c;
  char local_158;
  uint local_154;
  int local_150;
  int local_14c;
  int local_148;
  ulonglong local_140;
  uint local_138;
  uint local_134;
  longlong local_130;
  longlong local_128;
  longlong local_120;
  ulonglong local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_100 [2];
  ulonglong *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulonglong local_88;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 *puStack_60;
  undefined1 *local_58;
  ushort *puStack_50;
  undefined4 local_48;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  lVar4 = *param_1;
  lVar21 = 0;
  lVar15 = param_1[3];
  uVar24 = (ulonglong)param_2;
  local_168 = 0;
  local_164 = '\0';
  if (100 < param_3) {
    param_1[5] = *(longlong *)(lVar4 + 0xa0);
  }
  if (*(ushort *)(lVar4 + 0x18e) < param_3) {
    *(short *)(lVar4 + 0x18e) = (short)param_3;
  }
  *(uint *)((longlong)param_1 + 0x24) = param_2;
  if ((*(byte *)(param_1 + 4) & 1) == 0) {
    local_150 = *(int *)(*(longlong *)(param_1[1] + 0x40) + 4);
    local_14c = *(int *)(*(longlong *)(param_1[1] + 0x40) + 8);
  }
  else {
    local_150 = 0x10000;
    local_14c = 0x10000;
  }
  puVar5 = *(undefined8 **)(*(longlong *)(lVar4 + 0xd0) + 0x50);
  local_158 = param_4;
  local_134 = param_3;
  if (puVar5 == (undefined8 *)0x0) {
    iVar8 = FUN_180587c60(lVar4,param_2,&local_15c);
    *(uint *)(param_1 + 6) = local_15c;
    local_140 = CONCAT44(local_140._4_4_,iVar8);
  }
  else {
    local_168 = (**(code **)*puVar5)(puVar5[1],param_2,&local_110);
    if (local_168 != 0) goto LAB_180593c40;
    local_164 = '\x01';
    local_d8 = 0;
    uStack_d0 = 0;
    local_98 = 0;
    iVar8 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_140 = local_140 & 0xffffffff00000000;
    local_b8 = 0;
    uStack_b0 = 0;
    *(undefined4 *)(param_1 + 6) = local_108;
    local_a8 = 0;
    uStack_a0 = 0;
    FUN_1805780d0(&local_d8,local_110);
    param_1[5] = (longlong)&local_d8;
  }
  if ((int)param_1[6] != 0) {
    if ((*(int *)(lVar4 + 0x3fc) == 0) && (*(longlong *)(*(longlong *)(lVar4 + 0xd0) + 0x50) == 0))
    {
      local_168 = 8;
      goto LAB_180593c40;
    }
    local_168 = (**(code **)(lVar4 + 0x2a8))(param_1,param_2,*(int *)(lVar4 + 0x3fc) + iVar8);
    if (local_168 != 0) goto LAB_180593c40;
    local_168 = (**(code **)(lVar4 + 0x2b8))(param_1);
    (**(code **)(lVar4 + 0x2b0))(param_1);
    if (local_168 != 0) goto LAB_180593c40;
  }
  if (((int)param_1[6] == 0) || (*(short *)((longlong)param_1 + 0x34) == 0)) {
    param_1[7] = 0;
    param_1[8] = 0;
  }
  lVar20 = param_1[5];
  lVar10 = *param_1;
  local_138 = local_138 & 0xffff0000;
  local_154 = local_154 & 0xffff0000;
  local_15c = local_15c & 0xffff0000;
  local_160[0] = 0;
  local_148 = FUN_1805780f0(lVar20);
  local_178 = &local_15c;
  (**(code **)(*(longlong *)(lVar10 + 0x2d0) + 0x150))(lVar10,0,param_2,&local_138);
  if (*(char *)(lVar10 + 400) == '\0') {
    sVar13 = (short)*(undefined4 *)((longlong)param_1 + 0x44);
    if (*(short *)(lVar10 + 0x208) == -1) {
      local_154 = CONCAT22(local_154._2_2_,*(short *)(lVar10 + 0x13c) - sVar13);
      sVar13 = *(short *)(lVar10 + 0x13e);
      sVar1 = *(short *)(lVar10 + 0x13c);
      if ((int)sVar1 - (int)sVar13 < 0) {
        local_160[0] = sVar13 - sVar1;
      }
      else {
        local_160[0] = sVar1 - sVar13;
      }
    }
    else {
      local_154 = CONCAT22(local_154._2_2_,*(short *)(lVar10 + 0x24e) - sVar13);
      sVar13 = *(short *)(lVar10 + 0x24e);
      sVar1 = *(short *)(lVar10 + 0x250);
      local_160[0] = sVar1 - sVar13;
      if (-1 < (int)sVar13 - (int)sVar1) {
        local_160[0] = sVar13 - sVar1;
      }
    }
  }
  else {
    local_178 = (uint *)local_160;
    (**(code **)(*(longlong *)(lVar10 + 0x2d0) + 0x150))(lVar10,1,param_2,&local_154);
  }
  local_168 = FUN_1805788b0(lVar20,local_148);
  if (local_168 != 0) goto LAB_180593c40;
  *(int *)(param_1 + 9) = (int)(short)local_138;
  *(int *)(param_1 + 0x1e) = (int)(short)local_154;
  *(uint *)((longlong)param_1 + 0xf4) = (uint)local_160[0];
  *(uint *)((longlong)param_1 + 0x4c) = local_15c & 0xffff;
  if ((*(longlong *)(*(longlong *)(lVar10 + 0xd0) + 0x50) == 0) &&
     (*(char *)((longlong)param_1 + 0x54) == '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x54) = 1;
    *(uint *)(param_1 + 10) = local_15c & 0xffff;
  }
  local_168 = 0;
  if (local_158 != '\0') goto LAB_180593c40;
  plVar6 = *(longlong **)(*(longlong *)(*param_1 + 0xd0) + 0x50);
  if ((plVar6 != (longlong *)0x0) && (*(code **)(*plVar6 + 0x10) != (code *)0x0)) {
    local_88 = (ulonglong)*(uint *)(param_1 + 9);
    local_80 = (ulonglong)*(uint *)((longlong)param_1 + 0x4c);
    iVar8 = (**(code **)(*plVar6 + 0x10))(plVar6[1],param_2,0,&local_88);
    if (iVar8 == 0) {
      *(int *)(param_1 + 9) = (int)(short)local_88;
      *(uint *)((longlong)param_1 + 0x4c) = (uint)(ushort)local_80;
      param_1[0x1e] = 0;
      if (*(char *)((longlong)param_1 + 0x54) == '\0') {
        *(undefined1 *)((longlong)param_1 + 0x54) = 1;
        *(uint *)(param_1 + 10) = (uint)(ushort)local_80;
      }
    }
  }
  iVar8 = (int)param_1[7] - (int)param_1[9];
  iVar17 = (int)param_1[0x1e] + *(int *)((longlong)param_1 + 0x44);
  *(int *)(param_1 + 0xb) = iVar8;
  *(int *)(param_1 + 0xc) = iVar8 + *(int *)((longlong)param_1 + 0x4c);
  *(int *)((longlong)param_1 + 0xfc) = iVar17;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(int *)((longlong)param_1 + 0x104) = iVar17 - *(int *)((longlong)param_1 + 0xf4);
  if ((((*(int *)(*(longlong *)(*param_1 + 0x90) + 0x70) == 0x28) && (param_1[0x1b] != 0)) &&
      (iVar8 = *(int *)(param_1[0x1b] + 0x328), iVar8 != 2)) && (1 < iVar8 - 3U)) {
    iVar8 = *(int *)((longlong)param_1 + 0x4c) / 2;
    *(int *)(param_1 + 0x1f) = iVar8;
    *(int *)(param_1 + 0x20) = iVar8;
  }
  if (((int)param_1[6] == 0) || (*(short *)((longlong)param_1 + 0x34) == 0)) {
    if (((*(uint *)(lVar4 + 4) & 0x7fff0000) != 0) || ((*(uint *)(lVar4 + 8) & 0x8000) != 0)) {
      local_88 = param_1[0xb];
      local_80 = param_1[0xc];
      local_78 = param_1[0x1f];
      local_70 = param_1[0x20];
      local_f8 = &local_88;
      local_68 = 0;
      puStack_60 = (undefined4 *)0x0;
      local_100[0] = 0;
      local_58 = (undefined1 *)0x0;
      puStack_50 = (ushort *)0x0;
      local_f0 = 0;
      uStack_e8 = 0;
      local_168 = FUN_180590570(param_1,local_100,&local_68);
      if (local_168 != 0) goto LAB_180593c40;
    }
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      lVar21 = (longlong)local_150;
      lVar15 = (int)param_1[0xb] * lVar21;
      *(int *)(param_1 + 0xb) = (int)((ulonglong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10);
      lVar15 = (int)param_1[0xc] * lVar21;
      *(int *)(param_1 + 0xc) = (int)((ulonglong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10);
      lVar15 = (int)param_1[0x1f] * lVar21;
      *(int *)(param_1 + 0x1f) = (int)((ulonglong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10);
      lVar15 = (longlong)*(int *)((longlong)param_1 + 0xfc) * (longlong)local_14c;
      *(int *)((longlong)param_1 + 0xfc) =
           (int)((ulonglong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10);
      lVar21 = (int)param_1[0x20] * lVar21;
      *(int *)(param_1 + 0x20) = (int)((ulonglong)(lVar21 + 0x8000 + (lVar21 >> 0x3f)) >> 0x10);
      lVar15 = (longlong)*(int *)((longlong)param_1 + 0x104) * (longlong)local_14c;
      *(int *)((longlong)param_1 + 0x104) =
           (int)((ulonglong)(lVar15 + 0x8000 + (lVar15 >> 0x3f)) >> 0x10);
    }
    local_168 = 0;
    goto LAB_180593c40;
  }
  local_168 = (**(code **)(lVar4 + 0x2a8))
                        (param_1,param_2,(uint)local_140 + 10 + *(int *)(lVar4 + 0x3fc),
                         (int)param_1[6] + -10);
  if (local_168 != 0) goto LAB_180593c40;
  if (*(short *)((longlong)param_1 + 0x34) < 1) {
    if (*(short *)((longlong)param_1 + 0x34) < 0) {
      local_140 = *(ulonglong *)(lVar4 + 0x98);
      *(undefined2 *)((longlong)param_1 + 0x34) = 0xffff;
      if (param_1 + 0x23 != (longlong *)0x0) {
        uVar9 = local_134;
        for (lVar20 = param_1[0x23]; lVar20 != 0; lVar20 = *(longlong *)(lVar20 + 8)) {
          lVar10 = lVar20;
          if (uVar9 == 0) goto joined_r0x000180593535;
          uVar9 = uVar9 - 1;
        }
      }
      lVar20 = 0;
      goto LAB_180593502;
    }
  }
  else {
    local_168 = (**(code **)(lVar4 + 0x2c0))(param_1);
    if (local_168 == 0) {
      (**(code **)(lVar4 + 0x2b0))(param_1);
      local_168 = FUN_18058dc30(param_1);
      if (local_168 == 0) {
        FUN_180573bc0(lVar15);
      }
      goto LAB_180593c40;
    }
  }
LAB_18059351e:
  (**(code **)(lVar4 + 0x2b0))(param_1);
LAB_180593c40:
  param_1[5] = *(longlong *)(lVar4 + 0xa0);
  if (local_164 != '\0') {
    plVar6 = *(longlong **)(*(longlong *)(lVar4 + 0xd0) + 0x50);
    (**(code **)(*plVar6 + 8))(plVar6[1],&local_110);
  }
joined_r0x000180593535:
  for (; lVar10 != 0; lVar10 = *(longlong *)(lVar10 + 8)) {
    *(undefined8 *)(lVar10 + 0x10) = 0xffffffffffffffff;
  }
LAB_180593502:
  lVar10 = FUN_180574590(param_1 + 0x23,uVar24);
  uVar7 = local_140;
  if (lVar10 == 0) {
    if (lVar20 == 0) {
      lVar20 = FUN_18057abe0(local_140,0x18,&local_168);
      if (local_168 != 0) goto LAB_18059351e;
      *(ulonglong *)(lVar20 + 0x10) = uVar24;
      FUN_1805744d0(param_1 + 0x23,lVar20);
    }
    else {
      *(ulonglong *)(lVar20 + 0x10) = uVar24;
    }
    uVar2 = *(ushort *)(lVar15 + 0x1a);
    local_154 = (uint)*(ushort *)(lVar15 + 0x18);
    local_15c = (uint)uVar2;
    local_168 = (**(code **)(lVar4 + 0x2c8))(param_1);
    if (local_168 == 0) {
      local_138 = *(uint *)(param_1 + 0x1c);
      (**(code **)(lVar4 + 0x2b0))(param_1);
      if (((*(uint *)(lVar4 + 4) & 0x7fff0000) != 0) ||
         (uVar9 = (uint)uVar2, (*(uint *)(lVar4 + 8) & 0x8000) != 0)) {
        uVar2 = *(ushort *)(lVar15 + 0x98);
        local_170 = &local_168;
        local_68 = local_68 & 0xffffffff00000000;
        local_48 = 0;
        local_148 = uVar2 + 4;
        local_130 = 0;
        local_178 = (uint *)0x0;
        local_58 = (undefined1 *)0x0;
        puStack_50 = (ushort *)0x0;
        puVar11 = (undefined4 *)FUN_18057ac40(uVar7,8,0,local_148);
        puStack_60 = puVar11;
        if (local_168 == 0) {
          local_170 = &local_168;
          local_178 = (uint *)0x0;
          local_58 = (undefined1 *)FUN_18057ac40(uVar7,1,0,uVar2);
          if (local_168 == 0) {
            local_170 = &local_168;
            local_178 = (uint *)0x0;
            puVar12 = (ushort *)FUN_18057ac40(uVar7,2,0,uVar2);
            puStack_50 = puVar12;
            if (local_168 == 0) {
              local_170 = &local_168;
              local_178 = (uint *)0x0;
              local_130 = FUN_18057ac40(local_140,8,0,local_148);
              if (local_168 == 0) {
                uVar16 = 0;
                local_68 = CONCAT62(CONCAT42(local_68._4_4_,uVar2),uVar2);
                if (uVar2 != 0) {
                  puVar14 = (undefined4 *)(*(longlong *)(lVar15 + 0xa0) + 0xc);
                  puVar22 = puVar11;
                  puVar23 = local_58;
                  do {
                    *puVar22 = puVar14[-1];
                    puVar22[1] = *puVar14;
                    puVar14 = puVar14 + 8;
                    *puVar23 = 1;
                    *puVar12 = uVar16;
                    uVar16 = uVar16 + 1;
                    puVar12 = puVar12 + 1;
                    puVar22 = puVar22 + 2;
                    puVar23 = puVar23 + 1;
                  } while (uVar16 < uVar2);
                }
                *(longlong *)(puVar11 + (ulonglong)uVar16 * 2) = param_1[0xb];
                *(longlong *)(puVar11 + (ulonglong)(ushort)(uVar16 + 1) * 2) = param_1[0xc];
                *(longlong *)(puVar11 + (ulonglong)(ushort)(uVar16 + 2) * 2) = param_1[0x1f];
                *(longlong *)(puVar11 + (ulonglong)(ushort)(uVar16 + 3) * 2) = param_1[0x20];
                local_168 = FUN_180590570(param_1,&local_68,local_130);
                if (local_168 == 0) {
                  uVar16 = 0;
                  if (uVar2 != 0) {
                    piVar18 = (int *)(*(longlong *)(lVar15 + 0xa0) + 8);
                    do {
                      if ((*(byte *)(piVar18 + -1) & 2) != 0) {
                        *piVar18 = (int)*(short *)(puVar11 + (ulonglong)uVar16 * 2);
                        piVar18[1] = (int)*(short *)(puVar11 + (ulonglong)uVar16 * 2 + 1);
                      }
                      uVar16 = uVar16 + 1;
                      piVar18 = piVar18 + 8;
                    } while (uVar16 < uVar2);
                  }
                }
              }
            }
          }
        }
        uVar24 = local_140;
        FUN_18057abd0(local_140,puVar11);
        FUN_18057abd0(uVar24,local_58);
        FUN_18057abd0(uVar24,puStack_50);
        FUN_18057abd0(uVar24,local_130);
        if (local_168 != 0) goto LAB_180593c40;
        uVar9 = local_15c;
      }
      if ((*(uint *)(param_1 + 4) & 1) == 0) {
        lVar10 = (longlong)local_150;
        lVar20 = (int)param_1[0xb] * lVar10;
        *(int *)(param_1 + 0xb) = (int)((ulonglong)(lVar20 + 0x8000 + (lVar20 >> 0x3f)) >> 0x10);
        lVar20 = (int)param_1[0xc] * lVar10;
        *(int *)(param_1 + 0xc) = (int)((ulonglong)(lVar20 + 0x8000 + (lVar20 >> 0x3f)) >> 0x10);
        lVar20 = (int)param_1[0x1f] * lVar10;
        *(int *)(param_1 + 0x1f) = (int)((ulonglong)(lVar20 + 0x8000 + (lVar20 >> 0x3f)) >> 0x10);
        lVar20 = (longlong)*(int *)((longlong)param_1 + 0xfc) * (longlong)local_14c;
        *(int *)((longlong)param_1 + 0xfc) =
             (int)((ulonglong)(lVar20 + 0x8000 + (lVar20 >> 0x3f)) >> 0x10);
        lVar10 = (int)param_1[0x20] * lVar10;
        *(int *)(param_1 + 0x20) = (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
        lVar20 = (longlong)*(int *)((longlong)param_1 + 0x104) * (longlong)local_14c;
        *(int *)((longlong)param_1 + 0x104) =
             (int)((ulonglong)(lVar20 + 0x8000 + (lVar20 >> 0x3f)) >> 0x10);
      }
      if ((*(uint *)(param_1 + 4) >> 10 & 1) == 0) {
        uVar3 = *(uint *)(lVar15 + 0x50);
        local_140 = CONCAT44(local_140._4_4_,*(undefined4 *)(lVar15 + 0x98));
        local_88 = param_1[5];
        local_150 = (int)param_1[6];
        FUN_180573bc0(lVar15);
        uVar19 = 0;
        if ((uint)local_140 != 0) {
          local_118 = (ulonglong)uVar3;
          local_14c = local_134 + 1;
          do {
            lVar20 = param_1[0xb];
            uVar2 = *(ushort *)(lVar15 + 0x1a);
            local_130 = param_1[0xc];
            local_128 = param_1[0x1f];
            local_120 = param_1[0x20];
            local_148 = (int)param_1[10];
            local_134 = *(uint *)((longlong)param_1 + 0xf4);
            lVar21 = (uVar19 + local_118) * 0x20;
            local_168 = FUN_180593000(param_1,*(undefined4 *)(*(longlong *)(lVar15 + 0x58) + lVar21)
                                      ,local_14c,0);
            if (local_168 != 0) goto LAB_180593c40;
            lVar21 = lVar21 + *(longlong *)(lVar15 + 0x58);
            if ((*(ushort *)(lVar21 + 4) & 0x200) == 0) {
              param_1[0xc] = local_130;
              param_1[0x1f] = local_128;
              param_1[0x20] = local_120;
              *(int *)(param_1 + 10) = local_148;
              *(uint *)((longlong)param_1 + 0xf4) = local_134;
              param_1[0xb] = lVar20;
            }
            uVar9 = (uint)*(ushort *)(lVar15 + 0x1a);
            if ((uVar9 != uVar2) &&
               (local_168 = FUN_18058d7e0(param_1,lVar21,local_15c), local_168 != 0))
            goto LAB_180593c40;
            uVar19 = uVar19 + 1;
          } while (uVar19 < (uint)local_140);
        }
        param_1[5] = local_88;
        *(int *)(param_1 + 6) = local_150;
        *(uint *)(param_1 + 0x1c) = local_138;
        if ((((((*(byte *)(param_1 + 4) & 2) != 0) || (lVar21 == 0)) ||
             ((*(ushort *)(lVar21 + 4) & 0x100) == 0)) ||
            ((uVar9 <= local_15c ||
             (local_168 = FUN_18058d9c0(param_1,local_15c,local_154), local_168 == 0)))) &&
           ((*(int *)(lVar15 + 0x50) != 0 &&
            ((*(ushort *)(*(longlong *)(lVar15 + 0x58) + 4) & 0x400) != 0)))) {
          *(uint *)(lVar15 + 0x38) = *(uint *)(lVar15 + 0x38) | 0x40;
        }
      }
      else {
        FUN_180573bc0(lVar15);
        *(undefined4 *)(param_1[2] + 0x60) = 0x636f6d70;
      }
      goto LAB_180593c40;
    }
  }
  else {
    local_168 = 0x15;
  }
  goto LAB_18059351e;
}



