// FUN_180353260 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180353260 */

undefined8 *
FUN_180353260(undefined8 *param_1,ulonglong *param_2,uint *param_3,undefined8 param_4,
             ulonglong param_5)

{
  undefined1 auVar1 [16];
  bool bVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [11];
  char cVar5;
  short sVar6;
  undefined1 (*pauVar7) [16];
  ulonglong uVar8;
  undefined1 uVar9;
  undefined1 auVar10 [16];
  int iVar11;
  undefined1 in_ZMM3 [64];
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auVar15 [64];
  undefined1 auVar16 [64];
  undefined1 local_f8 [16];
  undefined1 local_e8;
  undefined2 uStack_e7;
  undefined1 uStack_e5;
  int iStack_e4;
  undefined1 local_d8 [16];
  uint5 uStack_c8;
  undefined3 uStack_c3;
  ulonglong uStack_c0;
  ulonglong uStack_b8;
  ulonglong uStack_b0;
  ulonglong uStack_a8;
  uint5 uStack_a0;
  undefined3 uStack_9b;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined5 uStack_95;
  undefined1 local_88 [16];
  undefined1 local_78 [8];
  undefined1 local_70 [88];
  
  uVar9 = 0;
  uStack_c8 = (uint5)(uint)uStack_c8;
  local_98 = 0;
  uStack_97 = 0;
  uStack_96 = 0;
  uStack_c0 = *param_2;
  uStack_b8 = param_2[1];
  uStack_b0 = param_2[2];
  uStack_a8 = param_2[3];
  if ((*(char *)((longlong)param_3 + 7) == '\0') &&
     ((((char)param_3[0xc] == '\0' || ((char)param_2[2] == '\0')) ||
      (*(ulonglong *)(param_3 + 10) == param_2[1])))) {
    cVar5 = (char)uStack_c0;
  }
  else {
    cVar5 = '\0';
    uStack_c0 = uStack_c0 & 0xffffffffffffff00;
  }
  if ((((char)param_3[3] == '\0') && (*(char *)((longlong)param_2 + 0x24) != '\0')) &&
     ((uint)param_2[4] == *param_3)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
    if ((((char)*param_2 != '\0') && (*(char *)((longlong)param_2 + 0x1c) != '\0')) &&
       ((((uint)param_2[3] < *param_3 &&
         (((((char)param_3[0xf] != '\0' && ((uint)param_2[3] <= param_3[0xe])) &&
           ((char)param_3[2] != '\0')) &&
          (((char)param_3[0xc] != '\0' && ((char)param_2[2] != '\0')))))) &&
        (*(ulonglong *)(param_3 + 10) == param_2[1])))) {
      cVar5 = '\0';
      uStack_c0 = uStack_c0 & 0xffffffffffffff00;
    }
  }
  uStack_9b = (undefined3)(param_2[4] >> 0x28);
  uStack_a0 = (uint5)(uint)param_2[4];
  if (*(char *)((longlong)param_3 + 5) == '\0') {
    local_98 = 4;
    goto LAB_180353715;
  }
  if (*(char *)((longlong)param_3 + 6) == '\0') {
    local_98 = 5;
    goto LAB_180353715;
  }
  if (*(char *)((longlong)param_3 + 10) == '\0') {
    local_98 = 6;
    goto LAB_180353715;
  }
  if ((*(char *)((longlong)param_3 + 0xb) != '\0') && ((char)param_3[3] == '\0')) {
    local_98 = 7;
    goto LAB_180353715;
  }
  if (*(char *)((longlong)param_3 + 7) != '\0') {
    local_98 = 8;
    goto LAB_180353715;
  }
  if (bVar2) {
    if ((char)param_3[2] == '\0') {
LAB_180353431:
      local_98 = 0x13;
      goto LAB_180353715;
    }
    auVar1 = ZEXT816(0);
    local_f8._0_4_ = 2;
    auVar10 = vinsertps_avx(local_f8,auVar1,0x10);
    auVar10 = vinsertps_avx(auVar10,auVar1,0x20);
    local_88 = vinsertps_avx(auVar10,auVar1,0x30);
    local_78[4] = 1;
    local_78._0_4_ = (uint)CONCAT12(uStack_e5,uStack_e7) << 8;
    local_f8 = local_88;
LAB_180353647:
    uVar9 = uStack_97;
  }
  else {
    local_78[4] = 0;
    if (((char)param_3[0x13] == '\0') && ((char)param_3[0x14] == '\0')) {
LAB_1803534da:
      local_98 = 0x12;
      goto LAB_180353715;
    }
    if (((char)param_3[2] == '\0') &&
       (((char)param_3[0x13] == '\0' || ((float)param_3[0x12] <= 0.0)))) goto LAB_180353431;
    if (cVar5 != '\0') {
      local_98 = 0x14;
      goto LAB_180353715;
    }
    auVar15 = ZEXT864(0);
    auVar16 = ZEXT1664(in_ZMM3._0_16_);
    cVar5 = FUN_1803531c0(param_3);
    if (cVar5 == '\0') {
      local_98 = 0x15;
      goto LAB_180353715;
    }
    fVar12 = (float)param_3[4];
    sVar6 = thunk_FUN_180624430(fVar12);
    if ((0 < sVar6) || (fVar14 = auVar15._0_4_, fVar12 < fVar14)) {
      local_98 = 0x16;
      goto LAB_180353715;
    }
    if ((char)param_3[0x14] == '\0') {
      if ((char)param_3[3] != '\0') goto LAB_1803534da;
      if (((char)param_3[0x13] == '\0') || ((float)param_3[0x10] < 1.0)) goto LAB_1803535ec;
      uVar8 = *(ulonglong *)(param_3 + 0x10);
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar8;
      auVar10 = vshufps_avx(auVar10,auVar10,0x55);
      fVar12 = auVar10._0_4_;
      local_f8._8_4_ = param_3[0x12];
      local_f8._0_8_ = uVar8;
      auVar10 = local_f8;
      if ((fVar12 <= fVar14) ||
         ((local_f8._0_4_ = SUB84(uVar8,0), (float)local_f8._0_4_ < 1.0 ||
          (2.0 / fVar12 + 1.0 <= (float)local_f8._0_4_)))) {
        uStack_96 = 0x17;
LAB_1803535cd:
        iStack_e4 = (uint)iStack_e4._1_3_ << 8;
        local_f8 = auVar10;
      }
      else {
        auVar1 = vmaxss_avx(auVar15._0_16_,auVar16._0_16_);
        fVar13 = auVar1._0_4_;
        if ((((float)local_f8._0_4_ - fVar13) * fVar12 <= 2.0) || (1.0 < fVar13 + 0.015625)) {
          uStack_96 = 0x19;
          goto LAB_1803535cd;
        }
        if (((float)local_f8._0_4_ - 1.0) * fVar12 < 1.0) {
          uStack_96 = 0x1c;
          goto LAB_1803535cd;
        }
        auVar3._4_8_ = local_f8._8_8_;
        auVar3._0_4_ = fVar13;
        local_f8._0_8_ = auVar3._0_8_ << 0x20;
        local_f8._8_4_ = 0x3f800000;
        local_f8._12_4_ = fVar14;
        uStack_96 = 1;
        local_f8._0_4_ = 1;
        local_e8 = 0;
        iStack_e4 = CONCAT31(iStack_e4._1_3_,1);
      }
      local_78 = (undefined1  [8])
                 CONCAT44(iStack_e4,CONCAT13(uStack_e5,CONCAT21(uStack_e7,local_e8)));
      local_88 = local_f8;
    }
    else {
      local_f8._0_4_ = 3;
      auVar10 = vinsertps_avx(local_f8,auVar15._0_16_,0x10);
      local_e8 = 0;
      auVar10 = vinsertps_avx(auVar10,SUB6416(ZEXT464(0x3c800000),0),0x20);
      local_88 = vinsertps_avx(auVar10,SUB6416(ZEXT464(0x3c800000),0),0x30);
      local_78[4] = 1;
      local_78._0_4_ = (uint)CONCAT12(uStack_e5,uStack_e7) << 8;
      local_f8 = local_88;
    }
LAB_1803535ec:
    if ((local_78[4] == '\0') && ((char)param_3[0x13] != '\0')) {
      local_f8._8_4_ = param_3[0x12];
      local_f8._0_8_ = *(undefined8 *)(param_3 + 0x10);
      pauVar7 = (undefined1 (*) [16])
                FUN_180352f70(local_70,local_f8,auVar16._0_8_,param_3[4],&uStack_97);
      local_78 = *(undefined1 (*) [8])pauVar7[1];
      local_88 = *pauVar7;
      goto LAB_180353647;
    }
  }
  auVar4 = (undefined1  [11])local_f8._5_11_;
  local_98 = uVar9;
  if (local_78[4] != '\0') {
    iVar11 = local_88._0_4_;
    if (iVar11 == 3) {
      uVar8 = 4;
      iVar11 = 3;
    }
    else if (iVar11 == 0) {
      uVar8 = (ulonglong)(local_78[0] != '\0') + 5;
    }
    else {
      uVar8 = (ulonglong)(iVar11 == 2) + 2;
    }
    if (param_5 < uVar8) {
      local_98 = 0x1d;
    }
    else {
      local_f8[4] = 1;
      local_f8._0_4_ = *param_3;
      uStack_a8 = local_f8._0_8_;
      uStack_c0 = CONCAT71(uStack_c0._1_7_,1);
      uStack_b8 = *(ulonglong *)(param_3 + 10);
      uStack_b0 = *(ulonglong *)(param_3 + 0xc);
      if (iVar11 == 1) {
        local_f8._0_5_ = 0x100000000;
        local_f8 = CONCAT115(auVar4,local_f8._0_5_);
        local_f8._0_4_ = *param_3 + 1;
        _uStack_a0 = local_f8._0_8_;
      }
      _uStack_c8 = local_78;
      local_98 = 1;
      local_d8 = local_88;
    }
  }
LAB_180353715:
  *param_1 = local_d8._0_8_;
  param_1[1] = local_d8._8_8_;
  param_1[2] = _uStack_c8;
  param_1[3] = uStack_c0;
  param_1[4] = uStack_b8;
  param_1[5] = uStack_b0;
  param_1[6] = uStack_a8;
  param_1[7] = _uStack_a0;
  param_1[8] = CONCAT53(uStack_95,CONCAT12(uStack_96,CONCAT11(uStack_97,local_98)));
  return param_1;
}



