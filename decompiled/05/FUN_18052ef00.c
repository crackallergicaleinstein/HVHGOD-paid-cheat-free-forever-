// FUN_18052ef00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18052ef00 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18052ef00(float *param_1)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  char cVar8;
  short sVar9;
  int *piVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  int *piVar14;
  longlong lVar15;
  undefined8 *puVar16;
  int iVar17;
  char *pcVar18;
  int iVar19;
  int iVar20;
  ulonglong uVar21;
  int iVar22;
  undefined8 uVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  undefined *puVar27;
  longlong lVar28;
  float fVar29;
  undefined1 auVar30 [16];
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 in_ZMM10 [64];
  undefined1 auVar35 [64];
  float fVar36;
  undefined1 in_ZMM11 [64];
  undefined1 auVar37 [64];
  undefined4 uVar38;
  undefined1 auVar39 [64];
  undefined8 uVar40;
  undefined1 auVar41 [64];
  float fVar42;
  undefined1 auStack_668 [32];
  uint local_648 [2];
  int local_640 [2];
  int local_638 [2];
  int local_630;
  int local_62c;
  undefined1 local_628 [16];
  uint local_618;
  int local_610 [4];
  int local_600 [2];
  int local_5f8 [2];
  int local_5f0 [2];
  int local_5e8;
  int local_5e4 [2];
  float local_5dc;
  float local_5d8;
  float local_5d4;
  int local_5d0;
  int iStack_5cc;
  float *local_5c0;
  undefined1 local_5b8 [272];
  undefined8 local_4a8 [41];
  int local_360 [2];
  undefined1 local_358 [12];
  float fStack_34c;
  undefined8 local_348;
  int local_338 [2];
  undefined4 local_330;
  undefined1 local_328 [32];
  int local_308;
  int local_304;
  int local_300;
  uint local_2fc;
  int local_2f8;
  int local_2f4;
  undefined4 local_2f0;
  undefined4 local_2e8;
  undefined1 local_2c0 [88];
  undefined1 local_268 [32];
  int local_248;
  int local_244;
  undefined1 local_228;
  char cStack_227;
  undefined4 uStack_224;
  undefined1 uStack_220;
  undefined4 uStack_21c;
  uint uStack_218;
  undefined1 uStack_214;
  char cStack_213;
  undefined4 uStack_210;
  undefined1 uStack_20c;
  undefined4 local_208;
  uint uStack_204;
  undefined1 uStack_200;
  char cStack_1ff;
  undefined4 uStack_1fc;
  undefined1 uStack_1f8;
  undefined4 uStack_1f4;
  uint uStack_1f0;
  undefined1 uStack_fa;
  ulonglong local_d8;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  
  local_78 = in_ZMM10._0_16_;
  local_88 = in_ZMM11._0_16_;
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_668;
  local_5c0 = param_1;
  if ((DAT_180bbef49 == '\0') || (DAT_180bda4dc != 0)) {
    LOCK();
    DAT_180cd2898 = 0;
    UNLOCK();
    _DAT_180cd2918 = 0;
    FUN_180509360(&DAT_180cd21d0);
    LOCK();
    DAT_180cd3978 = 0;
    UNLOCK();
    _DAT_180cd39f8 = 0;
    FUN_180509360(&DAT_180cd32b0);
  }
  else {
    local_610[1] = 2;
    local_610[0] = 0;
    piVar10 = (int *)(*(longlong *)(*DAT_180c62f50 + (longlong)(int)DAT_180c62f50[3] * 8) + 0x2e8);
    iVar19 = *piVar10;
    piVar14 = local_610;
    if (-1 < iVar19) {
      piVar14 = piVar10;
    }
    piVar10 = local_610 + 1;
    if (iVar19 < 3) {
      piVar10 = piVar14;
    }
    iVar19 = *piVar10;
    _local_358 = (undefined1  [16])0x0;
    local_348 = 0;
    local_360[0] = 1;
    fVar42 = 0.0;
    local_62c = iVar19;
    if (((DAT_180bbab78 != 0) &&
        ((**(code **)(*(longlong *)DAT_180bbab78 + 0x2f8))(DAT_180bbab78,local_360),
        local_360[0] == 0)) || ((float)local_358._8_4_ <= fVar42)) {
      local_630 = 0;
      iVar26 = 0;
    }
    else {
      local_630 = (int)(float)local_358._8_4_;
      iVar26 = (int)fStack_34c;
    }
    uVar25 = 0;
    lVar28 = 0;
    uVar40 = 0x7fffffff7fffffff;
    auVar39 = ZEXT464(0x3f800000);
    auVar41 = ZEXT464(0x3f000000);
    do {
      iVar5 = local_630;
      uVar21 = 0;
      if (lVar28 != 0) {
        uVar21 = (ulonglong)((iVar19 == 2) + 1);
      }
      iVar20 = (int)uVar21;
      iVar19 = (iVar20 != 0) + 2;
      puVar27 = &DAT_180cd1850;
      if (uVar25 != 0) {
        puVar27 = &DAT_180cd2930;
      }
      if ((*(longlong *)(puVar27 + 0x1068) == 0) ||
         ((*(int *)((longlong)DAT_180c62f50 + 0x24) == 2 && (uVar25 == (local_62c != 0))))) {
        FUN_1803f1ee0(local_338);
        FUN_1803c9e70(&local_228);
        if (iVar20 == 0) {
          local_338[0] = 0x13ac;
          pcVar18 = "agents/models/tm_phoenix/tm_phoenix.vmdl";
          uVar23 = 0x28;
        }
        else {
          local_338[0] = 0x13ad;
          pcVar18 = "agents/models/ctm_sas/ctm_sas.vmdl";
          uVar23 = 0x22;
        }
        local_330 = 3;
        FUN_180113930(local_328,pcVar18,uVar23);
        local_248 = iVar19;
        local_244 = iVar19;
        local_638[0] = iVar26;
        local_640[0] = iVar5;
        local_5f0[0] = (int)(DAT_180b0a41c * 90.0 + local_5c0[1]);
        auVar30 = vpcmpeqd_avx(ZEXT416(uVar25),SUB6416(ZEXT464(0),0));
        auVar30 = vblendvps_avx(SUB6416(ZEXT464(0x43c80000),0),SUB6416(ZEXT464(0x431c0000),0),
                                auVar30);
        local_600[0] = (int)(auVar30._0_4_ * DAT_180b0a41c + *local_5c0);
        if (((iVar5 < 1) || (iVar26 < 1)) ||
           (((int)(DAT_180b0a41c * 225.0) < 0x10 || ((int)(DAT_180b0a41c * 385.0) < 0x10)))) {
          _local_358 = (undefined1  [16])0x0;
          uVar13 = 0;
          iVar17 = 0;
          iVar24 = 0;
          iVar19 = 0;
        }
        else {
          local_610[2] = 0;
          piVar14 = local_610 + 2;
          if (-1 < local_600[0]) {
            piVar14 = local_600;
          }
          piVar10 = local_640;
          if (local_600[0] <= iVar5) {
            piVar10 = piVar14;
          }
          iVar19 = *piVar10;
          local_360[0] = iVar19;
          local_5f8[0] = 0;
          piVar14 = local_5f8;
          if (-1 < local_5f0[0]) {
            piVar14 = local_5f0;
          }
          piVar10 = local_638;
          if (local_5f0[0] <= iVar26) {
            piVar10 = piVar14;
          }
          iVar24 = *piVar10;
          local_5e4[0] = iVar24;
          local_5e8 = (int)(DAT_180b0a41c * 225.0) + local_600[0];
          iVar22 = (int)(DAT_180b0a41c * 385.0) + local_5f0[0];
          local_628._0_4_ = iVar22;
          piVar14 = local_360;
          if (iVar19 <= local_5e8) {
            piVar14 = &local_5e8;
          }
          piVar10 = local_640;
          if (local_5e8 <= iVar5) {
            piVar10 = piVar14;
          }
          iVar17 = *piVar10 - iVar19;
          local_358._8_4_ = iVar17;
          piVar14 = local_5e4;
          if (iVar24 <= iVar22) {
            piVar14 = (int *)local_628;
          }
          piVar10 = local_638;
          if (iVar22 <= iVar26) {
            piVar10 = piVar14;
          }
          uVar13 = *piVar10 - iVar24;
          fStack_34c = (float)uVar13;
        }
        if ((iVar17 < 0x10) || (local_358._12_4_ < 0x10)) {
          FUN_1805093c0(puVar27);
        }
        else {
          local_2f0 = *(undefined4 *)(&DAT_180c62f58 + uVar21 * 4);
          if (iVar20 == 0) {
            pcVar18 = &DAT_180cb00f8;
            cVar8 = DAT_180cb00f8;
          }
          else {
            pcVar18 = &DAT_180cb07f8;
            if (iVar20 != 1) {
              pcVar18 = &DAT_180cb0ef8;
            }
            cVar8 = *pcVar18;
          }
          if ((cVar8 == '\0') || (pcVar18[0x68] == '\0')) {
            local_228 = 0;
          }
          else {
            local_228 = 1;
          }
          cStack_227 = pcVar18[0xe0];
          local_308 = iVar19;
          local_304 = iVar24;
          local_300 = iVar17;
          local_2fc = uVar13;
          local_2f8 = iVar5;
          local_2f4 = iVar26;
          GetTickCount64();
          uStack_224 = *(undefined4 *)(pcVar18 + 0xd0);
          GetTickCount64();
          uStack_21c = *(undefined4 *)(pcVar18 + 0xd4);
          uVar13 = *(uint *)(pcVar18 + 0xe4);
          if ((int)uVar13 < 0) {
            uVar13 = (uint)(10 < (byte)pcVar18[0xe0]);
          }
          else {
            local_648[0] = 2;
            local_360[0] = 0;
            puVar11 = local_648;
            if ((int)uVar13 < 3) {
              puVar11 = (uint *)(pcVar18 + 0xe4);
            }
            uVar13 = *puVar11;
          }
          uStack_220 = uVar13 == 1;
          uStack_218 = *(uint *)(pcVar18 + 0xdc);
          if (uStack_218 == 0) {
            uStack_218 = (uint)(byte)pcVar18[0xd8];
          }
          if ((*pcVar18 == '\0') || (pcVar18[0x170] == '\0')) {
            uStack_214 = 0;
          }
          else {
            uStack_214 = 1;
          }
          cStack_213 = pcVar18[0x1e8];
          GetTickCount64();
          uStack_210 = *(undefined4 *)(pcVar18 + 0x1d8);
          GetTickCount64();
          local_208 = *(undefined4 *)(pcVar18 + 0x1dc);
          uVar13 = *(uint *)(pcVar18 + 0x1ec);
          if ((int)uVar13 < 0) {
            uVar13 = (uint)(10 < (byte)pcVar18[0x1e8]);
          }
          else {
            local_648[0] = 2;
            local_360[0] = 0;
            puVar11 = local_648;
            if ((int)uVar13 < 3) {
              puVar11 = (uint *)(pcVar18 + 0x1ec);
            }
            uVar13 = *puVar11;
          }
          uStack_20c = uVar13 == 1;
          uStack_204 = *(uint *)(pcVar18 + 0x1e4);
          if (uStack_204 == 0) {
            uStack_204 = (uint)(byte)pcVar18[0x1e0];
          }
          if ((*pcVar18 == '\0') || (pcVar18[0x278] == '\0')) {
            uStack_200 = 0;
          }
          else {
            uStack_200 = 1;
          }
          cStack_1ff = pcVar18[0x2f0];
          GetTickCount64();
          uStack_1fc = *(undefined4 *)(pcVar18 + 0x2e0);
          GetTickCount64();
          uStack_1f4 = *(undefined4 *)(pcVar18 + 0x2e4);
          uVar13 = *(uint *)(pcVar18 + 0x2f4);
          if ((int)uVar13 < 0) {
            uVar13 = (uint)(10 < (byte)pcVar18[0x2f0]);
          }
          else {
            local_648[0] = 2;
            local_360[0] = 0;
            puVar11 = local_648;
            if ((int)uVar13 < 3) {
              puVar11 = (uint *)(pcVar18 + 0x2f4);
            }
            uVar13 = *puVar11;
          }
          uStack_1f8 = uVar13 == 1;
          uStack_1f0 = *(uint *)(pcVar18 + 0x2ec);
          if (uStack_1f0 == 0) {
            uStack_1f0 = (uint)(byte)pcVar18[0x2e8];
          }
          local_5d0 = local_338[0];
          iStack_5cc = local_300;
          lVar15 = CONCAT44(local_300,local_338[0]) - *(longlong *)(lVar28 * 0x14 + 0x180b0b2c0);
          if (lVar15 == 0) {
            lVar15 = (ulonglong)local_2fc - (ulonglong)*(uint *)(lVar28 * 0x14 + 0x180b0b2c8);
          }
          if (lVar15 == 0) {
            if (((*(char *)(lVar28 * 0x14 + 0x180b0b2d0) == '\0') &&
                (*(longlong *)(puVar27 + 0xb28) == *(longlong *)(puVar27 + 0xb10))) &&
               (*(longlong *)(puVar27 + 0xc10) != 0)) {
              local_628 = (undefined1  [16])0x0;
              FUN_1803ed0c0(local_628,(iVar20 != 0) + '\x04');
              if (((local_628._0_8_ != 0) && (*(int *)(local_628._0_8_ + 0x14) == local_338[0])) &&
                 ((*(char *)(local_628._0_8_ + 0x164) != '\0' &&
                  (*(char *)(local_628._0_8_ + 0x170) != '\0')))) {
                fVar31 = *(float *)(local_628._0_8_ + 0x16c);
                fVar32 = *(float *)(local_628._0_8_ + 0x168);
                fVar29 = *(float *)(local_628._0_8_ + 0x160);
                fVar33 = *(float *)(local_628._0_8_ + 0x15c);
                fVar34 = (float)(int)local_2fc;
                auVar35 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),fVar34));
                fVar36 = (float)local_300;
                auVar37 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),fVar36));
                if (((fVar36 < 16.0) || (fVar34 < 16.0)) ||
                   ((sVar9 = thunk_FUN_180624430(fVar36 + fVar34 + fVar33 + fVar29 + fVar32 + fVar31
                                                ), 0 < sVar9 ||
                    ((fVar32 <= fVar33 || (fVar31 <= fVar29)))))) {
LAB_18052f794:
                  uVar38 = auVar39._0_4_;
                }
                else {
                  fVar34 = auVar41._0_4_;
                  uVar13 = (uint)uVar40;
                  auVar30 = vmaxss_avx(ZEXT416((uint)(fVar32 - fVar34) & uVar13),
                                       ZEXT416((uint)(fVar33 - fVar34) & uVar13));
                  auVar2 = vmaxss_avx(ZEXT416((uint)(fVar31 - fVar34) & uVar13),
                                      ZEXT416((uint)(fVar29 - fVar34) & uVar13));
                  fVar31 = auVar2._0_4_ + auVar2._0_4_;
                  fVar32 = auVar30._0_4_ + auVar30._0_4_;
                  if ((fVar32 <= fVar42) || (fVar31 <= fVar42)) goto LAB_18052f794;
                  local_5e4[1] = 0x40000000;
                  fVar29 = auVar37._0_4_ * auVar35._0_4_;
                  auVar30 = vmaxss_avx(SUB6416(ZEXT464(0x48fa0000),0),ZEXT416((uint)fVar29));
                  fVar29 = auVar30._0_4_ / fVar29;
                  if (fVar29 < 0.0) {
                    local_5dc = (float)FUN_18061e150();
                  }
                  else {
                    local_5dc = SQRT(fVar29);
                  }
                  local_5d8 = 0.9 / fVar32;
                  local_5d4 = 0.9 / fVar31;
                  puVar11 = (uint *)FUN_1805f9e60(local_5e4 + 1,&local_5d0,0);
                  auVar30 = vmaxss_avx(ZEXT416(*puVar11),auVar39._0_16_);
                  uVar38 = auVar30._0_4_;
                }
                *(undefined4 *)(lVar28 * 0x14 + 0x180b0b2cc) = uVar38;
                *(undefined1 *)(lVar28 * 0x14 + 0x180b0b2d0) = 1;
                *(undefined1 *)((longlong)DAT_180c62f50 + 0x716c) = 0;
              }
              uVar23 = local_628._8_8_;
              if ((longlong *)local_628._8_8_ != (longlong *)0x0) {
                LOCK();
                plVar1 = (longlong *)(local_628._8_8_ + 8);
                lVar15 = *plVar1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)lVar15 == 1) {
                  (*(code *)**(undefined8 **)local_628._8_8_)(local_628._8_8_);
                  LOCK();
                  piVar14 = (int *)(uVar23 + 0xc);
                  iVar19 = *piVar14;
                  *piVar14 = *piVar14 + -1;
                  UNLOCK();
                  if (iVar19 == 1) {
                    (**(code **)(*(longlong *)uVar23 + 8))(uVar23);
                  }
                }
              }
            }
          }
          else {
            auVar30._4_4_ = local_300;
            auVar30._0_4_ = local_338[0];
            local_628._8_4_ = local_2fc;
            local_618 = local_618 & 0xffffff00;
            auVar30._8_8_ = local_628._8_8_;
            local_628 = vinsertps_avx(auVar30,auVar39._0_16_,0x30);
            *(undefined1 (*) [16])(lVar28 * 0x14 + 0x180b0b2c0) = local_628;
            *(uint *)(lVar28 * 0x14 + 0x180b0b2d0) = local_618;
            *(undefined1 *)((longlong)DAT_180c62f50 + 0x716c) = 0;
          }
          local_2e8 = *(undefined4 *)(lVar28 * 0x14 + 0x180b0b2cc);
          uStack_fa = 0;
          FUN_1801d8a70(local_5b8,local_338);
          lVar15 = 2;
          puVar6 = (undefined8 *)&local_228;
          puVar7 = local_4a8;
          do {
            puVar16 = puVar7;
            puVar12 = puVar6;
            uVar23 = puVar12[1];
            uVar3 = puVar12[2];
            uVar4 = puVar12[3];
            *puVar16 = *puVar12;
            puVar16[1] = uVar23;
            puVar16[2] = uVar3;
            puVar16[3] = uVar4;
            uVar23 = puVar12[5];
            uVar3 = puVar12[6];
            uVar4 = puVar12[7];
            puVar16[4] = puVar12[4];
            puVar16[5] = uVar23;
            puVar16[6] = uVar3;
            puVar16[7] = uVar4;
            uVar23 = puVar12[9];
            uVar3 = puVar12[10];
            uVar4 = puVar12[0xb];
            puVar16[8] = puVar12[8];
            puVar16[9] = uVar23;
            puVar16[10] = uVar3;
            puVar16[0xb] = uVar4;
            uVar23 = puVar12[0xd];
            puVar16[0xc] = puVar12[0xc];
            puVar16[0xd] = uVar23;
            uVar23 = puVar12[0xf];
            puVar16[0xe] = puVar12[0xe];
            puVar16[0xf] = uVar23;
            lVar15 = lVar15 + -1;
            puVar6 = puVar12 + 0x10;
            puVar7 = puVar16 + 0x10;
          } while (lVar15 != 0);
          uVar23 = puVar12[0x11];
          uVar3 = puVar12[0x12];
          uVar4 = puVar12[0x13];
          puVar16[0x10] = puVar12[0x10];
          puVar16[0x11] = uVar23;
          puVar16[0x12] = uVar3;
          puVar16[0x13] = uVar4;
          uVar23 = puVar12[0x15];
          uVar3 = puVar12[0x16];
          uVar4 = puVar12[0x17];
          puVar16[0x14] = puVar12[0x14];
          puVar16[0x15] = uVar23;
          puVar16[0x16] = uVar3;
          puVar16[0x17] = uVar4;
          puVar16[0x18] = puVar12[0x18];
          auVar39 = ZEXT1664(auVar39._0_16_);
          auVar41 = ZEXT1664(auVar41._0_16_);
          FUN_1803c10e0(puVar27,local_5b8);
        }
        FUN_18015c010(local_268);
        FUN_18015c010(local_2c0);
        FUN_18015c010(local_328);
      }
      else {
        FUN_1805093c0(puVar27);
      }
      uVar25 = uVar25 + 1;
      lVar28 = lVar28 + 1;
      iVar19 = local_62c;
    } while (lVar28 < 2);
  }
}



