// FUN_1805e2270 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e2270 */

longlong FUN_1805e2270(undefined8 *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined2 *puVar13;
  longlong lVar14;
  undefined2 *puVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong local_res10;
  ulonglong local_res18;
  ulonglong local_res20;
  ulonglong *local_f0 [4];
  undefined2 *local_d0;
  undefined2 *local_c8;
  ulonglong local_b8;
  ulonglong uStack_b0;
  ulonglong local_a8;
  ulonglong uStack_a0;
  undefined2 *local_98;
  undefined2 *puStack_90;
  undefined2 *local_88;
  undefined2 *puStack_80;
  
  local_b8 = param_1[8];
  uStack_b0 = param_1[9];
  lVar7 = param_1[0xe];
  local_a8 = param_1[10];
  uStack_a0 = param_1[0xb];
  puVar8 = (undefined2 *)param_1[7];
  lVar9 = param_1[0xd];
  lVar10 = param_1[0xc];
  local_f0[0] = (ulonglong *)*param_1;
  local_f0[1] = (ulonglong *)param_1[1];
  local_98 = (undefined2 *)param_1[4];
  puStack_90 = (undefined2 *)param_1[5];
  local_f0[2] = (ulonglong *)param_1[2];
  local_f0[3] = (ulonglong *)param_1[3];
  puVar13 = (undefined2 *)param_1[6];
  puVar2 = (undefined2 *)param_1[5];
  puVar15 = puVar8;
  local_d0 = puVar2;
  local_88 = puVar13;
  puStack_80 = (undefined2 *)param_1[7];
  while( true ) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (longlong)local_f0[0] - lVar9;
    lVar14 = SUB168(ZEXT816(0x2492492492492493) * auVar11,8);
    uVar17 = ((ulonglong)(((longlong)local_f0[0] - lVar9) - lVar14) >> 1) + lVar14 >> 2;
    uVar16 = (ulonglong)((longlong)puVar2 - (longlong)local_98) / 10;
    if (uVar17 < uVar16) {
      uVar16 = uVar17;
    }
    uVar17 = (ulonglong)((longlong)puVar13 - (longlong)local_d0) / 10;
    if (uVar16 < uVar17) {
      uVar17 = uVar16;
    }
    uVar16 = (ulonglong)((longlong)puVar8 - (longlong)local_88) / 10;
    if (uVar17 < uVar16) {
      uVar16 = uVar17;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = lVar7 - (longlong)puVar15;
    lVar14 = SUB168(ZEXT816(0xcccccccccccccccd) * auVar12,0);
    uVar17 = (ulonglong)(lVar7 - (longlong)puVar15) / 10;
    if (uVar16 < uVar17) {
      uVar17 = uVar16;
    }
    puVar1 = (undefined2 *)((longlong)puVar15 + uVar17 * 5);
    if (puVar15 == puVar1) break;
    lVar14 = 1;
    do {
      if (local_f0[lVar14] < local_f0[lVar14 + -1]) goto LAB_1805e27b3;
      lVar14 = lVar14 + 1;
    } while (lVar14 < 4);
    local_res10 = local_b8;
    local_res18 = uStack_b0;
    local_res20 = local_a8;
    local_c8 = local_88;
    do {
      uVar3 = *(uint *)(lVar10 + (local_res10 >> 0x35) * 4);
      *local_98 = (short)uVar3;
      local_res10 = local_res10 << ((byte)(uVar3 >> 0x10) & 0x3f);
      local_98 = (undefined2 *)((longlong)local_98 + (ulonglong)(uVar3 >> 0x18));
      uVar3 = *(uint *)(lVar10 + (local_res18 >> 0x35) * 4);
      *local_d0 = (short)uVar3;
      local_res18 = local_res18 << ((byte)(uVar3 >> 0x10) & 0x3f);
      local_d0 = (undefined2 *)((longlong)local_d0 + (ulonglong)(uVar3 >> 0x18));
      uVar3 = *(uint *)(lVar10 + (local_res20 >> 0x35) * 4);
      *local_c8 = (short)uVar3;
      local_res20 = local_res20 << ((byte)(uVar3 >> 0x10) & 0x3f);
      local_c8 = (undefined2 *)((longlong)local_c8 + (ulonglong)(uVar3 >> 0x18));
      uVar3 = *(uint *)(lVar10 + (local_res10 >> 0x35) * 4);
      *local_98 = (short)uVar3;
      local_res10 = local_res10 << ((byte)(uVar3 >> 0x10) & 0x3f);
      local_98 = (undefined2 *)((ulonglong)(uVar3 >> 0x18) + (longlong)local_98);
      uVar3 = *(uint *)(lVar10 + (local_res18 >> 0x35) * 4);
      *local_d0 = (short)uVar3;
      local_res18 = local_res18 << ((byte)(uVar3 >> 0x10) & 0x3f);
      local_d0 = (undefined2 *)((longlong)local_d0 + (ulonglong)(uVar3 >> 0x18));
      uVar3 = *(uint *)(lVar10 + (local_res20 >> 0x35) * 4);
      *local_c8 = (short)uVar3;
      local_res20 = local_res20 << ((byte)(uVar3 >> 0x10) & 0x3f);
      local_c8 = (undefined2 *)((longlong)local_c8 + (ulonglong)(uVar3 >> 0x18));
      uVar3 = *(uint *)(lVar10 + (local_res10 >> 0x35) * 4);
      *local_98 = (short)uVar3;
      local_res10 = local_res10 << ((byte)(uVar3 >> 0x10) & 0x3f);
      local_98 = (undefined2 *)((ulonglong)(uVar3 >> 0x18) + (longlong)local_98);
      uVar3 = *(uint *)(lVar10 + (local_res18 >> 0x35) * 4);
      *local_d0 = (short)uVar3;
      local_res18 = local_res18 << ((byte)(uVar3 >> 0x10) & 0x3f);
      local_d0 = (undefined2 *)((ulonglong)(uVar3 >> 0x18) + (longlong)local_d0);
      uVar3 = *(uint *)(lVar10 + (local_res20 >> 0x35) * 4);
      *local_c8 = (short)uVar3;
      local_res20 = local_res20 << ((byte)(uVar3 >> 0x10) & 0x3f);
      local_c8 = (undefined2 *)((ulonglong)(uVar3 >> 0x18) + (longlong)local_c8);
      uVar3 = *(uint *)(lVar10 + (local_res10 >> 0x35) * 4);
      *local_98 = (short)uVar3;
      local_res10 = local_res10 << ((byte)(uVar3 >> 0x10) & 0x3f);
      local_98 = (undefined2 *)((ulonglong)(uVar3 >> 0x18) + (longlong)local_98);
      uVar3 = *(uint *)(lVar10 + (local_res18 >> 0x35) * 4);
      *local_d0 = (short)uVar3;
      local_res18 = local_res18 << ((byte)(uVar3 >> 0x10) & 0x3f);
      local_d0 = (undefined2 *)((ulonglong)(uVar3 >> 0x18) + (longlong)local_d0);
      uVar3 = *(uint *)(lVar10 + (local_res20 >> 0x35) * 4);
      *local_c8 = (short)uVar3;
      local_c8 = (undefined2 *)((ulonglong)(uVar3 >> 0x18) + (longlong)local_c8);
      local_res20 = local_res20 << ((byte)(uVar3 >> 0x10) & 0x3f);
      uVar3 = *(uint *)(lVar10 + (local_res10 >> 0x35) * 4);
      *local_98 = (short)uVar3;
      local_98 = (undefined2 *)((ulonglong)(uVar3 >> 0x18) + (longlong)local_98);
      uVar4 = *(uint *)(lVar10 + (local_res18 >> 0x35) * 4);
      *local_d0 = (short)uVar4;
      local_d0 = (undefined2 *)((ulonglong)(uVar4 >> 0x18) + (longlong)local_d0);
      uVar5 = *(uint *)(lVar10 + (local_res20 >> 0x35) * 4);
      *local_c8 = (short)uVar5;
      local_c8 = (undefined2 *)((ulonglong)(uVar5 >> 0x18) + (longlong)local_c8);
      uVar6 = *(uint *)(lVar10 + (uStack_a0 >> 0x35) * 4);
      *puVar15 = (short)uVar6;
      uStack_a0 = uStack_a0 << ((byte)(uVar6 >> 0x10) & 0x3f);
      puVar15 = (undefined2 *)((longlong)puVar15 + (ulonglong)(uVar6 >> 0x18));
      uVar6 = *(uint *)(lVar10 + (uStack_a0 >> 0x35) * 4);
      *puVar15 = (short)uVar6;
      uStack_a0 = uStack_a0 << ((byte)(uVar6 >> 0x10) & 0x3f);
      local_res10 = local_res10 << ((byte)(uVar3 >> 0x10) & 0x3f);
      lVar14 = 0;
      if (local_res10 != 0) {
        for (; (local_res10 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
        }
      }
      puVar15 = (undefined2 *)((ulonglong)(uVar6 >> 0x18) + (longlong)puVar15);
      local_f0[0] = (ulonglong *)((longlong)local_f0[0] - ((longlong)(int)lVar14 >> 3));
      local_res10 = (*local_f0[0] | 1) << ((byte)lVar14 & 7);
      uVar3 = *(uint *)(lVar10 + (uStack_a0 >> 0x35) * 4);
      *puVar15 = (short)uVar3;
      uStack_a0 = uStack_a0 << ((byte)(uVar3 >> 0x10) & 0x3f);
      local_res18 = local_res18 << ((byte)(uVar4 >> 0x10) & 0x3f);
      lVar14 = 0;
      if (local_res18 != 0) {
        for (; (local_res18 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
        }
      }
      local_f0[1] = (ulonglong *)((longlong)local_f0[1] - ((longlong)(int)lVar14 >> 3));
      puVar15 = (undefined2 *)((ulonglong)(uVar3 >> 0x18) + (longlong)puVar15);
      local_res18 = (*local_f0[1] | 1) << ((byte)lVar14 & 7);
      uVar3 = *(uint *)(lVar10 + (uStack_a0 >> 0x35) * 4);
      *puVar15 = (short)uVar3;
      uStack_a0 = uStack_a0 << ((byte)(uVar3 >> 0x10) & 0x3f);
      puVar15 = (undefined2 *)((longlong)puVar15 + (ulonglong)(uVar3 >> 0x18));
      local_res20 = local_res20 << ((byte)(uVar5 >> 0x10) & 0x3f);
      lVar14 = 0;
      if (local_res20 != 0) {
        for (; (local_res20 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
        }
      }
      local_f0[2] = (ulonglong *)((longlong)local_f0[2] - ((longlong)(int)lVar14 >> 3));
      local_res20 = (*local_f0[2] | 1) << ((byte)lVar14 & 7);
      uVar3 = *(uint *)(lVar10 + (uStack_a0 >> 0x35) * 4);
      *puVar15 = (short)uVar3;
      puVar15 = (undefined2 *)((ulonglong)(uVar3 >> 0x18) + (longlong)puVar15);
      uStack_a0 = uStack_a0 << ((byte)(uVar3 >> 0x10) & 0x3f);
      lVar14 = 0;
      if (uStack_a0 != 0) {
        for (; (uStack_a0 >> lVar14 & 1) == 0; lVar14 = lVar14 + 1) {
        }
      }
      local_f0[3] = (ulonglong *)((longlong)local_f0[3] - ((longlong)(int)lVar14 >> 3));
      uStack_a0 = (*local_f0[3] | 1) << ((byte)lVar14 & 7);
    } while (puVar15 < puVar1);
    local_b8 = local_res10;
    uStack_b0 = local_res18;
    local_a8 = local_res20;
    puStack_90 = local_d0;
    local_88 = local_c8;
    puStack_80 = puVar15;
  }
LAB_1805e27b3:
  param_1[8] = local_b8;
  param_1[9] = uStack_b0;
  param_1[10] = local_a8;
  param_1[0xb] = uStack_a0;
  *param_1 = local_f0[0];
  param_1[1] = local_f0[1];
  param_1[2] = local_f0[2];
  param_1[3] = local_f0[3];
  param_1[4] = local_98;
  param_1[5] = puStack_90;
  param_1[6] = local_88;
  param_1[7] = puStack_80;
  return lVar14;
}



