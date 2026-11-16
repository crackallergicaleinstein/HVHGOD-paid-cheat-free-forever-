// FUN_180245330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180245330 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_180245330(longlong param_1,ulonglong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  char cVar11;
  char cVar12;
  ulonglong *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong *puVar17;
  undefined8 *puVar18;
  longlong lVar19;
  undefined8 *puVar20;
  ulonglong uVar21;
  undefined8 local_8268 [3072];
  undefined1 local_2268 [8192];
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined4 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined2 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [16];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uStack_30 = 0x18024535a;
  iVar1 = (int)param_2[0xc];
  uVar21 = 0;
  if (iVar1 != 0) goto LAB_18024567e;
  if (((*(ulonglong *)(param_1 + 0x8038) == param_2[6]) &&
      (*(ulonglong *)(param_1 + 0x8040) == param_2[7])) &&
     (*(longlong *)(param_1 + 0x8060) <= (longlong)param_2[0xb])) {
    if ((*param_2 < *(ulonglong *)(param_1 + 0x8008)) ||
       (0xfa < *param_2 - *(ulonglong *)(param_1 + 0x8008))) goto LAB_1802453c7;
  }
  else {
LAB_1802453c7:
    uVar2 = *(undefined8 *)(param_1 + 0x8220);
    FUN_18063ab10(local_8268,0,0x6000);
    FUN_18024e950(local_8268,0x60);
    FUN_18063ab10(local_2268,0,0x2000);
    FUN_18024e950(local_2268,0x20);
    local_1e8 = ZEXT816(0);
    local_268 = 0;
    local_1fc = 0;
    local_1a8 = 0;
    local_fc = 0;
    local_a8 = 0;
    local_238 = 0xcbf29ce484222325;
    local_1f8 = 0;
    uStack_1f0 = 0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_1b8 = 0;
    uStack_1b0 = 0;
    local_198 = 0;
    uStack_190 = 0;
    local_138 = 0xcbf29ce484222325;
    local_f8 = 0;
    uStack_f0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_260 = 0;
    local_258 = 0;
    local_250 = 0;
    local_248 = 0;
    local_240 = 0;
    local_230 = 0;
    local_228 = 0;
    local_220 = 0;
    local_218 = 0;
    local_210 = 0;
    local_208 = 0xffffffffffffffff;
    local_200 = 0;
    local_1a4 = 0;
    local_19c = 0;
    local_188 = 0;
    local_180 = 0;
    local_178 = 0;
    local_170 = 0;
    local_168 = 0;
    local_160 = 0;
    local_158 = 0;
    local_150 = 0;
    local_148 = 0;
    local_140 = 0;
    local_130 = 0;
    local_128 = 0;
    local_120 = 0;
    local_118 = 0;
    local_110 = 0;
    local_108 = 0xffffffffffffffff;
    local_100 = 0;
    local_a4 = 0;
    local_9c = 0;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
    local_1c8 = local_1e8;
    local_e8 = local_1e8;
    local_c8 = local_1e8;
    FUN_18063aed0(param_1,local_8268,0x8238);
    *(undefined8 *)(param_1 + 0x8220) = uVar2;
  }
  lVar19 = 2;
  puVar13 = (ulonglong *)(param_1 + 0x8008);
  puVar17 = param_2;
  do {
    uVar4 = puVar17[1];
    uVar7 = puVar17[2];
    uVar8 = puVar17[3];
    uVar15 = puVar17[0xe];
    uVar3 = puVar17[0xf];
    *puVar13 = *puVar17;
    puVar13[1] = uVar4;
    puVar13[2] = uVar7;
    puVar13[3] = uVar8;
    uVar4 = puVar17[5];
    uVar7 = puVar17[6];
    uVar8 = puVar17[7];
    puVar13[4] = puVar17[4];
    puVar13[5] = uVar4;
    puVar13[6] = uVar7;
    puVar13[7] = uVar8;
    uVar4 = puVar17[9];
    uVar7 = puVar17[10];
    uVar8 = puVar17[0xb];
    puVar13[8] = puVar17[8];
    puVar13[9] = uVar4;
    puVar13[10] = uVar7;
    puVar13[0xb] = uVar8;
    uVar4 = puVar17[0xd];
    puVar13[0xc] = puVar17[0xc];
    puVar13[0xd] = uVar4;
    puVar13[0xe] = uVar15;
    puVar13[0xf] = uVar3;
    lVar19 = lVar19 + -1;
    puVar13 = puVar13 + 0x10;
    puVar17 = puVar17 + 0x10;
  } while (lVar19 != 0);
