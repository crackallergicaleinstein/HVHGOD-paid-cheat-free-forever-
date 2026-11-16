// FUN_180260070 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180260070 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180260070(undefined8 param_1,longlong param_2,ulonglong *param_3,byte param_4,
                  float *param_5,longlong *param_6,char param_7)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  bool bVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  ulonglong *puVar8;
  ULONGLONG UVar9;
  longlong lVar10;
  longlong lVar11;
  undefined *puVar12;
  int *piVar13;
  byte extraout_var;
  undefined1 *puVar14;
  float *pfVar15;
  int *piVar16;
  float *pfVar17;
  uint *puVar18;
  uint uVar19;
  uint *puVar20;
  char *pcVar21;
  uint *puVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  ulonglong uVar29;
  ulonglong extraout_XMM0_Qa_01;
  ulonglong extraout_XMM0_Qa_02;
  ulonglong extraout_XMM0_Qa_03;
  undefined8 uVar30;
  float fVar31;
  undefined1 auVar32 [64];
  undefined1 auVar33 [64];
  undefined1 auVar34 [64];
  undefined1 auStack_1c98 [32];
  undefined **local_1c78;
  char *local_1c70;
  float *local_1c68;
  undefined8 *local_1c60;
  float *local_1c58;
  double local_1c50;
  undefined1 *local_1c48;
  double local_1c40;
  float *local_1c38;
  double local_1c30;
  undefined8 local_1c28;
  double local_1c20;
  double local_1c18;
  double local_1c10;
  undefined8 *local_1c08;
  double local_1c00;
  double local_1bf8;
  double local_1bf0;
  double local_1be8;
  double local_1be0;
  double local_1bd8;
  double local_1bd0;
  double local_1bc8;
  double local_1bc0;
  double local_1bb8;
  double local_1bb0;
  double local_1ba8;
  double local_1ba0;
  double local_1b98;
  undefined4 local_1b90;
  uint local_1b88;
  uint local_1b80;
  double local_1b78;
  float local_1b70;
  uint local_1b68;
  float local_1b58;
  float local_1b54;
  byte local_1b50;
  undefined8 local_1b48;
  float local_1b40;
  float local_1b38;
  float local_1b34;
  float *local_1b30;
  float local_1b28;
  undefined8 local_1b20;
  float local_1b18;
  char local_1b14;
  float local_1b10;
  float local_1b0c;
  uint local_1b08;
  float *local_1b00;
  longlong *local_1af8;
  int local_1af0;
  float local_1aec;
  uint uStack_1ae8;
  uint5 local_1ae0;
  undefined3 uStack_1adb;
  float local_1ad8;
  undefined8 local_1ad4;
  byte local_1acc;
  int local_1ac8;
  int local_1ac0 [2];
  longlong local_1ab8;
  undefined8 local_1ab0;
  double local_1aa8;
  double local_1aa0;
  uint *local_1a98 [2];
  undefined1 local_1a88;
  undefined1 uStack_1a87;
  undefined6 uStack_1a86;
  undefined8 uStack_1a80;
  int iStack_1a78;
  uint uStack_1a74;
  undefined4 uStack_1a70;
  uint uStack_1a6c;
  float local_1a68;
  float fStack_1a64;
  float fStack_1a60;
  float fStack_1a5c;
  float fStack_1a58;
  float fStack_1a4c;
  undefined8 local_1a48;
  float local_1a40;
  float local_1a38;
  float fStack_1a34;
  float local_1a30;
  float local_1a28;
  float local_1a24;
  undefined4 local_1a20;
  float local_1a18;
  uint local_1a14;
  char local_1918;
  undefined1 local_16e8 [4];
  undefined1 auStack_16e4 [4092];
  char local_6e8 [904];
  undefined8 local_360;
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_1c98;
  local_1b00 = param_5;
  local_1af8 = param_6;
  uVar29 = param_3[0x12];
  local_1b50 = param_4;
  if (uVar29 != 0) {
    puVar8 = (ulonglong *)FUN_180270b60(local_1a98);
    local_1b48 = *puVar8;
    local_1b40 = *(float *)(puVar8 + 1);
    if ((*(char *)(uVar29 + 0x23b8) != '\0') &&
       (cVar5 = FUN_180232a20(&local_1b48,*(undefined4 *)(uVar29 + 0x23b0)), cVar5 != '\0')) {
      if ((param_2 == 0) || (*param_6 == 0)) {
        pcVar21 = "command_context";
        goto LAB_18026167a;
      }
      *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 1;
      puVar20 = (uint *)0x0;
      if (*(longlong *)(param_2 + 0x40) != 0) {
        puVar20 = (uint *)(*(longlong *)(param_2 + 0x40) + 0x10);
      }
      iVar7 = DAT_180c6479c;
      local_1a98[0] = puVar20;
      if (DAT_180c6479c == 0) {
        UVar9 = GetTickCount64();
        if (DAT_180c64778 <= UVar9) {
          local_1ab0 = &DAT_1808ef0e0;
          iVar7 = FUN_1805f68d0(&DAT_1808ef0e0);
          if (iVar7 != 0) goto LAB_18026170d;
          if (DAT_1808ef12c == 0x7fffffff) {
            DAT_1808ef12c = 0x7ffffffe;
            goto LAB_180261702;
          }
          if ((DAT_180c6479c == 0) && (DAT_180c64778 <= UVar9)) {
            DAT_180c6479c = FUN_1804174b0("CBasePlayerController",0x9a8c76d);
            if (DAT_180c6479c == 0) {
              DAT_180c64778 = UVar9 + 1000;
            }
            else {
              DAT_180c64778 = 0xffffffffffffffff;
            }
          }
          iVar7 = DAT_180c6479c;
          FUN_1805f68fc(&DAT_1808ef0e0);
          if (iVar7 != 0) goto LAB_180260257;
        }
        local_1ae0 = (uint5)(uint)local_1ae0;
        local_1ab8 = _local_1ae0;
      }
      else {
LAB_180260257:
        lVar11 = *param_6;
        lVar10 = FUN_18017ea70();
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
        if (iVar7 + lVar11 == 0) {
LAB_180260291:
          uStack_1ae8 = uStack_1ae8 & 0xffffff00;
        }
        else {
          local_1b54 = 0.0;
          cVar5 = FUN_1804514f0(&local_1b54,iVar7 + lVar11,4);
          if (cVar5 == '\0') goto LAB_180260291;
          local_1aec = local_1b54;
          uStack_1ae8 = CONCAT31(uStack_1ae8._1_3_,1);
        }
        lVar11 = FUN_18017ea70();
        if (*(int *)(lVar11 + 4) != 0) {
          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
        }
        local_1ab8 = CONCAT44(uStack_1ae8,local_1aec);
      }
      local_1aec = *(float *)(param_2 + 0x30);
      local_1af0 = DAT_180b8e634;
      if (param_7 == '\0') {
        local_1af0 = (int)local_1aec + -1;
      }
      if ((local_1af0 < 0) || ((int)local_1aec <= local_1af0)) {
        puVar22 = (uint *)0x0;
      }
      else {
        lVar11 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 8 + (longlong)local_1af0 * 8);
        puVar22 = (uint *)0x0;
        if (lVar11 != 0) {
          puVar22 = (uint *)(lVar11 + 0x10);
        }
      }
      if (puVar20 != (uint *)0x0) {
        lVar11 = 0;
        if (*(longlong *)(puVar20 + 0xc) != 0) {
          lVar11 = *(longlong *)(puVar20 + 0xc) + 0x10;
        }
        if (((lVar11 != 0) && ((char)((ulonglong)local_1ab8 >> 0x20) != '\0')) &&
           (puVar22 != (uint *)0x0)) {
          lVar11 = *(longlong *)(puVar22 + 2);
          lVar10 = 0;
          if (lVar11 != 0) {
            lVar10 = lVar11 + 0x10;
          }
          if (lVar10 != 0) {
            lVar11 = FUN_180252d60(&DAT_180c7e1f0,lVar11,DAT_180cc934c);
            _local_1ae0 = lVar11;
            FUN_180275560(extraout_XMM0_Qa,&local_1a38,local_1af8[1]);
            pfVar15 = local_1b00;
            if (*(char *)(lVar11 + 0x318) == '\0') {
              local_1b48 = *(ulonglong *)((longlong)param_3 + 0xc);
              local_1b40 = *(float *)((longlong)param_3 + 0x14);
              puVar8 = &local_1b48;
            }
            else {
              puVar8 = (ulonglong *)FUN_1804511f0(&local_1b48,local_1b00,param_3);
            }
            local_1a48 = *puVar8;
            uVar29 = local_1a48;
            local_1a40 = *(float *)(puVar8 + 1);
            local_1a28 = (float)local_1a48 - local_1a38;
            local_1a48._4_4_ = (float)(local_1a48 >> 0x20);
            local_1a24 = local_1a48._4_4_ - fStack_1a34;
            fVar31 = 0.0;
            local_1a20 = 0;
            local_1b54 = (float)local_1a48 - local_1a38;
            local_1b58 = local_1a48._4_4_ - fStack_1a34;
            local_1b28 = local_1a40 - local_1a30;
            local_1b38 = local_1b54;
            local_1b10 = local_1b58;
            local_1b0c = local_1b28;
            local_1a48 = uVar29;
            cVar5 = FUN_1802646f0(pfVar15);
            if (((((cVar5 != '\0') && (sVar6 = thunk_FUN_180624430((int)*param_3), sVar6 < 1)) &&
                 ((sVar6 = thunk_FUN_180624430(*(undefined4 *)((longlong)param_3 + 4)), sVar6 < 1 &&
                  ((sVar6 = thunk_FUN_180624430((int)param_3[1]), sVar6 < 1 &&
                   (sVar6 = thunk_FUN_180624430(local_1a38), sVar6 < 1)))))) &&
                (sVar6 = thunk_FUN_180624430(fStack_1a34), sVar6 < 1)) &&
               ((sVar6 = thunk_FUN_180624430(local_1a30), sVar6 < 1 &&
                (sVar6 = thunk_FUN_180624430(local_1a48 & 0xffffffff), sVar6 < 1)))) {
              sVar6 = thunk_FUN_180624430(local_1a48._4_4_);
              if ((sVar6 < 1) && (sVar6 = thunk_FUN_180624430(local_1a40), sVar6 < 1)) {
                puVar12 = (undefined *)FUN_18026b840(*(float *)(param_3[0x12] + 0x23b0) * 64.0);
                if ((*puVar22 >> 0xb & 1) == 0) {
                  uVar19 = puVar20[0x11];
                }
                else {
                  uVar19 = puVar22[0x16];
                }
                if ((*puVar22 >> 0xc & 1) == 0) {
                  auVar32 = ZEXT864(0);
                }
                else {
                  auVar32 = ZEXT464(puVar22[0x17]);
                }
                local_1b28 = auVar32._0_4_;
                local_1b08 = uVar19;
                local_1ab0 = puVar12;
                if (((((int)uVar19 < 1) || (sVar6 = thunk_FUN_180624430(auVar32._0_8_), 0 < sVar6))
                    || (auVar32._0_4_ < fVar31)) || (1.0 <= auVar32._0_4_)) {
                  pcVar21 = "shot_time_invalid";
                  goto LAB_18026167a;
                }
                local_1b54 = 0.0;
                uVar29 = *param_3;
                local_1b40 = *(float *)(param_3 + 1);
                local_1b48 = uVar29;
                if (*(char *)(lVar11 + 0x318) != '\0') {
                  local_1c78 = (undefined **)&local_1a38;
                  FUN_180275ea0(uVar29,&local_1b20,&local_1a48,uVar19);
                  if (local_1b14 == '\0') {
                    DAT_180b8e622 = 0;
                    pcVar21 = "spread_correction";
                    goto LAB_18026167a;
                  }
                  local_1b38 = (float)local_1b20 - local_1a38;
                  local_1b54 = local_1b20._4_4_ - fStack_1a34;
                  local_1b58 = local_1b18 - local_1a30;
                  local_1a40 = local_1a30 + local_1b58;
                  auVar33 = ZEXT464((uint)local_1a40);
                  auVar32 = ZEXT464((uint)(fStack_1a34 + local_1b54));
                  local_1a48 = CONCAT44(fStack_1a34 + local_1b54,local_1a38 + local_1b38);
                  local_1b34 = local_1b38;
                  local_1b10 = local_1b54;
                  local_1b0c = local_1b58;
                  sVar6 = thunk_FUN_180624430();
                  if (((0 < sVar6) || (sVar6 = thunk_FUN_180624430(auVar32._0_8_), 0 < sVar6)) ||
                     (sVar6 = thunk_FUN_180624430(auVar33._0_8_), 0 < sVar6)) {
                    pcVar21 = "spread_non_finite";
                    goto LAB_18026167a;
                  }
                  local_1b54 = (float)FUN_180274ef0(extraout_XMM0_Qa_00,&local_1a48,uVar19);
                  local_1c60 = (undefined8 *)CONCAT44(local_1c60._4_4_,DAT_180cc9350);
                  local_1c68 = (float *)CONCAT44(local_1c68._4_4_,(uint)DAT_180cc934c);
                  local_1c70 = (char *)CONCAT44(local_1c70._4_4_,DAT_180cc9358);
                  local_1c78 = (undefined **)CONCAT44(local_1c78._4_4_,DAT_180cc9378);
                  FUN_1802750c0(DAT_180cc9350,&local_1a18,local_1b54,DAT_180cc9374);
                  if (local_1918 == '\0') {
                    auVar3 = vunpcklps_avx(SUB6416(ZEXT464(0x7fc00000),0),
                                           SUB6416(ZEXT464(0x7fc00000),0));
                    auVar2 = vshufps_avx(auVar3,auVar3,0x55);
                    auVar32 = ZEXT1664(auVar2);
                    local_1b30._0_4_ = auVar3._0_4_;
                    local_1a18 = local_1b30._0_4_;
                    local_1b30 = (float *)auVar3._0_8_;
                  }
                  else {
                    auVar32 = ZEXT464(local_1a14);
                  }
                  local_1b58 = auVar32._0_4_;
                  fVar27 = 0.017453292;
                  auVar33 = ZEXT464((uint)((float)local_1a48 * 0.017453292));
                  auVar34 = ZEXT464((uint)(local_1a48._4_4_ * 0.017453292));
                  fVar31 = local_1a18;
                  fVar23 = (float)FUN_180638e00((float)local_1a48 * 0.017453292);
                  fVar24 = (float)FUN_180637540(auVar33._0_8_);
                  fVar25 = (float)FUN_180638e00(auVar34._0_8_);
                  fVar26 = (float)FUN_180637540(auVar34._0_8_);
                  auVar33 = ZEXT464((uint)(fVar27 * local_1a40));
                  fVar27 = (float)FUN_180638e00(fVar27 * local_1a40);
                  fVar28 = (float)FUN_180637540(auVar33._0_8_);
                  auVar33 = ZEXT464((uint)((-fVar27 * fVar24 * fVar31 - fVar23) +
                                          fVar28 * fVar24 * auVar32._0_4_));
                  auVar32 = ZEXT464((uint)((-fVar27 * fVar23 * fVar25 - fVar28 * fVar26) * fVar31 +
                                           fVar25 * fVar24 +
                                          (fVar28 * fVar23 * fVar25 - fVar27 * fVar26) *
                                          auVar32._0_4_));
                  fVar31 = (fVar28 * fVar25 - fVar27 * fVar23 * fVar26) * fVar31 + fVar26 * fVar24 +
                           (fVar28 * fVar23 * fVar26 + fVar27 * fVar25) * local_1b58;
                  sVar6 = thunk_FUN_180624430(fVar31);
                  if (((sVar6 < 1) && (sVar6 = thunk_FUN_180624430(auVar32._0_8_), sVar6 < 1)) &&
                     (sVar6 = thunk_FUN_180624430(auVar33._0_8_), sVar6 < 1)) {
                    fVar24 = auVar32._0_4_;
                    fVar23 = auVar33._0_4_;
                    if (1e-06 <= fVar31 * fVar31 + fVar24 * fVar24 + fVar23 * fVar23) {
                      local_1b20 = (undefined *)CONCAT44(fVar24,fVar31);
                      local_1b18 = fVar23;
                      uVar29 = FUN_180450e30(&local_1b20);
                      fVar23 = DAT_180cc936c * (float)local_1b20 + *local_1b00;
                      fVar24 = DAT_180cc936c * local_1b20._4_4_ + local_1b00[1];
                      local_1b48 = CONCAT44(fVar24,fVar23);
                      local_1b40 = DAT_180cc936c * local_1b18 + local_1b00[2];
                      fVar31 = 0.0;
                      goto LAB_180260945;
                    }
                  }
                  pcVar21 = "spread_ray_invalid";
                  goto LAB_18026167a;
                }
                local_1b48._0_4_ = (float)uVar29;
                local_1b48._4_4_ = (float)(uVar29 >> 0x20);
                fVar23 = (float)local_1b48;
                fVar24 = local_1b48._4_4_;
LAB_180260945:
                iVar7 = DAT_180c64788;
                fVar25 = local_1b40;
                if (DAT_180c64788 == 0) {
                  local_1b30 = (float *)GetTickCount64();
                  if (local_1b30 < DAT_180c64780) {
                    iVar7 = 0;
                    uVar29 = extraout_XMM0_Qa_01;
                  }
                  else {
                    local_1b20 = &DAT_1808ef090;
                    iVar7 = FUN_1805f68d0(&DAT_1808ef090);
                    if (iVar7 != 0) {
LAB_18026170d:
                    /* WARNING: Subroutine does not return */
                      FUN_1805f6d44(5);
                    }
                    if (DAT_1808ef0dc == 0x7fffffff) {
                      DAT_1808ef0dc = 0x7ffffffe;
LAB_180261702:
                    /* WARNING: Subroutine does not return */
                      FUN_1805f6d44(6);
                    }
                    if ((DAT_180c64788 == 0) && (DAT_180c64780 <= local_1b30)) {
                      DAT_180c64788 = FUN_1804174b0("C_BaseEntity",0x84cdad2);
                      if (DAT_180c64788 == 0) {
                        DAT_180c64780 = (longlong)local_1b30 + 1000;
                      }
                      else {
                        DAT_180c64780 = 0xffffffffffffffff;
                      }
                    }
                    iVar7 = DAT_180c64788;
                    uVar29 = FUN_1805f68fc(&DAT_1808ef090);
                  }
                }
                uVar1 = param_3[0x10];
                if ((longlong)iVar7 + uVar1 == 0) {
                  bVar4 = false;
                  fVar26 = local_1af8._0_4_;
                }
                else {
                  local_1b58 = 0.0;
                  lVar10 = FUN_18017ea70();
                  *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
                  cVar5 = FUN_1804514c0(&local_1b58,(longlong)iVar7 + uVar1,4);
                  if (cVar5 == '\0') {
                    lVar10 = FUN_18017ea70();
                    if (*(int *)(lVar10 + 4) != 0) {
                      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                    }
                    bVar4 = false;
                    fVar26 = local_1af8._0_4_;
                    uVar29 = extraout_XMM0_Qa_02;
                  }
                  else {
                    lVar10 = FUN_18017ea70();
                    if (*(int *)(lVar10 + 4) != 0) {
                      *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
                    }
                    bVar4 = true;
                    fVar26 = local_1b58;
                    uVar29 = extraout_XMM0_Qa_03;
                  }
                }
                if (!bVar4) {
                  fVar26 = 0.0;
                }
                if ((int)fVar26 < 1) {
                  pcVar21 = "target_unavailable";
                  goto LAB_18026167a;
                }
                FUN_1803dad10(uVar29,&local_1a18,*(undefined8 *)(param_3[0x12] + 8),1);
                FUN_18026e6a0(&DAT_180cc9380,local_6e8,param_3[0x10],param_3[0x12]);
                local_360 = *(undefined8 *)(param_2 + 8);
                local_1ad4 = 0xffffffffffffffff;
                local_1acc = 0;
                local_1ac8 = 0;
                local_1c60 = (undefined8 *)CONCAT71(local_1c60._1_7_,1);
                local_1c70 = (char *)CONCAT44(local_1c70._4_4_,(int)local_1af8[4]);
                local_1c78 = (undefined **)local_1af8[1];
                local_1c68 = &local_1ad8;
                local_1ad8 = fVar31;
                cVar5 = FUN_18026ef40(&DAT_180cc9380,local_1b00,&local_1b48,local_6e8);
                if ((cVar5 != '\0') && ((int)local_1ad4 == *(int *)((longlong)param_3 + 0x24))) {
                  if (DAT_180cadb70 != '\0') {
                    local_1ac0[1] = 4;
                    local_1ac0[0] = 0;
                    piVar16 = local_1ac0;
                    if (-1 < DAT_180cadbe8) {
                      piVar16 = &DAT_180cadbe8;
                    }
                    piVar13 = local_1ac0 + 1;
                    if (DAT_180cadbe8 < 5) {
                      piVar13 = piVar16;
                    }
                    if (*piVar13 < local_1ac8) goto LAB_180261646;
                  }
                  uVar30 = FUN_180252c10(lVar11);
                  uVar30 = FUN_180263420(uVar30,lVar11,fVar26,extraout_var >> 7 ^ 1);
                  if ((float)uVar30 <= local_1ad8) {
                    fVar31 = local_1ad8;
                    if ((param_7 != '\0') && (cVar5 = FUN_1802564c0(uVar30,param_2), cVar5 == '\0'))
                    {
                      FUN_18063ab10(local_6e8,0,0x600);
                      FUN_18015ad60(local_6e8,0x600,0xffffffffffffffff,"reason=validation");
                      local_1c78 = &PTR_180700558;
                      if (local_6e8[0] != '\0') {
                        local_1c78 = (undefined **)&DAT_1806bcfc0;
                      }
                      local_1c70 = local_6e8;
                      FUN_1800f6900(2);
                    }
                    DAT_180b8e622 = 1;
                    DAT_180b8e623 = param_7;
                    DAT_180b8e624 = 0;
                    DAT_180b8e628 = (undefined4)local_1ab8;
                    fVar26 = 100.0;
                    local_1c78 = (undefined **)param_3[0x10];
                    FUN_180254170(param_2,"shot_selected",*(float *)(param_3 + 0x13) * 100.0,
                                  0xbf800000);
                    iVar7 = FUN_180252cb0(lVar11);
                    local_1b58 = 1.4013e-43;
                    local_1b34 = 0.0;
                    if (iVar7 < 1) {
                      local_1b30 = (float *)(lVar11 + 0x598);
                      if (iVar7 != 0) {
                        local_1b30 = (float *)(lVar11 + 0x524);
                      }
                    }
                    else {
                      local_1b30 = (float *)((longlong)(iVar7 + -1) * 0x70 + 0x1b8 + lVar11);
                    }
                    fVar27 = *local_1b30;
                    FUN_18063ab10(local_6e8,0,0x600);
                    lVar11 = _local_1ae0;
                    pfVar15 = &local_1b34;
                    if (-1 < (int)fVar27) {
                      pfVar15 = local_1b30;
                    }
                    pfVar17 = &local_1b58;
                    if ((int)fVar27 < 0x65) {
                      pfVar17 = pfVar15;
                    }
                    local_1b78 = (double)(*(float *)(param_3 + 0x13) * fVar26);
                    local_1af8 = (longlong *)local_1b78;
                    local_1b98 = (double)fVar31;
                    local_1b30 = (float *)local_1b98;
                    local_1ba0 = (double)*(float *)(param_3 + 3);
                    local_1ba8 = (double)DAT_180cc9358;
                    local_1bb0 = (double)DAT_180cc9378;
                    local_1bb8 = (double)DAT_180cc9374;
                    local_1bc0 = (double)fVar25;
                    local_1bc8 = (double)fVar24;
                    local_1bd0 = (double)fVar23;
                    local_1bd8 = (double)local_1b00[2];
                    local_1be0 = (double)local_1b00[1];
                    local_1be8 = (double)*local_1b00;
                    local_1bf0 = (double)local_1a30;
                    local_1bf8 = (double)fStack_1a34;
                    local_1c00 = (double)local_1a38;
                    local_1c08 = (undefined8 *)(double)local_1a40;
                    local_1c10 = (double)local_1a48._4_4_;
                    local_1c18 = (double)(float)local_1a48;
                    local_1aa8 = local_1c18;
                    local_1c20 = (double)*(float *)(param_3[0x12] + 0x23b0);
                    local_1aa0 = local_1c20;
                    local_1c30 = (double)(float)puVar22[0x17];
                    local_1b20 = (undefined *)local_1c30;
                    local_1b68 = (uint)local_1b50;
                    local_1b70 = *pfVar17;
                    local_1b80 = (uint)(*(char *)(_local_1ae0 + 0x2b0) != '\0');
                    local_1b88 = (uint)local_1acc;
                    local_1b90 = (int)local_1ad4;
                    local_1c28 = CONCAT44(local_1c28._4_4_,*(undefined4 *)(param_3[0x12] + 0x23b4));
                    local_1c38 = (float *)CONCAT44(local_1c38._4_4_,puVar22[0x16]);
                    local_1c40 = (double)CONCAT44(local_1c40._4_4_,(int)local_1ab8);
                    local_1c48 = (undefined1 *)CONCAT44(local_1c48._4_4_,local_1b08);
                    local_1c50 = (double)CONCAT44(local_1c50._4_4_,local_1b54);
                    uVar19 = (uint)(*(char *)(_local_1ae0 + 0x318) != '\0');
                    local_1c58 = (float *)CONCAT44(local_1c58._4_4_,uVar19);
                    local_1c60 = (undefined8 *)CONCAT44(local_1c60._4_4_,uVar19);
                    local_1c68 = (float *)CONCAT44(local_1c68._4_4_,(uint)DAT_180cc934c);
                    local_1c70 = (char *)param_3[0x10];
                    local_1c78 = *(undefined ***)(param_2 + 8);
                    FUN_18015ad60(local_6e8,0x600,0xffffffffffffffff,
                                  "command=%lld target=0x%llx weapon=%d no_spread=%d seed_valid=%d seed=%u seed_tick=%d controller_tick=%d history_tick=%d history_fraction=%.6f pose_tick=%d pose_time=%.6f aim=(%.6f,%.6f,%.6f) punch=(%.6f,%.6f,%.6f) shoot=(%.3f,%.3f,%.3f) ray_end=(%.3f,%.3f,%.3f) inaccuracy=%.7f spread=%.7f recoil_index=%.3f expected_damage=%.2f verified_damage=%.2f hitbox=%d penetrated=%d silent=%d hitchance=%.2f required_hitchance=%d forced=%d"
                                 );
                    local_1c78 = &PTR_180700558;
                    if (local_6e8[0] != '\0') {
                      local_1c78 = (undefined **)&DAT_1806bcfc0;
                    }
                    local_1c70 = local_6e8;
                    FUN_1800f6900(0);
                    FUN_18063ab10(local_16e8,0,0x1000);
                    puVar14 = auStack_16e4;
                    lVar10 = 8;
                    do {
                      *(undefined8 *)(puVar14 + -4) = 0;
                      *(undefined8 *)(puVar14 + 4) = 0;
                      *(undefined8 *)(puVar14 + 0xc) = 0;
                      *(undefined4 *)(puVar14 + 0x14) = 0;
                      *(undefined8 *)(puVar14 + 0x18) = 0x3f800000;
                      *(undefined8 *)(puVar14 + 0x20) = 0;
                      *(undefined8 *)(puVar14 + 0x28) = 0;
                      *(undefined8 *)(puVar14 + 0x30) = 0;
                      *(undefined8 *)(puVar14 + 0x38) = 0x3f800000;
                      *(undefined8 *)(puVar14 + 0x40) = 0;
                      *(undefined8 *)(puVar14 + 0x48) = 0;
                      *(undefined8 *)(puVar14 + 0x50) = 0;
                      *(undefined8 *)(puVar14 + 0x58) = 0x3f800000;
                      *(undefined8 *)(puVar14 + 0x60) = 0;
                      *(undefined8 *)(puVar14 + 0x68) = 0;
                      *(undefined8 *)(puVar14 + 0x70) = 0;
                      *(undefined8 *)(puVar14 + 0x78) = 0x3f800000;
                      *(undefined8 *)(puVar14 + 0x80) = 0;
                      *(undefined8 *)(puVar14 + 0x88) = 0;
                      *(undefined8 *)(puVar14 + 0x90) = 0;
                      *(undefined8 *)(puVar14 + 0x98) = 0x3f800000;
                      *(undefined8 *)(puVar14 + 0xa0) = 0;
                      *(undefined8 *)(puVar14 + 0xa8) = 0;
                      *(undefined8 *)(puVar14 + 0xb0) = 0;
                      *(undefined8 *)(puVar14 + 0xb8) = 0x3f800000;
                      *(undefined8 *)(puVar14 + 0xc0) = 0;
                      *(undefined8 *)(puVar14 + 200) = 0;
                      *(undefined8 *)(puVar14 + 0xd0) = 0;
                      *(undefined8 *)(puVar14 + 0xd8) = 0x3f800000;
                      *(undefined8 *)(puVar14 + 0xe0) = 0;
                      *(undefined8 *)(puVar14 + 0xe8) = 0;
                      *(undefined8 *)(puVar14 + 0xf0) = 0;
                      *(undefined8 *)(puVar14 + 0xf8) = 0x3f800000;
                      *(undefined8 *)(puVar14 + 0x100) = 0;
                      *(undefined8 *)(puVar14 + 0x108) = 0;
                      *(undefined8 *)(puVar14 + 0x110) = 0;
                      *(undefined8 *)(puVar14 + 0x118) = 0x3f800000;
                      *(undefined8 *)(puVar14 + 0x120) = 0;
                      *(undefined8 *)(puVar14 + 0x128) = 0;
                      *(undefined8 *)(puVar14 + 0x130) = 0;
                      *(undefined8 *)(puVar14 + 0x138) = 0x3f800000;
                      *(undefined8 *)(puVar14 + 0x140) = 0;
                      *(undefined8 *)(puVar14 + 0x148) = 0;
                      *(undefined8 *)(puVar14 + 0x150) = 0;
                      *(undefined8 *)(puVar14 + 0x158) = 0x3f800000;
                      *(undefined8 *)(puVar14 + 0x160) = 0;
                      *(undefined8 *)(puVar14 + 0x168) = 0;
                      *(undefined8 *)(puVar14 + 0x170) = 0;
                      *(undefined8 *)(puVar14 + 0x178) = 0x3f800000;
                      *(undefined8 *)(puVar14 + 0x180) = 0;
                      *(undefined8 *)(puVar14 + 0x188) = 0;
                      *(undefined8 *)(puVar14 + 400) = 0;
                      *(undefined8 *)(puVar14 + 0x198) = 0x3f800000;
                      *(undefined8 *)(puVar14 + 0x1a0) = 0;
                      *(undefined8 *)(puVar14 + 0x1a8) = 0;
                      *(undefined8 *)(puVar14 + 0x1b0) = 0;
                      *(undefined8 *)(puVar14 + 0x1b8) = 0x3f800000;
                      *(undefined8 *)(puVar14 + 0x1c0) = 0;
                      *(undefined8 *)(puVar14 + 0x1c8) = 0;
                      *(undefined8 *)(puVar14 + 0x1d0) = 0;
                      *(undefined8 *)(puVar14 + 0x1d8) = 0x3f800000;
                      *(undefined8 *)(puVar14 + 0x1e0) = 0;
                      *(undefined8 *)(puVar14 + 0x1e8) = 0;
                      *(undefined8 *)(puVar14 + 0x1f0) = 0;
                      *(undefined4 *)(puVar14 + 0x1f8) = 0x3f800000;
                      puVar14 = puVar14 + 0x200;
                      lVar10 = lVar10 + -1;
                    } while (lVar10 != 0);
                    local_1b58 = 1.79366e-43;
                    local_1b34 = 0.0;
                    pfVar15 = (float *)(param_3[0x12] + 0x36c);
                    fVar31 = *pfVar15;
                    pfVar17 = &local_1b34;
                    if (-1 < (int)fVar31) {
                      pfVar17 = pfVar15;
                    }
                    pfVar15 = &local_1b58;
                    if ((int)fVar31 < 0x81) {
                      pfVar15 = pfVar17;
                    }
                    if (0 < (int)*pfVar15) {
                      FUN_18063aed0(local_16e8,param_3[0x12] + 0x370,(longlong)(int)*pfVar15 << 5);
                    }
                    pfVar15 = local_1b00;
                    local_1b20 = (undefined *)
                                 CONCAT44(local_1b48._4_4_ - local_1b00[1],
                                          (float)local_1b48 - *local_1b00);
                    local_1b18 = local_1b40 - local_1b00[2];
                    FUN_180450e30(&local_1b20);
                    uVar29 = param_3[0x12];
                    iVar7 = *(int *)(uVar29 + 0x23b4);
                    local_1c08 = &local_1b20;
                    local_1c10 = (double)CONCAT71(local_1c10._1_7_,*(undefined1 *)(lVar11 + 0x318));
                    local_1c18 = (double)CONCAT71(local_1c18._1_7_,*(undefined1 *)(uVar29 + 0x23bb))
                    ;
                    local_1c20 = (double)CONCAT71(local_1c20._1_7_,iVar7 < DAT_180cc935c);
                    local_1c28 = *(undefined8 *)(param_2 + 8);
                    local_1c30 = (double)CONCAT71(local_1c30._1_7_,local_1b50);
                    local_1c38 = &local_1a18;
                    local_1c40 = (double)CONCAT44(local_1c40._4_4_,*(undefined4 *)(uVar29 + 0x36c));
                    local_1c48 = local_16e8;
                    local_1c50 = (double)CONCAT44(local_1c50._4_4_,iVar7);
                    local_1c58 = pfVar15;
                    local_1c60 = &local_1a48;
                    local_1c68 = (float *)CONCAT44(local_1c68._4_4_,DAT_180cc9378);
                    local_1c70 = (char *)CONCAT44(local_1c70._4_4_,DAT_180cc9374);
                    local_1c78 = (undefined **)CONCAT44(local_1c78._4_4_,(int)param_3[0x13]);
                    FUN_1802d4b60(iVar7 < DAT_180cc935c,param_3[0x10],(int)param_3[5],
                                  (int)param_3[3]);
                    puVar20 = local_1a98[0];
                    *puVar22 = *puVar22 | 1;
                    puVar18 = (uint *)0x0;
                    if (*(longlong *)(puVar22 + 2) != 0) {
                      puVar18 = (uint *)(*(longlong *)(puVar22 + 2) + 0x10);
                    }
                    if (puVar18 != (uint *)0x0) {
                      puVar18[2] = (uint)local_1b38;
                      puVar18[3] = (uint)local_1b10;
                      *puVar18 = *puVar18 | 7;
                      puVar18[4] = (uint)local_1b0c;
                    }
                    uStack_1a74 = (uint)puVar12;
                    puVar22[0x14] = uStack_1a74;
                    puVar22[0x15] = local_1ab0._4_4_;
                    puVar22[0x16] = local_1b08;
                    uVar19 = *puVar22;
                    *puVar22 = uVar19 | 0x1e00;
                    puVar22[0x17] = (uint)local_1b28;
                    if ((uVar19 & 4) != 0) {
                      *puVar22 = uVar19 | 0x1e04;
                      puVar18 = (uint *)0x0;
                      if (*(longlong *)(puVar22 + 6) != 0) {
                        puVar18 = (uint *)(*(longlong *)(puVar22 + 6) + 0x10);
                      }
                      puVar18[3] = 0xffffffff;
                      puVar18[4] = 0xffffffff;
                      *puVar18 = *puVar18 | 7;
                      puVar18[2] = 0;
                    }
                    if ((*puVar22 & 8) != 0) {
                      *puVar22 = *puVar22 | 8;
                      puVar18 = (uint *)0x0;
                      if (*(longlong *)(puVar22 + 8) != 0) {
                        puVar18 = (uint *)(*(longlong *)(puVar22 + 8) + 0x10);
                      }
                      puVar18[3] = 0xffffffff;
                      puVar18[4] = 0xffffffff;
                      *puVar18 = *puVar18 | 7;
                      puVar18[2] = 0;
                    }
                    if ((*puVar22 & 2) != 0) {
                      *puVar22 = *puVar22 | 2;
                      puVar18 = (uint *)0x0;
                      if (*(longlong *)(puVar22 + 4) != 0) {
                        puVar18 = (uint *)(*(longlong *)(puVar22 + 4) + 0x10);
                      }
                      *puVar18 = *puVar18 | 1;
                      puVar18[2] = 0;
                    }
                    local_1a88 = 1;
                    uStack_1a87 = *(undefined1 *)(lVar11 + 0x318);
                    uStack_1a80 = *(undefined8 *)(param_2 + 8);
                    iStack_1a78 = local_1af0;
                    uStack_1a70 = (undefined4)((ulonglong)puVar12 >> 0x20);
                    uStack_1a6c = local_1b08;
                    local_1a68 = local_1b28;
                    fStack_1a64 = local_1b54;
                    fStack_1a60 = local_1b38;
                    fStack_1a5c = local_1b10;
                    fStack_1a58 = local_1b0c;
                    fStack_1a4c = local_1a30;
                    _DAT_180b8e5e0 = CONCAT62(uStack_1a86,CONCAT11(uStack_1a87,1));
                    _DAT_180b8e5f0 = CONCAT44(uStack_1a74,local_1af0);
                    _DAT_180b8e5f8 = CONCAT44(local_1b08,uStack_1a70);
                    unique0x100009e1 = CONCAT44(local_1b54,local_1b28);
                    _DAT_180b8e608 = CONCAT44(local_1b10,local_1b38);
                    _DAT_180b8e610 = CONCAT44(local_1a38,local_1b0c);
                    _DAT_180b8e618 = CONCAT44(local_1a30,fStack_1a34);
                    DAT_180b8e5e8 = uStack_1a80;
                    if (param_7 == '\0') {
                      *(ulonglong *)(param_2 + 0x60) = *(ulonglong *)(param_2 + 0x60) | 1;
                      *(ulonglong *)(param_2 + 0x68) = *(ulonglong *)(param_2 + 0x68) | 1;
                      *(ulonglong *)(param_2 + 0x70) =
                           *(ulonglong *)(param_2 + 0x70) & 0xfffffffffffffffe;
                      if (0 < (int)local_1aec) {
                        *(uint *)(param_2 + 0x20) = *(uint *)(param_2 + 0x20) | 0x20;
                        *(int *)(param_2 + 0x4c) = local_1af0;
                      }
                    }
                    *local_1a98[0] = *local_1a98[0] | 4;
                    lVar10 = *(longlong *)(local_1a98[0] + 0xc);
                    puVar18 = (uint *)0x0;
                    if (lVar10 != 0) {
                      puVar18 = (uint *)(lVar10 + 0x10);
                    }
                    if ((puVar18 != (uint *)0x0) &&
                       (((DAT_180b8e4ed == '\0' || (DAT_180cc9372 == '\0')) ||
                        (((DAT_180cc9348 & 0xfffffff7) != 0 && (5 < DAT_180cc9348 - 1)))))) {
                      puVar18[2] = (uint)local_1b38;
                      puVar18[3] = (uint)local_1b10;
                      *puVar18 = *puVar18 | 7;
                      puVar18[4] = (uint)local_1b0c;
                    }
                    if (*(char *)(lVar11 + 0x2b0) == '\0') {
                      FUN_1803e07c0(lVar10,&local_1a28);
                    }
                    lVar11 = 0;
                    if (*(longlong *)(puVar20 + 0xc) != 0) {
                      lVar11 = *(longlong *)(puVar20 + 0xc) + 0x10;
                    }
                    lVar10 = 0;
                    if (*(longlong *)(puVar22 + 2) != 0) {
                      lVar10 = *(longlong *)(puVar22 + 2) + 0x10;
                    }
                    if (lVar11 == 0) {
                    }
                    if (lVar10 == 0) {
                    }
                    cVar5 = *(char *)(_local_1ae0 + 0x2b0);
                    FUN_18063ab10(local_6e8,0,0x600);
                    local_1c40 = (double)*(float *)(lVar10 + 0x10);
                    local_1c48 = (undefined1 *)(double)*(float *)(lVar10 + 0xc);
                    local_1c50 = (double)*(float *)(lVar10 + 8);
                    local_1c58 = (float *)(double)*(float *)(lVar11 + 0x10);
                    local_1c60 = (undefined8 *)(double)*(float *)(lVar11 + 0xc);
                    local_1c68 = (float *)(double)*(float *)(lVar11 + 8);
                    local_1c38 = (float *)CONCAT44(local_1c38._4_4_,(uint)(cVar5 == '\0'));
                    local_1c70 = (char *)CONCAT44(local_1c70._4_4_,(uint)(cVar5 != '\0'));
                    local_1c78 = *(undefined ***)(param_2 + 8);
                    FUN_18015ad60(local_6e8,0x600,0xffffffffffffffff,
                                  "command=%lld silent=%d base=(%.6f,%.6f,%.6f) attack_history=(%.6f,%.6f,%.6f) camera_updated=%d sample_phase=fire_gun server_ack=unverified"
                                 );
                    local_1c78 = &PTR_180700558;
                    if (local_6e8[0] != '\0') {
                      local_1c78 = (undefined **)&DAT_1806bcfc0;
                    }
                    local_1c70 = local_6e8;
                    FUN_1800f6900(0);
                  }
                }
LAB_180261646:
                pcVar21 = "shot_path_changed_or_blocked";
                goto LAB_18026167a;
              }
            }
            pcVar21 = "aim_non_finite";
            goto LAB_18026167a;
          }
        }
      }
      pcVar21 = "command_history";
      goto LAB_18026167a;
    }
  }
  pcVar21 = "record";
LAB_18026167a:
  FUN_180254480(&DAT_180b8e5b8,param_2,pcVar21);
}



