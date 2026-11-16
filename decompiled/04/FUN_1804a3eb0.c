// FUN_1804a3eb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804a3eb0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804a3eb0(uint param_1,float *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  bool bVar9;
  char cVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int iVar16;
  int *piVar17;
  undefined8 *puVar18;
  ushort *puVar19;
  float *pfVar20;
  undefined3 *puVar21;
  undefined2 *puVar22;
  longlong lVar23;
  longlong lVar24;
  char *pcVar25;
  int iVar26;
  ulonglong uVar27;
  float fVar28;
  char cVar29;
  uint uVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  uint uVar34;
  float fVar35;
  int iVar36;
  uint *puVar37;
  ulonglong uVar38;
  longlong lVar39;
  longlong *plVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  undefined4 uVar45;
  undefined1 auVar46 [16];
  undefined1 extraout_var [56];
  float fVar47;
  float fVar48;
  float fVar49;
  undefined1 auVar50 [64];
  undefined1 auVar51 [64];
  undefined1 auVar52 [64];
  undefined1 auVar53 [64];
  undefined1 auVar54 [64];
  undefined1 auVar55 [64];
  undefined8 uVar56;
  undefined1 auVar57 [64];
  undefined1 auStack_298 [32];
  float **local_278;
  undefined8 local_270;
  char *local_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_248;
  char local_238;
  char local_237;
  float local_234;
  float local_230;
  float local_22c;
  undefined4 local_228 [2];
  undefined8 local_220;
  float local_218;
  float local_214;
  float local_210;
  undefined4 local_20c;
  float *local_208;
  undefined8 local_200;
  undefined8 *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  int *local_1e0;
  undefined8 local_1d8;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float fStack_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  undefined4 local_1a8;
  undefined8 local_1a0;
  uint local_198 [2];
  undefined8 local_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 local_170 [8];
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  float local_158 [2];
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 local_130 [16];
  undefined8 local_120;
  int local_118 [4];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  float *local_f0;
  ulonglong local_e8;
  
  lVar23 = DAT_180bb8ae8;
  local_e8 = DAT_1808d5f00 ^ (ulonglong)auStack_298;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  lVar39 = *(longlong *)(lVar23 + 0x14d0);
  lVar4 = *(longlong *)(lVar39 + 0x2c8);
  local_1e0 = *(int **)(lVar39 + 0x1c0);
  local_178 = DAT_180c62ca8;
  if ((*(longlong *)(lVar39 + 0x1c8) != 0) ||
     (pfVar20 = (float *)(lVar39 + 0x280), *(longlong *)(lVar23 + 0x2338) != 0)) {
    pfVar20 = (float *)(lVar39 + 0x250);
  }
  fVar44 = *pfVar20 - *(float *)(lVar39 + 0x118);
  local_158[0] = *(float *)(lVar23 + 0x40);
  local_238 = '\0';
  plVar40 = param_3 + 1;
  if (*plVar40 == 0) {
    uVar34 = 1;
  }
  else {
    uVar34 = (param_3[2] != 0) + 2;
  }
  local_1a8 = local_1a8 & 0xff000000;
  uVar27 = (((ulonglong)param_1 ^ 0x8afe0d91c5857993) >> 0x1e ^
           (ulonglong)param_1 ^ 0x8afe0d91c5857993) * -0x40a7b892e31b1a47;
  uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
  uVar27 = uVar27 >> 0x1f ^ uVar27;
  local_210 = fVar44;
  local_200 = param_2;
  local_1f8 = param_3;
  local_198[0] = param_1;
  piVar17 = (int *)FUN_1804b14f0(local_1e0,(uint)(uVar27 >> 0x20) ^ (uint)uVar27,0);
  if (*(char *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xd3) == '\0') {
    local_234 = (float)*piVar17;
    if ((((int)local_234 < 0) || ((int)uVar34 <= (int)local_234)) ||
       (*(char *)((longlong)local_198 + (longlong)(int)local_234 + -0x10) != '\0'))
    goto LAB_1804a406b;
  }
  else {
LAB_1804a406b:
    *piVar17 = 0;
    local_234 = 0.0;
  }
  fVar41 = local_234;
  local_118[0] = (int)local_234;
  *(undefined1 *)((longlong)local_198 + (longlong)(int)local_234 + -0x10) = 1;
  if (uVar34 < 2) {
    local_118[1] = 1;
    local_118[2] = 2;
  }
  else {
    uVar27 = (((ulonglong)local_198[0] ^ 0x2935874b44cff5a8) >> 0x1e ^
             (ulonglong)local_198[0] ^ 0x2935874b44cff5a8) * -0x40a7b892e31b1a47;
    uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
    uVar27 = uVar27 >> 0x1f ^ uVar27;
    piVar17 = (int *)FUN_1804b14f0(local_1e0,(uint)(uVar27 >> 0x20) ^ (uint)uVar27,1);
    if (*(char *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xd3) == '\0') {
      local_118[1] = *piVar17;
      if (((local_118[1] < 0) || ((int)uVar34 <= local_118[1])) ||
         (*(char *)((longlong)local_198 + (longlong)local_118[1] + -0x10) != '\0'))
      goto LAB_1804a4130;
    }
    else {
LAB_1804a4130:
      *piVar17 = 0;
      local_118[1] = 0;
      if ((char)local_1a8 != '\0') {
        iVar12 = 1;
        do {
          local_118[1] = iVar12;
          iVar12 = local_118[1] + 1;
        } while (*(char *)((longlong)local_198 + (longlong)local_118[1] + -0x10) != '\0');
        *piVar17 = local_118[1];
      }
    }
    *(undefined1 *)((longlong)local_198 + (longlong)local_118[1] + -0x10) = 1;
    if (uVar34 < 3) {
      local_118[2] = 2;
    }
    else {
      uVar27 = (((ulonglong)local_198[0] ^ 0xc76d0104c41a71bd) >> 0x1e ^
               (ulonglong)local_198[0] ^ 0xc76d0104c41a71bd) * -0x40a7b892e31b1a47;
      uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
      uVar27 = uVar27 >> 0x1f ^ uVar27;
      piVar17 = (int *)FUN_1804b14f0(local_1e0,(uint)(uVar27 >> 0x20) ^ (uint)uVar27,2);
      if (*(char *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xd3) == '\0') {
        local_118[2] = *piVar17;
        if (((-1 < local_118[2]) && (local_118[2] < (int)uVar34)) &&
           (*(char *)((longlong)local_198 + (longlong)local_118[2] + -0x10) == '\0'))
        goto LAB_1804a423a;
      }
      *piVar17 = 0;
      local_118[2] = 0;
      if ((char)local_1a8 != '\0') {
        iVar12 = 1;
        do {
          local_118[2] = iVar12;
          iVar12 = local_118[2] + 1;
        } while (*(char *)((longlong)local_198 + (longlong)local_118[2] + -0x10) != '\0');
        *piVar17 = local_118[2];
      }
    }
  }