LAB_18024567e:
  if ((*(char *)(param_1 + 0x80ff) == '\0') ||
     (cVar11 = FUN_180245030(param_1 + 0x8008,param_2), cVar11 == '\0')) {
    cVar11 = '\0';
  }
  else {
    cVar11 = '\x01';
  }
  *(char *)((longlong)param_2 + 0xf9) = cVar11;
  if (iVar1 == 1) {
    lVar19 = 2;
    puVar13 = param_2;
    puVar17 = (ulonglong *)(param_1 + 0x8108);
    do {
      uVar4 = puVar13[1];
      uVar7 = puVar13[2];
      uVar8 = puVar13[3];
      uVar15 = puVar13[0xe];
      uVar3 = puVar13[0xf];
      *puVar17 = *puVar13;
      puVar17[1] = uVar4;
      puVar17[2] = uVar7;
      puVar17[3] = uVar8;
      uVar4 = puVar13[5];
      uVar7 = puVar13[6];
      uVar8 = puVar13[7];
      puVar17[4] = puVar13[4];
      puVar17[5] = uVar4;
      puVar17[6] = uVar7;
      puVar17[7] = uVar8;
      uVar4 = puVar13[9];
      uVar7 = puVar13[10];
      uVar8 = puVar13[0xb];
      puVar17[8] = puVar13[8];
      puVar17[9] = uVar4;
      puVar17[10] = uVar7;
      puVar17[0xb] = uVar8;
      uVar4 = puVar13[0xd];
      puVar17[0xc] = puVar13[0xc];
      puVar17[0xd] = uVar4;
      puVar17[0xe] = uVar15;
      puVar17[0xf] = uVar3;
      lVar19 = lVar19 + -1;
      puVar13 = puVar13 + 0x10;
      puVar17 = puVar17 + 0x10;
    } while (lVar19 != 0);
  }
  else if (iVar1 == 2) {
    if ((*(char *)(param_1 + 0x80ff) != '\0') &&
       (cVar12 = FUN_180245030((ulonglong *)(param_1 + 0x8108),param_2), cVar12 != '\0')) {
      *(longlong *)(param_1 + 0x8228) = *(longlong *)(param_1 + 0x8228) + 1;
    }
  }
  else if ((iVar1 == 3) && (cVar11 != '\0')) {
    *(longlong *)(param_1 + 0x8230) = *(longlong *)(param_1 + 0x8230) + 1;
  }
  *(longlong *)(param_1 + 0x8218) = *(longlong *)(param_1 + 0x8218) + 1;
  lVar19 = *(longlong *)(param_1 + 0x8210);
  param_2[1] = *(ulonglong *)(param_1 + 0x8218);
  lVar14 = 2;
  puVar13 = (ulonglong *)(lVar19 * 0x100 + param_1);
  do {
    uVar4 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    uVar15 = param_2[0xe];
    uVar3 = param_2[0xf];
    *puVar13 = *param_2;
    puVar13[1] = uVar4;
    puVar13[2] = uVar7;
    puVar13[3] = uVar8;
    uVar4 = param_2[5];
    uVar7 = param_2[6];
    uVar8 = param_2[7];
    puVar13[4] = param_2[4];
    puVar13[5] = uVar4;
    puVar13[6] = uVar7;
    puVar13[7] = uVar8;
    uVar4 = param_2[9];
    uVar7 = param_2[10];
    uVar8 = param_2[0xb];
    puVar13[8] = param_2[8];
    puVar13[9] = uVar4;
    puVar13[10] = uVar7;
    puVar13[0xb] = uVar8;
    uVar4 = param_2[0xd];
    puVar13[0xc] = param_2[0xc];
    puVar13[0xd] = uVar4;
    puVar13[0xe] = uVar15;
    puVar13[0xf] = uVar3;
    lVar14 = lVar14 + -1;
    puVar13 = puVar13 + 0x10;
    param_2 = param_2 + 0x10;
  } while (lVar14 != 0);
  uVar15 = *(longlong *)(param_1 + 0x8208) + 1;
  *(ulonglong *)(param_1 + 0x8210) = (*(longlong *)(param_1 + 0x8210) + 1U) % 0x60;
  if (0x60 < uVar15) {
    uVar15 = 0x60;
  }
  *(ulonglong *)(param_1 + 0x8208) = uVar15;
  if ((cVar11 != '\0') && (*(longlong *)(param_1 + 0x8000) == 0)) {
    if (0x20 < uVar15) {
      uVar15 = 0x20;
    }
    *(ulonglong *)(param_1 + 0x8000) = uVar15;
    if (uVar15 != 0) {
      puVar20 = (undefined8 *)(param_1 + 0x6000);
      do {
        lVar19 = 2;
        puVar16 = (undefined8 *)
                  (((*(longlong *)(param_1 + 0x8210) + 0x60 + (uVar21 - uVar15)) % 0x60) * 0x100 +
                  param_1);
        puVar18 = local_8268;
        do {
          uVar6 = puVar16[1];
          uVar9 = puVar16[2];
          uVar10 = puVar16[3];
          uVar2 = puVar16[0xe];
          uVar5 = puVar16[0xf];
          *puVar18 = *puVar16;
          puVar18[1] = uVar6;
          puVar18[2] = uVar9;
          puVar18[3] = uVar10;
          uVar6 = puVar16[5];
          uVar9 = puVar16[6];
          uVar10 = puVar16[7];
          puVar18[4] = puVar16[4];
          puVar18[5] = uVar6;
          puVar18[6] = uVar9;
          puVar18[7] = uVar10;
          uVar6 = puVar16[9];
          uVar9 = puVar16[10];
          uVar10 = puVar16[0xb];
          puVar18[8] = puVar16[8];
          puVar18[9] = uVar6;
          puVar18[10] = uVar9;
          puVar18[0xb] = uVar10;
          uVar6 = puVar16[0xd];
          puVar18[0xc] = puVar16[0xc];
          puVar18[0xd] = uVar6;
          puVar18[0xe] = uVar2;
          puVar18[0xf] = uVar5;
          lVar19 = lVar19 + -1;
          puVar16 = puVar16 + 0x10;
          puVar18 = puVar18 + 0x10;
        } while (lVar19 != 0);
        lVar19 = 2;
        puVar16 = puVar20;
        puVar18 = local_8268;
        do {
          uVar6 = puVar18[1];
          uVar9 = puVar18[2];
          uVar10 = puVar18[3];
          uVar2 = puVar18[0xe];
          uVar5 = puVar18[0xf];
          *puVar16 = *puVar18;
          puVar16[1] = uVar6;
          puVar16[2] = uVar9;
          puVar16[3] = uVar10;
          uVar6 = puVar18[5];
          uVar9 = puVar18[6];
          uVar10 = puVar18[7];
          puVar16[4] = puVar18[4];
          puVar16[5] = uVar6;
          puVar16[6] = uVar9;
          puVar16[7] = uVar10;
          uVar6 = puVar18[9];
          uVar9 = puVar18[10];
          uVar10 = puVar18[0xb];
          puVar16[8] = puVar18[8];
          puVar16[9] = uVar6;
          puVar16[10] = uVar9;
          puVar16[0xb] = uVar10;
          uVar6 = puVar18[0xd];
          puVar16[0xc] = puVar18[0xc];
          puVar16[0xd] = uVar6;
          puVar16[0xe] = uVar2;
          puVar16[0xf] = uVar5;
          lVar19 = lVar19 + -1;
          puVar16 = puVar16 + 0x10;
          puVar18 = puVar18 + 0x10;
        } while (lVar19 != 0);
        uVar15 = *(ulonglong *)(param_1 + 0x8000);
        uVar21 = uVar21 + 1;
        puVar20 = puVar20 + 0x20;
      } while (uVar21 < uVar15);
    }
  }
  return;
}



