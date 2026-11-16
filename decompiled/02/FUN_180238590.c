// FUN_180238590 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180238590 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180238590(undefined8 param_1,undefined8 param_2,float *param_3,longlong param_4,
                  undefined8 param_5)

{
  float *pfVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  uint uVar14;
  char cVar15;
  short sVar16;
  undefined4 uVar17;
  longlong lVar18;
  undefined8 *puVar19;
  float *pfVar20;
  float *pfVar21;
  ulonglong uVar22;
  int iVar23;
  char *pcVar24;
  int iVar25;
  longlong lVar26;
  undefined1 *puVar27;
  int iVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [64];
  undefined1 auVar35 [64];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 in_ZMM9 [64];
  undefined1 in_ZMM10 [64];
  undefined1 in_ZMM11 [64];
  undefined1 in_ZMM12 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [16];
  undefined1 auVar40 [64];
  undefined1 auVar41 [64];
  undefined1 auStack_bc8 [32];
  float local_ba8;
  undefined4 local_ba0;
  uint local_b98;
  int local_b90;
  char local_b88;
  char local_b87;
  char local_b86;
  int local_b84;
  int local_b80;
  uint local_b7c;
  float local_b78;
  float local_b74;
  float local_b70;
  float local_b6c;
  float local_b68;
  float local_b64;
  float local_b60;
  int local_b5c;
  int local_b58;
  undefined4 uStack_b54;
  undefined4 local_b50;
  uint uStack_b4c;
  undefined8 local_b48;
  undefined1 local_b38 [16];
  undefined1 auStack_b28 [16];
  undefined1 local_b18 [16];
  undefined1 auStack_b08 [16];
  undefined1 local_af8 [16];
  undefined1 auStack_ae8 [16];
  undefined1 local_ad8 [16];
  undefined1 local_ac8 [16];
  undefined1 local_ab8 [16];
  undefined1 local_aa8 [16];
  undefined1 local_a98 [16];
  undefined1 local_a88 [16];
  undefined1 local_a78 [16];
  undefined1 local_a68 [16];
  undefined1 local_a58 [16];
  undefined1 local_a48 [16];
  float local_a28 [64];
  char local_928;
  undefined1 local_918 [96];
  float local_8b8;
  float local_8b4;
  float local_8b0;
  undefined1 local_8ac;
  undefined8 local_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 local_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined1 local_868 [16];
  undefined1 local_858 [92];
  char acStack_7fc [1828];
  ulonglong local_d8;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  
  local_68 = in_ZMM9._0_16_;
  local_78 = in_ZMM10._0_16_;
  local_88 = in_ZMM11._0_16_;
  local_98 = in_ZMM12._0_16_;
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_bc8;
  local_b48 = param_5;
  iVar2 = *(int *)(param_4 + 0x368);
  auVar35 = ZEXT864(0);
  if (((iVar2 - 1U < 0x14) && (*(int *)(param_4 + 0x36c) - 1U < 0x80)) &&
     (DAT_180cc9350 - 1U < 0x20)) {
    auVar34 = ZEXT464(DAT_180cc936c);
    sVar16 = thunk_FUN_180624430(DAT_180cc936c);
    if ((sVar16 < 1) && (auVar35._0_4_ < auVar34._0_4_)) {
      auVar34 = ZEXT464((uint)DAT_180cc9374);
      sVar16 = thunk_FUN_180624430(DAT_180cc9374);
      if ((sVar16 < 1) && (auVar35._0_4_ <= auVar34._0_4_)) {
        auVar34 = ZEXT464((uint)DAT_180cc9378);
        sVar16 = thunk_FUN_180624430(DAT_180cc9378);
        auVar39 = auVar35._0_16_;
        if ((sVar16 < 1) && (auVar35._0_4_ <= auVar34._0_4_)) {
          lVar18 = 0x14;
          pcVar24 = acStack_7fc;
          do {
            *pcVar24 = '\0';
            pcVar24 = pcVar24 + 0x60;
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
          local_8a8 = 0;
          uStack_8a0 = 0;
          uStack_898 = 0;
          uStack_890 = 0;
          local_888 = 0;
          uStack_880 = 0;
          uStack_878 = 0;
          uStack_870 = 0;
          local_868 = (undefined1  [16])0x0;
          if (0 < iVar2) {
            lVar26 = 0;
            pcVar24 = acStack_7fc;
            lVar18 = param_4 + 0x48;
            do {
              iVar25 = *(int *)(lVar18 + 4);
              if (iVar25 < 0) {
              }
              if (*(int *)(param_4 + 0x36c) <= iVar25) {
              }
              auVar35 = ZEXT1664(auVar35._0_16_);
              puVar19 = (undefined8 *)
                        FUN_180237670(local_918,lVar18,(longlong)iVar25 * 0x20 + 0x370 + param_4);
              uVar3 = puVar19[1];
              uVar4 = puVar19[2];
              uVar5 = puVar19[3];
              uVar6 = puVar19[4];
              uVar7 = puVar19[5];
              uVar8 = puVar19[6];
              uVar9 = puVar19[7];
              uVar10 = puVar19[8];
              uVar11 = puVar19[9];
              uVar12 = puVar19[10];
              uVar13 = puVar19[0xb];
              *(undefined8 *)(pcVar24 + -0x5c) = *puVar19;
              *(undefined8 *)(pcVar24 + -0x54) = uVar3;
              *(undefined8 *)(pcVar24 + -0x4c) = uVar4;
              *(undefined8 *)(pcVar24 + -0x44) = uVar5;
              *(undefined8 *)(pcVar24 + -0x3c) = uVar6;
              *(undefined8 *)(pcVar24 + -0x34) = uVar7;
              *(undefined8 *)(pcVar24 + -0x2c) = uVar8;
              *(undefined8 *)(pcVar24 + -0x24) = uVar9;
              *(undefined8 *)(pcVar24 + -0x1c) = uVar10;
              *(undefined8 *)(pcVar24 + -0x14) = uVar11;
              *(undefined8 *)(pcVar24 + -0xc) = uVar12;
              *(undefined8 *)(pcVar24 + -4) = uVar13;
              if (*pcVar24 == '\0') {
              }
              auVar35 = ZEXT1664(auVar35._0_16_);
              uVar17 = FUN_1803db3f0();
              auVar39 = auVar35._0_16_;
              *(undefined4 *)(local_868 + lVar26 * 4 + -0x40) = uVar17;
              lVar26 = lVar26 + 1;
              lVar18 = lVar18 + 0x28;
              pcVar24 = pcVar24 + 0x60;
            } while (lVar26 < iVar2);
          }
          auVar35 = ZEXT464((uint)(*param_3 * 0.017453292));
          auVar34 = ZEXT464((uint)(param_3[1] * 0.017453292));
          fVar33 = 0.017453292;
          auVar40 = ZEXT1664(auVar39);
          fVar29 = (float)FUN_180638e00();
          fVar30 = (float)FUN_180637540(auVar35._0_8_);
          fVar31 = (float)FUN_180638e00(auVar34._0_8_);
          fVar32 = (float)FUN_180637540(auVar34._0_8_);
          auVar34 = ZEXT464((uint)(fVar32 * fVar30));
          auVar41 = ZEXT464((uint)(fVar31 * fVar30));
          local_b64 = -fVar29;
          auVar35 = ZEXT464((uint)(fVar33 * param_3[2]));
          fVar33 = (float)FUN_180638e00(fVar33 * param_3[2]);
          local_b60 = (float)FUN_180637540(auVar35._0_8_);
          local_b74 = local_b60 * fVar31 - fVar33 * fVar29 * fVar32;
          local_b6c = -fVar33 * fVar29 * fVar31 - local_b60 * fVar32;
          local_b68 = -fVar33 * fVar30;
          local_b70 = local_b60 * fVar29 * fVar32 + fVar33 * fVar31;
          fVar29 = local_b60 * fVar29 * fVar31 - fVar33 * fVar32;
          local_b60 = local_b60 * fVar30;
          local_b86 = DAT_180cc9378 + DAT_180cc9374 < 0.0001;
          local_b5c = 0x100;
          if ((bool)local_b86) {
            local_b5c = 1;
          }
          iVar25 = 0;
          local_b84 = 0;
          local_b80 = 0;
          auVar38 = ZEXT464(0x322bcc77);
          auVar35 = ZEXT464(0x3f800000);
          local_b78 = fVar29;
          do {
            iVar23 = local_b80;
            if (local_b86 == '\0') {
              local_b98 = (uint)DAT_180cc934c;
              local_b90 = DAT_180cc9350;
              local_ba0 = DAT_180cc9358;
              local_ba8 = DAT_180cc9378;
              auVar35 = ZEXT1664(auVar35._0_16_);
              auVar38 = ZEXT1664(auVar38._0_16_);
              auVar40 = ZEXT1664(auVar40._0_16_);
              auVar34 = ZEXT1664(auVar34._0_16_);
              auVar41 = ZEXT1664(auVar41._0_16_);
              pfVar20 = (float *)FUN_1802750c0(local_b98,local_b38,local_b80);
              lVar18 = 2;
              pfVar21 = local_a28;
              do {
                uVar3 = *(undefined8 *)(pfVar20 + 2);
                uVar4 = *(undefined8 *)(pfVar20 + 4);
                uVar5 = *(undefined8 *)(pfVar20 + 6);
                *(undefined8 *)pfVar21 = *(undefined8 *)pfVar20;
                *(undefined8 *)(pfVar21 + 2) = uVar3;
                *(undefined8 *)(pfVar21 + 4) = uVar4;
                *(undefined8 *)(pfVar21 + 6) = uVar5;
                uVar3 = *(undefined8 *)(pfVar20 + 10);
                uVar4 = *(undefined8 *)(pfVar20 + 0xc);
                uVar5 = *(undefined8 *)(pfVar20 + 0xe);
                *(undefined8 *)(pfVar21 + 8) = *(undefined8 *)(pfVar20 + 8);
                *(undefined8 *)(pfVar21 + 10) = uVar3;
                *(undefined8 *)(pfVar21 + 0xc) = uVar4;
                *(undefined8 *)(pfVar21 + 0xe) = uVar5;
                uVar3 = *(undefined8 *)(pfVar20 + 0x12);
                uVar4 = *(undefined8 *)(pfVar20 + 0x14);
                uVar5 = *(undefined8 *)(pfVar20 + 0x16);
                *(undefined8 *)(pfVar21 + 0x10) = *(undefined8 *)(pfVar20 + 0x10);
                *(undefined8 *)(pfVar21 + 0x12) = uVar3;
                *(undefined8 *)(pfVar21 + 0x14) = uVar4;
                *(undefined8 *)(pfVar21 + 0x16) = uVar5;
                uVar3 = *(undefined8 *)(pfVar20 + 0x1a);
                *(undefined8 *)(pfVar21 + 0x18) = *(undefined8 *)(pfVar20 + 0x18);
                *(undefined8 *)(pfVar21 + 0x1a) = uVar3;
                pfVar1 = pfVar21 + 0x20;
                uVar3 = *(undefined8 *)(pfVar20 + 0x1e);
                *(undefined8 *)(pfVar21 + 0x1c) = *(undefined8 *)(pfVar20 + 0x1c);
                *(undefined8 *)(pfVar21 + 0x1e) = uVar3;
                pfVar20 = pfVar20 + 0x20;
                lVar18 = lVar18 + -1;
                pfVar21 = pfVar1;
              } while (lVar18 != 0);
              *pfVar1 = *pfVar20;
              if (local_928 != '\0') goto LAB_180238a64;
            }
            else {
              local_b38 = ZEXT816(0);
              auStack_b28 = ZEXT816(0);
              local_b18 = local_b38;
              auStack_b08 = auStack_b28;
              local_af8 = local_b38;
              auStack_ae8 = auStack_b28;
              local_ad8 = local_b38;
              local_ac8 = auStack_b28;
              local_ab8 = local_b38;
              local_aa8 = auStack_b28;
              local_a98 = local_b38;
              local_a88 = auStack_b28;
              local_a78 = local_b38;
              local_a68 = auStack_b28;
              local_a58 = local_b38;
              local_a48 = auStack_b28;
              puVar19 = (undefined8 *)local_b38;
              lVar18 = 2;
              pfVar20 = local_a28;
              do {
                uVar3 = puVar19[1];
                uVar4 = puVar19[2];
                uVar5 = puVar19[3];
                *(undefined8 *)pfVar20 = *puVar19;
                *(undefined8 *)(pfVar20 + 2) = uVar3;
                *(undefined8 *)(pfVar20 + 4) = uVar4;
                *(undefined8 *)(pfVar20 + 6) = uVar5;
                uVar3 = puVar19[5];
                uVar4 = puVar19[6];
                uVar5 = puVar19[7];
                *(undefined8 *)(pfVar20 + 8) = puVar19[4];
                *(undefined8 *)(pfVar20 + 10) = uVar3;
                *(undefined8 *)(pfVar20 + 0xc) = uVar4;
                *(undefined8 *)(pfVar20 + 0xe) = uVar5;
                uVar3 = puVar19[9];
                uVar4 = puVar19[10];
                uVar5 = puVar19[0xb];
                *(undefined8 *)(pfVar20 + 0x10) = puVar19[8];
                *(undefined8 *)(pfVar20 + 0x12) = uVar3;
                *(undefined8 *)(pfVar20 + 0x14) = uVar4;
                *(undefined8 *)(pfVar20 + 0x16) = uVar5;
                uVar3 = puVar19[0xd];
                *(undefined8 *)(pfVar20 + 0x18) = puVar19[0xc];
                *(undefined8 *)(pfVar20 + 0x1a) = uVar3;
                uVar3 = puVar19[0xf];
                *(undefined8 *)(pfVar20 + 0x1c) = puVar19[0xe];
                *(undefined8 *)(pfVar20 + 0x1e) = uVar3;
                puVar19 = puVar19 + 0x10;
                lVar18 = lVar18 + -1;
                pfVar20 = pfVar20 + 0x20;
              } while (lVar18 != 0);
              local_928 = '\x01';
LAB_180238a64:
              local_b88 = '\0';
              local_b87 = '\0';
              iVar28 = 0;
              if (DAT_180cc9350 < 1) {
LAB_180238cb0:
                iVar28 = 0;
              }
              else {
                pfVar20 = local_a28;
                while( true ) {
                  fVar30 = *pfVar20;
                  auVar36 = ZEXT464((uint)pfVar20[1]);
                  auVar37 = ZEXT464(DAT_180cc936c);
                  auVar35 = ZEXT1664(auVar35._0_16_);
                  auVar38 = ZEXT1664(auVar38._0_16_);
                  auVar40 = ZEXT1664(auVar40._0_16_);
                  auVar34 = ZEXT1664(auVar34._0_16_);
                  auVar41 = ZEXT1664(auVar41._0_16_);
                  sVar16 = thunk_FUN_180624430();
                  if ((((0 < sVar16) || (sVar16 = thunk_FUN_180624430(auVar36._0_8_), 0 < sVar16))
                      || (sVar16 = thunk_FUN_180624430(auVar37._0_8_), 0 < sVar16)) ||
                     (auVar37._0_4_ <= auVar40._0_4_)) break;
                  fVar32 = auVar36._0_4_;
                  fVar31 = fVar30 * local_b74 + auVar34._0_4_ + fVar32 * local_b70;
                  fVar29 = fVar30 * local_b6c + auVar41._0_4_ + fVar29 * fVar32;
                  fVar30 = fVar30 * local_b68 + local_b64 + fVar32 * local_b60;
                  fVar32 = fVar29 * fVar29 + fVar31 * fVar31 + fVar30 * fVar30;
                  auVar36 = ZEXT464((uint)fVar32);
                  sVar16 = thunk_FUN_180624430(fVar32);
                  fVar32 = auVar37._0_4_;
                  if ((0 < sVar16) || (fVar33 = auVar36._0_4_, fVar33 < auVar38._0_4_)) break;
                  if (fVar33 < 0.0) {
                    fVar33 = (float)FUN_18061e150(auVar36._0_8_);
                    fVar32 = auVar37._0_4_;
                  }
                  else {
                    fVar33 = SQRT(fVar33);
                  }
                  fVar32 = fVar32 / fVar33;
                  local_8b8 = fVar31 * fVar32;
                  local_8b4 = fVar29 * fVar32;
                  local_8b0 = fVar30 * fVar32;
                  local_8ac = 1;
                  if ((longlong)iVar2 - 1U < 0x14) {
                    iVar25 = -1;
                    auVar36 = ZEXT1664(auVar35._0_16_);
                    iVar23 = 0;
                    if (iVar2 < 1) {
LAB_180238c37:
                      uVar14 = uStack_b4c;
                      uStack_b4c = uStack_b4c & 0xffffff00;
                      uVar22 = CONCAT44(uVar14,local_b50) & 0xffffff00ffffffff;
                    }
                    else {
                      puVar27 = local_858;
                      do {
                        local_b7c = auVar35._0_4_;
                        cVar15 = FUN_180241440(puVar27,param_2,&local_8b8,&local_b7c);
                        if (cVar15 != '\0') {
                          auVar37 = ZEXT464(local_b7c);
                          sVar16 = thunk_FUN_180624430(local_b7c);
                          if (((sVar16 < 1) && (auVar40._0_4_ <= auVar37._0_4_)) &&
                             (auVar37._0_4_ < auVar36._0_4_)) {
                            auVar36 = ZEXT1664(auVar37._0_16_);
                            iVar25 = iVar23;
                          }
                        }
                        iVar23 = iVar23 + 1;
                        puVar27 = puVar27 + 0x60;
                      } while (iVar23 < iVar2);
                      if (iVar25 < 0) goto LAB_180238c37;
                      uStack_b54 = CONCAT31(uStack_b54._1_3_,1);
                      uVar22 = CONCAT44(uStack_b54,iVar25);
                      local_b58 = iVar25;
                    }
                    if ((char)(uVar22 >> 0x20) != '\0') {
                      cVar15 = FUN_1802404d0(local_b48,
                                             *(undefined4 *)
                                              (local_868 + (longlong)(int)uVar22 * 4 + -0x40));
                      if (cVar15 == '\0') goto LAB_180238c8d;
                      local_b88 = '\x01';
                    }
                  }
                  iVar28 = iVar28 + 1;
                  pfVar20 = pfVar20 + 2;
                  if (DAT_180cc9350 <= iVar28) {
                    cVar15 = local_b87;
                    goto LAB_180238c96;
                  }
                  fVar29 = local_b78;
                }
                local_8ac = 0;
LAB_180238c8d:
                cVar15 = '\x01';
LAB_180238c96:
                iVar23 = local_b80;
                iVar25 = local_b84;
                if ((local_b88 == '\0') || (cVar15 != '\0')) goto LAB_180238cb0;
                iVar28 = 1;
              }
              iVar25 = iVar25 + iVar28;
              fVar29 = local_b78;
              local_b84 = iVar25;
            }
            local_b80 = iVar23 + 1;
          } while (local_b80 < local_b5c);
        }
      }
    }
  }
}



