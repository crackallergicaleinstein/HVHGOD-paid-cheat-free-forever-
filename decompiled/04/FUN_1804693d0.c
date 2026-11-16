// FUN_1804693d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804693d0 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1804693d0(longlong *param_1,longlong param_2,uint param_3,longlong param_4,longlong param_5
                  ,longlong param_6,longlong param_7)

{
  float fVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  float fVar5;
  int **ppiVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  float *pfVar10;
  float *pfVar11;
  longlong lVar12;
  float *pfVar13;
  undefined1 auVar14 [8];
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  int *piVar19;
  int *piVar20;
  int **ppiVar21;
  int *piVar22;
  int **ppiVar23;
  int *piVar24;
  int iVar25;
  int iVar26;
  ulonglong uVar27;
  longlong *plVar28;
  uint uVar29;
  char *pcVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  undefined1 auVar34 [16];
  undefined1 extraout_var [56];
  float fVar35;
  undefined1 auVar36 [64];
  undefined1 auVar37 [64];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar42 [64];
  undefined1 auVar43 [64];
  undefined1 auVar44 [64];
  float fVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [64];
  undefined1 auStackY_1298 [32];
  uint local_1268 [2];
  int **local_1260;
  undefined1 local_1258 [16];
  longlong local_1248;
  float local_1240;
  float local_123c;
  undefined1 local_1238;
  longlong local_1230;
  longlong *local_1228;
  ulonglong local_1220;
  longlong local_1218;
  longlong local_1210;
  longlong local_1208;
  int local_1200;
  float local_11fc;
  int **local_11f8;
  longlong local_11f0;
  float local_11e8 [4];
  float *local_11d8;
  undefined8 local_11d0;
  undefined8 local_11c8;
  ulonglong local_11c0;
  undefined1 local_1b8 [8];
  int *piStack_1b0;
  float *local_1a8;
  undefined1 local_1a0 [8];
  int *piStack_198;
  int *local_190;
  int *local_188 [2];
  longlong alStack_178 [4];
  int *local_158;
  int *local_150;
  longlong local_140;
  longlong local_138;
  int *local_128;
  longlong local_120 [5];
  undefined8 local_f8;
  uint local_f0 [2];
  undefined8 local_e8;
  ulonglong local_e0 [21];
  
  local_e0[0] = DAT_1808d5f00 ^ (ulonglong)auStackY_1298;
  local_1230 = param_5;
  local_11f0 = param_6;
  local_1210 = param_7;
  local_1228 = param_1;
  local_1218 = param_2;
  local_1208 = param_4;
  _eh_vector_constructor_iterator_(local_188,0x18,4,FUN_1801d7dc0,thunk_FUN_180159650);
  local_1268[0] = 0;
  do {
    uVar29 = local_1268[0];
    lVar15 = (longlong)(int)local_1268[0];
    uVar31 = FUN_18029b4f0(local_1268[0],(longlong)(int)local_1268[0] * 0x9c + param_2);
    *(undefined4 *)(param_6 + lVar15 * 4) = uVar31;
    pcVar30 = (char *)(param_2 + lVar15 * 0x9c);
    puVar9 = (undefined4 *)
             FUN_180464e20(&local_11d8,&PTR_s_Bounding_Box_18077eec0 + lVar15 * 4,pcVar30,
                           *local_1228);
    uVar31 = puVar9[1];
    *(undefined4 *)(param_5 + lVar15 * 8) = *puVar9;
    *(undefined4 *)(param_5 + 4 + lVar15 * 8) = uVar31;
    if ((((uVar29 != param_3) && (*pcVar30 != '\0')) && ((&DAT_18077eecc)[lVar15 * 0x20] != '\0'))
       && ((&DAT_18077eecc)[lVar15 * 0x20] != '\x01')) {
      uVar27 = (ulonglong)(byte)pcVar30[1];
      puVar2 = (uint *)local_188[uVar27 * 3 + 1];
      if (puVar2 == (uint *)alStack_178[uVar27 * 3]) {
        FUN_18026b910(local_188 + uVar27 * 3,puVar2,local_1268);
      }
      else {
        *puVar2 = uVar29;
        local_188[uVar27 * 3 + 1] = local_188[uVar27 * 3 + 1] + 1;
      }
    }
    lVar15 = local_1218;
    local_1268[0] = uVar29 + 1;
    param_6 = local_11f0;
    param_2 = local_1218;
  } while ((int)local_1268[0] < 0x1d);
  ppiVar23 = local_188;
  do {
    piVar19 = ppiVar23[1];
    piVar22 = *ppiVar23;
    lVar16 = (longlong)piVar19 - (longlong)piVar22 >> 2;
    if (lVar16 < 0x21) {
      FUN_18046d590(piVar22,piVar19,lVar15);
    }
    else {
      FUN_1802ad670(&local_11c8,
                    lVar16 - (lVar16 - ((longlong)piVar19 - (longlong)piVar22 >> 0x3f) >> 1));
      FUN_18046d6f0(piVar22,piVar19,lVar16,local_11c8);
      uVar7 = local_11c8;
      if (0x400 < local_11c0) {
        if (DAT_180c7df30 == (undefined8 *)0x0) {
          local_11d8 = (float *)0x180827288;
          local_11d0 = 0x15;
          DAT_180c7df30 = (undefined8 *)FUN_180451750(&local_11d8);
        }
        (**(code **)(*(longlong *)*DAT_180c7df30 + 0x18))((longlong *)*DAT_180c7df30,uVar7);
      }
    }
    plVar28 = local_1228;
    lVar16 = local_1230;
    ppiVar23 = ppiVar23 + 3;
  } while (ppiVar23 != &local_128);
  local_11d8 = (float *)local_1228[2];
  piStack_1b0 = (int *)local_1218;
  local_1b8 = (undefined1  [8])local_1230;
  auVar43 = ZEXT464((uint)((*(float *)(local_1228[3] + 4) - *(float *)(local_1228[4] + 4)) -
                          *local_11d8 * 4.0));
  local_1268[0] = 0;
  auVar44 = ZEXT464(0x3f666666);
  auVar47 = ZEXT464(0x3dcccccd);
  auVar37 = ZEXT864(0);
  local_1a8 = local_11d8;
  do {
    auVar36 = ZEXT1664(auVar37._0_16_);
    fVar32 = auVar37._0_4_;
    iVar25 = 0;
    for (piVar19 = local_158; piVar19 != local_150; piVar19 = piVar19 + 1) {
      if ((&DAT_18077eecc)[(longlong)*piVar19 * 0x20] != '\x03') {
        auVar36 = ZEXT464((uint)(auVar36._0_4_ + *(float *)(lVar16 + 4 + (longlong)*piVar19 * 8)));
        iVar25 = iVar25 + 1;
      }
      fVar32 = auVar36._0_4_;
    }
    iVar25 = iVar25 + -1;
    fVar35 = *local_11d8;
    if (iVar25 < 1) {
      iVar25 = 0;
    }
    auVar42 = ZEXT464((uint)((float)iVar25 * fVar35 + fVar32));
    auVar36 = ZEXT1664(auVar37._0_16_);
    iVar25 = 0;
    for (piVar19 = local_188[0]; piVar19 != local_188[1]; piVar19 = piVar19 + 1) {
      if ((&DAT_18077eecc)[(longlong)*piVar19 * 0x20] != '\x03') {
        auVar36 = ZEXT464((uint)(auVar36._0_4_ + *(float *)(lVar16 + 4 + (longlong)*piVar19 * 8)));
        iVar25 = iVar25 + 1;
      }
    }
    iVar25 = iVar25 + -1;
    fVar32 = (float)FUN_18046aef0(local_1b8,&local_140);
    fVar33 = (float)FUN_18046aef0(local_1b8,alStack_178 + 1);
    lVar15 = local_11f0;
    if (iVar25 < 1) {
      iVar25 = 0;
    }
    auVar34 = vmaxss_avx(ZEXT416((uint)((float)iVar25 * fVar35 + auVar36._0_4_)),auVar42._0_16_);
    fVar32 = fVar32 + fVar33 + auVar34._0_4_;
    if (fVar32 <= auVar43._0_4_) break;
    auVar34._0_4_ = auVar43._0_4_ / fVar32;
    auVar34._4_12_ = auVar43._4_12_;
    auVar34 = vminss_avx(auVar44._0_16_,auVar34);
    auVar36 = ZEXT1664(auVar34);
    local_1260 = local_188;
    do {
      lVar18 = local_1218;
      piVar19 = local_1260[1];
      piVar22 = *local_1260;
      if (piVar22 != piVar19) {
        do {
          lVar17 = (longlong)*piVar22;
          auVar34 = vmaxss_avx(auVar47._0_16_,
                               ZEXT416((uint)(auVar36._0_4_ * *(float *)(lVar15 + lVar17 * 4))));
          *(int *)(lVar15 + lVar17 * 4) = auVar34._0_4_;
          puVar9 = (undefined4 *)
                   FUN_180464e20(&local_11f8,&PTR_s_Bounding_Box_18077eec0 + lVar17 * 4,
                                 lVar17 * 0x9c + lVar18,*plVar28);
          uVar31 = puVar9[1];
          *(undefined4 *)(lVar16 + lVar17 * 8) = *puVar9;
          *(undefined4 *)(lVar16 + 4 + lVar17 * 8) = uVar31;
          piVar22 = piVar22 + 1;
        } while (piVar22 != piVar19);
      }
      local_1260 = local_1260 + 3;
    } while (local_1260 != &local_128);
    local_1268[0] = local_1268[0] + 1;
  } while ((int)local_1268[0] < 0x10);
  local_f8._0_4_ = 1;
  local_f8._4_4_ = 3;
  local_1260 = (int **)&local_f8;
  fVar32 = 0.85;
  do {
    local_1268[0] = 0;
    uVar27 = (ulonglong)(int)*(uint *)local_1260;
    ppiVar23 = local_188 + uVar27 * 3;
    plVar28 = local_1228;
    local_1220 = uVar27;
    local_11f8 = ppiVar23;
    do {
      uVar29 = local_1268[0];
      if (uVar27 == 1) {
        fVar35 = (*(float *)(*plVar28 + 4) - *(float *)plVar28[2]) - *(float *)(plVar28[4] + 4);
      }
      else {
        fVar35 = (*(float *)(plVar28[3] + 4) - *(float *)(plVar28[1] + 4)) - *(float *)plVar28[2];
      }
      fVar33 = (float)FUN_18046aef0(local_1b8,ppiVar23);
      lVar16 = local_11f0;
      plVar8 = local_1228;
      lVar15 = local_1230;
      if (fVar33 <= fVar35) break;
      piVar19 = ppiVar23[1];
      piVar22 = *ppiVar23;
      if (piVar22 != piVar19) {
        do {
          lVar18 = (longlong)*piVar22;
          auVar34 = vmaxss_avx(auVar47._0_16_,
                               ZEXT416((uint)(fVar32 * *(float *)(lVar16 + lVar18 * 4))));
          *(int *)(lVar16 + lVar18 * 4) = auVar34._0_4_;
          puVar9 = (undefined4 *)
                   FUN_180464e20(local_11e8,&PTR_s_Bounding_Box_18077eec0 + lVar18 * 4,
                                 lVar18 * 0x9c + local_1218,*plVar8);
          uVar31 = puVar9[1];
          *(undefined4 *)(lVar15 + lVar18 * 8) = *puVar9;
          *(undefined4 *)(lVar15 + 4 + lVar18 * 8) = uVar31;
          piVar22 = piVar22 + 1;
        } while (piVar22 != piVar19);
        uVar27 = local_1220;
        plVar28 = local_1228;
        ppiVar23 = local_11f8;
        uVar29 = local_1268[0];
      }
      local_1268[0] = uVar29 + 1;
    } while ((int)local_1268[0] < 0x10);
    local_1260 = (int **)((longlong)local_1260 + 4);
  } while (local_1260 != (int **)local_f0);
  auVar43._0_8_ = FUN_18046aef0(local_1b8,alStack_178 + 1);
  auVar43._8_56_ = extraout_var;
  auVar44 = ZEXT1664(auVar43._0_16_);
  fVar33 = (float)FUN_18046aef0(local_1b8,&local_140);
  auVar43 = ZEXT1664(auVar37._0_16_);
  fVar35 = auVar37._0_4_;
  iVar25 = 0;
  fVar32 = fVar35;
  for (; local_158 != local_150; local_158 = local_158 + 1) {
    if ((&DAT_18077eecc)[(longlong)*local_158 * 0x20] != '\x03') {
      auVar43 = ZEXT464((uint)(auVar43._0_4_ + *(float *)(local_1230 + 4 + (longlong)*local_158 * 8)
                              ));
      iVar25 = iVar25 + 1;
    }
    fVar32 = auVar43._0_4_;
  }
  iVar25 = iVar25 + -1;
  if (iVar25 < 1) {
    iVar25 = 0;
  }
  auVar37 = ZEXT1664(auVar37._0_16_);
  iVar26 = 0;
  for (; local_188[0] != local_188[1]; local_188[0] = local_188[0] + 1) {
    if ((&DAT_18077eecc)[(longlong)*local_188[0] * 0x20] != '\x03') {
      auVar37 = ZEXT464((uint)(auVar37._0_4_ +
                              *(float *)(local_1230 + 4 + (longlong)*local_188[0] * 8)));
      iVar26 = iVar26 + 1;
    }
    fVar35 = auVar37._0_4_;
  }
  iVar26 = iVar26 + -1;
  if (iVar26 < 1) {
    iVar26 = 0;
  }
  auVar34 = vmaxss_avx(ZEXT416((uint)((float)iVar26 * *local_11d8 + fVar35)),
                       ZEXT416((uint)((float)iVar25 * *local_11d8 + fVar32)));
  fVar32 = *(float *)local_1228[2];
  local_11e8[0] = *(float *)(local_1228[4] + 4);
  fVar40 = auVar44._0_4_;
  auVar4 = vmaxss_avx(ZEXT416((uint)local_11e8[0]),
                      ZEXT416((uint)((*(float *)(*local_1228 + 4) - fVar32) - fVar40)));
  local_11fc = auVar4._0_4_ + fVar40;
  fVar35 = *(float *)(local_1228[3] + 4);
  auVar4 = vminss_avx(ZEXT416((uint)(fVar35 - fVar33)),
                      ZEXT416((uint)(fVar32 + *(float *)(local_1228[1] + 4))));
  fVar41 = (auVar4._0_4_ - local_11fc) - (fVar32 + fVar32);
  if (fVar41 < auVar34._0_4_) {
    local_11fc = local_11e8[0] + fVar40;
  }
  auVar34 = vcmpss_avx(ZEXT416((uint)fVar41),auVar34,1);
  auVar34 = vblendvps_avx(auVar4,ZEXT416((uint)(fVar35 - fVar33)),auVar34);
  auVar37 = ZEXT1664(auVar34);
  local_11f8 = (int **)CONCAT44(local_11f8._4_4_,auVar34._0_4_);
  if (alStack_178[1] != alStack_178[2]) {
    local_11e8[0] = fVar32 + local_11fc;
  }
  if (local_140 != local_138) {
    fVar35 = auVar34._0_4_ - fVar32;
  }
  local_1220 = CONCAT44(local_1220._4_4_,fVar35);
  local_f0[0] = 1;
  local_f0[1] = 3;
  local_1260 = (int **)local_f0;
  uVar29 = 1;
  fVar33 = 0.5;
  fVar32 = 20.0;
  fVar35 = 3.0;
  auVar43 = ZEXT464(0xbf800000);
  plVar28 = local_1228;
  do {
    ppiVar23 = local_1260;
    auVar44 = ZEXT464((uint)local_11fc);
    _local_1b8 = (undefined1  [16])0x0;
    local_1a8 = (float *)0x0;
    local_1268[0] = uVar29;
    _eh_vector_constructor_iterator_(&local_128,0x18,2,FUN_1801d7dc0,thunk_FUN_180159650);
    lVar15 = local_1218;
    piVar19 = local_188[(longlong)(int)uVar29 * 3 + 1];
    piVar22 = local_188[(longlong)(int)uVar29 * 3];
    if (piVar22 != piVar19) {
      do {
        local_1200 = *piVar22;
        if ((&DAT_18077eecc)[(longlong)local_1200 * 0x20] == '\x03') {
          if ((float *)piStack_1b0 == local_1a8) {
            FUN_18026b910(local_1b8,piStack_1b0,&local_1200);
          }
          else {
            *piStack_1b0 = local_1200;
            piStack_1b0 = piStack_1b0 + 1;
          }
        }
        else {
          iVar25 = *(int *)((longlong)local_1200 * 0x9c + 8 + lVar15);
          if (iVar25 < 0) {
            iVar25 = 0;
          }
          else if (1 < iVar25) {
            iVar25 = 1;
          }
          lVar16 = (longlong)iVar25;
          piVar20 = (int *)local_120[lVar16 * 3];
          if (piVar20 == (int *)local_120[lVar16 * 3 + 1]) {
            FUN_18026b910(local_120 + lVar16 * 3 + -1,piVar20,&local_1200);
          }
          else {
            *piVar20 = local_1200;
            local_120[lVar16 * 3] = local_120[lVar16 * 3] + 4;
          }
        }
        piVar22 = piVar22 + 1;
      } while (piVar22 != piVar19);
      ppiVar23 = local_1260;
      plVar28 = local_1228;
    }
    lVar15 = local_1230;
    auVar34 = vpcmpeqd_avx(ZEXT416(uVar29),SUB6416(ZEXT464(1),0));
    auVar34 = vblendvps_avx(auVar37._0_16_,auVar44._0_16_,auVar34);
    auVar47 = ZEXT1664(auVar34);
    if (local_1b8 != (undefined1  [8])piStack_1b0) {
      auVar14 = local_1b8;
      if (uVar29 == 1) {
        do {
          lVar16 = (longlong)*(int *)auVar14;
          auVar34 = vminss_avx(ZEXT416(*(uint *)(local_1230 + lVar16 * 8)),
                               ZEXT416(*(uint *)plVar28[5]));
          *(float *)(local_1230 + lVar16 * 8) = auVar34._0_4_;
          fVar40 = auVar34._0_4_ * fVar33;
          fVar41 = fVar40 + *(float *)plVar28[4];
          fVar39 = (*(float *)plVar28[1] + *(float *)*plVar28) * fVar33;
          if (fVar41 <= fVar39) {
            auVar34 = vminss_avx(ZEXT416((uint)(*(float *)plVar28[3] - fVar40)),
                                 ZEXT416((uint)fVar39));
            fVar41 = auVar34._0_4_;
          }
          *(float *)(local_1208 + lVar16 * 8) = fVar41;
          *(float *)(local_1208 + 4 + lVar16 * 8) =
               auVar47._0_4_ - fVar33 * *(float *)(local_1230 + 4 + lVar16 * 8);
          auVar47 = ZEXT464((uint)(auVar47._0_4_ -
                                  (*(float *)plVar28[2] + *(float *)(local_1230 + 4 + lVar16 * 8))))
          ;
          auVar14 = (undefined1  [8])((longlong)auVar14 + 4);
        } while (auVar14 != (undefined1  [8])piStack_1b0);
      }
      else {
        do {
          lVar16 = (longlong)*(int *)auVar14;
          auVar34 = vminss_avx(ZEXT416(*(uint *)(local_1230 + lVar16 * 8)),
                               ZEXT416(*(uint *)plVar28[5]));
          *(float *)(local_1230 + lVar16 * 8) = auVar34._0_4_;
          fVar40 = auVar34._0_4_ * fVar33;
          fVar41 = fVar40 + *(float *)plVar28[4];
          fVar39 = (*(float *)plVar28[1] + *(float *)*plVar28) * fVar33;
          if (fVar41 <= fVar39) {
            auVar34 = vminss_avx(ZEXT416((uint)(*(float *)plVar28[3] - fVar40)),
                                 ZEXT416((uint)fVar39));
            fVar41 = auVar34._0_4_;
          }
          *(float *)(local_1208 + lVar16 * 8) = fVar41;
          *(float *)(local_1208 + 4 + lVar16 * 8) =
               fVar33 * *(float *)(local_1230 + 4 + lVar16 * 8) + auVar47._0_4_;
          auVar47 = ZEXT464((uint)(auVar47._0_4_ +
                                  *(float *)plVar28[2] + *(float *)(local_1230 + 4 + lVar16 * 8)));
          auVar14 = (undefined1  [8])((longlong)auVar14 + 4);
        } while (auVar14 != (undefined1  [8])piStack_1b0);
      }
      ppiVar23 = local_1260;
    }
    lVar16 = local_1210;
    if ((local_1210 != 0) && (local_1b8 != (undefined1  [8])piStack_1b0)) {
      _local_1a0 = (undefined1  [16])0x0;
      local_190 = (int *)0x0;
      uVar27 = (longlong)piStack_1b0 - (longlong)local_1b8 >> 2;
      if (uVar27 == 0) {
        piStack_198 = (int *)0x0;
        piVar19 = piStack_198;
      }
      else {
        if (0x3fffffffffffffff < uVar27) {
                    /* WARNING: Subroutine does not return */
          FUN_1801136f0();
        }
        lVar16 = FUN_18015bca0(uVar27 * 4);
        piStack_198 = (int *)lVar16;
        local_1a0 = (undefined1  [8])lVar16;
        local_190 = (int *)(uVar27 * 4 + lVar16);
        lVar18 = (longlong)piStack_1b0 - (longlong)local_1b8;
        FUN_18063aed0(lVar16,local_1b8,lVar18);
        piVar19 = (int *)(lVar16 + (lVar18 >> 2) * 4);
        piStack_198 = piVar19;
      }
      if (uVar29 == 1) {
        FUN_1805f9ff0(local_1a0,piVar19);
        piVar19 = piStack_198;
      }
      fVar40 = auVar44._0_4_;
      local_1258 = (undefined1  [16])0x0;
      local_1248 = 0;
      uVar27 = (longlong)piVar19 - (longlong)local_1a0 >> 2;
      lVar18 = 0;
      fVar41 = auVar37._0_4_;
      if (uVar27 != 0) {
        if (0x3fffffffffffffff < uVar27) {
                    /* WARNING: Subroutine does not return */
          FUN_1801136f0();
        }
        lVar18 = FUN_18015bca0(uVar27 * 4);
        local_1258._8_8_ = lVar18;
        local_1258._0_8_ = lVar18;
        local_1248 = lVar18 + uVar27 * 4;
        lVar16 = (longlong)piStack_198 - (longlong)local_1a0;
        FUN_18063aed0(lVar18,local_1a0,lVar16);
        fVar40 = auVar44._0_4_;
        lVar18 = lVar18 + (lVar16 >> 2) * 4;
        local_1258._8_8_ = lVar18;
        fVar41 = auVar37._0_4_;
      }
      local_1240 = fVar41;
      lVar16 = local_1210;
      lVar17 = local_1248;
      if (uVar29 == 1) {
        local_1240 = auVar47._0_4_ + *(float *)plVar28[2];
        local_123c = fVar40;
      }
      else {
        local_123c = auVar47._0_4_ - *(float *)plVar28[2];
      }
      local_1238 = 0;
      puVar3 = *(undefined8 **)(local_1210 + 8);
      if (puVar3 == *(undefined8 **)(local_1210 + 0x10)) {
        FUN_18046e150(local_1210,puVar3,local_1258);
      }
      else {
        local_1248 = 0;
        uVar7 = local_1258._0_8_;
        local_1258 = ZEXT816(0);
        *puVar3 = uVar7;
        puVar3[1] = lVar18;
        puVar3[2] = lVar17;
        *(float *)(puVar3 + 3) = local_1240;
        *(float *)((longlong)puVar3 + 0x1c) = local_123c;
        *(undefined1 *)(puVar3 + 4) = 0;
        *(longlong *)(local_1210 + 8) = *(longlong *)(local_1210 + 8) + 0x28;
      }
      FUN_180159650(local_1258);
      FUN_180159650(local_1a0);
    }
    ppiVar21 = &local_128;
    fVar41 = DAT_180b0a41c;
    do {
      ppiVar6 = local_1260;
      uVar29 = local_1268[0];
      fVar40 = auVar47._0_4_;
      piVar19 = *ppiVar21;
      piVar22 = ppiVar21[1];
      if (piVar19 != piVar22) {
        auVar37 = ZEXT864(0);
        fVar39 = 0.0;
        fVar45 = 0.0;
        piVar20 = piVar19;
        do {
          lVar18 = (longlong)*piVar20;
          auVar34 = vmaxss_avx(auVar37._0_16_,ZEXT416(*(uint *)(lVar15 + 4 + lVar18 * 8)));
          auVar37 = ZEXT1664(auVar34);
          fVar39 = fVar39 + *(float *)(lVar15 + lVar18 * 8);
          fVar38 = fVar35;
          if (*(char *)(lVar18 * 0x9c + 0x98 + local_1218) != '\0') {
            lVar17 = 0;
            do {
              lVar12 = lVar17 + 1;
              fVar38 = fVar35;
              if ((&PTR_s_Bounding_Box_18077eec0)[lVar18 * 4][lVar17] != (&DAT_1807c6a98)[lVar17])
              break;
              lVar17 = lVar12;
              fVar38 = fVar32;
            } while (lVar12 != 5);
          }
          fVar45 = fVar45 + fVar41 * fVar38;
          piVar20 = piVar20 + 1;
        } while (piVar20 != piVar22);
        iVar25 = (int)((longlong)piVar22 - (longlong)piVar19 >> 2) + -1;
        if (iVar25 < 1) {
          iVar25 = 0;
        }
        fVar38 = (float)iVar25 * *(float *)plVar28[2];
        if (*(float *)plVar28[5] < fVar39 + fVar38) {
          if (fVar45 < fVar39) {
            auVar4 = vmaxss_avx(ZEXT816(0),
                                ZEXT416((uint)(((*(float *)plVar28[5] - fVar38) - fVar45) /
                                              (fVar39 - fVar45))));
            fVar39 = 0.0;
            do {
              lVar16 = (longlong)*piVar19;
              fVar45 = fVar35;
              if (*(char *)(lVar16 * 0x9c + 0x98 + local_1218) != '\0') {
                lVar18 = 0;
                do {
                  lVar17 = lVar18;
                  if ((&PTR_s_Bounding_Box_18077eec0)[lVar16 * 4][lVar17] !=
                      (&DAT_1807c6a98)[lVar17]) goto LAB_18046a297;
                  lVar18 = lVar17 + 1;
                } while (lVar17 + 1 != 5);
                if ((&PTR_s_Bounding_Box_18077eec0)[lVar16 * 4][lVar17] == (&DAT_1807c6a98)[lVar17])
                {
                  fVar45 = fVar32;
                }
              }
LAB_18046a297:
              fVar1 = *(float *)(lVar15 + lVar16 * 8);
              auVar46 = vmaxss_avx(ZEXT816(0),ZEXT416((uint)(fVar1 - fVar41 * fVar45)));
              fVar45 = auVar46._0_4_ * auVar4._0_4_ + fVar41 * fVar45;
              if (((&DAT_18077eecc)[lVar16 * 0x20] == '\x05') && (fVar45 < fVar1)) {
                *(float *)(local_11f0 + lVar16 * 4) =
                     (fVar45 / fVar1) * *(float *)(local_11f0 + lVar16 * 4);
              }
              *(float *)(lVar15 + lVar16 * 8) = fVar45;
              fVar39 = fVar39 + fVar45;
              piVar19 = piVar19 + 1;
            } while (piVar19 != piVar22);
            lVar16 = local_1210;
            plVar28 = local_1228;
          }
        }
        fVar45 = auVar34._0_4_ * fVar33;
        if (local_1268[0] == 1) {
          fVar45 = fVar40 - fVar45;
        }
        else {
          fVar45 = fVar45 + fVar40;
        }
        auVar44 = ZEXT464((uint)*(float *)plVar28[4]);
        fVar1 = (((*(float *)plVar28[1] + *(float *)*plVar28) - fVar39) - fVar38) * fVar33;
        if (*(float *)plVar28[4] <= fVar1) {
          auVar34 = vminss_avx(ZEXT416((uint)((*(float *)plVar28[3] - fVar39) - fVar38)),
                               ZEXT416((uint)fVar1));
          auVar44 = ZEXT1664(auVar34);
        }
        piVar19 = ppiVar21[1];
        for (piVar22 = *ppiVar21; piVar22 != piVar19; piVar22 = piVar22 + 1) {
          lVar18 = (longlong)*piVar22;
          *(float *)(local_1208 + lVar18 * 8) =
               fVar33 * *(float *)(lVar15 + lVar18 * 8) + auVar44._0_4_;
          *(float *)(local_1208 + 4 + lVar18 * 8) = fVar45;
          auVar44 = ZEXT464((uint)(auVar44._0_4_ +
                                  *(float *)plVar28[2] + *(float *)(lVar15 + lVar18 * 8)));
        }
        if (lVar16 != 0) {
          local_1258 = (undefined1  [16])0x0;
          local_1248 = 0;
          uVar27 = (longlong)ppiVar21[1] - (longlong)*ppiVar21 >> 2;
          lVar18 = 0;
          if (uVar27 != 0) {
            if (0x3fffffffffffffff < uVar27) {
                    /* WARNING: Subroutine does not return */
              FUN_1801136f0();
            }
            lVar18 = FUN_18015bca0(uVar27 * 4);
            local_1258._8_8_ = lVar18;
            local_1258._0_8_ = lVar18;
            local_1248 = lVar18 + uVar27 * 4;
            lVar16 = (longlong)ppiVar21[1] - (longlong)*ppiVar21;
            FUN_18063aed0(lVar18,*ppiVar21,lVar16);
            lVar18 = lVar18 + (lVar16 >> 2) * 4;
            local_1258._8_8_ = lVar18;
            lVar16 = local_1210;
          }
          lVar17 = local_1248;
          local_1240 = *(float *)plVar28[4];
          local_123c = *(float *)plVar28[3];
          local_1238 = 1;
          puVar3 = *(undefined8 **)(lVar16 + 8);
          if (puVar3 == *(undefined8 **)(lVar16 + 0x10)) {
            FUN_18046e150(lVar16,puVar3,local_1258);
          }
          else {
            local_1248 = 0;
            uVar7 = local_1258._0_8_;
            local_1258 = ZEXT816(0);
            *puVar3 = uVar7;
            puVar3[1] = lVar18;
            puVar3[2] = lVar17;
            *(float *)(puVar3 + 3) = local_1240;
            *(float *)((longlong)puVar3 + 0x1c) = local_123c;
            *(undefined1 *)(puVar3 + 4) = 1;
            *(longlong *)(lVar16 + 8) = *(longlong *)(lVar16 + 8) + 0x28;
          }
          FUN_180159650(local_1258);
          fVar40 = auVar47._0_4_;
          fVar41 = DAT_180b0a41c;
        }
        auVar34 = vpcmpeqd_avx(ZEXT416(uVar29),SUB6416(ZEXT464(1),0));
        auVar34 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),auVar43._0_16_,auVar34);
        auVar47 = ZEXT464((uint)(fVar40 + (auVar37._0_4_ + *(float *)plVar28[2]) * auVar34._0_4_));
        ppiVar23 = ppiVar6;
      }
      auVar37 = ZEXT464(0x3f800000);
      ppiVar21 = ppiVar21 + 3;
    } while (ppiVar21 != (int **)&local_f8);
    _eh_vector_destructor_iterator_(&local_128,0x18,2,thunk_FUN_180159650);
    FUN_180159650(local_1b8);
    local_1260 = (int **)((longlong)ppiVar23 + 4);
    if (local_1260 == (int **)&local_e8) break;
    uVar29 = *(uint *)local_1260;
    auVar37 = ZEXT464((uint)local_11f8);
  } while( true );
  local_e8._0_4_ = 0;
  local_e8._4_4_ = 2;
  local_1260 = (int **)&local_e8;
  local_1268[0] = 0;
  fVar35 = 14.0;
  fVar41 = 0.85;
  auVar44 = ZEXT464((uint)local_11e8[0]);
  auVar43 = ZEXT864(0);
  fVar32 = (float)local_1220;
  do {
    plVar28 = local_1228;
    lVar15 = local_1230;
    _local_1a0 = (undefined1  [16])0x0;
    local_190 = (int *)0x0;
    _local_1b8 = (undefined1  [16])0x0;
    local_1a8 = (float *)0x0;
    auVar47 = ZEXT1664(auVar43._0_16_);
    piVar19 = local_188[(longlong)(int)local_1268[0] * 3 + 1];
    piVar22 = local_188[(longlong)(int)local_1268[0] * 3];
    piStack_198 = (int *)0x0;
    piStack_1b0 = (int *)0x0;
    piVar20 = piStack_1b0;
    piVar24 = piStack_198;
    if (piVar22 != piVar19) {
      do {
        fVar40 = auVar47._0_4_;
        iVar25 = *piVar22;
        local_1220 = CONCAT44(local_1220._4_4_,iVar25);
        if ((&DAT_18077eecc)[(longlong)iVar25 * 0x20] == '\x03') {
          if (piVar24 == local_190) {
            FUN_18026b910(local_1a0,piVar24,&local_1220);
            fVar40 = auVar47._0_4_;
            piVar24 = piStack_198;
          }
          else {
            *piVar24 = iVar25;
            piVar24 = piStack_198 + 1;
            piStack_198 = piVar24;
          }
          auVar47 = ZEXT464((uint)(fVar40 + *(float *)(lVar15 + (longlong)iVar25 * 8) +
                                            *(float *)plVar28[2]));
LAB_18046a6c9:
          piVar20 = piStack_1b0;
        }
        else {
          if ((float *)piVar20 == local_1a8) {
            FUN_18026b910(local_1b8,piVar20,&local_1220);
            piVar24 = piStack_198;
            goto LAB_18046a6c9;
          }
          *piVar20 = iVar25;
          piVar20 = (int *)((longlong)piStack_1b0 + 4);
          piStack_1b0 = piVar20;
          piVar24 = piStack_198;
        }
        piVar22 = piVar22 + 1;
      } while (piVar22 != piVar19);
    }
    lVar16 = local_11f0;
    plVar28 = local_1228;
    lVar15 = local_1230;
    auVar34 = auVar37._0_16_;
    if (local_1a0 != (undefined1  [8])piVar24) {
      auVar47 = ZEXT464((uint)(auVar47._0_4_ - *(float *)local_1228[2]));
    }
    auVar14 = local_1a0;
    if ((local_1b8 != (undefined1  [8])piVar20) && (local_1a0 != (undefined1  [8])piVar24)) {
      if (local_1268[0] == 0) {
        pfVar10 = (float *)*local_1228;
        pfVar13 = (float *)local_1228[4];
      }
      else {
        pfVar10 = (float *)local_1228[3];
        pfVar13 = (float *)local_1228[1];
      }
      pfVar11 = (float *)local_1228[2];
      fVar35 = ((*pfVar10 - *pfVar13) - (*pfVar11 + *pfVar11)) - fVar35 * DAT_180b0a41c;
      iVar25 = 0;
      local_1220 = local_1220 & 0xffffffff00000000;
      auVar36 = ZEXT464(0x3dcccccd);
      do {
        lVar18 = local_1218;
        auVar34 = auVar37._0_16_;
        if (auVar47._0_4_ <= fVar35) break;
        auVar47 = ZEXT1664(auVar43._0_16_);
        fVar40 = auVar43._0_4_;
        if (auVar14 != (undefined1  [8])piVar24) {
          do {
            lVar17 = (longlong)*(int *)auVar14;
            auVar34 = vmaxss_avx(auVar36._0_16_,
                                 ZEXT416((uint)(fVar41 * *(float *)(lVar16 + lVar17 * 4))));
            *(int *)(lVar16 + lVar17 * 4) = auVar34._0_4_;
            pfVar10 = (float *)FUN_180464e20(&local_11f8,&PTR_s_Bounding_Box_18077eec0 + lVar17 * 4,
                                             lVar17 * 0x9c + lVar18,*plVar28);
            fVar40 = *pfVar10;
            fVar39 = pfVar10[1];
            *(float *)(lVar15 + lVar17 * 8) = fVar40;
            *(float *)(lVar15 + 4 + lVar17 * 8) = fVar39;
            pfVar11 = (float *)plVar28[2];
            fVar40 = auVar47._0_4_ + fVar40 + *pfVar11;
            auVar47 = ZEXT464((uint)fVar40);
            auVar14 = (undefined1  [8])((longlong)auVar14 + 4);
          } while (auVar14 != (undefined1  [8])piVar24);
          auVar14 = local_1a0;
          piVar24 = piStack_198;
          iVar25 = (int)(float)local_1220;
        }
        auVar34 = auVar37._0_16_;
        auVar47 = ZEXT464((uint)(fVar40 - *pfVar11));
        iVar25 = iVar25 + 1;
        local_1220 = CONCAT44(local_1220._4_4_,iVar25);
      } while (iVar25 < 0x14);
      fVar35 = 14.0;
      piVar20 = piStack_1b0;
    }
    ppiVar23 = local_1260;
    uVar29 = local_1268[0];
    if (local_1268[0] == 0) {
      fVar39 = (*(float *)*plVar28 - *(float *)plVar28[2]) - auVar47._0_4_;
      fVar40 = fVar39 + auVar47._0_4_;
    }
    else {
      fVar39 = *(float *)plVar28[1] + *(float *)plVar28[2];
      fVar40 = fVar39;
    }
    if (auVar14 == (undefined1  [8])piVar24) {
      if (local_1268[0] == 0) goto LAB_18046a9e8;
LAB_18046aa08:
    }
    else {
      fVar45 = auVar44._0_4_;
      auVar34 = vmaxss_avx(auVar34,ZEXT416((uint)(fVar32 - fVar45)));
      if (local_1268[0] == 0) {
        do {
          lVar15 = (longlong)*(int *)auVar14;
          auVar4 = vminss_avx(ZEXT416(*(uint *)(local_1230 + 4 + lVar15 * 8)),auVar34);
          *(float *)(local_1230 + 4 + lVar15 * 8) = auVar4._0_4_;
          fVar1 = auVar4._0_4_ * fVar33;
          fVar38 = fVar1 + fVar45;
          fVar5 = (*(float *)(*plVar28 + 4) + *(float *)(plVar28[1] + 4)) * fVar33;
          if (fVar38 <= fVar5) {
            auVar4 = vminss_avx(ZEXT416((uint)(fVar32 - fVar1)),ZEXT416((uint)fVar5));
            fVar38 = auVar4._0_4_;
          }
          *(float *)(local_1208 + lVar15 * 8) =
               fVar40 - fVar33 * *(float *)(local_1230 + lVar15 * 8);
          *(float *)(local_1208 + 4 + lVar15 * 8) = fVar38;
          fVar40 = fVar40 - (*(float *)plVar28[2] + *(float *)(local_1230 + lVar15 * 8));
          auVar14 = (undefined1  [8])((longlong)auVar14 + 4);
        } while (auVar14 != (undefined1  [8])piVar24);
        auVar14 = local_1a0;
        piVar24 = piStack_198;
LAB_18046a9e8:
        FUN_1805f9ff0(auVar14,piVar24);
        piVar20 = piStack_1b0;
        auVar14 = local_1a0;
        piVar24 = piStack_198;
        goto LAB_18046aa08;
      }
      do {
        lVar15 = (longlong)*(int *)auVar14;
        auVar4 = vminss_avx(ZEXT416(*(uint *)(local_1230 + 4 + lVar15 * 8)),auVar34);
        *(float *)(local_1230 + 4 + lVar15 * 8) = auVar4._0_4_;
        fVar1 = auVar4._0_4_ * fVar33;
        fVar38 = fVar1 + fVar45;
        fVar5 = (*(float *)(*plVar28 + 4) + *(float *)(plVar28[1] + 4)) * fVar33;
        if (fVar38 <= fVar5) {
          auVar4 = vminss_avx(ZEXT416((uint)(fVar32 - fVar1)),ZEXT416((uint)fVar5));
          fVar38 = auVar4._0_4_;
        }
        *(float *)(local_1208 + lVar15 * 8) = fVar33 * *(float *)(local_1230 + lVar15 * 8) + fVar40;
        *(float *)(local_1208 + 4 + lVar15 * 8) = fVar38;
        fVar40 = fVar40 + *(float *)plVar28[2] + *(float *)(local_1230 + lVar15 * 8);
        auVar14 = (undefined1  [8])((longlong)auVar14 + 4);
      } while (auVar14 != (undefined1  [8])piVar24);
      piVar20 = piStack_1b0;
      auVar14 = local_1a0;
      piVar24 = piStack_198;
    }
    lVar15 = local_1230;
    fVar40 = auVar47._0_4_;
    if (local_1210 != 0) {
      if (auVar14 != (undefined1  [8])piVar24) {
        local_1258 = (undefined1  [16])0x0;
        local_1248 = 0;
        uVar27 = (longlong)piVar24 - (longlong)auVar14 >> 2;
        lVar16 = 0;
        if (uVar27 != 0) {
          if (0x3fffffffffffffff < uVar27) {
                    /* WARNING: Subroutine does not return */
            FUN_1801136f0();
          }
          lVar16 = FUN_18015bca0(uVar27 * 4);
          local_1258._8_8_ = lVar16;
          local_1258._0_8_ = lVar16;
          local_1248 = uVar27 * 4 + lVar16;
          lVar18 = (longlong)piStack_198 - (longlong)local_1a0;
          FUN_18063aed0(lVar16,local_1a0,lVar18);
          lVar16 = lVar16 + (lVar18 >> 2) * 4;
          local_1258._8_8_ = lVar16;
        }
        lVar18 = local_1248;
        local_123c = fVar39 + auVar47._0_4_;
        local_1238 = 1;
        puVar3 = *(undefined8 **)(local_1210 + 8);
        local_1240 = fVar39;
        if (puVar3 == *(undefined8 **)(local_1210 + 0x10)) {
          FUN_18046e150(local_1210,puVar3,local_1258);
        }
        else {
          local_1248 = 0;
          uVar7 = local_1258._0_8_;
          local_1258 = ZEXT816(0);
          *puVar3 = uVar7;
          puVar3[1] = lVar16;
          puVar3[2] = lVar18;
          *(float *)(puVar3 + 3) = fVar39;
          *(float *)((longlong)puVar3 + 0x1c) = local_123c;
          *(undefined1 *)(puVar3 + 4) = 1;
          *(longlong *)(local_1210 + 8) = *(longlong *)(local_1210 + 8) + 0x28;
        }
        FUN_180159650(local_1258);
        fVar40 = auVar47._0_4_;
        piVar20 = piStack_1b0;
        auVar14 = local_1a0;
        piVar24 = piStack_198;
      }
    }
    if (uVar29 == 0) {
      if (auVar14 == (undefined1  [8])piVar24) {
        fVar39 = *(float *)*plVar28 - *(float *)plVar28[2];
        auVar34 = ZEXT416((uint)(fVar39 - *(float *)plVar28[4]));
      }
      else {
        fVar39 = fVar39 - *(float *)plVar28[2];
        auVar34 = ZEXT416((uint)(fVar39 - *(float *)plVar28[4]));
      }
    }
    else {
      if (auVar14 == (undefined1  [8])piVar24) {
        fVar39 = *(float *)plVar28[2] + *(float *)plVar28[1];
      }
      else {
        fVar39 = fVar39 + fVar40 + *(float *)plVar28[2];
      }
      auVar34 = ZEXT416((uint)(*(float *)plVar28[3] - fVar39));
    }
    auVar37 = ZEXT1664(auVar43._0_16_);
    fVar40 = auVar43._0_4_;
    iVar25 = 0;
    for (auVar14 = local_1b8; auVar14 != (undefined1  [8])piVar20;
        auVar14 = (undefined1  [8])((longlong)auVar14 + 4)) {
      fVar40 = auVar37._0_4_ + *(float *)(lVar15 + 4 + (longlong)*(int *)auVar14 * 8);
      auVar37 = ZEXT464((uint)fVar40);
      iVar25 = iVar25 + 1;
    }
    iVar25 = iVar25 + -1;
    if (iVar25 < 1) {
      iVar25 = 0;
    }
    auVar46 = auVar44._0_16_;
    auVar4 = vmaxss_avx(auVar46,ZEXT416((uint)(fVar32 - ((float)iVar25 * *local_11d8 + fVar40))));
    if (auVar44._0_4_ <= *(float *)(*plVar28 + 4)) {
      auVar46 = vminss_avx(auVar4,ZEXT416((uint)*(float *)(*plVar28 + 4)));
    }
    auVar47 = ZEXT1664(auVar46);
    auVar37 = ZEXT464(0x3f800000);
    if (local_1b8 != (undefined1  [8])piVar20) {
      auVar34 = vmaxss_avx(auVar37._0_16_,auVar34);
      auVar14 = local_1b8;
      if (uVar29 == 0) {
        do {
          lVar16 = (longlong)*(int *)auVar14;
          auVar4 = vminss_avx(ZEXT416(*(uint *)(lVar15 + lVar16 * 8)),auVar34);
          *(float *)(lVar15 + lVar16 * 8) = auVar4._0_4_;
          fVar40 = *(float *)(lVar15 + 4 + lVar16 * 8);
          *(float *)(local_1208 + lVar16 * 8) = fVar39 - auVar4._0_4_ * fVar33;
          *(float *)(local_1208 + 4 + lVar16 * 8) = fVar33 * fVar40 + auVar47._0_4_;
          auVar47 = ZEXT464((uint)(auVar47._0_4_ +
                                  *(float *)plVar28[2] + *(float *)(lVar15 + 4 + lVar16 * 8)));
          auVar14 = (undefined1  [8])((longlong)auVar14 + 4);
        } while (auVar14 != (undefined1  [8])piVar20);
      }
      else {
        do {
          lVar16 = (longlong)*(int *)auVar14;
          auVar4 = vminss_avx(ZEXT416(*(uint *)(lVar15 + lVar16 * 8)),auVar34);
          *(float *)(lVar15 + lVar16 * 8) = auVar4._0_4_;
          fVar40 = *(float *)(lVar15 + 4 + lVar16 * 8);
          *(float *)(local_1208 + lVar16 * 8) = auVar4._0_4_ * fVar33 + fVar39;
          *(float *)(local_1208 + 4 + lVar16 * 8) = fVar33 * fVar40 + auVar47._0_4_;
          auVar47 = ZEXT464((uint)(auVar47._0_4_ +
                                  *(float *)plVar28[2] + *(float *)(lVar15 + 4 + lVar16 * 8)));
          auVar14 = (undefined1  [8])((longlong)auVar14 + 4);
        } while (auVar14 != (undefined1  [8])piVar20);
      }
      piVar20 = piStack_1b0;
    }
    if ((local_1210 != 0) && (local_1b8 != (undefined1  [8])piVar20)) {
      local_1258 = (undefined1  [16])0x0;
      local_1248 = 0;
      uVar27 = (longlong)piVar20 - (longlong)local_1b8 >> 2;
      lVar15 = 0;
      if (uVar27 != 0) {
        if (0x3fffffffffffffff < uVar27) {
                    /* WARNING: Subroutine does not return */
          FUN_1801136f0();
        }
        lVar15 = FUN_18015bca0(uVar27 * 4);
        local_1258._8_8_ = lVar15;
        local_1258._0_8_ = lVar15;
        local_1248 = uVar27 * 4 + lVar15;
        lVar16 = (longlong)piStack_1b0 - (longlong)local_1b8;
        FUN_18063aed0(lVar15,local_1b8,lVar16);
        lVar15 = lVar15 + (lVar16 >> 2) * 4;
        local_1258._8_8_ = lVar15;
      }
      lVar16 = local_1248;
      local_1240 = auVar44._0_4_;
      local_1238 = 0;
      puVar3 = *(undefined8 **)(local_1210 + 8);
      local_123c = fVar32;
      if (puVar3 == *(undefined8 **)(local_1210 + 0x10)) {
        FUN_18046e150(local_1210,puVar3,local_1258);
      }
      else {
        local_1248 = 0;
        uVar7 = local_1258._0_8_;
        local_1258 = ZEXT816(0);
        *puVar3 = uVar7;
        puVar3[1] = lVar15;
        puVar3[2] = lVar16;
        *(float *)(puVar3 + 3) = local_1240;
        *(float *)((longlong)puVar3 + 0x1c) = fVar32;
        *(undefined1 *)(puVar3 + 4) = 0;
        *(longlong *)(local_1210 + 8) = *(longlong *)(local_1210 + 8) + 0x28;
      }
      FUN_180159650(local_1258);
    }
    FUN_180159650(local_1b8);
    FUN_180159650(local_1a0);
    local_1260 = (int **)((longlong)ppiVar23 + 4);
    if (local_1260 == (int **)local_e0) {
      _eh_vector_destructor_iterator_(local_188,0x18,4,thunk_FUN_180159650);
    }
    local_1268[0] = *(uint *)local_1260;
  } while( true );
}



