// FUN_180481cc0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180481cc0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180481cc0(longlong param_1,float *param_2)

{
  undefined4 *puVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong *plVar10;
  undefined1 extraout_var [56];
  undefined1 auVar11 [64];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [64];
  float fVar18;
  undefined1 auVar19 [64];
  undefined1 auStack_168 [32];
  undefined *local_148;
  char *local_140;
  undefined8 local_138;
  undefined8 local_128;
  uint *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 auStack_108 [16];
  undefined1 local_f8;
  undefined7 uStack_f7;
  undefined8 uStack_f0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_98 [2];
  undefined4 local_90 [2];
  ulonglong local_88;
  
  local_88 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  fVar16 = DAT_180b0a41c * 463.0 + param_2[1];
  plVar10 = *(longlong **)(DAT_180bb8ae8 + 0x14d0);
  lVar2 = plVar10[0x38];
  auVar12._0_8_ = -(ulonglong)(DAT_180cd6538 == 0);
  auVar12._8_8_ = 0xffffffffffffffff;
  auVar12 = vblendvps_avx(SUB6416(ZEXT464(0x43920000),0),SUB6416(ZEXT464(0x43960000),0),auVar12);
  auVar17 = ZEXT464((uint)(auVar12._0_4_ * DAT_180b0a41c));
  fVar14 = DAT_180b0a41c;
  uVar6 = FUN_1804b0a90("##profile_popup",0,
                        *(undefined4 *)(plVar10[0x22] + -4 + (longlong)(int)plVar10[0x21] * 4));
  if (*(uint *)(*plVar10 + 0x1534) == uVar6) {
    FUN_1804cf810(uVar6,0xb,"##profile_popup");
    fVar14 = DAT_180b0a41c;
  }
  local_90[0] = 2;
  uVar6 = ~uVar6;
  puVar8 = local_90;
  do {
    uVar6 = crc32(uVar6,*puVar8);
    puVar9 = puVar8 + 1;
    puVar1 = puVar8 + 2;
    puVar8 = puVar9;
  } while (puVar1 <= local_90 + 1);
  if (puVar9 < local_90 + 1) {
    do {
      uVar6 = crc32(uVar6,*(undefined1 *)puVar9);
      puVar9 = (undefined4 *)((longlong)puVar9 + 1);
    } while (puVar9 < local_90 + 1);
  }
  auVar19 = ZEXT864(0);
  auVar11._0_8_ = FUN_1804b1470(lVar2,~uVar6,0);
  auVar11._8_56_ = extraout_var;
  auVar12 = vmaxss_avx(auVar11._0_16_,auVar17._0_16_);
  fVar15 = 0.5;
  fVar18 = fVar14 * 48.0 + param_2[1];
  auVar13 = ZEXT416((uint)fVar18);
  fVar16 = fVar16 - auVar12._0_4_ * 0.5;
  if (fVar18 <= fVar16) {
    auVar13 = vminss_avx(ZEXT416((uint)((fVar14 * 475.0 + param_2[1]) - auVar12._0_4_)),
                         ZEXT416((uint)fVar16));
  }
  auVar12 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar14 * 134.5 + 0.5)),1);
  auVar13 = vroundss_avx(ZEXT816(0),auVar13,1);
  local_128 = (undefined **)CONCAT44(auVar13._0_4_,auVar12._0_4_ + *param_2);
  FUN_1804884d0("##profile_popup",&local_128);
  auVar13._0_8_ = -(ulonglong)(DAT_180cd6538 == 0);
  auVar13._8_8_ = 0xffffffffffffffff;
  auVar12 = vblendvps_avx(SUB6416(ZEXT464(0x43660000),0),SUB6416(ZEXT464(0x433e0000),0),auVar13);
  cVar5 = FUN_180488630("##profile_popup",0,auVar12._0_8_);
  lVar2 = DAT_180bb8ae8;
  if (cVar5 != '\0') {
    auVar12 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 54.0 + fVar15)),1);
    *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
    lVar3 = *(longlong *)(lVar2 + 0x14d0);
    uVar4 = *(undefined8 *)(lVar3 + 0x2c8);
    fVar16 = *(float *)(lVar3 + 0x118);
    fVar14 = *(float *)(lVar3 + 0x11c);
    if ((*(longlong *)(lVar3 + 0x1c8) != 0) || (lVar7 = 0x280, *(longlong *)(lVar2 + 0x2338) != 0))
    {
      lVar7 = 0x250;
    }
    local_128 = (undefined **)CONCAT44(auVar12._0_4_,*(float *)(lVar3 + lVar7) - fVar16);
    FUN_1804c6420(&local_128,0xbf800000);
    fVar18 = 1.0;
    local_128 = (undefined **)CONCAT44(DAT_180b0a41c * 6.0 + fVar14,DAT_180b0a41c * 4.0 + fVar16);
    local_148 = (undefined *)CONCAT44(local_148._4_4_,0x3f800000);
    FUN_18047dd00(DAT_180b0a41c * 6.0,uVar4,&local_128,DAT_180b0a41c * 30.0);
    fVar16 = DAT_180b0a41c * 42.0 + fVar16;
    if (DAT_180cd6b78 == 0) {
      local_140 = "x3lay";
    }
    else {
      local_140 = (char *)(**(code **)(*(longlong *)DAT_180cd6b78 + 0x10))();
    }
    local_138 = 0;
    local_128 = (undefined **)CONCAT44(DAT_180b0a41c * 6.0 + fVar14,fVar16);
    local_148 = (undefined *)CONCAT44(local_148._4_4_,DAT_180b0a458);
    FUN_180463450(uVar4,DAT_180c62cb0,0x41600000,&local_128);
    if (DAT_180cd6bb8 == 0) {
      local_140 = "Runtime settings";
    }
    else {
      local_140 = (char *)(**(code **)(*(longlong *)DAT_180cd6bb8 + 0x10))();
    }
    local_138 = 0;
    local_128 = (undefined **)CONCAT44(DAT_180b0a41c * 22.0 + fVar14,fVar16);
    local_148 = (undefined *)CONCAT44(local_148._4_4_,DAT_1808da478);
    FUN_180463450(uVar4,DAT_180c62ca8,0x41533333,&local_128);
    if (DAT_180cd6538 == 0) {
      local_98[0] = 0;
      if (0.001 < ABS(DAT_180b0a41c - *(float *)(param_1 + 0x71d4))) {
        local_98[0] = (uint)(ABS(DAT_180b0a41c - 0.75) < 0.001);
        if (ABS(DAT_180b0a41c - fVar18) < 0.001) {
          local_98[0] = 2;
        }
        if (ABS(DAT_180b0a41c - 1.25) < 0.001) {
          local_98[0] = 3;
        }
        if (ABS(DAT_180b0a41c - 1.5) < 0.001) {
          local_98[0] = 4;
        }
        if (ABS(DAT_180b0a41c - 1.75) < 0.001) {
          local_98[0] = 5;
        }
        if (ABS(DAT_180b0a41c - 2.0) < 0.001) {
          local_98[0] = 6;
        }
        if (ABS(DAT_180b0a41c - 2.5) < 0.001) {
          local_98[0] = 7;
        }
      }
      local_120 = local_98;
      local_128 = (undefined **)param_1;
      FUN_180488c60();
      FUN_180482320(&local_128);
      FUN_180488f10();
      FUN_180488c60();
      local_128 = &PTR_s_Automatic_180799368;
      local_140 = (char *)&local_d8;
      auStack_108 = ZEXT816(0);
      local_118 = 0;
      uStack_110 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
      uStack_c8 = 0;
      uStack_c0 = 0;
      auVar12 = vunpcklps_avx(auVar19._0_16_,auVar19._0_16_);
      local_f8 = 1;
      uStack_f0 = 0;
      local_b8 = CONCAT71(uStack_f7,1);
      local_a8 = auVar12._0_8_;
      uStack_b0 = 0;
      local_120 = (uint *)0x3;
      local_148 = &DAT_18082a264;
      FUN_18048d220("Safe Mode",param_1 + 0x719c,&local_128,1);
      local_140 = (char *)0x0;
      local_148 = (undefined *)((ulonglong)local_148 & 0xffffffffffffff00);
      FUN_1804898a0("Synchronization",param_1 + 0x71a0,&DAT_180830b50,1);
      FUN_180488f10();
      FUN_180488c60();
      FUN_18048b0e0("About",&DAT_180830b4c,1);
      FUN_18048b0e0(&DAT_180830d74,&DAT_180830b48,1);
      FUN_180488f10();
    }
    else {
      (**(code **)(*(longlong *)DAT_180cd6538 + 0x10))(DAT_180cd6538,param_1,param_2);
    }
    FUN_1804aeac0();
  }
}



