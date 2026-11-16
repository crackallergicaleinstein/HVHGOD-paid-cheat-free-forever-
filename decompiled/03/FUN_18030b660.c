// FUN_18030b660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18030b660 */

void FUN_18030b660(longlong param_1,longlong param_2,char param_3,float param_4)

{
  undefined8 uVar1;
  int iVar2;
  short sVar3;
  int iVar4;
  ULONGLONG UVar5;
  ulonglong uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint *puVar10;
  longlong *plVar11;
  ulonglong uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  undefined1 auVar18 [16];
  undefined1 extraout_var [56];
  undefined1 auVar19 [16];
  undefined1 auVar20 [64];
  undefined1 auVar21 [64];
  undefined1 auVar22 [16];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  float fVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  
  *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 1;
  puVar10 = (uint *)0x0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    puVar10 = (uint *)(*(longlong *)(param_1 + 0x40) + 0x10);
  }
  if (puVar10 == (uint *)0x0) {
    return;
  }
  auVar23 = ZEXT864(0);
  fVar15 = 0.0;
  fVar14 = 0.0;
  if (param_3 != '\0') {
    auVar20 = ZEXT464((uint)(param_4 - DAT_180b0dfc8._4_4_));
    sVar3 = thunk_FUN_180624430(param_4 - DAT_180b0dfc8._4_4_);
    auVar25 = ZEXT464(0x43b40000);
    if (sVar3 < 1) {
      fVar14 = (float)FUN_180615070(auVar20._0_8_,auVar25._0_8_);
    }
    iVar4 = 0;
    auVar20 = ZEXT464(0x7f7fffff);
    iVar13 = 0;
    puVar8 = &DAT_180701d50;
    uVar17 = 0x7fffffff;
    uVar27 = 0x7fffffff;
    uVar28 = 0x7fffffff;
    uVar29 = 0x7fffffff;
    fVar26 = 57.295776;
    do {
      auVar24 = ZEXT1664(auVar20._0_16_);
      fVar15 = (float)FUN_180636c80(puVar8[1],*puVar8);
      fVar15 = fVar14 - fVar15 * fVar26;
      auVar21 = ZEXT464((uint)fVar15);
      sVar3 = thunk_FUN_180624430(fVar15);
      fVar15 = auVar24._0_4_;
      auVar22 = auVar20._0_16_;
      if (sVar3 < 1) {
        auVar21._0_8_ = FUN_180615070(auVar21._0_8_,auVar25._0_8_);
        fVar15 = auVar24._0_4_;
        auVar22 = auVar20._0_16_;
        auVar21._8_56_ = extraout_var;
        auVar18 = auVar21._0_16_;
      }
      else {
        auVar18 = auVar23._0_16_;
      }
      auVar19._0_4_ = (float)(auVar18._0_4_ & uVar17);
      auVar19._4_4_ = auVar18._4_4_ & uVar27;
      auVar19._8_4_ = auVar18._8_4_ & uVar28;
      auVar19._12_4_ = auVar18._12_4_ & uVar29;
      auVar18 = vcmpss_avx(auVar19,auVar22,1);
      auVar22 = vblendvps_avx(auVar22,auVar19,auVar18);
      auVar20 = ZEXT1664(auVar22);
      iVar2 = iVar13;
      if (fVar15 <= auVar19._0_4_) {
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
      iVar13 = iVar13 + 1;
      puVar8 = puVar8 + 2;
    } while (iVar13 < 8);
    fVar15 = (float)(&DAT_180701d50)[(longlong)iVar4 * 2];
    fVar14 = (float)(&DAT_180701d54)[(longlong)iVar4 * 2];
    fVar16 = (float)FUN_180636c80(fVar14,fVar15);
    param_4 = param_4 - fVar16 * fVar26;
    auVar20 = ZEXT464((uint)param_4);
    sVar3 = thunk_FUN_180624430(param_4);
    if (sVar3 < 1) {
      uVar17 = FUN_180615070(auVar20._0_8_,auVar25._0_8_);
    }
    else {
      uVar17 = auVar23._0_4_;
    }
    *puVar10 = *puVar10 | 4;
    puVar9 = (uint *)0x0;
    if (*(longlong *)(puVar10 + 0xc) != 0) {
      puVar9 = (uint *)(*(longlong *)(puVar10 + 0xc) + 0x10);
    }
    if (puVar9 != (uint *)0x0) {
      *puVar9 = *puVar9 | 2;
      puVar9[3] = uVar17;
    }
  }
  puVar10[0x12] = (uint)fVar15;
  *puVar10 = *puVar10 | 0xc0;
  puVar10[0x13] = (uint)fVar14;
  FUN_18030b2f0(puVar10);
  puVar9 = (uint *)0x0;
  if ((int)puVar10[4] < 1) {
LAB_18030b899:
    if ((puVar10 != (uint *)0xfffffffffffffff8) &&
       (puVar9 = (uint *)FUN_1803dfb00(), puVar9 != (uint *)0x0)) {
      puVar9[2] = 0;
      puVar9[3] = 0;
      *(undefined1 *)(puVar9 + 4) = 0;
      puVar9[5] = 0;
      puVar9[8] = 0;
      puVar9[9] = 0;
      *puVar9 = *puVar9 | 0x67;
      goto LAB_18030b8c9;
    }
  }
  else {
    plVar11 = *(longlong **)(puVar10 + 6);
    uVar12 = (ulonglong)puVar10[4];
    do {
      plVar11 = plVar11 + 1;
      puVar7 = (uint *)0x0;
      if (*plVar11 != 0) {
        puVar7 = (uint *)(*plVar11 + 0x10);
      }
      if ((((puVar7 != (uint *)0x0) && (puVar9 == (uint *)0x0)) && (*(longlong *)(puVar7 + 2) == 0))
         && ((float)puVar7[5] <= auVar23._0_4_)) {
        puVar9 = puVar7;
      }
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
    if (puVar9 == (uint *)0x0) goto LAB_18030b899;
LAB_18030b8c9:
    if (param_2 != 0) {
      uVar12 = 0xffffffffffffffff;
      iVar4 = DAT_180c6f494;
      if (DAT_180c6f494 == 0) {
        UVar5 = GetTickCount64();
        if (UVar5 < DAT_180c6f4a8) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_1805f68d0(&DAT_1808fff10);
          if (iVar4 != 0) goto LAB_18030bb94;
          if (DAT_1808fff5c == 0x7fffffff) {
            DAT_1808fff5c = 0x7ffffffe;
            goto LAB_18030bba9;
          }
          if ((DAT_180c6f494 == 0) && (DAT_180c6f4a8 <= UVar5)) {
            DAT_180c6f494 = FUN_1804174b0("CPlayer_MovementServices",0x3976c40f);
            if (DAT_180c6f494 == 0) {
              DAT_180c6f4a8 = UVar5 + 1000;
            }
            else {
              DAT_180c6f4a8 = 0xffffffffffffffff;
            }
          }
          iVar4 = DAT_180c6f494;
          FUN_1805f68fc(&DAT_1808fff10);
        }
      }
      auVar20 = ZEXT464(*(uint *)(iVar4 + param_2));
      iVar4 = DAT_180c6f4a0;
      if (DAT_180c6f4a0 == 0) {
        UVar5 = GetTickCount64();
        if (UVar5 < DAT_180c6f498) {
          iVar4 = 0;
        }
        else {
          iVar4 = FUN_1805f68d0(&DAT_1808ffec0);
          if (iVar4 != 0) {
LAB_18030bb94:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1808fff0c == 0x7fffffff) {
            DAT_1808fff0c = 0x7ffffffe;
LAB_18030bba9:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c6f4a0 == 0) && (DAT_180c6f498 <= UVar5)) {
            DAT_180c6f4a0 = FUN_1804174b0("CPlayer_MovementServices",0xb20fcc65);
            if (DAT_180c6f4a0 == 0) {
              uVar12 = UVar5 + 1000;
            }
            DAT_180c6f498 = uVar12;
          }
          iVar4 = DAT_180c6f4a0;
          FUN_1805f68fc(&DAT_1808ffec0);
        }
      }
      auVar25 = ZEXT464(*(uint *)(iVar4 + param_2));
      sVar3 = thunk_FUN_180624430(auVar20._0_8_);
      auVar22 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar3),SUB6416(ZEXT464(0),0));
      auVar22 = vblendvps_avx(auVar20._0_16_,auVar23._0_16_,auVar22);
      auVar20 = ZEXT1664(auVar22);
      sVar3 = thunk_FUN_180624430(auVar25._0_8_);
      auVar22 = vpcmpgtd_avx(ZEXT416((uint)(int)sVar3),SUB6416(ZEXT464(0),0));
      auVar22 = vblendvps_avx(auVar25._0_16_,auVar23._0_16_,auVar22);
      puVar9[6] = (uint)(fVar15 - auVar20._0_4_);
      *puVar9 = *puVar9 | 0x18;
      puVar9[7] = (uint)(fVar14 - auVar22._0_4_);
    }
  }
  uVar12 = *(ulonglong *)(param_1 + 0x60);
  uVar6 = uVar12 & 0xfffffffffffff9e7;
  *(ulonglong *)(param_1 + 0x60) = uVar6;
  if (fVar15 <= 0.001) {
    if (fVar15 < -0.001) {
      uVar6 = uVar6 | 0x10;
      goto LAB_18030bacf;
    }
  }
  else {
    uVar6 = uVar6 | 8;
LAB_18030bacf:
    *(ulonglong *)(param_1 + 0x60) = uVar6;
  }
  if (fVar14 <= 0.001) {
    if (-0.001 <= fVar14) goto LAB_18030baf0;
    uVar6 = uVar6 | 0x400;
  }
  else {
    uVar6 = uVar6 | 0x200;
  }
  *(ulonglong *)(param_1 + 0x60) = uVar6;
LAB_18030baf0:
  *(ulonglong *)(param_1 + 0x68) =
       *(ulonglong *)(param_1 + 0x68) | (ulonglong)(((uint)uVar12 ^ (uint)uVar6) & 0x618);
  *(ulonglong *)(param_1 + 0x70) = *(ulonglong *)(param_1 + 0x70) & 0xfffffffffffff9e7;
  puVar9 = (uint *)0x0;
  if (*(longlong *)(puVar10 + 10) != 0) {
    puVar9 = (uint *)(*(longlong *)(puVar10 + 10) + 0x10);
  }
  if (puVar9 != (uint *)0x0) {
    *puVar10 = *puVar10 | 2;
    uVar1 = *(undefined8 *)(param_1 + 0x60);
    *puVar9 = *puVar9 | 1;
    uVar17 = *puVar9;
    *(undefined8 *)(puVar9 + 2) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x68);
    *puVar9 = uVar17 | 2;
    *(undefined8 *)(puVar9 + 4) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    *puVar9 = uVar17 | 6;
    *(undefined8 *)(puVar9 + 6) = uVar1;
  }
  return;
}



