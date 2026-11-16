// FUN_1802f2b10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802f2b10 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802f2b10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  byte bVar6;
  int iVar7;
  ULONGLONG UVar8;
  longlong lVar9;
  longlong lVar10;
  char *pcVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  float *pfVar14;
  float *pfVar15;
  ulonglong uVar16;
  char *pcVar17;
  ulonglong uVar18;
  undefined1 *puVar19;
  undefined4 *puVar20;
  float fVar21;
  undefined8 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 auVar28 [64];
  float fVar29;
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  float fVar35;
  float fVar36;
  undefined1 auStackY_208 [32];
  undefined4 local_1c8;
  undefined8 local_1c0;
  float local_1b8;
  undefined4 local_1b0;
  float local_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined8 local_198;
  undefined1 local_190 [8];
  float *pfStack_188;
  float *local_180;
  undefined1 local_178 [16];
  float *local_168;
  undefined1 local_160 [16];
  undefined8 local_150;
  undefined1 local_148 [16];
  longlong local_138;
  longlong local_128;
  longlong local_120;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined8 local_f8;
  float local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  char local_dc;
  ulonglong local_d8;
  
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStackY_208;
  if (DAT_180b8f989 == '\0') {
  }
  local_198 = param_2;
  iVar7 = FUN_1805f68d0(&DAT_180b8e2e0);
  cVar3 = DAT_180b8e2dc;
  if (iVar7 != 0) {
LAB_1802f35a8:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b8e32c == 0x7fffffff) {
    DAT_180b8e32c = 0x7ffffffe;
LAB_1802f35bd:
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  FUN_1805f68fc(&DAT_180b8e2e0);
  if (cVar3 == '\0') {
  }
  iVar7 = DAT_180c6ec50;
  if (DAT_180c6ec50 == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180c6ec58) {
      iVar7 = 0;
    }
    else {
      local_1c0 = (float *)&DAT_1808fd940;
      iVar7 = FUN_1805f68d0(&DAT_1808fd940);
      if (iVar7 != 0) goto LAB_1802f35a8;
      if (DAT_1808fd98c == 0x7fffffff) {
        DAT_1808fd98c = 0x7ffffffe;
        goto LAB_1802f35bd;
      }
      if ((DAT_180c6ec50 == 0) && (DAT_180c6ec58 <= UVar8)) {
        DAT_180c6ec50 = FUN_1804174b0("C_BasePlayerPawn",0x51b23a93);
        if (DAT_180c6ec50 == 0) {
          DAT_180c6ec58 = UVar8 + 1000;
        }
        else {
          DAT_180c6ec58 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c6ec50;
      FUN_1805f68fc(&DAT_1808fd940);
    }
  }
  lVar9 = *(longlong *)((longlong)iVar7 + *(longlong *)(param_3 + 8));
  if (lVar9 == 0) {
  }
  iVar7 = DAT_180c6ec60;
  if (DAT_180c6ec60 == 0) {
    UVar8 = GetTickCount64();
    if (UVar8 < DAT_180c6ec48) {
      iVar7 = 0;
    }
    else {
      local_1c0 = (float *)&DAT_1808fd8f0;
      iVar7 = FUN_1805f68d0(&DAT_1808fd8f0);
      if (iVar7 != 0) goto LAB_1802f35a8;
      if (DAT_1808fd93c == 0x7fffffff) {
        DAT_1808fd93c = 0x7ffffffe;
        goto LAB_1802f35bd;
      }
      if ((DAT_180c6ec60 == 0) && (DAT_180c6ec48 <= UVar8)) {
        DAT_180c6ec60 = FUN_1804174b0("CPlayer_WeaponServices",0x940131c5);
        if (DAT_180c6ec60 == 0) {
          DAT_180c6ec48 = UVar8 + 1000;
        }
        else {
          DAT_180c6ec48 = 0xffffffffffffffff;
        }
      }
      iVar7 = DAT_180c6ec60;
      FUN_1805f68fc(&DAT_1808fd8f0);
    }
  }
  iVar7 = *(int *)(iVar7 + lVar9);
  if (iVar7 == 0) {
  }
  if (iVar7 == -1) {
  }
  lVar9 = FUN_1803d4150();
  if (lVar9 == 0) {
  }
  uVar33 = 0;
  uVar34 = 0;
  uVar32 = 0;
  fVar27 = 0.0;
  local_1a8 = (undefined1 *)0x0;
  local_1a0 = 0;
  local_1c0 = (float *)0x0;
  local_1b8 = 0.0;
  FUN_1802ef110(&local_1c0,*(undefined8 *)(param_3 + 8),lVar9,&local_1a8);
  auVar2 = _local_190;
  lVar9 = 1;
  if (DAT_180b8f948 == 0xbbe43941) {
    lVar10 = 0;
  }
  else if (DAT_180b8f948 == 0xc243cce2) {
    lVar10 = 1;
  }
  else if (DAT_180b8f948 == 0x937fcfa3) {
    lVar10 = 2;
  }
  else if ((DAT_180b8f948 == 0x1d8fded0) || (DAT_180b8f948 == 0xf7b68f78)) {
    lVar10 = 3;
  }
  else {
    if (DAT_180b8f948 != 0x488e8052) {
    }
    lVar10 = 4;
  }
  pcVar17 = &DAT_180b0bbd0;
  if (DAT_180b0bd20 == 0) {
    pcVar11 = &DAT_180b0bbd0;
  }
  else {
    pcVar11 = &DAT_180b0b540 + lVar10 * 0x150;
    if (pcVar11 == (char *)0x0) {
    }
  }
  if (*pcVar11 == '\0') {
  }
  fVar36 = 1.0;
  if ((pcVar11[0x68] != '\0') &&
     (1.0 <= DAT_180b8e118._4_4_ * DAT_180b8e118._4_4_ + (float)DAT_180b8e118 * (float)DAT_180b8e118
             + DAT_180b8e120 * DAT_180b8e120)) {
    fVar23 = 1.25;
    fVar24 = local_1b8 - DAT_180b8e120 * 1.25;
    fVar26 = local_1c0._4_4_ - DAT_180b8e118._4_4_ * 1.25;
    fVar29 = (float)local_1c0 - (float)DAT_180b8e118 * 1.25;
    local_190._4_4_ = fVar26;
    local_190._0_4_ = fVar29;
    pfStack_188._4_4_ = auVar2._12_4_;
    pfStack_188._0_4_ = fVar24;
    fVar25 = DAT_180b8e118._4_4_;
    fVar21 = (float)DAT_180b8e118;
    fVar35 = DAT_180b8e120;
    FUN_180450e30(local_190);
    fVar25 = fVar25 * fVar23 * (float)local_190._4_4_ + fVar21 * fVar23 * (float)local_190._0_4_ +
             fVar35 * fVar23 * pfStack_188._0_4_;
    local_1c0 = (float *)CONCAT44(fVar25 * (float)local_190._4_4_ + fVar26,
                                  fVar25 * (float)local_190._0_4_ + fVar29);
    local_1b8 = fVar25 * pfStack_188._0_4_ + fVar24;
  }
  local_128 = 0;
  local_120 = 0;
  local_118 = (undefined1  [16])0x0;
  local_108 = (undefined1  [16])0x0;
  local_f8 = 0;
  local_e0 = -1;
  local_dc = '\0';
  local_f0 = fVar27;
  uStack_ec = uVar32;
  uStack_e8 = uVar33;
  uStack_e4 = uVar34;
  FUN_1802ef840(0,&local_1a8,&local_1c0,*(undefined8 *)(param_3 + 8));
  if (local_dc != '\0') {
    lVar10 = (local_118._0_8_ - local_120) / 6 + (local_118._0_8_ - local_120 >> 0x3f);
    uVar16 = (lVar10 >> 1) - (lVar10 >> 0x3f);
    if (1 < uVar16) {
      if (local_128 == 0xbbe43941) {
        lVar9 = 0;
      }
      else if (local_128 != 0xc243cce2) {
        if (local_128 == 0x937fcfa3) {
          lVar9 = 2;
        }
        else if ((local_128 == 0x1d8fded0) || (local_128 == 0xf7b68f78)) {
          lVar9 = 3;
        }
        else {
          if (local_128 != 0x488e8052) goto LAB_1802f351d;
          lVar9 = 4;
        }
      }
      if (DAT_180b0bd20 == 0) {
        local_1c0 = (float *)&DAT_180b0bd18;
        local_190 = (undefined1  [8])&DAT_180b0bca0;
      }
      else {
        pcVar17 = &DAT_180b0b540 + lVar9 * 0x150;
        local_1c0 = (float *)(&DAT_180b0b688 + lVar9 * 0x54);
        local_190 = (undefined1  [8])(&DAT_180b0b610 + lVar9 * 0x150);
        if (pcVar17 == (char *)0x0) goto LAB_1802f351d;
      }
      if (*pcVar17 != '\0') {
        local_148 = (undefined1  [16])0x0;
        local_138 = 0;
        FUN_1802f2080(0,&local_128,local_148);
        lVar9 = 0x140;
        if (local_148._0_8_ == local_148._8_8_) {
          lVar9 = 0x138;
        }
        fVar25 = *(float *)(pcVar17 + lVar9);
        local_160 = (undefined1  [16])0x0;
        local_150 = 0;
        local_178 = (undefined1  [16])0x0;
        local_168 = (float *)0x0;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar16;
        uVar12 = SUB168(ZEXT816(2) * auVar2,0);
        if (SUB168(ZEXT816(2) * auVar2,8) != 0) {
          uVar12 = 0xffffffffffffffff;
        }
        local_1c8 = fVar25;
        if (uVar12 != 0) {
          if (0x3fffffffffffffff < uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_1801136f0();
          }
          uVar13 = FUN_18015bca0(uVar12 * 4);
          FUN_18063aed0(uVar13,local_160._0_8_,local_160._8_8_ - local_160._0_8_);
          FUN_180158f30(local_160,uVar13,0);
        }
        uVar18 = 0;
        uVar12 = FUN_1802f3f50(local_178,uVar16);
        lVar9 = 0;
        bVar6 = local_1c8._3_1_;
        uVar5 = local_1c8._2_1_;
        uVar4 = local_1c8._1_1_;
        fVar24 = 57005.0;
        fVar29 = 0.6;
        fVar26 = NAN;
        do {
          FUN_180419cd0(uVar12,&local_1a8,local_120 + lVar9);
          if (((float)local_1a8 == fVar24) || (local_1a8._4_4_ == fVar24)) {
            local_1ac = fVar26;
            FUN_1802aa650(local_160,&local_1ac);
            local_1ac = fVar26;
            uVar12 = FUN_1802aa650(local_160,&local_1ac);
            local_1b0 = 0;
            if ((float *)local_178._8_8_ == local_168) {
              puVar20 = &local_1b0;
              goto LAB_1802f32aa;
            }
            *(float *)local_178._8_8_ = 0.0;
            local_178._8_8_ = (float *)(local_178._8_8_ + 4);
          }
          else {
            FUN_1802aa650(local_160,&local_1a8);
            FUN_1802aa650(local_160,(longlong)&local_1a8 + 4);
            fVar21 = (float)bVar6;
            uVar12 = (ulonglong)(uint)fVar21;
            local_1c8 = (float)CONCAT13((char)(int)((fVar36 - ((float)uVar18 / (float)(uVar16 - 1))
                                                              * fVar29) * fVar21),
                                        CONCAT12(uVar5,CONCAT11(uVar4,SUB41(fVar25,0))));
            if ((float *)local_178._8_8_ == local_168) {
              puVar20 = &local_1c8;
LAB_1802f32aa:
              uVar12 = FUN_1802f4520(local_178,local_178._8_8_,puVar20);
            }
            else {
              *(float *)local_178._8_8_ = local_1c8;
              local_178._8_8_ = (float *)(local_178._8_8_ + 4);
            }
          }
          uVar18 = uVar18 + 1;
          lVar9 = lVar9 + 0xc;
        } while (uVar18 < uVar16);
        local_1a8 = local_160;
        auVar31 = ZEXT464(0x40200000);
        if (*(char *)local_190 != '\0') {
          _local_190 = (undefined1  [16])0x0;
          local_180 = (float *)0x0;
          FUN_1802f3f50(local_190,(longlong)(local_178._8_8_ - local_178._0_8_) >> 2);
          local_1ac = fVar27;
          pfVar15 = &local_1ac;
          if (fVar27 <= *local_1c0) {
            pfVar15 = local_1c0;
          }
          pfVar14 = (float *)&local_1c8;
          if (*local_1c0 <= fVar36) {
            pfVar14 = pfVar15;
          }
          fVar27 = *pfVar14;
          uVar13 = local_178._8_8_;
          local_1c8 = fVar36;
          if (local_178._0_8_ != local_178._8_8_) {
            pfVar15 = pfStack_188;
            puVar19 = (undefined1 *)(local_178._0_8_ + 2);
            do {
              local_1c8 = (float)CONCAT13((char)(int)((float)(byte)puVar19[1] * fVar27),
                                          CONCAT12(*puVar19,*(undefined2 *)(puVar19 + -2)));
              if (pfVar15 == local_180) {
                FUN_1802f4520(local_190,(float)(byte)puVar19[1] * fVar27,&local_1c8);
                pfVar15 = pfStack_188;
              }
              else {
                *pfVar15 = local_1c8;
                pfVar15 = (float *)((longlong)pfStack_188 + 4);
                pfStack_188 = pfVar15;
              }
              puVar1 = puVar19 + 2;
              puVar19 = puVar19 + 4;
            } while (puVar1 != (undefined1 *)uVar13);
          }
          FUN_1802f3d70(&local_1a8,&DAT_180bbb038,local_190,auVar31._0_8_);
          FUN_180159650(local_190);
        }
        uVar13 = local_198;
        uVar22 = FUN_1802f3d70(&local_1a8,local_198,local_178,0x3fc00000);
        if (-1 < local_e0) {
          FUN_180419cd0(uVar22,&local_1c0,&local_f0);
          auVar30 = ZEXT464((uint)(float)local_1c0);
          if ((float)local_1c0 != fVar24) {
            auVar28 = ZEXT464((uint)local_1c0._4_4_);
            if (local_1c0._4_4_ != fVar24) {
              local_1c8 = -131072.0;
              FUN_180432510(uVar13,(ulonglong)local_1c0 & 0xffffffff,local_1c0._4_4_,0x40600000);
              local_1c8 = (float)CONCAT13(bVar6,CONCAT12(uVar5,CONCAT11(uVar4,SUB41(fVar25,0))));
              FUN_180432510(uVar13,auVar30._0_8_,auVar28._0_8_,auVar31._0_8_);
            }
          }
        }
        FUN_180159650(local_178);
        FUN_180159650(local_160);
        if (local_148._0_8_ != 0) {
          lVar9 = local_148._0_8_;
          if ((0xfff < (ulonglong)(((local_138 - local_148._0_8_) / 0x14) * 0x14)) &&
             (lVar9 = *(longlong *)(local_148._0_8_ + -8), 0x1f < (local_148._0_8_ - lVar9) - 8U)) {
                    /* WARNING: Subroutine does not return */
            _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
          }
          FUN_1804547d0(lVar9);
        }
      }
    }
  }
LAB_1802f351d:
  FUN_1801b36e0(local_108);
  FUN_1801b36e0(&local_120);
}



