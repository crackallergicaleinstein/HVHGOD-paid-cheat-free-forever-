// FUN_1801ccd40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ccd40 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1801ccd40(undefined8 param_1,undefined8 *param_2,undefined8 param_3,float param_4,
                  uint param_5,byte param_6)

{
  undefined1 auVar1 [16];
  longlong *plVar2;
  short sVar3;
  int iVar4;
  HRESULT HVar5;
  HRESULT HVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined1 (*pauVar9) [16];
  longlong lVar10;
  ulonglong uVar11;
  undefined1 uVar12;
  uint uVar13;
  undefined1 *puVar14;
  undefined8 ****ppppuVar15;
  int *piVar16;
  byte bVar17;
  longlong ****pppplVar18;
  longlong lVar19;
  char *pcVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  undefined1 in_ZMM2 [64];
  double dVar24;
  undefined1 auVar25 [64];
  undefined1 auStackY_398 [32];
  longlong ****local_340;
  int local_338;
  int local_334;
  byte local_330;
  ulonglong local_328;
  undefined1 local_320 [16];
  undefined1 auStack_310 [16];
  undefined1 local_300 [16];
  undefined1 local_2f0 [16];
  undefined8 local_2e0;
  undefined1 local_2d8 [32];
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined1 local_298 [32];
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined1 local_258 [32];
  undefined1 local_238 [32];
  longlong *local_218;
  uint local_210 [2];
  longlong *local_208;
  longlong *local_200;
  longlong *local_1f8;
  undefined1 local_1f0 [16];
  longlong local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  longlong *local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1ac;
  undefined4 local_1a4;
  undefined4 local_1a0;
  undefined8 local_19c;
  undefined8 ****local_190 [2];
  ulonglong local_180;
  ulonglong local_178;
  undefined8 ****local_170 [2];
  undefined4 local_160;
  undefined4 uStack_15c;
  ulonglong local_158;
  undefined1 local_148 [20];
  int local_134 [43];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulonglong local_68;
  
  local_68 = DAT_1808d5f00 ^ (ulonglong)auStackY_398;
  auVar25 = ZEXT1664(in_ZMM2._0_16_);
  if (((((param_2[1] != 0) && (sVar3 = thunk_FUN_180624430(in_ZMM2._0_8_), sVar3 < 1)) &&
       (1.0 <= auVar25._0_4_)) && ((auVar25._0_4_ <= 4096.0 && (1.0 <= param_4)))) &&
     (param_4 <= 128.0)) {
    auVar1 = vroundss_avx(ZEXT816(0),auVar25._0_16_,2);
    iVar22 = (int)auVar1._0_4_;
    auVar1 = vpcmpeqd_avx(ZEXT116(param_6),SUB6416(ZEXT464(0),0));
    auVar1 = vblendvps_avx(SUB6416(ZEXT464(0x406ccccd),0),SUB6416(ZEXT464(0x3fd9999a),0),auVar1);
    auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar1._0_4_ * param_4)),2);
    iVar23 = (int)auVar1._0_4_;
    local_300 = (undefined1  [16])0x0;
    local_2f0 = (undefined1  [16])0x0;
    FUN_18015ba30(local_300,*param_2,param_2[1]);
    pcVar20 = (char *)((longlong)&uStack_78 + 5);
    uVar13 = param_5;
    do {
      pcVar20 = pcVar20 + -1;
      *pcVar20 = (char)uVar13 + (char)((ulonglong)uVar13 / 10) * -10 + '0';
      uVar13 = (uint)((ulonglong)uVar13 / 10);
    } while (uVar13 != 0);
    FUN_18015bdb0(local_258,pcVar20,(longlong)&uStack_78 + 5);
    dVar24 = (double)param_4;
    iVar4 = FUN_1801d6360(&DAT_1807c67f8,dVar24);
    FUN_18015ae30(&local_340,(longlong)iVar4,0);
    pppplVar18 = (longlong ****)&local_340;
    if (0xf < local_328) {
      pppplVar18 = local_340;
    }
    FUN_1801d63c0(pppplVar18,(longlong)iVar4 + 1,&DAT_1807c67f8,dVar24);
    uVar7 = FUN_18015bea0(local_238,iVar22);
    puVar8 = (undefined8 *)FUN_18015b2a0(uVar7,&DAT_1807013fc,1);
    local_278 = *puVar8;
    uStack_270 = puVar8[1];
    uStack_268 = puVar8[2];
    uStack_260 = puVar8[3];
    puVar8[3] = 0xf;
    *(undefined1 *)puVar8 = 0;
    puVar8[2] = 0;
    FUN_18015a6e0(local_298);
    puVar8 = (undefined8 *)FUN_18015b2a0(local_298,&DAT_1807013fc,1);
    local_2b8 = *puVar8;
    uStack_2b0 = puVar8[1];
    uStack_2a8 = puVar8[2];
    uStack_2a0 = puVar8[3];
    puVar8[3] = 0xf;
    *(undefined1 *)puVar8 = 0;
    puVar8[2] = 0;
    FUN_18015a6e0(local_2d8);
    pauVar9 = (undefined1 (*) [16])FUN_18015b2a0(local_2d8,&DAT_1807013fc,1);
    local_320 = *pauVar9;
    auStack_310 = pauVar9[1];
    *(undefined8 *)(pauVar9[1] + 8) = 0xf;
    (*pauVar9)[0] = 0;
    *(undefined8 *)pauVar9[1] = 0;
    puVar14 = &DAT_1807c685c;
    if (param_6 != 0) {
      puVar14 = &DAT_1807c6858;
    }
    lVar19 = -1;
    do {
      lVar19 = lVar19 + 1;
    } while (puVar14[lVar19] != '\0');
    puVar8 = (undefined8 *)FUN_18015b2a0(local_320);
    local_88 = (longlong *)*puVar8;
    uStack_80 = puVar8[1];
    uStack_78 = puVar8[2];
    uStack_70 = puVar8[3];
    *(undefined1 *)puVar8 = 0;
    puVar8[2] = 0;
    puVar8[3] = 0xf;
    FUN_18015a6e0(local_190);
    FUN_18015c010(&local_88);
    FUN_18015c010(local_320);
    FUN_18015c010(local_2d8);
    FUN_18015c010(&local_2b8);
    FUN_18015c010(local_298);
    FUN_18015c010(&local_278);
    FUN_18015c010(local_238);
    FUN_18015c010(&local_340);
    FUN_18015c010(local_258);
    FUN_18015c010(local_300);
    ppppuVar15 = local_190;
    if (0xf < local_178) {
      ppppuVar15 = local_190[0];
    }
    uVar21 = 0xcbf29ce484222325;
    uVar11 = 0;
    if (local_180 != 0) {
      do {
        uVar21 = (uVar21 ^ *(byte *)(uVar11 + (longlong)ppppuVar15)) * 0x100000001b3;
        uVar11 = uVar11 + 1;
      } while (uVar11 < local_180);
    }
    lVar10 = FUN_180177b00(&DAT_180b90970,&local_88,local_190,uVar21);
    lVar19 = DAT_180b90978;
    if (*(longlong *)(lVar10 + 8) != 0) {
      lVar19 = *(longlong *)(lVar10 + 8);
    }
    if (lVar19 == DAT_180b90978) {
      local_88 = (longlong *)*param_2;
      uStack_80 = param_2[1];
      FUN_180165be0();
      if (CONCAT44(uStack_15c,local_160) != 0) {
        HVar5 = CoInitializeEx((LPVOID)0x0,0);
        if (((DAT_180b90960 != 0) ||
            (iVar4 = DWriteCreateFactory(0,&DAT_1807c67e8,&DAT_180b90960), -1 < iVar4)) &&
           ((DAT_180b90968 != 0 ||
            (iVar4 = D2D1CreateFactory(0,&DAT_1807c67c8,0,&DAT_180b90968), -1 < iVar4)))) {
          local_208 = (longlong *)0x0;
          iVar4 = (**(code **)(*(longlong *)DAT_180b90960 + 0x78))(DAT_180b90960,L"Segoe UI",0,500);
          if (-1 < iVar4) {
            (**(code **)(*local_208 + 0x28))(local_208,param_6 ^ 1);
            (**(code **)(*local_208 + 0x20))(local_208,2);
            local_200 = (longlong *)0x0;
            ppppuVar15 = local_170;
            if (7 < local_158) {
              ppppuVar15 = local_170[0];
            }
            iVar4 = (**(code **)(*(longlong *)DAT_180b90960 + 0x90))
                              (DAT_180b90960,ppppuVar15,local_160,local_208);
            if (-1 < iVar4) {
              local_1c8 = (longlong *)0x0;
              iVar4 = (**(code **)(*(longlong *)DAT_180b90960 + 0xa0))
                                (DAT_180b90960,local_208,&local_1c8);
              if (-1 < iVar4) {
                local_1c0 = 1;
                local_1b8 = 0;
                (**(code **)(*local_200 + 0x48))(local_200,&local_1c0,local_1c8);
                local_1d0 = (longlong *)0x0;
                HVar6 = CoCreateInstance((IID *)&DAT_1807c6830,(LPUNKNOWN)0x0,1,
                                         (IID *)&DAT_1807c67d8,&local_1d0);
                if (-1 < HVar6) {
                  local_1f8 = (longlong *)0x0;
                  iVar4 = (**(code **)(*local_1d0 + 0x88))(local_1d0,iVar22,iVar23,&DAT_1807c6810);
                  if (-1 < iVar4) {
                    local_218 = (longlong *)0x0;
                    local_1b0 = 1;
                    local_1ac = 0x100000057;
                    local_1a4 = 0x42c00000;
                    local_1a0 = 0x42c00000;
                    local_19c = 0;
                    iVar4 = (**(code **)(*(longlong *)DAT_180b90968 + 0x68))
                                      (DAT_180b90968,local_1f8,&local_1b0,&local_218);
                    if (-1 < iVar4) {
                      local_1d8 = (longlong *)0x0;
                      local_88 = (longlong *)
                                 CONCAT44((float)(param_5 >> 8 & 0xff) / 255.0,
                                          (float)(param_5 & 0xff) / 255.0);
                      uStack_80 = CONCAT44((float)(param_5 >> 0x18) / 255.0,
                                           (float)(param_5 >> 0x10 & 0xff) / 255.0);
                      iVar4 = (**(code **)(*local_218 + 0x40))(local_218,&local_88,0,&local_1d8);
                      if (-1 < iVar4) {
                        (**(code **)(*local_218 + 0x110))(local_218,2);
                        (**(code **)(*local_218 + 0x180))();
                        local_88 = (longlong *)0x0;
                        uStack_80 = 0;
                        (**(code **)(*local_218 + 0x178))(local_218,&local_88);
                        auVar1 = vunpcklps_avx(ZEXT416(0),ZEXT416(0));
                        (**(code **)(*local_218 + 0xe0))(local_218,auVar1._0_8_,local_200,local_1d8)
                        ;
                        iVar4 = (**(code **)(*local_218 + 0x188))(local_218,0,0);
                        if (-1 < iVar4) {
                          uVar11 = (longlong)iVar23 * (longlong)iVar22 * 4;
                          local_1f0 = (undefined1  [16])0x0;
                          local_1e0 = 0;
                          lVar19 = 0;
                          if (uVar11 != 0) {
                            if (0x7fffffffffffffff < uVar11) {
                    /* WARNING: Subroutine does not return */
                              FUN_1801136f0();
                            }
                            lVar10 = FUN_18015bca0(uVar11);
                            local_1f0._0_8_ = lVar10;
                            lVar19 = lVar10 + uVar11;
                            local_1e0 = lVar19;
                            FUN_18063ab10(lVar10,0,uVar11);
                            local_1f0._8_8_ = lVar19;
                          }
                          iVar4 = (**(code **)(*local_1f8 + 0x38))
                                            (local_1f8,0,iVar22 * 4,(int)lVar19 - local_1f0._0_4_);
                          if (-1 < iVar4) {
                            uVar11 = 0;
                            if (local_1f0._8_8_ != local_1f0._0_8_) {
                              do {
                                bVar17 = *(byte *)(uVar11 + 3 + local_1f0._0_8_);
                                uVar12 = *(undefined1 *)(uVar11 + local_1f0._0_8_);
                                *(undefined1 *)(uVar11 + local_1f0._0_8_) =
                                     *(undefined1 *)(uVar11 + 2 + local_1f0._0_8_);
                                *(undefined1 *)(uVar11 + 2 + local_1f0._0_8_) = uVar12;
                                if (bVar17 != 0) {
                                  uVar13 = ((uint)*(byte *)(uVar11 + local_1f0._0_8_) * 0xff) /
                                           (uint)bVar17;
                                  uVar12 = 0xff;
                                  if (uVar13 < 0xff) {
                                    uVar12 = (char)uVar13;
                                  }
                                  *(undefined1 *)(uVar11 + local_1f0._0_8_) = uVar12;
                                  uVar13 = ((uint)*(byte *)(uVar11 + 1 + local_1f0._0_8_) * 0xff) /
                                           (uint)bVar17;
                                  uVar12 = 0xff;
                                  if (uVar13 < 0xff) {
                                    uVar12 = (char)uVar13;
                                  }
                                  *(undefined1 *)(uVar11 + 1 + local_1f0._0_8_) = uVar12;
                                  uVar21 = (ulonglong)
                                           ((uint)*(byte *)(uVar11 + 2 + local_1f0._0_8_) * 0xff) /
                                           (ulonglong)(uint)bVar17;
                                  uVar12 = 0xff;
                                  if ((uint)uVar21 < 0xff) {
                                    uVar12 = (char)uVar21;
                                  }
                                  *(undefined1 *)(uVar11 + 2 + local_1f0._0_8_) = uVar12;
                                }
                                uVar11 = uVar11 + 4;
                              } while (uVar11 < (ulonglong)(local_1f0._8_8_ - local_1f0._0_8_));
                            }
                            local_340 = (longlong ****)0x0;
                            bVar17 = 0;
                            local_330 = 0;
                            local_338 = iVar22;
                            local_334 = iVar23;
                            puVar8 = (undefined8 *)
                                     FUN_180437380(&local_88,local_1f0._0_8_,iVar22,iVar23);
                            plVar2 = local_88;
                            pppplVar18 = (longlong ****)0x0;
                            if (&local_2e0 != puVar8) {
                              pppplVar18 = (longlong ****)*puVar8;
                              *puVar8 = 0;
                            }
                            local_340 = pppplVar18;
                            if (local_88 != (longlong *)0x0) {
                              local_88 = (longlong *)0x0;
                              (**(code **)(*plVar2 + 0x10))();
                            }
                            if (pppplVar18 != (longlong ****)0x0) {
                              FUN_18063ab10(local_148,0,0xc0);
                              local_210[0] = 0;
                              iVar22 = (**(code **)(*local_200 + 0x1d8))
                                                 (local_200,local_148,8,local_210);
                              if ((-1 < iVar22) && (local_210[0] != 0)) {
                                piVar16 = local_134;
                                uVar11 = (ulonglong)local_210[0];
                                do {
                                  bVar17 = bVar17 | *piVar16 != 0;
                                  piVar16 = piVar16 + 6;
                                  uVar11 = uVar11 - 1;
                                } while (uVar11 != 0);
                                local_330 = bVar17;
                              }
                              if (0xff < DAT_180b90980) {
                                FUN_1801d4400(&DAT_180b90970);
                              }
                              FUN_1801d3f90(&DAT_180b90970,&local_88,local_190,&local_340);
                              pppplVar18 = local_340;
                            }
                            if (pppplVar18 != (longlong ****)0x0) {
                              (*(code *)(*pppplVar18)[2])(pppplVar18);
                            }
                          }
                          FUN_180113710(local_1f0);
                        }
                      }
                      plVar2 = local_1d8;
                      if (local_1d8 != (longlong *)0x0) {
                        local_1d8 = (longlong *)0x0;
                        (**(code **)(*plVar2 + 0x10))();
                      }
                    }
                    plVar2 = local_218;
                    if (local_218 != (longlong *)0x0) {
                      local_218 = (longlong *)0x0;
                      (**(code **)(*plVar2 + 0x10))();
                    }
                  }
                  plVar2 = local_1f8;
                  if (local_1f8 != (longlong *)0x0) {
                    local_1f8 = (longlong *)0x0;
                    (**(code **)(*plVar2 + 0x10))();
                  }
                }
                plVar2 = local_1d0;
                if (local_1d0 != (longlong *)0x0) {
                  local_1d0 = (longlong *)0x0;
                  (**(code **)(*plVar2 + 0x10))();
                }
              }
              plVar2 = local_1c8;
              if (local_1c8 != (longlong *)0x0) {
                local_1c8 = (longlong *)0x0;
                (**(code **)(*plVar2 + 0x10))();
              }
            }
            plVar2 = local_200;
            if (local_200 != (longlong *)0x0) {
              local_200 = (longlong *)0x0;
              (**(code **)(*plVar2 + 0x10))();
            }
          }
          plVar2 = local_208;
          if (local_208 != (longlong *)0x0) {
            local_208 = (longlong *)0x0;
            (**(code **)(*plVar2 + 0x10))();
          }
        }
        if (-1 < HVar5) {
          CoUninitialize();
        }
      }
      FUN_18015b930(local_170);
    }
    FUN_18015c010(local_190);
  }
}



