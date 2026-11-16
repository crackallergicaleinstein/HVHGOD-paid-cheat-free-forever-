// FUN_1805dfcd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805dfcd0 */

void FUN_1805dfcd0(undefined1 (*param_1) [16])

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  ulonglong uVar11;
  longlong lVar12;
  ulonglong *puVar13;
  ulonglong uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98 [8];
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  
  lVar6 = *(longlong *)param_1[7];
  lVar7 = *(longlong *)(param_1[6] + 8);
  _local_98 = *param_1;
  lVar8 = *(longlong *)param_1[6];
  local_78._0_4_ = *(undefined4 *)param_1[4];
  local_78._4_4_ = *(undefined4 *)(param_1[4] + 4);
  uStack_70._0_4_ = (undefined4)*(ulonglong *)(param_1[4] + 8);
  uStack_70._4_4_ = *(undefined4 *)(param_1[4] + 0xc);
  puVar16 = *(undefined1 **)(param_1[3] + 8);
  local_68._0_4_ = *(undefined4 *)param_1[5];
  local_68._4_4_ = *(undefined4 *)(param_1[5] + 4);
  uStack_60._0_4_ = (undefined4)*(ulonglong *)(param_1[5] + 8);
  uStack_60._4_4_ = *(undefined4 *)(param_1[5] + 0xc);
  local_a8._0_4_ = *(undefined4 *)param_1[3];
  local_a8._4_4_ = *(undefined4 *)(param_1[3] + 4);
  uStack_a0._0_4_ = *(undefined4 *)(param_1[3] + 8);
  uStack_a0._4_4_ = *(undefined4 *)(param_1[3] + 0xc);
  puVar13 = local_98;
  local_b8._0_4_ = *(undefined4 *)param_1[2];
  local_b8._4_4_ = *(undefined4 *)(param_1[2] + 4);
  uStack_b0._0_4_ = (undefined4)*(longlong *)(param_1[2] + 8);
  uStack_b0._4_4_ = *(undefined4 *)(param_1[2] + 0xc);
  uVar14 = (longlong)puVar13 - lVar7;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar14;
  lVar12 = SUB168(ZEXT816(0x2492492492492493) * auVar9,8);
  local_88 = *(ulonglong **)param_1[1];
  uStack_80 = *(ulonglong **)(param_1[1] + 8);
  uVar11 = (ulonglong)(lVar6 - (longlong)puVar16) / 5;
  uVar14 = (uVar14 - lVar12 >> 1) + lVar12 >> 2;
  if (uVar11 < uVar14) {
    uVar14 = uVar11;
  }
  puVar15 = puVar16 + uVar14 * 5;
  uVar17 = local_98._0_4_;
  uVar18 = local_98._4_4_;
  uVar19 = local_98._8_4_;
  uVar20 = local_98._12_4_;
  uVar21 = *(undefined4 *)param_1[1];
  uVar22 = *(undefined4 *)(param_1[1] + 4);
  uVar23 = *(undefined4 *)(param_1[1] + 8);
  uVar24 = *(undefined4 *)(param_1[1] + 0xc);
  if (puVar16 != puVar15) {
    local_b8 = *(undefined1 **)param_1[2];
    uStack_b0 = *(undefined1 **)(param_1[2] + 8);
    local_a8 = *(undefined1 **)param_1[3];
    uStack_a0 = *(undefined1 **)(param_1[3] + 8);
    local_78 = *(ulonglong *)param_1[4];
    uStack_70 = *(ulonglong *)(param_1[4] + 8);
    local_68 = *(ulonglong *)param_1[5];
    uStack_60 = *(ulonglong *)(param_1[5] + 8);
    do {
      lVar12 = 1;
      do {
        if (*(ulonglong *)(local_98 + lVar12 * 8) < *(ulonglong *)(local_98 + lVar12 * 8 + -8))
        goto LAB_1805e0108;
        lVar12 = lVar12 + 1;
      } while (lVar12 < 4);
      do {
        uVar3 = *(undefined2 *)(lVar8 + (local_78 >> 0x35) * 2);
        *local_b8 = (char)((ushort)uVar3 >> 8);
        local_78 = local_78 << ((byte)uVar3 & 0x3f);
        uVar3 = *(undefined2 *)(lVar8 + (uStack_70 >> 0x35) * 2);
        *uStack_b0 = (char)((ushort)uVar3 >> 8);
        uStack_70 = uStack_70 << ((byte)uVar3 & 0x3f);
        uVar3 = *(undefined2 *)(lVar8 + (local_68 >> 0x35) * 2);
        *local_a8 = (char)((ushort)uVar3 >> 8);
        local_68 = local_68 << ((byte)uVar3 & 0x3f);
        uVar3 = *(undefined2 *)(lVar8 + (uStack_60 >> 0x35) * 2);
        *puVar16 = (char)((ushort)uVar3 >> 8);
        uStack_60 = uStack_60 << ((byte)uVar3 & 0x3f);
        uVar3 = *(undefined2 *)(lVar8 + (local_78 >> 0x35) * 2);
        local_b8[1] = (char)((ushort)uVar3 >> 8);
        local_78 = local_78 << ((byte)uVar3 & 0x3f);
        uVar3 = *(undefined2 *)(lVar8 + (uStack_70 >> 0x35) * 2);
        uStack_b0[1] = (char)((ushort)uVar3 >> 8);
        uStack_70 = uStack_70 << ((byte)uVar3 & 0x3f);
        uVar3 = *(undefined2 *)(lVar8 + (local_68 >> 0x35) * 2);
        local_a8[1] = (char)((ushort)uVar3 >> 8);
        local_68 = local_68 << ((byte)uVar3 & 0x3f);
        uVar3 = *(undefined2 *)(lVar8 + (uStack_60 >> 0x35) * 2);
        puVar16[1] = (char)((ushort)uVar3 >> 8);
        uStack_60 = uStack_60 << ((byte)uVar3 & 0x3f);
        uVar3 = *(undefined2 *)(lVar8 + (local_78 >> 0x35) * 2);
        local_b8[2] = (char)((ushort)uVar3 >> 8);
        local_78 = local_78 << ((byte)uVar3 & 0x3f);
        uVar3 = *(undefined2 *)(lVar8 + (uStack_70 >> 0x35) * 2);
        uStack_b0[2] = (char)((ushort)uVar3 >> 8);
        uStack_70 = uStack_70 << ((byte)uVar3 & 0x3f);
        uVar3 = *(undefined2 *)(lVar8 + (local_68 >> 0x35) * 2);
        local_68 = local_68 << ((byte)uVar3 & 0x3f);
        local_a8[2] = (char)((ushort)uVar3 >> 8);
        uVar3 = *(undefined2 *)(lVar8 + (uStack_60 >> 0x35) * 2);
        puVar1 = local_b8 + 5;
        puVar2 = uStack_b0 + 5;
        puVar16[2] = (char)((ushort)uVar3 >> 8);
        uStack_60 = uStack_60 << ((byte)uVar3 & 0x3f);
        uVar3 = *(undefined2 *)(lVar8 + (local_78 >> 0x35) * 2);
        local_78 = local_78 << ((byte)uVar3 & 0x3f);
        local_b8[3] = (char)((ushort)uVar3 >> 8);
        uVar3 = *(undefined2 *)(lVar8 + (uStack_70 >> 0x35) * 2);
        uStack_70 = uStack_70 << ((byte)uVar3 & 0x3f);
        uStack_b0[3] = (char)((ushort)uVar3 >> 8);
        uVar3 = *(undefined2 *)(lVar8 + (local_68 >> 0x35) * 2);
        local_68 = local_68 << ((byte)uVar3 & 0x3f);
        local_a8[3] = (char)((ushort)uVar3 >> 8);
        uVar3 = *(undefined2 *)(lVar8 + (uStack_60 >> 0x35) * 2);
        uStack_60 = uStack_60 << ((byte)uVar3 & 0x3f);
        puVar16[3] = (char)((ushort)uVar3 >> 8);
        uVar3 = *(undefined2 *)(lVar8 + (local_78 >> 0x35) * 2);
        local_78 = local_78 << ((byte)uVar3 & 0x3f);
        local_b8[4] = (char)((ushort)uVar3 >> 8);
        lVar12 = 0;
        if (local_78 != 0) {
          for (; (local_78 >> lVar12 & 1) == 0; lVar12 = lVar12 + 1) {
          }
        }
        uVar3 = *(undefined2 *)(lVar8 + (uStack_70 >> 0x35) * 2);
        uStack_b0[4] = (char)((ushort)uVar3 >> 8);
        uVar4 = *(undefined2 *)(lVar8 + (local_68 >> 0x35) * 2);
        local_a8[4] = (char)((ushort)uVar4 >> 8);
        uVar5 = *(undefined2 *)(lVar8 + (uStack_60 >> 0x35) * 2);
        puVar16[4] = (char)((ushort)uVar5 >> 8);
        puVar13 = (ulonglong *)((longlong)puVar13 - ((longlong)(int)lVar12 >> 3));
        local_78 = (*puVar13 | 1) << ((byte)lVar12 & 7);
        uStack_70 = uStack_70 << ((byte)uVar3 & 0x3f);
        lVar12 = 0;
        if (uStack_70 != 0) {
          for (; (uStack_70 >> lVar12 & 1) == 0; lVar12 = lVar12 + 1) {
          }
        }
        uStack_90 = (ulonglong *)((longlong)uStack_90 - ((longlong)(int)lVar12 >> 3));
        local_98 = (undefined1  [8])puVar13;
        uStack_70 = (*uStack_90 | 1) << ((byte)lVar12 & 7);
        puVar16 = puVar16 + 5;
        local_68 = local_68 << ((byte)uVar4 & 0x3f);
        local_a8 = local_a8 + 5;
        lVar12 = 0;
        if (local_68 != 0) {
          for (; (local_68 >> lVar12 & 1) == 0; lVar12 = lVar12 + 1) {
          }
        }
        local_88 = (ulonglong *)((longlong)local_88 - ((longlong)(int)lVar12 >> 3));
        local_68 = (*local_88 | 1) << ((byte)lVar12 & 7);
        uStack_60 = uStack_60 << ((byte)uVar5 & 0x3f);
        lVar12 = 0;
        if (uStack_60 != 0) {
          for (; (uStack_60 >> lVar12 & 1) == 0; lVar12 = lVar12 + 1) {
          }
        }
        uStack_80 = (ulonglong *)((longlong)uStack_80 - ((longlong)(int)lVar12 >> 3));
        uStack_60 = (*uStack_80 | 1) << ((byte)lVar12 & 7);
        local_b8 = puVar1;
        uStack_b0 = puVar2;
      } while (puVar16 < puVar15);
      uVar14 = (longlong)puVar13 - lVar7;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar14;
      lVar12 = SUB168(ZEXT816(0x2492492492492493) * auVar10,8);
      uVar11 = (ulonglong)(lVar6 - (longlong)puVar16) / 5;
      uVar14 = (uVar14 - lVar12 >> 1) + lVar12 >> 2;
      if (uVar11 < uVar14) {
        uVar14 = uVar11;
      }
      puVar15 = puVar16 + uVar14 * 5;
      uStack_a0 = puVar16;
    } while (puVar16 != puVar15);
LAB_1805e0108:
    uVar17 = local_98._0_4_;
    uVar18 = local_98._4_4_;
    uVar19 = (undefined4)uStack_90;
    uVar20 = uStack_90._4_4_;
    uVar21 = (undefined4)local_88;
    uVar22 = local_88._4_4_;
    uVar23 = (undefined4)uStack_80;
    uVar24 = uStack_80._4_4_;
  }
  *(undefined4 *)param_1[2] = (undefined4)local_b8;
  *(undefined4 *)(param_1[2] + 4) = local_b8._4_4_;
  *(undefined4 *)(param_1[2] + 8) = (undefined4)uStack_b0;
  *(undefined4 *)(param_1[2] + 0xc) = uStack_b0._4_4_;
  *(undefined4 *)param_1[4] = (undefined4)local_78;
  *(undefined4 *)(param_1[4] + 4) = local_78._4_4_;
  *(undefined4 *)(param_1[4] + 8) = (undefined4)uStack_70;
  *(undefined4 *)(param_1[4] + 0xc) = uStack_70._4_4_;
  *(undefined4 *)*param_1 = uVar17;
  *(undefined4 *)(*param_1 + 4) = uVar18;
  *(undefined4 *)(*param_1 + 8) = uVar19;
  *(undefined4 *)(*param_1 + 0xc) = uVar20;
  *(undefined4 *)param_1[5] = (undefined4)local_68;
  *(undefined4 *)(param_1[5] + 4) = local_68._4_4_;
  *(undefined4 *)(param_1[5] + 8) = (undefined4)uStack_60;
  *(undefined4 *)(param_1[5] + 0xc) = uStack_60._4_4_;
  *(undefined4 *)param_1[1] = uVar21;
  *(undefined4 *)(param_1[1] + 4) = uVar22;
  *(undefined4 *)(param_1[1] + 8) = uVar23;
  *(undefined4 *)(param_1[1] + 0xc) = uVar24;
  *(undefined4 *)param_1[3] = (undefined4)local_a8;
  *(undefined4 *)(param_1[3] + 4) = local_a8._4_4_;
  *(undefined4 *)(param_1[3] + 8) = (undefined4)uStack_a0;
  *(undefined4 *)(param_1[3] + 0xc) = uStack_a0._4_4_;
  return;
}



