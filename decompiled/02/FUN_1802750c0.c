// FUN_1802750c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802750c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802750c0(undefined8 param_1,undefined8 *param_2,int param_3,undefined8 param_4,
                  float param_5,undefined4 param_6,undefined2 param_7,int param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  longlong lVar13;
  ulonglong uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 auStack_2f8 [32];
  int local_2d8;
  float local_2d0;
  float local_2c8;
  undefined4 local_2c0;
  undefined8 *local_2b8;
  undefined8 *local_2b0;
  int local_2a8;
  char *local_298;
  longlong local_290;
  char *local_288;
  undefined8 local_280;
  undefined *local_278;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined1 auStack_258 [16];
  undefined8 local_248;
  undefined8 uStack_240;
  undefined1 auStack_238 [16];
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 auStack_218 [16];
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8 [16];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [16];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178 [16];
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulonglong local_60;
  
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_2f8;
  if ((0x1f < param_8 - 1U) || (1 < DAT_180cc9354)) goto LAB_1802754ee;
  local_2a8 = param_3;
  sVar6 = thunk_FUN_180624430(param_4);
  local_2d0 = (float)param_4;
  if ((0 < sVar6) ||
     ((((fVar15 = 0.0, local_2d0 < 0.0 || (sVar6 = thunk_FUN_180624430(param_5), 0 < sVar6)) ||
       (param_5 < fVar15)) || (sVar6 = thunk_FUN_180624430(param_6), 0 < sVar6))))
  goto LAB_1802754ee;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  lVar9 = DAT_1808f07e0;
  lVar10 = DAT_1808da460;
  if ((DAT_1808f07e0 != DAT_1808da460) || (lVar13 = DAT_180c64d50, DAT_180c64d50 == 0)) {
    UVar8 = GetTickCount64();
    if ((lVar9 == lVar10) && (UVar8 < DAT_180c64d40)) goto LAB_1802754ee;
    local_278 = &DAT_1808f0730;
    iVar7 = FUN_1805f68d0(&DAT_1808f0730);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_1808f077c == 0x7fffffff) {
      DAT_1808f077c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(6);
    }
    uVar14 = 1000;
    if (DAT_1808f07e0 == lVar10) {
      if ((DAT_180c64d50 == 0) && (DAT_180c64d40 <= UVar8)) goto LAB_18027525a;
    }
    else {
      DAT_1808f0780 = 1000;
LAB_18027525a:
      lVar9 = -1;
      do {
        local_290 = lVar9 + 1;
        lVar13 = lVar9 + 1;
        lVar9 = local_290;
      } while ("client.dll:28F3440F11442420>E8????????488D85B0000000"[lVar13] != '\0');
      local_298 = "client.dll:28F3440F11442420>E8????????488D85B0000000";
      local_288 = "patterns::weapon_calculate_spread";
      local_280 = 0x21;
      DAT_180c64d50 = FUN_1800e5d20(&local_288,&local_298);
      DAT_1808f07e0 = lVar10;
      DAT_180c64d40 = 0xffffffffffffffff;
      if (DAT_180c64d50 == 0) {
        DAT_180c64d40 = DAT_1808f0780 + UVar8;
        uVar14 = 60000;
        if (DAT_1808f0780 < 60000) {
          uVar14 = DAT_1808f0780 * 2;
        }
      }
      param_3 = local_2a8;
      DAT_1808f0780 = uVar14;
    }
    lVar13 = DAT_180c64d50;
    FUN_1805f68fc(&DAT_1808f0730);
    if (lVar13 == 0) goto LAB_1802754ee;
  }
  uVar4 = DAT_180cc9354;
  local_168 = 0;
  uStack_160 = 0;
  uStack_158 = 0;
  uStack_150 = 0;
  local_148 = 0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_130 = 0;
  local_128 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  uStack_110 = 0;
  local_108 = 0;
  uStack_100 = 0;
  uStack_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  uStack_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_b8 = 0;
  uStack_b0 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  cVar5 = FUN_1804513c0(lVar13,1,2);
  if (cVar5 != '\0') {
    lVar10 = FUN_18017ea70();
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
    local_2d8 = param_3 + 1;
    local_2b0 = &local_e8;
    local_2b8 = &local_168;
    local_2c8 = param_5;
    local_2c0 = param_6;
    cVar5 = FUN_18027b220(lVar13,param_7,param_8,uVar4);
    lVar10 = FUN_18017ea70();
    if (*(int *)(lVar10 + 4) != 0) {
      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
    }
    if (cVar5 != '\0') {
      local_268 = 0;
      uStack_260 = 0;
      auStack_258 = ZEXT816(0);
      local_248 = 0;
      uStack_240 = 0;
      auStack_238 = auStack_258;
      local_228 = 0;
      uStack_220 = 0;
      auStack_218 = auStack_258;
      local_208 = 0;
      uStack_200 = 0;
      local_1f8 = auStack_258;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1d8 = auStack_258;
      local_1c8 = 0;
      uStack_1c0 = 0;
      local_1b8 = auStack_258;
      local_1a8 = 0;
      uStack_1a0 = 0;
      local_198 = auStack_258;
      local_188 = 0;
      uStack_180 = 0;
      local_178 = auStack_258;
      iVar7 = 0;
      if (0 < param_8) {
        puVar12 = &local_268;
        lVar10 = 0;
        do {
          uVar16 = *(undefined4 *)(local_178 + lVar10 + 0x10);
          sVar6 = thunk_FUN_180624430(uVar16);
          if (0 < sVar6) goto LAB_1802754ee;
          uVar17 = *(undefined4 *)((longlong)&local_e8 + lVar10);
          sVar6 = thunk_FUN_180624430(uVar17);
          if (0 < sVar6) goto LAB_1802754ee;
          *(undefined4 *)puVar12 = uVar16;
          *(undefined4 *)((longlong)puVar12 + 4) = uVar17;
          iVar7 = iVar7 + 1;
          lVar10 = lVar10 + 4;
          puVar12 = puVar12 + 1;
        } while (iVar7 < param_8);
      }
      puVar12 = &local_268;
      lVar10 = 2;
      puVar11 = param_2;
      do {
        uVar1 = puVar12[1];
        uVar2 = puVar12[2];
        uVar3 = puVar12[3];
        *puVar11 = *puVar12;
        puVar11[1] = uVar1;
        puVar11[2] = uVar2;
        puVar11[3] = uVar3;
        uVar1 = puVar12[5];
        uVar2 = puVar12[6];
        uVar3 = puVar12[7];
        puVar11[4] = puVar12[4];
        puVar11[5] = uVar1;
        puVar11[6] = uVar2;
        puVar11[7] = uVar3;
        uVar1 = puVar12[9];
        uVar2 = puVar12[10];
        uVar3 = puVar12[0xb];
        puVar11[8] = puVar12[8];
        puVar11[9] = uVar1;
        puVar11[10] = uVar2;
        puVar11[0xb] = uVar3;
        uVar1 = puVar12[0xd];
        puVar11[0xc] = puVar12[0xc];
        puVar11[0xd] = uVar1;
        uVar1 = puVar12[0xf];
        puVar11[0xe] = puVar12[0xe];
        puVar11[0xf] = uVar1;
        puVar12 = puVar12 + 0x10;
        lVar10 = lVar10 + -1;
        puVar11 = puVar11 + 0x10;
      } while (lVar10 != 0);
      *(undefined1 *)(param_2 + 0x20) = 1;
    }
  }
LAB_1802754ee:
  *(undefined1 *)(param_2 + 0x20) = 0;
}



