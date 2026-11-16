// FUN_1804f7630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804f7630 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804f7630(undefined8 param_1,longlong param_2,longlong param_3,float param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined1 auVar10 [64];
  float fVar11;
  ulonglong uVar12;
  undefined1 auVar13 [64];
  undefined8 uVar14;
  undefined1 auVar15 [64];
  undefined8 uVar16;
  undefined1 auVar17 [64];
  undefined8 uVar18;
  undefined1 auVar19 [64];
  float fVar20;
  float fVar21;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  float *local_138;
  longlong local_130;
  undefined8 local_128;
  undefined4 local_118;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  undefined1 local_f0 [8];
  float fStack_e8;
  float fStack_e4;
  float local_e0;
  float local_dc;
  ulonglong local_d8;
  
  lVar4 = DAT_180bb8ae8;
  local_d8 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  auVar10 = ZEXT864(0);
  lVar1 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  if (param_2 == param_3) {
    fVar11 = 0.0;
    local_fc = *(float *)(DAT_180bb8ae8 + 0x11e0);
  }
  else {
    local_118 = 0;
    local_128 = 0;
    local_148 = CONCAT44(local_148._4_4_,0xbf800000);
    local_140 = param_2;
    local_138 = (float *)param_3;
    local_130 = param_3;
    FUN_1804ea040(&local_100,*(undefined8 *)(DAT_180bb8ae8 + 0x11d0),
                  *(float *)(DAT_180bb8ae8 + 0x11e0),0x7f7fffff);
    fVar11 = (float)(int)((uint)((float)(int)local_100 < local_100) + (int)local_100);
  }
  fVar9 = *(float *)(lVar1 + 0x11c);
  fVar21 = *(float *)(lVar4 + 0xd94);
  fVar8 = *(float *)(lVar4 + 0xd88);
  auVar17 = ZEXT464(*(uint *)(lVar1 + 0x118));
  local_108 = param_4 + fVar11 + fVar21 + fVar21;
  auVar2 = vmaxss_avx(ZEXT416((uint)(*(float *)(lVar4 + 0xd98) + *(float *)(lVar4 + 0xd98) +
                                    local_fc)),ZEXT416((uint)fVar8));
  local_104 = auVar2._0_4_;
  fStack_e8 = (float)*(undefined4 *)(lVar1 + 0x250);
  fStack_e4 = fVar9 + local_104;
  local_100 = (float)(int)((((fVar9 + local_104) - fVar9) - local_fc) * *(float *)(lVar4 + 0xd90) +
                          0.999);
  local_f0 = (undefined1  [8])*(undefined8 *)(lVar1 + 0x118);
  local_f8 = fVar11;
  local_f4 = local_fc;
  FUN_1804c6420(&local_108,local_100);
  cVar6 = FUN_1804c6190(local_f0,0,0,0);
  lVar5 = DAT_180bb8ae8;
  if (cVar6 != '\0') {
    auVar15 = ZEXT464((uint)fStack_e8);
    fVar20 = fStack_e4;
    auVar19 = ZEXT464((uint)((float)(int)((fStack_e4 + (float)local_f0._4_4_) * 0.5) + 1.0));
    auVar2 = vmaxss_avx(auVar10._0_16_,
                        ZEXT416((uint)((fStack_e8 - auVar17._0_4_) - (fVar21 + fVar21))));
    auVar2 = vmaxss_avx(auVar10._0_16_,
                        ZEXT416((uint)(((auVar2._0_4_ - fVar11) - param_4) *
                                      *(float *)(lVar4 + 0xd8c))));
    local_e0 = auVar2._0_4_ + fVar21 + auVar17._0_4_;
    local_dc = fVar9 + local_100;
    *(float *)(lVar1 + 0x120) = local_e0 + fVar11;
    auVar2 = *(undefined1 (*) [16])(lVar5 + 0xf88);
    auVar3 = vshufps_avx(auVar2,auVar2,0xff);
    _local_f0 = auVar2._0_12_;
    fStack_e4 = auVar3._0_4_ * *(float *)(lVar5 + 0xc84);
    uVar7 = FUN_1804b1120(local_f0);
    uVar16 = auVar17._0_8_;
    uVar14 = auVar15._0_8_;
    uVar18 = auVar19._0_8_;
    fVar9 = auVar10._0_4_;
    if (fVar11 <= fVar9) {
      if (*(char *)(lVar4 + 0x2840) != '\0') {
        FUN_1804cda40(&DAT_18085bc28);
        uVar16 = auVar17._0_8_;
        uVar14 = auVar15._0_8_;
        uVar18 = auVar19._0_8_;
        fVar9 = auVar10._0_4_;
      }
      if (fVar9 < fVar8) {
        local_138 = (float *)CONCAT44(local_138._4_4_,0x60000);
        local_140 = CONCAT44(local_140._4_4_,fVar8);
        local_148 = CONCAT44(local_148._4_4_,uVar7);
        FUN_1804dcfb0(*(undefined8 *)(lVar1 + 0x2c8),uVar16,uVar14,uVar18);
      }
    }
    else {
      fVar21 = local_e0 - *(float *)(lVar4 + 0xcd4);
      fVar11 = local_e0 + fVar11 + param_4 + *(float *)(lVar4 + 0xcd4);
      auVar13 = ZEXT464((uint)fVar11);
      uVar12 = (ulonglong)(uint)fVar11;
      if ((auVar17._0_4_ < fVar21) && (fVar9 < fVar8)) {
        local_138 = (float *)CONCAT44(local_138._4_4_,0x60000);
        local_140 = CONCAT44(local_140._4_4_,fVar8);
        local_148 = CONCAT44(local_148._4_4_,uVar7);
        FUN_1804dcfb0(*(undefined8 *)(lVar1 + 0x2c8),uVar16,fVar21,uVar18);
        uVar18 = auVar19._0_8_;
        fVar9 = auVar10._0_4_;
        uVar12 = auVar13._0_8_;
      }
      uVar14 = auVar15._0_8_;
      if (((float)uVar12 < auVar15._0_4_) && (fVar9 < fVar8)) {
        local_138 = (float *)CONCAT44(local_138._4_4_,0x60000);
        local_140 = CONCAT44(local_140._4_4_,fVar8);
        local_148 = CONCAT44(local_148._4_4_,uVar7);
        FUN_1804dcfb0(*(undefined8 *)(lVar1 + 0x2c8),uVar12,uVar14,uVar18);
        uVar14 = auVar15._0_8_;
      }
      lVar5 = DAT_180bb8ae8;
      if (*(char *)(lVar4 + 0x2840) != '\0') {
        *(undefined **)(DAT_180bb8ae8 + 0x2868) = &DAT_18085bc28;
        *(undefined8 *)(lVar5 + 0x2870) = 0;
      }
      local_104 = fVar20 + *(float *)(lVar4 + 0xcd8);
      local_138 = &local_f8;
      local_108 = (float)uVar14;
      local_148 = param_2;
      local_140 = param_3;
      FUN_1804b3be0(*(undefined8 *)(lVar1 + 0x2c8),&local_e0,&local_108,uVar14);
    }
  }
}



