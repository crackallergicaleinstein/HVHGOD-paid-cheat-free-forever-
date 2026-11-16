// FUN_1802b9330 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802b9330 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1802b9330(void)

{
  char *pcVar1;
  undefined1 uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  undefined *puVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  longlong lVar10;
  int *piVar11;
  ULONGLONG UVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  ulonglong *puVar18;
  byte bVar19;
  float fVar20;
  code *pcVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined *puVar28;
  code *pcVar29;
  undefined4 uVar30;
  ulonglong uVar31;
  undefined1 auVar32 [64];
  undefined4 uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  undefined1 auVar39 [64];
  undefined1 auVar40 [64];
  undefined1 auStack_298 [32];
  ulonglong local_278;
  double local_270;
  double local_268;
  double local_260;
  double local_258;
  double local_250;
  ulonglong local_248;
  ulonglong local_240;
  ulonglong local_238;
  undefined8 local_228;
  undefined4 local_220;
  float local_218;
  undefined4 uStack_214;
  undefined8 uStack_210;
  char *local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  ulonglong uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8 [16];
  undefined8 uStack_1c8;
  ulonglong uStack_1c0;
  ulonglong local_1b8 [9];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148 [16];
  char local_138 [112];
  longlong local_c8;
  float local_c0 [2];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  float local_a4;
  undefined4 local_a0;
  ulonglong local_98;
  
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_298;
  local_218 = 0.0;
  lVar10 = FUN_18017ea70();
  lVar10 = *(longlong *)(lVar10 + 8);
  local_c8 = lVar10;
  piVar11 = (int *)FUN_18017ea70();
  *piVar11 = *piVar11 + 1;
  *(char **)(piVar11 + 2) = "dynamic light: frame update";
  local_148 = ZEXT816(0x1807d1810);
  FUN_18017bf40(local_148 + 8);
  iVar9 = FUN_1805f68d0(&DAT_180902d10);
  uStack_210 = CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
  if (iVar9 != 0) goto LAB_1802ba944;
  if (DAT_180902d5c == 0x7fffffff) {
    DAT_180902d5c = 0x7ffffffe;
    goto LAB_1802ba939;
  }
  auVar36 = ZEXT1664(_DAT_180902d60);
  FUN_1805f68fc(&DAT_180902d10);
  if (auVar36[0] == '\0') {
    uStack_210 = CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
    if (DAT_180902d80 - 0x10000000U < 0x7ffff0000000) {
      uStack_210 = CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
      if (DAT_180902d88 - 0x10000000U < 0x7ffff0000000) {
        FUN_1802b8de0();
        goto LAB_1802ba700;
      }
    }
  }
  else {
    if ((DAT_180cce330 & 1) == 0) {
      DAT_180cce330 = DAT_180cce330 | 1;
      atexit(FUN_180662340);
    }
    puVar6 = DAT_1808f5308;
    puVar28 = DAT_1808da460;
    puVar18 = (ulonglong *)0xffffffffffffffff;
    uVar31 = 1000;
    if ((DAT_1808f5308 == DAT_1808da460) && (lVar14 = DAT_180c6e770, DAT_180c6e770 != 0)) {
LAB_1802b9617:
      lVar13 = FUN_18017ea70();
      *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
      local_218 = 0.0;
      uStack_214 = 0;
      cVar7 = FUN_1804514f0(&local_218,lVar14,8);
      lVar13 = local_c8;
      if (cVar7 != '\0') {
        lVar13 = CONCAT44(uStack_214,local_218);
      }
      lVar14 = FUN_18017ea70();
      if (*(int *)(lVar14 + 4) != 0) {
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
      }
      lVar14 = 0;
      if (cVar7 != '\0') {
        lVar14 = lVar13;
      }
    }
    else {
      UVar12 = GetTickCount64();
      if ((puVar6 != puVar28) || (DAT_180c6e760 <= UVar12)) {
        local_228 = &DAT_1808f5250;
        iVar9 = FUN_1805f68d0(&DAT_1808f5250);
        lVar14 = CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
        uStack_210 = lVar14;
        if (iVar9 != 0) goto LAB_1802ba944;
        if (DAT_1808f529c == 0x7fffffff) {
          DAT_1808f529c = 0x7ffffffe;
          goto LAB_1802ba939;
        }
        if (DAT_1808f5308 == puVar28) {
          uStack_210 = CONCAT44(uStack_210._4_4_,(undefined4)uStack_210);
          if ((DAT_180c6e770 == 0) && (uStack_210 = lVar14, DAT_180c6e760 <= UVar12))
          goto LAB_1802b9563;
        }
        else {
          DAT_1808f52a0 = 1000;
LAB_1802b9563:
          lVar14 = -1;
          do {
            uStack_210 = lVar14 + 1;
            lVar13 = lVar14 + 1;
            lVar14 = uStack_210;
          } while ("client.dll:488BD94533C0488B0D*????????BA01000000E8????????8B0B"[lVar13] != '\0')
          ;
          local_218 = -1.1977055e-38;
          uStack_214 = 1;
          local_1f8 = "patterns::dynamic_light_manager";
          uStack_1f0 = 0x1f;
          DAT_180c6e770 = FUN_1800e5d20(&local_1f8,&local_218);
          DAT_1808f5308 = puVar28;
          DAT_180c6e760 = 0xffffffffffffffff;
          if (DAT_180c6e770 == 0) {
            DAT_180c6e760 = DAT_1808f52a0 + UVar12;
            if (DAT_1808f52a0 < 60000) {
              DAT_1808f52a0 = DAT_1808f52a0 * 2;
            }
            else {
              DAT_1808f52a0 = 60000;
            }
          }
          else {
            DAT_1808f52a0 = 1000;
          }
        }
        lVar14 = DAT_180c6e770;
        FUN_1805f68fc(&DAT_1808f5250);
        if (lVar14 != 0) goto LAB_1802b9617;
      }
      lVar14 = 0;
    }
    if ((DAT_180cce330 & 1) == 0) {
      DAT_180cce330 = DAT_180cce330 | 1;
      atexit(FUN_180662340);
    }
    puVar28 = DAT_1808da460;
    local_218 = SUB84(DAT_1808f51e0,0);
    uStack_214 = (undefined4)((ulonglong)DAT_1808f51e0 >> 0x20);
    if ((DAT_1808f51e0 != DAT_1808da460) || (pcVar21 = (code *)DAT_180c6e768, DAT_180c6e768 == 0)) {
      UVar12 = GetTickCount64();
      if (((undefined *)CONCAT44(uStack_214,local_218) == puVar28) && (UVar12 < DAT_180c6e758)) {
        pcVar21 = (code *)0x0;
      }
      else {
        local_228 = &DAT_1808f51f0;
        iVar9 = FUN_1805f68d0(&DAT_1808f51f0);
        if (iVar9 != 0) goto LAB_1802ba944;
        if (DAT_1808f523c == 0x7fffffff) {
          DAT_1808f523c = 0x7ffffffe;
          goto LAB_1802ba939;
        }
        if (DAT_1808f51e0 == puVar28) {
          if ((DAT_180c6e768 == 0) && (DAT_180c6e758 <= UVar12)) goto LAB_1802b9750;
        }
        else {
          DAT_1808f5240 = 1000;
LAB_1802b9750:
          uVar23 = 0xffffffffffffffff;
          do {
            uStack_1f0 = uVar23 + 1;
            lVar13 = uVar23 + 1;
            uVar23 = uStack_1f0;
          } while ("client.dll:488BD94533C0488B0D????????BA01000000>E8????????8B0B"[lVar13] != '\0')
          ;
          local_1f8 = "client.dll:488BD94533C0488B0D????????BA01000000>E8????????8B0B";
          local_218 = -1.148798e-38;
          uStack_214 = 1;
          uStack_210._0_4_ = 0x1d;
          uStack_210._4_4_ = 0;
          DAT_180c6e768 = FUN_1800e5d20(&local_218,&local_1f8);
          DAT_1808f51e0 = puVar28;
          DAT_180c6e758 = 0xffffffffffffffff;
          if (DAT_180c6e768 == 0) {
            DAT_180c6e758 = DAT_1808f5240 + UVar12;
            if (DAT_1808f5240 < 60000) {
              DAT_1808f5240 = DAT_1808f5240 * 2;
            }
            else {
              DAT_1808f5240 = 60000;
            }
          }
          else {
            DAT_1808f5240 = 1000;
          }
        }
        pcVar21 = (code *)DAT_180c6e768;
        FUN_1805f68fc(&DAT_1808f51f0);
      }
    }
    if ((DAT_180cce330 & 1) == 0) {
      DAT_180cce330 = DAT_180cce330 | 1;
      atexit(FUN_180662340);
    }
    puVar28 = DAT_1808da460;
    local_228 = DAT_1808f5188;
    if ((DAT_1808f5188 != DAT_1808da460) || (pcVar29 = (code *)DAT_180c6e748, DAT_180c6e748 == 0)) {
      UVar12 = GetTickCount64();
      local_218 = (float)UVar12;
      uStack_214 = (undefined4)(UVar12 >> 0x20);
      if ((local_228 == puVar28) && (UVar12 < DAT_180c6e750)) {
        pcVar29 = (code *)0x0;
      }
      else {
        local_228 = &DAT_1808f5190;
        iVar9 = FUN_1805f68d0(&DAT_1808f5190);
        if (iVar9 != 0) goto LAB_1802ba944;
        if (DAT_1808f51dc == 0x7fffffff) {
          DAT_1808f51dc = 0x7ffffffe;
          goto LAB_1802ba939;
        }
        if (DAT_1808f5188 == puVar28) {
          if ((DAT_180c6e748 == 0) && (DAT_180c6e750 <= CONCAT44(uStack_214,local_218)))
          goto LAB_1802b98e7;
        }
        else {
          DAT_1808f5180 = 1000;
LAB_1802b98e7:
          uVar23 = 0xffffffffffffffff;
          do {
            uStack_1f0 = uVar23 + 1;
            pcVar1 = "lient.dll:40534883EC20488BD985D2741A488B05????????F30F104830" + uVar23;
            uVar23 = uStack_1f0;
          } while (*pcVar1 != '\0');
          local_1f8 = "client.dll:40534883EC20488BD985D2741A488B05????????F30F104830";
          local_208 = "patterns::dynamic_light_time";
          uStack_200._0_4_ = 0x1c;
          uStack_200._4_4_ = 0;
          DAT_180c6e748 = FUN_1800e5d20(&local_208,&local_1f8);
          DAT_1808f5188 = puVar28;
          if (DAT_180c6e748 == 0) {
            DAT_180c6e750 = CONCAT44(uStack_214,local_218) + DAT_1808f5180;
            uVar31 = DAT_1808f5180 * 2;
            if (59999 < DAT_1808f5180) {
              uVar31 = 60000;
            }
          }
          else {
            DAT_180c6e750 = 0xffffffffffffffff;
          }
          DAT_1808f5180 = uVar31;
        }
        pcVar29 = (code *)DAT_180c6e748;
        FUN_1805f68fc(&DAT_1808f5190);
      }
    }
    if (((lVar14 - 0x10000000U < 0x7ffff0000000) && (pcVar21 != (code *)0x0)) &&
       (pcVar29 != (code *)0x0)) {
      AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      local_1d8._8_8_ = uRam0000000180bb8898;
      local_1d8._0_8_ = _DAT_180bb8890;
      uStack_1c8 = uRam0000000180bb88a0;
      uStack_1c0 = uRam0000000180bb88a8;
      auVar36 = ZEXT1664(auVar36._0_16_);
      cVar7 = cRam0000000180bb88b8;
      ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
      auVar35 = auVar36._0_16_;
      if (((local_1d8._0_8_ != 0) &&
          (local_228 = (undefined *)local_1d8._8_8_,
          (undefined *)local_1d8._8_8_ != (undefined *)0x0)) && (cVar7 != '\0')) {
        if (DAT_180902d88 - 0x10000000U < 0x7ffff0000000) {
          lVar13 = DAT_180902d88 + 0x24;
          auVar36 = ZEXT1664(auVar35);
          lVar15 = FUN_18017ea70();
          *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
          if (lVar13 == 0) {
            bVar5 = false;
            local_218 = local_c0[0];
          }
          else {
            local_218 = 0.0;
            cVar7 = FUN_1804514f0(&local_218,lVar13,4);
            if (cVar7 == '\0') {
              bVar5 = false;
              local_218 = local_c0[0];
            }
            else {
              bVar5 = true;
            }
          }
          lVar13 = FUN_18017ea70();
          auVar35 = auVar36._0_16_;
          if (*(int *)(lVar13 + 4) != 0) {
            *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
          }
          fVar20 = 0.0;
          if (bVar5) {
            fVar20 = local_218;
          }
        }
        else {
          fVar20 = 0.0;
        }
        auVar34._12_4_ = 0;
        auVar34._0_12_ = ZEXT812(0);
        auVar34 = auVar34 << 0x20;
        if ((lVar14 != DAT_180902d80) || (lVar13 = DAT_180902d88, fVar20 != 5.615383e+13)) {
          DAT_180902d70 = (undefined *)0x0;
          DAT_180902d78 = 0;
          DAT_180902d7c = 0;
          auVar36 = ZEXT1264(ZEXT812(0)) << 0x20;
          auVar37 = ZEXT1664(auVar35);
          lVar13 = (*pcVar21)(lVar14,0x564c4954,0);
          auVar35 = auVar37._0_16_;
          auVar34 = auVar36._0_16_;
          DAT_180902d88 = lVar13;
          DAT_180902d80 = lVar14;
        }
        iVar9 = DAT_180c6e738;
        if (0x7fffefffffff < lVar13 - 0x10000000U) goto LAB_1802ba700;
        if (DAT_180c6e738 == 0) {
          auVar36 = ZEXT1664(auVar34);
          auVar37 = ZEXT1664(auVar35);
          UVar12 = GetTickCount64();
          auVar35 = auVar37._0_16_;
          auVar34 = auVar36._0_16_;
          if (DAT_180c6e740 <= UVar12) {
            local_218 = -1.3161488e-38;
            uStack_214 = 1;
            iVar9 = FUN_1805f68d0(&DAT_1808f50e0);
            if (iVar9 != 0) goto LAB_1802ba944;
            if (DAT_1808f512c == 0x7fffffff) {
              DAT_1808f512c = 0x7ffffffe;
              goto LAB_1802ba939;
            }
            if ((DAT_180c6e738 == 0) && (DAT_180c6e740 <= UVar12)) {
              DAT_180c6e738 = FUN_1804174b0("C_BaseEntity",0x9d930423);
              if (DAT_180c6e738 == 0) {
                DAT_180c6e740 = UVar12 + 1000;
              }
              else {
                DAT_180c6e740 = 0xffffffffffffffff;
              }
            }
            iVar9 = DAT_180c6e738;
            FUN_1805f68fc(&DAT_1808f50e0);
            auVar35 = auVar37._0_16_;
            auVar34 = auVar36._0_16_;
          }
        }
        auVar36 = ZEXT1664(auVar34);
        auVar37 = ZEXT1664(auVar35);
        lVar13 = FUN_18017ea70();
        *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
        if (local_228 + iVar9 == (undefined *)0x0) {
          bVar5 = false;
          puVar28 = local_228;
        }
        else {
          local_218 = 0.0;
          uStack_214 = 0;
          cVar7 = FUN_1804514f0(&local_218,local_228 + iVar9,8);
          if (cVar7 == '\0') {
            bVar5 = false;
            puVar28 = local_228;
          }
          else {
            puVar28 = (undefined *)CONCAT44(uStack_214,local_218);
            bVar5 = true;
          }
        }
        lVar13 = FUN_18017ea70();
        if (*(int *)(lVar13 + 4) != 0) {
          *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
        }
        iVar9 = DAT_180c6e728;
        if ((!bVar5) || ((undefined *)0x7fffefffffff < puVar28 + -0x10000000)) {
          uStack_200._4_4_ = uStack_200._4_4_ & 0xffffff00;
          auVar35._8_4_ = (undefined4)uStack_200;
          auVar35._0_8_ = local_208;
          auVar35._12_4_ = uStack_200._4_4_;
        }
        else {
          if (DAT_180c6e728 == 0) {
            UVar12 = GetTickCount64();
            if (DAT_180c6e730 <= UVar12) {
              local_228 = &DAT_1808f5130;
              iVar9 = FUN_1805f68d0(&DAT_1808f5130);
              if (iVar9 != 0) {
LAB_1802ba944:
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(5);
              }
              if (DAT_1808f517c == 0x7fffffff) {
                DAT_1808f517c = 0x7ffffffe;
LAB_1802ba939:
                    /* WARNING: Subroutine does not return */
                FUN_1805f6d44(6);
              }
              if ((DAT_180c6e728 == 0) && (DAT_180c6e730 <= UVar12)) {
                DAT_180c6e728 = FUN_1804174b0("CGameSceneNode",0xe8b4eae5);
                if (DAT_180c6e728 == 0) {
                  DAT_180c6e730 = UVar12 + 1000;
                }
                else {
                  DAT_180c6e730 = 0xffffffffffffffff;
                }
              }
              iVar9 = DAT_180c6e728;
              FUN_1805f68fc(&DAT_1808f5130);
            }
          }
          lVar13 = FUN_18017ea70();
          *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
          lVar13 = uStack_210;
          if (puVar28 + iVar9 == (undefined *)0x0) {
LAB_1802b9d6c:
            uStack_210._4_4_ = (uint)((ulonglong)lVar13 >> 0x20);
            uStack_210._0_4_ = (undefined4)lVar13;
            uStack_210._4_4_ = uStack_210._4_4_ & 0xffffff00;
          }
          else {
            local_220 = auVar36._0_4_;
            local_228 = (undefined *)CONCAT44(local_220,local_220);
            cVar7 = FUN_1804514f0(&local_228,puVar28 + iVar9,0xc);
            lVar13 = uStack_210;
            if (cVar7 == '\0') goto LAB_1802b9d6c;
            local_218 = SUB84(local_228,0);
            uStack_214 = (undefined4)((ulonglong)local_228 >> 0x20);
            uStack_210._0_4_ = local_220;
            uStack_210._4_4_ = CONCAT31(SUB83(lVar13,5),1);
          }
          lVar13 = FUN_18017ea70();
          if (*(int *)(lVar13 + 4) != 0) {
            *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
          }
          auVar35._4_4_ = uStack_214;
          auVar35._0_4_ = local_218;
          auVar35._8_4_ = (undefined4)uStack_210;
          auVar35._12_4_ = uStack_210._4_4_;
        }
        auVar32 = ZEXT1664(auVar35);
        if (auVar35[0xc] != '\0') {
          sVar8 = thunk_FUN_180624430(auVar35._0_8_);
          if (sVar8 < 1) {
            auVar34 = vshufps_avx(auVar32._0_16_,auVar32._0_16_,0x55);
            auVar38 = ZEXT1664(auVar34);
            sVar8 = thunk_FUN_180624430(auVar34._0_8_);
            if (sVar8 < 1) {
              fVar20 = auVar35._8_4_;
              sVar8 = thunk_FUN_180624430(fVar20);
              if (sVar8 < 1) {
                local_c0[0] = auVar36._0_4_;
                (*pcVar29)(local_c0,0);
                auVar35 = vshufps_avx(auVar37._0_16_,auVar37._0_16_,0xff);
                auVar39 = ZEXT464((uint)(fVar20 + auVar35._0_4_));
                fVar20 = local_c0[0];
                sVar8 = thunk_FUN_180624430(local_c0[0]);
                if (sVar8 < 1) {
                  sVar8 = thunk_FUN_180624430(auVar39._0_8_);
                  uVar33 = auVar36._0_4_;
                  if (sVar8 < 1) {
                    local_b8 = auVar32._0_4_;
                    local_b4 = auVar38._0_4_;
                    local_b0 = auVar39._0_4_;
                    auVar35 = vshufps_avx(auVar37._0_16_,auVar37._0_16_,0xaa);
                    auVar40 = ZEXT1664(auVar35);
                    local_ac = auVar35._0_4_;
                    uVar30 = auVar37._4_4_;
                    local_a4 = fVar20 + 5.0;
                    lVar13 = DAT_180902d88 + 4;
                    local_a8 = uVar30;
                    local_a0 = uVar33;
                    if (lVar13 != 0) {
                      lVar15 = FUN_18017ea70();
                      *(int *)(lVar15 + 4) = *(int *)(lVar15 + 4) + 1;
                      cVar7 = FUN_1804514c0(lVar13,&local_b8,0x1c);
                      lVar13 = FUN_18017ea70();
                      uVar33 = auVar36._0_4_;
                      if (*(int *)(lVar13 + 4) != 0) {
                        *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + -1;
                      }
                      if (cVar7 != '\0') {
                        if (DAT_180902d90 == '\0') {
                          local_1b8[0] = 0xdb35e39b27e1c185;
                          local_1b8[1] = 0xa05181ee77d57a06;
                          local_1b8[2] = 0x929654b1461b7377;
                          local_1b8[3] = 0xa5cea54bfef7110;
                          local_1b8[4] = 0xa70c9f7f916b7e19;
                          local_1b8[5] = 0x2b2d6d82aa402c0a;
                          local_1b8[6] = 0xc064ed9510bc010b;
                          local_1b8[7] = 0xfec09918395f26c4;
                          local_1b8[8] = 0x835e2313e2c48f8d;
                          uStack_170 = 0xf863c3261a551f0e;
                          uStack_168 = 0x56a0bc092c25563f;
                          uStack_160 = 0x67ff882c0a9bdf38;
                          local_158 = 0xe9fbbd57d9292e61;
                          local_228 = (undefined *)0x24c1d5fafa9ec992;
                          uStack_150 = 0x24c1d5fafa9ec992;
                          builtin_strncpy(local_138,
                                          "[dlight] submitted; manager={:#x} entry={:#x} origin=({:.1f} {:.1f} {:.1f}) radius={:.0f} time={:.2f}"
                                          ,0x66);
                          local_138[0x66] = '\0';
                          local_138[0x67] = '\0';
                          local_138[0x68] = '\0';
                          local_138[0x69] = '\0';
                          local_138[0x6a] = '\0';
                          local_138[0x6b] = '\0';
                          local_138[0x6c] = '\0';
                          local_138[0x6d] = '\0';
                          local_138[0x6e] = '\0';
                          local_138[0x6f] = '\0';
                          uVar31 = 0xffffffffffffffff;
                          do {
                            uStack_1f0 = uVar31 + 1;
                            lVar13 = uVar31 + 1;
                            uVar31 = uStack_1f0;
                          } while (local_138[lVar13] != '\0');
                          local_1f8 = local_138;
                          local_1b8[7] = lVar14;
                          local_1b8[0] = 0x4000000000000000;
                          local_1b8[8] = DAT_180902d88;
                          local_1b8[1] = 0x4000000000000008;
                          local_1b8[2] = 0x7000000000000010;
                          uStack_170 = CONCAT44(auVar38._0_4_,auVar32._0_4_);
                          local_1b8[3] = 0x7000000000000014;
                          local_1b8[4] = 0x7000000000000018;
                          uStack_168 = CONCAT44(auVar40._0_4_,auVar39._0_4_);
                          local_1b8[5] = 0x700000000000001c;
                          uStack_160 = CONCAT44(0x67ff882c,local_c0[0]);
                          local_1b8[6] = 0x7000000000000020;
                          local_208 = (char *)0x7;
                          uStack_200 = local_1b8;
                          uStack_1c8 = 0;
                          uStack_1c0 = 0xf;
                          local_1d8._1_15_ = SUB1615((undefined1  [16])0x0,1);
                          auVar4[0xf] = 0;
                          auVar4._0_15_ = local_1d8._1_15_;
                          local_1d8 = auVar4 << 8;
                          local_218 = 1.4013e-45;
                          uVar31 = 0;
                          uVar23 = 0;
                          do {
                            bVar19 = (byte)(local_1b8[uVar23] >> 0x3c);
                            if (bVar19 == 0xc) {
                              uVar31 = uVar31 + *(longlong *)
                                                 ((longlong)local_1b8 +
                                                 (local_1b8[uVar23] & 0xfffffffffffffff) + 0x40);
                            }
                            else if (bVar19 == 0xb) {
                              uVar31 = uVar31 + 0x20;
                            }
                            else {
                              uVar31 = uVar31 + 8;
                            }
                            uVar23 = uVar23 + 1;
                          } while (uVar23 < 7);
                          lVar14 = uStack_1f0 + uVar31;
                          if (CARRY8(uStack_1f0,uVar31)) {
                            lVar14 = -1;
                          }
                          auVar36 = ZEXT1664(auVar40._0_16_);
                          FUN_1800f5540(local_1d8,lVar14);
                          local_278 = 0;
                          FUN_1801da050(&local_228,local_1d8,&local_1f8,&local_208);
                          puVar17 = local_1d8;
                          if (uStack_1c0 < 0x10) {
LAB_1802ba488:
                            puVar16 = (undefined1 *)FUN_1803b0a60();
                            uVar2 = *puVar16;
                            puVar16 = (undefined1 *)FUN_1803b0a60();
                            *puVar16 = 1;
                            FUN_1800a9e50(1,puVar17);
                            puVar17 = (undefined1 *)FUN_1803b0a60();
                            *puVar17 = uVar2;
                          }
                          else {
                            puVar17 = (undefined1 *)local_1d8._0_8_;
                            if ((undefined1 *)local_1d8._0_8_ != (undefined1 *)0x0)
                            goto LAB_1802ba488;
                          }
                          FUN_18015c010(local_1d8);
                          _DAT_180902d90 = CONCAT11(DAT_180902d91,1);
                          DAT_180902d7c = auVar36._0_4_;
                        }
                        else {
                          DAT_180902d7c = auVar40._0_4_;
                        }
                        lVar14 = DAT_180902d88;
                        DAT_180902d78 = uVar30;
                        lVar13 = FUN_18017ea70();
                        *(int *)(lVar13 + 4) = *(int *)(lVar13 + 4) + 1;
                        if (lVar14 + 0x48 == 0) {
                          bVar5 = false;
                          puVar28 = local_228;
                        }
                        else {
                          local_218 = 0.0;
                          uStack_214 = 0;
                          cVar7 = FUN_1804514f0(&local_218,lVar14 + 0x48,8);
                          if (cVar7 == '\0') {
                            bVar5 = false;
                            puVar28 = local_228;
                          }
                          else {
                            puVar28 = (undefined *)CONCAT44(uStack_214,local_218);
                            bVar5 = true;
                          }
                        }
                        lVar14 = FUN_18017ea70();
                        if (*(int *)(lVar14 + 4) != 0) {
                          *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
                        }
                        DAT_180902d70 = (undefined *)0x0;
                        if (bVar5) {
                          DAT_180902d70 = puVar28;
                        }
                        if ((DAT_180902d91 == '\0') && (DAT_180902d70 != (undefined *)0x0)) {
                          local_1d8._8_8_ = 0xa05181ee77d57a06;
                          local_1d8._0_8_ = 0xdb35e39b27e1c185;
                          uStack_1c8 = 0x929654b1461b7377;
                          local_228 = (undefined *)0xa5cea54bfef7110;
                          uStack_1c0 = 0xa5cea54bfef7110;
                          local_1f8 = (char *)0x5d746867696c645b;
                          uStack_1f0 = 0x6f20656e65637320;
                          local_1e8 = 0x6361207463656a62;
                          uStack_1e0 = 0x65766974;
                          do {
                            puVar18 = (ulonglong *)((longlong)puVar18 + 1);
                          } while (*(char *)((longlong)&local_1f8 + (longlong)puVar18) != '\0');
                          local_208 = (char *)&local_1f8;
                          uStack_200 = puVar18;
                          FUN_18020e620(&local_208);
                          _DAT_180902d90 = CONCAT11(1,DAT_180902d90);
                        }
                        goto LAB_1802ba700;
                      }
                    }
                    _DAT_180902d80 = (undefined1  [16])0x0;
                    DAT_180902d70 = (undefined *)0x0;
                    DAT_180902d78 = 0;
                    _DAT_180902d90 = 0;
                    DAT_180902d7c = uVar33;
                    goto LAB_1802ba700;
                  }
                }
              }
            }
          }
        }
        goto LAB_1802ba700;
      }
      if (lVar14 == DAT_180902d80) {
        FUN_1802b8de0();
        goto LAB_1802ba700;
      }
    }
  }
  _DAT_180902d80 = (undefined1  [16])0x0;
  DAT_180902d70 = (undefined *)0x0;
  DAT_180902d78 = 0;
  DAT_180902d7c = 0;
LAB_1802ba700:
  FUN_18017bf40(&local_228);
  puVar28 = local_228;
  uVar22 = (longlong)local_228 - local_148._8_8_;
  puVar18 = (ulonglong *)FUN_1802baba0();
  uVar24 = *puVar18 + 1;
  *puVar18 = uVar24;
  uVar31 = puVar18[1];
  puVar18[1] = uVar31 + uVar22;
  uVar25 = puVar18[3] + (ulonglong)(999999 < uVar22);
  puVar18[3] = uVar25;
  uVar26 = puVar18[4] + (ulonglong)(4999999 < uVar22);
  puVar18[4] = uVar26;
  uVar27 = puVar18[5] + (ulonglong)(15999999 < uVar22);
  puVar18[5] = uVar27;
  uVar23 = puVar18[2];
  if (puVar18[2] < uVar22) {
    puVar18[2] = uVar22;
    uVar23 = uVar22;
  }
  if ((puVar28 == (undefined *)puVar18[7]) || ((longlong)puVar18[7] <= (longlong)puVar28)) {
    local_258 = (double)(longlong)((longlong)puVar28 - puVar18[6]) / 1000000.0;
    dVar3 = (double)(uVar31 + uVar22);
    local_250 = 0.0;
    if (0.0 < local_258) {
      local_250 = (dVar3 / 1000.0) / local_258;
    }
    local_260 = dVar3 / 1000000.0;
    local_268 = (double)uVar23 / 1000.0;
    local_270 = (dVar3 / (double)uVar24) / 1000.0;
    local_278 = uVar24;
    local_248 = uVar25;
    local_240 = uVar26;
    local_238 = uVar27;
    FUN_1801af8a0(dVar3 / (double)uVar24,local_270,local_148._0_8_);
    puVar18[2] = 0;
    puVar18[1] = 0;
    *puVar18 = 0;
    puVar18[5] = 0;
    puVar18[4] = 0;
    puVar18[3] = 0;
    puVar18[6] = (ulonglong)puVar28;
    puVar18[7] = (ulonglong)(puVar28 + 5000000000);
  }
  piVar11 = (int *)FUN_18017ea70();
  *(longlong *)(piVar11 + 2) = lVar10;
  if (*piVar11 != 0) {
    *piVar11 = *piVar11 + -1;
  }
}



