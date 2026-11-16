// FUN_1802b1e40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b1e40 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b1e40(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  longlong *plVar5;
  float *pfVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  int iVar9;
  ulonglong uVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  char *pcVar14;
  undefined8 *puVar15;
  byte bVar16;
  float fVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  uint uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [64];
  undefined4 uVar29;
  undefined8 uVar28;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [64];
  undefined8 uVar34;
  undefined1 in_ZMM12 [64];
  float fVar35;
  float fVar36;
  undefined1 auStack_1f8 [32];
  float local_1d8;
  undefined1 local_1d0;
  float local_1c8;
  undefined4 local_1c0;
  byte local_1b8;
  char *local_1b0;
  undefined8 local_1a8;
  undefined8 *local_198;
  float local_190;
  float local_18c [4];
  float local_17c;
  float local_178 [2];
  float local_170;
  undefined4 uStack_16c;
  float local_168;
  float local_160;
  float local_15c;
  float local_158;
  char local_154;
  undefined8 local_150;
  undefined1 local_148 [16];
  float local_138 [2];
  undefined1 local_130 [12];
  float fStack_124;
  undefined8 local_120;
  undefined8 local_118;
  longlong lStack_110;
  undefined8 uStack_108;
  longlong lStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong uStack_e8;
  undefined8 uStack_e0;
  ulonglong local_d8;
  undefined1 local_98 [16];
  
  local_98 = in_ZMM12._0_16_;
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_1f8;
  local_150 = param_2;
  FUN_18017bf40(&local_170);
  local_168 = DAT_180bbae00;
  _local_130 = (undefined1  [16])0x0;
  local_120 = 0;
  local_138[0] = 1.4013e-45;
  auVar33 = ZEXT864(0);
  auVar32 = auVar33._0_16_;
  fVar21 = DAT_180bbae00;
  if (DAT_180bbab78 == 0) {
LAB_1802b1f17:
    if (auVar32._0_4_ < (float)local_130._8_4_) {
      iVar4 = (int)(float)local_130._8_4_;
      iVar9 = (int)fStack_124;
      goto LAB_1802b1f32;
    }
  }
  else {
    (**(code **)(*(longlong *)DAT_180bbab78 + 0x2f8))(DAT_180bbab78,local_138,local_130);
    auVar32 = auVar33._0_16_;
    if (local_138[0] != 0.0) goto LAB_1802b1f17;
  }
  iVar4 = 0;
  iVar9 = 0;
