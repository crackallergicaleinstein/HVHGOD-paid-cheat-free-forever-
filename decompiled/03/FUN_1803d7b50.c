// FUN_1803d7b50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1803d7b50 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1803d7b50(undefined8 param_1,undefined *param_2,undefined *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ULONGLONG UVar7;
  ULONGLONG UVar8;
  ULONGLONG UVar9;
  ULONGLONG UVar10;
  ULONGLONG UVar11;
  ULONGLONG UVar12;
  ULONGLONG UVar13;
  undefined1 auVar14 [32];
  byte bVar15;
  undefined1 auVar16 [32];
  undefined1 auVar17 [32];
  undefined1 auVar18 [32];
  char cVar19;
  short sVar20;
  int iVar21;
  uint uVar22;
  ULONGLONG UVar23;
  longlong lVar24;
  undefined8 *puVar25;
  ULONGLONG *pUVar26;
  ULONGLONG *pUVar27;
  undefined1 (*pauVar28) [32];
  undefined *puVar29;
  ulonglong uVar30;
  float *pfVar31;
  undefined *puVar32;
  uint uVar33;
  undefined *puVar34;
  char *pcVar35;
  undefined4 uVar36;
  undefined8 *puVar37;
  float fVar38;
  float fVar39;
  undefined *puVar40;
  undefined *puVar41;
  char *pcVar42;
  bool bVar43;
  undefined8 uVar44;
  float fVar45;
  undefined4 uVar46;
  float fVar47;
  undefined1 auVar48 [64];
  float fVar49;
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [64];
  undefined1 auVar57 [64];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [64];
  undefined1 auStack_d68 [32];
  undefined **local_d48;
  undefined **local_d40;
  undefined8 *local_d38;
  uint local_d30;
  uint local_d28;
  undefined *local_d20;
  undefined *local_d18;
  double local_d10;
  double local_d08;
  double local_d00;
  double local_cf8;
  double local_cf0;
  double local_ce8;
  double local_ce0;
  double local_cd8;
  double local_cd0;
  double local_cc8;
  double local_cc0;
  double local_cb8;
  char *local_cb0;
  char *local_ca8;
  undefined4 local_ca0;
  uint local_c98;
  double local_c90;
  double local_c88;
  double local_c80;
  char *local_c78;
  byte local_c68;
  float local_c64;
  byte local_c60;
  byte local_c5f;
  float local_c5c;
  undefined *local_c58;
  undefined *local_c50;
  undefined8 local_c48;
  float local_c40;
  uint local_c3c;
  byte local_c38;
  undefined *local_c30;
  undefined8 local_c28;
  undefined *local_c20;
  undefined *local_c18;
  undefined *local_c08;
  undefined *puStack_c00;
  undefined8 uStack_bf8;
  undefined8 uStack_bf0;
  undefined1 local_be8 [16];
  undefined8 uStack_bd8;
  undefined8 uStack_bd0;
  ULONGLONG local_bc8;
  undefined8 uStack_bc0;
  undefined1 auStack_bb8 [16];
  ULONGLONG UStack_ba8;
  ULONGLONG UStack_ba0;
  undefined1 auStack_b98 [16];
  ULONGLONG UStack_b88;
  ULONGLONG UStack_b80;
  ulonglong local_b78;
  ULONGLONG local_b68;
  undefined *puStack_b60;
  ULONGLONG UStack_b58;
  ULONGLONG UStack_b50;
  undefined8 local_b48;
  ULONGLONG UStack_b40;
  undefined1 local_b30;
  undefined1 local_b28 [12];
  char cStack_b1c;
  undefined8 uStack_b18;
  undefined8 uStack_b10;
  undefined4 uStack_b08;
  undefined4 uStack_b04;
  undefined4 uStack_b00;
  undefined4 uStack_afc;
  undefined8 local_af8;
  char local_af0;
  ULONGLONG local_ae8;
  undefined8 uStack_ae0;
  ULONGLONG UStack_ad8;
  ULONGLONG UStack_ad0;
  undefined *local_ac8;
  undefined *puStack_ac0;
  undefined8 uStack_ab8;
  undefined8 uStack_ab0;
  undefined8 local_aa8;
  undefined8 uStack_aa0;
  undefined8 uStack_a98;
  undefined8 uStack_a90;
  ULONGLONG local_a88 [100];
  int local_768;
  undefined8 local_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 local_738;
  undefined8 uStack_730;
  uint local_728;
  ULONGLONG local_720;
  undefined *puStack_718;
  ULONGLONG UStack_710;
  ULONGLONG UStack_708;
  ULONGLONG local_700;
  ULONGLONG UStack_6f8;
  undefined1 local_6f0;
  undefined *local_6e8;
  undefined *puStack_6e0;
  undefined8 uStack_6d8;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 uStack_6c8;
  undefined4 uStack_6c4;
  uint uStack_6c0;
  uint uStack_6bc;
  undefined1 auStack_6b8 [16];
  ULONGLONG local_6a8;
  undefined1 uStack_6a0;
  undefined1 uStack_69f;
  undefined1 uStack_69e;
  undefined1 uStack_69d;
  undefined1 uStack_69c;
  undefined1 uStack_69b;
  undefined1 uStack_69a;
  undefined1 uStack_699;
  undefined1 auStack_698 [32];
  undefined1 auStack_678 [32];
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined8 uStack_650;
  undefined8 local_648;
  undefined8 uStack_640;
  undefined4 local_638;
  uint uStack_634;
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_d68;
  local_c30 = param_3;
  local_c18 = param_2;
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_ae8 = _DAT_180bb8890;
  uStack_ae0 = puRam0000000180bb8898;
  UStack_ad8 = URam0000000180bb88a0;
  UStack_ad0 = URam0000000180bb88a8;
  cVar19 = cRam0000000180bb88b8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  if (param_2 == (undefined *)0x0) {
  }
  local_c20 = uStack_ae0;
  if (uStack_ae0 != param_2) {
  }
  if (cVar19 == '\0') {
  }
  if (param_3 == (undefined *)0x0) {
  }
  if (DAT_180b0d2d0 == '\0') {
  }
  if (DAT_180b0cc88 == '\0') {
  }
  iVar21 = FUN_1805f68d0(&DAT_180b8e2e0);
  if (iVar21 != 0) goto LAB_1803d92ea;
  if (DAT_180b8e32c != 0x7fffffff) {
    local_c60 = DAT_180b8e2dc;
    FUN_1805f68fc(&DAT_180b8e2e0);
    iVar21 = DAT_180c71f18;
    if (DAT_180c71f18 == 0) {
      UVar23 = GetTickCount64();
      if (UVar23 < DAT_180c71f10) {
        iVar21 = 0;
      }
      else {
        local_c48 = &DAT_1809ba600;
        iVar21 = FUN_1805f68d0(&DAT_1809ba600);
        if (iVar21 != 0) goto LAB_1803d92ea;
        if (DAT_1809ba64c == 0x7fffffff) {
          DAT_1809ba64c = 0x7ffffffe;
          goto LAB_1803d9332;
        }
        if ((DAT_180c71f18 == 0) && (DAT_180c71f10 <= UVar23)) {
          DAT_180c71f18 = FUN_1804174b0("C_BaseEntity",0x9d930423);
          if (DAT_180c71f18 == 0) {
            DAT_180c71f10 = UVar23 + 1000;
          }
          else {
            DAT_180c71f10 = 0xffffffffffffffff;
          }
        }
        iVar21 = DAT_180c71f18;
        FUN_1805f68fc(&DAT_1809ba600);
      }
    }
    lVar24 = FUN_18017ea70();
    *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + 1;
    if (param_2 + iVar21 == (undefined *)0x0) {
      bVar43 = false;
      puVar32 = local_c30;
    }
    else {
      local_c58 = (undefined *)0x0;
      cVar19 = FUN_1804514f0(&local_c58,param_2 + iVar21,8);
      if (cVar19 == '\0') {
        bVar43 = false;
        puVar32 = local_c30;
      }
      else {
        bVar43 = true;
        puVar32 = local_c58;
      }
    }
    lVar24 = FUN_18017ea70();
    if (*(int *)(lVar24 + 4) != 0) {
      *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + -1;
    }
    if (!bVar43) {
    }
    if (puVar32 == (undefined *)0x0) {
    }
    iVar21 = DAT_180c71f1c;
    if (DAT_180c71f1c == 0) {
      UVar23 = GetTickCount64();
      if (UVar23 < DAT_180c71f20) {
        iVar21 = 0;
      }
      else {
        local_c48 = &DAT_1809ba650;
        iVar21 = FUN_1805f68d0(&DAT_1809ba650);
        if (iVar21 != 0) goto LAB_1803d92ea;
        if (DAT_1809ba69c == 0x7fffffff) {
          DAT_1809ba69c = 0x7ffffffe;
          goto LAB_1803d9332;
        }
        if ((DAT_180c71f1c == 0) && (DAT_180c71f20 <= UVar23)) {
          DAT_180c71f1c = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
          if (DAT_180c71f1c == 0) {
            DAT_180c71f20 = UVar23 + 1000;
          }
          else {
            DAT_180c71f20 = 0xffffffffffffffff;
          }
        }
        iVar21 = DAT_180c71f1c;
        FUN_1805f68fc(&DAT_1809ba650);
      }
    }
    lVar24 = FUN_18017ea70();
    *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + 1;
    auVar52 = ZEXT864(0);
    if (puVar32 + iVar21 == (undefined *)0x0) {
LAB_1803d7e7c:
      bVar43 = false;
      fVar38 = local_c64;
      fVar39 = local_c64;
    }
    else {
      local_c48 = (undefined *)0x0;
      local_c40 = 0.0;
      cVar19 = FUN_1804514f0(&local_c48,puVar32 + iVar21,0xc);
      if (cVar19 == '\0') goto LAB_1803d7e7c;
      bVar43 = true;
      fVar38 = local_c48._4_4_;
      fVar39 = local_c40;
    }
    auVar51 = ZEXT464((uint)fVar39);
    auVar50 = ZEXT464((uint)fVar38);
    lVar24 = FUN_18017ea70();
    if (*(int *)(lVar24 + 4) != 0) {
      *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + -1;
    }
    local_c08 = (undefined *)0x0;
    puStack_c00 = (undefined *)0x0;
    uStack_bf8 = 0;
    uStack_bf0 = 0;
    auVar53._12_4_ = 0;
    auVar53._0_12_ = ZEXT812(0);
    local_be8 = auVar53 << 0x20;
    uStack_bd8 = 0;
    uStack_bd0 = 0;
    local_bc8 = 0;
    local_c68 = 0;
    uStack_bc0 = (undefined *)CONCAT35(uStack_bc0._5_3_,0xffffffff);
    _auStack_bb8 = ZEXT1232(ZEXT812(0)) << 0x20;
    local_c28 = (ulonglong)local_c28._4_4_ << 0x20;
    local_c58 = (undefined *)((ulonglong)local_c58 & 0xffffffff00000000);
    local_b78 = 0;
    _auStack_b98 = _auStack_bb8;
    if (bVar43) {
      auVar60 = ZEXT1664(auVar50._0_16_);
      auVar48 = ZEXT1664(auVar51._0_16_);
      auVar50 = ZEXT864(0);
      auVar51 = ZEXT864(0);
      auVar52 = ZEXT1664(auVar52._0_16_);
      sVar20 = thunk_FUN_180624430();
      if ((((0 < sVar20) || (sVar20 = thunk_FUN_180624430(auVar60._0_8_), 0 < sVar20)) ||
          (sVar20 = thunk_FUN_180624430(auVar48._0_8_), 0 < sVar20)) ||
         ((DAT_180b0d2d0 == '\0' || (DAT_180b0cc88 == '\0')))) goto LAB_1803d92ae;
      puVar25 = (undefined8 *)FUN_1803daa90();
      puVar37 = (undefined8 *)&DAT_1808e4a70;
      if (puVar25 != (undefined8 *)0x0) {
        puVar37 = puVar25;
      }
      iVar21 = DAT_180c71f28;
      if (DAT_180c71f28 == 0) {
        UVar23 = GetTickCount64();
        if (UVar23 < DAT_180c71ef8) {
          iVar21 = 0;
        }
        else {
          local_c48 = &DAT_1809ba560;
          iVar21 = FUN_1805f68d0(&DAT_1809ba560);
          if (iVar21 != 0) goto LAB_1803d92df;
          if (DAT_1809ba5ac == 0x7fffffff) {
            DAT_1809ba5ac = 0x7ffffffe;
            goto LAB_1803d931d;
          }
          if ((DAT_180c71f28 == 0) && (DAT_180c71ef8 <= UVar23)) {
            DAT_180c71f28 = FUN_1804174b0("CSkeletonInstance",0x52ac8c4f);
            if (DAT_180c71f28 == 0) {
              DAT_180c71ef8 = UVar23 + 1000;
            }
            else {
              DAT_180c71ef8 = 0xffffffffffffffff;
            }
          }
          iVar21 = DAT_180c71f28;
          FUN_1805f68fc(&DAT_1809ba560);
        }
      }
      puVar40 = puVar32 + iVar21;
      iVar21 = DAT_180c71f08;
      local_c48 = puVar40;
      if (DAT_180c71f08 == 0) {
        UVar23 = GetTickCount64();
        if (UVar23 < DAT_180c71f00) {
          iVar21 = 0;
        }
        else {
          local_c50 = &DAT_1809ba5b0;
          iVar21 = FUN_1805f68d0(&DAT_1809ba5b0);
          if (iVar21 != 0) goto LAB_1803d92df;
          if (DAT_1809ba5fc == 0x7fffffff) {
            DAT_1809ba5fc = 0x7ffffffe;
            goto LAB_1803d931d;
          }
          if ((DAT_180c71f08 == 0) && (DAT_180c71f00 <= UVar23)) {
            DAT_180c71f08 = FUN_1804174b0("CModelState",0xe100c814);
            if (DAT_180c71f08 == 0) {
              DAT_180c71f00 = UVar23 + 1000;
            }
            else {
              DAT_180c71f00 = 0xffffffffffffffff;
            }
          }
          iVar21 = DAT_180c71f08;
          FUN_1805f68fc(&DAT_1809ba5b0);
        }
      }
      lVar24 = FUN_18017ea70();
      *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + 1;
      if (puVar40 + iVar21 == (undefined *)0x0) {
        bVar43 = false;
        puVar40 = local_c30;
      }
      else {
        local_c50 = (undefined *)0x0;
        cVar19 = FUN_1804514f0(&local_c50,puVar40 + iVar21,8);
        if (cVar19 == '\0') {
          bVar43 = false;
          puVar40 = local_c30;
        }
        else {
          bVar43 = true;
          puVar40 = local_c50;
        }
      }
      lVar24 = FUN_18017ea70();
      if (*(int *)(lVar24 + 4) != 0) {
        *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + -1;
      }
      if (bVar43) {
        if (puVar40 == (undefined *)0x0) goto LAB_1803d81b9;
        lVar24 = FUN_18017ea70();
        *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + 1;
        local_c50 = (undefined *)0x0;
        cVar19 = FUN_1804514f0(&local_c50,puVar40,8);
        puVar34 = local_c18;
        if (cVar19 != '\0') {
          puVar34 = local_c50;
        }
        lVar24 = FUN_18017ea70();
        if (*(int *)(lVar24 + 4) != 0) {
          *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + -1;
        }
        puVar41 = (undefined *)0x0;
        if (cVar19 != '\0') {
          puVar41 = puVar34;
        }
      }
      else {
        puVar40 = (undefined *)0x0;
LAB_1803d81b9:
        puVar41 = (undefined *)0x0;
      }
      local_c64 = DAT_1808d9be0;
      if (puVar41 == (undefined *)0x0) {
        fVar39 = 0.0;
      }
      else {
        lVar24 = FUN_18017ea70();
        *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + 1;
        if (puVar41 + 0x178 == (undefined *)0x0) {
          bVar43 = false;
          fVar38 = local_c64;
        }
        else {
          local_c5c = 0.0;
          cVar19 = FUN_1804514f0(&local_c5c,puVar41 + 0x178,4);
          if (cVar19 == '\0') {
            bVar43 = false;
            fVar38 = local_c64;
          }
          else {
            bVar43 = true;
            fVar38 = local_c5c;
          }
        }
        lVar24 = FUN_18017ea70();
        if (*(int *)(lVar24 + 4) != 0) {
          *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + -1;
        }
        fVar39 = 0.0;
        if (bVar43) {
          fVar39 = fVar38;
        }
      }
      auVar59 = auVar51._0_16_;
      auVar53 = auVar50._0_16_;
      auVar58 = auVar52._0_16_;
      uVar22 = 0;
      if ((((local_c60 == 0) || ((undefined *)*puVar37 != puVar32)) ||
          ((undefined *)puVar37[1] != puVar40)) ||
         (((*(float *)((longlong)puVar37 + 0xa4) != fVar39 ||
           ((undefined *)puVar37[0x15] != puVar41)) || (*(float *)(puVar37 + 0x16) != local_c64))))
      {
LAB_1803d8291:
        auVar17 = auStack_678;
        auVar14 = auStack_698;
        uStack_6d8 = 0xffffffffffffffff;
        uStack_6cc = 0;
        uStack_6d0 = 0;
        uStack_6c8 = 0;
        uStack_6c4 = 0;
        uStack_6c0 = auVar58._0_4_;
        auStack_6b8._4_2_ = 0;
        auStack_6b8._0_4_ = uStack_6c0;
        auStack_6b8._8_4_ = 0;
        auStack_6b8._12_4_ = uStack_6c0;
        auStack_698[0x14] = 0;
        auVar16 = auStack_698;
        auStack_678[0x1c] = 0;
        auVar18 = auStack_678;
        uStack_658 = 0xffffffff;
        uStack_650 = 0;
        local_648 = 0;
        uStack_640 = 0;
        local_638 = 0;
        *puVar37 = puVar32;
        puVar37[1] = puVar40;
        puVar37[2] = 0xffffffffffffffff;
        puVar37[3] = 0;
        puVar37[4] = 0;
        puVar37[5] = CONCAT44(uStack_6c0,uStack_6c0);
        puVar37[6] = auStack_6b8._0_8_;
        puVar37[7] = auStack_6b8._8_8_;
        auStack_698._0_8_ = auVar14._0_8_;
        auStack_698._8_8_ = auVar14._8_8_;
        puVar37[8] = local_6a8;
        puVar37[9] = CONCAT17(uStack_699,
                              CONCAT16(uStack_69a,
                                       CONCAT15(uStack_69b,
                                                CONCAT14(uStack_69c,
                                                         CONCAT13(uStack_69d,
                                                                  CONCAT12(uStack_69e,
                                                                           CONCAT11(uStack_69f,
                                                                                    uStack_6a0))))))
                             );
        puVar37[10] = auStack_698._0_8_;
        puVar37[0xb] = auStack_698._8_8_;
        auStack_698._16_8_ = auVar16._16_8_;
        auStack_698._24_8_ = auVar14._24_8_;
        auStack_678._0_8_ = auVar17._0_8_;
        auStack_678._8_8_ = auVar17._8_8_;
        puVar37[0xc] = auStack_698._16_8_;
        puVar37[0xd] = auStack_698._24_8_;
        puVar37[0xe] = auStack_678._0_8_;
        puVar37[0xf] = auStack_678._8_8_;
        auStack_678._16_8_ = auVar17._16_8_;
        auStack_678._24_8_ = auVar18._24_8_;
        puVar37[0x10] = auStack_678._16_8_;
        puVar37[0x11] = auStack_678._24_8_;
        puVar37[0x12] = CONCAT44(uStack_654,0xffffffff);
        puVar37[0x13] = 0;
        puVar37[0x14] = 0;
        puVar37[0x15] = 0;
        puVar37[0x16] = (ulonglong)uStack_634 << 0x20;
        uVar33 = uVar22;
        if (5 < uVar22) {
          uVar33 = 5;
        }
        uVar33 = 0xfa << (uVar33 & 0x1f);
        auVar52 = ZEXT1664(auVar53);
        auVar50 = ZEXT1664(auVar59);
        auVar51 = ZEXT1664(auVar58);
        local_6e8 = puVar32;
        puStack_6e0 = puVar40;
        uStack_6bc = uStack_6c0;
        auStack_698 = auVar16;
        auStack_678 = auVar18;
        UVar23 = GetTickCount64();
        uVar30 = 5000;
        if (uVar33 < 5000) {
          uVar30 = (ulonglong)uVar33;
        }
        puVar37[0x13] = UVar23 + uVar30;
        uVar22 = uVar22 + 1;
        if (5 < uVar22) {
          uVar22 = 5;
        }
        *(uint *)(puVar37 + 0x14) = uVar22;
        *(float *)((longlong)puVar37 + 0xa4) = fVar39;
        puVar37[0x15] = puVar41;
        *(float *)(puVar37 + 0x16) = local_c64;
        uVar44 = FUN_1803d9460(local_b28,puVar41);
        FUN_1803dad10(uVar44,local_a88,puVar32,1);
        auVar58 = auVar51._0_16_;
        auVar59 = auVar50._0_16_;
        auVar53 = auVar52._0_16_;
        if ((int)fVar39 - 1U < 0x400) {
          for (pUVar27 = local_a88; pUVar27 != local_a88 + (longlong)local_768 * 5;
              pUVar27 = pUVar27 + 5) {
            if ((((int)*pUVar27 == 0) && (-1 < *(int *)((longlong)pUVar27 + 4))) &&
               (*(int *)((longlong)pUVar27 + 4) < (int)fVar39)) goto LAB_1803d8455;
          }
        }
        pUVar27 = (ULONGLONG *)0x0;
LAB_1803d8455:
        if (local_af0 != '\0') {
          *(undefined4 *)((longlong)puVar37 + 0x3c) = local_b28._8_4_;
          *(char *)((longlong)puVar37 + 0x3a) = cStack_b1c;
          puVar37[8] = uStack_b18;
          puVar37[9] = uStack_b10;
          puVar37[10] = CONCAT44(uStack_b04,uStack_b08);
          puVar37[0xb] = CONCAT44(uStack_afc,uStack_b00);
          puVar37[0xc] = local_af8;
        }
        uVar36 = local_b28._0_4_;
        if ((pUVar27 == (ULONGLONG *)0x0) ||
           (((local_af0 != '\0' && (-1 < (int)local_b28._0_4_)) &&
            (local_b28._0_4_ != *(int *)((longlong)pUVar27 + 4))))) {
          if (((local_af0 != '\0') && (-1 < (int)local_b28._0_4_)) &&
             (auVar51._0_4_ < (float)local_b28._8_4_)) {
            *(undefined4 *)((longlong)puVar37 + 0x14) = local_b28._0_4_;
            *(undefined1 *)(puVar37 + 7) = 1;
            if (((pUVar27 == (ULONGLONG *)0x0) || (cStack_b1c == '\0')) || (local_af8._4_1_ == '\0')
               ) {
              local_b48._0_5_ = (uint5)(uint)(float)local_b48;
              pUVar26 = &local_b68;
            }
            else {
              auVar52 = ZEXT1664(auVar53);
              auVar50 = ZEXT1664(auVar59);
              auVar51 = ZEXT1664(auVar58);
              pUVar26 = (ULONGLONG *)
                        FUN_1803d9dd0(&local_b68,puVar41,*(int *)((longlong)pUVar27 + 4),fVar39);
              auVar58 = auVar51._0_16_;
              auVar59 = auVar50._0_16_;
              auVar53 = auVar52._0_16_;
            }
            UVar7 = *pUVar26;
            UVar8 = pUVar26[1];
            UVar9 = pUVar26[2];
            UVar10 = pUVar26[3];
            UVar23 = pUVar26[4];
            local_b48 = UVar23;
            UVar23 = local_b48;
            local_b48._4_1_ = (char)(UVar23 >> 0x20);
            bVar43 = local_b48._4_1_ != '\0';
            local_b48 = UVar23;
            if (bVar43) {
              UVar11 = pUVar27[1];
              UVar12 = pUVar27[2];
              UVar13 = pUVar27[3];
              puVar37[2] = *pUVar27;
              puVar37[3] = UVar11;
              puVar37[4] = UVar12;
              puVar37[5] = UVar13;
              puVar37[6] = pUVar27[4];
              *(undefined4 *)((longlong)puVar37 + 0x14) = uVar36;
              *(undefined1 *)((longlong)puVar37 + 0x39) = 1;
              *(undefined1 *)((longlong)puVar37 + 0x3b) = 1;
              iVar21 = *(int *)((longlong)pUVar27 + 4);
              puVar37[0xd] = UVar7;
              puVar37[0xe] = UVar8;
              puVar37[0xf] = UVar9;
              puVar37[0x10] = UVar10;
              puVar37[0x11] = UVar23;
              goto LAB_1803d8594;
            }
          }
        }
        else {
          UVar23 = pUVar27[1];
          UVar7 = pUVar27[2];
          UVar8 = pUVar27[3];
          puVar37[2] = *pUVar27;
          puVar37[3] = UVar23;
          puVar37[4] = UVar7;
          puVar37[5] = UVar8;
          puVar37[6] = pUVar27[4];
          *(undefined2 *)(puVar37 + 7) = 0x101;
          iVar21 = *(int *)((longlong)pUVar27 + 4);
          puVar37[0xd] = puVar37[8];
          puVar37[0xe] = puVar37[9];
          puVar37[0xf] = puVar37[10];
          puVar37[0x10] = puVar37[0xb];
          puVar37[0x11] = puVar37[0xc];
LAB_1803d8594:
          *(int *)(puVar37 + 0x12) = iVar21;
        }
      }
      else if (((*(char *)(puVar37 + 7) == '\0') || (*(char *)((longlong)puVar37 + 0x39) == '\0'))
              || (*(char *)((longlong)puVar37 + 0x8c) == '\0')) {
        UVar23 = GetTickCount64();
        auVar59 = auVar51._0_16_;
        auVar53 = auVar50._0_16_;
        auVar58 = auVar52._0_16_;
        if ((ulonglong)puVar37[0x13] <= UVar23) {
          uVar22 = *(uint *)(puVar37 + 0x14);
          goto LAB_1803d8291;
        }
      }
      uVar22 = 0;
      if (*(char *)(puVar37 + 7) == '\0') {
        local_6f0 = 0;
        pUVar27 = &local_720;
      }
      else {
        auVar52 = ZEXT1664(auVar53);
        auVar50 = ZEXT1664(auVar59);
        auVar51 = ZEXT1664(auVar58);
        pUVar27 = (ULONGLONG *)
                  FUN_1803da6b0(&local_720,local_c30,*(undefined4 *)((longlong)puVar37 + 0x14));
        auVar58 = auVar51._0_16_;
        auVar59 = auVar50._0_16_;
        auVar53 = auVar52._0_16_;
      }
      local_758 = *pUVar27;
      uStack_750 = (undefined *)pUVar27[1];
      uStack_748 = pUVar27[2];
      uStack_740 = pUVar27[3];
      local_738 = pUVar27[4];
      uStack_730 = pUVar27[5];
      local_728 = (uint)pUVar27[6];
      local_c64 = (float)((uint)local_c64 & 0xffffff00);
      if ((char)pUVar27[6] == '\0') {
LAB_1803d8a44:
        local_aa8 = local_be8._0_8_;
        uStack_aa0 = local_be8._8_8_;
        uStack_a98 = uStack_bd8;
        uStack_a90 = uStack_bd0;
        local_ac8 = local_c08;
        puStack_ac0 = puStack_c00;
        uStack_ab8 = uStack_bf8;
        uStack_ab0 = uStack_bf0;
      }
      else {
        local_700 = local_738;
        UStack_6f8 = uStack_730;
        local_720 = local_758;
        puStack_718 = uStack_750;
        UStack_710 = uStack_748;
        UStack_708 = uStack_740;
        if (*(char *)((longlong)puVar37 + 0x3b) != '\0') {
          local_b68 = local_758;
          puStack_b60 = uStack_750;
          UStack_b58 = uStack_748;
          UStack_b50 = uStack_740;
          local_b48 = local_738;
          UStack_b40 = uStack_730;
          fVar38 = *(float *)(puVar37 + 0xe);
          fVar1 = *(float *)(puVar37 + 0xd);
          fVar2 = *(float *)((longlong)puVar37 + 0x6c);
          fVar3 = *(float *)((longlong)puVar37 + 0x7c);
          local_c64 = *(float *)((longlong)puVar37 + 0x74);
          local_c5c = *(float *)(puVar37 + 0xf);
          fVar4 = *(float *)(puVar37 + 0x11);
          local_c50 = (undefined *)CONCAT44(local_c50._4_4_,fVar4);
          pfVar31 = (float *)&local_b48;
          lVar24 = 3;
          do {
            auVar53 = vpcmpeqd_avx(ZEXT416(uVar22),ZEXT416(0));
            auVar54 = SUB6416(ZEXT464(0x3f800000),0);
            auVar53 = vblendvps_avx(auVar58,auVar54,auVar53);
            auVar59 = vpcmpeqd_avx(ZEXT416(uVar22),SUB6416(ZEXT464(1),0));
            auVar59 = vblendvps_avx(auVar58,auVar54,auVar59);
            auVar55 = vpcmpeqd_avx(ZEXT416(uVar22),SUB6416(ZEXT464(2),0));
            auVar55 = vblendvps_avx(auVar58,auVar54,auVar55);
            fVar47 = auVar59._0_4_;
            fVar49 = auVar53._0_4_;
            fVar45 = auVar55._0_4_;
            fVar5 = fVar47 * fVar2 + fVar49 * fVar1 + fVar45 * fVar38;
            fVar6 = local_c5c * fVar47 + local_c64 * fVar49 + fVar3 * fVar45;
            fVar45 = fVar47 * *(float *)((longlong)puVar37 + 0x84) +
                     fVar49 * *(float *)(puVar37 + 0x10) + fVar4 * fVar45;
            fVar47 = fVar6 * *(float *)((longlong)puVar37 + 0x54) + fVar5 * *(float *)(puVar37 + 9)
                     + fVar45 * *(float *)(puVar37 + 0xc);
            fVar49 = fVar6 * *(float *)(puVar37 + 10) + fVar5 * *(float *)((longlong)puVar37 + 0x44)
                     + fVar45 * *(float *)((longlong)puVar37 + 0x5c);
            fVar5 = fVar6 * *(float *)((longlong)puVar37 + 0x4c) + fVar5 * *(float *)(puVar37 + 8) +
                    fVar45 * *(float *)(puVar37 + 0xb);
            pfVar31[-8] = fVar49 * local_758._4_4_ + fVar5 * (float)local_758 +
                          fVar47 * (float)uStack_750;
            pfVar31[-4] = fVar49 * uStack_748._4_4_ + fVar5 * (float)uStack_748 +
                          fVar47 * (float)uStack_740;
            *pfVar31 = fVar49 * local_738._4_4_ + fVar5 * (float)local_738 +
                       fVar47 * (float)uStack_730;
            uVar22 = uVar22 + 1;
            pfVar31 = pfVar31 + 1;
            lVar24 = lVar24 + -1;
          } while (lVar24 != 0);
          auVar59 = ZEXT416((uint)local_c28);
          auVar53 = ZEXT416((uint)local_c58);
          local_700 = local_b48;
          UStack_6f8 = UStack_b40;
          local_720 = local_b68;
          puStack_718 = puStack_b60;
          UStack_710 = UStack_b58;
          UStack_708 = UStack_b50;
        }
        if (*(char *)((longlong)puVar37 + 0x39) == '\0') {
          local_b30 = 0;
          pauVar28 = (undefined1 (*) [32])&local_b68;
        }
        else {
          local_d38 = puVar37 + 0xd;
          local_d40 = (undefined **)
                      CONCAT71(local_d40._1_7_,*(undefined *)((longlong)puVar37 + 0x35));
          local_d48 = (undefined **)CONCAT44(local_d48._4_4_,*(undefined4 *)(puVar37 + 6));
          auVar52 = ZEXT1664(auVar53);
          auVar50 = ZEXT1664(auVar59);
          auVar51 = ZEXT1664(auVar58);
          pauVar28 = (undefined1 (*) [32])
                     FUN_1803d6f30(&local_b68,&local_720,puVar37 + 3,
                                   (undefined *)((longlong)puVar37 + 0x24));
          auVar58 = auVar51._0_16_;
          auVar59 = auVar50._0_16_;
          auVar53 = auVar52._0_16_;
        }
        _local_b28 = *pauVar28;
        uStack_b08 = *(undefined4 *)pauVar28[1];
        uStack_b04 = *(undefined4 *)(pauVar28[1] + 4);
        uStack_b00 = *(undefined4 *)(pauVar28[1] + 8);
        uStack_afc = *(undefined4 *)(pauVar28[1] + 0xc);
        local_af8 = *(undefined8 *)(pauVar28[1] + 0x10);
        local_c64 = *(float *)(pauVar28[1] + 0x18);
        if (SUB41(local_c64,0) == '\0') {
          auVar52 = ZEXT1664(auVar53);
          auVar50 = ZEXT1664(auVar59);
          auVar51 = ZEXT1664(auVar58);
          pauVar28 = (undefined1 (*) [32])FUN_1803d6c60(&local_b68,&local_758);
          auVar59 = auVar50._0_16_;
          auVar53 = auVar52._0_16_;
          auVar58 = auVar51._0_16_;
          _local_b28 = *pauVar28;
          uStack_b08 = *(undefined4 *)pauVar28[1];
          uStack_b04 = *(undefined4 *)(pauVar28[1] + 4);
          uStack_b00 = *(undefined4 *)(pauVar28[1] + 8);
          uStack_afc = *(undefined4 *)(pauVar28[1] + 0xc);
          local_af8 = *(undefined8 *)(pauVar28[1] + 0x10);
          if (pauVar28[1][0x18] == '\0') goto LAB_1803d8a44;
        }
        local_6e8 = local_c20;
        uStack_6d8 = local_b28._0_8_;
        uStack_6d0 = local_b28._8_4_;
        uStack_6cc = local_b28._12_4_;
        uStack_6c8 = local_b28._16_4_;
        uStack_6c4 = local_b28._20_4_;
        uVar44 = vmovhpd_avx(local_b28._16_16_);
        uStack_6c0 = (uint)uVar44;
        uStack_6bc = (uint)((ulonglong)uVar44 >> 0x20);
        auStack_6b8._8_4_ = uStack_b00;
        auStack_6b8._4_4_ = uStack_b04;
        auStack_6b8._0_4_ = uStack_b08;
        auStack_6b8._12_4_ = uStack_afc;
        auVar52 = ZEXT1664(auVar58);
        puStack_6e0 = puVar40;
        local_bc8 = GetTickCount64();
        uVar36 = *(undefined4 *)((longlong)puVar37 + 0x14);
        uStack_6a0 = (undefined1)uVar36;
        uStack_69f = (undefined1)((uint)uVar36 >> 8);
        uStack_69e = (undefined1)((uint)uVar36 >> 0x10);
        uStack_69d = (undefined1)((uint)uVar36 >> 0x18);
        uStack_69c = 1;
        auStack_698 = ZEXT832(0);
        auStack_678 = ZEXT832(0);
        uStack_bf0 = CONCAT44(uStack_6cc,uStack_6d0);
        local_ac8 = local_6e8;
        puStack_ac0 = puStack_6e0;
        uStack_ab8 = uStack_6d8;
        local_c08 = local_6e8;
        puStack_c00 = puStack_6e0;
        uStack_bf8 = uStack_6d8;
        local_aa8 = CONCAT44(uStack_6c4,uStack_6c8);
        uStack_aa0 = CONCAT44(uStack_6bc,uStack_6c0);
        uStack_a98 = auStack_6b8._0_8_;
        uStack_a90 = auStack_6b8._8_8_;
        local_be8._8_8_ = uStack_aa0;
        local_be8._0_8_ = local_aa8;
        uStack_bd8 = auStack_6b8._0_8_;
        uStack_bd0 = auStack_6b8._8_8_;
        uStack_bc0 = (undefined *)
                     CONCAT17(uStack_699,
                              CONCAT16(uStack_69a,CONCAT15(uStack_69b,CONCAT14(1,uVar36))));
        _auStack_bb8 = ZEXT832(0);
        _auStack_b98 = ZEXT832(0);
        auVar59 = auVar52._0_16_;
        auVar53 = vunpcklps_avx(auVar59,auVar59);
        local_b78 = auVar53._0_8_;
        auVar52 = ZEXT1664(auVar59);
        uStack_ab0 = uStack_bf0;
        local_6a8 = local_bc8;
        iVar21 = FUN_1805f68d0(&DAT_180b8e260);
        if (iVar21 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(5);
        }
        if (DAT_180b8e2ac == 0x7fffffff) {
          DAT_180b8e2ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
          FUN_1805f6d44(6);
        }
        local_ae8 = _DAT_180b8e220;
        uStack_ae0 = puRam0000000180b8e228;
        UStack_ad8 = URam0000000180b8e230;
        UStack_ad0 = URam0000000180b8e238;
        local_b68 = _DAT_180b8e240;
        puStack_b60 = puRam0000000180b8e248;
        UStack_b58 = URam0000000180b8e250;
        UStack_b50 = URam0000000180b8e258;
        auVar52 = ZEXT1664(auVar52._0_16_);
        FUN_1805f68fc(&DAT_180b8e260);
        auVar58 = auVar52._0_16_;
        auStack_bb8._8_8_ = uStack_ae0;
        auStack_bb8._0_8_ = local_ae8;
        UStack_ba8 = UStack_ad8;
        UStack_ba0 = UStack_ad0;
        auStack_b98._8_8_ = puStack_b60;
        auStack_b98._0_8_ = local_b68;
        UStack_b88 = UStack_b58;
        UStack_b80 = UStack_b50;
        auVar59 = ZEXT416((uint)local_af8);
        auVar53 = ZEXT416(local_af8._4_4_);
        local_c68 = uStack_bc0._4_1_;
      }
      puVar32 = (undefined *)0x0;
      iVar21 = DAT_180c71f0c;
      if (DAT_180c71f0c == 0) {
        auVar52 = ZEXT1664(auVar53);
        auVar50 = ZEXT1664(auVar59);
        auVar51 = ZEXT1664(auVar58);
        UVar23 = GetTickCount64();
        auVar58 = auVar51._0_16_;
        auVar59 = auVar50._0_16_;
        auVar53 = auVar52._0_16_;
        if (UVar23 < DAT_180c71ef0) {
          iVar21 = 0;
        }
        else {
          local_c20 = &DAT_1809ba510;
          iVar21 = FUN_1805f68d0(&DAT_1809ba510);
          if (iVar21 != 0) {
LAB_1803d92df:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(5);
          }
          if (DAT_1809ba55c == 0x7fffffff) {
            DAT_1809ba55c = 0x7ffffffe;
LAB_1803d931d:
                    /* WARNING: Subroutine does not return */
            FUN_1805f6d44(6);
          }
          if ((DAT_180c71f0c == 0) && (DAT_180c71ef0 <= UVar23)) {
            DAT_180c71f0c = FUN_1804174b0("CModelState",0xe100c814);
            if (DAT_180c71f0c == 0) {
              DAT_180c71ef0 = UVar23 + 1000;
            }
            else {
              DAT_180c71ef0 = 0xffffffffffffffff;
            }
          }
          iVar21 = DAT_180c71f0c;
          FUN_1805f68fc(&DAT_1809ba510);
          auVar58 = auVar51._0_16_;
          auVar59 = auVar50._0_16_;
          auVar53 = auVar52._0_16_;
        }
      }
      auVar52 = ZEXT1664(auVar53);
      auVar50 = ZEXT1664(auVar59);
      auVar51 = ZEXT1664(auVar58);
      lVar24 = FUN_18017ea70();
      *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + 1;
      if (local_c48 + iVar21 == (undefined *)0x0) {
        bVar43 = false;
        puVar34 = local_c48;
      }
      else {
        local_c58 = (undefined *)0x0;
        cVar19 = FUN_1804514f0(&local_c58,local_c48 + iVar21,8);
        if (cVar19 == '\0') {
          bVar43 = false;
          puVar34 = local_c48;
        }
        else {
          bVar43 = true;
          puVar34 = local_c58;
        }
      }
      lVar24 = FUN_18017ea70();
      auVar58 = auVar51._0_16_;
      auVar59 = auVar50._0_16_;
      auVar53 = auVar52._0_16_;
      if (*(int *)(lVar24 + 4) != 0) {
        *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + -1;
      }
      puVar29 = puVar32;
      if (bVar43) {
        puVar29 = puVar34;
      }
      if (puVar29 == puVar40) {
        auVar55 = vunpcklps_avx(auVar59,auVar53);
        local_b78 = auVar55._0_8_;
        local_ae8 = local_bc8;
        uStack_ae0 = uStack_bc0;
        UStack_ad8 = auStack_bb8._0_8_;
        UStack_ad0 = auStack_bb8._8_8_;
      }
      else {
        local_6e8 = (undefined *)0x0;
        puStack_6e0 = (undefined *)0x0;
        uStack_6d8 = 0;
        uStack_6d0 = 0;
        uStack_6cc = 0;
        uStack_6c8 = 0;
        uStack_6c4 = 0;
        uStack_6c0 = 0;
        uStack_6bc = 0;
        auStack_6b8 = ZEXT816(0);
        local_6a8 = 0;
        uStack_6a0 = 0xff;
        uStack_69f = 0xff;
        uStack_69e = 0xff;
        uStack_69d = 0xff;
        uStack_69c = 0;
        auStack_698 = ZEXT832(0);
        local_ac8 = (undefined *)0x0;
        puStack_ac0 = (undefined *)0x0;
        uStack_ab8 = 0;
        uStack_ab0 = 0;
        local_c08 = (undefined *)0x0;
        puStack_c00 = (undefined *)0x0;
        uStack_bf8 = 0;
        uStack_bf0 = 0;
        local_aa8 = 0;
        uStack_aa0 = 0;
        uStack_a98 = 0;
        uStack_a90 = 0;
        local_be8 = ZEXT416(0);
        uStack_bd8 = 0;
        uStack_bd0 = 0;
        local_ae8 = 0;
        uStack_ae0._0_6_ = CONCAT15(uStack_69b,0xffffffff);
        uStack_ae0._0_7_ = CONCAT16(uStack_69a,(undefined6)uStack_ae0);
        uStack_ae0 = (undefined *)CONCAT17(uStack_699,(undefined7)uStack_ae0);
        UStack_ad8 = 0;
        UStack_ad0 = 0;
        uStack_bc0._0_6_ = CONCAT15(uStack_69b,0xffffffff);
        uStack_bc0._0_7_ = CONCAT16(uStack_69a,(undefined6)uStack_bc0);
        uStack_bc0 = (undefined *)CONCAT17(uStack_699,(undefined7)uStack_bc0);
        _auStack_bb8 = ZEXT832(0);
        _auStack_b98 = ZEXT832(0);
        auVar55 = vunpcklps_avx(auVar58,auVar58);
        auVar53 = vshufps_avx(auVar55,auVar55,0x55);
        local_b78._0_4_ = auVar55._0_4_;
        auVar59 = ZEXT416((uint)local_b78);
        local_c68 = 0;
        local_b78 = auVar55._0_8_;
        auStack_678 = auStack_698;
      }
      if (puVar41 == (undefined *)0x0) {
LAB_1803d8cc4:
        local_6e8 = (undefined *)0x0;
        puStack_6e0 = (undefined *)0x0;
        auStack_6b8 = ZEXT816(0);
        uStack_6d8 = 0;
        uStack_6d0 = 0;
        uStack_6cc = 0;
        uStack_6c8 = 0;
        uStack_6c4 = 0;
        uStack_6c0 = 0;
        uStack_6bc = 0;
        local_6a8 = 0;
        uStack_6a0 = 0xff;
        uStack_69f = 0xff;
        uStack_69e = 0xff;
        uStack_69d = 0xff;
        uStack_69c = 0;
        auStack_698 = ZEXT832(0);
        uStack_bf0 = 0;
        local_ac8 = (undefined *)0x0;
        puStack_ac0 = (undefined *)0x0;
        uStack_ab8 = 0;
        local_c08 = (undefined *)0x0;
        puStack_c00 = (undefined *)0x0;
        uStack_bf8 = 0;
        local_aa8 = 0;
        uStack_aa0 = 0;
        uStack_a98 = 0;
        uStack_a90 = 0;
        local_be8 = ZEXT416(0);
        uStack_bd8 = 0;
        uStack_bd0 = 0;
        local_ae8 = 0;
        uStack_ae0._0_6_ = CONCAT15(uStack_69b,0xffffffff);
        uStack_ae0._0_7_ = CONCAT16(uStack_69a,(undefined6)uStack_ae0);
        uStack_ae0 = (undefined *)CONCAT17(uStack_699,(undefined7)uStack_ae0);
        UStack_ad8 = 0;
        UStack_ad0 = 0;
        local_bc8 = 0;
        uStack_bc0._0_6_ = CONCAT15(uStack_69b,0xffffffff);
        uStack_bc0._0_7_ = CONCAT16(uStack_69a,(undefined6)uStack_bc0);
        uStack_bc0 = (undefined *)CONCAT17(uStack_699,(undefined7)uStack_bc0);
        _auStack_bb8 = ZEXT832(0);
        _auStack_b98 = ZEXT832(0);
        auVar59 = vunpcklps_avx(auVar58,auVar58);
        local_c28 = auVar59._0_8_;
        auVar53 = vshufps_avx(auVar59,auVar59,0x55);
        local_b78._0_4_ = auVar59._0_4_;
        auVar55 = ZEXT416((uint)local_b78);
        local_c68 = 0;
        local_b78 = local_c28;
        uStack_ab0 = uStack_bf0;
        auStack_678 = auStack_698;
      }
      else {
        auVar52 = ZEXT1664(auVar55);
        auVar50 = ZEXT1664(auVar53);
        auVar51 = ZEXT1664(auVar59);
        auVar60 = ZEXT1664(auVar58);
        local_c28 = local_b78;
        local_bc8 = local_ae8;
        lVar24 = FUN_18017ea70();
        *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + 1;
        if (puVar40 == (undefined *)0x0) {
          bVar43 = false;
          puVar34 = local_c48;
        }
        else {
          local_c58 = (undefined *)0x0;
          cVar19 = FUN_1804514f0(&local_c58,puVar40,8);
          if (cVar19 == '\0') {
            bVar43 = false;
            puVar34 = local_c48;
          }
          else {
            bVar43 = true;
            puVar34 = local_c58;
          }
        }
        lVar24 = FUN_18017ea70();
        auVar58 = auVar60._0_16_;
        auVar55 = auVar51._0_16_;
        auVar53 = auVar50._0_16_;
        auVar59 = auVar52._0_16_;
        if (*(int *)(lVar24 + 4) != 0) {
          *(int *)(lVar24 + 4) = *(int *)(lVar24 + 4) + -1;
        }
        if ((!bVar43) || (puVar34 != puVar41)) goto LAB_1803d8cc4;
      }
      bVar15 = local_c68;
      auVar52 = ZEXT1664(auVar59);
      auVar50 = ZEXT1664(auVar53);
      auVar51 = ZEXT1664(auVar55);
      auVar60 = ZEXT1664(auVar58);
      UVar23 = GetTickCount64();
      auVar59 = auVar52._0_16_;
      if ((ulonglong)puVar37[0x17] <= UVar23) {
        puVar37[0x17] = UVar23 + 2000;
        if (DAT_180b0d338 < 4) {
          puVar32 = (undefined *)(ulonglong)DAT_180b0d338;
        }
        uVar22 = (uint)puVar32;
        uVar36 = 0x40600000;
        if ((char)puVar32 == '\0') {
          uVar46 = 0x40b00000;
        }
        else if (uVar22 == 2) {
          uVar46 = 0x40a80000;
        }
        else if (uVar22 == 3) {
          uVar46 = 0x40b33333;
        }
        else {
          uVar46 = 0x40600000;
        }
        if ((char)puVar32 != '\0') {
          auVar53 = vpcmpeqd_avx(ZEXT416(uVar22),SUB6416(ZEXT464(2),0));
          auVar53 = vblendvps_avx(SUB6416(ZEXT464(0x40400000),0),SUB6416(ZEXT464(0x40b66666),0),
                                  auVar53);
          uVar36 = auVar53._0_4_;
        }
        local_d38._0_4_ = uVar46;
        local_d40._0_4_ = uVar36;
        local_d48._0_4_ = auVar50._0_4_;
        FUN_1802c3850(&local_c48,&uStack_bf8,(longlong)&uStack_bf0 + 4,auVar51._0_8_);
        local_d28 = local_728;
        local_c78 = "rig_estimate";
        if (local_c64._0_1_ != '\0') {
          local_c78 = "authored_head_volume";
        }
        local_c60 = *(byte *)((longlong)puVar37 + 0x3b);
        local_c58 = (undefined *)CONCAT44(local_c58._4_4_,*(undefined4 *)(puVar37 + 0x12));
        if (*(char *)(puVar37 + 7) == '\0') {
          pcVar35 = "none";
        }
        else if (local_c60 == 0) {
          if (*(char *)((longlong)puVar37 + 0x39) == '\0') {
            pcVar35 = "named_head";
            if (*(char *)((longlong)puVar37 + 0x3a) != '\0') {
              pcVar35 = "weighted_head";
            }
          }
          else {
            pcVar35 = "hitbox";
          }
        }
        else {
          pcVar35 = "retargeted_head_volume";
        }
        if (bVar15 == 0) {
          if (*(char *)(puVar37 + 7) == '\0') {
            pcVar42 = "model_head_unavailable";
          }
          else {
            pcVar42 = "invalid_or_transitioning_pose";
            if ((char)local_728 == '\0') {
              pcVar42 = "render_pose_unavailable";
            }
          }
        }
        else {
          pcVar42 = "ready";
        }
        auVar53 = vpcmpeqd_avx(ZEXT116(local_c38),SUB6416(ZEXT464(0),0));
        auVar59 = auVar60._0_16_;
        auVar53 = vblendvps_avx(ZEXT416(local_c3c),auVar59,auVar53);
        auVar52 = ZEXT1664(auVar53);
        if (local_c38 == 0) {
          auVar48 = ZEXT1664(auVar59);
          auVar56 = ZEXT1664(auVar59);
          auVar57 = ZEXT1664(auVar59);
        }
        else {
          auVar48 = ZEXT464((uint)local_c40);
          auVar56 = ZEXT464((uint)local_c48._4_4_);
          auVar57 = ZEXT464((uint)local_c48);
        }
        if ((char)local_728 == '\0') {
          local_c64 = auVar60._0_4_;
          local_c5c = local_c64;
        }
        else {
          auVar60 = ZEXT464(uStack_730._4_4_);
          local_c64 = uStack_740._4_4_;
          local_c5c = uStack_750._4_4_;
        }
        local_c5f = *(byte *)((longlong)puVar37 + 0x39);
        if (*(char *)(puVar37 + 7) == '\0') {
          uVar36 = 0xffffffff;
        }
        else {
          uVar36 = *(undefined4 *)((longlong)puVar37 + 0x14);
        }
        FUN_18063ab10(&local_6e8,0,0x600);
        auVar58._8_8_ = uStack_aa0;
        auVar58._0_8_ = local_aa8;
        auVar53 = vshufps_avx(auVar58,auVar58,0x55);
        local_c80 = (double)auVar53._0_4_;
        local_c88 = (double)(float)local_aa8;
        auVar14._8_8_ = puStack_ac0;
        auVar14._0_8_ = local_ac8;
        auVar14._16_8_ = uStack_ab8;
        auVar14._24_8_ = uStack_ab0;
        auVar59 = auVar14._16_16_;
        auVar53 = vshufps_avx(auVar59,auVar59,0xff);
        local_c90 = (double)auVar53._0_4_;
        local_cb8 = (double)auVar52._0_4_;
        local_cc0 = (double)auVar50._0_4_;
        local_cc8 = (double)auVar51._0_4_;
        local_cd0 = (double)auVar48._0_4_;
        local_cd8 = (double)auVar56._0_4_;
        local_ce0 = (double)auVar57._0_4_;
        auVar53 = vshufps_avx(auVar59,auVar59,0xaa);
        local_ce8 = (double)auVar53._0_4_;
        auVar53 = vshufps_avx(auVar59,auVar59,0x55);
        local_cf0 = (double)auVar53._0_4_;
        local_cf8 = (double)(float)uStack_ab8;
        local_d00 = (double)auVar60._0_4_;
        local_d08 = (double)local_c64;
        local_d10 = (double)local_c5c;
        local_c98 = (uint)local_c60;
        local_ca0 = (uint)local_c58;
        local_d18 = local_c30;
        local_d28 = local_d28 & 0xff;
        local_d30 = (uint)local_c5f;
        local_d38 = (undefined8 *)CONCAT44(local_d38._4_4_,fVar39);
        local_d40 = (undefined **)CONCAT44(local_d40._4_4_,uVar36);
        local_d48 = (undefined **)CONCAT44(local_d48._4_4_,(uint)local_c68);
        local_d20 = puVar40;
        local_cb0 = pcVar42;
        local_ca8 = pcVar35;
        FUN_18015ad60(&local_6e8,0x600,0xffffffffffffffff,
                      "valid=%d head_bone=%d bone_count=%d hitbox_ready=%d pose_ready=%d model=0x%llx scene=0x%llx head=(%.3f,%.3f,%.3f) head_surface=(%.3f,%.3f,%.3f) mount_base=(%.3f,%.3f,%.3f) radius=%.3f height=%.3f hat_scale=%.3f reason=%s head_binding=%s volume_bone=%d retargeted=%d up=(%.3f,%.3f,%.3f) source=native_mesh fit=%s mapped_bone=1 matrix=paired root_rebase=0 extrapolation=0 smoothing=0"
                     );
        local_d48 = &PTR_180700558;
        if ((char)local_6e8 != '\0') {
          local_d48 = (undefined **)&DAT_1806bcfc0;
        }
        local_d40 = &local_6e8;
        FUN_1800f6900(0);
        auVar59._8_8_ = 0;
        auVar59._0_8_ = local_c28;
      }
    }
    else {
LAB_1803d92ae:
      auVar59._8_8_ = 0;
      auVar59._0_8_ = local_b78;
      local_ae8 = local_bc8;
      uStack_ae0 = uStack_bc0;
      UStack_ad8 = auStack_bb8._0_8_;
      UStack_ad0 = auStack_bb8._8_8_;
      local_aa8 = local_be8._0_8_;
      uStack_aa0 = local_be8._8_8_;
      uStack_a98 = uStack_bd8;
      uStack_a90 = uStack_bd0;
      local_ac8 = local_c08;
      puStack_ac0 = puStack_c00;
      uStack_ab8 = uStack_bf8;
      uStack_ab0 = uStack_bf0;
    }
    auVar52 = ZEXT1664(auVar59);
    AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    local_b68 = _DAT_180bb8890;
    puStack_b60 = puRam0000000180bb8898;
    UStack_b58 = URam0000000180bb88a0;
    UStack_b50 = URam0000000180bb88a8;
    auVar52 = ZEXT1664(auVar52._0_16_);
    ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
    bVar43 = puStack_b60 == local_c18;
    auVar52 = ZEXT1664(auVar52._0_16_);
    iVar21 = FUN_1805f68d0(&DAT_180b8e2e0);
    if (iVar21 != 0) {
LAB_1803d92ea:
                    /* WARNING: Subroutine does not return */
      FUN_1805f6d44(5);
    }
    if (DAT_180b8e32c != 0x7fffffff) {
      if ((DAT_180b8e2dc != 0) && (bVar43)) {
        _DAT_180b8e330 = local_ac8;
        puRam0000000180b8e338 = puStack_ac0;
        uRam0000000180b8e340 = uStack_ab8;
        uRam0000000180b8e348 = uStack_ab0;
        _DAT_180b8e350 = local_aa8;
        uRam0000000180b8e358 = uStack_aa0;
        uRam0000000180b8e360 = uStack_a98;
        uRam0000000180b8e368 = uStack_a90;
        _DAT_180b8e370 = local_ae8;
        puRam0000000180b8e378 = uStack_ae0;
        URam0000000180b8e380 = UStack_ad8;
        URam0000000180b8e388 = UStack_ad0;
        _DAT_180b8e390 = UStack_ba8;
        uRam0000000180b8e398 = UStack_ba0;
        uRam0000000180b8e3a0 = auStack_b98._0_8_;
        uRam0000000180b8e3a8 = auStack_b98._8_8_;
        _DAT_180b8e3b0 = UStack_b88;
        uRam0000000180b8e3b8 = UStack_b80;
        DAT_180b8e3c0 = auVar52._0_8_;
      }
      FUN_1805f68fc(&DAT_180b8e2e0);
    }
  }
  DAT_180b8e32c = 0x7ffffffe;
LAB_1803d9332:
                    /* WARNING: Subroutine does not return */
  FUN_1805f6d44(6);
}



