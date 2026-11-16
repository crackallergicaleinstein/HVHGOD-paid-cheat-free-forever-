// FUN_1805e5430 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e5430 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void FUN_1805e5430(longlong *param_1,undefined8 *param_2,longlong param_3,ulonglong *param_4,
                  ulonglong param_5,int param_6)

{
  ulonglong *puVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 ******ppppppuVar12;
  longlong *plVar13;
  undefined8 *******pppppppuVar14;
  undefined8 *******pppppppuVar15;
  undefined8 *******pppppppuVar16;
  undefined8 *******pppppppuVar17;
  undefined8 *puVar18;
  ulonglong uVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined8 *puVar23;
  int iVar24;
  ulonglong uVar25;
  undefined8 *******pppppppuVar26;
  ulonglong *puVar27;
  undefined8 *puVar28;
  longlong lVar29;
  int iVar30;
  longlong lVar31;
  ulonglong uVar32;
  undefined8 *******pppppppuVar33;
  undefined1 *puVar34;
  undefined8 *******pppppppuVar35;
  undefined1 *puVar36;
  undefined8 *******pppppppuVar37;
  undefined8 *******pppppppuVar38;
  undefined8 *******pppppppuVar39;
  uint uVar40;
  ulonglong uVar41;
  undefined1 auStack_2e8 [32];
  undefined8 *******local_2c8;
  undefined8 *******local_2c0;
  undefined8 *******local_2b8;
  undefined8 *******local_2b0;
  undefined8 *******local_2a8;
  ulonglong local_298;
  undefined8 *******local_290;
  uint local_288;
  undefined8 *******local_280;
  undefined8 *******local_278;
  ushort local_270;
  ushort local_26e;
  ushort local_26c;
  ulonglong *local_268;
  undefined8 *local_260;
  undefined8 *******local_258;
  undefined8 local_250;
  undefined8 *******local_248;
  ulonglong local_238;
  ulonglong uStack_230;
  ulonglong local_228;
  uint local_218;
  ulonglong local_210;
  ulonglong local_208;
  ulonglong uStack_200;
  ulonglong *local_1f8;
  ulonglong local_1e8;
  uint local_1e0;
  ulonglong *local_1d8;
  ulonglong *local_1d0;
  ulonglong *local_1c8;
  ulonglong local_1c0;
  longlong local_1b8;
  ulonglong local_1b0;
  longlong local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  ulonglong *local_190 [4];
  uint local_170;
  ulonglong local_168;
  ulonglong local_160;
  longlong local_158;
  ulonglong *local_150;
  int local_148;
  longlong *local_140;
  undefined8 *******local_138;
  longlong local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  ulonglong local_118 [24];
  ulonglong local_58;
  
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_2e8;
  local_140 = param_1;
  local_150 = param_4;
  local_120 = param_2;
  if ((int)param_1[0xed6] == 1) {
    local_260 = (undefined8 *)param_1[0xed4];
  }
  else {
    local_260 = (undefined8 *)((longlong)param_2 + param_3);
    if (param_3 < 1) {
      local_260 = param_2;
    }
  }
  local_258 = (undefined8 *******)param_1[0xe9a];
  pppppppuVar37 = (undefined8 *******)param_1[0xeb5];
  local_248 = (undefined8 *******)param_1[0xed5];
  local_280 = (undefined8 *******)param_1[0xe99];
  local_278 = (undefined8 *******)param_1[0xe9b];
  local_128 = param_2;
  local_138 = pppppppuVar37;
  local_290 = pppppppuVar37;
  if (param_6 == 0) goto LAB_1805e7208;
  *(undefined4 *)((longlong)param_1 + 0x7534) = 1;
  local_148 = 8;
  if (param_6 < 8) {
    local_148 = param_6;
  }
  local_268 = (ulonglong *)(ulonglong)*(uint *)((longlong)param_1 + 0x683c);
  local_190[0] = local_268;
  local_190[1] = (ulonglong *)(ulonglong)*(uint *)(param_1 + 0xd08);
  local_190[2] = (ulonglong *)(ulonglong)*(uint *)((longlong)param_1 + 0x6844);
  local_158 = (longlong)param_2 - (longlong)local_280;
  if (param_5 == 0) {
  }
  local_1c8 = param_4 + 1;
  if (param_5 < 8) {
    local_1e8 = (ulonglong)(byte)*param_4;
    switch(param_5) {
    case 7:
      local_1e8 = ((ulonglong)*(byte *)((longlong)param_4 + 6) << 0x30) + local_1e8;
    case 6:
      local_1e8 = local_1e8 + ((ulonglong)*(byte *)((longlong)param_4 + 5) << 0x28);
    case 5:
      local_1e8 = local_1e8 + ((ulonglong)*(byte *)((longlong)param_4 + 4) << 0x20);
    case 4:
      local_1e8 = local_1e8 + (ulonglong)*(byte *)((longlong)param_4 + 3) * 0x1000000;
    case 3:
      local_1e8 = local_1e8 + (ulonglong)*(byte *)((longlong)param_4 + 2) * 0x10000;
    case 2:
      local_1e8 = local_1e8 + (ulonglong)*(byte *)((longlong)param_4 + 1) * 0x100;
    }
    bVar22 = *(byte *)((longlong)param_4 + (param_5 - 1));
    if (bVar22 == 0) {
    }
    iVar24 = 0x1f;
    if (bVar22 != 0) {
      for (; bVar22 >> iVar24 == 0; iVar24 = iVar24 + -1) {
      }
    }
    iVar24 = (8 - iVar24) + (8 - (int)param_5) * 8;
    local_1d8 = param_4;
  }
  else {
    local_1e8 = *(ulonglong *)((longlong)param_4 + (param_5 - 8));
    local_1d8 = (ulonglong *)((longlong)param_4 + (param_5 - 8));
    bVar22 = *(byte *)((longlong)param_4 + (param_5 - 1));
    if (bVar22 == 0) {
    }
    iVar24 = 0x1f;
    if (bVar22 != 0) {
      for (; bVar22 >> iVar24 == 0; iVar24 = iVar24 + -1) {
      }
    }
    iVar24 = 8 - iVar24;
    if (0xffffffffffffff88 < param_5) {
    }
  }
  lVar29 = *param_1;
  local_1e0 = iVar24 + *(int *)(lVar29 + 4);
  local_1c0 = local_1e8 >> (-(char)local_1e0 & 0x3fU) &
              (1L << ((byte)*(undefined4 *)(lVar29 + 4) & 0x3f)) - 1U;
  local_160 = local_1c0;
  iVar24 = (int)param_4;
  if (local_1e0 < 0x41) {
    if (local_1d8 < local_1c8) {
      if (local_1d8 == param_4) goto LAB_1805e56e9;
      uVar25 = (ulonglong)(local_1e0 >> 3);
      if ((ulonglong *)((longlong)local_1d8 - uVar25) < param_4) {
        uVar25 = (ulonglong)(uint)((int)local_1d8 - iVar24);
      }
      local_1e0 = local_1e0 + (int)uVar25 * -8;
    }
    else {
      uVar25 = (ulonglong)(local_1e0 >> 3);
      local_1e0 = local_1e0 & 7;
    }
    local_1d8 = (ulonglong *)((longlong)local_1d8 - uVar25);
    local_1e8 = *local_1d8;
  }
  else {
    local_1d8 = (ulonglong *)&DAT_180687dd0;
  }
LAB_1805e56e9:
  lVar8 = param_1[2];
  local_1b8 = lVar29 + 8;
  local_1e0 = *(int *)(lVar8 + 4) + local_1e0;
  local_210 = local_1e8 >> (-(char)local_1e0 & 0x3fU) &
              (1L << ((byte)*(int *)(lVar8 + 4) & 0x3f)) - 1U;
  if (local_1e0 < 0x41) {
    if (local_1d8 < local_1c8) {
      if (local_1d8 == param_4) goto LAB_1805e577e;
      uVar25 = (ulonglong)(local_1e0 >> 3);
      if ((ulonglong *)((longlong)local_1d8 - uVar25) < param_4) {
        uVar25 = (ulonglong)(uint)((int)local_1d8 - iVar24);
      }
      local_1e0 = local_1e0 + (int)uVar25 * -8;
    }
    else {
      uVar25 = (ulonglong)(local_1e0 >> 3);
      local_1e0 = local_1e0 & 7;
    }
    local_1d8 = (ulonglong *)((longlong)local_1d8 - uVar25);
    local_1e8 = *local_1d8;
  }
  else {
    local_1d8 = (ulonglong *)&DAT_180687dd0;
  }
LAB_1805e577e:
  lVar9 = param_1[1];
  local_1a8 = lVar8 + 8;
  local_1e0 = *(int *)(lVar9 + 4) + local_1e0;
  local_1a0 = local_1e8 >> (-(char)local_1e0 & 0x3fU) &
              (1L << ((byte)*(int *)(lVar9 + 4) & 0x3f)) - 1U;
  local_168 = local_1a0;
  if (local_1e0 < 0x41) {
    if (local_1d8 < local_1c8) {
      if (local_1d8 == param_4) goto LAB_1805e581d;
      uVar25 = (ulonglong)(local_1e0 >> 3);
      if ((ulonglong *)((longlong)local_1d8 - uVar25) < param_4) {
        uVar25 = (ulonglong)(uint)((int)local_1d8 - iVar24);
      }
      local_1e0 = local_1e0 + (int)uVar25 * -8;
    }
    else {
      uVar25 = (ulonglong)(local_1e0 >> 3);
      local_1e0 = local_1e0 & 7;
    }
    local_1d8 = (ulonglong *)((longlong)local_1d8 - uVar25);
    local_1e8 = *local_1d8;
  }
  else {
    local_1d8 = (ulonglong *)&DAT_180687dd0;
  }
LAB_1805e581d:
  local_198 = lVar9 + 8;
  local_288 = 0;
  local_130 = (longlong)local_148;
  pppppppuVar33 = local_258;
  pppppppuVar35 = local_248;
  pppppppuVar16 = local_280;
  pppppppuVar17 = local_278;
  puVar27 = local_1d8;
  local_1d0 = param_4;
  uVar40 = local_1e0;
  local_298 = local_1e8;
  local_1b0 = local_210;
  local_268 = local_190[0];
  pppppppuVar26 = local_2b0;
  pppppppuVar38 = local_2b8;
  pppppppuVar15 = local_2c0;
  pppppppuVar14 = local_2c8;
  if (0 < (longlong)local_148) {
    local_190[3] = local_118;
    do {
      uStack_200 = (ulonglong)*(uint *)(lVar9 + 0xc + local_168 * 8);
      uVar6 = *(uint *)(lVar29 + 0xc + local_160 * 8);
      local_208 = (ulonglong)uVar6;
      uVar7 = *(uint *)(lVar8 + 0xc + local_210 * 8);
      bVar22 = *(byte *)(lVar29 + 10 + local_160 * 8);
      local_270 = *(ushort *)(local_1b8 + local_160 * 8);
      bVar21 = *(byte *)(lVar9 + 10 + local_168 * 8);
      bVar2 = *(byte *)(lVar8 + 10 + local_210 * 8);
      local_26e = *(ushort *)(local_198 + local_168 * 8);
      local_26c = *(ushort *)(local_1a8 + local_210 * 8);
      bVar3 = *(byte *)(lVar29 + 0xb + local_160 * 8);
      local_218 = (uint)bVar3;
      bVar4 = *(byte *)(lVar9 + 0xb + local_168 * 8);
      local_170 = (uint)bVar4;
      bVar5 = *(byte *)(lVar8 + 0xb + local_210 * 8);
      local_250 = CONCAT44(local_250._4_4_,(uint)bVar5);
      if (bVar2 < 2) {
        if (bVar2 != 0) {
          local_1e0 = uVar40 + 1;
          lVar31 = (ulonglong)((uVar6 == 0) + uVar7) -
                   ((longlong)(local_298 << ((byte)uVar40 & 0x3f)) >> 0x3f);
          if (lVar31 == 3) {
            local_190[0] = (ulonglong *)
                           (((longlong)local_268 - 1U) - (ulonglong)((longlong)local_268 - 1U == 0))
            ;
          }
          else {
            local_190[0] = (ulonglong *)
                           ((longlong)local_190[lVar31] -
                           (ulonglong)(local_190[lVar31] == (ulonglong *)0x0));
            if (lVar31 == 1) goto LAB_1805e59b6;
          }
          local_190[2] = local_190[1];
          goto LAB_1805e59b6;
        }
        local_268 = local_190[uVar6 == 0];
        local_190[1] = *(ulonglong **)((longlong)local_190 + (ulonglong)(-(uint)(uVar6 != 0) & 8));
        local_190[0] = local_268;
      }
      else {
        local_1e0 = uVar40 + bVar2;
        local_190[0] = (ulonglong *)
                       ((ulonglong)uVar7 + ((local_298 << ((byte)uVar40 & 0x3f)) >> (-bVar2 & 0x3f))
                       );
        local_190[2] = local_190[1];
LAB_1805e59b6:
        local_190[1] = local_268;
        uVar40 = local_1e0;
        local_268 = local_190[0];
      }
      if (bVar21 != 0) {
        bVar20 = (byte)uVar40;
        uVar40 = uVar40 + bVar21;
        uStack_200 = uStack_200 + ((local_298 << (bVar20 & 0x3f)) >> (-bVar21 & 0x3f));
        local_1e0 = uVar40;
      }
      if ((byte)(bVar21 + bVar2 + bVar22) < 0x1f) {
LAB_1805e5a17:
      }
      else {
        if (0x40 < uVar40) {
          puVar27 = (ulonglong *)&DAT_180687dd0;
          local_1d8 = (ulonglong *)&DAT_180687dd0;
          goto LAB_1805e5a17;
        }
        if (puVar27 < param_4 + 1) {
          if (puVar27 == param_4) goto LAB_1805e5a17;
          uVar25 = (ulonglong)(uVar40 >> 3);
          if ((ulonglong *)((longlong)puVar27 - uVar25) < param_4) {
            uVar25 = (ulonglong)(uint)((int)puVar27 - iVar24);
          }
          uVar40 = uVar40 + (int)uVar25 * -8;
        }
        else {
          uVar25 = (ulonglong)(uVar40 >> 3);
          uVar40 = uVar40 & 7;
        }
        puVar27 = (ulonglong *)((longlong)puVar27 - uVar25);
        local_298 = *puVar27;
        local_1e8 = local_298;
        local_1e0 = uVar40;
        local_1d8 = puVar27;
      }
      if (bVar22 != 0) {
        bVar21 = (byte)uVar40;
        uVar40 = uVar40 + bVar22;
        local_208 = local_208 + ((local_298 << (bVar21 & 0x3f)) >> (-bVar22 & 0x3f));
        local_1e0 = uVar40;
      }
      if (local_288 == param_6 - 1U) {
LAB_1805e5bc3:
      }
      else {
        local_1c0 = (local_298 >> (-(char)(uVar40 + local_218) & 0x3fU) &
                    (1L << (bVar3 & 0x3f)) - 1U) + (ulonglong)local_270;
        local_160 = local_1c0;
        iVar30 = uVar40 + local_218 + (uint)bVar4;
        local_1a0 = (local_298 >> (-(char)iVar30 & 0x3fU) & (1L << (bVar4 & 0x3f)) - 1U) +
                    (ulonglong)local_26e;
        local_168 = local_1a0;
        uVar40 = (uint)bVar5 + iVar30;
        local_210 = (local_298 >> (-(char)uVar40 & 0x3fU) & (1L << (bVar5 & 0x3f)) - 1U) +
                    (ulonglong)local_26c;
        local_1e0 = uVar40;
        local_1b0 = local_210;
        if (0x40 < uVar40) {
          puVar27 = (ulonglong *)&DAT_180687dd0;
          local_1d8 = (ulonglong *)&DAT_180687dd0;
          goto LAB_1805e5bc3;
        }
        if (puVar27 < param_4 + 1) {
          if (puVar27 == param_4) goto LAB_1805e5bc3;
          uVar25 = (ulonglong)(uVar40 >> 3);
          if ((ulonglong *)((longlong)puVar27 - uVar25) < param_4) {
            uVar25 = (ulonglong)(uint)((int)puVar27 - iVar24);
          }
          uVar40 = uVar40 + (int)uVar25 * -8;
        }
        else {
          uVar25 = (ulonglong)(uVar40 >> 3);
          uVar40 = uVar40 & 7;
        }
        puVar27 = (ulonglong *)((longlong)puVar27 - uVar25);
        local_298 = *puVar27;
        local_1e8 = local_298;
        local_1e0 = uVar40;
        local_1d8 = puVar27;
      }
      local_288 = local_288 + 1;
      local_158 = uStack_200 + local_158 + local_208;
      *local_190[3] = local_208;
      local_190[3][1] = uStack_200;
      local_190[3][2] = (ulonglong)local_268;
      local_130 = local_130 + -1;
      local_190[3] = local_190[3] + 3;
      pppppppuVar33 = local_258;
      pppppppuVar35 = local_248;
      pppppppuVar16 = local_280;
      pppppppuVar17 = local_278;
      pppppppuVar37 = local_138;
      param_2 = local_128;
      local_1f8 = local_268;
      local_190[0] = local_268;
    } while (local_130 != 0);
  }
  while( true ) {
    local_2b0 = pppppppuVar17;
    local_2c0 = pppppppuVar16;
    local_2c8 = pppppppuVar35;
    local_2b8 = pppppppuVar33;
    local_248 = local_2c8;
    local_280 = local_2c0;
    local_258 = local_2b8;
    local_278 = local_2b0;
    if (param_6 <= (int)local_288) break;
    uStack_200 = (ulonglong)*(uint *)(local_198 + 4 + local_168 * 8);
    bVar22 = *(byte *)(local_198 + 2 + local_168 * 8);
    uVar6 = *(uint *)(local_1b8 + 4 + local_160 * 8);
    local_208 = (ulonglong)uVar6;
    uVar7 = *(uint *)(local_1a8 + 4 + local_210 * 8);
    bVar21 = *(byte *)(local_1a8 + 2 + local_210 * 8);
    bVar2 = *(byte *)(local_1b8 + 2 + local_160 * 8);
    local_26c = *(ushort *)(local_1b8 + local_160 * 8);
    local_26e = *(ushort *)(local_198 + local_168 * 8);
    local_270 = *(ushort *)(local_1a8 + local_210 * 8);
    bVar3 = *(byte *)(local_1b8 + 3 + local_160 * 8);
    local_218 = (uint)bVar3;
    bVar4 = *(byte *)(local_198 + 3 + local_168 * 8);
    local_250._4_4_ = (undefined4)(local_250 >> 0x20);
    local_250 = CONCAT44(local_250._4_4_,(uint)bVar4);
    bVar5 = *(byte *)(local_1a8 + 3 + local_210 * 8);
    local_170 = (uint)bVar5;
    if (bVar21 < 2) {
      if (bVar21 != 0) {
        local_1e0 = uVar40 + 1;
        lVar29 = (ulonglong)((uVar6 == 0) + uVar7) -
                 ((longlong)(local_298 << ((byte)uVar40 & 0x3f)) >> 0x3f);
        if (lVar29 == 3) {
          local_190[3] = (ulonglong *)
                         (((longlong)local_268 - 1U) - (ulonglong)((longlong)local_268 - 1U == 0));
        }
        else {
          local_190[3] = (ulonglong *)
                         ((longlong)local_190[lVar29] -
                         (ulonglong)(local_190[lVar29] == (ulonglong *)0x0));
          if (lVar29 == 1) goto LAB_1805e5dde;
        }
        local_190[2] = local_190[1];
        goto LAB_1805e5dde;
      }
      local_190[3] = local_190[uVar6 == 0];
      local_268 = *(ulonglong **)((longlong)local_190 + (ulonglong)(-(uint)(uVar6 != 0) & 8));
      local_190[0] = local_190[uVar6 == 0];
    }
    else {
      local_1e0 = uVar40 + bVar21;
      local_190[3] = (ulonglong *)
                     (((local_298 << ((byte)uVar40 & 0x3f)) >> (-bVar21 & 0x3f)) + (ulonglong)uVar7)
      ;
      local_190[2] = local_190[1];
LAB_1805e5dde:
      local_190[0] = local_190[3];
      uVar40 = local_1e0;
    }
    local_190[1] = local_268;
    if (bVar22 != 0) {
      bVar20 = (byte)uVar40;
      uVar40 = uVar40 + bVar22;
      uStack_200 = uStack_200 + ((local_298 << (bVar20 & 0x3f)) >> (-bVar22 & 0x3f));
      local_1e0 = uVar40;
    }
    if ((byte)(bVar22 + bVar21 + bVar2) < 0x1f) {
LAB_1805e5e37:
    }
    else {
      if (0x40 < uVar40) {
        puVar27 = (ulonglong *)&DAT_180687dd0;
        local_1d8 = (ulonglong *)&DAT_180687dd0;
        goto LAB_1805e5e37;
      }
      if (puVar27 < local_1c8) {
        if (puVar27 == local_150) goto LAB_1805e5e37;
        uVar25 = (ulonglong)(uVar40 >> 3);
        if ((ulonglong *)((longlong)puVar27 - uVar25) < local_150) {
          uVar25 = (ulonglong)(uint)((int)puVar27 - (int)local_150);
        }
        uVar40 = uVar40 + (int)uVar25 * -8;
      }
      else {
        uVar25 = (ulonglong)(uVar40 >> 3);
        uVar40 = uVar40 & 7;
      }
      puVar27 = (ulonglong *)((longlong)puVar27 - uVar25);
      local_298 = *puVar27;
      local_1e8 = local_298;
      local_1e0 = uVar40;
      local_1d8 = puVar27;
    }
    if (bVar2 != 0) {
      bVar22 = (byte)uVar40;
      uVar40 = uVar40 + bVar2;
      local_208 = local_208 + ((local_298 << (bVar22 & 0x3f)) >> (-bVar2 & 0x3f));
      local_1e0 = uVar40;
    }
    if (local_288 != param_6 - 1U) {
      local_1c0 = (local_298 >> (-(char)(uVar40 + local_218) & 0x3fU) & (1L << (bVar3 & 0x3f)) - 1U)
                  + (ulonglong)local_26c;
      local_160 = local_1c0;
      iVar24 = uVar40 + local_218 + (uint)bVar4;
      local_1a0 = (local_298 >> (-(char)iVar24 & 0x3fU) & (1L << (bVar4 & 0x3f)) - 1U) +
                  (ulonglong)local_26e;
      local_168 = local_1a0;
      uVar40 = (uint)bVar5 + iVar24;
      local_210 = (local_298 >> (-(char)uVar40 & 0x3fU) & (1L << (bVar5 & 0x3f)) - 1U) +
                  (ulonglong)local_270;
      local_1e0 = uVar40;
      local_1b0 = local_210;
      if (uVar40 < 0x41) {
        if (puVar27 < local_1c8) {
          if (puVar27 == local_150) goto LAB_1805e5fd2;
          uVar25 = (ulonglong)(uVar40 >> 3);
          if ((ulonglong *)((longlong)puVar27 - uVar25) < local_150) {
            uVar25 = (ulonglong)(uint)((int)puVar27 - (int)local_150);
          }
          local_1e0 = uVar40 + (int)uVar25 * -8;
        }
        else {
          uVar25 = (ulonglong)(uVar40 >> 3);
          local_1e0 = uVar40 & 7;
        }
        puVar27 = (ulonglong *)((longlong)puVar27 - uVar25);
        local_298 = *puVar27;
        local_1e8 = local_298;
      }
      else {
        puVar27 = (ulonglong *)&DAT_180687dd0;
      }
      uVar40 = local_1e0;
      local_1d8 = puVar27;
    }
LAB_1805e5fd2:
    local_268 = local_190[3];
    local_1f8 = local_190[3];
    local_190[0] = local_190[3];
    if ((int)local_140[0xed6] == 2) {
      uVar19 = (ulonglong)(local_288 & 7);
      uVar25 = local_118[uVar19 * 3];
      puVar1 = local_118 + uVar19 * 3;
      if ((undefined1 *)(uVar25 + (longlong)pppppppuVar37) <= (undefined1 *)local_140[0xed5])
      goto LAB_1805e6367;
      uVar32 = local_140[0xed5] - (longlong)pppppppuVar37;
      if (uVar32 != 0) {
        if ((ulonglong)((longlong)local_260 - (longlong)param_2) < uVar32) {
        }
        local_2c8 = pppppppuVar14;
        local_2c0 = pppppppuVar15;
        local_2b8 = pppppppuVar38;
        local_2b0 = pppppppuVar26;
        FUN_1805e95d0(param_2,pppppppuVar37);
        *puVar1 = uVar25 - uVar32;
        param_2 = (undefined8 *)((longlong)param_2 + uVar32);
        pppppppuVar14 = local_2c8;
        pppppppuVar15 = local_2c0;
        pppppppuVar38 = local_2b8;
        pppppppuVar26 = local_2b0;
      }
      local_2b0 = pppppppuVar26;
      local_2b8 = pppppppuVar38;
      local_2c0 = pppppppuVar15;
      local_2c8 = pppppppuVar14;
      uVar25 = *puVar1;
      local_290 = (undefined8 *******)((longlong)local_140 + 0x76b4);
      local_228 = local_118[uVar19 * 3 + 2];
      local_248 = (undefined8 *******)((longlong)local_140 + 0x176b4);
      *(undefined4 *)(local_140 + 0xed6) = 0;
      uVar32 = local_118[uVar19 * 3 + 1];
      puVar28 = (undefined8 *)(uVar25 + (longlong)param_2);
      pppppppuVar39 = (undefined8 *******)(uVar25 + (longlong)local_290);
      puVar36 = (undefined1 *)(uVar32 + uVar25);
      local_250 = uVar32;
      if ((local_248 < pppppppuVar39) || (local_260 + -4 < puVar36 + (longlong)param_2)) {
        local_238 = *puVar1;
        uStack_230 = local_118[uVar19 * 3 + 1];
        local_228 = local_118[uVar19 * 3 + 2];
        local_2b0 = local_278;
        local_2b8 = local_258;
        local_2c0 = local_280;
        local_2c8 = local_248;
        puVar36 = (undefined1 *)FUN_1805e9140(param_2,local_260,&local_238,&local_290);
        pppppppuVar39 = local_290;
      }
      else {
        uVar11 = *(undefined8 *)((longlong)local_140 + 0x76bc);
        *param_2 = *local_290;
        param_2[1] = uVar11;
        if (0x10 < uVar25) {
          uVar11 = *(undefined8 *)((longlong)local_140 + 0x76cc);
          param_2[2] = *(undefined8 *)((longlong)local_140 + 0x76c4);
          param_2[3] = uVar11;
          if (0x10 < (longlong)(uVar25 - 0x10)) {
            puVar23 = param_2 + 4;
            puVar18 = (undefined8 *)((longlong)local_140 + 0x76d4);
            do {
              uVar11 = puVar18[1];
              *puVar23 = *puVar18;
              puVar23[1] = uVar11;
              uVar11 = puVar18[3];
              puVar23[2] = puVar18[2];
              puVar23[3] = uVar11;
              puVar23 = puVar23 + 4;
              puVar18 = puVar18 + 4;
            } while (puVar23 < (undefined8 *)((uVar25 - 0x10) + (longlong)(param_2 + 2)));
          }
        }
        pppppppuVar37 = (undefined8 *******)((longlong)puVar28 - local_228);
        local_290 = pppppppuVar39;
        if ((ulonglong)((longlong)puVar28 - (longlong)local_280) < local_228) {
          if ((ulonglong)((longlong)puVar28 - (longlong)local_258) < local_228) {
          }
          puVar34 = (undefined1 *)
                    ((longlong)((longlong)puVar28 - local_228) +
                    ((longlong)local_278 - (longlong)local_280));
          if (puVar34 + uVar32 <= local_278) {
            FUN_18063aed0(puVar28,puVar34,uVar32);
            goto LAB_1805e632a;
          }
          lVar29 = (longlong)local_278 - (longlong)puVar34;
          FUN_18063aed0(puVar28,puVar34,lVar29);
          puVar28 = (undefined8 *)((longlong)puVar28 + lVar29);
          uVar32 = local_250 - lVar29;
          pppppppuVar37 = local_280;
        }
        if (local_228 < 0x10) {
          if (local_228 < 8) {
            *(undefined1 *)puVar28 = *(undefined1 *)pppppppuVar37;
            *(undefined1 *)((longlong)puVar28 + 1) = *(undefined1 *)((longlong)pppppppuVar37 + 1);
            *(undefined1 *)((longlong)puVar28 + 2) = *(undefined1 *)((longlong)pppppppuVar37 + 2);
            *(undefined1 *)((longlong)puVar28 + 3) = *(undefined1 *)((longlong)pppppppuVar37 + 3);
            uVar6 = *(uint *)(&DAT_1806886d8 + local_228 * 4);
            *(undefined4 *)((longlong)puVar28 + 4) =
                 *(undefined4 *)((longlong)pppppppuVar37 + (ulonglong)uVar6);
            pppppppuVar37 =
                 (undefined8 *******)
                 ((longlong)((longlong)pppppppuVar37 + (ulonglong)uVar6) -
                 (longlong)*(int *)(&DAT_1806886f8 + local_228 * 4));
          }
          else {
            *puVar28 = *pppppppuVar37;
          }
          if (8 < uVar32) {
            puVar23 = puVar28 + 1;
            pppppppuVar26 = pppppppuVar37 + 1;
            puVar18 = (undefined8 *)((longlong)puVar23 + (uVar32 - 8));
            if ((longlong)puVar23 - (longlong)pppppppuVar26 < 0x10) {
              lVar29 = (longlong)pppppppuVar26 - (longlong)puVar23;
              do {
                *puVar23 = *(undefined8 *)((longlong)puVar23 + lVar29);
                puVar23 = puVar23 + 1;
              } while (puVar23 < puVar18);
            }
            else {
              ppppppuVar12 = pppppppuVar37[2];
              *puVar23 = *pppppppuVar26;
              puVar28[2] = ppppppuVar12;
              if (0x10 < (longlong)(uVar32 - 8)) {
                puVar28 = puVar28 + 3;
                pppppppuVar37 = pppppppuVar37 + 3;
                do {
                  ppppppuVar12 = pppppppuVar37[1];
                  *puVar28 = *pppppppuVar37;
                  puVar28[1] = ppppppuVar12;
                  ppppppuVar12 = pppppppuVar37[3];
                  puVar28[2] = pppppppuVar37[2];
                  puVar28[3] = ppppppuVar12;
                  puVar28 = puVar28 + 4;
                  pppppppuVar37 = pppppppuVar37 + 4;
                } while (puVar28 < puVar18);
              }
            }
          }
        }
        else {
          ppppppuVar12 = pppppppuVar37[1];
          *puVar28 = *pppppppuVar37;
          puVar28[1] = ppppppuVar12;
          if (0x10 < (longlong)uVar32) {
            puVar18 = puVar28 + 2;
            pppppppuVar37 = pppppppuVar37 + 2;
            do {
              ppppppuVar12 = pppppppuVar37[1];
              *puVar18 = *pppppppuVar37;
              puVar18[1] = ppppppuVar12;
              ppppppuVar12 = pppppppuVar37[3];
              puVar18[2] = pppppppuVar37[2];
              puVar18[3] = ppppppuVar12;
              puVar18 = puVar18 + 4;
              pppppppuVar37 = pppppppuVar37 + 4;
            } while (puVar18 < (undefined8 *)(uVar32 + (longlong)puVar28));
          }
        }
      }
LAB_1805e632a:
      if ((undefined1 *)0xffffffffffffff88 < puVar36) {
      }
      local_158 = local_158 + local_208 + uStack_200;
    }
    else {
LAB_1805e6367:
      uVar25 = (ulonglong)(local_288 & 7);
      local_228 = local_118[uVar25 * 3 + 2];
      puVar1 = local_118 + uVar25 * 3;
      if ((int)local_140[0xed6] == 2) {
        uVar19 = *puVar1;
        uVar32 = local_118[uVar25 * 3 + 1];
        puVar28 = (undefined8 *)(uVar19 + (longlong)param_2);
        pppppppuVar39 = (undefined8 *******)(uVar19 + (longlong)pppppppuVar37);
        puVar34 = (undefined1 *)((uVar19 - 0x20) + (longlong)pppppppuVar37);
        puVar36 = (undefined1 *)(uVar32 + uVar19);
        local_250 = uVar32;
        if ((pppppppuVar39 <= local_2c8) &&
           ((undefined1 *)((longlong)param_2 + (longlong)puVar36) <= puVar34)) {
          ppppppuVar12 = pppppppuVar37[1];
          *param_2 = *pppppppuVar37;
          param_2[1] = ppppppuVar12;
          if (0x10 < uVar19) {
            ppppppuVar12 = pppppppuVar37[3];
            param_2[2] = pppppppuVar37[2];
            param_2[3] = ppppppuVar12;
            if (0x10 < (longlong)(uVar19 - 0x10)) {
              puVar18 = param_2 + 4;
              do {
                ppppppuVar12 = pppppppuVar37[5];
                *puVar18 = pppppppuVar37[4];
                puVar18[1] = ppppppuVar12;
                ppppppuVar12 = pppppppuVar37[7];
                puVar18[2] = pppppppuVar37[6];
                puVar18[3] = ppppppuVar12;
                puVar18 = puVar18 + 4;
                pppppppuVar37 = pppppppuVar37 + 4;
              } while (puVar18 < (undefined8 *)((uVar19 - 0x10) + (longlong)(param_2 + 2)));
            }
          }
          pppppppuVar37 = (undefined8 *******)((longlong)puVar28 - local_228);
          local_290 = pppppppuVar39;
          if ((ulonglong)((longlong)puVar28 - (longlong)local_2c0) < local_228) {
            if ((ulonglong)((longlong)puVar28 - (longlong)local_2b8) < local_228) {
              puVar36 = (undefined1 *)0xffffffffffffffec;
            }
            else {
              puVar34 = (undefined1 *)
                        ((longlong)((longlong)puVar28 - local_228) +
                        ((longlong)local_2b0 - (longlong)local_2c0));
              if (local_2b0 < puVar34 + uVar32) {
                lVar29 = (longlong)local_2b0 - (longlong)puVar34;
                local_2c8 = pppppppuVar14;
                local_2c0 = pppppppuVar15;
                local_2b8 = pppppppuVar38;
                local_2b0 = pppppppuVar26;
                FUN_18063aed0(puVar28,puVar34,lVar29);
                puVar28 = (undefined8 *)((longlong)puVar28 + lVar29);
                uVar32 = local_250 - lVar29;
                pppppppuVar37 = local_280;
                pppppppuVar14 = local_2c8;
                pppppppuVar15 = local_2c0;
                pppppppuVar38 = local_2b8;
                pppppppuVar26 = local_2b0;
                goto LAB_1805e64b7;
              }
              local_2c8 = pppppppuVar14;
              local_2c0 = pppppppuVar15;
              local_2b8 = pppppppuVar38;
              local_2b0 = pppppppuVar26;
              FUN_18063aed0(puVar28,puVar34,uVar32);
              pppppppuVar14 = local_2c8;
              pppppppuVar15 = local_2c0;
              pppppppuVar38 = local_2b8;
              pppppppuVar26 = local_2b0;
            }
          }
          else {
LAB_1805e64b7:
            local_2b0 = pppppppuVar26;
            local_2b8 = pppppppuVar38;
            local_2c0 = pppppppuVar15;
            local_2c8 = pppppppuVar14;
            pppppppuVar14 = local_2c8;
            pppppppuVar15 = local_2c0;
            pppppppuVar38 = local_2b8;
            pppppppuVar26 = local_2b0;
            if (local_228 < 0x10) {
              if (local_228 < 8) {
                *(undefined1 *)puVar28 = *(undefined1 *)pppppppuVar37;
                *(undefined1 *)((longlong)puVar28 + 1) =
                     *(undefined1 *)((longlong)pppppppuVar37 + 1);
                *(undefined1 *)((longlong)puVar28 + 2) =
                     *(undefined1 *)((longlong)pppppppuVar37 + 2);
                *(undefined1 *)((longlong)puVar28 + 3) =
                     *(undefined1 *)((longlong)pppppppuVar37 + 3);
                uVar6 = *(uint *)(&DAT_1806886d8 + local_228 * 4);
                *(undefined4 *)((longlong)puVar28 + 4) =
                     *(undefined4 *)((longlong)pppppppuVar37 + (ulonglong)uVar6);
                pppppppuVar37 =
                     (undefined8 *******)
                     ((longlong)((longlong)pppppppuVar37 + (ulonglong)uVar6) -
                     (longlong)*(int *)(&DAT_1806886f8 + local_228 * 4));
              }
              else {
                *puVar28 = *pppppppuVar37;
              }
              if (8 < uVar32) {
                pppppppuVar33 = pppppppuVar37 + 1;
                puVar23 = puVar28 + 1;
                puVar18 = (undefined8 *)((longlong)puVar23 + (uVar32 - 8));
                if ((longlong)puVar23 - (longlong)pppppppuVar33 < 0x10) {
                  lVar29 = (longlong)pppppppuVar33 - (longlong)puVar23;
                  do {
                    *puVar23 = *(undefined8 *)(lVar29 + (longlong)puVar23);
                    puVar23 = puVar23 + 1;
                  } while (puVar23 < puVar18);
                }
                else {
                  ppppppuVar12 = pppppppuVar37[2];
                  *puVar23 = *pppppppuVar33;
                  puVar28[2] = ppppppuVar12;
                  if (0x10 < (longlong)(uVar32 - 8)) {
                    puVar28 = puVar28 + 3;
                    pppppppuVar37 = pppppppuVar37 + 3;
                    do {
                      ppppppuVar12 = pppppppuVar37[1];
                      *puVar28 = *pppppppuVar37;
                      puVar28[1] = ppppppuVar12;
                      ppppppuVar12 = pppppppuVar37[3];
                      puVar28[2] = pppppppuVar37[2];
                      puVar28[3] = ppppppuVar12;
                      puVar28 = puVar28 + 4;
                      pppppppuVar37 = pppppppuVar37 + 4;
                    } while (puVar28 < puVar18);
                  }
                }
              }
            }
            else {
              ppppppuVar12 = pppppppuVar37[1];
              *puVar28 = *pppppppuVar37;
              puVar28[1] = ppppppuVar12;
              if (0x10 < (longlong)uVar32) {
                puVar18 = puVar28 + 2;
                pppppppuVar37 = pppppppuVar37 + 2;
                do {
                  ppppppuVar12 = pppppppuVar37[1];
                  *puVar18 = *pppppppuVar37;
                  puVar18[1] = ppppppuVar12;
                  ppppppuVar12 = pppppppuVar37[3];
                  puVar18[2] = pppppppuVar37[2];
                  puVar18[3] = ppppppuVar12;
                  puVar18 = puVar18 + 4;
                  pppppppuVar37 = pppppppuVar37 + 4;
                } while (puVar18 < (undefined8 *)(uVar32 + (longlong)puVar28));
              }
            }
          }
          goto LAB_1805e68e5;
        }
        local_238 = *puVar1;
        uStack_230 = local_118[uVar25 * 3 + 1];
        local_228 = local_118[uVar25 * 3 + 2];
        local_2c8 = &local_290;
        local_2c0 = local_248;
        local_2b8 = local_280;
        local_2a8 = local_2b0;
        local_2b0 = local_258;
        local_278 = local_2a8;
        puVar36 = (undefined1 *)FUN_1805e9280(param_2,local_260,puVar34,&local_238);
LAB_1805e68dd:
        pppppppuVar39 = local_290;
        pppppppuVar14 = local_2c8;
        pppppppuVar15 = local_2c0;
        pppppppuVar38 = local_2b8;
        pppppppuVar26 = local_2b0;
      }
      else {
        uVar19 = *puVar1;
        pppppppuVar33 = (undefined8 *******)local_118[uVar25 * 3 + 1];
        local_138 = pppppppuVar33;
        puVar28 = (undefined8 *)(uVar19 + (longlong)param_2);
        pppppppuVar39 = (undefined8 *******)(uVar19 + (longlong)pppppppuVar37);
        puVar36 = (undefined1 *)((longlong)pppppppuVar33 + uVar19);
        if ((local_2c8 < pppppppuVar39) || (local_260 + -4 < puVar36 + (longlong)param_2)) {
          local_238 = *puVar1;
          uStack_230 = local_118[uVar25 * 3 + 1];
          local_228 = local_118[uVar25 * 3 + 2];
          puVar36 = (undefined1 *)FUN_1805e9140(param_2,local_260,&local_238,&local_290);
          goto LAB_1805e68dd;
        }
        ppppppuVar12 = pppppppuVar37[1];
        *param_2 = *pppppppuVar37;
        param_2[1] = ppppppuVar12;
        if (0x10 < uVar19) {
          ppppppuVar12 = pppppppuVar37[3];
          param_2[2] = pppppppuVar37[2];
          param_2[3] = ppppppuVar12;
          if (0x10 < (longlong)(uVar19 - 0x10)) {
            puVar18 = param_2 + 4;
            do {
              ppppppuVar12 = pppppppuVar37[5];
              *puVar18 = pppppppuVar37[4];
              puVar18[1] = ppppppuVar12;
              ppppppuVar12 = pppppppuVar37[7];
              puVar18[2] = pppppppuVar37[6];
              puVar18[3] = ppppppuVar12;
              puVar18 = puVar18 + 4;
              pppppppuVar37 = pppppppuVar37 + 4;
            } while (puVar18 < (undefined8 *)((uVar19 - 0x10) + (longlong)(param_2 + 2)));
          }
        }
        pppppppuVar37 = (undefined8 *******)((longlong)puVar28 - local_228);
        local_290 = pppppppuVar39;
        if ((ulonglong)((longlong)puVar28 - (longlong)local_2c0) < local_228) {
          if ((ulonglong)((longlong)puVar28 - (longlong)local_2b8) < local_228) {
            puVar36 = (undefined1 *)0xffffffffffffffec;
          }
          else {
            puVar34 = (undefined1 *)
                      ((longlong)((longlong)puVar28 - local_228) +
                      ((longlong)local_2b0 - (longlong)local_2c0));
            if (local_2b0 < puVar34 + (longlong)pppppppuVar33) {
              lVar29 = (longlong)local_2b0 - (longlong)puVar34;
              local_2c8 = pppppppuVar14;
              local_2c0 = pppppppuVar15;
              local_2b8 = pppppppuVar38;
              local_2b0 = pppppppuVar26;
              FUN_18063aed0(puVar28,puVar34,lVar29);
              puVar28 = (undefined8 *)((longlong)puVar28 + lVar29);
              pppppppuVar33 = (undefined8 *******)((longlong)local_138 - lVar29);
              pppppppuVar37 = local_280;
              pppppppuVar14 = local_2c8;
              pppppppuVar15 = local_2c0;
              pppppppuVar38 = local_2b8;
              pppppppuVar26 = local_2b0;
              goto LAB_1805e6760;
            }
            local_2c8 = pppppppuVar14;
            local_2c0 = pppppppuVar15;
            local_2b8 = pppppppuVar38;
            local_2b0 = pppppppuVar26;
            FUN_18063aed0(puVar28,puVar34);
            pppppppuVar14 = local_2c8;
            pppppppuVar15 = local_2c0;
            pppppppuVar38 = local_2b8;
            pppppppuVar26 = local_2b0;
          }
        }
        else {
LAB_1805e6760:
          local_2b0 = pppppppuVar26;
          local_2b8 = pppppppuVar38;
          local_2c0 = pppppppuVar15;
          local_2c8 = pppppppuVar14;
          pppppppuVar14 = local_2c8;
          pppppppuVar15 = local_2c0;
          pppppppuVar38 = local_2b8;
          pppppppuVar26 = local_2b0;
          if (local_228 < 0x10) {
            if (local_228 < 8) {
              *(undefined1 *)puVar28 = *(undefined1 *)pppppppuVar37;
              *(undefined1 *)((longlong)puVar28 + 1) = *(undefined1 *)((longlong)pppppppuVar37 + 1);
              *(undefined1 *)((longlong)puVar28 + 2) = *(undefined1 *)((longlong)pppppppuVar37 + 2);
              *(undefined1 *)((longlong)puVar28 + 3) = *(undefined1 *)((longlong)pppppppuVar37 + 3);
              uVar6 = *(uint *)(&DAT_1806886d8 + local_228 * 4);
              *(undefined4 *)((longlong)puVar28 + 4) =
                   *(undefined4 *)((longlong)pppppppuVar37 + (ulonglong)uVar6);
              pppppppuVar37 =
                   (undefined8 *******)
                   ((longlong)((longlong)pppppppuVar37 + (ulonglong)uVar6) -
                   (longlong)*(int *)(&DAT_1806886f8 + local_228 * 4));
            }
            else {
              *puVar28 = *pppppppuVar37;
            }
            if (&DAT_00000008 < pppppppuVar33) {
              puVar23 = puVar28 + 1;
              pppppppuVar35 = pppppppuVar37 + 1;
              puVar18 = (undefined8 *)((longlong)puVar23 + (longlong)(pppppppuVar33 + -1));
              if ((longlong)puVar23 - (longlong)pppppppuVar35 < 0x10) {
                lVar29 = (longlong)pppppppuVar35 - (longlong)puVar23;
                do {
                  *puVar23 = *(undefined8 *)(lVar29 + (longlong)puVar23);
                  puVar23 = puVar23 + 1;
                } while (puVar23 < puVar18);
              }
              else {
                ppppppuVar12 = pppppppuVar37[2];
                *puVar23 = *pppppppuVar35;
                puVar28[2] = ppppppuVar12;
                if (0x10 < (longlong)(pppppppuVar33 + -1)) {
                  puVar28 = puVar28 + 3;
                  pppppppuVar37 = pppppppuVar37 + 3;
                  do {
                    ppppppuVar12 = pppppppuVar37[1];
                    *puVar28 = *pppppppuVar37;
                    puVar28[1] = ppppppuVar12;
                    ppppppuVar12 = pppppppuVar37[3];
                    puVar28[2] = pppppppuVar37[2];
                    puVar28[3] = ppppppuVar12;
                    puVar28 = puVar28 + 4;
                    pppppppuVar37 = pppppppuVar37 + 4;
                  } while (puVar28 < puVar18);
                }
              }
            }
          }
          else {
            ppppppuVar12 = pppppppuVar37[1];
            *puVar28 = *pppppppuVar37;
            puVar28[1] = ppppppuVar12;
            if (0x10 < (longlong)pppppppuVar33) {
              puVar18 = puVar28 + 2;
              pppppppuVar37 = pppppppuVar37 + 2;
              do {
                ppppppuVar12 = pppppppuVar37[1];
                *puVar18 = *pppppppuVar37;
                puVar18[1] = ppppppuVar12;
                ppppppuVar12 = pppppppuVar37[3];
                puVar18[2] = pppppppuVar37[2];
                puVar18[3] = ppppppuVar12;
                puVar18 = puVar18 + 4;
                pppppppuVar37 = pppppppuVar37 + 4;
              } while (puVar18 < (undefined8 *)((longlong)pppppppuVar33 + (longlong)puVar28));
            }
          }
        }
      }
LAB_1805e68e5:
      local_2b0 = pppppppuVar26;
      local_2b8 = pppppppuVar38;
      local_2c0 = pppppppuVar15;
      local_2c8 = pppppppuVar14;
      if ((undefined1 *)0xffffffffffffff88 < puVar36) {
      }
      local_158 = uStack_200 + local_158 + local_208;
    }
    param_2 = (undefined8 *)((longlong)param_2 + (longlong)puVar36);
    uVar25 = (ulonglong)(local_288 & 7);
    local_118[uVar25 * 3] = local_208;
    local_118[uVar25 * 3 + 1] = uStack_200;
    local_118[uVar25 * 3 + 2] = (ulonglong)local_1f8;
    pppppppuVar33 = local_258;
    pppppppuVar35 = local_248;
    pppppppuVar16 = local_280;
    pppppppuVar17 = local_278;
    pppppppuVar37 = pppppppuVar39;
    local_288 = local_288 + 1;
    pppppppuVar26 = local_2b0;
    pppppppuVar38 = local_2b8;
    pppppppuVar15 = local_2c0;
    pppppppuVar14 = local_2c8;
  }
  if (puVar27 != local_150) {
  }
  if (uVar40 != 0x40) {
  }
  local_288 = local_288 - local_148;
  plVar13 = local_140;
  while( true ) {
    local_2b0 = pppppppuVar26;
    local_2b8 = pppppppuVar38;
    local_2c0 = pppppppuVar15;
    local_2c8 = pppppppuVar14;
    local_140 = plVar13;
    if (param_6 <= (int)local_288) break;
    uVar25 = (ulonglong)(local_288 & 7);
    puVar27 = local_118 + uVar25 * 3;
    if ((int)plVar13[0xed6] == 2) {
      uVar19 = *puVar27;
      if ((undefined1 *)plVar13[0xed5] < (undefined1 *)(uVar19 + (longlong)pppppppuVar37)) {
        uVar32 = plVar13[0xed5] - (longlong)pppppppuVar37;
        if (uVar32 != 0) {
          if ((ulonglong)((longlong)local_260 - (longlong)param_2) < uVar32) {
          }
          FUN_1805e95d0(param_2,pppppppuVar37);
          *puVar27 = uVar19 - uVar32;
          param_2 = (undefined8 *)((longlong)param_2 + uVar32);
        }
        uVar10 = *puVar27;
        local_290 = (undefined8 *******)((longlong)plVar13 + 0x76b4);
        uVar32 = local_118[uVar25 * 3 + 2];
        local_248 = (undefined8 *******)((longlong)plVar13 + 0x176b4);
        uVar41 = local_118[uVar25 * 3 + 1];
        *(undefined4 *)(plVar13 + 0xed6) = 0;
        puVar28 = (undefined8 *)(uVar10 + (longlong)param_2);
        pppppppuVar26 = (undefined8 *******)(uVar10 + (longlong)local_290);
        uVar19 = uVar41 + uVar10;
        if ((pppppppuVar26 <= local_248) &&
           ((undefined8 *)(uVar19 + (longlong)param_2) <= local_260 + -4)) {
          uVar11 = *(undefined8 *)((longlong)plVar13 + 0x76bc);
          *param_2 = *local_290;
          param_2[1] = uVar11;
          if (0x10 < uVar10) {
            uVar11 = *(undefined8 *)((longlong)plVar13 + 0x76cc);
            param_2[2] = *(undefined8 *)((longlong)plVar13 + 0x76c4);
            param_2[3] = uVar11;
            if (0x10 < (longlong)(uVar10 - 0x10)) {
              puVar23 = param_2 + 4;
              puVar18 = (undefined8 *)((longlong)plVar13 + 0x76d4);
              do {
                uVar11 = puVar18[1];
                *puVar23 = *puVar18;
                puVar23[1] = uVar11;
                uVar11 = puVar18[3];
                puVar23[2] = puVar18[2];
                puVar23[3] = uVar11;
                puVar23 = puVar23 + 4;
                puVar18 = puVar18 + 4;
              } while (puVar23 < (undefined8 *)((longlong)(param_2 + 2) + (uVar10 - 0x10)));
            }
          }
          pppppppuVar37 = (undefined8 *******)((longlong)puVar28 - uVar32);
          local_290 = pppppppuVar26;
          local_228 = uVar32;
          if ((ulonglong)((longlong)puVar28 - (longlong)local_280) < uVar32) {
            if ((ulonglong)((longlong)puVar28 - (longlong)local_258) < uVar32) {
            }
            puVar36 = (undefined1 *)
                      ((longlong)((longlong)puVar28 - uVar32) +
                      ((longlong)local_278 - (longlong)local_280));
            if (puVar36 + uVar41 <= local_278) {
              FUN_18063aed0(puVar28,puVar36,uVar41);
              goto LAB_1805e71b1;
            }
            lVar29 = (longlong)local_278 - (longlong)puVar36;
            FUN_18063aed0(puVar28,puVar36,lVar29);
            puVar28 = (undefined8 *)((longlong)puVar28 + lVar29);
            uVar41 = uVar41 - lVar29;
            pppppppuVar37 = local_280;
          }
          if (uVar32 < 0x10) {
            if (uVar32 < 8) {
              *(undefined1 *)puVar28 = *(undefined1 *)pppppppuVar37;
              *(undefined1 *)((longlong)puVar28 + 1) = *(undefined1 *)((longlong)pppppppuVar37 + 1);
              *(undefined1 *)((longlong)puVar28 + 2) = *(undefined1 *)((longlong)pppppppuVar37 + 2);
              *(undefined1 *)((longlong)puVar28 + 3) = *(undefined1 *)((longlong)pppppppuVar37 + 3);
              uVar40 = *(uint *)(&DAT_1806886d8 + uVar32 * 4);
              *(undefined4 *)((longlong)puVar28 + 4) =
                   *(undefined4 *)((longlong)pppppppuVar37 + (ulonglong)uVar40);
              pppppppuVar37 =
                   (undefined8 *******)
                   ((longlong)((longlong)pppppppuVar37 + (ulonglong)uVar40) -
                   (longlong)*(int *)(&DAT_1806886f8 + uVar32 * 4));
            }
            else {
              *puVar28 = *pppppppuVar37;
            }
            if (8 < uVar41) {
              puVar18 = puVar28 + 1;
              pppppppuVar38 = pppppppuVar37 + 1;
              puVar23 = (undefined8 *)((longlong)puVar18 + (uVar41 - 8));
              if ((longlong)puVar18 - (longlong)pppppppuVar38 < 0x10) {
                lVar29 = (longlong)pppppppuVar38 - (longlong)puVar18;
                do {
                  *puVar18 = *(undefined8 *)(lVar29 + (longlong)puVar18);
                  puVar18 = puVar18 + 1;
                } while (puVar18 < puVar23);
              }
              else {
                ppppppuVar12 = pppppppuVar37[2];
                *puVar18 = *pppppppuVar38;
                puVar28[2] = ppppppuVar12;
                if (0x10 < (longlong)(uVar41 - 8)) {
                  puVar28 = puVar28 + 3;
                  pppppppuVar37 = pppppppuVar37 + 3;
                  do {
                    ppppppuVar12 = pppppppuVar37[1];
                    *puVar28 = *pppppppuVar37;
                    puVar28[1] = ppppppuVar12;
                    ppppppuVar12 = pppppppuVar37[3];
                    puVar28[2] = pppppppuVar37[2];
                    puVar28[3] = ppppppuVar12;
                    puVar28 = puVar28 + 4;
                    pppppppuVar37 = pppppppuVar37 + 4;
                  } while (puVar28 < puVar23);
                }
              }
            }
          }
          else {
            ppppppuVar12 = pppppppuVar37[1];
            *puVar28 = *pppppppuVar37;
            puVar28[1] = ppppppuVar12;
            if (0x10 < (longlong)uVar41) {
              puVar18 = puVar28 + 2;
              pppppppuVar37 = pppppppuVar37 + 2;
              do {
                ppppppuVar12 = pppppppuVar37[1];
                *puVar18 = *pppppppuVar37;
                puVar18[1] = ppppppuVar12;
                ppppppuVar12 = pppppppuVar37[3];
                puVar18[2] = pppppppuVar37[2];
                puVar18[3] = ppppppuVar12;
                puVar18 = puVar18 + 4;
                pppppppuVar37 = pppppppuVar37 + 4;
              } while (puVar18 < (undefined8 *)(uVar41 + (longlong)puVar28));
            }
          }
          goto LAB_1805e71b1;
        }
        goto LAB_1805e7183;
      }
      uVar10 = *puVar27;
      uVar32 = local_118[uVar25 * 3 + 2];
      uVar41 = local_118[uVar25 * 3 + 1];
      puVar28 = (undefined8 *)(uVar10 + (longlong)param_2);
      pppppppuVar26 = (undefined8 *******)(uVar10 + (longlong)pppppppuVar37);
      uVar19 = uVar41 + uVar10;
      puVar36 = (undefined1 *)((uVar10 - 0x20) + (longlong)pppppppuVar37);
      if ((pppppppuVar26 <= local_248) && ((undefined1 *)(uVar19 + (longlong)param_2) <= puVar36)) {
        ppppppuVar12 = pppppppuVar37[1];
        *param_2 = *pppppppuVar37;
        param_2[1] = ppppppuVar12;
        if (0x10 < uVar10) {
          ppppppuVar12 = pppppppuVar37[3];
          param_2[2] = pppppppuVar37[2];
          param_2[3] = ppppppuVar12;
          if (0x10 < (longlong)(uVar10 - 0x10)) {
            puVar18 = param_2 + 4;
            do {
              ppppppuVar12 = pppppppuVar37[5];
              *puVar18 = pppppppuVar37[4];
              puVar18[1] = ppppppuVar12;
              ppppppuVar12 = pppppppuVar37[7];
              puVar18[2] = pppppppuVar37[6];
              puVar18[3] = ppppppuVar12;
              puVar18 = puVar18 + 4;
              pppppppuVar37 = pppppppuVar37 + 4;
            } while (puVar18 < (undefined8 *)((longlong)(param_2 + 2) + (uVar10 - 0x10)));
          }
        }
        pppppppuVar37 = (undefined8 *******)((longlong)puVar28 - uVar32);
        local_290 = pppppppuVar26;
        local_228 = uVar32;
        if ((ulonglong)((longlong)puVar28 - (longlong)local_280) < uVar32) {
          if ((ulonglong)((longlong)puVar28 - (longlong)local_258) < uVar32) {
            uVar19 = 0xffffffffffffffec;
          }
          else {
            puVar36 = (undefined1 *)
                      ((longlong)((longlong)puVar28 - uVar32) +
                      ((longlong)local_278 - (longlong)local_280));
            if (local_278 < puVar36 + uVar41) {
              lVar29 = (longlong)local_278 - (longlong)puVar36;
              FUN_18063aed0(puVar28,puVar36,lVar29);
              puVar28 = (undefined8 *)((longlong)puVar28 + lVar29);
              uVar41 = uVar41 - lVar29;
              pppppppuVar37 = local_280;
              goto LAB_1805e6db5;
            }
            FUN_18063aed0(puVar28,puVar36,uVar41);
          }
        }
        else {
LAB_1805e6db5:
          if (uVar32 < 0x10) {
            if (uVar32 < 8) {
              *(undefined1 *)puVar28 = *(undefined1 *)pppppppuVar37;
              *(undefined1 *)((longlong)puVar28 + 1) = *(undefined1 *)((longlong)pppppppuVar37 + 1);
              *(undefined1 *)((longlong)puVar28 + 2) = *(undefined1 *)((longlong)pppppppuVar37 + 2);
              *(undefined1 *)((longlong)puVar28 + 3) = *(undefined1 *)((longlong)pppppppuVar37 + 3);
              uVar40 = *(uint *)(&DAT_1806886d8 + uVar32 * 4);
              *(undefined4 *)((longlong)puVar28 + 4) =
                   *(undefined4 *)((longlong)pppppppuVar37 + (ulonglong)uVar40);
              pppppppuVar37 =
                   (undefined8 *******)
                   ((longlong)((longlong)pppppppuVar37 + (ulonglong)uVar40) -
                   (longlong)*(int *)(&DAT_1806886f8 + uVar32 * 4));
            }
            else {
              *puVar28 = *pppppppuVar37;
            }
            if (8 < uVar41) {
              puVar18 = puVar28 + 1;
              pppppppuVar38 = pppppppuVar37 + 1;
              puVar23 = (undefined8 *)((longlong)puVar18 + (uVar41 - 8));
              if ((longlong)puVar18 - (longlong)pppppppuVar38 < 0x10) {
                lVar29 = (longlong)pppppppuVar38 - (longlong)puVar18;
                do {
                  *puVar18 = *(undefined8 *)((longlong)puVar18 + lVar29);
                  puVar18 = puVar18 + 1;
                } while (puVar18 < puVar23);
              }
              else {
                ppppppuVar12 = pppppppuVar37[2];
                *puVar18 = *pppppppuVar38;
                puVar28[2] = ppppppuVar12;
                if (0x10 < (longlong)(uVar41 - 8)) {
                  puVar28 = puVar28 + 3;
                  pppppppuVar37 = pppppppuVar37 + 3;
                  do {
                    ppppppuVar12 = pppppppuVar37[1];
                    *puVar28 = *pppppppuVar37;
                    puVar28[1] = ppppppuVar12;
                    ppppppuVar12 = pppppppuVar37[3];
                    puVar28[2] = pppppppuVar37[2];
                    puVar28[3] = ppppppuVar12;
                    puVar28 = puVar28 + 4;
                    pppppppuVar37 = pppppppuVar37 + 4;
                  } while (puVar28 < puVar23);
                }
              }
            }
          }
          else {
            ppppppuVar12 = pppppppuVar37[1];
            *puVar28 = *pppppppuVar37;
            puVar28[1] = ppppppuVar12;
            if (0x10 < (longlong)uVar41) {
              puVar18 = puVar28 + 2;
              pppppppuVar37 = pppppppuVar37 + 2;
              do {
                ppppppuVar12 = pppppppuVar37[1];
                *puVar18 = *pppppppuVar37;
                puVar18[1] = ppppppuVar12;
                ppppppuVar12 = pppppppuVar37[3];
                puVar18[2] = pppppppuVar37[2];
                puVar18[3] = ppppppuVar12;
                puVar18 = puVar18 + 4;
                pppppppuVar37 = pppppppuVar37 + 4;
              } while (puVar18 < (undefined8 *)(uVar41 + (longlong)puVar28));
            }
          }
        }
        goto LAB_1805e71b1;
      }
      local_238 = *puVar27;
      uStack_230 = local_118[uVar25 * 3 + 1];
      local_228 = local_118[uVar25 * 3 + 2];
      local_2c8 = &local_290;
      local_2c0 = local_248;
      local_2b8 = local_280;
      local_2b0 = local_258;
      local_2a8 = local_278;
      uVar19 = FUN_1805e9280(param_2,local_260,puVar36,&local_238);
LAB_1805e71a9:
      pppppppuVar26 = local_290;
    }
    else {
      uVar10 = *puVar27;
      uVar32 = local_118[uVar25 * 3 + 2];
      uVar41 = local_118[uVar25 * 3 + 1];
      puVar28 = (undefined8 *)(uVar10 + (longlong)param_2);
      pppppppuVar26 = (undefined8 *******)(uVar10 + (longlong)pppppppuVar37);
      uVar19 = uVar41 + uVar10;
      if ((local_248 < pppppppuVar26) ||
         (local_260 + -4 < (undefined8 *)(uVar19 + (longlong)param_2))) {
LAB_1805e7183:
        local_238 = *puVar27;
        uStack_230 = local_118[uVar25 * 3 + 1];
        local_228 = local_118[uVar25 * 3 + 2];
        local_2c8 = local_248;
        local_2c0 = local_280;
        local_2b8 = local_258;
        local_2b0 = local_278;
        uVar19 = FUN_1805e9140(param_2,local_260,&local_238,&local_290);
        goto LAB_1805e71a9;
      }
      ppppppuVar12 = pppppppuVar37[1];
      *param_2 = *pppppppuVar37;
      param_2[1] = ppppppuVar12;
      if (0x10 < uVar10) {
        ppppppuVar12 = pppppppuVar37[3];
        param_2[2] = pppppppuVar37[2];
        param_2[3] = ppppppuVar12;
        if (0x10 < (longlong)(uVar10 - 0x10)) {
          puVar18 = param_2 + 4;
          do {
            ppppppuVar12 = pppppppuVar37[5];
            *puVar18 = pppppppuVar37[4];
            puVar18[1] = ppppppuVar12;
            ppppppuVar12 = pppppppuVar37[7];
            puVar18[2] = pppppppuVar37[6];
            puVar18[3] = ppppppuVar12;
            puVar18 = puVar18 + 4;
            pppppppuVar37 = pppppppuVar37 + 4;
          } while (puVar18 < (undefined8 *)((longlong)(param_2 + 2) + (uVar10 - 0x10)));
        }
      }
      pppppppuVar37 = (undefined8 *******)((longlong)puVar28 - uVar32);
      local_290 = pppppppuVar26;
      local_228 = uVar32;
      if ((ulonglong)((longlong)puVar28 - (longlong)local_280) < uVar32) {
        if ((ulonglong)((longlong)puVar28 - (longlong)local_258) < uVar32) {
          uVar19 = 0xffffffffffffffec;
        }
        else {
          puVar36 = (undefined1 *)
                    ((longlong)((longlong)puVar28 - uVar32) +
                    ((longlong)local_278 - (longlong)local_280));
          if (local_278 < puVar36 + uVar41) {
            lVar29 = (longlong)local_278 - (longlong)puVar36;
            FUN_18063aed0(puVar28,puVar36,lVar29);
            puVar28 = (undefined8 *)((longlong)puVar28 + lVar29);
            uVar41 = uVar41 - lVar29;
            pppppppuVar37 = local_280;
            goto LAB_1805e7045;
          }
          FUN_18063aed0(puVar28,puVar36,uVar41);
        }
      }
      else {
LAB_1805e7045:
        if (uVar32 < 0x10) {
          if (uVar32 < 8) {
            *(undefined1 *)puVar28 = *(undefined1 *)pppppppuVar37;
            *(undefined1 *)((longlong)puVar28 + 1) = *(undefined1 *)((longlong)pppppppuVar37 + 1);
            *(undefined1 *)((longlong)puVar28 + 2) = *(undefined1 *)((longlong)pppppppuVar37 + 2);
            *(undefined1 *)((longlong)puVar28 + 3) = *(undefined1 *)((longlong)pppppppuVar37 + 3);
            uVar40 = *(uint *)(&DAT_1806886d8 + uVar32 * 4);
            *(undefined4 *)((longlong)puVar28 + 4) =
                 *(undefined4 *)((longlong)pppppppuVar37 + (ulonglong)uVar40);
            pppppppuVar37 =
                 (undefined8 *******)
                 ((longlong)((longlong)pppppppuVar37 + (ulonglong)uVar40) -
                 (longlong)*(int *)(&DAT_1806886f8 + uVar32 * 4));
          }
          else {
            *puVar28 = *pppppppuVar37;
          }
          if (8 < uVar41) {
            puVar18 = puVar28 + 1;
            pppppppuVar38 = pppppppuVar37 + 1;
            puVar23 = (undefined8 *)((longlong)puVar18 + (uVar41 - 8));
            if ((longlong)puVar18 - (longlong)pppppppuVar38 < 0x10) {
              lVar29 = (longlong)pppppppuVar38 - (longlong)puVar18;
              do {
                *puVar18 = *(undefined8 *)((longlong)puVar18 + lVar29);
                puVar18 = puVar18 + 1;
              } while (puVar18 < puVar23);
            }
            else {
              ppppppuVar12 = pppppppuVar37[2];
              *puVar18 = *pppppppuVar38;
              puVar28[2] = ppppppuVar12;
              if (0x10 < (longlong)(uVar41 - 8)) {
                puVar28 = puVar28 + 3;
                pppppppuVar37 = pppppppuVar37 + 3;
                do {
                  ppppppuVar12 = pppppppuVar37[1];
                  *puVar28 = *pppppppuVar37;
                  puVar28[1] = ppppppuVar12;
                  ppppppuVar12 = pppppppuVar37[3];
                  puVar28[2] = pppppppuVar37[2];
                  puVar28[3] = ppppppuVar12;
                  puVar28 = puVar28 + 4;
                  pppppppuVar37 = pppppppuVar37 + 4;
                } while (puVar28 < puVar23);
              }
            }
          }
        }
        else {
          ppppppuVar12 = pppppppuVar37[1];
          *puVar28 = *pppppppuVar37;
          puVar28[1] = ppppppuVar12;
          if (0x10 < (longlong)uVar41) {
            puVar18 = puVar28 + 2;
            pppppppuVar37 = pppppppuVar37 + 2;
            do {
              ppppppuVar12 = pppppppuVar37[1];
              *puVar18 = *pppppppuVar37;
              puVar18[1] = ppppppuVar12;
              ppppppuVar12 = pppppppuVar37[3];
              puVar18[2] = pppppppuVar37[2];
              puVar18[3] = ppppppuVar12;
              puVar18 = puVar18 + 4;
              pppppppuVar37 = pppppppuVar37 + 4;
            } while (puVar18 < (undefined8 *)(uVar41 + (longlong)puVar28));
          }
        }
      }
    }
LAB_1805e71b1:
    if (0xffffffffffffff88 < uVar19) {
    }
    param_2 = (undefined8 *)((longlong)param_2 + uVar19);
    local_288 = local_288 + 1;
    pppppppuVar37 = pppppppuVar26;
    pppppppuVar14 = local_2c8;
    pppppppuVar15 = local_2c0;
    pppppppuVar38 = local_2b8;
    pppppppuVar26 = local_2b0;
    plVar13 = local_140;
  }
  *(int *)((longlong)plVar13 + 0x683c) = (int)local_268;
  *(int *)(plVar13 + 0xd08) = (int)local_190[1];
  *(int *)((longlong)plVar13 + 0x6844) = (int)local_190[2];
LAB_1805e7208:
  plVar13 = local_140;
  pppppppuVar26 = local_248;
  if ((int)local_140[0xed6] == 2) {
    uVar25 = (longlong)local_248 - (longlong)pppppppuVar37;
    if ((ulonglong)((longlong)local_260 - (longlong)param_2) < uVar25) {
    }
    if (param_2 != (undefined8 *)0x0) {
      FUN_18063aed0(param_2,pppppppuVar37,uVar25);
      param_2 = (undefined8 *)((longlong)param_2 + uVar25);
    }
    pppppppuVar37 = (undefined8 *******)((longlong)plVar13 + 0x76b4);
    pppppppuVar26 = (undefined8 *******)((longlong)plVar13 + 0x176b4);
  }
  if (((ulonglong)((longlong)pppppppuVar26 - (longlong)pppppppuVar37) <=
       (ulonglong)((longlong)local_260 - (longlong)param_2)) && (param_2 != (undefined8 *)0x0)) {
    FUN_18063aed0(param_2,pppppppuVar37,(longlong)pppppppuVar26 - (longlong)pppppppuVar37);
  }
}



