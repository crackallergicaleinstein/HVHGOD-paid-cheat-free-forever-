// FUN_180238d70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180238d70 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180238d70(undefined8 param_1,undefined1 (*param_2) [16],longlong param_3,longlong param_4,
                  float *param_5,float *param_6,longlong param_7,longlong param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  undefined8 *puVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  ULONGLONG UVar12;
  int *piVar13;
  ulonglong uVar14;
  char *pcVar15;
  char cVar16;
  undefined8 *puVar17;
  int *piVar18;
  longlong lVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined4 uVar22;
  bool bVar23;
  bool bVar24;
  float fVar25;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar26;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined1 auVar27 [16];
  undefined1 auVar28 [64];
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 extraout_var_01 [56];
  undefined1 extraout_var_02 [56];
  undefined1 extraout_var_03 [56];
  undefined1 extraout_var_04 [56];
  undefined1 extraout_var_05 [56];
  undefined1 extraout_var_06 [56];
  undefined1 extraout_var_07 [56];
  float fVar29;
  undefined1 auVar30 [64];
  undefined1 auVar31 [64];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined1 auVar36 [64];
  float fVar37;
  undefined1 auVar38 [64];
  float fVar39;
  float fVar40;
  undefined1 auStack_8e8 [32];
  undefined8 local_8c8;
  undefined4 local_8c0;
  uint *local_8b8;
  undefined1 local_8b0;
  char local_8a8;
  int local_8a4;
  int local_8a0;
  undefined8 *local_898;
  undefined8 local_890;
  float local_888;
  int local_880 [2];
  float local_878;
  int local_874;
  undefined1 local_870 [8];
  float fStack_868;
  undefined4 uStack_864;
  undefined4 local_860;
  uint uStack_85c;
  uint local_850;
  undefined8 local_84c;
  char local_844;
  undefined4 local_840;
  undefined8 *local_838;
  ulonglong local_830;
  longlong local_828;
  float *local_820;
  undefined1 (*local_818) [16];
  undefined1 local_808 [36];
  float local_7e4;
  float local_7e0;
  float local_7dc;
  char local_7ac;
  undefined8 local_7a8 [100];
  int local_488;
  undefined1 local_478 [912];
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_8e8;
  local_820 = param_5;
  local_890 = param_7;
  if ((((param_4 == 0) || (*(char *)(param_4 + 0x23b8) == '\0')) ||
      (local_830 = (ulonglong)*(int *)(param_4 + 0x36c), 0x7f < *(int *)(param_4 + 0x36c) - 1U)) ||
     (0x13 < *(int *)(param_4 + 0x368) - 1U)) {
    *(undefined8 *)*param_2 = 0;
    *(undefined8 *)(*param_2 + 8) = 0;
    *(undefined4 *)param_2[1] = 0;
    param_2[1][4] = 0;
    *(undefined4 *)(param_2[1] + 8) = 0;
  }
  else {
    lVar20 = 6;
    puVar21 = (undefined8 *)(param_4 + 0x48);
    puVar6 = local_7a8;
    do {
      puVar17 = puVar6;
      puVar11 = puVar21;
      uVar1 = puVar11[1];
      uVar2 = puVar11[2];
      uVar3 = puVar11[3];
      *puVar17 = *puVar11;
      puVar17[1] = uVar1;
      puVar17[2] = uVar2;
      puVar17[3] = uVar3;
      uVar1 = puVar11[5];
      uVar2 = puVar11[6];
      uVar3 = puVar11[7];
      puVar17[4] = puVar11[4];
      puVar17[5] = uVar1;
      puVar17[6] = uVar2;
      puVar17[7] = uVar3;
      uVar1 = puVar11[9];
      uVar2 = puVar11[10];
      uVar3 = puVar11[0xb];
      puVar17[8] = puVar11[8];
      puVar17[9] = uVar1;
      puVar17[10] = uVar2;
      puVar17[0xb] = uVar3;
      uVar1 = puVar11[0xd];
      puVar17[0xc] = puVar11[0xc];
      puVar17[0xd] = uVar1;
      uVar1 = puVar11[0xf];
      puVar17[0xe] = puVar11[0xe];
      puVar17[0xf] = uVar1;
      lVar20 = lVar20 + -1;
      puVar21 = puVar11 + 0x10;
      puVar6 = puVar17 + 0x10;
    } while (lVar20 != 0);
    uVar1 = puVar11[0x11];
    uVar2 = puVar11[0x12];
    uVar3 = puVar11[0x13];
    puVar17[0x10] = puVar11[0x10];
    puVar17[0x11] = uVar1;
    puVar17[0x12] = uVar2;
    puVar17[0x13] = uVar3;
    *(undefined4 *)(puVar17 + 0x14) = *(undefined4 *)(puVar11 + 0x14);
    local_828 = param_4 + 0x370;
    local_818 = param_2;
    FUN_18026e6a0(&DAT_180cc9380,local_478,param_3);
    local_878 = (float)FUN_180233fd0(*(undefined4 *)(param_7 + 0x68),*(undefined4 *)(param_7 + 0x70)
                                     ,DAT_180b8f7c0);
    iVar9 = DAT_180c642a8;
    if (DAT_180c642a8 == 0) {
      UVar12 = GetTickCount64();
      if (UVar12 < DAT_180c642b0) {
        iVar9 = 0;
      }
      else {
        local_838 = (undefined8 *)&DAT_1808ed580;
        iVar9 = FUN_1805f68d0(&DAT_1808ed580);
        if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808ed5cc == 0x7fffffff) {
          DAT_1808ed5cc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c642a8 == 0) && (DAT_180c642b0 <= UVar12)) {
          DAT_180c642a8 = FUN_1804174b0("C_BaseEntity",0x84cdad2);
          if (DAT_180c642a8 == 0) {
            DAT_180c642b0 = UVar12 + 1000;
          }
          else {
            DAT_180c642b0 = 0xffffffffffffffff;
          }
        }
        iVar9 = DAT_180c642a8;
        FUN_1805f68fc(&DAT_1808ed580);
      }
    }
    local_8a0 = *(int *)(iVar9 + param_3);
    local_880[1] = 3;
    local_880[0] = 0;
    iVar9 = *(int *)(param_7 + 0x90);
    piVar18 = local_880;
    if (-1 < iVar9) {
      piVar18 = (int *)(param_7 + 0x90);
    }
    piVar13 = local_880 + 1;
    if (iVar9 < 4) {
      piVar13 = piVar18;
    }
    iVar9 = *piVar13;
    local_8a4 = iVar9;
    local_874 = FUN_1802344f0(param_7,2,*(undefined4 *)(param_7 + 1000));
    lVar20 = local_890;
    _local_870 = ZEXT416(0);
    auVar28 = ZEXT1664(_local_870);
    auVar36 = ZEXT864(0);
    local_860 = 0;
    uStack_85c = uStack_85c & 0xffffff00;
    uVar22 = 0;
    local_8a8 = '\0';
    if ((*(int *)(param_4 + 0x36c) - 1U < 0x80) && (local_488 - 1U < 0x14)) {
      local_898 = local_7a8;
      local_838 = local_7a8 + (longlong)local_488 * 5;
      if (local_7a8 != local_7a8 + (longlong)local_488 * 5) {
        fVar40 = 180.0;
        fVar39 = -180.0;
        auVar38 = ZEXT464(0);
        uVar22 = 0;
        do {
          puVar21 = local_898;
          uVar14 = (ulonglong)*(int *)((longlong)local_898 + 4);
          if (-1 < *(int *)((longlong)local_898 + 4)) {
            if (local_830 <= uVar14) goto LAB_18023956a;
            iVar10 = FUN_1803db3f0(auVar28._0_8_,*(undefined4 *)local_898);
            cVar7 = FUN_1802404d0(lVar20,iVar10);
            auVar28._8_56_ = extraout_var;
            auVar28._0_8_ = extraout_XMM0_Qa;
            if (cVar7 == '\0') goto LAB_18023956a;
            switch(iVar10) {
            case 1:
            case 8:
              lVar19 = 0;
              break;
            case 2:
              lVar19 = 1;
              break;
            case 3:
              lVar19 = 2;
              break;
            case 4:
            case 5:
              lVar19 = 3;
              break;
            case 6:
            case 7:
              lVar19 = 4;
              break;
            default:
              goto switchD_1802390ca_default;
            }
            pcVar15 = (char *)(lVar20 + 0x9d);
            if (pcVar15[lVar19] == '\0') {
              if (lVar19 == 0) {
                for (; pcVar15 != (char *)(lVar20 + 0xa2); pcVar15 = pcVar15 + 1) {
                  if (*pcVar15 != '\0') goto switchD_1802390ca_default;
                }
                bVar24 = true;
              }
              else {
switchD_1802390ca_default:
                bVar24 = false;
              }
            }
            else {
              bVar24 = true;
            }
            if ((iVar9 == 3) && (iVar10 - 2U < 2)) {
              bVar23 = true;
            }
            else {
              bVar23 = false;
            }
            auVar28._0_8_ = FUN_180237670(local_808,puVar21,uVar14 * 0x20 + local_828);
            pfVar5 = local_820;
            auVar28._8_56_ = extraout_var_00;
            if (local_7ac != '\0') {
              local_890 = CONCAT44(local_7e0,local_7e4);
              local_888 = local_7dc;
              fVar25 = local_7e4 - *local_820;
              auVar28 = ZEXT464((uint)fVar25);
              fVar32 = local_7e0 - local_820[1];
              auVar30 = ZEXT464((uint)fVar32);
              auVar31 = ZEXT464((uint)(local_7dc - local_820[2]));
              uVar14 = (ulonglong)(uint)(local_7dc - local_820[2]);
              fVar25 = fVar32 * fVar32 + fVar25 * fVar25;
              fVar32 = local_7e4;
              fVar33 = local_7e0;
              fVar34 = local_7dc;
              if (fVar25 == 0.0) {
                uVar26 = 0;
              }
              else if (fVar25 < 0.0) {
                uVar26 = FUN_18061e150(fVar25);
                uVar14 = auVar31._0_8_;
              }
              else {
                uVar26 = (ulonglong)(uint)SQRT(fVar25);
              }
              fVar25 = (float)FUN_180636c80(uVar14 ^ 0x8000000080000000,uVar26);
              fVar29 = fVar25 * 57.295776 - *param_6;
              fVar25 = (float)FUN_180636c80(auVar30._0_8_,auVar28._0_8_);
              for (fVar25 = fVar25 * 57.295776 - param_6[1]; fVar40 < fVar25;
                  fVar25 = fVar25 + -360.0) {
              }
              for (; fVar25 < fVar39; fVar25 = fVar25 + 360.0) {
              }
              fVar25 = fVar25 * fVar25 + fVar29 * fVar29;
              if (fVar25 < 0.0) {
                auVar30._0_8_ = FUN_18061e150();
                auVar30._8_56_ = extraout_var_01;
                auVar27 = auVar30._0_16_;
              }
              else {
                auVar27 = ZEXT416((uint)SQRT(fVar25));
              }
              auVar30 = ZEXT1664(auVar27);
              sVar8 = thunk_FUN_180624430(auVar27._0_8_);
              auVar28._8_56_ = extraout_var_02;
              auVar28._0_8_ = extraout_XMM0_Qa_00;
              if ((sVar8 < 1) && (auVar30._0_4_ <= local_878)) {
                if (*(char *)(lVar20 + 0x96) != '\0') {
                  cVar7 = FUN_180235e70(extraout_XMM0_Qa_00,pfVar5,&local_890);
                  auVar28._8_56_ = extraout_var_03;
                  auVar28._0_8_ = extraout_XMM0_Qa_01;
                  if (cVar7 != '\0') goto LAB_18023955f;
                }
                local_850 = 0;
                local_84c = 0xffffffffffffffff;
                local_844 = '\0';
                local_840 = 0;
                local_8b0 = *(undefined1 *)(lVar20 + 0x380);
                local_8c0 = *(undefined4 *)(param_8 + 0x20);
                local_8c8 = *(undefined8 *)(param_8 + 8);
                LOCK();
                DAT_180bbeef0 = DAT_180bbeef0 + 1;
                UNLOCK();
                local_8b8 = &local_850;
                cVar7 = FUN_18026ef40(&DAT_180cc9380,pfVar5,&local_890,local_478);
                auVar28._8_56_ = extraout_var_04;
                auVar28._0_8_ = extraout_XMM0_Qa_02;
                if (cVar7 != '\0') {
                  auVar31 = ZEXT464(local_850);
                  sVar8 = thunk_FUN_180624430(local_850);
                  auVar28._8_56_ = extraout_var_05;
                  auVar28._0_8_ = extraout_XMM0_Qa_03;
                  if (sVar8 < 1) {
                    if (local_844 != '\0') {
                      if (*(char *)(lVar20 + 0x380) == '\0') goto LAB_18023955f;
                      if (0 < local_874) {
                        cVar7 = FUN_1802342c0(auVar31._0_8_,local_874,local_8a0);
                        auVar28._8_56_ = extraout_var_06;
                        auVar28._0_8_ = extraout_XMM0_Qa_04;
                        if (cVar7 == '\0') goto LAB_18023955f;
                      }
                    }
                    uVar4 = (undefined4)local_84c;
                    switch((undefined4)local_84c) {
                    case 0:
                      iVar9 = 1;
                      break;
                    case 1:
                      iVar9 = 8;
                      break;
                    case 2:
                    case 3:
                      iVar9 = 3;
                      break;
                    case 4:
                    case 5:
                    case 6:
                      iVar9 = 2;
                      break;
                    case 7:
                    case 9:
                    case 0xb:
                      iVar9 = 7;
                      break;
                    case 8:
                    case 10:
                    case 0xc:
                      iVar9 = 6;
                      break;
                    case 0xd:
                    case 0xf:
                    case 0x10:
                      iVar9 = 5;
                      break;
                    case 0xe:
                    case 0x11:
                    case 0x12:
                      iVar9 = 4;
                      break;
                    default:
                      iVar9 = 0;
                    }
                    cVar7 = FUN_180240730(lVar20,iVar9,auVar31._0_8_,local_8a0);
                    auVar27 = _local_870;
                    auVar28._8_56_ = extraout_var_07;
                    auVar28._0_8_ = extraout_XMM0_Qa_05;
                    puVar21 = local_898;
                    if (cVar7 != '\0') {
                      fVar25 = auVar31._0_4_;
                      if (((!bVar23) || (1 < iVar9 - 2U)) ||
                         (auVar28 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),(float)local_8a0)),
                         fVar25 < (float)local_8a0)) {
                        cVar7 = '\0';
                      }
                      else {
                        cVar7 = '\x01';
                      }
                      iVar9 = local_8a4;
                      if (((local_8a4 == 3) && (!bVar24)) && (cVar7 == '\0')) goto LAB_18023956a;
                      fVar37 = auVar38._0_4_;
                      fVar29 = auVar30._0_4_;
                      fVar35 = auVar36._0_4_;
                      if (*(int *)(lVar20 + 0x8c) == 1) {
                        if (fVar25 <= fVar37) {
                          if (fVar25 == fVar37) {
                            bVar24 = fVar35 == fVar29;
                            bVar23 = fVar35 < fVar29;
                            goto LAB_180239437;
                          }
                          goto LAB_180239439;
                        }
LAB_18023943d:
                        cVar16 = '\x01';
                      }
                      else {
                        if (fVar29 < fVar35) goto LAB_18023943d;
                        if (fVar29 == fVar35) {
                          bVar24 = fVar25 == fVar37;
                          bVar23 = fVar25 < fVar37;
LAB_180239437:
                          if (!bVar23 && !bVar24) goto LAB_18023943d;
                        }
LAB_180239439:
                        cVar16 = '\0';
                      }
                      if ((char)uStack_85c != '\0') {
                        if (cVar7 != local_8a8) {
                          cVar16 = cVar7;
                        }
                        if (cVar16 == '\0') goto LAB_18023956a;
                      }
                      local_870._4_4_ = fVar33;
                      local_870._0_4_ = fVar32;
                      uStack_864 = auVar27._12_4_;
                      fStack_868 = fVar34;
                      auVar38 = ZEXT1664(auVar31._0_16_);
                      auVar36 = ZEXT1664(auVar30._0_16_);
                      local_8a8 = cVar7;
                      switch(uVar4) {
                      case 0:
                        uVar22 = 1;
                        uStack_85c = CONCAT31(uStack_85c._1_3_,1);
                        break;
                      case 1:
                        uVar22 = 8;
                        uStack_85c = CONCAT31(uStack_85c._1_3_,1);
                        break;
                      case 2:
                      case 3:
                        uVar22 = 3;
                        uStack_85c = CONCAT31(uStack_85c._1_3_,1);
                        break;
                      case 4:
                      case 5:
                      case 6:
                        uVar22 = 2;
                        uStack_85c = CONCAT31(uStack_85c._1_3_,1);
                        break;
                      case 7:
                      case 9:
                      case 0xb:
                        uVar22 = 7;
                        uStack_85c = CONCAT31(uStack_85c._1_3_,1);
                        break;
                      case 8:
                      case 10:
                      case 0xc:
                        uVar22 = 6;
                        uStack_85c = CONCAT31(uStack_85c._1_3_,1);
                        break;
                      case 0xd:
                      case 0xf:
                      case 0x10:
                        uVar22 = 5;
                        uStack_85c = CONCAT31(uStack_85c._1_3_,1);
                        break;
                      case 0xe:
                      case 0x11:
                      case 0x12:
                        uVar22 = 4;
                        uStack_85c = CONCAT31(uStack_85c._1_3_,1);
                        break;
                      default:
                        uVar22 = 0;
                        uStack_85c = CONCAT31(uStack_85c._1_3_,1);
                      }
                      goto LAB_18023956a;
                    }
                  }
                }
              }
            }
LAB_18023955f:
            iVar9 = local_8a4;
          }
LAB_18023956a:
          local_898 = puVar21 + 5;
        } while (local_898 != local_838);
        local_860 = auVar36._0_4_;
        uStack_864 = auVar38._0_4_;
        param_2 = local_818;
      }
      *param_2 = _local_870;
      *(ulonglong *)param_2[1] = CONCAT44(uStack_85c,local_860);
      *(undefined4 *)(param_2[1] + 8) = uVar22;
    }
    else {
      *(undefined8 *)*param_2 = 0;
      *(undefined8 *)(*param_2 + 8) = 0;
      *(undefined4 *)param_2[1] = 0;
      param_2[1][4] = 0;
      *(undefined4 *)(param_2[1] + 8) = 0;
    }
  }
}



