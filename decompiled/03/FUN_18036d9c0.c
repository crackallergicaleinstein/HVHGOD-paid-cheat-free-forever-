// FUN_18036d9c0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18036d9c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18036d9c0(undefined8 param_1,longlong param_2,int param_3)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  float fVar3;
  bool bVar4;
  char cVar5;
  char cVar6;
  short sVar7;
  undefined *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  float *pfVar13;
  uint uVar14;
  ulonglong uVar15;
  float *pfVar16;
  undefined *puVar17;
  float fVar18;
  undefined1 auVar19 [16];
  undefined1 extraout_var [56];
  undefined1 auVar20 [64];
  float fVar21;
  ulonglong uVar22;
  undefined1 auVar23 [64];
  undefined1 auVar24 [16];
  undefined1 auVar25 [64];
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [64];
  undefined1 auVar31 [16];
  undefined1 auVar32 [64];
  undefined1 auVar33 [16];
  undefined1 auVar34 [64];
  float fVar35;
  undefined8 local_168;
  float local_160;
  float local_158 [6];
  longlong local_140;
  undefined8 local_138;
  longlong lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined4 local_118;
  uint uStack_114;
  
  puVar8 = (undefined *)FUN_18036f390();
  puVar17 = &DAT_180bda1f0;
  if (puVar8 != (undefined *)0x0) {
    puVar17 = puVar8;
  }
  uVar14 = *(uint *)(puVar17 + 0x140);
  uVar15 = (ulonglong)uVar14;
  *(uint *)(puVar17 + 0x140) = uVar14 + 1;
  if (7 < uVar14) {
    return;
  }
  uStack_120 = 0;
  local_138 = 0;
  lStack_130 = 0;
  uStack_128 = 0;
  local_118 = 0;
  uStack_114 = uStack_114 & 0xffffff00;
  puVar1 = (undefined8 *)(puVar17 + uVar15 * 0x28);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(ulonglong *)(puVar17 + uVar15 * 0x28 + 0x20) = (ulonglong)uStack_114 << 0x20;
  if (param_2 == 0) {
    return;
  }
  if (param_3 < 1) {
    return;
  }
  AcquireSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  local_138 = _DAT_180bb8890;
  lStack_130 = lRam0000000180bb8898;
  uStack_128 = uRam0000000180bb88a0;
  uStack_120 = uRam0000000180bb88a8;
  ReleaseSRWLockShared((PSRWLOCK)&DAT_180bb88c0);
  cVar6 = DAT_180cc8f70;
  if (lStack_130 == 0) {
    return;
  }
  if (DAT_180cc8de0 == '\0') {
    local_140 = 0;
  }
  else {
    local_140 = DAT_180b90200;
    if (DAT_180b90200 != 0) goto LAB_18036daf7;
  }
  if ((DAT_180cc8e70 == '\0') && (DAT_180cc8f70 == '\0')) {
    return;
  }
