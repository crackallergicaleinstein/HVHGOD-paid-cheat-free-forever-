// FUN_180528110 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180528110 */

ulonglong FUN_180528110(undefined8 *param_1,undefined8 *param_2,char param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined4 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  ulonglong uVar18;
  longlong lVar19;
  undefined1 (*pauVar20) [16];
  undefined1 uVar21;
  char *local_180;
  undefined2 uStack_178;
  short sStack_176;
  short sStack_174;
  undefined1 uStack_172;
  undefined1 uStack_171;
  undefined4 *local_170;
  undefined8 *local_168;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 local_150 [16];
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 local_130 [16];
  ulonglong uStack_120;
  ulonglong uStack_118;
  undefined1 local_110 [16];
  ulonglong uStack_100;
  ulonglong uStack_f8;
  undefined4 *local_e8;
  longlong local_e0;
  ulonglong local_d8;
  undefined4 *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulonglong uStack_90;
  ulonglong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulonglong uStack_70;
  ulonglong uStack_68;
  undefined1 local_60 [40];
  
  lVar4 = *(longlong *)*param_1;
  lVar19 = *(longlong *)(lVar4 + 0x48) - *(longlong *)(lVar4 + 0x40);
  lVar19 = lVar19 / 6 + (lVar19 >> 0x3f);
  local_e0 = (lVar19 >> 2) - (lVar19 >> 0x3f);
  local_d8 = *(longlong *)(lVar4 + 0x30) - *(longlong *)(lVar4 + 0x28) >> 4;
  local_170 = (undefined4 *)*param_2;
  local_e8 = (undefined4 *)param_2[1];
  local_168 = param_1;
  if (local_170 != local_e8) {
    puVar17 = (undefined8 *)(local_170 + 0x2a);
    do {
      puVar12 = local_168;
      puVar11 = local_170;
      uVar5 = puVar17[3];
      lVar4 = puVar17[2];
      puVar16 = puVar17;
      if (0xf < uVar5) {
        puVar16 = (undefined8 *)*puVar17;
      }
      if (lVar4 == 6) {
        lVar19 = 0;
        do {
          pcVar1 = "common" + lVar19;
          lVar14 = lVar19 + 1;
          pcVar2 = (char *)((longlong)puVar16 + lVar19);
          if (*pcVar1 != *pcVar2) break;
          lVar19 = lVar14;
        } while (lVar14 != 6);
        uVar21 = *pcVar1 == *pcVar2;
      }
      else {
        uVar21 = false;
      }
      puVar16 = puVar17;
      if (0xf < uVar5) {
        puVar16 = (undefined8 *)*puVar17;
      }
      if ((lVar4 == 8) && (iVar13 = memcmp("uncommon",puVar16,8), iVar13 == 0)) {
        uVar21 = 2;
      }
      puVar16 = puVar17;
      if (0xf < uVar5) {
        puVar16 = (undefined8 *)*puVar17;
      }
      if (lVar4 == 4) {
        lVar19 = 0;
        do {
          pcVar1 = &DAT_180867904 + lVar19;
          lVar14 = lVar19 + 1;
          pcVar2 = (char *)((longlong)puVar16 + lVar19);
          if (*pcVar1 != *pcVar2) break;
          lVar19 = lVar14;
        } while (lVar14 != 4);
        if (*pcVar1 == *pcVar2) {
          uVar21 = 3;
        }
      }
      puVar16 = puVar17;
      if (0xf < uVar5) {
        puVar16 = (undefined8 *)*puVar17;
      }
      if ((lVar4 == 8) && (iVar13 = memcmp("mythical",puVar16,8), iVar13 == 0)) {
        uVar21 = 4;
      }
      puVar16 = puVar17;
      if (0xf < uVar5) {
        puVar16 = (undefined8 *)*puVar17;
      }
      if ((lVar4 == 9) && (iVar13 = memcmp("legendary",puVar16,9), iVar13 == 0)) {
        uVar21 = 5;
      }
      puVar16 = puVar17;
      if (0xf < uVar5) {
        puVar16 = (undefined8 *)*puVar17;
      }
      if ((lVar4 == 7) && (iVar13 = memcmp("ancient",puVar16,7), iVar13 == 0)) {
        uVar21 = 6;
      }
      puVar16 = puVar17;
      if (0xf < uVar5) {
        puVar16 = (undefined8 *)*puVar17;
      }
      if ((lVar4 == 8) && (iVar13 = memcmp("immortal",puVar16,8), iVar13 == 0)) {
        uVar21 = 7;
      }
      uVar6 = puVar12[1];
      local_d0 = &local_c8;
      local_158 = 0;
      uVar3 = *puVar11;
      uStack_140 = 0;
      uStack_138 = 0xf;
      local_150._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar7[0xf] = 0;
      auVar7._0_15_ = local_150._1_15_;
      local_150 = auVar7 << 8;
      local_130 = (undefined1  [16])0x0;
      uStack_120 = 0;
      uStack_118 = 0;
      uVar5 = puVar17[-2];
      pauVar20 = (undefined1 (*) [16])(puVar17 + -4);
      if (0xf < (ulonglong)puVar17[-1]) {
        pauVar20 = *(undefined1 (**) [16])*pauVar20;
      }
      local_154 = uVar3;
      if (0x7fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      if (uVar5 < 0x10) {
        uStack_118 = 0xf;
        local_130 = *pauVar20;
        uStack_120 = uVar5;
      }
      else {
        uVar18 = uVar5 | 0xf;
        if (uVar18 < 0x8000000000000000) {
          if (uVar18 < 0x16) {
            uVar18 = 0x16;
          }
        }
        else {
          uVar18 = 0x7fffffffffffffff;
        }
        uVar15 = FUN_18015bca0(uVar18 + 1);
        local_130._0_8_ = uVar15;
        uStack_120 = uVar5;
        uStack_118 = uVar18;
        FUN_18063aed0(uVar15,pauVar20,uVar5 + 1);
      }
      local_110 = (undefined1  [16])0x0;
      uStack_100 = 0;
      uStack_f8 = 0;
      uVar5 = puVar17[-6];
      pauVar20 = (undefined1 (*) [16])(puVar17 + -8);
      if (0xf < (ulonglong)puVar17[-5]) {
        pauVar20 = *(undefined1 (**) [16])*pauVar20;
      }
      if (0x7fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_18015bb70();
      }
      if (uVar5 < 0x10) {
        uStack_f8 = 0xf;
        local_110 = *pauVar20;
        uStack_100 = uVar5;
      }
      else {
        uVar18 = uVar5 | 0xf;
        if (uVar18 < 0x8000000000000000) {
          if (uVar18 < 0x16) {
            uVar18 = 0x16;
          }
        }
        else {
          uVar18 = 0x7fffffffffffffff;
        }
        uVar15 = FUN_18015bca0(uVar18 + 1);
        local_110._0_8_ = uVar15;
        uStack_100 = uVar5;
        uStack_f8 = uVar18;
        FUN_18063aed0(uVar15,pauVar20,uVar5 + 1);
      }
      local_c8 = 0;
      local_c0 = local_150._0_8_;
      uStack_b8 = local_150._8_8_;
      uStack_b0 = uStack_140;
      uStack_a8 = uStack_138;
      uStack_140 = 0;
      uStack_138 = 0xf;
      auVar8[0xf] = 0;
      auVar8._0_15_ = local_150._1_15_;
      local_150 = auVar8 << 8;
      local_a0 = local_130._0_8_;
      uStack_98 = local_130._8_8_;
      uStack_90 = uStack_120;
      uStack_88 = uStack_118;
      uStack_120 = 0;
      uStack_118 = 0xf;
      auVar9[0xf] = 0;
      auVar9._0_15_ = local_130._1_15_;
      local_130 = auVar9 << 8;
      local_80 = local_110._0_8_;
      uStack_78 = local_110._8_8_;
      uStack_70 = uStack_100;
      uStack_68 = uStack_f8;
      uStack_100 = 0;
      uStack_f8 = 0xf;
      auVar10[0xf] = 0;
      auVar10._0_15_ = local_110._1_15_;
      local_110 = auVar10 << 8;
      local_c4 = uVar3;
      uVar15 = FUN_18015b360(local_60,puVar17 + -0xc);
      FUN_180527e00(uVar6,uVar15,uVar21,&local_c8);
      FUN_18015c010(local_110);
      FUN_18015c010(local_130);
      FUN_18015c010();
      local_170 = local_170 + 0x32;
      puVar17 = puVar17 + 0x19;
    } while (local_170 != local_e8);
  }
  uVar5 = local_d8;
  lVar4 = *(longlong *)*local_168;
  local_180 = "Stickers";
  if (param_3 != '\0') {
    local_180 = "Charms";
  }
  uStack_178 = 8;
  sStack_176 = (short)local_e0;
  sStack_174 = (short)((*(longlong *)(lVar4 + 0x48) - *(longlong *)(lVar4 + 0x40)) / 0x18) -
               sStack_176;
  uStack_172 = 0;
  puVar17 = *(undefined8 **)(lVar4 + 0x30);
  if (puVar17 == *(undefined8 **)(lVar4 + 0x38)) {
    FUN_180178c40(lVar4 + 0x28,puVar17,&local_180);
  }
  else {
    *puVar17 = local_180;
    puVar17[1] = CONCAT17(uStack_171,(uint7)CONCAT24(sStack_174,CONCAT22(sStack_176,8)));
    *(longlong *)(lVar4 + 0x30) = *(longlong *)(lVar4 + 0x30) + 0x10;
  }
  return uVar5 & 0xffffffff;
}



