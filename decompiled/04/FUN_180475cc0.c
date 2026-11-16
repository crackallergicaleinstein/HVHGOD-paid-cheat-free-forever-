// FUN_180475cc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180475cc0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180475cc0(longlong *param_1,float *param_2,longlong param_3)

{
  undefined2 uVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  bool bVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined2 *puVar11;
  longlong *plVar12;
  float *pfVar13;
  undefined1 (*pauVar14) [16];
  int iVar15;
  undefined **ppuVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined1 *puVar20;
  longlong lVar21;
  float fVar22;
  float fVar23;
  int *piVar24;
  float *pfVar25;
  uint uVar26;
  float fVar27;
  int iVar28;
  ulonglong uVar29;
  longlong lVar30;
  float *pfVar31;
  float **ppfVar32;
  longlong lVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined1 auVar37 [64];
  undefined1 auVar38 [64];
  float fVar39;
  undefined1 auVar40 [64];
  float fVar41;
  float fVar42;
  undefined1 auVar43 [64];
  float fVar44;
  undefined1 auStack_248 [32];
  undefined8 local_228;
  float *local_220;
  float *local_218;
  ulonglong local_210;
  undefined8 local_208;
  undefined4 local_1f8;
  float local_1e8;
  float local_1e4;
  float *local_1e0;
  undefined8 local_1d8;
  uint local_1d0;
  undefined1 local_1cc [4];
  float *local_1c8;
  undefined1 local_1c0 [32];
  longlong local_1a0;
  float local_198;
  float fStack_194;
  float local_190 [4];
  float local_180;
  float local_17c;
  float local_178 [2];
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  longlong local_148;
  float *pfStack_140;
  float *local_138;
  undefined1 local_130 [16];
  undefined1 auStack_120 [16];
  float *local_108;
  longlong *plStack_100;
  char local_f4 [12];
  ulonglong local_e8;
  
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_248;
  pfVar31 = (float *)(param_3 + 0x4940);
  local_1e0 = param_2;
  local_1d8 = param_1;
  local_1c8 = pfVar31;
  FUN_180475aa0(pfVar31);
  lVar30 = DAT_180bb8ae8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  local_1a0 = *(longlong *)(*(longlong *)(lVar30 + 0x14d0) + 0x2c8);
  if (DAT_180cd6678 != 0) {
    cVar6 = (**(code **)(*(longlong *)DAT_180cd6678 + 0x10))();
    if (cVar6 == '\0') {
      auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 310.0 + 0.5)),1);
      auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 230.0 + 0.5)),1);
      local_1d8 = (longlong *)CONCAT44(auVar4._0_4_ + param_2[1],auVar3._0_4_ + *param_2);
      local_218 = (float *)0x0;
      local_220 = (float *)0x18082ad18;
      local_228 = (float *)CONCAT44(local_228._4_4_,DAT_1808da474);
      FUN_180463450(local_1a0,DAT_180c62ca8,0x4159999a,&local_1d8);
    }
    lVar30 = DAT_180bb8ae8;
  }
  uVar26 = *(uint *)(param_1 + 9);
  if (-1 < (int)uVar26) {
    FUN_180477c50(param_1,param_2,pfVar31);
  }
  local_1d0 = uVar26 >> 0x1f;
  if (-1 < (int)uVar26) {
    uVar26 = *(uint *)(lVar30 + 0x1e80) | 0x40;
    *(uint *)(lVar30 + 0x1e80) = uVar26;
    piVar24 = (int *)(lVar30 + 0x1fd8);
    iVar7 = *(int *)(lVar30 + 0x1fdc);
    if (*piVar24 == iVar7) {
      iVar15 = *piVar24 + 1;
      if (iVar7 == 0) {
        iVar7 = 8;
      }
      else {
        iVar7 = iVar7 / 2 + iVar7;
      }
      if (iVar15 < iVar7) {
        iVar15 = iVar7;
      }
      FUN_1804d14d0(piVar24,iVar15);
    }
    *(uint *)(*(longlong *)(lVar30 + 0x1fe0) + (longlong)*piVar24 * 4) = uVar26;
    *piVar24 = *piVar24 + 1;
  }
  local_108 = (float *)0x18082ad08;
  plStack_100 = (longlong *)0x18082acf8;
  local_170 = DAT_180b0a41c * 20.0;
  auVar43 = ZEXT464((uint)local_170);
  fVar42 = DAT_180b0a41c * 6.0;
  fVar27 = 0.5;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.6 + 0.5)),1);
  local_1e8 = 1.0;
  auVar3 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar3);
  local_1f8 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = (float *)0x0;
  local_220 = (&local_108)[(int)*pfVar31];
  local_150 = 0.0;
  local_228 = (float *)((ulonglong)local_228._4_4_ << 0x20);
  FUN_1804ea040(&local_180,DAT_180c62ca8,auVar3._0_8_,0x7f7fffff);
  auVar3 = vroundss_avx(ZEXT816(0),
                        ZEXT416((uint)(DAT_180b0a41c * 25.0 + local_180 + DAT_180b0a41c * 9.0 +
                                      fVar27)),1);
  auVar38 = ZEXT1664(auVar3);
  local_198 = auVar3._0_4_;
  auVar3 = vroundss_avx(ZEXT816(0),
                        ZEXT416((uint)(((DAT_180b0a41c * 221.0 + *param_2) -
                                       (local_198 + fVar42 + auVar43._0_4_) * fVar27) + fVar27)),1);
  auVar40 = ZEXT1664(auVar3);
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 18.5 + fVar27)),1);
  fVar39 = auVar3._0_4_ * fVar27;
  auVar4 = vroundss_avx(ZEXT816(0),
                        ZEXT416((uint)(((DAT_180b0a41c * 61.6 + param_2[1]) - fVar39) + fVar27)),1);
  auVar37 = ZEXT1664(auVar4);
  local_190[0] = auVar4._0_4_;
  fVar27 = 0.0;
  local_178[0] = auVar3._0_4_ + local_190[0];
  fVar39 = fVar39 + local_190[0];
  ppfVar32 = &local_108;
  fVar23 = 0.04;
  fVar22 = 255.0;
  fVar41 = 0.25;
  fVar44 = 0.75;
  local_1e4 = 10.0;
  do {
    fVar36 = *pfVar31;
    auVar3 = vpcmpeqd_avx(ZEXT416((uint)fVar27),ZEXT416((uint)fVar36));
    auVar3 = vblendvps_avx(auVar43._0_16_,auVar38._0_16_,auVar3);
    auVar38 = ZEXT1664(auVar3);
    local_160 = auVar40._0_4_;
    local_15c = auVar37._0_4_;
    local_158 = auVar3._0_4_ + local_160;
    local_154 = local_178[0];
    FUN_1804c2920(fVar27);
    plVar2 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
    uVar17 = ~*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
    pcVar10 = "#side";
    cVar6 = '#';
    uVar26 = uVar17;
    do {
      if (((cVar6 == '#') && (*pcVar10 == '#')) && (pcVar10[1] == '#')) {
        pcVar10 = pcVar10 + 2;
        uVar26 = uVar17;
      }
      else {
        uVar26 = crc32(uVar26,cVar6);
      }
      cVar6 = *pcVar10;
      pcVar10 = pcVar10 + 1;
    } while (cVar6 != '\0');
    uVar26 = ~uVar26;
    if (*(uint *)(*plVar2 + 0x1534) == uVar26) {
      FUN_1804cf810(uVar26,0xb,&DAT_18082acec);
    }
    local_228 = (float *)CONCAT71(local_228._1_7_,1);
    puVar11 = (undefined2 *)FUN_1804aad60(local_1cc,uVar26,&local_160,&local_158);
    uVar1 = *puVar11;
    if ((*(char *)(puVar11 + 1) != '\0') && (fVar27 != fVar36)) {
      *pfVar31 = fVar27;
    }
    auVar3 = vpcmpeqd_avx(ZEXT116((byte)uVar1),SUB6416(ZEXT464(0),0));
    auVar3 = vblendvps_avx(ZEXT416((uint)local_1e8),ZEXT416((uint)local_150),auVar3);
    fVar34 = (float)FUN_1804aaa10(uVar26 + 1,auVar3._0_8_,0x41800000);
    iVar7 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar7 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar7 + -1;
    }
    uVar9 = DAT_180b0a458;
    if (fVar27 == fVar36) {
      fVar35 = DAT_180b0a41c * 5.0;
      uVar8 = FUN_180462ad0(DAT_180b0a488,DAT_180b0a458,fVar34 * fVar23 + 0.1);
      local_220 = (float *)((ulonglong)local_220 & 0xffffffff00000000);
      local_228 = (float *)CONCAT44(local_228._4_4_,fVar35);
      FUN_1804df870(local_1a0,&local_160,&local_158,uVar8);
      auVar37 = ZEXT464((uint)local_190[0]);
      fVar34 = local_1e8;
    }
    else {
      if (local_150 < fVar34) {
        fVar35 = ((float)(DAT_180b0a488 >> 0x18) / fVar22) * fVar34;
        if (local_150 <= fVar35) {
          auVar3 = vminss_avx(ZEXT416((uint)local_1e8),ZEXT416((uint)fVar35));
          fVar35 = auVar3._0_4_;
        }
        else {
          fVar35 = local_150;
        }
        local_220 = (float *)((ulonglong)local_220 & 0xffffffff00000000);
        local_228 = (float *)CONCAT44(local_228._4_4_,DAT_180b0a41c * 5.0);
        FUN_1804df870(local_1a0,&local_160,&local_158,
                      (int)(longlong)(fVar35 * fVar22 + 0.5) << 0x18 | DAT_180b0a488 & 0xffffff);
      }
      fVar34 = fVar34 * fVar41 + fVar44;
    }
    auVar3 = vpcmpeqd_avx(ZEXT416((uint)fVar27),ZEXT416((uint)fVar36));
    auVar3 = vblendvps_avx(ZEXT416((uint)local_1e4),SUB6416(ZEXT464(0x41380000),0),auVar3);
    local_168 = auVar3._0_4_ * DAT_180b0a41c + auVar40._0_4_;
    local_164 = fVar39;
    FUN_180474ed0(local_1a0,&local_168,fVar27,fVar34);
    fVar34 = auVar40._0_4_;
    fVar35 = auVar38._0_4_;
    if (fVar27 == fVar36) {
      fVar36 = (float)FUN_180463350(DAT_180c62ca8,0x4159999a);
      local_17c = fVar39 - fVar36 * 0.5;
      local_180 = DAT_180b0a41c * 23.0 + auVar40._0_4_;
      local_218 = (float *)0x0;
      local_220 = *ppfVar32;
      local_228 = (float *)CONCAT44(local_228._4_4_,uVar9);
      FUN_180463450(local_1a0,DAT_180c62ca8,0x4159999a,&local_180);
      fVar34 = auVar40._0_4_;
      fVar35 = auVar38._0_4_;
    }
    auVar40 = ZEXT464((uint)(fVar34 + fVar35 + fVar42));
    fVar27 = (float)((int)fVar27 + 1);
    ppfVar32 = ppfVar32 + 1;
    auVar38 = ZEXT464((uint)local_198);
    auVar43 = ZEXT464((uint)local_170);
  } while ((int)fVar27 < 2);
  iVar7 = FUN_180473ef0(*pfVar31,0xf);
  plVar2 = local_1d8;
  if ((DAT_180b909b0 != 0) &&
     ((ulonglong)
      ((*(longlong *)(DAT_180b909b0 + 0x48) - *(longlong *)(DAT_180b909b0 + 0x40)) / 0x18) <=
      (ulonglong)(longlong)*(short *)(pfVar31 + (longlong)iVar7 * 0x15 + 0x11))) {
                    /* WARNING: Subroutine does not return */
    FUN_18047c010();
  }
  fVar39 = DAT_180b0a41c * 6.0;
  fVar27 = 0.5;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 150.0 + 0.5)),1);
  local_190[0] = (auVar3._0_4_ + *param_2) - fVar39;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 300.0 + 0.5)),1);
  local_198 = auVar3._0_4_ + *param_2 + fVar39;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 78.0 + 0.5)),1);
  fVar42 = 3.0;
  local_190[1] = ((auVar3._0_4_ + param_2[1]) - fVar39 * fVar41) + 3.0;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 404.0 + 0.5)),1);
  fStack_194 = auVar3._0_4_ + param_2[1] + fVar39 + 3.0;
  fVar39 = 4.0;
  auVar37 = ZEXT464((uint)local_150);
  if (DAT_180cd68f8 != 0) {
    local_164 = local_190[1] - 4.0;
    local_220 = (float *)((ulonglong)local_220 & 0xffffffff00000000);
    local_228 = (float *)CONCAT44(local_228._4_4_,local_150);
    local_180 = local_198;
    local_17c = local_190[1];
    local_168 = local_190[0];
    FUN_1804df870(local_1a0,&local_168,&local_180,DAT_1808da494 | 0xff000000);
    if ((DAT_180cd68f8 != 0) && ((char)local_1d0 != '\0')) {
      fVar22 = *pfVar31;
      if (DAT_180cd67f8 != 0) {
        local_178[0] = 2.10195e-44;
        cVar6 = (**(code **)(*(longlong *)DAT_180cd67f8 + 0x10))(DAT_180cd67f8,local_178);
        if (cVar6 != '\0') {
          fVar22 = 0.0;
        }
      }
      local_178[0] = 2.10195e-44;
      local_170 = fVar22;
      if (DAT_180cd68f8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1805fa874();
      }
      local_228 = &local_198;
      plVar12 = (longlong *)
                (**(code **)(*(longlong *)DAT_180cd68f8 + 0x10))
                          (DAT_180cd68f8,&local_170,local_178,local_190);
      lVar30 = local_1a0;
      if (plVar12 != (longlong *)0x0) {
        auVar38 = ZEXT464((uint)local_1e8);
        local_180 = local_1e8;
        local_17c = local_1e8;
        local_168 = auVar37._0_4_;
        local_164 = local_168;
        if ((plVar12 == *(longlong **)(local_1a0 + 0x78)) && (*(longlong *)(local_1a0 + 0x70) == 0))
        {
          bVar5 = false;
        }
        else {
          bVar5 = true;
          local_108 = (float *)0x0;
          piVar24 = (int *)(local_1a0 + 0xb0);
          iVar7 = *(int *)(local_1a0 + 0xb4);
          plStack_100 = plVar12;
          if (*piVar24 == iVar7) {
            iVar15 = *piVar24 + 1;
            if (iVar7 == 0) {
              iVar7 = 8;
            }
            else {
              iVar7 = iVar7 / 2 + iVar7;
            }
            if (iVar15 < iVar7) {
              iVar15 = iVar7;
            }
            FUN_1804aec70(piVar24,iVar15);
          }
          iVar7 = *piVar24;
          lVar21 = *(longlong *)(lVar30 + 0xb8);
          *(undefined8 *)(lVar21 + (longlong)iVar7 * 0x10) = 0;
          *(longlong **)(lVar21 + 8 + (longlong)iVar7 * 0x10) = plVar12;
          *piVar24 = *piVar24 + 1;
          *(float **)(lVar30 + 0x70) = local_108;
          *(longlong **)(lVar30 + 0x78) = plStack_100;
          FUN_1804d92c0(lVar30);
        }
        FUN_1804d9590(lVar30,6,4);
        local_220 = (float *)CONCAT44(local_220._4_4_,0xffffffff);
        local_228 = &local_180;
        FUN_1804d97d0(lVar30,local_190,&local_198,&local_168);
        if (bVar5) {
          FUN_1804d9530(lVar30);
        }
        goto LAB_18047666f;
      }
    }
  }
  FUN_180473f60(local_1a0,(int)*(short *)(pfVar31 + (longlong)iVar7 * 0x15 + 0x11),
                CONCAT44(local_190[1],local_190[0]),CONCAT44(fStack_194,local_198));
  auVar38 = ZEXT464((uint)local_1e8);
