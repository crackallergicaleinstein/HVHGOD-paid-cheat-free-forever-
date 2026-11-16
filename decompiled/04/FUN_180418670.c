// FUN_180418670 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180418670 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180418670(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4,
                  undefined8 *param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  int iVar9;
  ULONGLONG UVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulonglong uVar16;
  undefined1 auStack_268 [32];
  undefined8 *local_248;
  undefined8 *local_240;
  undefined8 *local_238;
  undefined1 *local_230;
  undefined1 local_228;
  char local_227;
  undefined *local_220;
  char *local_218;
  longlong local_210;
  char *local_208;
  longlong local_200;
  undefined8 *local_1f8;
  undefined8 *local_1f0;
  undefined8 *local_1e8;
  undefined8 *local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1cc;
  undefined4 local_1c4;
  undefined1 local_1c0 [16];
  undefined1 local_1b0;
  undefined4 local_1af;
  undefined2 local_1ab;
  undefined1 local_1a9;
  undefined1 local_1a8 [16];
  undefined8 uStack_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined1 auStack_170 [16];
  undefined8 local_160;
  undefined4 uStack_158;
  undefined8 uStack_154;
  undefined8 uStack_14c;
  undefined8 uStack_144;
  undefined8 uStack_13c;
  undefined4 uStack_134;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined8 local_124;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined8 local_10c;
  undefined4 local_104;
  undefined8 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined8 local_ec;
  undefined8 uStack_e4;
  undefined8 uStack_dc;
  undefined8 uStack_d4;
  undefined8 local_cc;
  undefined8 uStack_c4;
  undefined8 uStack_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_268;
  local_1f8 = param_5;
  local_1f0 = param_6;
  local_1e8 = param_3;
  local_1e0 = param_4;
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  puVar7 = DAT_1809c1030;
  puVar6 = DAT_1808da460;
  uVar16 = 1000;
  if ((DAT_1809c1030 != DAT_1808da460) || (lVar13 = DAT_180c7d838, DAT_180c7d838 == 0)) {
    UVar10 = GetTickCount64();
    if ((puVar7 == puVar6) && (UVar10 < DAT_180c7d810)) {
      lVar13 = 0;
    }
    else {
      local_220 = &DAT_1809c0f00;
      iVar9 = FUN_1805f68d0(&DAT_1809c0f00);
      if (iVar9 != 0) goto LAB_180418c1b;
      if (DAT_1809c0f4c == 0x7fffffff) {
        DAT_1809c0f4c = 0x7ffffffe;
        goto LAB_180418c10;
      }
      if (DAT_1809c1030 == puVar6) {
        if ((DAT_180c7d838 == 0) && (DAT_180c7d810 <= UVar10)) goto LAB_18041879f;
      }
      else {
        DAT_1809c0f50 = 1000;
LAB_18041879f:
        lVar13 = -1;
        do {
          local_210 = lVar13 + 1;
          pcVar2 = "lient.dll:48895C24??48897424??574883EC??0FB641??33FF24" + lVar13;
          lVar13 = local_210;
        } while (*pcVar2 != '\0');
        local_218 = "client.dll:48895C24??48897424??574883EC??0FB641??33FF24";
        local_208 = "patterns::trace_filter_init";
        local_200 = 0x1b;
        DAT_180c7d838 = FUN_1800e5d20(&local_208,&local_218);
        DAT_1809c1030 = puVar6;
        DAT_180c7d810 = 0xffffffffffffffff;
        if (DAT_180c7d838 == 0) {
          DAT_180c7d810 = DAT_1809c0f50 + UVar10;
          if (DAT_1809c0f50 < 60000) {
            DAT_1809c0f50 = DAT_1809c0f50 * 2;
          }
          else {
            DAT_1809c0f50 = 60000;
          }
        }
        else {
          DAT_1809c0f50 = 1000;
        }
      }
      lVar13 = DAT_180c7d838;
      FUN_1805f68fc(&DAT_1809c0f00);
    }
  }
  if ((DAT_180cce330 & 1) == 0) {
    DAT_180cce330 = DAT_180cce330 | 1;
    atexit(FUN_180662340);
  }
  puVar6 = DAT_1808da460;
  local_220 = DAT_1809c0f58;
  if ((DAT_1809c0f58 == DAT_1808da460) && (lVar11 = DAT_180c7d818, DAT_180c7d818 != 0))
  goto LAB_18041899b;
  UVar10 = GetTickCount64();
  if ((local_220 == puVar6) && (UVar10 < DAT_180c7d820)) {
    lVar11 = 0;
    goto LAB_18041899b;
  }
  local_220 = &DAT_1809c0f70;
  iVar9 = FUN_1805f68d0(&DAT_1809c0f70);
  if (iVar9 != 0) {
LAB_180418c1b:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_1809c0fbc == 0x7fffffff) {
    DAT_1809c0fbc = 0x7ffffffe;
LAB_180418c10:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (DAT_1809c0f58 == puVar6) {
    if ((DAT_180c7d818 == 0) && (DAT_180c7d820 <= UVar10)) goto LAB_180418908;
  }
  else {
    DAT_1809c0f60 = 1000;
LAB_180418908:
    lVar11 = -1;
    do {
      local_200 = lVar11 + 1;
      lVar12 = lVar11 + 1;
      lVar11 = local_200;
    } while ("client.dll:48895424??48894C24??55535657415441564157488DAC24????????B8????0000"[lVar12]
             != '\0');
    local_208 = "client.dll:48895424??48894C24??55535657415441564157488DAC24????????B8????0000";
    local_218 = "patterns::trace_ray";
    local_210 = 0x13;
    DAT_180c7d818 = FUN_1800e5d20(&local_218,&local_208);
    DAT_1809c0f58 = puVar6;
    DAT_180c7d820 = 0xffffffffffffffff;
    if (DAT_180c7d818 == 0) {
      DAT_180c7d820 = DAT_1809c0f60 + UVar10;
      uVar16 = DAT_1809c0f60 * 2;
      if (59999 < DAT_1809c0f60) {
        uVar16 = 60000;
      }
    }
    DAT_1809c0f60 = uVar16;
  }
  lVar11 = DAT_180c7d818;
  FUN_1805f68fc(&DAT_1809c0f70);
LAB_18041899b:
  if (((lVar13 != 0) && (lVar11 != 0)) && (DAT_180c64060 != 0)) {
    local_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    lVar12 = FUN_18017ea70();
    *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
    local_240 = (undefined8 *)CONCAT44(local_240._4_4_,7);
    local_248 = (undefined8 *)CONCAT71(local_248._1_7_,4);
    cVar8 = FUN_18027afd0(lVar13,&local_98,param_7,param_8);
    lVar13 = FUN_18017ea70();
    puVar15 = local_1e0;
    puVar14 = local_1e8;
    if (*(int *)(lVar13 + 4) != 0) {
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
    }
    lVar13 = DAT_180c64060;
    if (cVar8 != '\0') {
      local_1c0 = (undefined1  [16])0x0;
      local_1af = 0;
      local_1ab = 0;
      local_1a9 = 0;
      local_1d8 = *local_1f8;
      local_1d0 = *(undefined4 *)(local_1f8 + 1);
      local_1cc = *local_1f0;
      local_1c4 = *(undefined4 *)(local_1f0 + 1);
      local_1b0 = 2;
      local_1a8 = (undefined1  [16])0x0;
      uStack_198 = 0;
      uStack_190 = 0;
      uStack_18c = 0;
      uStack_188 = 0;
      uStack_184 = 0;
      uStack_180 = 0;
      uStack_17c = 0;
      uStack_178 = 0;
      uStack_174 = 0;
      auStack_170 = (undefined1  [16])0x0;
      local_160 = 0;
      uStack_158 = 0;
      uStack_154 = 0;
      uStack_14c = 0;
      uStack_144 = 0;
      uStack_13c = 0;
      uStack_134 = 0;
      local_118 = 0;
      local_114 = 0;
      local_110 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_ec = 0;
      uStack_e4 = 0;
      uStack_dc = 0;
      uStack_d4 = 0;
      local_cc = 0;
      uStack_c4 = 0;
      uStack_bc = 0;
      uStack_b4 = 0;
      local_ac = 0;
      uStack_130 = *local_1e8;
      local_128 = *(undefined4 *)(local_1e8 + 1);
      local_124 = *local_1e0;
      local_11c = *(undefined4 *)(local_1e0 + 1);
      local_100 = 0x3f80000000000000;
      local_10c = local_124;
      local_104 = local_11c;
      lVar12 = FUN_18017ea70();
      *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
      local_230 = local_1a8;
      local_238 = &local_98;
      local_240 = puVar15;
      local_248 = puVar14;
      FUN_18027b020(&local_228,lVar11,lVar13,&local_1d8);
      lVar13 = FUN_18017ea70();
      if (*(int *)(lVar13 + 4) != 0) {
        *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
      }
      if (local_227 != '\0') {
        puVar14 = (undefined8 *)local_1a8;
        lVar13 = 2;
        puVar15 = param_2;
        do {
          uVar3 = puVar14[1];
          uVar4 = puVar14[2];
          uVar5 = puVar14[3];
          *puVar15 = *puVar14;
          puVar15[1] = uVar3;
          puVar15[2] = uVar4;
          puVar15[3] = uVar5;
          uVar3 = puVar14[5];
          uVar4 = puVar14[6];
          uVar5 = puVar14[7];
          puVar15[4] = puVar14[4];
          puVar15[5] = uVar3;
          puVar15[6] = uVar4;
          puVar15[7] = uVar5;
          uVar3 = puVar14[9];
          uVar4 = puVar14[10];
          uVar5 = puVar14[0xb];
          puVar15[8] = puVar14[8];
          puVar15[9] = uVar3;
          puVar15[10] = uVar4;
          puVar15[0xb] = uVar5;
          uVar3 = puVar14[0xd];
          puVar15[0xc] = puVar14[0xc];
          puVar15[0xd] = uVar3;
          puVar1 = puVar15 + 0x10;
          uVar3 = puVar14[0xf];
          puVar15[0xe] = puVar14[0xe];
          puVar15[0xf] = uVar3;
          puVar14 = puVar14 + 0x10;
          lVar13 = lVar13 + -1;
          puVar15 = puVar1;
        } while (lVar13 != 0);
        *puVar1 = *puVar14;
        *(undefined1 *)(param_2 + 0x21) = 1;
      }
    }
  }
  *(undefined1 *)(param_2 + 0x21) = 0;
}



