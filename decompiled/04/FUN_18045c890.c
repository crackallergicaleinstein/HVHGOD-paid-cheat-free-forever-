// FUN_18045c890 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18045c890 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18045c890(undefined8 *param_1,undefined8 param_2,float param_3,float param_4,
                  longlong param_5,ulonglong param_6,uint param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined1 auVar11 [64];
  undefined1 auStack_108 [32];
  float local_e8;
  ulonglong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined4 local_b8;
  float local_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  ulonglong local_90;
  
  uVar5 = DAT_180c62ca8;
  local_90 = DAT_1808d5f00 ^ (ulonglong)auStack_108;
  if (param_5 == 0) {
    fVar7 = 0.0;
  }
  else {
    fVar7 = DAT_180b0a41c * 14.0;
  }
  fVar9 = 0.5;
  local_b8 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 13.2 + 0.5)),1);
  local_e0 = param_6;
  local_e8 = 0.0;
  auVar1 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar1);
  FUN_1804ea040(&local_a8,DAT_180c62ca8,auVar1._0_8_,0x7f7fffff);
  fVar8 = DAT_180b0a41c * 4.5;
  auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar8 + fVar8 + fVar7 + local_a8 + fVar9)),1);
  auVar11 = ZEXT464(param_7);
  auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c * 14.5 + fVar9)),1);
  auVar3 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((param_3 - auVar1._0_4_) + fVar9)),1);
  auVar4 = vroundss_avx(ZEXT816(0),ZEXT416((uint)((param_4 - auVar2._0_4_ * fVar9) + fVar9)),1);
  fStack_9c = auVar4._0_4_;
  fStack_94 = fStack_9c + auVar2._0_4_;
  local_a0 = auVar3._0_4_;
  local_98 = auVar1._0_4_ + local_a0;
  uVar6 = FUN_180462ad0(DAT_180b0a434,DAT_180b0a418,param_7);
  local_e0 = local_e0 & 0xffffffff00000000;
  local_e8 = fVar8;
  FUN_1804df870(param_2,&local_a0,&local_98,uVar6);
  uVar10 = auVar11._0_8_;
  fVar8 = DAT_180b0a41c * 4.5 + local_a0;
  if (param_5 != 0) {
    local_a8 = DAT_180b0a41c * 5.0 + fVar8;
    local_e8 = 11.0;
    local_a4 = param_4;
    FUN_180463dc0(param_2,&local_a8,DAT_1808da478,param_5);
    uVar10 = auVar11._0_8_;
    fVar8 = fVar8 + fVar7;
  }
  uVar6 = FUN_180462ad0(DAT_1808da474,DAT_1808da478,uVar10);
  auVar1 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(fVar8 + fVar9)),1);
  local_a8 = auVar1._0_4_;
  fVar7 = (float)FUN_180463350(uVar5,0x41533333);
  local_a4 = param_4 - fVar7 * fVar9;
  local_d8 = 0;
  local_e0 = param_6;
  local_e8 = (float)uVar6;
  FUN_180463450(param_2,uVar5,0x41533333,&local_a8);
  *param_1 = CONCAT44(fStack_9c,local_a0);
  param_1[1] = CONCAT44(fStack_94,local_98);
}