LAB_18047666f:
  plVar12 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  uVar17 = ~*(uint *)(plVar12[0x22] + -4 + (longlong)(int)plVar12[0x21] * 4);
  pcVar10 = "##character_gallery";
  cVar6 = '#';
  uVar26 = uVar17;
  do {
    pcVar10 = pcVar10 + 1;
    if (((cVar6 == '#') && (*pcVar10 == '#')) && (pcVar10[1] == '#')) {
      pcVar10 = pcVar10 + 2;
      uVar26 = uVar17;
    }
    else {
      uVar26 = crc32(uVar26,cVar6);
    }
    cVar6 = *pcVar10;
  } while (cVar6 != '\0');
  uVar26 = ~uVar26;
  if (*(uint *)(*plVar12 + 0x1534) == uVar26) {
    FUN_1804cf810(uVar26,0xb,"##character_gallery");
  }
  local_228 = (float *)CONCAT71(local_228._1_7_,1);
  puVar11 = (undefined2 *)FUN_1804aad60(local_1cc,uVar26,local_190,&local_198);
  local_1e8 = (float)CONCAT22(local_1e8._2_2_,*puVar11);
  fVar22 = auVar37._0_4_;
  fVar41 = fVar22;
  if (((*(char *)(DAT_180bb8ae8 + 0x118) != '\0') || (*(char *)(DAT_180bb8ae8 + 0xb5e) != '\0')) &&
     (fVar22 <= *(float *)(DAT_180bb8ae8 + 0xbc4))) {
    if ((-256000.0 <= *(float *)(DAT_180bb8ae8 + 0x110)) &&
       (-256000.0 <= *(float *)(DAT_180bb8ae8 + 0x114))) {
      pfVar25 = (float *)(DAT_180bb8ae8 + 0xaf0);
      if (pfVar25 == (float *)0x0) {
        pfVar13 = (float *)(DAT_180bb8ae8 + 0x110);
      }
      else {
        pfVar13 = pfVar25;
      }
      if ((-256000.0 <= *pfVar13) && (-256000.0 <= pfVar13[1])) {
        fVar22 = *(float *)(DAT_180bb8ae8 + 0x114) - *(float *)(DAT_180bb8ae8 + 0xaf4);
        fVar41 = *(float *)(DAT_180bb8ae8 + 0x110) - *pfVar25;
      }
    }
  }
  if ((*(char *)(puVar11 + 1) != '\0') && (fVar22 * fVar22 + fVar41 * fVar41 < 16.0)) {
    *(undefined4 *)((longlong)plVar2 + 0x24) = 4;
    lVar30 = *(longlong *)(*plVar2 + (longlong)(int)plVar2[3] * 8);
    *(undefined4 *)(plVar2 + 9) = 0xf;
    iVar7 = FUN_180473ef0(*(undefined4 *)(lVar30 + 0x4968),0xf);
    *(int *)((longlong)plVar2 + 0x4c) =
         (int)*(short *)(lVar30 + 0x496e + ((longlong)iVar7 * 0x15 + (longlong)(int)plVar2[9]) * 4);
    plVar2[0x16] = 0;
    *(undefined1 *)(plVar2 + 0x17) = 0;
    *(undefined4 *)(plVar2 + 0x1f) = 0;
    *(undefined4 *)(plVar2 + 10) = 0;
    *(undefined4 *)((longlong)plVar2 + 0x7c) = 0;
  }
  local_190[0] = 2.52234e-44;
  local_190[1] = 2.66247e-44;
  local_190[2] = 2.10195e-44;
  lVar30 = 0;
  fVar22 = 421.0;
  fVar41 = 47.8;
  fVar44 = 467.0;
  uVar9 = 0x41900000;
  do {
    fVar23 = *(float *)((longlong)local_190 + lVar30);
    if ((DAT_180cd67b8 == 0) ||
       (local_178[0] = fVar23,
       cVar6 = (**(code **)(*(longlong *)DAT_180cd67b8 + 0x10))(DAT_180cd67b8,local_178),
       cVar6 != '\0')) {
      iVar7 = FUN_180473ef0(*pfVar31,fVar23);
      lVar33 = (longlong)iVar7 * 0x15 + (longlong)(int)fVar23;
      auVar3 = vroundss_avx(ZEXT816(0),
                            ZEXT416((uint)(*(float *)((longlong)&DAT_18077f790 + lVar30) *
                                           DAT_180b0a41c + fVar27)),1);
      local_198 = auVar3._0_4_ + *local_1e0;
      auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar22 + fVar27)),1);
      fStack_194 = auVar3._0_4_ + local_1e0[1];
      auVar3 = vroundss_avx(ZEXT816(0),
                            ZEXT416((uint)((*(float *)((longlong)&DAT_18077f790 + lVar30) + fVar41)
                                           * DAT_180b0a41c + fVar27)),1);
      local_170 = auVar3._0_4_ + *local_1e0;
      auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar44 + fVar27)),1);
      local_16c = auVar3._0_4_ + local_1e0[1];
      lVar21 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
      uVar8 = FUN_1804c2670(lVar21,fVar23);
      piVar24 = (int *)(lVar21 + 0x108);
      iVar7 = *(int *)(lVar21 + 0x10c);
      if (*piVar24 == iVar7) {
        iVar15 = *piVar24 + 1;
        if (iVar7 == 0) {
          iVar7 = 8;
        }
        else {
          iVar7 = iVar7 / 2 + iVar7;
        }
        if (iVar15 < iVar7) {
          iVar15 = iVar7;
        }
        FUN_1804d14d0(piVar24,iVar15);
      }
      *(undefined4 *)(*(longlong *)(lVar21 + 0x110) + (longlong)*piVar24 * 4) = uVar8;
      *piVar24 = *piVar24 + 1;
      if (fVar23 == 2.10195e-44) {
        plVar2 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
        uVar17 = ~*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
        pcVar10 = "#slot";
        cVar6 = '#';
        uVar26 = uVar17;
        do {
          if (((cVar6 == '#') && (*pcVar10 == '#')) && (pcVar10[1] == '#')) {
            pcVar10 = pcVar10 + 2;
            uVar26 = uVar17;
          }
          else {
            uVar26 = crc32(uVar26,cVar6);
          }
          cVar6 = *pcVar10;
          pcVar10 = pcVar10 + 1;
        } while (cVar6 != '\0');
        uVar26 = ~uVar26;
        if (*(uint *)(*plVar2 + 0x1534) == uVar26) {
          FUN_1804cf810(uVar26,0xb,&DAT_18082ad78);
        }
        local_228 = (float *)CONCAT71(local_228._1_7_,1);
        pcVar10 = (char *)FUN_1804aad60(&local_1e8,uVar26,&local_198,&local_170);
        cVar6 = pcVar10[2];
        uVar26 = DAT_180b0a488;
        if (*pcVar10 != '\0') {
          uVar26 = DAT_180b0a494;
        }
        local_220 = (float *)((ulonglong)local_220 & 0xffffffff00000000);
        local_228._0_4_ = DAT_180b0a41c * 5.0;
        FUN_1804df870(local_1a0,&local_198,&local_170,uVar26);
        local_180 = (local_170 + local_198) * fVar27;
        local_17c = (local_16c + fStack_194) * fVar27;
        local_228 = (float *)CONCAT44(local_228._4_4_,uVar9);
        FUN_180463dc0(local_1a0,&local_180,DAT_180b0a458,&DAT_18082a24c);
LAB_180476adb:
        pcVar10 = "Models";
        if (fVar23 == 2.66247e-44) {
          pcVar10 = "Gloves";
        }
      }
      else {
        local_168 = fVar39 * DAT_180b0a41c;
        local_164 = local_168;
        uVar8 = FUN_180474820((int)*(short *)(param_3 + 0x4948 + lVar33 * 4));
        local_210 = local_210 & 0xffffffffffffff00;
        local_218 = &local_168;
        local_220 = (float *)CONCAT44(local_220._4_4_,uVar8);
        local_228 = (float *)CONCAT44(local_228._4_4_,(int)*(short *)(param_3 + 0x4948 + lVar33 * 4)
                                     );
        cVar6 = FUN_180474b60(local_1a0,&DAT_18082ad78,&local_198,&local_170);
        if (fVar23 != 2.52234e-44) goto LAB_180476adb;
        pcVar10 = &DAT_1806bd334;
      }
      uVar8 = DAT_1808da478;
      auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 9.0 + fVar27)),1);
      auVar3 = vmaxss_avx(auVar38._0_16_,auVar3);
      local_1f8 = 0;
      local_208 = 0;
      local_210 = 0;
      local_218 = (float *)0x0;
      local_220 = (float *)pcVar10;
      local_228._0_4_ = (float)auVar37._0_4_;
      FUN_1804ea040(&local_158,DAT_180c62ca8,auVar3._0_8_,0x7f7fffff);
      local_160 = ((local_170 + local_198) - local_158) * fVar27;
      local_15c = fVar42 * DAT_180b0a41c + local_16c;
      local_218 = (float *)0x0;
      local_228 = (float *)CONCAT44(local_228._4_4_,uVar8);
      local_220 = (float *)pcVar10;
      FUN_180463450(local_1a0,DAT_180c62ca8,0x41100000,&local_160);
      plVar2 = local_1d8;
      if ((cVar6 != '\0') && (FUN_1804759c0(local_1d8,fVar23), fVar23 == 2.10195e-44)) {
        *(undefined4 *)((longlong)plVar2 + 0x7c) = 2;
        *(undefined4 *)(plVar2 + 0x1f) = 0;
      }
      iVar7 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar7 < 2) {
        FUN_1804c5a40("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar7 + -1;
      }
    }
    fVar23 = 0.0;
    lVar30 = lVar30 + 4;
  } while (lVar30 < 0xc);
  local_148 = 0;
  pfStack_140 = (float *)0x0;
  pfVar25 = pfStack_140;
  local_138 = (float *)0x0;
  pfStack_140 = (float *)0x0;
  pfVar13 = pfStack_140;
  pfStack_140 = pfVar25;
  while( true ) {
    pfVar25 = local_1e0;
    if (DAT_180b909b0 == 0) {
      iVar7 = 0x47;
    }
    else {
      iVar7 = (int)(*(longlong *)(DAT_180b909b0 + 0x30) - *(longlong *)(DAT_180b909b0 + 0x28) >> 4);
    }
    local_150 = fVar23;
    if (iVar7 <= (int)fVar23) break;
    uVar29 = (ulonglong)(int)fVar23;
    if (DAT_180b909b0 == 0) {
      ppuVar16 = &PTR_s_Glock_18_180797be0 + uVar29 * 2;
    }
    else {
      if ((ulonglong)
          (*(longlong *)(DAT_180b909b0 + 0x30) - *(longlong *)(DAT_180b909b0 + 0x28) >> 4) <= uVar29
         ) {
LAB_1804779ad:
                    /* WARNING: Subroutine does not return */
        FUN_18047c010();
      }
      ppuVar16 = (undefined **)(uVar29 * 0x10 + *(longlong *)(DAT_180b909b0 + 0x28));
    }
    if ((*(char *)(ppuVar16 + 1) == '\0') || ((byte)(*(char *)(ppuVar16 + 1) - 1U) < 3)) {
      if (DAT_180b909b0 == 0) {
        ppuVar16 = &PTR_s_Glock_18_180797be0 + uVar29 * 2;
      }
      else {
        if ((ulonglong)
            (*(longlong *)(DAT_180b909b0 + 0x30) - *(longlong *)(DAT_180b909b0 + 0x28) >> 4) <=
            uVar29) goto LAB_1804779ad;
        ppuVar16 = (undefined **)(*(longlong *)(DAT_180b909b0 + 0x28) + uVar29 * 0x10);
      }
      if ((*(byte *)((longlong)ppuVar16 + 9) & (*pfVar31 != 0.0) + 1U) == 0) goto LAB_180476db4;
      if (pfVar13 == local_138) {
        FUN_18026b910(&local_148,pfVar13,&local_150);
        pfVar13 = pfStack_140;
        goto LAB_180476db4;
      }
      *pfVar13 = fVar23;
      pfVar13 = pfStack_140 + 1;
      fVar23 = (float)((int)fVar23 + 1);
      pfStack_140 = pfVar13;
    }
    else {
LAB_180476db4:
      fVar23 = (float)((int)fVar23 + 1);
    }
  }
  iVar7 = ((int)((longlong)pfVar13 - local_148 >> 2) + 0xe) / 0xf;
  if (iVar7 < 2) {
    iVar7 = 1;
  }
  lVar30 = (longlong)(int)*pfVar31;
  iVar15 = *(int *)(&DAT_180c62d10 + lVar30 * 4);
  if (iVar15 < 0) {
    iVar15 = 0;
  }
  else if (iVar7 + -1 < iVar15) {
    iVar15 = iVar7 + -1;
  }
  *(int *)(&DAT_180c62d10 + lVar30 * 4) = iVar15;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 324.5 + fVar27)),1);
  local_180 = auVar3._0_4_ + *local_1e0;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 59.0 + fVar27)),1);
  local_17c = auVar3._0_4_ + local_1e0[1];
  local_228._0_4_ = 12.0;
  FUN_180463dc0(local_1a0,&local_180,DAT_180b0a438,&DAT_180829fa4);
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 337.5 + fVar27)),1);
  local_180 = auVar3._0_4_ + *pfVar25;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 55.0 + fVar27)),1);
  local_17c = auVar3._0_4_ + pfVar25[1];
  local_218 = (float *)0x0;
  local_220 = (float *)0x18082ad68;
  local_228._0_4_ = (float)DAT_180b0a458;
  FUN_180463450(local_1a0,DAT_180c62ca8,0x4159999a,&local_180);
  pcVar10 = local_f4 + 1;
  uVar29 = (longlong)pfStack_140 - local_148 >> 2;
  do {
    pcVar10 = pcVar10 + -1;
    uVar19 = uVar29 / 10;
    *pcVar10 = (char)uVar29 + (char)uVar19 * -10 + '0';
    uVar29 = uVar19;
  } while (uVar19 != 0);
  FUN_18015bdb0(local_1c0,pcVar10,local_f4 + 1);
  pauVar14 = (undefined1 (*) [16])FUN_18015b2a0(local_1c0," available",10);
  local_130 = *pauVar14;
  auStack_120 = pauVar14[1];
  (*pauVar14)[0] = 0;
  *(undefined8 *)pauVar14[1] = 0;
  *(undefined8 *)(pauVar14[1] + 8) = 0xf;
  auVar37 = ZEXT1664(auVar37._0_16_);
  auVar38 = ZEXT1664(auVar38._0_16_);
  FUN_18015c010(local_1c0);
  uVar9 = DAT_1808da474;
  puVar20 = local_130;
  if (0xf < (ulonglong)auStack_120._8_8_) {
    puVar20 = (undefined1 *)local_130._0_8_;
  }
  auVar40 = ZEXT464(0x41100000);
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 9.0 + fVar27)),1);
  auVar3 = vmaxss_avx(auVar38._0_16_,auVar3);
  local_1f8 = 0;
  local_208 = 0;
  local_210 = 0;
  local_218 = (float *)0x0;
  local_228._0_4_ = auVar37._0_4_;
  local_220 = (float *)puVar20;
  FUN_1804ea040(&local_180,DAT_180c62ca8,auVar3._0_8_);
  auVar3 = vroundss_avx(ZEXT816(0),
                        ZEXT416((uint)((624.5 - local_180 / DAT_180b0a41c) * DAT_180b0a41c + fVar27)
                               ),1);
  local_180 = auVar3._0_4_ + *pfVar25;
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 56.0 + fVar27)),1);
  local_17c = auVar3._0_4_ + pfVar25[1];
  local_218 = (float *)0x0;
  local_228 = (float *)CONCAT44(local_228._4_4_,uVar9);
  local_220 = (float *)puVar20;
  FUN_180463450(local_1a0,DAT_180c62ca8,auVar40._0_8_,&local_180);
  if (1 < iVar7) {
    plVar12 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
    plVar2 = plVar12 + 0x21;
    uVar17 = ~*(uint *)(plVar12[0x22] + -4 + (longlong)(int)*plVar2 * 4);
    pcVar10 = "##gun_pages";
    cVar6 = '#';
    uVar26 = uVar17;
    do {
      pcVar10 = pcVar10 + 1;
      if (((cVar6 == '#') && (*pcVar10 == '#')) && (pcVar10[1] == '#')) {
        pcVar10 = pcVar10 + 2;
        uVar26 = uVar17;
      }
      else {
        uVar26 = crc32(uVar26,cVar6);
      }
      cVar6 = *pcVar10;
    } while (cVar6 != '\0');
    uVar26 = ~uVar26;
    if (*(uint *)(*plVar12 + 0x1534) == uVar26) {
      FUN_1804cf810(uVar26,0xb,"##gun_pages");
    }
    iVar15 = *(int *)((longlong)plVar12 + 0x10c);
    if ((int)*plVar2 == iVar15) {
      iVar28 = (int)*plVar2 + 1;
      if (iVar15 == 0) {
        iVar15 = 8;
      }
      else {
        iVar15 = iVar15 / 2 + iVar15;
      }
      if (iVar28 < iVar15) {
        iVar28 = iVar15;
      }
      FUN_1804d14d0(plVar2,iVar28);
    }
    *(uint *)(plVar12[0x22] + (longlong)(int)*plVar2 * 4) = uVar26;
    *(int *)plVar2 = (int)*plVar2 + 1;
    fVar22 = 15.0;
    fVar39 = (float)iVar7 * 15.0;
    fVar41 = 471.5;
    fVar42 = 471.5 - (fVar39 + 46.0) * fVar27;
    auVar37 = ZEXT464((uint)fVar42);
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar42 + fVar27)),1);
    local_168 = auVar3._0_4_ + *pfVar25;
    fVar44 = 451.5;
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 451.5 + fVar27)),1);
    local_164 = auVar3._0_4_ + pfVar25[1];
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((471.5 - fVar42) + 471.5) * DAT_180b0a41c + fVar27)),1);
    local_180 = auVar3._0_4_ + *pfVar25;
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 471.5 + fVar27)),1);
    local_17c = auVar3._0_4_ + pfVar25[1];
    uVar26 = 0;
    local_220 = (float *)((ulonglong)local_220 & 0xffffffff00000000);
    local_228 = (float *)CONCAT44(local_228._4_4_,DAT_180b0a41c * local_1e4);
    FUN_1804df870(local_1a0,&local_168,&local_180,DAT_180b0a434);
    local_108 = pfVar25;
    plStack_100 = &local_1a0;
    local_228._0_1_ = 0 < *(int *)(&DAT_180c62d10 + lVar30 * 4);
    cVar6 = FUN_1804779c0(&local_108,"##previous_guns",auVar37._0_8_,0xffffffff);
    if (cVar6 != '\0') {
      *(int *)(&DAT_180c62d10 + lVar30 * 4) = *(int *)(&DAT_180c62d10 + lVar30 * 4) + -1;
    }
    fVar42 = auVar37._0_4_ + 23.0;
    local_228 = (float *)CONCAT71(local_228._1_7_,*(int *)(&DAT_180c62d10 + lVar30 * 4) + 1 < iVar7)
    ;
    cVar6 = FUN_1804779c0(&local_108,"##next_guns",fVar42 + fVar39,1);
    pfVar25 = local_1e0;
    if (cVar6 != '\0') {
      *(int *)(&DAT_180c62d10 + lVar30 * 4) = *(int *)(&DAT_180c62d10 + lVar30 * 4) + 1;
    }
    fVar39 = 461.5;
    fVar23 = 7.5;
    auVar38 = ZEXT464(0x40900000);
    auVar37 = ZEXT464(0x3fcccccd);
    do {
      fVar36 = (float)(int)uVar26 * fVar22 + fVar42;
      lVar21 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
      uVar9 = FUN_1804c2670(lVar21,uVar26);
      piVar24 = (int *)(lVar21 + 0x108);
      iVar15 = *(int *)(lVar21 + 0x10c);
      if (*piVar24 == iVar15) {
        iVar28 = *piVar24 + 1;
        if (iVar15 == 0) {
          iVar15 = 8;
        }
        else {
          iVar15 = iVar15 / 2 + iVar15;
        }
        if (iVar28 < iVar15) {
          iVar28 = iVar15;
        }
        FUN_1804d14d0(piVar24,iVar28);
      }
      *(undefined4 *)(*(longlong *)(lVar21 + 0x110) + (longlong)*piVar24 * 4) = uVar9;
      *piVar24 = *piVar24 + 1;
      auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar36 + fVar22) * DAT_180b0a41c + fVar27)),1
                           );
      local_160 = auVar3._0_4_ + *pfVar25;
      auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar41 + fVar27)),1);
      local_15c = auVar3._0_4_ + pfVar25[1];
      auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar36 * DAT_180b0a41c + fVar27)),1);
      local_158 = auVar3._0_4_ + *pfVar25;
      auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar44 + fVar27)),1);
      local_154 = auVar3._0_4_ + pfVar25[1];
      plVar2 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
      uVar18 = ~*(uint *)(plVar2[0x22] + -4 + (longlong)(int)plVar2[0x21] * 4);
      pcVar10 = "#page";
      cVar6 = '#';
      uVar17 = uVar18;
      do {
        if (((cVar6 == '#') && (*pcVar10 == '#')) && (pcVar10[1] == '#')) {
          pcVar10 = pcVar10 + 2;
          uVar17 = uVar18;
        }
        else {
          uVar17 = crc32(uVar17,cVar6);
        }
        cVar6 = *pcVar10;
        pcVar10 = pcVar10 + 1;
      } while (cVar6 != '\0');
      uVar17 = ~uVar17;
      if (*(uint *)(*plVar2 + 0x1534) == uVar17) {
        FUN_1804cf810(uVar17,0xb,&DAT_1807c6fe0);
      }
      local_228 = (float *)CONCAT71(local_228._1_7_,1);
      puVar11 = (undefined2 *)FUN_1804aad60(&local_1e8,uVar17,&local_158,&local_160);
      uVar1 = *puVar11;
      if (*(char *)(puVar11 + 1) != '\0') {
        *(uint *)(&DAT_180c62d10 + lVar30 * 4) = uVar26;
      }
      if ((char)uVar1 != '\0') {
        FUN_1804c7660("Page %d of %d",uVar26 + 1,iVar7);
      }
      iVar15 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
      if (iVar15 < 2) {
        FUN_1804c5a40("Calling PopID() too many times!");
      }
      else {
        *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar15 + -1;
      }
      auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar39 + fVar27)),1);
      local_190[1] = auVar3._0_4_ + pfVar25[1];
      auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar36 + fVar23) * DAT_180b0a41c + fVar27)),1
                           );
      local_190[0] = auVar3._0_4_ + *pfVar25;
      auVar3 = vpcmpeqd_avx(ZEXT416(uVar26),ZEXT416(*(uint *)(&DAT_180c62d10 + lVar30 * 4)));
      auVar3 = vblendvps_avx(auVar37._0_16_,auVar38._0_16_,auVar3);
      fVar36 = auVar3._0_4_ * DAT_180b0a41c;
      fVar34 = DAT_180b0a41c * auVar37._0_4_;
      if ((uVar26 == *(uint *)(&DAT_180c62d10 + lVar30 * 4)) ||
         (uVar9 = DAT_1808da474, (char)uVar1 != '\0')) {
        uVar9 = DAT_180b0a458;
      }
      local_198 = local_190[0] + fVar36;
      fStack_194 = local_190[1] + fVar34;
      local_190[0] = local_190[0] - fVar36;
      local_190[1] = local_190[1] - fVar34;
      local_220 = (float *)((ulonglong)local_220 & 0xffffffff00000000);
      local_228 = (float *)CONCAT44(local_228._4_4_,fVar34);
      FUN_1804df870(local_1a0,local_190,&local_198,uVar9);
      pfVar31 = local_1c8;
      uVar26 = uVar26 + 1;
    } while ((int)uVar26 < iVar7);
    iVar7 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar7 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar7 + -1;
    }
    auVar40 = ZEXT464(0x41100000);
    pfVar25 = local_1e0;
  }
  local_170 = (float)(*(int *)(&DAT_180c62d10 + lVar30 * 4) * 0xf);
  iVar7 = 0;
  lVar30 = (longlong)(int)local_170 << 2;
  fVar39 = 74.2;
  fVar42 = 72.9;
  fVar22 = 96.3;
  fVar41 = 66.5;
  while ((int)local_170 + iVar7 < (int)((longlong)pfStack_140 - local_148 >> 2)) {
    iVar15 = *(int *)(local_148 + lVar30);
    uVar29 = (ulonglong)iVar15;
    uVar9 = FUN_180474390(*local_1c8,iVar15);
    fVar44 = (float)(iVar7 / 3) * fVar39 + fVar42;
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(*(float *)(&DAT_18077f758 + (longlong)(iVar7 % 3) * 4) *
                                         DAT_180b0a41c + fVar27)),1);
    local_150 = auVar3._0_4_ + *pfVar25;
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar44 * DAT_180b0a41c + fVar27)),1);
    local_14c = auVar3._0_4_ + pfVar25[1];
    auVar3 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((*(float *)(&DAT_18077f758 + (longlong)(iVar7 % 3) * 4) +
                                         fVar22) * DAT_180b0a41c + fVar27)),1);
    local_158 = auVar3._0_4_ + *pfVar25;
    auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar44 + fVar41) * DAT_180b0a41c + fVar27)),1);
    local_154 = auVar3._0_4_ + pfVar25[1];
    lVar21 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    local_178[0] = (float)FUN_1804c2670(lVar21,iVar15);
    piVar24 = (int *)(lVar21 + 0x108);
    iVar15 = *(int *)(lVar21 + 0x10c);
    if (*piVar24 == iVar15) {
      iVar28 = *piVar24 + 1;
      if (iVar15 == 0) {
        iVar15 = 8;
      }
      else {
        iVar15 = iVar15 / 2 + iVar15;
      }
      if (iVar28 < iVar15) {
        iVar28 = iVar15;
      }
      FUN_1804d14d0(piVar24,iVar28);
    }
    *(float *)(*(longlong *)(lVar21 + 0x110) + (longlong)*piVar24 * 4) = local_178[0];
    *piVar24 = *piVar24 + 1;
    local_160 = DAT_180b0a41c * local_1e4;
    local_15c = DAT_180b0a41c * auVar40._0_4_;
    iVar15 = (int)(short)((uint)uVar9 >> 0x10);
    uVar8 = FUN_180474820(iVar15);
    local_210 = local_210 & 0xffffffffffffff00;
    local_218 = &local_160;
    local_220 = (float *)CONCAT44(local_220._4_4_,uVar8);
    local_228 = (float *)CONCAT44(local_228._4_4_,iVar15);
    cVar6 = FUN_180474b60(local_1a0,&DAT_180829a78,&local_150,&local_158);
    pfVar31 = local_1c8;
    if (cVar6 != '\0') {
      if (DAT_180b909b0 == 0) {
        ppuVar16 = &PTR_s_Glock_18_180797be0 + uVar29 * 2;
      }
      else {
        if ((ulonglong)
            (*(longlong *)(DAT_180b909b0 + 0x30) - *(longlong *)(DAT_180b909b0 + 0x28) >> 4) <=
            uVar29) {
                    /* WARNING: Subroutine does not return */
          FUN_18047c010();
        }
        ppuVar16 = (undefined **)(uVar29 * 0x10 + *(longlong *)(DAT_180b909b0 + 0x28));
      }
      if (*(char *)(ppuVar16 + 1) == '\0') {
        lVar21 = 0;
      }
      else {
        lVar21 = 5;
        if (*(char *)(ppuVar16 + 1) == '\x02') {
          lVar21 = 10;
        }
      }
      *(undefined4 *)((longlong)local_1c8 + ((longlong)(int)*local_1c8 * 0x15 + lVar21) * 4 + 6) =
           uVar9;
      FUN_1804759c0(local_1d8);
    }
    iVar15 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar15 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar15 + -1;
    }
    iVar7 = iVar7 + 1;
    lVar30 = lVar30 + 4;
    if (0xe < iVar7) break;
    pfVar25 = local_1e0;
  }
  lVar30 = DAT_180bb8ae8;
  if ((char)local_1d0 == '\0') {
    iVar7 = *(int *)(DAT_180bb8ae8 + 0x1fd8);
    if (iVar7 < 2) {
      FUN_1804c5a40("Calling PopItemFlag() too many times!");
    }
    else {
      *(int *)(DAT_180bb8ae8 + 0x1fd8) = iVar7 + -1;
      *(undefined4 *)(lVar30 + 0x1e80) =
           *(undefined4 *)(*(longlong *)(lVar30 + 0x1fe0) + -8 + (longlong)iVar7 * 4);
    }
  }
  if (-1 < (int)local_1d8[9]) {
    FUN_180477c50(local_1d8,local_1e0,pfVar31);
  }
  FUN_18015c010(local_130);
  FUN_180159650(&local_148);
}



