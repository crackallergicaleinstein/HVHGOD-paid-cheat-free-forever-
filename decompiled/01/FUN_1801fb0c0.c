// FUN_1801fb0c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801fb0c0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801fb0c0(void)

{
  uint uVar1;
  ushort uVar2;
  ushort uVar3;
  short sVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  bool bVar10;
  char cVar11;
  char cVar12;
  ULONGLONG UVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong lVar16;
  int iVar17;
  ulonglong uVar18;
  undefined *puVar19;
  int iVar20;
  short *psVar21;
  ulonglong uVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  ulonglong uVar27;
  ulonglong extraout_XMM0_Qa;
  ulonglong extraout_XMM0_Qa_00;
  ulonglong extraout_XMM0_Qa_01;
  ulonglong extraout_XMM0_Qa_02;
  ulonglong extraout_XMM0_Qa_03;
  ulonglong extraout_XMM0_Qa_04;
  ulonglong extraout_XMM0_Qa_05;
  uint uVar28;
  undefined4 uVar31;
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  undefined1 auStack_118 [32];
  short *local_f8;
  longlong *local_f0;
  longlong *local_d8;
  undefined *local_d0;
  int local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  uint local_b0;
  undefined1 local_a8 [16];
  ulonglong uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *plStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_118;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_a8._8_8_ = uRam0000000180bb8898;
  local_a8._0_8_ = _DAT_180bb8890;
  uStack_98 = uRam0000000180bb88a0;
  uStack_90 = uRam0000000180bb88a8;
  iVar17 = _DAT_180bb88b0;
  uVar31 = uRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if ((char)uVar31 == '\0') {
LAB_1801fc05f:
    local_a8._0_8_ = local_a8._2_8_ << 0x10;
    _DAT_180c70ec0 = local_a8._0_8_;
    local_a8._5_11_ = SUB1611((undefined1  [16])0x0,5);
    auVar8[0xb] = 0;
    auVar8._0_11_ = local_a8._5_11_;
    local_a8._0_12_ = auVar8 << 0x28;
    local_a8._13_3_ = SUB163((undefined1  [16])0x0,0xd);
    local_a8[0xc] = 0;
    auVar6._12_4_ = 0;
    auVar6._0_12_ = local_a8._4_12_;
    _DAT_180c70ee0 = vinsertps_avx(auVar6 << 0x20,ZEXT816(0),0x20);
    _DAT_180c70f00 = 0;
    DAT_180c70ef8 = (undefined *)0x0;
    _DAT_180c70ef0 = 0;
    _DAT_180c70ed8 = 0;
    _DAT_180c70ed0 = 0;
    DAT_180c70ec8 = 0;
  }
  puVar23 = (undefined *)local_a8._8_8_;
  local_c0 = (undefined *)local_a8._8_8_;
  if (((undefined *)local_a8._8_8_ == (undefined *)0x0) || (local_a8._0_8_ == 0))
  goto LAB_1801fc05f;
  if (DAT_180bb88c9 != '\0') {
  }
  if (1 < iVar17 - 2U) {
  }
  uVar18 = 0;
  auVar8 = ZEXT812(0);
  auVar7._12_4_ = 0;
  auVar7._0_12_ = auVar8;
  auVar29._12_4_ = 0;
  auVar29._0_12_ = auVar8;
  auVar29 = auVar29 << 0x20;
  if (DAT_180c70ef8 != (undefined *)local_a8._8_8_) {
    local_a8._0_8_ = local_a8._2_8_ << 0x10;
    uStack_90 = 0;
    _DAT_180c70ec0 = local_a8._0_8_;
    DAT_180c70ec8 = 0;
    _DAT_180c70ed0 = 0;
    _DAT_180c70ed8 = 0;
    local_a8._5_11_ = SUB1611((undefined1  [16])0x0,5);
    auVar9[0xb] = 0;
    auVar9._0_11_ = local_a8._5_11_;
    local_a8._0_12_ = auVar9 << 0x28;
    local_a8._13_3_ = SUB163((undefined1  [16])0x0,0xd);
    local_a8[0xc] = 0;
    auVar5._12_4_ = 0;
    auVar5._0_12_ = local_a8._4_12_;
    _DAT_180c70ee0 = vinsertps_avx(auVar5 << 0x20,auVar7 << 0x20,0x20);
    uStack_98 = 0;
    _DAT_180c70ef0 = 0;
    _DAT_180c70f00 = 0;
    DAT_180c70ef8 = puVar23;
    local_a8 = _DAT_180c70ee0;
  }
  iVar20 = DAT_180c6356c;
  local_c8 = iVar17;
  if (DAT_180c6356c == 0) {
    auVar30 = ZEXT1264(auVar8) << 0x20;
    UVar13 = GetTickCount64();
    auVar29 = auVar30._0_16_;
    if (UVar13 < DAT_180c63570) {
      iVar20 = 0;
    }
    else {
      local_d0 = &DAT_1808e85f0;
      iVar17 = FUN_1805f68d0(&DAT_1808e85f0);
      if (iVar17 != 0) goto LAB_1801fc106;
      if (DAT_1808e863c == 0x7fffffff) {
        DAT_1808e863c = 0x7ffffffe;
        goto LAB_1801fc11b;
      }
      if ((DAT_180c6356c == 0) && (DAT_180c63570 <= UVar13)) {
        DAT_180c6356c = FUN_1804174b0("C_CSPlayerPawn",0x58dee8e2);
        if (DAT_180c6356c == 0) {
          DAT_180c63570 = UVar13 + 1000;
        }
        else {
          DAT_180c63570 = 0xffffffffffffffff;
        }
      }
      iVar20 = DAT_180c6356c;
      FUN_1805f68fc(&DAT_1808e85f0);
      auVar29 = auVar30._0_16_;
    }
  }
  iVar17 = local_c8;
  puVar24 = (undefined *)((undefined8)puVar23 + iVar20);
  local_d0 = puVar24;
  if (DAT_180bbeb00 != puVar23) {
    if (DAT_180c70f01 != '\0') {
      auVar30 = ZEXT1664(auVar29);
      FUN_1801fd260();
      auVar29 = auVar30._0_16_;
      if (DAT_180c70edf != '\0') {
      }
      _DAT_180c70f00 = _DAT_180c70f00 & 0xff;
    }
    auVar30 = ZEXT1664(auVar29);
    cVar11 = FUN_180221ad0();
    if (cVar11 == '\0') {
    }
    local_88 = 0;
    plStack_80 = (longlong *)0x0;
    uStack_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    auVar30 = ZEXT1664(auVar30._0_16_);
    uVar27 = FUN_180221e30();
    plVar15 = (longlong *)*plStack_80;
    if (plVar15 != plStack_80) {
      do {
        local_d8 = plVar15 + 3;
        uVar2 = *(ushort *)(plVar15 + 2);
        uVar22 = ((ulonglong)(uVar2 >> 8) ^
                 ((ulonglong)uVar2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 &
                 DAT_180cc9cb8;
        lVar14 = *(longlong *)(DAT_180cc9ca0 + 8 + uVar22 * 0x10);
        if (lVar14 == DAT_180cc9c90) {
LAB_1801fbc31:
          lVar14 = 0;
        }
        else {
          uVar3 = *(ushort *)(lVar14 + 0x10);
          while (uVar2 != uVar3) {
            if (lVar14 == *(longlong *)(DAT_180cc9ca0 + uVar22 * 0x10)) goto LAB_1801fbc31;
            lVar14 = *(longlong *)(lVar14 + 8);
            uVar3 = *(ushort *)(lVar14 + 0x10);
          }
        }
        lVar16 = DAT_180cc9c90;
        if (lVar14 != 0) {
          lVar16 = lVar14;
        }
        if (((lVar16 != DAT_180cc9c90) &&
            (psVar21 = (short *)(*(longlong *)(lVar16 + 0x18) * 0xb8 + DAT_180cc9bf8),
            psVar21 != (short *)0x0)) && ((char)psVar21[0x58] == '\x02')) {
          if (DAT_180c70edf == '\0') {
            cVar11 = FUN_1801fc150(lVar14,puVar24);
            uVar27 = extraout_XMM0_Qa;
            if (cVar11 == '\0') goto LAB_1801fbc8e;
          }
          iVar17 = DAT_180c6350c;
          if (DAT_180c6350c == 0) {
            UVar13 = GetTickCount64();
            if (UVar13 < DAT_180c63510) {
              iVar17 = 0;
              uVar27 = extraout_XMM0_Qa_00;
            }
            else {
              local_b8 = &DAT_1808e8370;
              iVar17 = FUN_1805f68d0(&DAT_1808e8370);
              if (iVar17 != 0) goto LAB_1801fc13b;
              if (DAT_1808e83bc == 0x7fffffff) {
                DAT_1808e83bc = 0x7ffffffe;
                goto LAB_1801fc130;
              }
              if ((DAT_180c6350c == 0) && (DAT_180c63510 <= UVar13)) {
                DAT_180c6350c = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
                if (DAT_180c6350c == 0) {
                  DAT_180c63510 = UVar13 + 1000;
                }
                else {
                  DAT_180c63510 = 0xffffffffffffffff;
                }
              }
              iVar17 = DAT_180c6350c;
              uVar27 = FUN_1805f68fc(&DAT_1808e8370);
            }
          }
          sVar4 = *(short *)(puVar24 + iVar17);
          iVar17 = DAT_180c63508;
          if (DAT_180c63508 == 0) {
            UVar13 = GetTickCount64();
            if (UVar13 < DAT_180c63500) {
              iVar17 = 0;
              uVar27 = extraout_XMM0_Qa_01;
            }
            else {
              local_b8 = &DAT_1808e8320;
              iVar17 = FUN_1805f68d0(&DAT_1808e8320);
              if (iVar17 != 0) goto LAB_1801fc13b;
              if (DAT_1808e836c == 0x7fffffff) {
                DAT_1808e836c = 0x7ffffffe;
                goto LAB_1801fc130;
              }
              if ((DAT_180c63508 == 0) && (DAT_180c63500 <= UVar13)) {
                DAT_180c63508 = FUN_1804174b0("C_EconItemView",0x34b55816);
                if (DAT_180c63508 == 0) {
                  DAT_180c63500 = UVar13 + 1000;
                }
                else {
                  DAT_180c63500 = 0xffffffffffffffff;
                }
              }
              iVar17 = DAT_180c63508;
              uVar27 = FUN_1805f68fc(&DAT_1808e8320);
            }
          }
          lVar14 = *(longlong *)(local_d0 + iVar17);
          iVar17 = DAT_180c634f4;
          if (DAT_180c634f4 == 0) {
            UVar13 = GetTickCount64();
            if (UVar13 < DAT_180c634f8) {
              iVar17 = 0;
              uVar27 = extraout_XMM0_Qa_02;
            }
            else {
              local_b8 = &DAT_1808e82d0;
              iVar17 = FUN_1805f68d0(&DAT_1808e82d0);
              if (iVar17 != 0) goto LAB_1801fc13b;
              if (DAT_1808e831c == 0x7fffffff) {
                DAT_1808e831c = 0x7ffffffe;
                goto LAB_1801fc130;
              }
              if ((DAT_180c634f4 == 0) && (DAT_180c634f8 <= UVar13)) {
                DAT_180c634f4 = FUN_1804174b0("C_CSPlayerPawn",0x22bae6fd);
                if (DAT_180c634f4 == 0) {
                  DAT_180c634f8 = UVar13 + 1000;
                }
                else {
                  DAT_180c634f8 = 0xffffffffffffffff;
                }
              }
              iVar17 = DAT_180c634f4;
              uVar27 = FUN_1805f68fc(&DAT_1808e82d0);
            }
          }
          plVar15 = local_d8;
          cVar11 = local_c0[iVar17];
          if (sVar4 != *psVar21) {
            puVar23 = local_d0;
            goto LAB_1801fbfa4;
          }
          lVar16 = FUN_180221c10(uVar27,*psVar21,local_c8);
          puVar23 = local_d0;
          uVar27 = extraout_XMM0_Qa_03;
          if (lVar14 != lVar16) goto LAB_1801fbfa4;
          uVar28 = auVar30._0_4_;
          local_a8._5_11_ = SUB1611((undefined1  [16])0x0,5);
          local_a8[4] = 0;
          local_a8._0_4_ = uVar28;
          local_a8._8_4_ = uVar28;
          local_a8._13_3_ = SUB163((undefined1  [16])0x0,0xd);
          local_a8[0xc] = 0;
          uStack_98 = (ulonglong)uVar28;
          cVar12 = FUN_1801fc770(0,local_d0,local_a8);
          uVar27 = extraout_XMM0_Qa_04;
          if (cVar12 == '\0') goto LAB_1801fbfa4;
          local_b8 = (undefined *)CONCAT44((float)(int)plVar15[1],(float)(int)*plVar15);
          uVar28 = *(uint *)((longlong)plVar15 + 4);
          local_b0 = uVar28;
          goto LAB_1801fbf67;
        }
        plVar15 = (longlong *)*plVar15;
      } while (plVar15 != plStack_80);
      puVar23 = local_c0;
      iVar17 = local_c8;
    }
    if (DAT_180c70f00 != '\0') {
      FUN_1801fd260(uVar27,puVar23,puVar24,iVar17);
    }
    goto LAB_1801fbc8e;
  }
  if ((DAT_180c70edf == '\0') && (cVar11 = FUN_1801fc150(), cVar11 == '\0')) {
  }
  iVar17 = DAT_180c63568;
  if (DAT_180c63568 == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c63560) {
      iVar17 = 0;
    }
    else {
      local_d0 = &DAT_1808e85a0;
      iVar17 = FUN_1805f68d0(&DAT_1808e85a0);
      if (iVar17 != 0) goto LAB_1801fc106;
      if (DAT_1808e85ec == 0x7fffffff) {
        DAT_1808e85ec = 0x7ffffffe;
        goto LAB_1801fc11b;
      }
      if ((DAT_180c63568 == 0) && (DAT_180c63560 <= UVar13)) {
        DAT_180c63568 = FUN_1804174b0("C_EconItemView",0xa2ccb41a);
        if (DAT_180c63568 == 0) {
          DAT_180c63560 = UVar13 + 1000;
        }
        else {
          DAT_180c63560 = 0xffffffffffffffff;
        }
      }
      iVar17 = DAT_180c63568;
      FUN_1805f68fc(&DAT_1808e85a0);
    }
  }
  puVar23 = puVar24 + iVar17;
  iVar17 = DAT_180c63554;
  if (DAT_180c63554 == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c63558) {
      iVar17 = 0;
    }
    else {
      local_d0 = &DAT_1808e8550;
      iVar17 = FUN_1805f68d0(&DAT_1808e8550);
      if (iVar17 != 0) goto LAB_1801fc106;
      if (DAT_1808e859c == 0x7fffffff) {
        DAT_1808e859c = 0x7ffffffe;
        goto LAB_1801fc11b;
      }
      if ((DAT_180c63554 == 0) && (DAT_180c63558 <= UVar13)) {
        DAT_180c63554 = FUN_1804174b0("C_EconItemView",0x34b55816);
        if (DAT_180c63554 == 0) {
          DAT_180c63558 = UVar13 + 1000;
        }
        else {
          DAT_180c63558 = 0xffffffffffffffff;
        }
      }
      iVar17 = DAT_180c63554;
      FUN_1805f68fc(&DAT_1808e8550);
    }
  }
  puVar26 = puVar24 + iVar17;
  iVar17 = DAT_180c63550;
  if (DAT_180c63550 == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c63548) {
      iVar17 = 0;
    }
    else {
      local_d0 = &DAT_1808e8500;
      iVar17 = FUN_1805f68d0(&DAT_1808e8500);
      if (iVar17 != 0) goto LAB_1801fc106;
      if (DAT_1808e854c == 0x7fffffff) {
        DAT_1808e854c = 0x7ffffffe;
        goto LAB_1801fc11b;
      }
      if ((DAT_180c63550 == 0) && (DAT_180c63548 <= UVar13)) {
        DAT_180c63550 = FUN_1804174b0("C_EconItemView",0x216db5e3);
        if (DAT_180c63550 == 0) {
          DAT_180c63548 = UVar13 + 1000;
        }
        else {
          DAT_180c63548 = 0xffffffffffffffff;
        }
      }
      iVar17 = DAT_180c63550;
      FUN_1805f68fc(&DAT_1808e8500);
    }
  }
  puVar25 = puVar24 + iVar17;
  lVar14 = FUN_18017ea70();
  *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
  if (puVar23 == (undefined *)0x0) {
    bVar10 = false;
  }
  else {
    local_d8 = (longlong *)((ulonglong)local_d8 & 0xffffffffffff0000);
    cVar11 = FUN_1804514f0(&local_d8,puVar23,2);
    if (cVar11 == '\0') {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
  }
  sVar4 = (short)local_d8;
  lVar14 = FUN_18017ea70();
  if (*(int *)(lVar14 + 4) != 0) {
    *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
  }
  if ((!bVar10) || (sVar4 == 0)) {
    lVar14 = FUN_18017ea70();
    *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
    if (puVar26 == (undefined *)0x0) {
      bVar10 = false;
      puVar19 = local_c0;
    }
    else {
      local_d0 = (undefined *)0x0;
      cVar11 = FUN_1804514f0(&local_d0,puVar26,8);
      if (cVar11 == '\0') {
        bVar10 = false;
        puVar19 = local_c0;
      }
      else {
        bVar10 = true;
        puVar19 = local_d0;
      }
    }
    lVar14 = FUN_18017ea70();
    if (*(int *)(lVar14 + 4) != 0) {
      *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
    }
    if ((!bVar10) || (puVar19 == (undefined *)0x0)) {
      lVar14 = FUN_18017ea70();
      *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
      if (puVar25 == (undefined *)0x0) {
        bVar10 = false;
      }
      else {
        local_d8 = (longlong *)((ulonglong)local_d8 & 0xffffffffffffff00);
        cVar11 = FUN_1804514f0(&local_d8,puVar25,1);
        if (cVar11 == '\0') {
          bVar10 = false;
        }
        else {
          bVar10 = true;
        }
      }
      cVar11 = (char)local_d8;
      lVar14 = FUN_18017ea70();
      if (*(int *)(lVar14 + 4) != 0) {
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
      }
      if ((bVar10) && (cVar11 != '\0')) goto LAB_1801fbb2e;
    }
  }
  cVar11 = FUN_1802239e0(puVar24);
  if (cVar11 == '\0') {
  }
  local_d8 = (longlong *)CONCAT71(local_d8._1_7_,1);
  cVar11 = FUN_1804513c0(puVar25,1,1);
  if (cVar11 == '\0') {
  }
  lVar14 = FUN_18017ea70();
  *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
  cVar11 = FUN_1801ad7b0(puVar25,&local_d8);
  lVar14 = FUN_18017ea70();
  if (*(int *)(lVar14 + 4) != 0) {
    *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
  }
  if (cVar11 == '\0') {
  }
  local_d8 = (longlong *)((ulonglong)local_d8 & 0xffffffffffff0000);
  cVar11 = FUN_1804513c0(puVar23,2,1);
  if (cVar11 == '\0') {
  }
  lVar14 = FUN_18017ea70();
  *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
  cVar11 = FUN_1801aec90(puVar23,&local_d8);
  lVar14 = FUN_18017ea70();
  if (*(int *)(lVar14 + 4) != 0) {
    *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
  }
  if (cVar11 == '\0') {
  }
  local_d0 = (undefined *)0x0;
  cVar11 = FUN_1804513c0(puVar26,8,1);
  if (cVar11 == '\0') {
  }
  lVar14 = FUN_18017ea70();
  *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
  cVar11 = FUN_1801fde60(puVar26,&local_d0);
  lVar14 = FUN_18017ea70();
  if (*(int *)(lVar14 + 4) != 0) {
    *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
  }
  if (cVar11 == '\0') {
  }
  local_d8 = (longlong *)((ulonglong)local_d8 & 0xffffffff00000000);
  iVar17 = DAT_180c6353c;
  if (DAT_180c6353c == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c63540) {
      iVar17 = 0;
    }
    else {
      local_d0 = &DAT_1808e84b0;
      iVar17 = FUN_1805f68d0(&DAT_1808e84b0);
      if (iVar17 != 0) goto LAB_1801fc106;
      if (DAT_1808e84fc == 0x7fffffff) {
        DAT_1808e84fc = 0x7ffffffe;
        goto LAB_1801fc11b;
      }
      if ((DAT_180c6353c == 0) && (DAT_180c63540 <= UVar13)) {
        DAT_180c6353c = FUN_1804174b0("C_EconItemView",0x373ee446);
        if (DAT_180c6353c == 0) {
          DAT_180c63540 = UVar13 + 1000;
        }
        else {
          DAT_180c63540 = 0xffffffffffffffff;
        }
      }
      iVar17 = DAT_180c6353c;
      FUN_1805f68fc(&DAT_1808e84b0);
    }
  }
  cVar11 = FUN_1804513c0(puVar24 + iVar17,4,1);
  if (cVar11 == '\0') {
  }
  lVar14 = FUN_18017ea70();
  *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
  cVar11 = FUN_1801ad800(puVar24 + iVar17,&local_d8);
  lVar14 = FUN_18017ea70();
  if (*(int *)(lVar14 + 4) != 0) {
    *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
  }
  if (cVar11 == '\0') {
  }
  local_d8 = (longlong *)((ulonglong)local_d8 & 0xffffffff00000000);
  iVar17 = DAT_180c63538;
  if (DAT_180c63538 == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c63530) {
      iVar17 = 0;
    }
    else {
      local_d0 = &DAT_1808e8460;
      iVar17 = FUN_1805f68d0(&DAT_1808e8460);
      if (iVar17 != 0) goto LAB_1801fc106;
      if (DAT_1808e84ac == 0x7fffffff) {
        DAT_1808e84ac = 0x7ffffffe;
        goto LAB_1801fc11b;
      }
      if ((DAT_180c63538 == 0) && (DAT_180c63530 <= UVar13)) {
        DAT_180c63538 = FUN_1804174b0("C_EconItemView",0xdf29c2c);
        if (DAT_180c63538 == 0) {
          DAT_180c63530 = UVar13 + 1000;
        }
        else {
          DAT_180c63530 = 0xffffffffffffffff;
        }
      }
      iVar17 = DAT_180c63538;
      FUN_1805f68fc(&DAT_1808e8460);
    }
  }
  cVar11 = FUN_1804513c0(puVar24 + iVar17,4,1);
  if (cVar11 == '\0') {
  }
  lVar14 = FUN_18017ea70();
  *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
  cVar11 = FUN_1801ad800(puVar24 + iVar17,&local_d8);
  lVar14 = FUN_18017ea70();
  if (*(int *)(lVar14 + 4) != 0) {
    *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
  }
  if (cVar11 == '\0') {
  }
  local_d8 = (longlong *)((ulonglong)local_d8 & 0xffffffffffffff00);
  iVar17 = DAT_180c63524;
  if (DAT_180c63524 == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c63528) {
      iVar17 = 0;
    }
    else {
      local_d0 = &DAT_1808e8410;
      iVar17 = FUN_1805f68d0(&DAT_1808e8410);
      if (iVar17 != 0) goto LAB_1801fc106;
      if (DAT_1808e845c == 0x7fffffff) {
        DAT_1808e845c = 0x7ffffffe;
        goto LAB_1801fc11b;
      }
      if ((DAT_180c63524 == 0) && (DAT_180c63528 <= UVar13)) {
        DAT_180c63524 = FUN_1804174b0("C_EconItemView",0x33e8ae5a);
        if (DAT_180c63524 == 0) {
          DAT_180c63528 = UVar13 + 1000;
        }
        else {
          DAT_180c63528 = 0xffffffffffffffff;
        }
      }
      iVar17 = DAT_180c63524;
      FUN_1805f68fc(&DAT_1808e8410);
    }
  }
  cVar11 = FUN_1804513c0(puVar24 + iVar17,1,1);
  if (cVar11 == '\0') {
  }
  lVar14 = FUN_18017ea70();
  *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
  cVar11 = FUN_1801ad7b0(puVar24 + iVar17,&local_d8);
  lVar14 = FUN_18017ea70();
  if (*(int *)(lVar14 + 4) != 0) {
    *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
  }
  if (cVar11 == '\0') {
  }
  local_d8 = (longlong *)CONCAT71(local_d8._1_7_,1);
  iVar17 = DAT_180c63520;
  if (DAT_180c63520 == 0) {
    UVar13 = GetTickCount64();
    if (UVar13 < DAT_180c63518) {
      iVar17 = 0;
    }
    else {
      local_d0 = &DAT_1808e83c0;
      iVar17 = FUN_1805f68d0(&DAT_1808e83c0);
      if (iVar17 != 0) {
LAB_1801fc106:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(5);
      }
      if (DAT_1808e840c == 0x7fffffff) {
        DAT_1808e840c = 0x7ffffffe;
LAB_1801fc11b:
                    /* WARNING: Subroutine does not return */
        FUN_1805f6d44(6);
      }
      if ((DAT_180c63520 == 0) && (DAT_180c63518 <= UVar13)) {
        DAT_180c63520 = FUN_1804174b0("C_EconItemView",0x710abdd);
        DAT_180c63518 = 0xffffffffffffffff;
        if (DAT_180c63520 == 0) {
          DAT_180c63518 = UVar13 + 1000;
        }
      }
      iVar17 = DAT_180c63520;
      FUN_1805f68fc(&DAT_1808e83c0);
    }
  }
  cVar11 = FUN_1804513c0(puVar24 + iVar17,1,1);
  if (cVar11 == '\0') {
  }
  lVar14 = FUN_18017ea70();
  *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + 1;
  cVar11 = FUN_1801ad7b0(puVar24 + iVar17,&local_d8);
  lVar14 = FUN_18017ea70();
  iVar17 = *(int *)(lVar14 + 4);
  if (iVar17 != 0) {
    iVar17 = iVar17 + -1;
    *(int *)(lVar14 + 4) = iVar17;
  }
  if (cVar11 == '\0') {
  }
  FUN_1801fd970(iVar17,local_c0,puVar24,local_c8);
