// FUN_18025a010 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18025a010 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18025a010(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 auVar13 [64];
  undefined1 auStackY_2a8 [32];
  undefined1 local_258 [16];
  undefined1 local_248 [16];
  undefined4 local_238;
  undefined8 local_234;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined1 local_218 [16];
  undefined4 local_208;
  undefined2 local_204;
  undefined2 local_200;
  undefined1 local_1fe;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined1 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  char local_1b8 [16];
  undefined1 local_1a8 [16];
  undefined1 auStack_198 [16];
  undefined4 local_188;
  undefined8 uStack_184;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined1 local_168 [16];
  undefined4 uStack_158;
  undefined2 uStack_154;
  undefined2 uStack_150;
  undefined1 uStack_14e;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined1 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined1 local_108;
  undefined1 local_f8 [16];
  undefined8 *local_e8;
  char local_e0;
  char local_df;
  char local_de;
  undefined1 local_d8 [16];
  longlong local_c8;
  undefined1 local_c0 [16];
  longlong local_b0;
  undefined8 local_a8;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined1 uStack_8c;
  int local_68;
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStackY_2a8;
  if (((DAT_180cad648 != '\0') && (FUN_18025eb90(param_1,&local_e0,param_4), local_e0 != '\0')) &&
     ((local_df != '\0' || (local_de != '\0')))) {
    local_c0 = (undefined1  [16])0x0;
    local_b0 = 0;
    FUN_180270b60(local_d8);
    FUN_180257330(0x46afc800,local_c0,param_4);
    if (local_c0._0_8_ != local_c0._8_8_) {
      FUN_180273e70(&DAT_180cc93e8,&local_a8);
      lVar7 = DAT_180cc9338;
      auVar13 = ZEXT864(0);
      if (local_68 == 0) {
        if (DAT_180cc9338 != 0) {
          lVar6 = FUN_18017ea70();
          *(int *)(lVar6 + 4) = *(int *)(lVar6 + 4) + 1;
          FUN_18027b2b0(local_d8,lVar7);
          lVar7 = FUN_18017ea70();
          if (*(int *)(lVar7 + 4) != 0) {
            *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + -1;
          }
        }
        local_a8 = 0;
        auStack_a0[0] = 0;
        uStack_8c = 1;
        local_68 = 1;
      }
      uVar12 = auVar13._0_4_;
      local_f8 = (undefined1  [16])0x0;
      local_e8 = (undefined8 *)0x0;
      iVar11 = 0;
      if (0 < local_68) {
        puVar9 = &local_a8;
        do {
          local_d8 = (undefined1  [16])0x0;
          local_c8 = 0;
          auVar13 = ZEXT1664(auVar13._0_16_);
          FUN_18025f250(&DAT_180b8e5b8,local_d8);
          uVar3 = local_d8._8_8_;
          puVar10 = (undefined8 *)local_d8._0_8_;
          if (local_d8._0_8_ != local_d8._8_8_) {
            do {
              uVar2 = puVar9[1];
              uVar4 = puVar9[2];
              uVar5 = puVar9[3];
              puVar10[0xc] = *puVar9;
              puVar10[0xd] = uVar2;
              puVar10[0xe] = uVar4;
              puVar10[0xf] = uVar5;
              if ((undefined8 *)local_f8._8_8_ == local_e8) {
                auVar13 = ZEXT1664(auVar13._0_16_);
                FUN_180268c10(local_f8);
              }
              else {
                uVar2 = puVar10[1];
                uVar4 = puVar10[2];
                uVar5 = puVar10[3];
                *(undefined8 *)local_f8._8_8_ = *puVar10;
                *(undefined8 *)(local_f8._8_8_ + 8) = uVar2;
                *(undefined8 *)(local_f8._8_8_ + 0x10) = uVar4;
                *(undefined8 *)(local_f8._8_8_ + 0x18) = uVar5;
                uVar2 = puVar10[5];
                uVar4 = puVar10[6];
                uVar5 = puVar10[7];
                *(undefined8 *)(local_f8._8_8_ + 0x20) = puVar10[4];
                *(undefined8 *)(local_f8._8_8_ + 0x28) = uVar2;
                *(undefined8 *)(local_f8._8_8_ + 0x30) = uVar4;
                *(undefined8 *)(local_f8._8_8_ + 0x38) = uVar5;
                uVar2 = puVar10[9];
                uVar4 = puVar10[10];
                uVar5 = puVar10[0xb];
                *(undefined8 *)(local_f8._8_8_ + 0x40) = puVar10[8];
                *(undefined8 *)(local_f8._8_8_ + 0x48) = uVar2;
                *(undefined8 *)(local_f8._8_8_ + 0x50) = uVar4;
                *(undefined8 *)(local_f8._8_8_ + 0x58) = uVar5;
                uVar2 = puVar10[0xd];
                uVar4 = puVar10[0xe];
                uVar5 = puVar10[0xf];
                *(undefined8 *)(local_f8._8_8_ + 0x60) = puVar10[0xc];
                *(undefined8 *)(local_f8._8_8_ + 0x68) = uVar2;
                *(undefined8 *)(local_f8._8_8_ + 0x70) = uVar4;
                *(undefined8 *)(local_f8._8_8_ + 0x78) = uVar5;
                uVar2 = puVar10[0x11];
                *(undefined8 *)(local_f8._8_8_ + 0x80) = puVar10[0x10];
                *(undefined8 *)(local_f8._8_8_ + 0x88) = uVar2;
                *(undefined8 *)(local_f8._8_8_ + 0x90) = puVar10[0x12];
                local_f8._8_8_ = (undefined8 *)(local_f8._8_8_ + 0x98);
              }
              puVar10 = puVar10 + 0x13;
            } while (puVar10 != (undefined8 *)uVar3);
          }
          if ((undefined8 *)local_d8._0_8_ != (undefined8 *)0x0) {
            puVar10 = (undefined8 *)local_d8._0_8_;
            if ((0xfff < (ulonglong)(((local_c8 - local_d8._0_8_) / 0x98) * 0x98)) &&
               (puVar10 = *(undefined8 **)(local_d8._0_8_ + -8),
               0x1f < (ulonglong)(local_d8._0_8_ + (-8 - (longlong)puVar10)))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
            auVar13 = ZEXT1664(auVar13._0_16_);
            FUN_1804547d0(puVar10);
          }
          uVar12 = auVar13._0_4_;
          iVar11 = iVar11 + 1;
          puVar9 = puVar9 + 4;
        } while (iVar11 < local_68);
      }
      if (local_f8._0_8_ != local_f8._8_8_) {
        local_258 = ZEXT816(0);
        local_1a8 = local_258;
        local_248 = ZEXT816(0);
        auStack_198 = local_248;
        local_188 = uVar12;
        uStack_184 = 0;
        uStack_17c = 0;
        uStack_178 = 0xffffffffffffffff;
        uStack_170 = uVar12;
        uStack_16c = uVar12;
        local_168 = local_258;
        uStack_158 = uVar12;
        uStack_154 = 0;
        uStack_150 = 0;
        uStack_14e = 0;
        uStack_14c = 0;
        local_148 = uVar12;
        uStack_144 = uVar12;
        uStack_140 = uVar12;
        uStack_13c = 0;
        uStack_138 = uVar12;
        uStack_134 = 0;
        uStack_130 = uVar12;
        uStack_12c = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_118 = 0;
        local_110 = uVar12;
        local_10c = uVar12;
        local_108 = 0;
        local_234 = 0;
        local_22c = 0;
        local_228 = 0xffffffffffffffff;
        local_204 = 0;
        local_200 = 0;
        local_1fe = 0;
        local_1fc = 0;
        local_1f8 = uVar12;
        local_1f4 = uVar12;
        local_1f0 = uVar12;
        local_1ec = 0;
        local_1e8 = uVar12;
        local_1e4 = 0;
        local_1e0 = uVar12;
        local_1dc = 0;
        local_1d8 = 0;
        local_1d0 = 0;
        local_1c8 = 0;
        local_1c0 = uVar12;
        local_1bc = uVar12;
        local_1b8[0] = '\0';
        pfVar8 = (float *)(local_f8._0_8_ + 0x1c);
        local_238 = uVar12;
        local_220 = uVar12;
        local_21c = uVar12;
        local_218 = local_258;
        local_208 = uVar12;
        do {
          puVar9 = (undefined8 *)local_258;
          if (*(char *)((longlong)pfVar8 + 0x3e) == '\0') {
            puVar9 = (undefined8 *)local_1a8;
          }
          if ((*(char *)(puVar9 + 0x14) == '\0') || (*(float *)((longlong)puVar9 + 0x9c) < *pfVar8))
          {
            uVar3 = *(undefined8 *)(pfVar8 + -5);
            uVar2 = *(undefined8 *)(pfVar8 + -3);
            uVar4 = *(undefined8 *)(pfVar8 + -1);
            *puVar9 = *(undefined8 *)(pfVar8 + -7);
            puVar9[1] = uVar3;
            puVar9[2] = uVar2;
            puVar9[3] = uVar4;
            uVar3 = *(undefined8 *)(pfVar8 + 3);
            uVar2 = *(undefined8 *)(pfVar8 + 5);
            uVar4 = *(undefined8 *)(pfVar8 + 7);
            puVar9[4] = *(undefined8 *)(pfVar8 + 1);
            puVar9[5] = uVar3;
            puVar9[6] = uVar2;
            puVar9[7] = uVar4;
            uVar3 = *(undefined8 *)(pfVar8 + 0xb);
            uVar2 = *(undefined8 *)(pfVar8 + 0xd);
            uVar4 = *(undefined8 *)(pfVar8 + 0xf);
            puVar9[8] = *(undefined8 *)(pfVar8 + 9);
            puVar9[9] = uVar3;
            puVar9[10] = uVar2;
            puVar9[0xb] = uVar4;
            uVar3 = *(undefined8 *)(pfVar8 + 0x13);
            uVar2 = *(undefined8 *)(pfVar8 + 0x15);
            uVar4 = *(undefined8 *)(pfVar8 + 0x17);
            puVar9[0xc] = *(undefined8 *)(pfVar8 + 0x11);
            puVar9[0xd] = uVar3;
            puVar9[0xe] = uVar2;
            puVar9[0xf] = uVar4;
            uVar3 = *(undefined8 *)(pfVar8 + 0x1b);
            puVar9[0x10] = *(undefined8 *)(pfVar8 + 0x19);
            puVar9[0x11] = uVar3;
            puVar9[0x12] = *(undefined8 *)(pfVar8 + 0x1d);
            *(undefined4 *)(puVar9 + 0x13) = 0x3f800000;
            *(float *)((longlong)puVar9 + 0x9c) = *pfVar8;
            *(undefined1 *)(puVar9 + 0x14) = 1;
          }
          pfVar1 = pfVar8 + 0x1f;
          pfVar8 = pfVar8 + 0x26;
        } while (pfVar1 != (float *)local_f8._8_8_);
        puVar9 = (undefined8 *)local_258;
        if (local_1b8[0] == '\0') {
          puVar9 = (undefined8 *)local_1a8;
        }
        if (*(char *)(puVar9 + 0x14) != '\0') {
          DAT_180b8e658 = *(undefined1 *)((longlong)puVar9 + 0x5c);
          FUN_180261720(DAT_180b8e658,param_2,puVar9);
        }
      }
      if ((float *)local_f8._0_8_ != (float *)0x0) {
        pfVar8 = (float *)local_f8._0_8_;
        if ((0xfff < (ulonglong)((((longlong)local_e8 - local_f8._0_8_) / 0x98) * 0x98)) &&
           (pfVar8 = *(float **)(local_f8._0_8_ + -8),
           0x1f < (ulonglong)(local_f8._0_8_ + (-8 - (longlong)pfVar8)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        FUN_1804547d0(pfVar8);
        local_f8 = (undefined1  [16])0x0;
        local_e8 = (undefined8 *)0x0;
      }
    }
    if (local_c0._0_8_ != 0) {
      lVar7 = local_c0._0_8_;
      if ((0xfff < (ulonglong)(((local_b0 - local_c0._0_8_) / 0x6b60) * 0x6b60)) &&
         (lVar7 = *(longlong *)(local_c0._0_8_ + -8), 0x1f < (local_c0._0_8_ - lVar7) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar7);
    }
  }
}



