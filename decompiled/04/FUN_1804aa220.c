// FUN_1804aa220 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804aa220 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804aa220(longlong param_1,float *param_2,float *param_3,undefined8 param_4,float param_5,
                  undefined8 param_6,undefined8 param_7,longlong param_8,float param_9,
                  ulonglong param_10,longlong *param_11)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  float fVar16;
  undefined1 auVar17 [64];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  undefined1 auVar23 [64];
  float fVar24;
  float fVar25;
  undefined1 auStack_1e8 [32];
  undefined4 *local_1c8;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1a8;
  float *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  undefined8 local_178;
  longlong lStack_170;
  uint *local_168;
  float *local_160;
  undefined8 *local_158;
  uint *local_150;
  float *local_148;
  longlong *local_140;
  float *local_138;
  longlong local_130;
  undefined8 local_128;
  float local_120;
  uint local_11c [2];
  float local_114;
  float local_110 [2];
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_1808d5f00 ^ (ulonglong)auStack_1e8;
  fVar16 = DAT_180b0a41c * 4.0;
  local_1a8 = param_2;
  local_1a0 = param_3;
  local_130 = param_1;
  uVar6 = FUN_180462ad0(DAT_1808da480,DAT_180b0a52c,param_4);
  fVar20 = (float)param_4;
  local_1c0 = (ulonglong)local_1c0._4_4_ << 0x20;
  local_1c8 = (undefined4 *)CONCAT44(local_1c8._4_4_,fVar16);
  FUN_1804df870(param_1,param_2,param_3,uVar6);
  fVar21 = 0.5;
  fVar24 = (param_2[1] + param_3[1]) * 0.5;
  auVar19 = ZEXT864(0);
  fVar25 = *param_3 - DAT_180b0a41c * 9.0;
  local_11c[1] = 0x41533333;
  local_128 = DAT_180c62ca8;
  fVar12 = DAT_180b0a41c * 0.0;
  fVar11 = (float)FUN_180463350();
  lVar5 = local_130;
  uVar8 = DAT_180b0a47c;
  fVar16 = *param_2;
  auVar18 = ZEXT464(0x3f800000);
  local_110[0] = (fVar24 - fVar11 * fVar21) + fVar12;
  if ((param_11 == (longlong *)0x0) || (*param_11 == 0)) {
    auVar15._0_8_ = -(ulonglong)(param_10 == 0);
    auVar15._8_8_ = 0xffffffffffffffff;
    auVar15 = vblendvps_avx(SUB6416(ZEXT464(0x41900000),0),auVar19._0_16_,auVar15);
    local_120 = (auVar15._0_4_ + 5.5) * DAT_180b0a41c + fVar16;
    if (param_11 != (longlong *)0x0) goto LAB_1804aa3ec;
  }
  else {
    local_120 = DAT_180b0a41c * 35.5 + fVar16;
LAB_1804aa3ec:
    lVar2 = *param_11;
    if (lVar2 != 0) {
      auVar15 = vminss_avx(ZEXT416((uint)((DAT_180b0a41c * 24.0) / *(float *)(param_11 + 1))),
                           ZEXT416((uint)((DAT_180b0a41c * 13.0) /
                                         *(float *)((longlong)param_11 + 0xc))));
      fVar16 = DAT_180b0a41c * 18.0 + fVar16;
      local_180 = auVar15._0_4_ * *(float *)(param_11 + 1) * fVar21;
      local_17c = auVar15._0_4_ * *(float *)((longlong)param_11 + 0xc) * fVar21;
      local_188 = local_180 + fVar16;
      local_184 = local_17c + fVar24;
      local_180 = fVar16 - local_180;
      local_17c = fVar24 - local_17c;
      local_198 = 0x3f800000;
      local_194 = 0x3f800000;
      local_190 = auVar19._0_4_;
      local_18c = local_190;
      if ((DAT_180b0a47c & 0xff000000) != 0) {
        if ((lVar2 == *(longlong *)(local_130 + 0x78)) && (*(longlong *)(local_130 + 0x70) == 0)) {
          bVar4 = false;
        }
        else {
          piVar1 = (int *)(local_130 + 0xb0);
          local_178 = 0;
          iVar7 = *(int *)(local_130 + 0xb4);
          bVar4 = true;
          lStack_170 = lVar2;
          if (*piVar1 == iVar7) {
            iVar9 = *piVar1 + 1;
            if (iVar7 == 0) {
              iVar7 = 8;
            }
            else {
              iVar7 = iVar7 / 2 + iVar7;
            }
            if (iVar9 < iVar7) {
              iVar9 = iVar7;
            }
            FUN_1804aec70(piVar1,iVar9);
          }
          iVar7 = *piVar1;
          lVar3 = *(longlong *)(lVar5 + 0xb8);
          *(undefined8 *)(lVar3 + (longlong)iVar7 * 0x10) = 0;
          *(longlong *)(lVar3 + 8 + (longlong)iVar7 * 0x10) = lVar2;
          *piVar1 = *piVar1 + 1;
          *(undefined8 *)(lVar5 + 0x70) = local_178;
          *(longlong *)(lVar5 + 0x78) = lStack_170;
          FUN_1804d92c0(lVar5);
        }
        FUN_1804d9590(lVar5,6,4);
        local_1c8 = &local_198;
        local_1c0 = CONCAT44(local_1c0._4_4_,uVar8);
        FUN_1804d97d0(lVar5,&local_180,&local_188,&local_190);
        if (bVar4) {
          FUN_1804d9530(lVar5);
        }
      }
      param_3 = local_1a0;
      goto LAB_1804aa56d;
    }
  }
  if (param_10 != 0) {
    local_1c0 = param_10;
    local_1a8 = (float *)CONCAT44(fVar24,DAT_180b0a41c * 11.0 + fVar16);
    local_1c8 = (undefined4 *)CONCAT44(local_1c8._4_4_,DAT_180b0a47c);
    FUN_180463b40(local_130,DAT_180c62cc0,0x41300000,&local_1a8);
  }
