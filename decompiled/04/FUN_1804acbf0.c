// FUN_1804acbf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804acbf0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804acbf0(char *param_1,float *param_2,longlong param_3,float param_4)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  ulonglong uVar9;
  float fVar10;
  undefined1 auVar11 [64];
  undefined1 auVar12 [64];
  float fVar13;
  float fVar14;
  undefined1 auVar15 [64];
  float fVar16;
  undefined1 auVar17 [64];
  undefined1 auStack_148 [32];
  float local_128;
  char *local_120;
  char *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_f8;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  ulonglong local_c0;
  
  lVar7 = DAT_180c62ca8;
  local_c0 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  fVar16 = DAT_180b0a41c * 250.0;
  fVar13 = 0.5;
  auVar12 = ZEXT464(0x3f800000);
  auVar17 = ZEXT464(0x7f7fffff);
  local_f8 = 0;
  local_108 = 0;
  local_110 = 0;
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 11.7 + 0.5)),1);
  local_118 = (char *)0x0;
  auVar2 = vmaxss_avx(auVar12._0_16_,auVar2);
  local_128 = fVar16;
  local_120 = param_1;
  FUN_1804ea040(&local_e0,DAT_180c62ca8,auVar2._0_8_,auVar17._0_8_);
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 16.0 + (float)local_e0 + fVar13)),
                        1);
  auVar2 = vmaxss_avx(ZEXT416((uint)(DAT_180b0a41c * 20.0)),
                      ZEXT416((uint)(DAT_180b0a41c * 14.0 + local_e0._4_4_)));
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar2._0_4_ + fVar13)),1);
  fVar8 = DAT_180b0a41c * 4.0;
  fVar10 = fVar8;
  if (fVar8 <= *param_2) {
    auVar4 = vmaxss_avx(ZEXT416((uint)fVar8),
                        ZEXT416((uint)((*(float *)(DAT_180bb8ae8 + 0x30) - auVar3._0_4_) - fVar8)));
    auVar4 = vminss_avx(auVar4,ZEXT416((uint)*param_2));
    fVar10 = auVar4._0_4_;
  }
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar10 + fVar13)),1);
  fVar10 = (DAT_180b0a41c * 6.0 + *(float *)(param_3 + 4)) - (auVar12._0_4_ - param_4) * fVar8;
  local_c4 = auVar2._0_4_;
  if (*(float *)(DAT_180bb8ae8 + 0x34) - fVar8 < fVar10 + local_c4) {
    fVar10 = (param_2[1] - local_c4) - DAT_180b0a41c * 6.0;
  }
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar10 + fVar13)),1);
  local_cc = auVar2._0_4_;
  local_d0 = auVar4._0_4_;
  local_c4 = local_cc + local_c4;
  local_c8 = local_d0 + auVar3._0_4_;
  lVar6 = FUN_1804b81b0(**(undefined8 **)(DAT_180bb8ae8 + 0x2030),1,"##Foreground");
  fVar10 = 255.0;
  fVar14 = 5.0;
  local_128 = DAT_180b0a41c * 5.0;
  fVar8 = ((float)(DAT_180b0a51c >> 0x18) / 255.0) * param_4;
  auVar11 = ZEXT864(0);
  if (0.0 <= fVar8) {
    auVar2 = vminss_avx(auVar12._0_16_,ZEXT416((uint)fVar8));
    fVar8 = auVar2._0_4_;
  }
  else {
    fVar8 = 0.0;
  }
  local_120 = (char *)((ulonglong)local_120 & 0xffffffff00000000);
  FUN_1804df870(lVar6,&local_d0,&local_c8,
                (int)(longlong)(fVar8 * 255.0 + fVar13) << 0x18 | DAT_180b0a51c & 0xffffff);
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
  auVar2 = vmaxss_avx(auVar12._0_16_,auVar2);
  auVar15 = ZEXT1664(auVar2);
  fVar8 = ((float)(DAT_180b0a428 >> 0x18) / fVar10) * param_4;
  if (auVar11._0_4_ <= fVar8) {
    auVar3 = vminss_avx(auVar12._0_16_,ZEXT416((uint)fVar8));
    fVar8 = auVar3._0_4_;
  }
  else {
    fVar8 = 0.0;
  }
  fVar1 = auVar2._0_4_ * fVar13;
  fVar8 = fVar8 * fVar10 + fVar13;
  local_e8 = fVar1 + local_d0;
  local_e0 = CONCAT44(local_c4 - fVar1,local_c8 - fVar1);
  local_e4 = fVar1 + local_cc;
  uVar5 = DAT_180b0a428 & 0xffffff;
  auVar2 = vmaxss_avx(ZEXT416((uint)(DAT_180b0a41c * fVar14 - fVar1)),auVar11._0_16_);
  local_128 = 0.0;
  FUN_1804dc420(lVar6,&local_e8,&local_e0,auVar2._0_8_);
  local_118 = (char *)CONCAT44(local_118._4_4_,auVar17._0_4_);
  local_120 = (char *)CONCAT44(local_120._4_4_,0x200);
  local_128 = auVar15._0_4_;
  FUN_1804d9a00(lVar6,*(undefined8 *)(lVar6 + 0x58),*(undefined4 *)(lVar6 + 0x50),
                (int)(longlong)fVar8 << 0x18 | uVar5);
  param_4 = ((float)(DAT_180b0a49c >> 0x18) / fVar10) * param_4;
  *(undefined4 *)(lVar6 + 0x50) = 0;
  if (auVar11._0_4_ <= param_4) {
    auVar2 = vminss_avx(auVar12._0_16_,ZEXT416((uint)param_4));
    fVar8 = auVar2._0_4_;
  }
  else {
    fVar8 = 0.0;
  }
  local_e8 = DAT_180b0a41c * 8.0 + local_d0;
  local_e4 = DAT_180b0a41c * 7.0 + local_cc;
  uVar5 = (int)(longlong)(fVar8 * fVar10 + fVar13) << 0x18;
  local_128 = (float)(uVar5 | DAT_180b0a49c & 0xffffff);
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 11.7 + fVar13)),1);
  auVar2 = vmaxss_avx(auVar12._0_16_,auVar2);
  uVar9 = auVar2._0_8_;
  if (((uVar5 != 0) && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
    if (lVar7 == 0) {
      lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x38) + 0x20);
    }
    if (auVar2._0_4_ == auVar11._0_4_) {
      uVar9 = (ulonglong)*(uint *)(*(longlong *)(lVar6 + 0x38) + 0x28);
    }
    local_e0 = *(undefined8 *)(lVar6 + 0x60);
    uStack_d8 = *(undefined8 *)(lVar6 + 0x68);
    local_100 = 0;
    local_120 = (char *)&local_e0;
    local_108 = CONCAT44(local_108._4_4_,fVar16);
    local_110 = 0;
    local_118 = param_1;
    FUN_1804ea5f0(lVar7,lVar6,uVar9,&local_e8);
  }
}