LAB_18036daf7:
  lVar11 = local_140;
  lVar9 = FUN_18017ea70();
  *(int *)(lVar9 + 4) = *(int *)(lVar9 + 4) + 1;
  param_2 = (longlong)param_3 * 0x70 + -0x58 + param_2;
  if (param_2 == 0) {
    bVar4 = false;
  }
  else {
    local_168 = 0;
    cVar5 = FUN_1804514f0(&local_168,param_2,8);
    if (cVar5 == '\0') {
      bVar4 = false;
    }
    else {
      bVar4 = true;
    }
  }
  lVar9 = local_168;
  lVar10 = FUN_18017ea70();
  if (*(int *)(lVar10 + 4) != 0) {
    *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
  }
  if ((bVar4) && (lVar9 != 0)) {
    *(longlong *)(puVar17 + uVar15 * 0x28 + 0x10) = lVar9;
    if (lVar11 != 0) {
      lVar11 = FUN_18017ea70();
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
      if (lVar9 + 0xd0 == 0) {
        bVar4 = false;
      }
      else {
        local_168 = 0;
        cVar5 = FUN_1804514f0(&local_168,lVar9 + 0xd0,8);
        if (cVar5 == '\0') {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
      }
      lVar11 = local_168;
      lVar10 = FUN_18017ea70();
      if (*(int *)(lVar10 + 4) != 0) {
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + -1;
      }
      if ((bVar4) && (lVar11 != 0)) {
        lVar10 = FUN_18017ea70();
        local_168 = 0;
        *(int *)(lVar10 + 4) = *(int *)(lVar10 + 4) + 1;
        cVar5 = FUN_1804514f0(&local_168,lVar11,8);
        if (cVar5 == '\0') {
          lStack_130 = (ulonglong)lStack_130._1_7_ << 8;
        }
        else {
          local_138 = local_168;
          lStack_130 = CONCAT71(lStack_130._1_7_,1);
        }
        lVar12 = FUN_18017ea70();
        lVar10 = local_138;
        if (*(int *)(lVar12 + 4) != 0) {
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
        }
        if ((cVar5 != '\0') && (local_138 != 0)) {
          lVar12 = FUN_18017ea70();
          *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + 1;
          cVar5 = FUN_1801fde60(lVar11,&local_140);
          lVar12 = FUN_18017ea70();
          if (*(int *)(lVar12 + 4) != 0) {
            *(int *)(lVar12 + 4) = *(int *)(lVar12 + 4) + -1;
          }
          if (cVar5 != '\0') {
            *(longlong *)(puVar17 + uVar15 * 0x28) = lVar11;
            *(longlong *)(puVar17 + uVar15 * 0x28 + 8) = lVar10;
          }
        }
      }
    }
    if ((DAT_180cc8e70 != '\0') || (cVar6 != '\0')) {
      lVar9 = lVar9 + 0xe8;
      lVar11 = FUN_18017ea70();
      *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
      if (lVar9 == 0) {
        bVar4 = false;
        fVar18 = (float)lStack_130;
      }
      else {
        local_168 = 0;
        local_160 = 0.0;
        cVar5 = FUN_1804514f0(&local_168,lVar9,0xc);
        if (cVar5 == '\0') {
          bVar4 = false;
          fVar18 = (float)lStack_130;
        }
        else {
          bVar4 = true;
          local_138 = local_168;
          fVar18 = local_160;
        }
      }
      lVar11 = FUN_18017ea70();
      if (*(int *)(lVar11 + 4) != 0) {
        *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
      }
      auVar25 = ZEXT464(0x3f800000);
      auVar30 = ZEXT1264(CONCAT84(SUB128(ZEXT812(0),4),(float)DAT_180cc8ed8 / 255.0));
      auVar32 = ZEXT464((uint)((float)DAT_180cc8ed9 / 255.0));
      auVar34 = ZEXT1264(CONCAT84(SUB128(ZEXT812(0),4),(float)DAT_180cc8eda / 255.0));
      fVar35 = (float)DAT_180cc8fd8 / 255.0;
      fVar28 = (float)DAT_180cc8fda / 255.0;
      fVar27 = (float)DAT_180cc8fd9 / 255.0;
      local_168 = CONCAT44(local_168._4_4_,fVar28);
      local_140 = CONCAT44(local_140._4_4_,fVar27);
      auVar20 = ZEXT864(0);
      if (cVar6 == '\0') {
        fVar26 = 0.0;
      }
      else {
        auVar23 = ZEXT464(DAT_180cc8fe0);
        local_158[4] = 1.0;
        local_158[0] = 0.0;
        local_158[2] = (float)DAT_180cc8fe0;
        sVar7 = thunk_FUN_180624430(DAT_180cc8fe0);
        if (sVar7 < 1) {
          pfVar16 = local_158;
          if (auVar20._0_4_ <= auVar23._0_4_) {
            pfVar16 = local_158 + 2;
          }
          pfVar13 = local_158 + 4;
          if (auVar23._0_4_ <= auVar25._0_4_) {
            pfVar13 = pfVar16;
          }
          fVar26 = *pfVar13;
        }
        else {
          fVar26 = 0.35;
        }
      }
      auVar33 = auVar34._0_16_;
      auVar31 = auVar32._0_16_;
      auVar29 = auVar30._0_16_;
      auVar19 = auVar25._0_16_;
      uVar14 = (uint)CONCAT71(uRam0000000180cc8e71,DAT_180cc8e70);
      auVar24 = auVar19;
      if (DAT_180cc8e70 != '\0') {
        auVar23 = ZEXT464(DAT_180cc8ee4);
        fVar27 = 3.0;
        fVar28 = -3.0;
        local_158[0] = 3.0;
        local_158[4] = -3.0;
        local_158[2] = (float)DAT_180cc8ee4;
        sVar7 = thunk_FUN_180624430(DAT_180cc8ee4);
        uVar22 = auVar20._0_8_;
        if (sVar7 < 1) {
          pfVar16 = local_158 + 4;
          if (fVar28 <= auVar23._0_4_) {
            pfVar16 = local_158 + 2;
          }
          pfVar13 = local_158;
          if (auVar23._0_4_ <= fVar27) {
            pfVar13 = pfVar16;
          }
          uVar22 = (ulonglong)(uint)*pfVar13;
        }
        auVar20._0_8_ = FUN_180615fa0(uVar22);
        auVar33 = auVar34._0_16_;
        auVar31 = auVar32._0_16_;
        auVar29 = auVar30._0_16_;
        auVar20._8_56_ = extraout_var;
        uVar14 = (uint)CONCAT71(uRam0000000180cc8e71,DAT_180cc8e70);
        auVar19 = auVar20._0_16_;
        auVar24 = auVar25._0_16_;
        fVar27 = (float)local_140;
        fVar28 = (float)local_168;
      }
      if (bVar4) {
        fVar3 = auVar24._0_4_ - fVar26;
        auVar2 = vpcmpeqd_avx(ZEXT416(uVar14 & 0xff),SUB6416(ZEXT464(0),0));
        auVar29 = vblendvps_avx(auVar29,auVar24,auVar2);
        fVar21 = auVar19._0_4_;
        auVar19 = vpcmpeqd_avx(ZEXT416(uVar14 & 0xff),SUB6416(ZEXT464(0),0));
        auVar19 = vblendvps_avx(auVar31,auVar24,auVar19);
        auVar31 = vpcmpeqd_avx(ZEXT416(uVar14 & 0xff),SUB6416(ZEXT464(0),0));
        local_168 = CONCAT44((fVar27 * fVar26 + fVar3) * auVar19._0_4_ * local_138._4_4_ * fVar21,
                             (fVar35 * fVar26 + fVar3) * auVar29._0_4_ * (float)local_138 * fVar21);
        auVar19 = vblendvps_avx(auVar33,auVar24,auVar31);
        local_160 = (fVar28 * fVar26 + fVar3) * fVar18 * auVar19._0_4_ * fVar21;
        if (lVar9 != 0) {
          lVar11 = FUN_18017ea70();
          *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + 1;
          cVar6 = FUN_18022ffa0(lVar9,&local_168);
          lVar11 = FUN_18017ea70();
          if (*(int *)(lVar11 + 4) != 0) {
            *(int *)(lVar11 + 4) = *(int *)(lVar11 + 4) + -1;
          }
          if (cVar6 != '\0') {
            *(longlong *)(puVar17 + uVar15 * 0x28 + 0x18) = local_138;
            *(float *)(puVar17 + uVar15 * 0x28 + 0x20) = fVar18;
            puVar17[uVar15 * 0x28 + 0x24] = 1;
          }
        }
      }
    }
  }
  return;
}



