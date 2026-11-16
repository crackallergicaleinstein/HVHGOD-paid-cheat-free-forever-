// FUN_180259ae0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180259ae0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180259ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 (*pauVar9) [16];
  ulonglong uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined4 uVar14;
  undefined1 auVar15 [64];
  undefined1 auStackY_1e8 [32];
  undefined8 local_1b8;
  undefined1 local_1a8 [16];
  undefined1 auStack_198 [16];
  uint local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined1 local_168 [16];
  uint6 uStack_158;
  undefined2 uStack_152;
  ulonglong uStack_150;
  undefined8 local_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  uint5 uStack_130;
  undefined3 uStack_12b;
  undefined8 local_128;
  ulonglong uStack_120;
  undefined8 local_118;
  uint local_110;
  uint local_10c;
  char local_108;
  undefined1 local_f8 [16];
  undefined8 *local_e8;
  undefined1 local_e0 [16];
  longlong local_d0;
  undefined1 local_c8 [16];
  longlong local_b8;
  undefined8 local_a8;
  undefined4 auStack_a0 [2];
  undefined8 uStack_98;
  undefined1 uStack_8c;
  int local_68;
  ulonglong local_50;
  
  local_50 = DAT_1808d5f00 ^ (ulonglong)auStackY_1e8;
  if (DAT_180cad4a0 != '\0') {
    local_c8 = (undefined1  [16])0x0;
    local_b8 = 0;
    puVar6 = (undefined8 *)FUN_180270b60(local_e0);
    auVar15 = ZEXT864(0);
    FUN_180257330(*puVar6,local_c8,param_4);
    if (local_c8._0_8_ != local_c8._8_8_) {
      puVar6 = &DAT_180cc93e8;
      FUN_180273e70(&DAT_180cc93e8,&local_a8);
      lVar8 = DAT_180cc9338;
      if (local_68 == 0) {
        uVar14 = auVar15._0_4_;
        local_1b8 = CONCAT44(uVar14,uVar14);
        if (DAT_180cc9338 != 0) {
          lVar7 = FUN_18017ea70();
          *(int *)(lVar7 + 4) = *(int *)(lVar7 + 4) + 1;
          FUN_18027b2b0(local_e0,lVar8);
          lVar8 = FUN_18017ea70();
          uVar1 = *(uint *)(lVar8 + 4);
          puVar6 = (undefined8 *)(ulonglong)uVar1;
          if (uVar1 != 0) {
            puVar6 = (undefined8 *)(ulonglong)(uVar1 - 1);
            *(uint *)(lVar8 + 4) = uVar1 - 1;
          }
        }
        local_a8 = local_1b8;
        uStack_8c = 1;
        local_68 = 1;
        auStack_a0[0] = uVar14;
      }
      local_f8 = (undefined1  [16])0x0;
      local_e8 = (undefined8 *)0x0;
      iVar13 = 0;
      if (0 < local_68) {
        puVar12 = &local_a8;
        do {
          local_e0 = (undefined1  [16])0x0;
          local_d0 = 0;
          auVar15 = ZEXT1664(auVar15._0_16_);
          FUN_18025e1d0();
          uVar5 = local_e0._8_8_;
          puVar11 = (undefined8 *)local_e0._0_8_;
          if (local_e0._0_8_ != local_e0._8_8_) {
            do {
              uVar2 = puVar12[1];
              uVar3 = puVar12[2];
              uVar4 = puVar12[3];
              puVar11[0xc] = *puVar12;
              puVar11[0xd] = uVar2;
              puVar11[0xe] = uVar3;
              puVar11[0xf] = uVar4;
              if ((undefined8 *)local_f8._8_8_ == local_e8) {
                puVar6 = (undefined8 *)local_f8;
                auVar15 = ZEXT1664(auVar15._0_16_);
                FUN_180268c10();
              }
              else {
                uVar2 = puVar11[1];
                uVar3 = puVar11[2];
                uVar4 = puVar11[3];
                *(undefined8 *)local_f8._8_8_ = *puVar11;
                *(undefined8 *)(local_f8._8_8_ + 8) = uVar2;
                *(undefined8 *)(local_f8._8_8_ + 0x10) = uVar3;
                *(undefined8 *)(local_f8._8_8_ + 0x18) = uVar4;
                uVar2 = puVar11[5];
                uVar3 = puVar11[6];
                uVar4 = puVar11[7];
                *(undefined8 *)(local_f8._8_8_ + 0x20) = puVar11[4];
                *(undefined8 *)(local_f8._8_8_ + 0x28) = uVar2;
                *(undefined8 *)(local_f8._8_8_ + 0x30) = uVar3;
                *(undefined8 *)(local_f8._8_8_ + 0x38) = uVar4;
                uVar2 = puVar11[9];
                uVar3 = puVar11[10];
                uVar4 = puVar11[0xb];
                *(undefined8 *)(local_f8._8_8_ + 0x40) = puVar11[8];
                *(undefined8 *)(local_f8._8_8_ + 0x48) = uVar2;
                *(undefined8 *)(local_f8._8_8_ + 0x50) = uVar3;
                *(undefined8 *)(local_f8._8_8_ + 0x58) = uVar4;
                uVar2 = puVar11[0xd];
                uVar3 = puVar11[0xe];
                uVar4 = puVar11[0xf];
                *(undefined8 *)(local_f8._8_8_ + 0x60) = puVar11[0xc];
                *(undefined8 *)(local_f8._8_8_ + 0x68) = uVar2;
                *(undefined8 *)(local_f8._8_8_ + 0x70) = uVar3;
                *(undefined8 *)(local_f8._8_8_ + 0x78) = uVar4;
                uVar2 = puVar11[0x11];
                *(undefined8 *)(local_f8._8_8_ + 0x80) = puVar11[0x10];
                *(undefined8 *)(local_f8._8_8_ + 0x88) = uVar2;
                *(undefined8 *)(local_f8._8_8_ + 0x90) = puVar11[0x12];
                local_f8._8_8_ = (undefined8 *)(local_f8._8_8_ + 0x98);
              }
              puVar11 = puVar11 + 0x13;
            } while (puVar11 != (undefined8 *)uVar5);
          }
          if ((undefined8 *)local_e0._0_8_ != (undefined8 *)0x0) {
            puVar6 = (undefined8 *)local_e0._0_8_;
            if ((0xfff < (ulonglong)(((local_d0 - local_e0._0_8_) / 0x98) * 0x98)) &&
               (puVar6 = *(undefined8 **)(local_e0._0_8_ + -8),
               0x1f < (ulonglong)(local_e0._0_8_ + (-8 - (longlong)puVar6)))) {
                    /* WARNING: Subroutine does not return */
              _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
            }
            auVar15 = ZEXT1664(auVar15._0_16_);
            FUN_1804547d0();
          }
          iVar13 = iVar13 + 1;
          puVar12 = puVar12 + 4;
        } while (iVar13 < local_68);
      }
      if (local_f8._0_8_ != local_f8._8_8_) {
        local_1a8 = ZEXT816(0);
        auStack_198 = ZEXT816(0);
        local_188 = auVar15._0_4_;
        uStack_184 = 0;
        uStack_180 = 0;
        uStack_17c = 0;
        uStack_178 = 0xffffffffffffffff;
        uStack_170 = CONCAT44(local_188,local_188);
        uStack_158 = (uint6)local_188;
        uStack_150 = (uStack_150 >> 0x18 & 0xff) << 0x18;
        local_148 = CONCAT44(local_188,local_188);
        uStack_140 = (ulonglong)local_188;
        uStack_138 = (ulonglong)local_188;
        uStack_130 = (uint5)local_188;
        local_128 = 0;
        uStack_120 = uStack_120 & 0xffffffff00000000;
        local_118 = 0;
        uVar10 = (ulonglong)puVar6 & 0xffffffffffffff00;
        pauVar9 = (undefined1 (*) [16])local_f8._0_8_;
        local_168 = local_1a8;
        local_110 = local_188;
        local_10c = local_188;
        do {
          if (((char)uVar10 == '\0') || (auVar15._0_4_ < *(float *)(pauVar9[1] + 0xc))) {
            local_1a8 = *pauVar9;
            auStack_198 = pauVar9[1];
            uStack_178 = *(undefined8 *)pauVar9[3];
            uStack_170 = *(undefined8 *)(pauVar9[3] + 8);
            local_188 = (uint)*(undefined8 *)pauVar9[2];
            uStack_184 = (undefined4)((ulonglong)*(undefined8 *)pauVar9[2] >> 0x20);
            uStack_180 = (undefined4)*(undefined8 *)(pauVar9[2] + 8);
            uStack_17c = (undefined4)((ulonglong)*(undefined8 *)(pauVar9[2] + 8) >> 0x20);
            local_168 = pauVar9[4];
            _uStack_158 = *(undefined8 *)pauVar9[5];
            uStack_150 = *(ulonglong *)(pauVar9[5] + 8);
            local_148 = *(undefined8 *)pauVar9[6];
            uStack_140 = *(ulonglong *)(pauVar9[6] + 8);
            uStack_138 = *(ulonglong *)pauVar9[7];
            _uStack_130 = *(undefined8 *)(pauVar9[7] + 8);
            local_128 = *(undefined8 *)pauVar9[8];
            uStack_120 = *(ulonglong *)(pauVar9[8] + 8);
            local_118 = *(undefined8 *)pauVar9[9];
            local_110 = 0x3f800000;
            local_10c = *(uint *)(pauVar9[1] + 0xc);
            auVar15 = ZEXT464(local_10c);
            uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
          }
          pauVar9 = (undefined1 (*) [16])(pauVar9[9] + 8);
        } while (pauVar9 != (undefined1 (*) [16])local_f8._8_8_);
        local_108 = (char)uVar10;
        if (local_108 != '\0') {
          DAT_180b8e659 = 1;
          FUN_180261720(uVar10,param_2,local_1a8);
        }
      }
      if ((undefined1 (*) [16])local_f8._0_8_ != (undefined1 (*) [16])0x0) {
        pauVar9 = (undefined1 (*) [16])local_f8._0_8_;
        if ((0xfff < (ulonglong)((((longlong)local_e8 - local_f8._0_8_) / 0x98) * 0x98)) &&
           (pauVar9 = *(undefined1 (**) [16])(*(undefined1 (*) [16])(local_f8._0_8_ + -0x10) + 8),
           (undefined1 *)0x1f < (undefined1 *)(local_f8._0_8_ + (-8 - (longlong)pauVar9)))) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        FUN_1804547d0(pauVar9);
        local_f8 = (undefined1  [16])0x0;
        local_e8 = (undefined8 *)0x0;
      }
    }
    if (local_c8._0_8_ != 0) {
      lVar8 = local_c8._0_8_;
      if ((0xfff < (ulonglong)(((local_b8 - local_c8._0_8_) / 0x6b60) * 0x6b60)) &&
         (lVar8 = *(longlong *)(local_c8._0_8_ + -8), 0x1f < (local_c8._0_8_ - lVar8) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar8);
    }
  }
}



