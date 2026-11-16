// FUN_180261b90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180261b90 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180261b90(longlong param_1,undefined1 (*param_2) [16],int *param_3,float *param_4,
                  undefined4 *param_5,float param_6,float *param_7,float param_8)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  char cVar3;
  short sVar4;
  float *pfVar5;
  longlong lVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  ulonglong uVar15;
  float fVar16;
  uint uVar17;
  undefined1 auVar18 [64];
  uint uVar19;
  float fVar20;
  uint uVar21;
  undefined1 auVar22 [64];
  undefined1 auVar23 [64];
  undefined1 auVar24 [64];
  undefined1 auVar25 [64];
  undefined1 auVar26 [64];
  undefined1 auVar27 [64];
  uint uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auStack_198 [32];
  float local_178;
  float local_174;
  float local_170;
  float local_168;
  float local_164;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  undefined4 local_13c;
  float local_138 [6];
  undefined1 (*local_120) [16];
  float local_118;
  float fStack_114;
  float local_110;
  float local_108;
  float fStack_104;
  float local_100;
  int *local_f8;
  float *local_f0;
  float *local_e8;
  float *local_e0;
  undefined4 *local_d8;
  ulonglong local_d0;
  
  local_d0 = DAT_1808d5f00 ^ (ulonglong)auStack_198;
  *param_2 = (undefined1  [16])0x0;
  *(undefined8 *)*param_2 = 0;
  *(undefined8 *)(*param_2 + 8) = 0;
  *(undefined8 *)param_2[1] = 0;
  local_13c = 1;
  local_120 = param_2;
  cVar3 = FUN_1802540e0(param_3);
  if (cVar3 == '\0') {
LAB_1802626f0:
    LOCK();
    *(longlong *)(param_1 + 0x120) = *(longlong *)(param_1 + 0x120) + 1;
    UNLOCK();
  }
  fVar9 = *param_4;
  sVar4 = thunk_FUN_180624430(fVar9);
  if (0 < sVar4) goto LAB_1802626f0;
  fVar10 = param_4[1];
  sVar4 = thunk_FUN_180624430(fVar10);
  if (((((0 < sVar4) || (sVar4 = thunk_FUN_180624430(param_4[2]), 0 < sVar4)) ||
       (sVar4 = thunk_FUN_180624430(*param_5), 0 < sVar4)) ||
      ((sVar4 = thunk_FUN_180624430(param_5[1]), 0 < sVar4 ||
       (sVar4 = thunk_FUN_180624430(param_5[2]), 0 < sVar4)))) ||
     (sVar4 = thunk_FUN_180624430(param_5[3]), 0 < sVar4)) goto LAB_1802626f0;
  local_148 = *param_7;
  sVar4 = thunk_FUN_180624430();
  if (0 < sVar4) goto LAB_1802626f0;
  local_140 = param_7[1];
  sVar4 = thunk_FUN_180624430();
  if (0 < sVar4) goto LAB_1802626f0;
  local_144 = param_7[2];
  sVar4 = thunk_FUN_180624430();
  if (((0 < sVar4) || (sVar4 = thunk_FUN_180624430(param_6), 0 < sVar4)) ||
     (sVar4 = thunk_FUN_180624430(param_8), 0 < sVar4)) goto LAB_1802626f0;
  local_138[2] = 1.0;
  auVar18 = ZEXT864(0);
  local_138[0] = 0.0;
  local_138[1] = param_6 / 100.0;
  pfVar5 = local_138;
  if (0.0 <= local_138[1]) {
    pfVar5 = local_138 + 1;
  }
  pfVar7 = local_138 + 2;
  if (local_138[1] <= 1.0) {
    pfVar7 = pfVar5;
  }
  auVar27 = ZEXT464((uint)*pfVar7);
  if (*pfVar7 <= 0.01) {
  }
  fVar11 = (float)param_3[7];
  fVar12 = (float)param_3[6];
  fVar13 = (float)param_3[5];
  fVar14 = ((float)param_3[4] + fVar11) * 0.5;
  fVar16 = ((float)param_3[3] + fVar12) * 0.5;
  fVar8 = ((float)param_3[2] + fVar13) * 0.5;
  local_158 = (float)param_3[2] - fVar8;
  local_154 = (float)param_3[3] - fVar16;
  local_150 = (float)param_3[4] - fVar14;
  pfVar5 = (float *)FUN_180451010(param_5,&local_178,&local_158);
  local_100 = param_4[2] + pfVar5[2];
  fStack_104 = fVar10 + pfVar5[1];
  local_108 = fVar9 + *pfVar5;
  local_158 = fVar13 - fVar8;
  local_154 = fVar12 - fVar16;
  local_150 = fVar11 - fVar14;
  pfVar5 = (float *)FUN_180451010(local_150,&local_178,&local_158);
  fVar11 = param_4[2];
  local_110 = fVar11 + pfVar5[2];
  fStack_114 = fVar10 + pfVar5[1];
  local_118 = fVar9 + *pfVar5;
  lVar6 = FUN_180252d60(&DAT_180c7e1f0,fStack_114,DAT_180cc934c);
  if ((*(char *)(lVar6 + 0x610) == '\0') || ((float)param_3[8] <= 0.001)) {
    fVar13 = local_140;
    fVar12 = local_144;
    fVar14 = local_148;
  }
  else {
    auVar2 = vmaxss_avx(auVar18._0_16_,ZEXT416((uint)(DAT_180cc9378 + param_8)));
    local_148 = auVar2._0_4_;
    fVar12 = param_7[2];
    fVar13 = param_7[1];
    fVar14 = *param_7;
    fVar16 = (fVar9 - fVar14) * (fVar9 - fVar14) + (fVar10 - fVar13) * (fVar10 - fVar13) +
             (fVar11 - fVar12) * (fVar11 - fVar12);
    if (fVar16 == auVar18._0_4_) {
      fVar16 = 0.0;
    }
    else if (fVar16 < 0.0) {
      fVar16 = (float)FUN_18061e150(fVar16);
    }
    else {
      fVar16 = SQRT(fVar16);
    }
    fVar20 = 1.0;
    local_138[5] = 1.0;
    local_138[3] = auVar18._0_4_;
    fVar8 = (float)FUN_180639470(local_148);
    local_138[4] = 0.9 - (fVar8 * fVar16) / (float)param_3[8];
    pfVar5 = local_138 + 3;
    if (auVar18._0_4_ <= local_138[4]) {
      pfVar5 = local_138 + 4;
    }
    pfVar7 = local_138 + 5;
    if (local_138[4] <= fVar20) {
      pfVar7 = pfVar5;
    }
    auVar2 = vminss_avx(ZEXT416((uint)*pfVar7),auVar27._0_16_);
    auVar27 = ZEXT1664(auVar2);
    if (auVar2._0_4_ <= 0.01) {
    }
  }
  local_168 = fVar9 - fVar14;
  local_164 = fVar10 - fVar13;
  local_160 = fVar11 - fVar12;
  FUN_180450e30(&local_168);
  uVar15 = auVar18._0_8_;
  auVar23 = ZEXT464((uint)local_164);
  auVar24 = ZEXT464((uint)local_168);
  fVar9 = local_164 * local_164 + local_168 * local_168;
  if (fVar9 != auVar18._0_4_) {
    if (fVar9 < 0.0) {
      uVar15 = FUN_18061e150(fVar9);
    }
    else {
      uVar15 = (ulonglong)(uint)SQRT(fVar9);
    }
  }
  uVar28 = 0x80000000;
  uVar29 = 0;
  uVar30 = 0;
  fVar9 = (float)FUN_180636c80(-local_160,uVar15);
  auVar22 = ZEXT464((uint)(fVar9 * 57.295776 * 0.017453292));
  fVar9 = (float)FUN_180636c80(auVar23._0_8_,auVar24._0_8_,fVar9 * 57.295776);
  auVar18 = ZEXT464((uint)(fVar9 * 57.295776 * 0.017453292));
  fVar9 = (float)FUN_180638e00(auVar22._0_8_,fVar9 * 57.295776);
  fVar10 = (float)FUN_180637540(auVar22._0_8_);
  fVar11 = (float)FUN_180638e00(auVar18._0_8_);
  fVar12 = (float)FUN_180637540(auVar18._0_8_);
  fVar13 = (float)FUN_180638e00(0);
  fVar14 = (float)FUN_180637540(0);
  local_158 = fVar14 * fVar9 * fVar12 + fVar13 * fVar11;
  auVar26 = ZEXT464((uint)local_158);
  local_154 = fVar14 * fVar9 * fVar11 - fVar13 * fVar12;
  auVar22 = ZEXT464((uint)local_154);
  local_150 = fVar14 * fVar10;
  auVar25 = ZEXT464((uint)local_150);
  local_160 = (float)((uint)((float)((uint)fVar13 ^ uVar28) * fVar10) ^ uVar28);
  auVar24 = ZEXT1664(CONCAT412(uVar30,CONCAT48(uVar29,(ulonglong)(uint)local_160)));
  local_164 = (float)((uint)((float)((uint)fVar13 ^ uVar28) * fVar9 * fVar11 - fVar14 * fVar12) ^
                     uVar28);
  auVar23 = ZEXT1664(CONCAT412(uVar30,CONCAT48(uVar29,(ulonglong)(uint)local_164)));
  local_168 = (float)((uint)(fVar14 * fVar11 - fVar13 * fVar9 * fVar12) ^ uVar28);
  auVar18 = ZEXT1664(CONCAT412(uVar30,CONCAT48(uVar29,(ulonglong)(uint)local_168)));
  local_f0 = &local_118;
  local_e8 = &local_108;
  local_d8 = param_5;
  local_f8 = param_3;
  local_e0 = param_4;
  switch(*param_3) {
  case 0:
    FUN_180265d90(param_2,4);
    FUN_1802627c0(&local_f8,&local_178,&local_168);
    uVar21 = auVar24._0_4_;
    uVar19 = auVar23._0_4_;
    uVar17 = auVar18._0_4_;
    fVar9 = auVar27._0_4_;
    local_170 = (local_170 - param_4[2]) * fVar9 + param_4[2];
    local_174 = (local_174 - param_4[1]) * fVar9 + param_4[1];
    local_178 = (local_178 - *param_4) * fVar9 + *param_4;
    pfVar5 = *(float **)(*param_2 + 8);
    if (pfVar5 == *(float **)param_2[1]) {
      FUN_180241ef0(param_2,pfVar5,&local_178);
      uVar21 = auVar24._0_4_;
      uVar19 = auVar23._0_4_;
      uVar17 = auVar18._0_4_;
    }
    else {
      *pfVar5 = local_178;
      pfVar5[1] = local_174;
      pfVar5[2] = local_170;
      *(longlong *)(*param_2 + 8) = *(longlong *)(*param_2 + 8) + 0xc;
    }
    local_178 = (float)(uVar17 ^ uVar28);
    local_174 = (float)(uVar19 ^ uVar28);
    local_170 = (float)(uVar21 ^ uVar28);
    FUN_1802627c0(&local_f8,&local_168,&local_178);
    fVar9 = auVar27._0_4_;
    local_170 = (local_160 - param_4[2]) * fVar9 + param_4[2];
    local_174 = (local_164 - param_4[1]) * fVar9 + param_4[1];
    local_178 = (local_168 - *param_4) * fVar9 + *param_4;
    pfVar5 = *(float **)(*param_2 + 8);
    if (pfVar5 == *(float **)param_2[1]) {
      FUN_180241ef0(param_2,pfVar5,&local_178);
    }
    else {
      *pfVar5 = local_178;
      pfVar5[1] = local_174;
      pfVar5[2] = local_170;
      *(longlong *)(*param_2 + 8) = *(longlong *)(*param_2 + 8) + 0xc;
    }
    FUN_1802627c0(&local_f8,&local_178,&local_158);
    uVar19 = auVar25._0_4_;
    uVar17 = auVar22._0_4_;
    uVar21 = auVar26._0_4_;
    fVar9 = auVar27._0_4_;
    local_170 = (local_170 - param_4[2]) * fVar9 + param_4[2];
    local_174 = (local_174 - param_4[1]) * fVar9 + param_4[1];
    local_178 = (local_178 - *param_4) * fVar9 + *param_4;
    pfVar5 = *(float **)(*param_2 + 8);
    if (pfVar5 == *(float **)param_2[1]) {
      FUN_180241ef0(param_2,pfVar5,&local_178);
      uVar19 = auVar25._0_4_;
      uVar17 = auVar22._0_4_;
      uVar21 = auVar26._0_4_;
    }
    else {
      *pfVar5 = local_178;
      pfVar5[1] = local_174;
      pfVar5[2] = local_170;
      *(longlong *)(*param_2 + 8) = *(longlong *)(*param_2 + 8) + 0xc;
    }
    local_178 = (float)(uVar21 ^ uVar28);
    local_174 = (float)(uVar17 ^ uVar28);
    local_170 = (float)(uVar19 ^ uVar28);
    break;
  default:
    FUN_180265d90(param_2,2);
    FUN_1802627c0(&local_f8,&local_178,&local_168);
    uVar19 = auVar23._0_4_;
    uVar21 = auVar24._0_4_;
    uVar17 = auVar18._0_4_;
    fVar9 = auVar27._0_4_;
    local_170 = (local_170 - param_4[2]) * fVar9 + param_4[2];
    local_174 = (local_174 - param_4[1]) * fVar9 + param_4[1];
    pfVar5 = *(float **)(*param_2 + 8);
    local_178 = (local_178 - *param_4) * fVar9 + *param_4;
    if (pfVar5 == *(float **)param_2[1]) {
      FUN_180241ef0(param_2,pfVar5,&local_178);
      uVar19 = auVar23._0_4_;
      uVar21 = auVar24._0_4_;
      uVar17 = auVar18._0_4_;
    }
    else {
      *pfVar5 = local_178;
      pfVar5[1] = local_174;
      pfVar5[2] = local_170;
      *(longlong *)(*param_2 + 8) = *(longlong *)(*param_2 + 8) + 0xc;
    }
    local_178 = (float)(uVar17 ^ uVar28);
    local_170 = (float)(uVar21 ^ uVar28);
    local_174 = (float)(uVar19 ^ uVar28);
    break;
  case 4:
  case 5:
  case 6:
    FUN_180265d90(param_2,3);
    FUN_1802627c0(&local_f8,&local_178,&local_168);
    uVar21 = auVar24._0_4_;
    uVar19 = auVar23._0_4_;
    uVar17 = auVar18._0_4_;
    fVar9 = auVar27._0_4_;
    local_168 = (local_178 - *param_4) * fVar9 + *param_4;
    local_164 = (local_174 - param_4[1]) * fVar9 + param_4[1];
    local_160 = (local_170 - param_4[2]) * fVar9 + param_4[2];
    pfVar5 = *(float **)(*param_2 + 8);
    if (pfVar5 == *(float **)param_2[1]) {
      FUN_180241ef0(param_2,pfVar5,&local_168);
      uVar21 = auVar24._0_4_;
      uVar19 = auVar23._0_4_;
      uVar17 = auVar18._0_4_;
    }
    else {
      *pfVar5 = local_168;
      pfVar5[1] = local_164;
      pfVar5[2] = local_160;
      *(longlong *)(*param_2 + 8) = *(longlong *)(*param_2 + 8) + 0xc;
    }
    local_178 = (float)(uVar17 ^ uVar28);
    local_174 = (float)(uVar19 ^ uVar28);
    local_170 = (float)(uVar21 ^ uVar28);
    FUN_1802627c0(&local_f8,&local_168,&local_178);
    fVar9 = auVar27._0_4_;
    local_170 = (local_160 - param_4[2]) * fVar9 + param_4[2];
    local_174 = (local_164 - param_4[1]) * fVar9 + param_4[1];
    local_178 = (local_168 - *param_4) * fVar9 + *param_4;
    pfVar5 = *(float **)(*param_2 + 8);
    if (pfVar5 == *(float **)param_2[1]) {
      FUN_180241ef0(param_2,pfVar5,&local_178);
    }
    else {
      *pfVar5 = local_178;
      pfVar5[1] = local_174;
      pfVar5[2] = local_170;
      *(longlong *)(*param_2 + 8) = *(longlong *)(*param_2 + 8) + 0xc;
    }
    if (*param_3 != 6) {
    }
    FUN_1802627c0(&local_f8,&local_178,&local_158);
    fVar9 = auVar27._0_4_;
    local_170 = (local_170 - param_4[2]) * fVar9;
    local_174 = local_174 - param_4[1];
    goto LAB_180262694;
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
    FUN_180265d90(param_2,2);
    puVar1 = *(undefined8 **)(*param_2 + 8);
    if (puVar1 == *(undefined8 **)param_2[1]) {
      FUN_180241ef0(param_2,puVar1,&local_108);
    }
    else {
      *puVar1 = CONCAT44(fStack_104,local_108);
      *(float *)(puVar1 + 1) = local_100;
      *(longlong *)(*param_2 + 8) = *(longlong *)(*param_2 + 8) + 0xc;
    }
    goto LAB_180262561;
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
    FUN_180265d90(param_2,1);
LAB_180262561:
    puVar1 = *(undefined8 **)(*param_2 + 8);
    if (puVar1 == *(undefined8 **)param_2[1]) {
      FUN_180241ef0(param_2,puVar1,&local_118);
    }
    *puVar1 = CONCAT44(fStack_114,local_118);
    *(float *)(puVar1 + 1) = local_110;
    *(longlong *)(*param_2 + 8) = *(longlong *)(*param_2 + 8) + 0xc;
  }
  FUN_1802627c0(&local_f8,&local_158,&local_178);
  fVar9 = auVar27._0_4_;
  local_170 = (local_150 - param_4[2]) * fVar9;
  local_174 = local_154 - param_4[1];
  local_178 = local_158;
LAB_180262694:
  local_170 = local_170 + param_4[2];
  local_174 = local_174 * fVar9 + param_4[1];
  pfVar5 = *(float **)(*param_2 + 8);
  local_178 = (local_178 - *param_4) * fVar9 + *param_4;
  if (pfVar5 == *(float **)param_2[1]) {
    FUN_180241ef0(param_2,pfVar5,&local_178);
  }
  else {
    *pfVar5 = local_178;
    pfVar5[1] = local_174;
    pfVar5[2] = local_170;
    *(longlong *)(*param_2 + 8) = *(longlong *)(*param_2 + 8) + 0xc;
  }
}