LAB_1801fbb2e:
  _DAT_180c70f00 = CONCAT11(1,DAT_180c70f00);
  while( true ) {
    uVar28 = *(uint *)(local_a8 + uVar18 * 8);
    uVar27 = (ulonglong)uVar28;
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,uVar28);
    uVar1 = *(uint *)((longlong)&local_b8 + uVar18 * 4);
    local_d8 = (longlong *)CONCAT44(local_d8._4_4_,uVar1);
    if (uVar28 != uVar1) goto LAB_1801fbfa4;
    uVar18 = uVar18 + 1;
    if (2 < uVar18) break;
LAB_1801fbf67:
    uVar27 = (ulonglong)uVar28;
    if (local_a8[uVar18 * 8 + 4] == '\0') goto LAB_1801fbfa4;
  }
  if (cVar11 != '\0') {
LAB_1801fbfa4:
    if (DAT_180c634f0 == 0) {
      UVar13 = GetTickCount64();
      uVar27 = extraout_XMM0_Qa_05;
      if (DAT_180c634e8 <= UVar13) {
        local_b8 = &DAT_1808e8280;
        iVar17 = FUN_1805f68d0(&DAT_1808e8280);
        if (iVar17 != 0) {
LAB_1801fc13b:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_1808e82cc == 0x7fffffff) {
          DAT_1808e82cc = 0x7ffffffe;
LAB_1801fc130:
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        if ((DAT_180c634f0 == 0) && (DAT_180c634e8 <= UVar13)) {
          DAT_180c634f0 = FUN_1804174b0("CBasePlayerController",0xb22f805e);
          DAT_180c634e8 = 0xffffffffffffffff;
          if (DAT_180c634f0 == 0) {
            DAT_180c634e8 = UVar13 + 1000;
          }
        }
        uVar27 = FUN_1805f68fc(&DAT_1808e8280);
      }
    }
    local_f0 = plVar15;
    local_f8 = psVar21;
    FUN_1801fcc70(uVar27,local_c0,puVar23,local_c8);
  }
LAB_1801fbc8e:
  FUN_1800cf8e0(&local_88);
}



