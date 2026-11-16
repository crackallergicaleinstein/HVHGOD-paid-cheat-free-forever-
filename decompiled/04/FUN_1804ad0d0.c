// FUN_1804ad0d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804ad0d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804ad0d0(char *param_1,float param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [64];
  float fVar11;
  undefined1 auVar12 [64];
  float fVar13;
  undefined1 auVar14 [64];
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
  
  local_c0 = DAT_1808d5f00 ^ (ulonglong)auStack_148;
  lVar6 = FUN_1804b81b0(**(undefined8 **)(DAT_180bb8ae8 + 0x2030),1,"##Foreground");
  lVar7 = DAT_180c62cb0;
  auVar12 = ZEXT864(0);
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  else {
    param_2 = param_2 * DAT_180b0a41c;
  }
  fVar13 = 0.5;
  auVar14 = ZEXT464(0x3f800000);
  local_f8 = 0;
  local_108 = 0;
  local_110 = 0;
  auVar9 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.2 + 0.5)),1);
  local_118 = (char *)0x0;
  auVar9 = vmaxss_avx(auVar14._0_16_,auVar9);
  local_128 = param_2;
  local_120 = param_1;
  FUN_1804ea040(&local_e0,DAT_180c62cb0,auVar9._0_8_,0x7f7fffff);
  auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 14.0 + (float)local_e0 + fVar13)),
                        1);
  auVar9 = vmaxss_avx(ZEXT416((uint)(DAT_180b0a41c * 21.0)),
                      ZEXT416((uint)(DAT_180b0a41c * 12.0 + local_e0._4_4_)));
  auVar2 = vroundss_avx(ZEXT816(0),
                        ZEXT416((uint)((*(float *)(DAT_180bb8ae8 + 0x110) - DAT_180b0a41c * 2.0) +
                                      fVar13)),1);
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(auVar9._0_4_ + fVar13)),1);
  local_c8 = auVar1._0_4_;
  fVar11 = auVar2._0_4_ - local_c8;
  auVar9 = ZEXT416((uint)fVar11);
  auVar1 = vroundss_avx(ZEXT816(0),
                        ZEXT416((uint)((*(float *)(DAT_180bb8ae8 + 0x114) - DAT_180b0a41c) + fVar13)
                               ),1);
  local_cc = DAT_180b0a41c * 4.0;
  local_c4 = auVar3._0_4_;
  fVar4 = auVar1._0_4_ - local_c4;
  if (fVar11 < local_cc) {
    auVar9 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(DAT_180b0a41c * 14.0 + *(float *)(DAT_180bb8ae8 + 0x110) +
                                        fVar13)),1);
  }
  if (auVar12._0_4_ <= DAT_1808e4f80) {
    auVar9 = vminss_avx(auVar9,ZEXT416((uint)(DAT_1808e4f80 - local_c8)));
  }
  local_d0 = local_cc;
  if (local_cc <= auVar9._0_4_) {
    auVar1 = vmaxss_avx(ZEXT416((uint)local_cc),
                        ZEXT416((uint)((*(float *)(DAT_180bb8ae8 + 0x30) - local_c8) - local_cc)));
    auVar9 = vminss_avx(auVar1,auVar9);
    local_d0 = auVar9._0_4_;
  }
  if (local_cc <= fVar4) {
    auVar9 = vmaxss_avx(ZEXT416((uint)local_cc),
                        ZEXT416((uint)((*(float *)(DAT_180bb8ae8 + 0x34) - local_c4) - local_cc)));
    auVar9 = vminss_avx(auVar9,ZEXT416((uint)fVar4));
    local_cc = auVar9._0_4_;
  }
  fVar11 = DAT_180b0a41c * 5.0;
  local_c8 = local_d0 + local_c8;
  local_c4 = local_cc + local_c4;
  local_120 = (char *)((ulonglong)local_120 & 0xffffffff00000000);
  local_128 = fVar11;
  FUN_1804df870(lVar6,&local_d0,&local_c8,DAT_180b0a51c);
  uVar5 = DAT_180b0a428;
  auVar9 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
  auVar9 = vmaxss_avx(auVar14._0_16_,auVar9);
  auVar10 = ZEXT1664(auVar9);
  fVar4 = auVar9._0_4_ * fVar13;
  local_e8 = fVar4 + local_d0;
  local_e0 = CONCAT44(local_c4 - fVar4,local_c8 - fVar4);
  local_e4 = fVar4 + local_cc;
  auVar9 = vmaxss_avx(ZEXT416((uint)(fVar11 - fVar4)),auVar12._0_16_);
  local_128 = 0.0;
  FUN_1804dc420(lVar6,&local_e8,&local_e0,auVar9._0_8_);
  local_118 = (char *)CONCAT44(local_118._4_4_,0x7f7fffff);
  local_120 = (char *)CONCAT44(local_120._4_4_,0x200);
  local_128 = auVar10._0_4_;
  FUN_1804d9a00(lVar6,*(undefined8 *)(lVar6 + 0x58),*(undefined4 *)(lVar6 + 0x50),uVar5);
  local_128 = (float)DAT_180b0a49c;
  fVar11 = DAT_180b0a41c;
  local_e8 = DAT_180b0a41c * 7.0;
  *(undefined4 *)(lVar6 + 0x50) = 0;
  local_e8 = local_e8 + local_d0;
  local_e4 = fVar11 * 6.0 + local_cc;
  auVar9 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar11 * 13.2 + fVar13)),1);
  auVar9 = vmaxss_avx(auVar14._0_16_,auVar9);
  uVar8 = auVar9._0_8_;
  if (((((uint)local_128 & 0xff000000) != 0) && (param_1 != (char *)0x0)) && (*param_1 != '\0')) {
    if (lVar7 == 0) {
      lVar7 = *(longlong *)(*(longlong *)(lVar6 + 0x38) + 0x20);
    }
    if (auVar9._0_4_ == auVar12._0_4_) {
      uVar8 = (ulonglong)*(uint *)(*(longlong *)(lVar6 + 0x38) + 0x28);
    }
    local_e0 = *(undefined8 *)(lVar6 + 0x60);
    uStack_d8 = *(undefined8 *)(lVar6 + 0x68);
    local_100 = 0;
    local_120 = (char *)&local_e0;
    local_108 = CONCAT44(local_108._4_4_,param_2);
    local_110 = 0;
    local_118 = param_1;
    FUN_1804ea5f0(lVar7,lVar6,uVar8,&local_e8);
  }
}



