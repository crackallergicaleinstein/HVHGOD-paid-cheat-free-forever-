// FUN_180340b60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180340b60 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180340b60(undefined2 *param_1,undefined8 *param_2,float *param_3,int param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9,uint param_10,uint param_11,undefined4 param_12,
                  undefined4 param_13,undefined4 param_14,uint param_15,uint param_16)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  char cVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  undefined1 extraout_var [56];
  undefined1 extraout_var_00 [56];
  undefined1 auVar13 [64];
  float fVar14;
  float fVar15;
  undefined1 auVar16 [64];
  undefined1 auVar17 [64];
  undefined4 uVar18;
  undefined1 auVar19 [64];
  undefined1 auStack_1f8 [32];
  undefined8 local_1d8;
  undefined4 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a0;
  undefined4 local_198;
  char local_188;
  int local_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined8 local_160;
  undefined8 local_158;
  float local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  float fStack_124;
  undefined1 local_118 [32];
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  ulonglong local_e0;
  
  local_e0 = DAT_1808d5f00 ^ (ulonglong)auStack_1f8;
  auVar17 = ZEXT464(param_15);
  local_160 = param_6;
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  uVar10 = 1;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 0x26) = 0;
  *(undefined8 *)(param_1 + 0x2a) = 0;
  *(undefined8 *)(param_1 + 0x2e) = 0;
  *(undefined8 *)(param_1 + 0x32) = 0;
  *(undefined8 *)(param_1 + 0x36) = 0;
  *(undefined8 *)(param_1 + 0x3a) = 0;
  *(undefined8 *)(param_1 + 0x3e) = 0;
  *(undefined8 *)(param_1 + 0x42) = 0;
  *(undefined8 *)(param_1 + 0x46) = 0;
  *(undefined8 *)(param_1 + 0x4a) = 0;
  *(undefined8 *)(param_1 + 0x4e) = 0;
  *(undefined8 *)(param_1 + 0x52) = 0;
  *(undefined4 *)(param_1 + 0x56) = 0;
  local_188 = '\0';
  local_f8 = *param_5;
  uStack_f0 = param_5[1];
  local_e8 = param_5[2];
  if (0 < param_4) {
    auVar16 = ZEXT464(param_11);
    auVar19 = ZEXT464(param_10);
    uVar18 = 0x3c800000;
    auVar13 = ZEXT864(0);
    local_184 = param_4;
    while( true ) {
      uVar11 = 0;
      if (((*(int *)((longlong)param_5 + 0x34) != 0) && (local_188 == '\0')) &&
         (*(int *)((longlong)param_5 + 0x34) <= (int)uVar10)) {
        local_f8 = param_5[3];
        uStack_f0 = param_5[4];
        *(float *)(param_2 + 1) = *(float *)(param_5 + 6) + *(float *)(param_2 + 1);
        local_e8 = param_5[5];
        local_188 = '\x01';
      }
      fVar15 = param_3[2];
      if ((DAT_180bbeabf != '\0') && ((int)uVar10 <= (int)param_16)) {
        auVar5 = vunpcklps_avx(ZEXT416((uint)*param_3),ZEXT416((uint)param_3[1]));
        uVar11 = 1;
        local_170 = auVar16._0_4_;
        local_178 = param_12;
        local_174 = param_13;
        local_16c = param_14;
        local_168 = uVar18;
        uVar8 = FUN_18033c760(auVar5._0_8_,auVar17._0_8_,&local_178);
        local_180._0_4_ = (float)uVar8;
        local_180._4_4_ = (float)((ulonglong)uVar8 >> 0x20);
        *param_3 = (float)local_180;
        param_3[1] = local_180._4_4_;
        local_180 = uVar8;
      }
      uVar8 = local_160;
      local_158 = *(undefined8 *)param_3;
      local_150 = param_3[2];
      local_148 = *param_2;
      auVar5 = vpcmpeqd_avx(ZEXT416(uVar11),ZEXT416(0));
      auVar5 = vblendvps_avx(auVar13._0_16_,auVar16._0_16_,auVar5);
      local_1b0 = auVar5._0_4_;
      auVar5 = vpcmpgtd_avx(ZEXT416(uVar10),ZEXT416(param_16));
      auVar5 = vblendvps_avx(auVar17._0_16_,auVar19._0_16_,auVar5);
      local_1b8 = auVar5._0_4_;
      local_140 = *(undefined4 *)(param_2 + 1);
      local_1c8 = param_8;
      local_1d8 = local_160;
      local_1c0 = param_9;
      local_1a8 = param_12;
      local_1a0 = param_13;
      local_198 = param_14;
      puVar9 = (undefined8 *)FUN_18033fef0(local_118,&local_148,&local_158,&local_f8);
      local_138 = *puVar9;
      uVar1 = *(undefined4 *)(puVar9 + 3);
      uStack_128 = (undefined4)puVar9[2];
      fStack_124 = (float)((ulonglong)puVar9[2] >> 0x20);
      uStack_130 = (undefined4)puVar9[1];
      uStack_12c = (undefined4)((ulonglong)puVar9[1] >> 0x20);
      *(ulonglong *)param_3 = CONCAT44(uStack_128,uStack_12c);
      param_3[2] = fStack_124;
      *(byte *)((longlong)param_1 + 1) =
           *(byte *)((longlong)param_1 + 1) | (byte)((uint)uVar1 >> 0x10);
      iVar2 = *(int *)(param_1 + 0x56);
      *param_2 = local_138;
      *(undefined4 *)(param_2 + 1) = uStack_130;
      if (iVar2 < 0xb) {
        *(undefined8 *)(param_1 + (longlong)iVar2 * 6 + 0xe) = local_138;
        *(undefined4 *)(param_1 + (longlong)iVar2 * 6 + 0x12) = uStack_130;
        *(int *)(param_1 + 0x56) = *(int *)(param_1 + 0x56) + 1;
      }
      if (((char)uVar1 == '\0') && ((char)((uint)uVar1 >> 8) == '\0')) {
        bVar12 = false;
        bVar6 = false;
      }
      else {
        local_1d8 = CONCAT44(local_1d8._4_4_,param_9);
        cVar7 = FUN_18033fb20(param_2,&local_f8,uVar8);
        bVar12 = cVar7 != '\0';
        bVar6 = true;
        if (0xb < (int)uVar10) {
          uVar3 = *(undefined4 *)(param_2 + 1);
          *(undefined8 *)(param_1 + 0x50) = *param_2;
          *(undefined4 *)(param_1 + 0x54) = uVar3;
          bVar6 = true;
          *(undefined4 *)(param_1 + 0x56) = 0xc;
        }
      }
      if (((char)uVar1 != '\0') && (bVar12)) {
        fVar14 = param_3[2];
        fVar4 = param_3[1] * param_3[1] + *param_3 * *param_3;
        *(float *)(param_1 + 6) = fVar15;
        *(uint *)(param_1 + 4) = uVar10;
        *(float *)(param_1 + 8) = fVar14;
        if (fVar4 != auVar13._0_4_) {
          if (0.0 <= fVar4) {
            *(float *)(param_1 + 0xc) = SQRT(fVar4);
          }
          auVar17._0_8_ = FUN_18061e150(fVar4);
          auVar17._8_56_ = extraout_var;
          auVar13 = ZEXT1664(auVar17._0_16_);
        }
        *(int *)(param_1 + 0xc) = auVar13._0_4_;
      }
      if (bVar6) break;
      uVar10 = uVar10 + 1;
      if (local_184 < (int)uVar10) {
      }
    }
    fVar14 = param_3[2];
    fVar4 = param_3[1] * param_3[1] + *param_3 * *param_3;
    *(float *)(param_1 + 6) = fVar15;
    *(float *)(param_1 + 8) = fVar14;
    if (fVar4 != auVar13._0_4_) {
      if (fVar4 < 0.0) {
        auVar13._0_8_ = FUN_18061e150(fVar4);
        auVar13._8_56_ = extraout_var_00;
        auVar13 = ZEXT1664(auVar13._0_16_);
      }
      else {
        auVar13 = ZEXT464((uint)SQRT(fVar4));
      }
    }
    *(int *)(param_1 + 0xc) = auVar13._0_4_;
    if ((((bVar12) || (-60.0 < fVar15)) || (fVar14 < -10.0)) || (2.0 < fVar14)) {
      *(uint *)(param_1 + 4) = uVar10;
    }
    else {
      *(undefined1 *)param_1 = 1;
      *(uint *)(param_1 + 2) = uVar10;
    }
  }
}