LAB_1804a423a:
  uVar27 = (((ulonglong)local_198[0] ^ 0x65a47abe4364edd2) >> 0x1e ^
           (ulonglong)local_198[0] ^ 0x65a47abe4364edd2) * -0x40a7b892e31b1a47;
  uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
  uVar27 = uVar27 >> 0x1f ^ uVar27;
  local_1a0 = (int *)FUN_1804b14f0(local_1e0,(uint)(uVar27 >> 0x20) ^ (uint)uVar27,1);
  if (fVar41 != 0.0) {
    if (fVar41 != 1.4013e-45) {
      plVar40 = param_3 + 2;
    }
    param_2 = (float *)*plVar40;
  }
  uVar27 = (((ulonglong)local_198[0] ^ 0x4e8f1a1ec6f08169) >> 0x1e ^
           (ulonglong)local_198[0] ^ 0x4e8f1a1ec6f08169) * -0x40a7b892e31b1a47;
  uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
  uVar27 = uVar27 >> 0x1f ^ uVar27;
  auVar55 = ZEXT464(0x3f800000);
  local_1d8 = param_2;
  local_208 = (float *)FUN_1804b15a0(local_1e0,(uint)(uVar27 >> 0x20) ^ (uint)uVar27,auVar55._0_8_);
  fVar49 = 6.0;
  auVar46 = vminss_avx(auVar55._0_16_,ZEXT416((uint)(local_158[0] * 6.0 + *local_208)));
  *local_208 = auVar46._0_4_;
  fVar28 = auVar55._0_4_ - auVar46._0_4_;
  fVar35 = auVar55._0_4_ - fVar28 * fVar28;
  lVar39 = 0x180000000;
  fVar28 = 0.5;
  auVar52 = ZEXT864(0);
  if (uVar34 < 2) {
    fVar41 = 7.0;
  }
  else {
    fVar44 = *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x118);
    fVar43 = *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x11c);
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 16.0 + 0.5)),1);
    auVar50 = ZEXT1664(auVar46);
    local_1f0 = (int *)CONCAT44(auVar46._0_4_,local_210);
    local_230 = fVar35;
    FUN_1804c6420(&local_1f0,0xbf800000);
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 9.3 + fVar28)),1);
    auVar54 = ZEXT1664(auVar46);
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar49 + fVar28)),1);
    auVar53 = ZEXT1664(auVar46);
    if (fVar41 == 0.0) {
      local_270 = "Primary";
      if ((float *)*param_3 != (float *)0x0) {
        local_270 = (char *)*param_3;
      }
    }
    else {
      local_270 = (char *)*(float **)(lVar39 + 0x8595f8 + (longlong)(int)fVar41 * 8);
    }
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.2 + fVar28)),1);
    auVar46 = vmaxss_avx(auVar55._0_16_,auVar46);
    local_248 = 0;
    local_258 = 0;
    local_260 = 0;
    local_268 = (char *)0x0;
    local_180 = (float *)local_270;
    local_278._0_4_ = (float)auVar52._0_4_;
    FUN_1804ea040(&local_190,local_178,auVar46._0_8_,0x7f7fffff);
    uVar27 = (((ulonglong)local_198[0] ^ 0xecc693d8463afd7e) >> 0x1e ^
             (ulonglong)local_198[0] ^ 0xecc693d8463afd7e) * -0x40a7b892e31b1a47;
    uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
    uVar27 = uVar27 >> 0x1f ^ uVar27;
    auVar46 = vroundss_avx(ZEXT816(0),
                           ZEXT416((uint)(DAT_180b0a41c * 4.5 * 2.5 + auVar54._0_4_ +
                                          DAT_180b0a41c * 4.5 + (float)local_190 + fVar28)),1);
    fVar41 = (float)FUN_1804aaa10((uint)(uVar27 >> 0x20) ^ (uint)uVar27,auVar46._0_8_);
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar41 + fVar28)),1);
    auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 10.0 + fVar28)),1);
    auVar6 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((local_210 -
                                         (auVar6._0_4_ + (float)(int)(uVar34 - 1) * auVar54._0_4_ +
                                          (float)(int)(uVar34 - 2) * auVar53._0_4_ + auVar46._0_4_))
                                         * fVar28 + fVar44 + fVar28)),1);
    local_168 = auVar6._0_4_;
    local_160 = local_168 + auVar46._0_4_;
    local_15c = fVar43 + auVar50._0_4_;
    fVar44 = auVar50._0_4_ * fVar28 + fVar43;
    local_220 = CONCAT44(local_220._4_4_,fVar44);
    local_270 = (char *)((ulonglong)local_270 & 0xffffffff00000000);
    local_278 = (float **)CONCAT44(local_278._4_4_,DAT_180b0a41c * 4.5);
    local_164 = fVar43;
    FUN_1804df870(lVar4,&local_168,&local_160,DAT_180b0a408);
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar44 - auVar54._0_4_ * fVar28) + fVar28)),1)
    ;
    auVar50 = ZEXT1664(auVar46);
    auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 4.5 + fVar28)),1);
    fVar44 = auVar6._0_4_ + local_168;
    local_22c = auVar54._0_4_ + auVar53._0_4_;
    auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 10.0 + fVar28)),1);
    fVar41 = auVar6._0_4_ + local_160 + (float)(*local_1a0 + -1) * local_22c;
    local_1f0 = (int *)CONCAT44(auVar46._0_4_,(fVar44 - fVar41) * fVar35 + fVar41);
    FUN_1804a3210(lVar4,&local_1f0,auVar54._0_8_,param_2);
    auVar46 = *(undefined1 (*) [16])(lVar4 + 0x60);
    auVar6 = vcmpss_avx(ZEXT416((uint)local_168),auVar46,1);
    auVar6 = vblendvps_avx(ZEXT416((uint)local_168),auVar46,auVar6);
    auVar7 = vshufps_avx(auVar46,auVar46,0x55);
    auVar5 = vcmpss_avx(ZEXT416((uint)local_164),auVar7,1);
    auVar5 = vblendvps_avx(ZEXT416((uint)local_164),auVar7,auVar5);
    local_190 = (int *)CONCAT44(auVar5._0_4_,auVar6._0_4_);
    auVar8 = vshufps_avx(auVar46,auVar46,0xaa);
    auVar7 = vcmpss_avx(auVar8,ZEXT416((uint)local_160),1);
    auVar7 = vblendvps_avx(ZEXT416((uint)local_160),auVar8,auVar7);
    auVar8 = vshufps_avx(auVar46,auVar46,0xff);
    auVar46 = vcmpss_avx(auVar8,ZEXT416((uint)local_15c),1);
    auVar46 = vblendvps_avx(ZEXT416((uint)local_15c),auVar8,auVar46);
    auVar6 = vmaxss_avx(auVar6,auVar7);
    uStack_188 = auVar6._0_4_;
    auVar46 = vmaxss_avx(auVar5,auVar46);
    uStack_184 = auVar46._0_4_;
    piVar17 = (int *)(lVar4 + 0xa0);
    iVar12 = *(int *)(lVar4 + 0xa4);
    if (*piVar17 == iVar12) {
      iVar26 = *piVar17 + 1;
      if (iVar12 == 0) {
        iVar12 = 8;
      }
      else {
        iVar12 = iVar12 / 2 + iVar12;
      }
      if (iVar26 < iVar12) {
        iVar26 = iVar12;
      }
      FUN_1804aec70(piVar17,iVar26);
    }
    puVar18 = (undefined8 *)(*(longlong *)(lVar4 + 0xa8) + (longlong)*piVar17 * 0x10);
    *puVar18 = local_190;
    puVar18[1] = CONCAT44(uStack_184,uStack_188);
    *piVar17 = *piVar17 + 1;
    *(int **)(lVar4 + 0x60) = local_190;
    *(ulonglong *)(lVar4 + 0x68) = CONCAT44(uStack_184,uStack_188);
    FUN_1804d9200(lVar4);
    fVar41 = ((float)(DAT_1808da478 >> 0x18) / 255.0) * fVar35;
    if (auVar52._0_4_ <= fVar41) {
      auVar46 = vminss_avx(auVar55._0_16_,ZEXT416((uint)fVar41));
      fVar41 = auVar46._0_4_;
    }
    else {
      fVar41 = 0.0;
    }
    fVar41 = fVar41 * 255.0 + fVar28;
    uVar13 = DAT_1808da478 & 0xffffff;
    fVar43 = fVar49 * DAT_180b0a41c;
    fVar42 = (float)FUN_180463350(local_178,0x41533333);
    auVar46 = vroundss_avx(ZEXT816(0),
                           ZEXT416((uint)(DAT_180b0a41c * 4.5 + DAT_180b0a41c * 4.5 + local_168 +
                                          auVar54._0_4_ + fVar28)),1);
    local_1f0 = (int *)CONCAT44(((float)local_220 - fVar42 * fVar28) +
                                (auVar55._0_4_ - fVar35) * fVar43,auVar46._0_4_);
    local_268 = (char *)0x0;
    local_270 = (char *)local_180;
    local_278 = (float **)CONCAT44(local_278._4_4_,(int)(longlong)fVar41 << 0x18 | uVar13);
    FUN_180463450(lVar4,local_178,0x41533333,&local_1f0);
    iVar12 = *piVar17;
    iVar26 = iVar12 + -1;
    *piVar17 = iVar26;
    if (iVar26 == 0) {
      puVar18 = (undefined8 *)(*(longlong *)(lVar4 + 0x38) + 0x3c);
    }
    else {
      puVar18 = (undefined8 *)((longlong)(iVar12 + -2) * 0x10 + *(longlong *)(lVar4 + 0xa8));
    }
    uVar56 = puVar18[1];
    *(undefined8 *)(lVar4 + 0x60) = *puVar18;
    *(undefined8 *)(lVar4 + 0x68) = uVar56;
    FUN_1804d9200(lVar4);
    iVar12 = 0;
    local_190 = (int *)(ulonglong)uVar34;
    if (1 < local_190) {
      lVar39 = 1;
      fVar41 = auVar50._0_4_ + auVar54._0_4_;
      uVar34 = 0x119;
      do {
        fVar43 = DAT_180b0a41c * 3.0;
        auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 10.0 + fVar28)),1);
        fVar49 = auVar46._0_4_ + local_160 + (float)(int)(uVar34 - 0x119) * local_22c;
        local_1f0 = (int *)CONCAT44(fVar41 + fVar43,fVar49 + auVar54._0_4_ + fVar43);
        local_180 = (float *)CONCAT44(auVar50._0_4_ - fVar43,fVar49 - fVar43);
        uVar27 = (ulonglong)uVar34 * -0x61c8864680b583eb ^ (ulonglong)local_198[0];
        uVar27 = (uVar27 >> 0x1e ^ uVar27) * -0x40a7b892e31b1a47;
        uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
        uVar27 = uVar27 >> 0x1f ^ uVar27;
        local_278 = (float **)CONCAT71(local_278._1_7_,1);
        puVar19 = (ushort *)
                  FUN_1804aad60(&local_1a8,(uint)(uVar27 >> 0x20) ^ (uint)uVar27,&local_180,
                                &local_1f0);
        local_237 = (char)puVar19[1];
        uVar27 = (ulonglong)(uVar34 + 5) * -0x61c8864680b583eb ^ (ulonglong)local_198[0];
        uVar27 = (uVar27 >> 0x1e ^ uVar27) * -0x40a7b892e31b1a47;
        uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
        uVar27 = uVar27 >> 0x1f ^ uVar27;
        auVar46 = vpcmpeqd_avx(ZEXT416(*puVar19 & 0xff),SUB6416(ZEXT464(0),0));
        auVar46 = vblendvps_avx(auVar55._0_16_,auVar52._0_16_,auVar46);
        fVar43 = (float)FUN_1804aaa10((uint)(uVar27 >> 0x20) ^ (uint)uVar27,auVar46._0_8_,0x41900000
                                     );
        if (uVar34 - 0x118 == *local_1a0) {
          fVar49 = (fVar49 - fVar44) * fVar35 + fVar44;
        }
        fVar42 = fVar43 * DAT_180b0a41c;
        if (local_118[lVar39] == 0) {
          pfVar20 = local_200;
        }
        else {
          puVar18 = param_3 + 1;
          if (local_118[lVar39] != 1) {
            puVar18 = param_3 + 2;
          }
          pfVar20 = (float *)*puVar18;
        }
        local_218 = fVar49 - fVar42;
        local_214 = auVar50._0_4_ - fVar42;
        FUN_1804a3210(lVar4,&local_218,fVar42 + fVar42 + auVar54._0_4_,pfVar20);
        fVar42 = auVar52._0_4_;
        if (fVar42 < fVar43) {
          auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
          auVar46 = vmaxss_avx(auVar55._0_16_,auVar46);
          if (fVar42 <= fVar43 * 0.43137255) {
            auVar6 = vminss_avx(auVar55._0_16_,ZEXT416((uint)(fVar43 * 0.43137255)));
            fVar42 = auVar6._0_4_;
          }
          fVar35 = DAT_180b0a41c * 2.5;
          local_1d0 = fVar49 + auVar54._0_4_ + fVar35;
          local_1cc = fVar41 + fVar35;
          local_1e8 = CONCAT44(auVar50._0_4_ - fVar35,fVar49 - fVar35);
          local_270 = (char *)CONCAT44(local_270._4_4_,auVar46._0_4_);
          local_278 = (float **)CONCAT44(local_278._4_4_,DAT_180b0a41c * 3.5);
          FUN_180463090(lVar4,&local_1e8,&local_1d0,
                        (int)(longlong)(fVar42 * 255.0 + fVar28) << 0x18 | 0xffffff);
          fVar35 = local_230;
        }
        fVar43 = local_234;
        if (local_237 != '\0') {
          iVar12 = uVar34 - 0x118;
        }
        uVar34 = uVar34 + 1;
        lVar39 = lVar39 + 1;
      } while (lVar39 < (longlong)local_190);
      fVar49 = 6.0;
      param_2 = local_1d8;
      if (iVar12 != 0) {
        iVar26 = local_118[iVar12];
        local_118[iVar12] = (int)local_234;
        uVar27 = (((ulonglong)local_198[0] ^ 0x8afe0d91c5857993) >> 0x1e ^
                 (ulonglong)local_198[0] ^ 0x8afe0d91c5857993) * -0x40a7b892e31b1a47;
        uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
        uVar27 = uVar27 >> 0x1f ^ uVar27;
        local_118[0] = iVar26;
        FUN_1804b1650(local_1e0,(uint)(uVar27 >> 0x20) ^ (uint)uVar27,iVar26);
        uVar27 = (ulonglong)(iVar12 + 0x107) * -0x61c8864680b583eb ^ (ulonglong)local_198[0];
        uVar27 = (uVar27 >> 0x1e ^ uVar27) * -0x40a7b892e31b1a47;
        uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
        uVar27 = uVar27 >> 0x1f ^ uVar27;
        FUN_1804b1650(local_1e0,(uint)(uVar27 >> 0x20) ^ (uint)uVar27,fVar43);
        *local_1a0 = iVar12;
        *local_208 = 0.0;
        if (iVar26 == 0) {
          param_2 = local_200;
        }
        else {
          puVar18 = param_3 + 1;
          if (iVar26 != 1) {
            puVar18 = param_3 + 2;
          }
          param_2 = (float *)*puVar18;
        }
      }
    }
    fVar41 = *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x118);
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 5.5 + fVar28)),1);
    local_1f0 = (int *)CONCAT44(auVar46._0_4_ + auVar46._0_4_,local_210);
    FUN_1804c6420(&local_1f0,0xbf800000);
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
    auVar46 = vmaxss_avx(auVar55._0_16_,auVar46);
    auVar50 = ZEXT464(0x40e00000);
    local_278 = (float **)CONCAT44(local_278._4_4_,DAT_180b0a420);
    fVar44 = local_210;
    FUN_180463160(lVar4,(fVar41 - DAT_180b0a41c * 7.0) + auVar46._0_4_,
                  (fVar41 + local_210 + DAT_180b0a41c * 7.0) - auVar46._0_4_);
    fVar41 = auVar50._0_4_;
  }
  auVar50 = ZEXT464(0xbf800000);
  fVar35 = *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x118);
  auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 170.0 + fVar28)),1);
  local_234 = auVar46._0_4_;
  auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 7.3 + fVar28)),1);
  auVar53 = ZEXT1664(auVar46);
  auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar41 + fVar28)),1);
  auVar57 = ZEXT1664(auVar6);
  local_230 = auVar6._0_4_;
  auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * fVar49 + fVar28)),1);
  auVar54 = ZEXT1664(auVar6);
  if (*(char *)(param_3 + 3) == '\0') {
    fVar41 = auVar52._0_4_;
  }
  else {
    fVar41 = auVar6._0_4_ + auVar46._0_4_;
  }
  local_1f0 = (int *)CONCAT44(auVar46._0_4_ + local_234 + local_230 + fVar41,fVar44);
  local_220._0_4_ = *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x11c);
  FUN_1804c6420(&local_1f0,auVar50._0_8_);
  fVar44 = param_2[2];
  fVar43 = param_2[1];
  fVar41 = *param_2;
  auVar51 = ZEXT464((uint)fVar41);
  fVar47 = auVar52._0_4_;
  fVar42 = fVar44;
  if (fVar43 < fVar44) {
    fVar47 = auVar50._0_4_;
    fVar42 = fVar43;
    fVar43 = fVar44;
  }
  auVar46 = ZEXT416((uint)fVar43);
  if (fVar41 < fVar43) {
    auVar46 = ZEXT416((uint)fVar41);
    auVar51 = ZEXT1664(ZEXT416((uint)fVar43));
    fVar47 = -0.33333334 - fVar47;
  }
  auVar6 = vminss_avx(auVar46,ZEXT416((uint)fVar42));
  fVar44 = auVar51._0_4_ - auVar6._0_4_;
  fVar41 = ABS((auVar46._0_4_ - fVar42) / (fVar44 * fVar49 + 1e-20) + fVar47);
  local_208 = (float *)CONCAT44(local_208._4_4_,fVar44 / (auVar51._0_4_ + 1e-20));
  uVar27 = (((ulonglong)local_198[0] ^ 0x9b5718eb7230f068) >> 0x1e ^
           (ulonglong)local_198[0] ^ 0x9b5718eb7230f068) * -0x40a7b892e31b1a47;
  uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
  uVar27 = uVar27 >> 0x1f ^ uVar27;
  pfVar20 = (float *)FUN_1804b15a0(local_1e0,(uint)(uVar27 >> 0x20) ^ (uint)uVar27,fVar41);
  if ((auVar52._0_4_ < local_208._0_4_) && (auVar52._0_4_ < auVar51._0_4_)) {
    *pfVar20 = fVar41;
  }
  local_22c = DAT_180b0a41c * 5.0;
  fStack_1c4 = (float)local_220;
  fVar44 = fVar35 + local_210;
  local_1d8 = (float *)CONCAT44(local_1d8._4_4_,fVar44);
  local_1bc = (float)local_220 + local_234;
  uVar27 = (((ulonglong)local_198[0] ^ 0x398e92a4f17b6c7d) >> 0x1e ^
           (ulonglong)local_198[0] ^ 0x398e92a4f17b6c7d) * -0x40a7b892e31b1a47;
  uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
  uVar27 = uVar27 >> 0x1f ^ uVar27;
  local_278._0_1_ = 1;
  local_1c8 = fVar35;
  local_1c0 = fVar44;
  local_200._0_4_ = *pfVar20;
  puVar21 = (undefined3 *)
            FUN_1804aad60(&local_20c,(uint)(uVar27 >> 0x20) ^ (uint)uVar27,&local_1c8,&local_1c0);
  local_1a8._1_1_ = (char)((uint3)*puVar21 >> 8);
  cVar11 = local_1a8._1_1_;
  if (local_1a8._1_1_ != '\0') {
    fVar42 = (*(float *)(DAT_180bb8ae8 + 0x110) - local_1c8) / (local_1c0 - local_1c8);
    fVar43 = auVar52._0_4_;
    fVar41 = fVar43;
    if (fVar43 <= fVar42) {
      auVar46 = vminss_avx(auVar55._0_16_,ZEXT416((uint)fVar42));
      fVar41 = auVar46._0_4_;
    }
    local_208 = (float *)CONCAT44(local_208._4_4_,fVar41);
    fVar41 = (*(float *)(DAT_180bb8ae8 + 0x114) - fStack_1c4) / (local_1bc - fStack_1c4);
    if (fVar43 <= fVar41) {
      auVar46 = vminss_avx(auVar55._0_16_,ZEXT416((uint)fVar41));
      fVar43 = auVar46._0_4_;
    }
    auVar51 = ZEXT464((uint)(auVar55._0_4_ - fVar43));
  }
  local_234 = auVar57._0_4_ * fVar28;
  fVar41 = local_1bc + auVar53._0_4_;
  auVar50 = ZEXT464((uint)fVar41);
  local_1f0 = (int *)CONCAT44(DAT_180b0a41c * 3.5 + fVar41 + local_230,fVar44);
  local_1a0 = (int *)CONCAT44(fVar41 - DAT_180b0a41c * 3.5,fVar35);
  uVar27 = (((ulonglong)local_198[0] ^ 0xd7c60c5e70c5e892) >> 0x1e ^
           (ulonglong)local_198[0] ^ 0xd7c60c5e70c5e892) * -0x40a7b892e31b1a47;
  uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
  uVar27 = uVar27 >> 0x1f ^ uVar27;
  local_278 = (float **)CONCAT71(local_278._1_7_,1);
  local_1a8._0_3_ = *puVar21;
  puVar21 = (undefined3 *)
            FUN_1804aad60(&local_20c,(uint)(uVar27 >> 0x20) ^ (uint)uVar27,&local_1a0,&local_1f0);
  lVar39 = DAT_180bb8ae8;
  local_1a8 = CONCAT13(local_1a8._3_1_,*puVar21);
  uVar45 = local_1a8;
  local_1a8._1_1_ = (char)((uint3)*puVar21 >> 8);
  cVar10 = local_1a8._1_1_;
  if (local_1a8._1_1_ != '\0') {
    fVar41 = ((*(float *)(DAT_180bb8ae8 + 0x110) - fVar35) - local_234) /
             ((fVar44 - fVar35) - (local_234 + local_234));
    local_200._0_4_ = auVar52._0_4_;
    if ((float)local_200 <= fVar41) {
      auVar46 = vminss_avx(SUB6416(ZEXT464(0x3f7ff972),0),ZEXT416((uint)fVar41));
      local_200._0_4_ = auVar46._0_4_;
    }
    *pfVar20 = (float)local_200;
  }
  fVar28 = auVar54._0_4_ * fVar28;
  local_220 = CONCAT44(local_220._4_4_,fVar28);
  local_1b4 = auVar50._0_4_ + local_230 + auVar53._0_4_;
  local_1ac = local_1b4 + auVar54._0_4_;
  local_1b8 = fVar35;
  local_1b0 = fVar44;
  local_1a8 = uVar45;
  if (*(char *)(param_3 + 3) == '\0') {
    cVar29 = '\0';
  }
  else {
    local_1f0 = (int *)CONCAT44(DAT_180b0a41c * 4.0 + local_1ac,fVar44);
    local_1a0 = (int *)CONCAT44(local_1b4 - DAT_180b0a41c * 4.0,fVar35);
    uVar27 = (((ulonglong)local_198[0] ^ 0x75fd8617f01064a7) >> 0x1e ^
             (ulonglong)local_198[0] ^ 0x75fd8617f01064a7) * -0x40a7b892e31b1a47;
    uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
    uVar27 = uVar27 >> 0x1f ^ uVar27;
    local_278 = (float **)CONCAT71(local_278._1_7_,1);
    puVar21 = (undefined3 *)
              FUN_1804aad60(local_228,(uint)(uVar27 >> 0x20) ^ (uint)uVar27,&local_1a0,&local_1f0);
    local_1a8 = CONCAT13(local_1a8._3_1_,*puVar21);
    uVar45 = local_1a8;
    local_1a8._1_1_ = (char)((uint3)*puVar21 >> 8);
    lVar39 = DAT_180bb8ae8;
    cVar29 = local_1a8._1_1_;
    fVar28 = (float)local_220;
    local_1a8 = uVar45;
  }
  if (cVar29 != '\0') {
    fVar41 = ((*(float *)(lVar39 + 0x110) - local_1b8) - fVar28) /
             ((local_1b0 - local_1b8) - (fVar28 + fVar28));
    fVar44 = auVar52._0_4_;
    if (fVar44 <= fVar41) {
      auVar46 = vminss_avx(auVar55._0_16_,ZEXT416((uint)fVar41));
      fVar44 = auVar46._0_4_;
    }
    param_2[3] = fVar44;
    local_238 = '\x01';
  }
  if ((cVar11 == '\0') && (cVar10 == '\0')) {
    uVar27 = (ulonglong)local_208 & 0xffffffff;
LAB_1804a5542:
    if (cVar29 != '\0') goto LAB_1804a52b3;
    local_170[0] = 0;
  }
  else {
    local_270 = (char *)(param_2 + 2);
    local_278 = (float **)(param_2 + 1);
    auVar53 = ZEXT464((uint)local_208._0_4_);
    FUN_1804b11e0((float)local_200,(ulonglong)local_208 & 0xffffffff,auVar51._0_8_,param_2);
    uVar27 = auVar53._0_8_;
    local_238 = '\x01';
    if ((cVar11 == '\0') && (cVar10 == '\0')) goto LAB_1804a5542;
LAB_1804a52b3:
    local_170[0] = 1;
  }
  local_108 = &local_1e0;
  local_f8 = local_170;
  local_f0 = local_158;
  uStack_100 = local_198;
  fVar44 = (float)FUN_1804a7f80(&local_108,0x10e,uVar27);
  fVar41 = (float)FUN_1804a7f80(&local_108,0x10f,auVar51._0_8_);
  local_218 = (float)FUN_1804a7f80(&local_108,0x110,(float)local_200);
  uVar45 = FUN_1804a7f80(&local_108,0x111,param_2[3]);
  local_180 = (float *)CONCAT44(local_180._4_4_,uVar45);
  uVar45 = *(undefined4 *)(lVar4 + 0x20);
  local_270 = (char *)((ulonglong)local_270 & 0xffffffff00000000);
  local_278 = (float **)CONCAT44(local_278._4_4_,local_22c);
  FUN_1804df870(lVar4,&local_1c8,&local_1c0,0xffffffff);
  local_270 = (char *)&local_20c;
  local_278 = (float **)local_228;
  FUN_1804b11e0((float)local_200,auVar55._0_8_,auVar55._0_8_,&local_208);
  local_118[0] = (int)local_208._0_4_;
  local_118[1] = local_228[0];
  local_118[2] = local_20c;
  local_118[3] = auVar55._0_4_;
  auVar54 = ZEXT464((uint)local_1c0);
  auVar53 = ZEXT464((uint)fStack_1c4);
  uVar14 = FUN_1804b1120(local_118);
  local_270._0_4_ = -NAN;
  auVar46 = vunpcklps_avx(auVar54._0_16_,auVar53._0_16_);
  local_278 = auVar46._0_8_;
  local_268._0_4_ = uVar14;
  FUN_1804e1ee0(lVar4,uVar45,*(undefined4 *)(lVar4 + 0x20),CONCAT44(fStack_1c4,local_1c8));
  uVar45 = *(undefined4 *)(lVar4 + 0x20);
  local_270 = (char *)((ulonglong)local_270._4_4_ << 0x20);
  local_278._0_4_ = local_22c;
  FUN_1804df870(lVar4,&local_1c8,&local_1c0,0xff000000);
  local_268 = (char *)CONCAT44(local_268._4_4_,auVar55._0_4_);
  local_270 = (char *)CONCAT44(local_270._4_4_,auVar52._0_4_);
  local_278 = (float **)CONCAT44(local_278._4_4_,local_1bc);
  FUN_1804a27c0(lVar4,uVar45,*(undefined4 *)(lVar4 + 0x20),fStack_1c4);
  local_1a0 = (int *)CONCAT44((fStack_1c4 - local_1bc) * fVar41 + local_1bc,
                              (local_1c0 - local_1c8) * fVar44 + local_1c8);
  auVar53 = ZEXT464((uint)(DAT_180b0a41c * 5.0));
  auVar46 = *(undefined1 (*) [16])(lVar4 + 0x60);
  auVar6 = vcmpss_avx(ZEXT416((uint)local_1c8),auVar46,1);
  auVar6 = vblendvps_avx(ZEXT416((uint)local_1c8),auVar46,auVar6);
  local_118[0] = auVar6._0_4_;
  auVar7 = vshufps_avx(auVar46,auVar46,0x55);
  auVar5 = vcmpss_avx(ZEXT416((uint)fStack_1c4),auVar7,1);
  auVar5 = vblendvps_avx(ZEXT416((uint)fStack_1c4),auVar7,auVar5);
  local_118[1] = auVar5._0_4_;
  auVar8 = vshufps_avx(auVar46,auVar46,0xaa);
  auVar7 = vcmpss_avx(auVar8,ZEXT416((uint)local_1c0),1);
  auVar7 = vblendvps_avx(ZEXT416((uint)local_1c0),auVar8,auVar7);
  auVar8 = vshufps_avx(auVar46,auVar46,0xff);
  auVar46 = vcmpss_avx(auVar8,ZEXT416((uint)local_1bc),1);
  auVar46 = vblendvps_avx(ZEXT416((uint)local_1bc),auVar8,auVar46);
  auVar6 = vmaxss_avx(auVar6,auVar7);
  local_118[2] = auVar6._0_4_;
  auVar46 = vmaxss_avx(auVar5,auVar46);
  local_118[3] = auVar46._0_4_;
  piVar17 = (int *)(lVar4 + 0xa0);
  iVar12 = *(int *)(lVar4 + 0xa4);
  if (*piVar17 == iVar12) {
    iVar26 = *piVar17 + 1;
    if (iVar12 == 0) {
      iVar12 = 8;
    }
    else {
      iVar12 = iVar12 / 2 + iVar12;
    }
    if (iVar26 < iVar12) {
      iVar26 = iVar12;
    }
    FUN_1804aec70(piVar17,iVar26);
  }
  puVar18 = (undefined8 *)(*(longlong *)(lVar4 + 0xa8) + (longlong)*piVar17 * 0x10);
  *puVar18 = CONCAT44(local_118[1],local_118[0]);
  puVar18[1] = CONCAT44(local_118[3],local_118[2]);
  *piVar17 = *piVar17 + 1;
  *(ulonglong *)(lVar4 + 0x60) = CONCAT44(local_118[1],local_118[0]);
  *(ulonglong *)(lVar4 + 0x68) = CONCAT44(local_118[3],local_118[2]);
  FUN_1804d9200(lVar4);
  local_270._0_4_ = DAT_180b0a41c;
  local_278._0_4_ = 4.48416e-44;
  FUN_1804dff40(lVar4,&local_1a0,DAT_180b0a41c * 0.9 + auVar53._0_4_,0x46000000);
  local_270 = (char *)CONCAT44(local_270._4_4_,DAT_180b0a41c * 1.4);
  local_278 = (float **)CONCAT44(local_278._4_4_,0x20);
  local_1f0 = (int *)0xfffaf6f6;
  FUN_1804dff40(lVar4,&local_1a0,auVar53._0_8_,0xfffaf6f6);
  iVar12 = *piVar17;
  iVar26 = iVar12 + -1;
  *piVar17 = iVar26;
  if (iVar26 == 0) {
    puVar18 = (undefined8 *)(*(longlong *)(lVar4 + 0x38) + 0x3c);
  }
  else {
    puVar18 = (undefined8 *)((longlong)(iVar12 + -2) * 0x10 + *(longlong *)(lVar4 + 0xa8));
  }
  uVar56 = puVar18[1];
  *(undefined8 *)(lVar4 + 0x60) = *puVar18;
  *(undefined8 *)(lVar4 + 0x68) = uVar56;
  FUN_1804d9200(lVar4);
  local_22c = 0.0;
  auVar53 = ZEXT464((uint)local_234);
  fVar44 = (float)local_1d8;
  do {
    iVar12 = 0;
    fVar41 = (float)(uint)(local_22c == 0.0);
    local_1d0 = (float)(uint)(local_22c == 0.0);
    do {
      if ((iVar12 == 0) || (iVar12 == 5)) {
        fVar28 = 1.4013e-45;
      }
      else {
        fVar28 = 0.0;
      }
      if (fVar28 == fVar41) {
        auVar51 = ZEXT1664(CONCAT124(SUB1612(ZEXT816(0),4),(float)iVar12 / fVar49));
        fVar41 = (fVar44 - fVar35) * ((float)iVar12 / fVar49) + fVar35;
        auVar57 = ZEXT464((uint)fVar41);
        fVar43 = ((float)(iVar12 + 1) / fVar49) * (fVar44 - fVar35) + fVar35;
        auVar54 = ZEXT464((uint)fVar43);
        if (SUB41(fVar28,0) == '\0') {
          fVar42 = auVar52._0_4_;
        }
        else {
          fVar42 = DAT_180b0a41c * 2.0;
        }
        fVar47 = auVar50._0_4_;
        if (iVar12 == 5) {
          local_1a0 = (int *)CONCAT44(fVar47,fVar41 - fVar42);
        }
        else {
          local_1a0 = (int *)CONCAT44(fVar47,fVar41);
          if (iVar12 == 0) {
            fVar43 = fVar42 + fVar43;
          }
        }
        local_190 = (int *)CONCAT44(fVar47 + local_230,fVar43);
        uVar45 = *(undefined4 *)(lVar4 + 0x20);
        uVar14 = 0xa0;
        if (iVar12 == 0) {
          uVar14 = 0x50;
        }
        auVar46 = vpcmpeqd_avx(ZEXT416((uint)fVar28),SUB6416(ZEXT464(0),0));
        auVar46 = vblendvps_avx(auVar53._0_16_,auVar52._0_16_,auVar46);
        local_270 = (char *)CONCAT44(local_270._4_4_,uVar14);
        local_278 = (float **)CONCAT44(local_278._4_4_,auVar46._0_4_);
        FUN_1804df870(lVar4,&local_1a0,&local_190,0xffffffff);
        auVar46._0_4_ = (float)((iVar12 + 1) % 6) / fVar49;
        auVar46._4_12_ = SUB1612(ZEXT816(0),4);
        local_270 = (char *)local_228;
        local_278 = &local_208;
        FUN_1804b11e0(auVar46._0_8_,auVar55._0_8_,auVar55._0_8_,&local_1d8);
        local_118[0] = (int)(float)local_1d8;
        local_118[1] = (int)local_208._0_4_;
        local_118[2] = local_228[0];
        local_118[3] = auVar55._0_4_;
        local_270 = (char *)&local_1e8;
        local_278 = (float **)&local_1a8;
        FUN_1804b11e0(auVar51._0_8_,auVar55._0_8_,auVar55._0_8_,&local_20c);
        local_108 = (int **)CONCAT44(local_1a8,local_20c);
        uStack_100 = (uint *)CONCAT44(auVar55._0_4_,(int)local_1e8);
        uVar14 = FUN_1804b1120(local_118);
        uVar15 = FUN_1804b1120(&local_108);
        local_268 = (char *)CONCAT44(local_268._4_4_,uVar14);
        local_270 = (char *)CONCAT44(local_270._4_4_,uVar15);
        auVar46 = vunpcklps_avx(auVar54._0_16_,auVar50._0_16_);
        local_278 = auVar46._0_8_;
        auVar46 = vunpcklps_avx(auVar57._0_16_,auVar50._0_16_);
        FUN_1804e1ee0(lVar4,uVar45,*(undefined4 *)(lVar4 + 0x20),auVar46._0_8_);
        fVar41 = local_1d0;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 6);
    local_22c = (float)((int)local_22c + 1);
  } while ((int)local_22c < 2);
  fVar28 = 0.5;
  auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 7.0 + 0.5)),1);
  fVar43 = 12.5;
  auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 12.5 + 0.5)),1);
  auVar5 = vroundss_avx(ZEXT816(0),
                        ZEXT416((uint)(((auVar50._0_4_ + auVar50._0_4_ + local_230) * 0.5 -
                                       auVar6._0_4_ * 0.5) + 0.5)),1);
  fVar41 = auVar46._0_4_ * 0.5;
  auVar7 = vroundss_avx(ZEXT816(0),
                        ZEXT416((uint)(((((fVar44 - local_234) - (fVar35 + local_234)) * local_218 +
                                        fVar35 + local_234) - fVar41) + 0.5)),1);
  local_1d8._0_4_ = auVar7._0_4_;
  local_1d8._4_4_ = auVar5._0_4_;
  local_1a0._4_4_ = local_1d8._4_4_ + auVar6._0_4_;
  local_1a0._0_4_ = auVar46._0_4_ + (float)local_1d8;
  fVar44 = DAT_180b0a41c * 1.5;
  fVar35 = auVar55._0_4_;
  local_190 = (int *)CONCAT44(local_1a0._4_4_ + fVar35,(float)local_1a0 + fVar35);
  local_218 = (float)local_1d8 - fVar35;
  local_214 = local_1d8._4_4_ - fVar35;
  local_270 = (char *)((ulonglong)local_270 & 0xffffffff00000000);
  iVar12 = 0x50000000;
  local_278._0_4_ = fVar41 + fVar35;
  FUN_1804df870(lVar4,&local_218,&local_190,0x50000000);
  local_270 = (char *)((ulonglong)local_270 & 0xffffffff00000000);
  local_278 = (float **)CONCAT44(local_278._4_4_,fVar41);
  FUN_1804df870(lVar4,&local_1d8,&local_1a0,(ulonglong)local_1f0 & 0xffffffff);
  local_270 = (char *)&local_1e8;
  local_278 = (float **)&local_1d0;
  FUN_1804b11e0((float)local_200,auVar55._0_8_,auVar55._0_8_,&local_218);
  local_108 = (int **)CONCAT44(local_1d0,local_218);
  uStack_100 = (uint *)CONCAT44(auVar55._0_4_,(int)local_1e8);
  local_190 = (int *)CONCAT44(local_1a0._4_4_ - fVar44,(float)local_1a0 - fVar44);
  local_218 = fVar44 + (float)local_1d8;
  local_214 = fVar44 + local_1d8._4_4_;
  fVar41 = fVar41 - fVar44;
  uVar45 = FUN_1804b1120(&local_108);
  local_270 = (char *)((ulonglong)local_270 & 0xffffffff00000000);
  local_278._0_4_ = fVar41;
  FUN_1804df870(lVar4,&local_218,&local_190,uVar45);
  local_108 = *(int ***)param_2;
  uStack_100 = (uint *)CONCAT44(auVar55._0_4_,param_2[2]);
  uVar45 = FUN_1804b1120(&local_108);
  puVar18 = local_1f8;
  if (*(char *)(local_1f8 + 3) != '\0') {
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 3.0 + fVar28)),1);
    local_278._0_4_ = (float)local_220;
    fVar44 = (float)local_220;
    FUN_1804a2ff0(lVar4,&local_1b8,&local_1b0,auVar46._0_8_);
    uVar14 = *(undefined4 *)(lVar4 + 0x20);
    local_270 = (char *)((ulonglong)local_270 & 0xffffffff00000000);
    local_278._0_4_ = fVar44;
    FUN_1804df870(lVar4,&local_1b8,&local_1b0,uVar45);
    local_278._0_4_ = local_1b0 - fVar44;
    local_268 = (char *)CONCAT44(local_268._4_4_,auVar55._0_4_);
    local_270 = (char *)CONCAT44(local_270._4_4_,auVar52._0_4_);
    FUN_1804a2af0(lVar4,uVar14,*(undefined4 *)(lVar4 + 0x20),fVar44 + local_1b8);
    local_1a0._0_4_ =
         ((local_1b0 - fVar44) - (fVar44 + local_1b8)) * (float)local_180 + fVar44 + local_1b8;
    local_1a0._4_4_ = (local_1b4 + local_1ac) * fVar28;
    auVar50 = ZEXT464((uint)(DAT_180b0a41c * 5.0));
    fVar44 = DAT_180b0a41c * 5.0 + auVar55._0_4_;
    fVar47 = 1.4142135;
    fVar41 = *(float *)(lVar4 + 0xe0) * 1.4142135 * fVar28;
    fVar42 = 6.2831855;
    fVar35 = 0.003921569;
    if (fVar44 < fVar41) {
      if (fVar41 * 0.003921569 <= fVar44) {
        iVar12 = (int)(longlong)((fVar44 / fVar41) * 80.0) << 0x18;
        fVar44 = fVar41;
        goto LAB_1804a5baf;
      }
    }
    else {
LAB_1804a5baf:
      local_278._0_4_ = ((32.0 - auVar55._0_4_) * 6.2831855) / 32.0;
      local_270 = (char *)CONCAT44(local_270._4_4_,0x1f);
      fVar35 = 0.003921569;
      fVar42 = 6.2831855;
      fVar47 = 1.4142135;
      FUN_1804dc050(lVar4,&local_1a0,fVar44);
      local_278._0_4_ = 1.43493e-42;
      FUN_1804dafe0(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),iVar12);
      *(undefined4 *)(lVar4 + 0x50) = 0;
    }
    uVar27 = auVar50._0_8_;
    fVar44 = fVar47 * *(float *)(lVar4 + 0xe0) * fVar28;
    fVar41 = auVar50._0_4_;
    if (fVar41 < fVar44) {
      if (fVar44 * fVar35 <= fVar41) {
        local_1f0 = (int *)(ulonglong)
                           ((int)(longlong)((fVar41 / fVar44) * 255.0) << 0x18 | 0xfaf6f6);
        uVar27 = (ulonglong)(uint)fVar44;
        goto LAB_1804a5c44;
      }
    }
    else {
LAB_1804a5c44:
      local_278._0_4_ = ((32.0 - auVar55._0_4_) * fVar42) / 32.0;
      local_270 = (char *)CONCAT44(local_270._4_4_,0x1f);
      FUN_1804dc050(lVar4,&local_1a0,uVar27);
      local_278._0_4_ = 1.43493e-42;
      FUN_1804dafe0(lVar4,*(undefined8 *)(lVar4 + 0x58),*(undefined4 *)(lVar4 + 0x50),
                    (ulonglong)local_1f0 & 0xffffffff);
      *(undefined4 *)(lVar4 + 0x50) = 0;
    }
    local_278._0_4_ = 4.48416e-44;
    FUN_1804e01c0(lVar4,&local_1a0,auVar50._0_4_ - DAT_180b0a41c * 1.6,uVar45);
  }
  auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar43 * DAT_180b0a41c + fVar28)),1);
  local_190 = (int *)CONCAT44(auVar46._0_4_,local_210);
  fVar35 = local_210;
  FUN_1804c6420(&local_190,0xbf800000);
  fVar44 = *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x118);
  fVar41 = *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x11c);
  auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 15.0 + fVar28)),1);
  auVar50 = ZEXT1664(auVar46);
  local_1d0 = auVar46._0_4_;
  local_190 = (int *)CONCAT44(local_1d0,fVar35);
  local_230 = fVar44;
  local_218 = fVar41;
  FUN_1804c6420(&local_190,0xbf800000);
  local_234 = auVar50._0_4_ * fVar28 + fVar41;
  uVar27 = (ulonglong)local_198[0] ^ 0xf7ac9b696402a20c;
  uVar27 = (uVar27 >> 0x1e ^ uVar27) * -0x40a7b892e31b1a47;
  uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
  uVar27 = uVar27 >> 0x1f ^ uVar27;
  uVar34 = (uint)(uVar27 >> 0x20) ^ (uint)uVar27;
  puVar37 = *(uint **)(local_1e0 + 2);
  local_200._0_4_ = -NAN;
  local_200._4_4_ = 0xffffffff;
  uVar27 = (longlong)*local_1e0;
  while (uVar38 = uVar27, uVar38 != 0) {
    uVar27 = uVar38 >> 1;
    if (puVar37[uVar27 * 4] < uVar34) {
      puVar37 = puVar37 + uVar27 * 4 + 4;
      uVar27 = uVar38 + (-1 - uVar27);
    }
  }
  if ((puVar37 == (uint *)((longlong)*local_1e0 * 0x10 + *(longlong *)(local_1e0 + 2))) ||
     (*puVar37 != uVar34)) {
    uVar13 = 0;
LAB_1804a5e4b:
    if (2 < uVar13) {
      uVar13 = 2;
    }
  }
  else {
    uVar13 = puVar37[2];
    if (-1 < (int)uVar13) goto LAB_1804a5e4b;
    uVar13 = 0;
  }
  uVar27 = (ulonglong)local_198[0] ^ 0x95e41522e34d1e21;
  uVar27 = (uVar27 >> 0x1e ^ uVar27) * -0x40a7b892e31b1a47;
  uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
  uVar27 = uVar27 >> 0x1f ^ uVar27;
  uVar30 = (uint)(uVar27 >> 0x20) ^ (uint)uVar27;
  uVar27 = (ulonglong)uVar30;
  local_270 = (&PTR_DAT_1807b7e40)[uVar13];
  fVar35 = DAT_180b0a41c * 12.5 + fVar44;
  local_1a0 = (int *)CONCAT44(fVar41,fVar44);
  fVar44 = DAT_180b0a41c * 3.0;
  auVar53 = ZEXT464(0x41333333);
  auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 11.2 + fVar28)),1);
  auVar46 = vmaxss_avx(auVar55._0_16_,auVar46);
  local_248 = 0;
  local_258 = 0;
  local_260 = 0;
  local_268 = (char *)0x0;
  local_278 = (float **)CONCAT44(local_278._4_4_,auVar52._0_4_);
  local_1e8 = uVar27;
  local_180 = (float *)local_270;
  FUN_1804ea040(&local_190,local_178,auVar46._0_8_,0x7f7fffff);
  local_1f0 = (int *)CONCAT44(fVar41 + auVar50._0_4_,fVar35 + (float)local_190 + fVar44);
  local_278 = (float **)CONCAT71(local_278._1_7_,1);
  puVar22 = (undefined2 *)FUN_1804aad60(local_228,uVar27,&local_1a0,&local_1f0);
  local_1a8 = CONCAT22(local_1a8._2_2_,*puVar22);
  if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
     (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
               *(longlong *)(DAT_180bb8ae8 + 0x2000)) == uVar30)) {
    local_237 = '\x01';
  }
  else {
    local_237 = '\0';
  }
  if ((*(char *)(puVar22 + 1) != '\0') && (local_237 == '\0')) {
    FUN_1804c7740(uVar27,0);
  }
  if (((char)local_1a8 == '\0') && (local_237 == '\0')) {
    uVar56 = auVar52._0_8_;
  }
  else {
    uVar56 = auVar55._0_8_;
  }
  uVar27 = (((ulonglong)local_198[0] ^ 0x341b8edc62979a36) >> 0x1e ^
           (ulonglong)local_198[0] ^ 0x341b8edc62979a36) * -0x40a7b892e31b1a47;
  uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
  uVar27 = uVar27 >> 0x1f ^ uVar27;
  auVar54._0_8_ = FUN_1804aaa10((uint)(uVar27 >> 0x20) ^ (uint)uVar27,uVar56,0x41900000);
  auVar54._8_56_ = extraout_var;
  fVar44 = auVar52._0_4_;
  if (fVar44 <= (float)auVar54._0_8_) {
    auVar46 = vminss_avx(auVar55._0_16_,auVar54._0_16_);
    fVar44 = auVar46._0_4_;
  }
  uVar31 = 0;
  uVar30 = 0;
  do {
    fVar43 = (float)(DAT_180b0a554 >> (uVar30 & 0x1f) & 0xff);
    uVar31 = uVar31 | (int)(longlong)
                           (((float)(DAT_180b0a424 >> (uVar30 & 0x1f) & 0xff) - fVar43) * fVar44 +
                            fVar43 + fVar28) << (uVar30 & 0x1f);
    uVar30 = uVar30 + 8;
  } while ((int)uVar30 < 0x20);
  fVar44 = DAT_180b0a41c * 0.3 + local_234;
  fVar43 = DAT_180b0a41c * 6.5 + local_230;
  fVar42 = fVar44 - DAT_180b0a41c * 1.4;
  local_108 = (int **)CONCAT44(fVar42,fVar43 - DAT_180b0a41c * 2.6);
  uStack_100 = (uint *)CONCAT44(fVar44 + DAT_180b0a41c * 1.4,fVar43);
  local_f8 = (undefined1 *)CONCAT44(fVar42,fVar43 + DAT_180b0a41c * 2.6);
  local_268 = (char *)CONCAT44(local_268._4_4_,0x7f7fffff);
  local_270 = (char *)((ulonglong)local_270 & 0xffffffff00000000);
  local_278._0_4_ = DAT_180b0a41c * 1.3;
  FUN_1804d9a00(lVar4,&local_108,3,uVar31);
  auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar53._0_4_ * DAT_180b0a41c + fVar28)),1);
  auVar46 = vmaxss_avx(auVar55._0_16_,auVar46);
  auVar54 = ZEXT1664(auVar46);
  local_190 = (int *)FUN_1804e97d0(local_178,auVar46._0_8_,0xbf800000);
  lVar23 = FUN_1804e95f0(local_190,0x48);
  lVar39 = local_178;
  if (lVar23 == 0) {
    fVar44 = auVar54._0_4_ * fVar28;
  }
  else {
    fVar44 = (*(float *)(lVar23 + 0x14) - *(float *)(lVar23 + 0xc)) *
             (auVar54._0_4_ / *(float *)((longlong)local_190 + 0x14));
  }
  auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar35 + fVar28)),1);
  local_190 = (int *)CONCAT44(local_234 - fVar44 * fVar28,auVar46._0_4_);
  local_268 = (char *)0x0;
  local_270 = (char *)local_180;
  local_278 = (float **)CONCAT44(local_278._4_4_,uVar31);
  fVar44 = local_234;
  FUN_180463450(lVar4,local_178,auVar53._0_8_,&local_190);
  cVar11 = FUN_1804a8ab0(local_1e8 & 0xffffffff,&local_1a0,&local_1f0,DAT_180b0a41c * 90.0);
  if (cVar11 != '\0') {
    lVar39 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    uVar45 = FUN_1804c2670(lVar39,0);
    local_180 = (float *)CONCAT44(local_180._4_4_,uVar45);
    local_190 = (int *)(lVar39 + 0x108);
    iVar12 = *(int *)(lVar39 + 0x10c);
    if (*local_190 == iVar12) {
      iVar26 = *local_190 + 1;
      if (iVar12 == 0) {
        iVar12 = 8;
      }
      else {
        iVar12 = iVar12 / 2 + iVar12;
      }
      if (iVar26 < iVar12) {
        iVar26 = iVar12;
      }
      FUN_1804d14d0(local_190,iVar26);
    }
    *(float *)(*(longlong *)(local_190 + 2) + (longlong)*local_190 * 4) = (float)local_180;
    *local_190 = *local_190 + 1;
    cVar11 = FUN_1804a91a0(&DAT_180859490,uVar13 == 0);
    if (cVar11 != '\0') {
      uVar13 = 0;
      FUN_1804b1650(local_1e0,uVar34,0);
      FUN_1804c7bf0();
    }
    lVar39 = DAT_180bb8ae8;
    iVar12 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar12 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
      lVar39 = DAT_180bb8ae8;
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar12 + -1;
    }
    lVar39 = *(longlong *)(lVar39 + 0x14d0);
    uVar45 = FUN_1804c2670(lVar39,1);
    local_180 = (float *)CONCAT44(local_180._4_4_,uVar45);
    local_190 = (int *)(lVar39 + 0x108);
    iVar12 = *(int *)(lVar39 + 0x10c);
    if (*local_190 == iVar12) {
      iVar26 = *local_190 + 1;
      if (iVar12 == 0) {
        iVar12 = 8;
      }
      else {
        iVar12 = iVar12 / 2 + iVar12;
      }
      if (iVar26 < iVar12) {
        iVar26 = iVar12;
      }
      FUN_1804d14d0(local_190,iVar26);
    }
    *(float *)(*(longlong *)(local_190 + 2) + (longlong)*local_190 * 4) = (float)local_180;
    *local_190 = *local_190 + 1;
    cVar11 = FUN_1804a91a0(&DAT_18085950c,uVar13 == 1);
    if (cVar11 != '\0') {
      uVar13 = 1;
      FUN_1804b1650(local_1e0,uVar34,1);
      FUN_1804c7bf0();
    }
    lVar39 = DAT_180bb8ae8;
    iVar12 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar12 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
      lVar39 = DAT_180bb8ae8;
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar12 + -1;
    }
    lVar39 = *(longlong *)(lVar39 + 0x14d0);
    uVar45 = FUN_1804c2670(lVar39,2);
    local_180 = (float *)CONCAT44(local_180._4_4_,uVar45);
    local_190 = (int *)(lVar39 + 0x108);
    iVar12 = *(int *)(lVar39 + 0x10c);
    if (*local_190 == iVar12) {
      iVar26 = *local_190 + 1;
      if (iVar12 == 0) {
        iVar12 = 8;
      }
      else {
        iVar12 = iVar12 / 2 + iVar12;
      }
      if (iVar26 < iVar12) {
        iVar26 = iVar12;
      }
      FUN_1804d14d0(local_190,iVar26);
    }
    *(float *)(*(longlong *)(local_190 + 2) + (longlong)*local_190 * 4) = (float)local_180;
    *local_190 = *local_190 + 1;
    cVar11 = FUN_1804a91a0(&DAT_180859508,uVar13 == 2);
    if (cVar11 != '\0') {
      uVar13 = 2;
      FUN_1804b1650(local_1e0,uVar34,2);
      FUN_1804c7bf0();
    }
    iVar12 = *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108);
    if (iVar12 < 2) {
      FUN_1804c5a40("Calling PopID() too many times!");
    }
    else {
      *(int *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x108) = iVar12 + -1;
    }
    FUN_1804aeac0();
    lVar39 = local_178;
  }
  auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 50.5 + local_230 + fVar28)),1);
  local_1e8 = CONCAT44(fVar41,auVar6._0_4_);
  auVar46 = vpcmpeqd_avx(ZEXT116(*(byte *)(puVar18 + 3)),SUB6416(ZEXT464(0),0));
  auVar46 = vblendvps_avx(SUB6416(ZEXT464(0x4284cccd),0),SUB6416(ZEXT464(0x42ca999a),0),auVar46);
  auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar46._0_4_ * DAT_180b0a41c + fVar28)),1);
  local_1a0 = (int *)CONCAT44(fVar41 + auVar50._0_4_,auVar46._0_4_ + auVar6._0_4_);
  uVar27 = (ulonglong)local_198[0] ^ 0x25d75ca85ceb7ade;
  uVar27 = (uVar27 >> 0x1e ^ uVar27) * -0x40a7b892e31b1a47;
  uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
  uVar27 = uVar27 >> 0x1f ^ uVar27;
  uVar38 = (ulonglong)local_198[0] ^ 0xc40ed661dc35f6f3;
  uVar38 = (uVar38 >> 0x1e ^ uVar38) * -0x40a7b892e31b1a47;
  uVar38 = (uVar38 >> 0x1b ^ uVar38) * -0x6b2fb644ecceee15;
  uVar38 = uVar38 >> 0x1f ^ uVar38;
  local_1f0 = (int *)FUN_1804b14f0(local_1e0,(uint)(uVar38 >> 0x20) ^ (uint)uVar38,0);
  auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 8.0 + fVar28)),1);
  auVar54 = ZEXT1664(auVar46);
  local_270 = (char *)((ulonglong)local_270 & 0xffffffff00000000);
  local_278._0_4_ = DAT_180b0a41c * 4.0;
  FUN_1804df870(lVar4,&local_1e8,&local_1a0,DAT_180b0a408);
  fVar43 = auVar54._0_4_;
  auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((fVar44 - fVar43 * fVar28) + fVar28)),1);
  auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 3.5 + fVar28)),1);
  fVar35 = auVar6._0_4_ + (float)local_1e8;
  local_1d8 = (float *)CONCAT44(auVar46._0_4_,fVar35);
  local_190 = (int *)CONCAT44(auVar46._0_4_ + fVar43,fVar35 + fVar43);
  local_108 = *(int ***)param_2;
  uStack_100 = (uint *)CONCAT44(auVar55._0_4_,param_2[2]);
  fVar35 = DAT_180b0a41c * 2.2;
  uVar45 = FUN_1804b1120(&local_108);
  local_270 = (char *)((ulonglong)local_270 & 0xffffffff00000000);
  local_278 = (float **)CONCAT44(local_278._4_4_,fVar35);
  FUN_1804df870(lVar4,&local_1d8,&local_190,uVar45);
  fVar35 = DAT_180b0a41c * 15.5 + (float)local_1e8;
  if (uVar13 == 0) {
    local_180 = (float *)CONCAT44(local_180._4_4_,DAT_180b0a4f8);
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * auVar53._0_4_ + fVar28)),1);
    auVar46 = vmaxss_avx(auVar55._0_16_,auVar46);
    auVar54 = ZEXT1664(auVar46);
    lVar39 = FUN_1804e97d0(lVar39,auVar46._0_8_,0xbf800000);
    lVar23 = FUN_1804e95f0(lVar39,0x48);
    if (lVar23 == 0) {
      fVar43 = auVar54._0_4_ * fVar28;
    }
    else {
      fVar43 = (*(float *)(lVar23 + 0x14) - *(float *)(lVar23 + 0xc)) *
               (auVar54._0_4_ / *(float *)(lVar39 + 0x14));
    }
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar35 + fVar28)),1);
    local_220 = CONCAT44(fVar44 - fVar43 * fVar28,auVar46._0_4_);
    local_268 = (char *)0x0;
    local_270 = &DAT_180859558;
    local_278 = (float **)CONCAT44(local_278._4_4_,(float)local_180);
    FUN_180463450(lVar4,local_178,auVar53._0_8_,&local_220);
    fVar35 = fVar35 + DAT_180b0a41c * 7.0;
  }
  if (*local_1f0 == 0) {
    local_278._0_1_ = 1;
    puVar22 = (undefined2 *)
              FUN_1804aad60(local_228,(uint)(uVar27 >> 0x20) ^ (uint)uVar27,&local_1e8,&local_1a0);
    uVar3 = *puVar22;
    cVar11 = *(char *)(puVar22 + 1);
    local_278 = (float **)CONCAT71(local_278._1_7_,*(undefined1 *)(puVar18 + 3));
    FUN_1804a32d0(&local_150,0x30,param_2,uVar13);
    uVar34 = DAT_180b0a514;
    if ((char)uVar3 != '\0') {
      uVar34 = DAT_180b0a424;
    }
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar53._0_4_ * DAT_180b0a41c + fVar28)),1);
    auVar46 = vmaxss_avx(auVar55._0_16_,auVar46);
    auVar54 = ZEXT1664(auVar46);
    lVar39 = FUN_1804e97d0(local_178,auVar46._0_8_,0xbf800000);
    lVar23 = FUN_1804e95f0(lVar39,0x48);
    if (lVar23 == 0) {
      fVar43 = auVar54._0_4_ * fVar28;
    }
    else {
      fVar43 = (*(float *)(lVar23 + 0x14) - *(float *)(lVar23 + 0xc)) *
               (auVar54._0_4_ / *(float *)(lVar39 + 0x14));
    }
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar35 + fVar28)),1);
    local_190 = (int *)CONCAT44(fVar44 - fVar43 * fVar28,auVar46._0_4_);
    local_268 = (char *)0x0;
    local_270 = (char *)&local_150;
    local_278 = (float **)CONCAT44(local_278._4_4_,uVar34);
    FUN_180463450(lVar4,local_178,auVar53._0_8_,&local_190);
    if (cVar11 != '\0') {
      *local_1f0 = 1;
      uVar27 = (((ulonglong)local_198[0] ^ 0x6246501b5b807308) >> 0x1e ^
               (ulonglong)local_198[0] ^ 0x6246501b5b807308) * -0x40a7b892e31b1a47;
      uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
      uVar27 = uVar27 >> 0x1f ^ uVar27;
      FUN_1804b1650(local_1e0,(uint)(uVar27 >> 0x20) ^ (uint)uVar27);
    }
  }
  else {
    uVar27 = (((ulonglong)local_198[0] ^ 0x6246501b5b807308) >> 0x1e ^
             (ulonglong)local_198[0] ^ 0x6246501b5b807308) * -0x40a7b892e31b1a47;
    uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
    uVar27 = uVar27 >> 0x1f ^ uVar27;
    uVar34 = (uint)(uVar27 >> 0x20) ^ (uint)uVar27;
    puVar37 = *(uint **)(local_1e0 + 2);
    uVar27 = (longlong)*local_1e0;
    while (uVar38 = uVar27, uVar38 != 0) {
      uVar27 = uVar38 >> 1;
      if (puVar37[uVar27 * 4] < uVar34) {
        puVar37 = puVar37 + uVar27 * 4 + 4;
        uVar27 = uVar38 + (-1 - uVar27);
      }
    }
    if ((puVar37 == (uint *)((longlong)*local_1e0 * 0x10 + *(longlong *)(local_1e0 + 2))) ||
       (*puVar37 != uVar34)) {
      uVar34 = 0;
    }
    else {
      uVar34 = puVar37[2];
      if (uVar34 != 0) {
        local_278 = (float **)CONCAT71(local_278._1_7_,*(undefined1 *)(puVar18 + 3));
        FUN_1804a32d0(&DAT_180cd6fb0,0x30,param_2,uVar13);
        FUN_1804c1f80();
        uVar27 = (((ulonglong)local_198[0] ^ 0x6246501b5b807308) >> 0x1e ^
                 (ulonglong)local_198[0] ^ 0x6246501b5b807308) * -0x40a7b892e31b1a47;
        uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
        uVar27 = uVar27 >> 0x1f ^ uVar27;
        FUN_1804b1650(local_1e0,(uint)(uVar27 >> 0x20) ^ (uint)uVar27,0);
      }
    }
    lVar23 = DAT_180bb8ae8;
    fVar44 = DAT_180b0a41c;
    lVar39 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    uVar45 = *(undefined4 *)(lVar39 + 0x118);
    local_180 = (float *)CONCAT44(local_180._4_4_,*(undefined4 *)(lVar39 + 0x11c));
    *(undefined1 *)(lVar39 + 0xce) = 1;
    lVar39 = *(longlong *)(lVar23 + 0x14d0);
    *(float *)(lVar39 + 0x118) = fVar35 - fVar44;
    *(undefined4 *)(lVar39 + 0x11c) = local_1e8._4_4_;
    *(undefined1 *)(lVar39 + 0x159) = 1;
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar44 * auVar53._0_4_ + fVar28)),1);
    auVar46 = vmaxss_avx(auVar55._0_16_,auVar46);
    auVar54 = ZEXT1664(CONCAT124(auVar46._4_12_,auVar46._0_4_ / fVar44));
    local_220 = local_178;
    if (local_178 == 0) {
      local_220 = *(longlong *)(lVar23 + 0x11d0);
    }
    local_108 = *(int ***)(lVar23 + 0x11d0);
    uStack_100 = (uint *)CONCAT44(*(undefined4 *)(lVar23 + 0x11e0),*(undefined4 *)(lVar23 + 0x11e4))
    ;
    FUN_1804d05a0(lVar23 + 0x1fb8,&local_108);
    uVar27 = auVar54._0_8_;
    if (auVar54._0_4_ == auVar52._0_4_) {
      uVar27 = (ulonglong)*(uint *)(lVar23 + 0x11e4);
    }
    FUN_1804c23b0(local_220,uVar27);
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * auVar53._0_4_ + fVar28)),1);
    auVar46 = vmaxss_avx(auVar55._0_16_,auVar46);
    local_190 = (int *)CONCAT44((auVar50._0_4_ - auVar46._0_4_) * fVar28,DAT_180b0a41c);
    FUN_1804b2d30(0xb,&local_190);
    FUN_1804b2a10(7,0);
    FUN_1804b2a10(0,DAT_180b0a424);
    lVar39 = DAT_180bb8ae8;
    fVar44 = DAT_180b0a41c * 2.0;
    *(uint *)(DAT_180bb8ae8 + 0x1e88) = *(uint *)(DAT_180bb8ae8 + 0x1e88) | 1;
    *(float *)(lVar39 + 0x1ea0) = ((float)local_1a0 - fVar35) - fVar44;
    local_190 = (int *)CONCAT44(auVar52._0_4_,auVar52._0_4_);
    local_260 = 0;
    local_268 = (char *)0x0;
    local_270 = (char *)CONCAT44(local_270._4_4_,0x1040);
    local_278 = (float **)&local_190;
    cVar11 = FUN_1804fbc20("##edit",0,&DAT_180cd6fb0,0x30);
    lVar39 = DAT_180bb8ae8;
    if ((cVar11 == '\0') &&
       ((uVar34 != 0 ||
        ((*(int *)(DAT_180bb8ae8 + 0x1550) != 0 &&
         (*(int *)(DAT_180bb8ae8 + 0x1550) == *(int *)(DAT_180bb8ae8 + 0x1ec0))))))) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    iVar12 = *(int *)(DAT_180bb8ae8 + 0x1f98);
    if (1 < iVar12) {
      iVar26 = 2;
      goto LAB_1804a6c90;
    }
    FUN_1804c5a40("Calling PopStyleColor() too many times!");
    iVar12 = *(int *)(lVar39 + 0x1f98);
    for (iVar26 = iVar12; 0 < iVar26; iVar26 = iVar26 + -1) {
LAB_1804a6c90:
      puVar1 = (undefined8 *)(*(longlong *)(lVar39 + 0x1fa0) + -0x10 + (longlong)iVar12 * 0x14);
      uVar56 = puVar1[1];
      puVar2 = (undefined8 *)
               (lVar39 + 0xdc8 +
               (longlong)*(int *)(*(longlong *)(lVar39 + 0x1fa0) + -0x14 + (longlong)iVar12 * 0x14)
               * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar56;
      *(int *)(lVar39 + 0x1f98) = *(int *)(lVar39 + 0x1f98) + -1;
      iVar12 = *(int *)(lVar39 + 0x1f98);
    }
    FUN_1804b2de0(1);
    lVar39 = DAT_180bb8ae8;
    lVar23 = (longlong)*(int *)(DAT_180bb8ae8 + 0x1fb8);
    if (*(int *)(DAT_180bb8ae8 + 0x1fb8) < 1) {
      FUN_1804c5a40("Calling PopFont() too many times!");
    }
    else {
      lVar24 = *(longlong *)(DAT_180bb8ae8 + 0x1fc0);
      FUN_1804c23b0(*(undefined8 *)(lVar24 + -0x10 + lVar23 * 0x10),
                    *(undefined4 *)(lVar24 + -8 + lVar23 * 0x10),
                    *(undefined4 *)(lVar24 + -4 + lVar23 * 0x10));
      *(int *)(lVar39 + 0x1fb8) = *(int *)(lVar39 + 0x1fb8) + -1;
    }
    lVar23 = DAT_180bb8ae8;
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    lVar39 = *(longlong *)(lVar23 + 0x14d0);
    *(undefined4 *)(lVar39 + 0x118) = uVar45;
    *(float *)(lVar39 + 0x11c) = (float)local_180;
    *(undefined1 *)(lVar39 + 0x159) = 1;
    fVar44 = local_234;
    if (bVar9) {
      local_108 = *(int ***)param_2;
      uStack_100 = *(uint **)(param_2 + 2);
      cVar11 = FUN_1804a3b90(lVar23,uVar13,&local_108);
      if (cVar11 != '\0') {
        if (*(char *)(puVar18 + 3) == '\0') {
          uStack_100 = (uint *)CONCAT44(param_2[3],(undefined4)uStack_100);
        }
        *(int ***)param_2 = local_108;
        *(uint **)(param_2 + 2) = uStack_100;
        local_238 = '\x01';
      }
      *local_1f0 = 0;
      fVar44 = local_234;
    }
  }
  fVar35 = auVar50._0_4_;
  if (*(char *)(puVar18 + 3) != '\0') {
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 121.0 + local_230 + fVar28)),1)
    ;
    local_180 = (float *)CONCAT44(fVar41,auVar46._0_4_);
    auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 30.8 + fVar28)),1);
    local_1a0 = (int *)CONCAT44(fVar41 + fVar35,auVar6._0_4_ + auVar46._0_4_);
    uVar27 = (((ulonglong)local_198[0] ^ 0x54021de755d453b0) >> 0x1e ^
             (ulonglong)local_198[0] ^ 0x54021de755d453b0) * -0x40a7b892e31b1a47;
    uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
    uVar27 = uVar27 >> 0x1f ^ uVar27;
    local_278 = (float **)CONCAT71(local_278._1_7_,1);
    puVar22 = (undefined2 *)
              FUN_1804aad60(local_228,(uint)(uVar27 >> 0x20) ^ (uint)uVar27,&local_180,&local_1a0);
    lVar39 = DAT_180bb8ae8;
    fVar35 = DAT_180b0a41c;
    uVar3 = *puVar22;
    local_1a8 = CONCAT22(local_1a8._2_2_,uVar3);
    uVar45 = local_1a8;
    local_1a8._1_1_ = (char)((ushort)uVar3 >> 8);
    cVar11 = local_1a8._1_1_;
    fVar43 = auVar52._0_4_;
    if ((local_1a8._1_1_ != '\0') && (*(float *)(DAT_180bb8ae8 + 0xfc) != fVar43)) {
      fVar42 = (*(float *)(DAT_180bb8ae8 + 0xfc) * 0.005) / DAT_180b0a41c + param_2[3];
      fVar47 = fVar43;
      if (fVar43 <= fVar42) {
        auVar46 = vminss_avx(auVar55._0_16_,ZEXT416((uint)fVar42));
        fVar47 = auVar46._0_4_;
      }
      param_2[3] = fVar47;
      local_238 = '\x01';
    }
    fVar42 = 100.0;
    if ((char)uVar3 == '\0') {
      if (local_1a8._1_1_ != '\0') goto LAB_1804a6f69;
    }
    else {
      fVar47 = *(float *)(lVar39 + 0x120);
      if (fVar47 != fVar43) {
        fVar47 = param_2[3] * 100.0 + fVar47;
        fVar48 = ABS(fVar47);
        auVar6 = vroundps_avx(ZEXT416((uint)fVar48),0);
        auVar46 = vcmpss_avx(ZEXT416((uint)(fVar48 - auVar6._0_4_)),ZEXT416(0x3f000000),0);
        fVar47 = (float)((uint)((float)(auVar46._0_4_ & 0x3f800000) + auVar6._0_4_) |
                        (uint)fVar47 & 0x80000000) / 100.0;
        if (fVar43 <= fVar47) {
          auVar46 = vminss_avx(auVar55._0_16_,ZEXT416((uint)fVar47));
          param_2[3] = auVar46._0_4_;
          local_238 = '\x01';
        }
        else {
          param_2[3] = fVar43;
          local_238 = '\x01';
        }
      }
LAB_1804a6f69:
      *(undefined4 *)(lVar39 + 0x24d8) = 4;
    }
    local_270 = (char *)((ulonglong)local_270 & 0xffffffff00000000);
    local_1a8 = uVar45;
    local_278._0_4_ = fVar35 * 4.0;
    FUN_1804df870(lVar4,&local_180,&local_1a0,DAT_180b0a408);
    FUN_18015abc0(&local_108,0x10,&DAT_18080ce2c,(int)(fVar42 * param_2[3] + fVar28));
    lVar39 = local_178;
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar53._0_4_ * DAT_180b0a41c + fVar28)),1);
    auVar46 = vmaxss_avx(auVar55._0_16_,auVar46);
    local_248 = 0;
    local_258 = 0;
    local_260 = 0;
    local_268 = (char *)0x0;
    local_270 = (char *)&local_108;
    local_278._0_4_ = auVar52._0_4_;
    FUN_1804ea040(&local_190,local_178,auVar46._0_8_);
    if (((char)uVar3 != '\0') || (uVar34 = DAT_180b0a514, cVar11 != '\0')) {
      uVar34 = DAT_180b0a424;
    }
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar53._0_4_ * DAT_180b0a41c + fVar28)),1);
    auVar46 = vmaxss_avx(auVar55._0_16_,auVar46);
    auVar54 = ZEXT1664(auVar46);
    lVar23 = FUN_1804e97d0(lVar39,auVar46._0_8_,0xbf800000);
    lVar24 = FUN_1804e95f0(lVar23,0x48);
    if (lVar24 == 0) {
      fVar35 = auVar54._0_4_ * fVar28;
    }
    else {
      fVar35 = (*(float *)(lVar24 + 0x14) - *(float *)(lVar24 + 0xc)) *
               (auVar54._0_4_ / *(float *)(lVar23 + 0x14));
    }
    auVar46 = vroundss_avx(ZEXT816(0),
                           ZEXT416((uint)((((float)local_1a0 + (float)local_180) - (float)local_190)
                                          * fVar28 + fVar28)),1);
    local_190 = (int *)CONCAT44(fVar44 - fVar35 * fVar28,auVar46._0_4_);
    local_268 = (char *)0x0;
    local_270 = (char *)&local_108;
    local_278 = (float **)CONCAT44(local_278._4_4_,uVar34);
    FUN_180463450(lVar4,lVar39,auVar53._0_8_,&local_190);
    fVar35 = auVar50._0_4_;
  }
  auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 162.0 + local_230 + fVar28)),1);
  fVar43 = auVar46._0_4_;
  local_1f0 = (int *)CONCAT44(fVar44,fVar43);
  fVar44 = DAT_180b0a41c * 7.0;
  uVar27 = (((ulonglong)local_198[0] ^ 0x822cdf264ebd2c82) >> 0x1e ^
           (ulonglong)local_198[0] ^ 0x822cdf264ebd2c82) * -0x40a7b892e31b1a47;
  uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
  uVar27 = uVar27 >> 0x1f ^ uVar27;
  uVar34 = (uint)(uVar27 >> 0x20) ^ (uint)uVar27;
  local_1e8 = (ulonglong)uVar34;
  local_190 = (int *)CONCAT44(fVar41 + fVar35,fVar44 + fVar43);
  local_1a0 = (int *)CONCAT44(fVar41,fVar43 - fVar44);
  local_278 = (float **)CONCAT71(local_278._1_7_,1);
  puVar22 = (undefined2 *)FUN_1804aad60(local_228,local_1e8,&local_1a0,&local_190);
  uVar3 = *puVar22;
  if ((*(int *)(DAT_180bb8ae8 + 0x2008) < *(int *)(DAT_180bb8ae8 + 0x1ff8)) &&
     (*(uint *)((longlong)*(int *)(DAT_180bb8ae8 + 0x2008) * 0x38 +
               *(longlong *)(DAT_180bb8ae8 + 0x2000)) == uVar34)) {
    bVar9 = true;
  }
  else {
    bVar9 = false;
  }
  if (*(char *)(puVar22 + 1) == '\0') {
    if (!bVar9) goto LAB_1804a7212;
  }
  else if (!bVar9) {
    FUN_1804c7740(uVar34,0);
LAB_1804a7212:
    if ((char)uVar3 == '\0') {
      uVar13 = DAT_180b0a514;
      goto LAB_1804a7227;
    }
    FUN_1804c7660("Saved colors");
  }
  uVar13 = DAT_180b0a424;
