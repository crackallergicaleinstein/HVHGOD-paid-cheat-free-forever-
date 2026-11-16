// FUN_1802f35d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f35d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802f35d0(undefined8 param_1,undefined8 param_2,longlong *param_3,float param_4,
                  char param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  float *pfVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  float *pfVar7;
  longlong lVar8;
  longlong lVar9;
  float *pfVar10;
  char *pcVar11;
  undefined1 *puVar12;
  undefined4 *puVar13;
  char *pcVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined8 uVar17;
  float fVar18;
  undefined1 auVar19 [64];
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auStackY_1a8 [32];
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  float local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined1 local_118 [32];
  float *local_f8;
  float *pfStack_f0;
  float *local_e8;
  undefined1 local_e0 [16];
  float *local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined1 local_b0 [16];
  longlong local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStackY_1a8;
  if ((*(char *)((longlong)param_3 + 0x4c) != '\0') &&
     (lVar9 = (param_3[2] - param_3[1]) / 6 + (param_3[2] - param_3[1] >> 0x3f),
     uVar15 = (lVar9 >> 1) - (lVar9 >> 0x3f), 1 < uVar15)) {
    lVar9 = *param_3;
    lVar16 = 0;
    if (lVar9 == 0xbbe43941) {
      lVar9 = 0;
    }
    else if (lVar9 == 0xc243cce2) {
      lVar9 = 1;
    }
    else if (lVar9 == 0x937fcfa3) {
      lVar9 = 2;
    }
    else if ((lVar9 == 0x1d8fded0) || (lVar9 == 0xf7b68f78)) {
      lVar9 = 3;
    }
    else {
      if (lVar9 != 0x488e8052) {
      }
      lVar9 = 4;
    }
    if (DAT_180b0bd20 == 0) {
      pcVar11 = &DAT_180b0bbd0;
      local_150 = (float *)&DAT_180b0bd18;
      pcVar14 = &DAT_180b0bca0;
    }
    else {
      local_150 = (float *)(&DAT_180b0b688 + lVar9 * 0x54);
      pcVar14 = &DAT_180b0b610 + lVar9 * 0x150;
      pcVar11 = &DAT_180b0b540 + lVar9 * 0x150;
      if (pcVar11 == (char *)0x0) {
      }
    }
    if (*pcVar11 != '\0') {
      local_b0 = (undefined1  [16])0x0;
      local_a0 = 0;
      local_148 = param_2;
      FUN_1802f2080(0,param_3,local_b0);
      if (param_5 == '\0') {
        lVar9 = 0x140;
        lVar8 = 0x138;
      }
      else {
        lVar9 = 0x144;
        lVar8 = 0x13c;
      }
      if (local_b0._0_8_ == local_b0._8_8_) {
        lVar9 = lVar8;
      }
      uVar1 = *(uint *)(pcVar11 + lVar9);
      local_c8 = (undefined1  [16])0x0;
      local_b8 = 0;
      local_f8 = (float *)0x0;
      pfStack_f0 = (float *)0x0;
      local_e8 = (float *)0x0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar15;
      uVar5 = SUB168(ZEXT816(2) * auVar2,0);
      if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
        uVar5 = 0xffffffffffffffff;
      }
      local_164 = uVar1;
      if (uVar5 != 0) {
        if (0x3fffffffffffffff < uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_1801136f0();
        }
        uVar6 = FUN_18015bca0(uVar5 * 4);
        FUN_18063aed0(uVar6,local_c8._0_8_,local_c8._8_8_ - local_c8._0_8_);
        FUN_180158f30(local_c8,uVar6,0);
      }
      uVar5 = 0;
      FUN_1802f3f50(&local_f8,uVar15);
      fVar21 = 57005.0;
      fVar22 = 0.6;
      fVar20 = 1.0;
      fVar18 = NAN;
      do {
        lVar9 = param_3[1];
        if (DAT_180b8e2b0 == '\0') {
          local_158 = (undefined1 *)CONCAT44(fVar21,fVar21);
LAB_1802f38bf:
          local_15c = fVar18;
          FUN_1802aa650(local_c8,&local_15c);
          local_15c = fVar18;
          FUN_1802aa650(local_c8,&local_15c);
          local_160 = 0;
          if (pfStack_f0 == local_e8) {
            puVar13 = &local_160;
LAB_1802f39dd:
            FUN_1802f4520(&local_f8,pfStack_f0,puVar13);
          }
          else {
            *pfStack_f0 = 0.0;
            pfStack_f0 = pfStack_f0 + 1;
          }
        }
        else {
          iVar4 = FUN_1805f68d0(&DAT_180b8e260);
          if (iVar4 != 0) goto LAB_1802f3d41;
          if (DAT_180b8e2ac == 0x7fffffff) goto LAB_1802f3d2c;
          local_138 = _DAT_180b8e220;
          uStack_130 = uRam0000000180b8e228;
          uStack_128 = uRam0000000180b8e230;
          uStack_120 = uRam0000000180b8e238;
          local_118._8_8_ = uRam0000000180b8e248;
          local_118._0_8_ = _DAT_180b8e240;
          local_118._16_8_ = uRam0000000180b8e250;
          local_118._24_8_ = uRam0000000180b8e258;
          uVar6 = FUN_1805f68fc(&DAT_180b8e260);
          FUN_180419d90(uVar6,&local_158,lVar9 + lVar16);
          if (((float)local_158 == fVar21) || (local_158._4_4_ == fVar21)) goto LAB_1802f38bf;
          FUN_1802aa650(local_c8,&local_158);
          FUN_1802aa650(local_c8,(longlong)&local_158 + 4);
          local_168 = (float)CONCAT13((char)(int)((fVar20 - ((float)uVar5 / (float)(uVar15 - 1)) *
                                                            fVar22) * param_4 *
                                                 (float)(local_164 >> 0x18)),
                                      CONCAT12(local_164._2_1_,CONCAT11(local_164._1_1_,(char)uVar1)
                                              ));
          if (pfStack_f0 == local_e8) {
            puVar13 = &local_168;
            goto LAB_1802f39dd;
          }
          *pfStack_f0 = local_168;
          pfStack_f0 = pfStack_f0 + 1;
        }
        uVar5 = uVar5 + 1;
        lVar16 = lVar16 + 0xc;
      } while (uVar5 < uVar15);
      local_158 = local_c8;
      auVar23 = ZEXT464(0x40200000);
      if ((*pcVar14 != '\0') && (fVar18 = 0.0, 0.0 < param_4)) {
        local_e0 = (undefined1  [16])0x0;
        local_d0 = (float *)0x0;
        FUN_1802f3f50(local_e0,(longlong)pfStack_f0 - (longlong)local_f8 >> 2);
        pfVar3 = pfStack_f0;
        local_15c = fVar18;
        pfVar10 = &local_15c;
        if (fVar18 <= *local_150) {
          pfVar10 = local_150;
        }
        pfVar7 = (float *)&local_168;
        if (*local_150 <= fVar20) {
          pfVar7 = pfVar10;
        }
        fVar18 = *pfVar7;
        local_168 = fVar20;
        if (local_f8 != pfStack_f0) {
          pfVar10 = (float *)local_e0._8_8_;
          puVar12 = (undefined1 *)((longlong)local_f8 + 2);
          do {
            local_168 = (float)CONCAT13((char)(int)((float)(byte)puVar12[1] * fVar18),
                                        CONCAT12(*puVar12,*(undefined2 *)(puVar12 + -2)));
            if (pfVar10 == local_d0) {
              FUN_1802f4520(local_e0,(float)(byte)puVar12[1] * fVar18,&local_168);
              pfVar10 = (float *)local_e0._8_8_;
            }
            else {
              *pfVar10 = local_168;
              pfVar10 = (float *)(local_e0._8_8_ + 4);
              local_e0._8_8_ = pfVar10;
            }
            pfVar7 = (float *)(puVar12 + 2);
            puVar12 = puVar12 + 4;
          } while (pfVar7 != pfVar3);
        }
        FUN_1802f3d70(&local_158,&DAT_180bbb038,local_e0,auVar23._0_8_);
        FUN_180159650(local_e0);
      }
      uVar6 = local_148;
      FUN_1802f3d70(&local_158,local_148,&local_f8,0x3fc00000);
      if ((-1 < (int)param_3[9]) && (DAT_180b8e2b0 != '\0')) {
        iVar4 = FUN_1805f68d0(&DAT_180b8e260);
        if (iVar4 != 0) {
LAB_1802f3d41:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_180b8e2ac == 0x7fffffff) {
LAB_1802f3d2c:
          DAT_180b8e2ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        local_138 = _DAT_180b8e220;
        uStack_130 = uRam0000000180b8e228;
        uStack_128 = uRam0000000180b8e230;
        uStack_120 = uRam0000000180b8e238;
        local_118._8_8_ = uRam0000000180b8e248;
        local_118._0_8_ = _DAT_180b8e240;
        local_118._16_8_ = uRam0000000180b8e250;
        local_118._24_8_ = uRam0000000180b8e258;
        auVar24 = ZEXT1664(auVar23._0_16_);
        uVar17 = FUN_1805f68fc(&DAT_180b8e260);
        FUN_180419d90(uVar17,&local_150,param_3 + 7);
        auVar23 = ZEXT464((uint)(float)local_150);
        if ((float)local_150 != fVar21) {
          auVar19 = ZEXT464((uint)local_150._4_4_);
          if (local_150._4_4_ != fVar21) {
            local_168 = (float)((int)(param_4 * 200.0) << 0x18);
            FUN_180432510(uVar6,(ulonglong)local_150 & 0xffffffff,local_150._4_4_,0x40600000);
            local_168 = (float)CONCAT13((char)(int)((float)(local_164 >> 0x18) * param_4),
                                        CONCAT12(local_164._2_1_,
                                                 CONCAT11(local_164._1_1_,(char)uVar1)));
            FUN_180432510(uVar6,auVar23._0_8_,auVar19._0_8_,auVar24._0_8_);
          }
        }
      }
      FUN_180159650(&local_f8);
      FUN_180159650(local_c8);
      if (local_b0._0_8_ != 0) {
        lVar9 = local_b0._0_8_;
        if ((0xfff < (ulonglong)(((local_a0 - local_b0._0_8_) / 0x14) * 0x14)) &&
           (lVar9 = *(longlong *)(local_b0._0_8_ + -8), 0x1f < (local_b0._0_8_ - lVar9) - 8U)) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        FUN_1804547d0(lVar9);
      }
    }
  }
}