LAB_1802b1f32:
  local_138[0] = (float)iVar4;
  local_190 = (float)iVar9;
  fVar22 = local_138[0] * 0.5;
  fVar36 = local_190 * 0.5;
  local_118 = 0;
  lStack_110 = 0;
  uStack_108 = 0;
  lStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  auVar33 = ZEXT1664(auVar32);
  FUN_1801abd10(&local_118);
  local_198 = DAT_180b8f970;
  if (DAT_180b8f968 != DAT_180b8f970) {
    lVar2 = CONCAT44(uStack_16c,local_170);
    fVar35 = 52.0;
    uVar25 = 0x80000000;
    uVar29 = 0;
    uVar30 = 0;
    uVar31 = 0;
    fVar21 = 0.001;
    puVar7 = DAT_180b8f970;
    puVar15 = DAT_180b8f968;
    do {
      if ((*(char *)((longlong)puVar15 + 100) != '\0') &&
         (*(char *)((longlong)puVar15 + 0x81) == '\0')) {
        lVar1 = puVar15[1];
        if ((lVar1 == 0x1d8fded0) || (lVar1 == 0xf7b68f78)) {
          bVar16 = 1;
        }
        else {
          bVar16 = 0;
        }
        if (((lVar1 == 0xbbe43941) || (bVar16 != 0)) &&
           (pcVar14 = &DAT_180cc76f0 + (ulonglong)bVar16 * 0x1c8, *pcVar14 != '\0')) {
          FUN_1801b1240(&local_118,local_148,puVar15);
          plVar5 = (longlong *)FUN_1802b58c0(&DAT_180b8f870,local_130,puVar15);
          lVar1 = *plVar5;
          *(undefined1 *)(lVar1 + 0x1c) = 1;
          *(undefined4 *)(lVar1 + 0x18) = 0x3f800000;
          fVar19 = (float)(lVar2 - puVar15[0xd]) / 1e+09;
          fVar17 = *(float *)((longlong)puVar15 + 0x5c);
          if (fVar19 < fVar17) {
            fVar20 = 1.0;
            local_18c[2] = 1.0;
            local_18c[0] = auVar33._0_4_;
            auVar32 = vmaxss_avx(ZEXT416((uint)(fVar17 - fVar19)),auVar33._0_16_);
            local_18c[1] = auVar32._0_4_ / fVar17;
            pfVar6 = local_18c;
            if (auVar33._0_4_ <= local_18c[1]) {
              pfVar6 = local_18c + 1;
            }
            pfVar13 = local_18c + 2;
            if (local_18c[1] <= 1.0) {
              pfVar13 = pfVar6;
            }
            fVar17 = *pfVar13;
            FUN_180419f80(local_18c + 1,&local_160,puVar15 + 10);
            if (local_154 == '\0') {
              auVar23 = ZEXT464((uint)(local_160 - fVar22));
              auVar27 = ZEXT464((uint)(local_15c - fVar36));
              if (local_158 <= auVar33._0_4_) {
                auVar23 = ZEXT1664(CONCAT412(uVar31,CONCAT48(uVar30,CONCAT44(uVar29,(uint)(local_160
                                                                                          - fVar22)
                                                                                    ^ uVar25))));
                auVar27 = ZEXT1664(CONCAT412(uVar31,CONCAT48(uVar30,CONCAT44(uVar29,(uint)(local_15c
                                                                                          - fVar36)
                                                                                    ^ uVar25))));
              }
              auVar32 = auVar23._0_16_;
              auVar26 = auVar27._0_16_;
              fVar17 = auVar27._0_4_ * auVar27._0_4_ + auVar23._0_4_ * auVar23._0_4_;
              if (fVar17 < 0.0) {
                fVar17 = (float)FUN_18061e150();
                auVar32 = auVar23._0_16_;
                auVar26 = auVar27._0_16_;
              }
              else {
                fVar17 = SQRT(fVar17);
              }
              if (fVar20 <= fVar17) {
                fVar19 = auVar32._0_4_ / fVar17;
                auVar27 = ZEXT1664(CONCAT124(auVar32._4_12_,fVar19));
                auVar23 = ZEXT1664(CONCAT124(auVar26._4_12_,auVar26._0_4_ / fVar17));
                uVar18 = SUB648(ZEXT464(0x7f7fffff),0);
                uVar25 = 0x7fffffff;
                fVar17 = local_138[0];
                if (fVar21 < ABS(fVar19)) {
                  fVar20 = (fVar35 - fVar22) / fVar19;
                  fVar19 = ((local_138[0] - fVar35) - fVar22) / fVar19;
                  auVar24 = ZEXT464((uint)fVar19);
                  uVar10 = (ulonglong)(uint)fVar19;
                  if (auVar33._0_4_ < fVar20) {
                    uVar18 = FUN_1806156a0(uVar18,fVar20);
                    uVar10 = auVar24._0_8_;
                  }
                  if (auVar33._0_4_ < (float)uVar10) {
                    uVar18 = FUN_1806156a0(uVar18,uVar10);
                  }
                }
                uVar34 = auVar27._0_8_;
                uVar28 = auVar23._0_8_;
                fVar19 = auVar23._0_4_;
                if (fVar21 < (float)((uint)fVar19 & uVar25)) {
                  fVar21 = (fVar35 - fVar36) / fVar19;
                  fVar19 = ((local_190 - fVar35) - fVar36) / fVar19;
                  uVar10 = (ulonglong)(uint)fVar19;
                  auVar24 = ZEXT464((uint)fVar19);
                  if (auVar33._0_4_ < fVar21) {
                    uVar18 = FUN_1806156a0(uVar18,fVar21);
                    uVar10 = auVar24._0_8_;
                  }
                  uVar34 = auVar27._0_8_;
                  uVar28 = auVar23._0_8_;
                  if (auVar33._0_4_ < (float)uVar10) {
                    uVar18 = FUN_1806156a0(uVar18,uVar10);
                    uVar34 = auVar27._0_8_;
                    uVar28 = auVar23._0_8_;
                  }
                }
                fVar17 = fVar17 - fVar35;
                fVar21 = (float)uVar18 * (float)uVar34 + fVar22;
                fVar20 = local_190 - fVar35;
                fVar19 = (float)uVar18 * (float)uVar28 + fVar36;
                local_18c[3] = fVar19;
                local_17c = fVar20;
                local_178[0] = fVar21;
                local_170 = fVar17;
                uVar18 = FUN_180636c80(uVar28,uVar34);
                pfVar6 = local_18c + 3;
                if (fVar19 < fVar35) {
                  pfVar6 = (float *)&DAT_180701c84;
                }
                pfVar11 = &local_17c;
                if (fVar19 <= fVar20) {
                  pfVar11 = pfVar6;
                }
                fVar19 = (float)FUN_180638e00();
                auVar23 = ZEXT464((uint)(*pfVar11 - fVar19 * 36.5));
                pfVar6 = local_178;
                if (fVar21 < fVar35) {
                  pfVar6 = (float *)&DAT_180701c84;
                }
                pfVar12 = &local_170;
                if (fVar21 <= fVar17) {
                  pfVar12 = pfVar6;
                }
                fVar21 = (float)FUN_180637540(uVar18,*pfVar11,fVar19 * 36.5);
                param_2 = local_150;
                local_1a8 = *puVar15;
                local_1c0 = *(undefined4 *)(lVar1 + 0x18);
                local_1c8 = *pfVar13;
                local_1d0 = 1;
                local_1d8 = (float)uVar18;
                local_1b8 = bVar16;
                local_1b0 = pcVar14;
                FUN_1802b25d0(local_1c0,local_150,*pfVar12 - fVar21 * 36.5,auVar23._0_8_);
                fVar21 = 0.001;
                uVar25 = 0x80000000;
                uVar29 = 0;
                uVar30 = 0;
                uVar31 = 0;
              }
            }
            else {
              local_1a8 = *puVar15;
              local_1c0 = *(undefined4 *)(lVar1 + 0x18);
              local_1d0 = 0;
              local_1d8 = auVar33._0_4_;
              local_1c8 = fVar17;
              local_1b8 = bVar16;
              local_1b0 = pcVar14;
              FUN_1802b25d0(local_1c0,param_2,local_160,local_15c);
            }
          }
        }
        puVar7 = local_198;
      }
      puVar15 = puVar15 + 0x11;
    } while (puVar15 != puVar7);
    fVar21 = local_168;
  }
  if ((longlong *)*DAT_180b8f878 != DAT_180b8f878) {
    fVar22 = 3.0;
    plVar5 = (longlong *)*DAT_180b8f878;
    do {
      uVar10 = (((((((((ulonglong)*(byte *)(plVar5 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar5 + 0x11)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar5 + 0x12)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar5 + 0x13)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar5 + 0x14)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar5 + 0x15)) * 0x100000001b3 ^
                (ulonglong)*(byte *)((longlong)plVar5 + 0x16)) * 0x100000001b3 ^
               (ulonglong)*(byte *)((longlong)plVar5 + 0x17)) * 0x100000001b3 & uStack_e8;
      lVar2 = *(longlong *)(lStack_100 + 8 + uVar10 * 0x10);
      if (lVar2 == lStack_110) {
LAB_1802b24db:
        fVar36 = *(float *)(plVar5 + 3) - fVar21 * fVar22;
        *(float *)(plVar5 + 3) = fVar36;
        lVar2 = DAT_180b8f888;
        plVar8 = DAT_180b8f878;
        if (auVar33._0_4_ < fVar36) goto LAB_1802b2453;
        uVar10 = (((((((((ulonglong)*(byte *)(plVar5 + 2) ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                       (ulonglong)*(byte *)((longlong)plVar5 + 0x11)) * 0x100000001b3 ^
                      (ulonglong)*(byte *)((longlong)plVar5 + 0x12)) * 0x100000001b3 ^
                     (ulonglong)*(byte *)((longlong)plVar5 + 0x13)) * 0x100000001b3 ^
                    (ulonglong)*(byte *)((longlong)plVar5 + 0x14)) * 0x100000001b3 ^
                   (ulonglong)*(byte *)((longlong)plVar5 + 0x15)) * 0x100000001b3 ^
                  (ulonglong)*(byte *)((longlong)plVar5 + 0x16)) * 0x100000001b3 ^
                 (ulonglong)*(byte *)((longlong)plVar5 + 0x17)) * 0x100000001b3 & _DAT_180b8f8a0;
        plVar3 = *(longlong **)(DAT_180b8f888 + uVar10 * 0x10);
        if (*(longlong **)(DAT_180b8f888 + 8 + uVar10 * 0x10) == plVar5) {
          if (plVar3 == plVar5) {
            *(longlong **)(DAT_180b8f888 + uVar10 * 0x10) = DAT_180b8f878;
            *(longlong **)(lVar2 + 8 + uVar10 * 0x10) = plVar8;
          }
          else {
            *(longlong *)(DAT_180b8f888 + 8 + uVar10 * 0x10) = plVar5[1];
          }
        }
        else if (plVar3 == plVar5) {
          *(longlong *)(DAT_180b8f888 + uVar10 * 0x10) = *plVar5;
        }
        plVar8 = (longlong *)*plVar5;
        _DAT_180b8f880 = _DAT_180b8f880 + -1;
        *(longlong **)plVar5[1] = plVar8;
        plVar8[1] = plVar5[1];
        FUN_1804547d0(plVar5,0x20);
      }
      else {
        lVar1 = *(longlong *)(lVar2 + 0x10);
        while (plVar5[2] != lVar1) {
          if (lVar2 == *(longlong *)(lStack_100 + uVar10 * 0x10)) goto LAB_1802b24db;
          lVar2 = *(longlong *)(lVar2 + 8);
          lVar1 = *(longlong *)(lVar2 + 0x10);
        }
LAB_1802b2453:
        plVar8 = (longlong *)*plVar5;
      }
      plVar5 = plVar8;
    } while (plVar8 != DAT_180b8f878);
  }
  FUN_18017e9a0(&local_118);
}