LAB_1804a7227:
  local_278 = (float **)CONCAT44(local_278._4_4_,0x41300000);
  FUN_180463dc0(lVar4,&local_1f0,uVar13,&DAT_180859494);
  auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 17.0 + fVar28)),1);
  auVar57 = ZEXT1664(auVar46);
  auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 5.0 + fVar28)),1);
  auVar54 = ZEXT1664(auVar6);
  auVar5 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 10.0 + fVar28)),1);
  auVar50 = ZEXT1664(auVar5);
  fVar41 = auVar46._0_4_ + auVar6._0_4_;
  fVar35 = auVar5._0_4_;
  local_1a0 = (int *)CONCAT44(local_218,
                              (fVar44 + (float)local_1f0) -
                              ((fVar41 * fVar49 - auVar6._0_4_) + fVar35 + fVar35 + fVar35));
  local_190 = (int *)CONCAT44(local_218 + local_1d0,fVar44 + (float)local_1f0);
  cVar11 = FUN_1804a8ab0(uVar34,&local_1a0,&local_190);
  lVar39 = DAT_180bb8ae8;
  if (cVar11 == '\0') {
    auVar50 = ZEXT464(0xbf800000);
  }
  else {
    lVar4 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
    if ((*(longlong *)(lVar4 + 0x1c8) != 0) ||
       (pfVar20 = (float *)(lVar4 + 0x280), *(longlong *)(DAT_180bb8ae8 + 0x2338) != 0)) {
      pfVar20 = (float *)(lVar4 + 0x250);
    }
    fVar44 = *pfVar20 - *(float *)(lVar4 + 0x118);
    fVar35 = (float)(int)(((fVar44 - auVar50._0_4_) + auVar54._0_4_) / fVar41);
    if ((int)fVar35 < 1) {
      fVar35 = 1.4013e-45;
    }
    else if (6 < (int)fVar35) {
      fVar35 = 8.40779e-45;
    }
    local_218 = (float)(int)fVar35 * fVar41 - auVar54._0_4_;
    *(undefined1 *)(lVar4 + 0xce) = 1;
    uVar56 = DAT_180c62cb0;
    lVar39 = *(longlong *)(lVar39 + 0x14d0);
    lVar4 = *(longlong *)(lVar39 + 0x2c8);
    local_22c = *(float *)(lVar39 + 0x118);
    fVar41 = *(float *)(lVar39 + 0x11c);
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 22.0 + fVar28)),1);
    auVar50 = ZEXT1664(auVar46);
    local_220 = CONCAT44(local_220._4_4_,auVar46._0_4_ * fVar28 + fVar41);
    local_180 = (float *)CONCAT44(local_180._4_4_,DAT_180b0a458);
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.6 + fVar28)),1);
    auVar46 = vmaxss_avx(auVar55._0_16_,auVar46);
    auVar51 = ZEXT1664(auVar46);
    local_234 = fVar35;
    lVar39 = FUN_1804e97d0(DAT_180c62cb0,auVar46._0_8_,0xbf800000);
    lVar23 = FUN_1804e95f0(lVar39,0x48);
    if (lVar23 == 0) {
      fVar49 = auVar51._0_4_ * fVar28;
    }
    else {
      fVar49 = (*(float *)(lVar23 + 0x14) - *(float *)(lVar23 + 0xc)) *
               (auVar51._0_4_ / *(float *)(lVar39 + 0x14));
    }
    local_190 = (int *)CONCAT44((float)local_220 - fVar49 * fVar28,local_22c);
    local_268 = (char *)0x0;
    local_270 = "Saved colors";
    local_278 = (float **)CONCAT44(local_278._4_4_,(float)local_180);
    fVar49 = local_22c;
    FUN_180463450(lVar4,uVar56,0x4159999a,&local_190);
    local_1d0 = (fVar44 + fVar49) - DAT_180b0a41c * 43.0;
    local_1cc = fVar41 + DAT_180b0a41c * 2.0;
    local_1a0 = (int *)CONCAT44((fVar41 + auVar50._0_4_) - DAT_180b0a41c * 2.0,fVar44 + fVar49);
    plVar40 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
    uVar13 = ~*(uint *)(plVar40[0x22] + -4 + (longlong)(int)plVar40[0x21] * 4);
    pcVar25 = "##save_current_color";
    cVar11 = '#';
    uVar34 = uVar13;
    do {
      pcVar25 = pcVar25 + 1;
      if (((cVar11 == '#') && (*pcVar25 == '#')) && (pcVar25[1] == '#')) {
        pcVar25 = pcVar25 + 2;
        uVar34 = uVar13;
      }
      else {
        uVar34 = crc32(uVar34,cVar11);
      }
      cVar11 = *pcVar25;
    } while (cVar11 != '\0');
    uVar34 = ~uVar34;
    if (*(uint *)(*plVar40 + 0x1534) == uVar34) {
      FUN_1804cf810(uVar34,0xb,"##save_current_color");
    }
    local_278 = (float **)CONCAT71(local_278._1_7_,1);
    pcVar25 = (char *)FUN_1804aad60(local_228,uVar34,&local_1d0,&local_1a0);
    local_237 = pcVar25[2];
    uVar45 = DAT_180b0a434;
    if (*pcVar25 != '\0') {
      uVar45 = DAT_180b0a418;
    }
    local_270 = (char *)((ulonglong)local_270 & 0xffffffff00000000);
    local_278._0_4_ = DAT_180b0a41c * 5.0;
    FUN_1804df870(lVar4,&local_1d0,&local_1a0,uVar45);
    local_190 = (int *)CONCAT44((float)local_220,DAT_180b0a41c * 9.0 + local_1d0);
    local_278._0_4_ = 8.0;
    fVar41 = (float)local_220;
    FUN_180463dc0(lVar4,&local_190,DAT_180b0a438,&DAT_180858020);
    uVar45 = DAT_180b0a458;
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar53._0_4_ * DAT_180b0a41c + fVar28)),1);
    auVar46 = vmaxss_avx(auVar55._0_16_,auVar46);
    auVar51 = ZEXT1664(auVar46);
    lVar39 = FUN_1804e97d0(local_178,auVar46._0_8_,0xbf800000);
    lVar23 = FUN_1804e95f0(lVar39,0x48);
    if (lVar23 == 0) {
      fVar49 = auVar51._0_4_ * fVar28;
    }
    else {
      fVar49 = (*(float *)(lVar23 + 0x14) - *(float *)(lVar23 + 0xc)) *
               (auVar51._0_4_ / *(float *)(lVar39 + 0x14));
    }
    local_190 = (int *)CONCAT44(fVar41 - fVar49 * fVar28,DAT_180b0a41c * 16.0 + local_1d0);
    local_268 = (char *)0x0;
    local_270 = &DAT_180859520;
    local_278 = (float **)CONCAT44(local_278._4_4_,uVar45);
    FUN_180463450(lVar4,local_178,auVar53._0_8_,&local_190);
    fVar41 = auVar50._0_4_;
    if (local_237 != '\0') {
      if (DAT_180bbb220 == DAT_180bbb224) {
        if (DAT_180bbb224 == 0) {
          iVar12 = 8;
        }
        else {
          iVar12 = DAT_180bbb224 / 2 + DAT_180bbb224;
        }
        iVar26 = DAT_180bbb220 + 1;
        if (DAT_180bbb220 + 1 < iVar12) {
          iVar26 = iVar12;
        }
        FUN_1804aec70(&DAT_180bbb220,iVar26);
        fVar41 = auVar50._0_4_;
      }
      uVar56 = *(undefined8 *)(param_2 + 2);
      puVar1 = (undefined8 *)(DAT_180bbb228 + (longlong)DAT_180bbb220 * 0x10);
      *puVar1 = *(undefined8 *)param_2;
      puVar1[1] = uVar56;
      DAT_180bbb220 = DAT_180bbb220 + 1;
    }
    local_190 = (int *)CONCAT44(DAT_180b0a41c * 5.0 + fVar41,fVar44);
    auVar50 = ZEXT464(0xbf800000);
    FUN_1804c6420(&local_190,auVar50._0_8_);
    fVar41 = *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x118);
    fVar49 = *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x11c);
    local_190._0_4_ = fVar44 + local_22c;
    local_190._4_4_ = fVar49 - DAT_180b0a41c * 4.0;
    local_180 = (float *)CONCAT44(local_190._4_4_,local_22c);
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
    auVar46 = vmaxss_avx(auVar55._0_16_,auVar46);
    local_278 = (float **)CONCAT44(local_278._4_4_,auVar46._0_4_);
    FUN_1804dcf10(lVar4,&local_180,&local_190,DAT_180b0a428);
    lVar39 = local_178;
    uVar34 = DAT_1808da474;
    iVar12 = -1;
    if (DAT_180bbb220 == 0) {
      auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar41 + fVar28)),1);
      local_190 = (int *)CONCAT44(local_190._4_4_,auVar46._0_4_);
      auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar49 + fVar28)),1);
      auVar54 = ZEXT1664(auVar46);
      fVar41 = (float)FUN_1804632d0(local_178,auVar53._0_8_);
      local_190 = (int *)CONCAT44(auVar54._0_4_ - fVar41,(float)local_190);
      auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * auVar53._0_4_ + fVar28)),1);
      auVar46 = vmaxss_avx(auVar55._0_16_,auVar46);
      uVar27 = auVar46._0_8_;
      if ((uVar34 & 0xff000000) != 0) {
        if (lVar39 == 0) {
          lVar39 = *(longlong *)(*(longlong *)(lVar4 + 0x38) + 0x20);
        }
        if (auVar46._0_4_ == auVar52._0_4_) {
          uVar27 = (ulonglong)*(uint *)(*(longlong *)(lVar4 + 0x38) + 0x28);
        }
        local_108 = *(int ***)(lVar4 + 0x60);
        uStack_100 = *(uint **)(lVar4 + 0x68);
        local_250 = 0;
        local_258 = CONCAT44(local_258._4_4_,auVar52._0_4_);
        local_260 = 0;
        local_268 = "No saved colors";
        local_270 = (char *)&local_108;
        local_278 = (float **)CONCAT44(local_278._4_4_,uVar34);
        FUN_1804ea5f0(lVar39,lVar4,uVar27,&local_190);
      }
      local_190 = (int *)CONCAT44(DAT_180b0a41c * 16.0,fVar44);
      FUN_1804c6420(&local_190,auVar50._0_8_);
      FUN_1804aeac0();
    }
    else {
      uVar27 = (longlong)(DAT_180bbb220 + -1 + (int)fVar35) / (longlong)(int)fVar35;
      auVar55 = ZEXT464((uint)(auVar54._0_4_ + auVar57._0_4_));
      local_190 = (int *)CONCAT44(auVar52._0_4_,auVar52._0_4_);
      FUN_1804b2d30(0xe,&local_190);
      FUN_1804b2c00(0x12,DAT_180b0a41c * 4.0);
      FUN_1804b2c00(0x13,DAT_180b0a41c * 3.0);
      lVar39 = DAT_180bb8ae8;
      iVar32 = (int)uVar27;
      iVar26 = 3;
      if (iVar32 < 3) {
        iVar26 = iVar32;
      }
      local_190 = (int *)CONCAT44((float)iVar26 * auVar55._0_4_,fVar44);
      *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
      plVar40 = *(longlong **)(lVar39 + 0x14d0);
      uVar13 = ~*(uint *)(plVar40[0x22] + -4 + (longlong)(int)plVar40[0x21] * 4);
      pcVar25 = "##palette_scroll";
      cVar11 = '#';
      uVar34 = uVar13;
      do {
        pcVar25 = pcVar25 + 1;
        if (((cVar11 == '#') && (*pcVar25 == '#')) && (pcVar25[1] == '#')) {
          pcVar25 = pcVar25 + 2;
          uVar34 = uVar13;
        }
        else {
          uVar34 = crc32(uVar34,cVar11);
        }
        cVar11 = *pcVar25;
      } while (cVar11 != '\0');
      uVar34 = ~uVar34;
      if (*(uint *)(*plVar40 + 0x1534) == uVar34) {
        FUN_1804cf810(uVar34,0xb,"##palette_scroll");
      }
      local_278 = (float **)CONCAT44(local_278._4_4_,0x80);
      cVar11 = FUN_1804bb960("##palette_scroll",uVar34,&local_190,0);
      if (cVar11 != '\0') {
        local_150 = 0;
        uStack_148 = 0;
        uStack_140 = 0;
        uStack_138 = 0;
        local_130 = (undefined1  [16])0x0;
        local_120 = 0;
        auVar53 = ZEXT1664(auVar54._0_16_);
        auVar54 = ZEXT1664(auVar57._0_16_);
        auVar55 = ZEXT1664(auVar55._0_16_);
        auVar52 = ZEXT1664(auVar52._0_16_);
        auVar50 = ZEXT1664(auVar50._0_16_);
        FUN_1804b1d00(&local_150,uVar27 & 0xffffffff);
        cVar11 = FUN_1804b2910(&local_150);
        auVar46 = auVar52._0_16_;
        iVar12 = -1;
        if (cVar11 != '\0') {
          fVar44 = auVar53._0_4_ + auVar54._0_4_;
          fVar41 = local_218;
          iVar12 = -1;
          do {
            local_220 = CONCAT44(local_220._4_4_,(int)local_150);
            if ((int)local_150 < local_150._4_4_) {
              local_190 = (int *)CONCAT44(auVar55._0_4_,fVar41);
              iVar26 = (int)local_150;
              do {
                fVar49 = *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x118);
                uVar45 = *(undefined4 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x11c);
                FUN_1804c6420(&local_190,auVar50._0_8_);
                puVar18 = local_1f8;
                iVar33 = (int)fVar35 * iVar26;
                iVar36 = (int)fVar35 + iVar33;
                iVar32 = DAT_180bbb220;
                if (iVar36 < DAT_180bbb220) {
                  iVar32 = iVar36;
                }
                if (iVar33 < iVar32) {
                  uVar27 = local_1e8 & 0xffffffff;
                  iVar26 = iVar33;
                  iVar32 = iVar12;
                  do {
                    local_178 = CONCAT44(uVar45,(float)(iVar26 - iVar33) * fVar44 + fVar49);
                    uVar38 = (ulonglong)(iVar26 + 300) * -0x61c8864680b583eb ^ uVar27;
                    uVar38 = (uVar38 >> 0x1e ^ uVar38) * -0x40a7b892e31b1a47;
                    uVar38 = (uVar38 >> 0x1b ^ uVar38) * -0x6b2fb644ecceee15;
                    uVar38 = uVar38 >> 0x1f ^ uVar38;
                    local_268 = &local_238;
                    local_270 = (char *)CONCAT71(local_270._1_7_,*(undefined1 *)(puVar18 + 3));
                    local_278 = (float **)param_2;
                    cVar11 = FUN_1804a3610((uint)(uVar38 >> 0x20) ^ (uint)uVar38,&local_178,
                                           auVar54._0_8_,(longlong)iVar26 * 0x10 + DAT_180bbb228);
                    iVar12 = iVar26;
                    if (cVar11 == '\0') {
                      iVar12 = iVar32;
                    }
                    iVar26 = iVar26 + 1;
                    iVar16 = DAT_180bbb220;
                    if (iVar36 < DAT_180bbb220) {
                      iVar16 = iVar36;
                    }
                    iVar32 = iVar12;
                  } while (iVar26 < iVar16);
                  iVar26 = (int)(float)local_220;
                }
                iVar26 = iVar26 + 1;
                local_220 = CONCAT44(local_220._4_4_,iVar26);
                fVar35 = local_234;
              } while (iVar26 < local_150._4_4_);
            }
            cVar11 = FUN_1804b2910(&local_150);
            auVar46 = auVar52._0_16_;
          } while (cVar11 != '\0');
          puVar18 = local_1f8;
        }
        if (local_237 != '\0') {
          lVar39 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
          auVar6 = vmaxss_avx(ZEXT416((uint)*(float *)(lVar39 + 0x5c)),
                              ZEXT416(*(uint *)(DAT_180bb8ae8 + 0xcd8)));
          fVar41 = auVar6._0_4_;
          fVar44 = *(float *)(lVar39 + 0x124) - fVar41;
          *(float *)(lVar39 + 0xac) =
               (float)(int)(((((((*(float *)(lVar39 + 0x124) + *(float *)(lVar39 + 0x14c) + fVar41)
                                - fVar44) + fVar44) - *(float *)(lVar39 + 0x2c)) -
                             *(float *)(lVar39 + 0x74)) - *(float *)(lVar39 + 0x84)) +
                           *(float *)(lVar39 + 0x9c));
          *(undefined4 *)(lVar39 + 0xb4) = 0x3f800000;
          auVar46 = vmaxss_avx(auVar46,ZEXT416((uint)(*(float *)(lVar39 + 0x5c) - fVar41)));
          *(int *)(lVar39 + 0xbc) = auVar46._0_4_;
        }
        FUN_1804b1e70(&local_150);
      }
      FUN_1804bbd00();
      FUN_1804b2de0(3);
      if (-1 < iVar12) {
        lVar39 = (longlong)iVar12 * 0x10 + DAT_180bbb228;
        FUN_18063aed0(lVar39,lVar39 + 0x10,
                      ((longlong)DAT_180bbb220 - (longlong)iVar12) * 0x10 + -0x10);
        DAT_180bbb220 = DAT_180bbb220 + -1;
      }
      FUN_1804aeac0();
    }
  }
  iVar12 = 0;
  if ((*(char *)((longlong)puVar18 + 0x19) != '\0') && (DAT_180bbb220 != 0)) {
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.0 + fVar28)),1);
    auVar52 = ZEXT1664(auVar46);
    auVar6 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 5.0 + fVar28)),1);
    fVar44 = auVar6._0_4_ + auVar46._0_4_;
    iVar26 = (int)((local_210 + auVar6._0_4_) / fVar44);
    if (iVar26 < 2) {
      iVar26 = 1;
    }
    if (DAT_180bbb220 < iVar26) {
      iVar26 = DAT_180bbb220;
    }
    auVar46 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 8.0 + fVar28)),1);
    local_190 = (int *)CONCAT44(auVar46._0_4_,local_210);
    fVar28 = local_210;
    FUN_1804c6420(&local_190,auVar50._0_8_);
    fVar41 = *(float *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x118);
    uVar45 = *(undefined4 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0x11c);
    local_190 = (int *)CONCAT44(auVar52._0_4_,fVar28);
    FUN_1804c6420(&local_190,auVar50._0_8_);
    if (0 < iVar26) {
      do {
        iVar32 = (-400 - iVar26) + iVar12 + 400U + DAT_180bbb220;
        local_190 = (int *)CONCAT44(uVar45,(float)iVar12 * fVar44 + fVar41);
        uVar27 = (ulonglong)(iVar12 + 400U) * -0x61c8864680b583eb ^ (ulonglong)local_198[0];
        uVar27 = (uVar27 >> 0x1e ^ uVar27) * -0x40a7b892e31b1a47;
        uVar27 = (uVar27 >> 0x1b ^ uVar27) * -0x6b2fb644ecceee15;
        uVar27 = uVar27 >> 0x1f ^ uVar27;
        local_268 = &local_238;
        local_270 = (char *)CONCAT71(local_270._1_7_,*(undefined1 *)(puVar18 + 3));
        local_278 = (float **)param_2;
        cVar11 = FUN_1804a3610((uint)(uVar27 >> 0x20) ^ (uint)uVar27,&local_190,auVar52._0_8_,
                               (longlong)iVar32 * 0x10 + DAT_180bbb228);
        if (cVar11 == '\0') {
          iVar32 = (int)(float)local_200;
        }
        iVar12 = iVar12 + 1;
        local_200._0_4_ = (float)iVar32;
      } while (iVar12 < iVar26);
      if (-1 < iVar32) {
        lVar39 = (longlong)iVar32 * 0x10 + DAT_180bbb228;
        FUN_18063aed0(lVar39,lVar39 + 0x10,
                      ((longlong)DAT_180bbb220 - (longlong)iVar32) * 0x10 + -0x10);
        DAT_180bbb220 = DAT_180bbb220 + -1;
      }
    }
  }
}



