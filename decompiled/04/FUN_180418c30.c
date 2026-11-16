// FUN_180418c30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180418c30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180418c30(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  float param_5,longlong param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  short sVar9;
  int iVar10;
  ULONGLONG UVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  undefined1 auStack_278 [32];
  undefined8 *local_258;
  undefined8 *local_250;
  undefined8 *local_248;
  undefined1 *local_240;
  undefined1 local_238;
  char local_237;
  undefined *local_230;
  char *local_228;
  longlong local_220;
  char *local_218;
  longlong local_210;
  undefined8 *local_208;
  undefined8 *local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  float local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined1 local_1e0 [16];
  undefined1 local_1d0;
  undefined4 local_1cf;
  undefined2 local_1cb;
  undefined1 local_1c9;
  undefined1 local_1c8 [16];
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 auStack_190 [16];
  undefined8 local_180;
  undefined4 uStack_178;
  undefined8 uStack_174;
  undefined8 uStack_16c;
  undefined8 uStack_164;
  undefined8 uStack_15c;
  undefined4 uStack_154;
  undefined8 uStack_150;
  undefined4 local_148;
  undefined8 local_144;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined8 local_12c;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong local_60;
  
  local_60 = DAT_1808d5f00 ^ (ulonglong)auStack_278;
  local_208 = param_3;
  local_200 = param_4;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  puVar7 = DAT_1809c0ef8;
  puVar6 = DAT_1808da460;
  uVar17 = 1000;
  if ((DAT_1809c0ef8 != DAT_1808da460) || (lVar14 = DAT_180c7d800, DAT_180c7d800 == 0)) {
    UVar11 = GetTickCount64();
    if ((puVar7 == puVar6) && (UVar11 < DAT_180c7d808)) {
      lVar14 = 0;
    }
    else {
      local_230 = &DAT_1809c0e40;
      iVar10 = FUN_1805f68d0(&DAT_1809c0e40);
      if (iVar10 != 0) goto LAB_1804191fb;
      if (DAT_1809c0e8c == 0x7fffffff) {
        DAT_1809c0e8c = 0x7ffffffe;
        goto LAB_1804191f0;
      }
      if (DAT_1809c0ef8 == puVar6) {
        if ((DAT_180c7d800 == 0) && (DAT_180c7d808 <= UVar11)) goto LAB_180418d54;
      }
      else {
        DAT_1809c0e30 = 1000;
LAB_180418d54:
        lVar14 = -1;
        do {
          local_220 = lVar14 + 1;
          pcVar2 = "lient.dll:48895C24??48897424??574883EC??0FB641??33FF24" + lVar14;
          lVar14 = local_220;
        } while (*pcVar2 != '\0');
        local_228 = "client.dll:48895C24??48897424??574883EC??0FB641??33FF24";
        local_218 = "patterns::trace_filter_init";
        local_210 = 0x1b;
        DAT_180c7d800 = FUN_1800e5d20(&local_218,&local_228);
        DAT_1809c0ef8 = puVar6;
        DAT_180c7d808 = 0xffffffffffffffff;
        if (DAT_180c7d800 == 0) {
          DAT_180c7d808 = DAT_1809c0e30 + UVar11;
          if (DAT_1809c0e30 < 60000) {
            DAT_1809c0e30 = DAT_1809c0e30 * 2;
          }
          else {
            DAT_1809c0e30 = 60000;
          }
        }
        else {
          DAT_1809c0e30 = 1000;
        }
      }
      lVar14 = DAT_180c7d800;
      FUN_1805f68fc(&DAT_1809c0e40);
    }
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  puVar6 = DAT_1808da460;
  local_230 = DAT_1809c0e90;
  if ((DAT_1809c0e90 == DAT_1808da460) && (lVar12 = DAT_180c7d7f0, DAT_180c7d7f0 != 0))
  goto LAB_180418f4b;
  UVar11 = GetTickCount64();
  if ((local_230 == puVar6) && (UVar11 < DAT_180c7d7f8)) {
    lVar12 = 0;
    goto LAB_180418f4b;
  }
  local_230 = &DAT_1809c0ea0;
  iVar10 = FUN_1805f68d0(&DAT_1809c0ea0);
  if (iVar10 != 0) {
LAB_1804191fb:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1809c0eec == 0x7fffffff) {
    DAT_1809c0eec = 0x7ffffffe;
LAB_1804191f0:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_1809c0e90 == puVar6) {
    if ((DAT_180c7d7f0 == 0) && (DAT_180c7d7f8 <= UVar11)) goto LAB_180418eb8;
  }
  else {
    DAT_1809c0ef0 = 1000;
LAB_180418eb8:
    lVar12 = -1;
    do {
      local_210 = lVar12 + 1;
      lVar13 = lVar12 + 1;
      lVar12 = local_210;
    } while ("client.dll:48895424??48894C24??55535657415441564157488DAC24????????B8????0000"[lVar13]
             != '\0');
    local_218 = "client.dll:48895424??48894C24??55535657415441564157488DAC24????????B8????0000";
    local_228 = "patterns::trace_ray";
    local_220 = 0x13;
    DAT_180c7d7f0 = FUN_1800e5d20(&local_228,&local_218);
    DAT_1809c0e90 = puVar6;
    DAT_180c7d7f8 = 0xffffffffffffffff;
    if (DAT_180c7d7f0 == 0) {
      DAT_180c7d7f8 = DAT_1809c0ef0 + UVar11;
      uVar17 = DAT_1809c0ef0 * 2;
      if (59999 < DAT_1809c0ef0) {
        uVar17 = 60000;
      }
    }
    DAT_1809c0ef0 = uVar17;
  }
  lVar12 = DAT_180c7d7f0;
  FUN_1805f68fc(&DAT_1809c0ea0);
LAB_180418f4b:
  if ((((lVar14 != 0) && (lVar12 != 0)) && (DAT_180c64060 != 0)) &&
     (((param_6 != 0 && (sVar9 = thunk_FUN_180624430(param_5), sVar9 < 1)) && (0.0 < param_5)))) {
    local_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uVar18 = 0;
    lVar13 = FUN_18017ea70();
    *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
    local_250 = (undefined8 *)CONCAT44(local_250._4_4_,param_9);
    local_258 = (undefined8 *)CONCAT71(local_258._1_7_,4);
    cVar8 = FUN_18027afd0(lVar14,&local_b8,param_6,param_7);
    lVar14 = FUN_18017ea70();
    puVar16 = local_200;
    puVar15 = local_208;
    if (*(int *)(lVar14 + 4) != 0) {
      *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
    }
    lVar14 = DAT_180c64060;
    if (cVar8 != '\0') {
      local_1e0 = (undefined1  [16])0x0;
      local_1cf = 0;
      local_1cb = 0;
      local_1c9 = 0;
      local_1d0 = 1;
      local_1c8 = (undefined1  [16])0x0;
      uStack_1b8 = 0;
      uStack_1b0 = 0;
      uStack_1a8 = 0;
      uStack_1a0 = 0;
      uStack_198 = 0;
      auStack_190 = (undefined1  [16])0x0;
      local_180 = 0;
      uStack_178 = 0;
      uStack_174 = 0;
      uStack_16c = 0;
      uStack_164 = 0;
      uStack_15c = 0;
      uStack_154 = 0;
      local_118 = 0;
      local_110 = 0;
      local_10c = 0;
      uStack_104 = 0;
      uStack_fc = 0;
      uStack_f4 = 0;
      local_ec = 0;
      uStack_e4 = 0;
      uStack_dc = 0;
      uStack_d4 = 0;
      local_cc = 0;
      uStack_150 = *local_208;
      local_148 = *(undefined4 *)(local_208 + 1);
      local_144 = *local_200;
      local_13c = *(undefined4 *)(local_200 + 1);
      local_120 = 0x3f80000000000000;
      local_1f8 = uVar18;
      local_1f4 = uVar18;
      local_1f0 = uVar18;
      local_1ec = param_5;
      local_1e8 = uVar18;
      local_1e4 = uVar18;
      local_138 = uVar18;
      local_134 = uVar18;
      local_130 = uVar18;
      local_12c = local_144;
      local_124 = local_13c;
      lVar13 = FUN_18017ea70();
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
      local_240 = local_1c8;
      local_248 = &local_b8;
      local_250 = puVar16;
      local_258 = puVar15;
      FUN_18027b020(&local_238,lVar12,lVar14,&local_1f8);
      lVar14 = FUN_18017ea70();
      if (*(int *)(lVar14 + 4) != 0) {
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
      }
      if (local_237 != '\0') {
        puVar15 = (undefined8 *)local_1c8;
        lVar14 = 2;
        puVar16 = param_2;
        do {
          uVar3 = puVar15[1];
          uVar4 = puVar15[2];
          uVar5 = puVar15[3];
          *puVar16 = *puVar15;
          puVar16[1] = uVar3;
          puVar16[2] = uVar4;
          puVar16[3] = uVar5;
          uVar3 = puVar15[5];
          uVar4 = puVar15[6];
          uVar5 = puVar15[7];
          puVar16[4] = puVar15[4];
          puVar16[5] = uVar3;
          puVar16[6] = uVar4;
          puVar16[7] = uVar5;
          uVar3 = puVar15[9];
          uVar4 = puVar15[10];
          uVar5 = puVar15[0xb];
          puVar16[8] = puVar15[8];
          puVar16[9] = uVar3;
          puVar16[10] = uVar4;
          puVar16[0xb] = uVar5;
          uVar3 = puVar15[0xd];
          puVar16[0xc] = puVar15[0xc];
          puVar16[0xd] = uVar3;
          puVar1 = puVar16 + 0x10;
          uVar3 = puVar15[0xf];
          puVar16[0xe] = puVar15[0xe];
          puVar16[0xf] = uVar3;
          puVar15 = puVar15 + 0x10;
          lVar14 = lVar14 + -1;
          puVar16 = puVar1;
        } while (lVar14 != 0);
        *puVar1 = *puVar15;
        *(undefined1 *)(param_2 + 0x21) = 1;
      }
    }
  }
  *(undefined1 *)(param_2 + 0x21) = 0;
}