LAB_1804aa56d:
  auVar23 = ZEXT464((uint)(fVar20 * fVar21));
  local_114 = fVar25 - DAT_180b0a41c * 7.2;
  uVar8 = FUN_180462ad0(DAT_180b0a47c,DAT_180b0a424,fVar20 * fVar21);
  fVar16 = 255.0;
  auVar13._0_4_ = (float)(uVar8 >> 0x18) / 255.0;
  auVar13._4_8_ = SUB128(ZEXT812(0),4);
  auVar13._12_4_ = 0;
  if (auVar19._0_4_ <= auVar13._0_4_) {
    auVar15 = vminss_avx(auVar18._0_16_,auVar13);
    fVar12 = auVar15._0_4_;
  }
  else {
    fVar12 = 0.0;
  }
  local_11c[0] = (int)(longlong)(fVar12 * 255.0 + fVar21) << 0x18 | uVar8 & 0xffffff;
  local_168 = local_11c;
  local_160 = &local_120;
  local_158 = &local_128;
  local_150 = local_11c + 1;
  local_148 = &local_114;
  local_140 = &local_130;
  local_138 = local_110;
  if ((param_8 == 0) || (fVar12 = auVar18._0_4_, fVar12 <= param_9)) {
    FUN_1804aa8b0(&local_168,param_6,0,auVar18._0_8_);
    uVar22 = auVar23._0_8_;
  }
  else {
    fVar11 = (fVar12 - param_9) * (fVar12 - param_9);
    auVar17 = ZEXT464((uint)(fVar12 - fVar11));
    FUN_1804d9420(local_130,fVar11,param_3,1);
    fVar11 = 8.0;
    fVar12 = auVar18._0_4_ - auVar17._0_4_;
    FUN_1804aa8b0(&local_168,param_8,DAT_180b0a41c * 8.0 * -auVar17._0_4_,fVar12);
    FUN_1804aa8b0(&local_168,param_6,fVar11 * DAT_180b0a41c * fVar12,auVar17._0_8_);
    iVar7 = *(int *)(local_130 + 0xa0);
    iVar9 = iVar7 + -1;
    *(int *)(local_130 + 0xa0) = iVar9;
    if (iVar9 == 0) {
      uVar22 = *(undefined8 *)(*(longlong *)(local_130 + 0x38) + 0x44);
      *(undefined8 *)(local_130 + 0x60) = *(undefined8 *)(*(longlong *)(local_130 + 0x38) + 0x3c);
      *(undefined8 *)(local_130 + 0x68) = uVar22;
      FUN_1804d9200();
      uVar22 = auVar23._0_8_;
    }
    else {
      puVar10 = (undefined8 *)((longlong)(iVar7 + -2) * 0x10 + *(longlong *)(local_130 + 0xa8));
      uVar22 = puVar10[1];
      *(undefined8 *)(local_130 + 0x60) = *puVar10;
      *(undefined8 *)(local_130 + 0x68) = uVar22;
      FUN_1804d9200();
      uVar22 = auVar23._0_8_;
    }
  }
  uVar8 = FUN_180462ad0(DAT_180b0a560,DAT_180b0a424,uVar22);
  auVar14._0_4_ = (float)(uVar8 >> 0x18) / fVar16;
  auVar14._4_12_ = SUB1612(ZEXT816(0),4);
  fVar12 = auVar19._0_4_;
  if (fVar12 <= auVar14._0_4_) {
    auVar15 = vminss_avx(auVar18._0_16_,auVar14);
    fVar12 = auVar15._0_4_;
  }
  local_104 = (auVar18._0_4_ - (param_5 + param_5)) * DAT_180b0a41c * 1.5;
  fVar24 = DAT_180b0a41c * fVar21 * (auVar18._0_4_ - param_5) + fVar24;
  local_fc = fVar24 + local_104;
  local_f8 = DAT_180b0a41c * 2.9 + fVar25;
  local_108 = fVar25 - DAT_180b0a41c * 2.9;
  local_104 = fVar24 - local_104;
  local_1b8 = 0x7f7fffff;
  local_1c0 = local_1c0 & 0xffffffff00000000;
  local_1c8 = (undefined4 *)CONCAT44(local_1c8._4_4_,DAT_180b0a41c * 1.4);
  local_100 = fVar25;
  local_f4 = local_104;
  FUN_1804d9a00(local_130,&local_108,3,
                (int)(longlong)(fVar12 * fVar16 + fVar21) << 0x18 | uVar8 & 0xffffff);
}



