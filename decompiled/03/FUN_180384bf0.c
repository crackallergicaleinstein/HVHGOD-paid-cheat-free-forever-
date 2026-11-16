// FUN_180384bf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180384bf0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180384bf0(uint *param_1,longlong param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  uint *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  uint *puVar11;
  undefined1 local_218 [16];
  undefined1 auStack_208 [16];
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined4 uStack_1e8;
  undefined1 uStack_1e4;
  undefined2 uStack_1e3;
  undefined1 uStack_1e1;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined4 local_190;
  undefined1 local_18c;
  undefined2 local_18b;
  undefined1 local_189;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined8 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined1 local_134;
  undefined2 local_133;
  undefined1 local_131;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  undefined2 local_db;
  undefined1 local_d9;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_84;
  undefined2 local_83;
  undefined1 local_81;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined2 local_62;
  undefined8 local_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  undefined2 local_2b;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined2 local_c;
  undefined2 local_a;
  
  puVar1 = param_1 + 0x84;
  if (*puVar1 < 6) {
    (**(code **)(**(longlong **)(param_2 + 8) + 0xe0))
              (*(longlong **)(param_2 + 8),*(undefined8 *)(param_1 + (ulonglong)*puVar1 * 0x16));
  }
  if (param_1 != puVar1) {
    puVar11 = param_1 + 4;
    do {
      if (*(longlong **)(puVar11 + -4) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(puVar11 + -4) + 0x10))();
        puVar11[-4] = 0;
        puVar11[-3] = 0;
      }
      if (*(longlong **)(puVar11 + -2) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(puVar11 + -2) + 0x10))();
        puVar11[-2] = 0;
        puVar11[-1] = 0;
      }
      if (*(longlong **)puVar11 != (longlong *)0x0) {
        (**(code **)(**(longlong **)puVar11 + 0x10))();
        puVar11[0] = 0;
        puVar11[1] = 0;
      }
      if (*(longlong **)(puVar11 + 2) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(puVar11 + 2) + 0x10))();
        puVar11[2] = 0;
        puVar11[3] = 0;
      }
      puVar8 = puVar11 + 0x12;
      puVar11 = puVar11 + 0x16;
    } while (puVar8 != puVar1);
  }
  local_1f8 = 0;
  uStack_1e3 = 0;
  uStack_1e1 = 0;
  uStack_1c8 = 0;
  local_18b = 0;
  local_189 = 0;
  local_170 = 0;
  local_133 = 0;
  local_131 = 0;
  local_118 = 0;
  local_db = 0;
  local_d9 = 0;
  local_ba = 0;
  local_83 = 0;
  local_81 = 0;
  local_62 = 0;
  local_2b = 0;
  local_29 = 0;
  local_a = 0;
  local_218 = (undefined1  [16])0x0;
  auStack_208 = (undefined1  [16])0x0;
  uStack_1e4 = 0;
  local_1b8 = (undefined1  [16])0x0;
  local_18c = 0;
  local_168 = (undefined1  [16])0x0;
  local_158 = (undefined1  [16])0x0;
  local_134 = 0;
  local_108 = (undefined1  [16])0x0;
  local_dc = 0;
  local_bc = 0;
  local_b8 = (undefined1  [16])0x0;
  local_a8 = (undefined1  [16])0x0;
  local_84 = 0;
  local_64 = 0;
  local_58 = (undefined1  [16])0x0;
  local_2c = 0;
  uStack_1f0 = 0;
  uStack_1e8 = 0;
  uStack_1e0 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  uStack_1c0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  uStack_110 = 0;
  local_f8 = 0;
  local_f0 = 0;
  local_e8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_20 = 0;
  local_c = 0;
  local_18 = 0;
  local_10 = 0;
  lVar10 = 4;
  puVar11 = param_1;
  puVar7 = (undefined8 *)local_218;
  do {
    puVar9 = puVar7;
    puVar8 = puVar11;
    uVar4 = puVar9[1];
    uVar5 = puVar9[2];
    uVar6 = puVar9[3];
    uVar2 = puVar9[0xe];
    uVar3 = puVar9[0xf];
    *(undefined8 *)puVar8 = *puVar9;
    *(undefined8 *)(puVar8 + 2) = uVar4;
    *(undefined8 *)(puVar8 + 4) = uVar5;
    *(undefined8 *)(puVar8 + 6) = uVar6;
    uVar4 = puVar9[5];
    uVar5 = puVar9[6];
    uVar6 = puVar9[7];
    *(undefined8 *)(puVar8 + 8) = puVar9[4];
    *(undefined8 *)(puVar8 + 10) = uVar4;
    *(undefined8 *)(puVar8 + 0xc) = uVar5;
    *(undefined8 *)(puVar8 + 0xe) = uVar6;
    uVar4 = puVar9[9];
    uVar5 = puVar9[10];
    uVar6 = puVar9[0xb];
    *(undefined8 *)(puVar8 + 0x10) = puVar9[8];
    *(undefined8 *)(puVar8 + 0x12) = uVar4;
    *(undefined8 *)(puVar8 + 0x14) = uVar5;
    *(undefined8 *)(puVar8 + 0x16) = uVar6;
    uVar4 = puVar9[0xd];
    *(undefined8 *)(puVar8 + 0x18) = puVar9[0xc];
    *(undefined8 *)(puVar8 + 0x1a) = uVar4;
    *(undefined8 *)(puVar8 + 0x1c) = uVar2;
    *(undefined8 *)(puVar8 + 0x1e) = uVar3;
    lVar10 = lVar10 + -1;
    puVar11 = puVar8 + 0x20;
    puVar7 = puVar9 + 0x10;
  } while (lVar10 != 0);
  uVar2 = puVar9[0x11];
  *(undefined8 *)(puVar8 + 0x20) = puVar9[0x10];
  *(undefined8 *)(puVar8 + 0x22) = uVar2;
  *puVar1 = 6;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  *(undefined2 *)(param_1 + 0x87) = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  return;
}



