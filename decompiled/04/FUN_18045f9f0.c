// FUN_18045f9f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045f9f0 */

void FUN_18045f9f0(char *param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  char *pcVar14;
  undefined8 *puVar15;
  int *piVar16;
  int *piVar17;
  longlong lVar18;
  char *pcVar19;
  int iVar20;
  undefined **ppuVar21;
  longlong lVar22;
  int iVar23;
  char *pcVar24;
  longlong lVar25;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  undefined8 unaff_XMM11_Qa;
  undefined8 unaff_XMM11_Qb;
  undefined8 unaff_XMM12_Qa;
  undefined8 unaff_XMM12_Qb;
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  undefined8 unaff_XMM14_Qa;
  undefined8 unaff_XMM14_Qb;
  int local_258;
  int local_254 [3];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined2 local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined2 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined1 uStack_1f8;
  undefined8 uStack_1f7;
  undefined8 uStack_1ef;
  undefined8 uStack_1e7;
  undefined8 uStack_1df;
  undefined8 uStack_1d7;
  undefined8 uStack_1cf;
  undefined8 uStack_1c7;
  undefined8 uStack_1bf;
  undefined8 local_1b7;
  undefined8 uStack_1af;
  undefined8 uStack_1a7;
  undefined8 uStack_19f;
  undefined2 local_197;
  undefined1 local_195;
  undefined4 local_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 local_184;
  undefined1 local_180;
  undefined4 local_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined1 local_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  undefined4 local_134;
  undefined1 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined1 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined1 local_104;
  undefined4 local_100;
  undefined1 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined1 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar20 = 1;
  if (*(int *)(param_1 + 0xc44) < 1) {
    param_1[0xc44] = '\x01';
    param_1[0xc45] = '\0';
    param_1[0xc46] = '\0';
    param_1[0xc47] = '\0';
    param_1[0xc40] = '\0';
    param_1[0xc41] = '\0';
    param_1[0xc42] = '\0';
    param_1[0xc43] = '\0';
  }
  if (*param_1 == '\0') {
    strncpy(param_1,"Global",0x1f);
  }
  param_1[0x184] = '\x01';
  iVar13 = *(int *)(param_1 + 0xc44);
  iVar23 = 1;
  if (8 < iVar13) {
    iVar13 = 8;
  }
  *(int *)(param_1 + 0xc44) = iVar13;
  if (1 < iVar13) {
    lVar22 = 1;
    pcVar19 = param_1 + 0x188;
    lVar25 = 1;
    pcVar24 = pcVar19;
    do {
      bVar11 = false;
      ppuVar21 = &PTR_s_de_mirage_18082a1a0;
      do {
        if (bVar11) {
LAB_18045fadb:
          bVar11 = true;
        }
        else {
          pcVar14 = pcVar19;
          do {
            cVar4 = *pcVar14;
            cVar5 = pcVar14[(longlong)*ppuVar21 - (longlong)pcVar19];
            if (cVar4 != cVar5) break;
            pcVar14 = pcVar14 + 1;
          } while (cVar5 != '\0');
          if (cVar4 == cVar5) goto LAB_18045fadb;
          bVar11 = false;
        }
        ppuVar21 = ppuVar21 + 1;
      } while (ppuVar21 != (undefined **)&DAT_18082a200);
      if (((((pcVar19[0x21] == '\0') && (pcVar19[0x3d] == '\0')) && (pcVar19[0x50] == '\0')) &&
          ((pcVar19[200] == '\0' && (pcVar19[0xec] == '\0')))) && (pcVar19[0x14c] == '\0')) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      for (pcVar14 = pcVar19 + 0x158; pcVar14 != pcVar19 + 0x15e; pcVar14 = pcVar14 + 1) {
        if ((bVar12) || (bVar12 = false, *pcVar14 != '\0')) {
          bVar12 = true;
        }
      }
      if ((!bVar11) ||
         ((bVar12 && (iVar13 = memcmp(pcVar19 + 0x20,param_1 + 0x20,0x164), iVar13 != 0)))) {
        bVar11 = false;
      }
      else {
        bVar11 = true;
      }
      if ((*pcVar19 != '\0') && (!bVar11)) {
        if (lVar25 != lVar22) {
          lVar18 = 3;
          pcVar14 = pcVar19;
          puVar15 = &local_248;
          do {
            puVar1 = puVar15 + 0x10;
            uVar8 = *(undefined8 *)(pcVar14 + 8);
            uVar9 = *(undefined8 *)(pcVar14 + 0x10);
            uVar10 = *(undefined8 *)(pcVar14 + 0x18);
            uVar6 = *(undefined8 *)(pcVar14 + 0x70);
            uVar7 = *(undefined8 *)(pcVar14 + 0x78);
            pcVar2 = pcVar14 + 0x80;
            *puVar15 = *(undefined8 *)pcVar14;
            puVar15[1] = uVar8;
            puVar15[2] = uVar9;
            puVar15[3] = uVar10;
            uVar8 = *(undefined8 *)(pcVar14 + 0x28);
            uVar9 = *(undefined8 *)(pcVar14 + 0x30);
            uVar10 = *(undefined8 *)(pcVar14 + 0x38);
            puVar15[4] = *(undefined8 *)(pcVar14 + 0x20);
            puVar15[5] = uVar8;
            puVar15[6] = uVar9;
            puVar15[7] = uVar10;
            uVar8 = *(undefined8 *)(pcVar14 + 0x48);
            uVar9 = *(undefined8 *)(pcVar14 + 0x50);
            uVar10 = *(undefined8 *)(pcVar14 + 0x58);
            puVar15[8] = *(undefined8 *)(pcVar14 + 0x40);
            puVar15[9] = uVar8;
            puVar15[10] = uVar9;
            puVar15[0xb] = uVar10;
            uVar8 = *(undefined8 *)(pcVar14 + 0x68);
            puVar15[0xc] = *(undefined8 *)(pcVar14 + 0x60);
            puVar15[0xd] = uVar8;
            puVar15[0xe] = uVar6;
            puVar15[0xf] = uVar7;
            lVar18 = lVar18 + -1;
            pcVar14 = pcVar2;
            puVar15 = puVar1;
          } while (lVar18 != 0);
          lVar18 = 3;
          *puVar1 = *(undefined8 *)pcVar2;
          puVar15 = &local_248;
          pcVar14 = pcVar24;
          do {
            pcVar2 = pcVar14 + 0x80;
            uVar6 = puVar15[1];
            uVar7 = puVar15[2];
            uVar8 = puVar15[3];
            uVar9 = puVar15[0xe];
            uVar10 = puVar15[0xf];
            puVar1 = puVar15 + 0x10;
            *(undefined8 *)pcVar14 = *puVar15;
            *(undefined8 *)(pcVar14 + 8) = uVar6;
            *(undefined8 *)(pcVar14 + 0x10) = uVar7;
            *(undefined8 *)(pcVar14 + 0x18) = uVar8;
            uVar6 = puVar15[5];
            uVar7 = puVar15[6];
            uVar8 = puVar15[7];
            *(undefined8 *)(pcVar14 + 0x20) = puVar15[4];
            *(undefined8 *)(pcVar14 + 0x28) = uVar6;
            *(undefined8 *)(pcVar14 + 0x30) = uVar7;
            *(undefined8 *)(pcVar14 + 0x38) = uVar8;
            uVar6 = puVar15[9];
            uVar7 = puVar15[10];
            uVar8 = puVar15[0xb];
            *(undefined8 *)(pcVar14 + 0x40) = puVar15[8];
            *(undefined8 *)(pcVar14 + 0x48) = uVar6;
            *(undefined8 *)(pcVar14 + 0x50) = uVar7;
            *(undefined8 *)(pcVar14 + 0x58) = uVar8;
            uVar6 = puVar15[0xd];
            *(undefined8 *)(pcVar14 + 0x60) = puVar15[0xc];
            *(undefined8 *)(pcVar14 + 0x68) = uVar6;
            *(undefined8 *)(pcVar14 + 0x70) = uVar9;
            *(undefined8 *)(pcVar14 + 0x78) = uVar10;
            lVar18 = lVar18 + -1;
            puVar15 = puVar1;
            pcVar14 = pcVar2;
          } while (lVar18 != 0);
          *(undefined8 *)pcVar2 = *puVar1;
        }
        iVar20 = iVar20 + 1;
        lVar25 = lVar25 + 1;
        pcVar24 = pcVar24 + 0x188;
      }
      iVar13 = *(int *)(param_1 + 0xc44);
      iVar23 = iVar23 + 1;
      lVar22 = lVar22 + 1;
      pcVar19 = pcVar19 + 0x188;
    } while (iVar23 < iVar13);
  }
  if (iVar20 < iVar13) {
    local_38 = unaff_XMM6_Qa;
    uStack_30 = unaff_XMM6_Qb;
    local_48 = unaff_XMM7_Qa;
    uStack_40 = unaff_XMM7_Qb;
    local_58 = unaff_XMM8_Qa;
    uStack_50 = unaff_XMM8_Qb;
    local_68 = unaff_XMM9_Qa;
    uStack_60 = unaff_XMM9_Qb;
    local_78 = unaff_XMM10_Qa;
    uStack_70 = unaff_XMM10_Qb;
    local_88 = unaff_XMM11_Qa;
    uStack_80 = unaff_XMM11_Qb;
    local_98 = unaff_XMM12_Qa;
    uStack_90 = unaff_XMM12_Qb;
    local_a8 = unaff_XMM13_Qa;
    uStack_a0 = unaff_XMM13_Qb;
    local_b8 = unaff_XMM14_Qa;
    uStack_b0 = unaff_XMM14_Qb;
    pcVar19 = param_1 + (longlong)iVar20 * 0x188;
    iVar13 = iVar20;
    do {
      local_228 = 0;
      local_197 = 0;
      local_195 = 0;
      lVar22 = 3;
      local_180 = 0;
      local_15c = 0;
      local_138 = 0;
      local_130 = 0;
      local_11c = 0;
      local_110 = 0;
      local_104 = 0;
      local_fc = 0;
      local_f0 = 0;
      local_cc = 0;
      local_c4 = 0;
      uStack_224 = 0x3e800000;
      uStack_220 = 0x3e8a3d71;
      uStack_21c = 0x3eb33333;
      uStack_218 = 0x3f800000;
      uStack_214 = 0x3f0ccccd;
      uStack_210 = 0x3eb33333;
      local_184 = 0x3f800000;
      local_168 = 0;
      local_164 = 0x3f800000;
      local_160 = 0x3f800000;
      local_134 = 0;
      local_12c = 0x3f800000;
      local_128 = 0x3f800000;
      local_124 = 0x3f800000;
      local_120 = 0;
      local_114 = 0x3f800000;
      local_10c = 0x3f800000;
      local_108 = 0;
      local_100 = 0xbf800000;
      local_f8 = 0;
      local_f4 = 0;
      local_e8 = 0x40200000;
      local_e4 = 0x3f800000;
      local_dc = 0x3f800000;
      local_d8 = 0x3f59999a;
      local_d4 = 0x3f19999a;
      local_d0 = 0x3f800000;
      local_c8 = 0x3f800000;
      local_248 = 0;
      uStack_240 = 0;
      uStack_238 = 0;
      uStack_230 = 0;
      uStack_20c = 0;
      local_208 = 0x3f800000;
      uStack_204 = 0x3f800000;
      uStack_200 = 0x3f800000;
      uStack_1fc = 0x3f800000;
      uStack_1f8 = 0;
      uStack_1f7 = 0;
      uStack_1ef = 0;
      uStack_1e7 = 0;
      uStack_1df = 0;
      uStack_1d7 = 0;
      uStack_1cf = 0;
      uStack_1c7 = 0;
      uStack_1bf = 0;
      local_1b7 = 0;
      uStack_1af = 0;
      uStack_1a7 = 0;
      uStack_19f = 0;
      local_194 = 0x3f800000;
      uStack_190 = 0x3f800000;
      uStack_18c = 0x3f800000;
      uStack_188 = 0x3f800000;
      local_17c = 0x3f800000;
      uStack_178 = 0x3f800000;
      uStack_174 = 0x3f800000;
      uStack_170 = 0x3f800000;
      local_16c = 0;
      local_158 = 0x3f0ccccd3f000000;
      uStack_150 = 0x3f8000003f266666;
      local_148 = 0x453b800043fa0000;
      uStack_140 = 0x3ecccccd40000000;
      local_118 = 0;
      local_e0 = 1;
      puVar15 = &local_248;
      pcVar24 = pcVar19;
      do {
        pcVar14 = pcVar24 + 0x80;
        uVar8 = puVar15[1];
        uVar9 = puVar15[2];
        uVar10 = puVar15[3];
        uVar6 = puVar15[0xe];
        uVar7 = puVar15[0xf];
        puVar1 = puVar15 + 0x10;
        *(undefined8 *)pcVar24 = *puVar15;
        *(undefined8 *)(pcVar24 + 8) = uVar8;
        *(undefined8 *)(pcVar24 + 0x10) = uVar9;
        *(undefined8 *)(pcVar24 + 0x18) = uVar10;
        uVar8 = puVar15[5];
        uVar9 = puVar15[6];
        uVar10 = puVar15[7];
        *(undefined8 *)(pcVar24 + 0x20) = puVar15[4];
        *(undefined8 *)(pcVar24 + 0x28) = uVar8;
        *(undefined8 *)(pcVar24 + 0x30) = uVar9;
        *(undefined8 *)(pcVar24 + 0x38) = uVar10;
        uVar8 = puVar15[9];
        uVar9 = puVar15[10];
        uVar10 = puVar15[0xb];
        *(undefined8 *)(pcVar24 + 0x40) = puVar15[8];
        *(undefined8 *)(pcVar24 + 0x48) = uVar8;
        *(undefined8 *)(pcVar24 + 0x50) = uVar9;
        *(undefined8 *)(pcVar24 + 0x58) = uVar10;
        uVar8 = puVar15[0xd];
        *(undefined8 *)(pcVar24 + 0x60) = puVar15[0xc];
        *(undefined8 *)(pcVar24 + 0x68) = uVar8;
        *(undefined8 *)(pcVar24 + 0x70) = uVar6;
        *(undefined8 *)(pcVar24 + 0x78) = uVar7;
        lVar22 = lVar22 + -1;
        puVar15 = puVar1;
        pcVar24 = pcVar14;
      } while (lVar22 != 0);
      iVar13 = iVar13 + 1;
      pcVar19 = pcVar19 + 0x188;
      *(undefined8 *)pcVar14 = *puVar1;
    } while (iVar13 < *(int *)(param_1 + 0xc44));
  }
  piVar3 = (int *)(param_1 + 0xc40);
  *(int *)(param_1 + 0xc44) = iVar20;
  local_254[0] = iVar20 + -1;
  local_258 = 0;
  piVar17 = &local_258;
  if (-1 < *piVar3) {
    piVar17 = piVar3;
  }
  piVar16 = local_254;
  if (*piVar3 <= iVar20 + -1) {
    piVar16 = piVar17;
  }
  *piVar3 = *piVar16;
  return;
}



