// FUN_18042fd30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042fd30 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18042fd30(uint *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float *pfVar5;
  undefined1 auVar6 [64];
  undefined1 auVar7 [64];
  undefined1 auVar8 [64];
  undefined1 auVar9 [64];
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  float local_a0;
  float fStack_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  ulonglong local_80 [10];
  
  local_80[0] = DAT_1808d5f00 ^ (ulonglong)auStack_c8;
  fStack_9c = *param_3;
  local_a0 = *param_2;
  pfVar5 = &local_a0;
  auVar6 = ZEXT464(0x7f7fffff);
  auVar8 = ZEXT464(0xff7fffff);
  local_94 = fStack_9c;
  local_8c = fStack_9c + *param_5;
  local_84 = fStack_9c + *param_5;
  local_98 = local_a0 + *param_4;
  local_90 = local_a0 + *param_4;
  local_88 = local_a0;
  auVar7 = ZEXT1664(auVar6._0_16_);
  auVar9 = ZEXT1664(auVar8._0_16_);
  do {
    local_a8 = *(undefined8 *)pfVar5;
    FUN_18042fa20(param_1,&local_a8,(longlong)&local_a8 + 4);
    pfVar5 = pfVar5 + 2;
    auVar3 = vminss_avx(ZEXT416((uint)local_a8),auVar6._0_16_);
    auVar6 = ZEXT1664(auVar3);
    auVar4 = vminss_avx(ZEXT416(local_a8._4_4_),auVar7._0_16_);
    auVar7 = ZEXT1664(auVar4);
    auVar1 = vmaxss_avx(ZEXT416((uint)local_a8),auVar8._0_16_);
    auVar8 = ZEXT1664(auVar1);
    auVar2 = vmaxss_avx(ZEXT416(local_a8._4_4_),auVar9._0_16_);
    auVar9 = ZEXT1664(auVar2);
  } while (pfVar5 != (float *)local_80);
  if (0.0001 < (float)param_1[10]) {
    auVar3 = vminss_avx(ZEXT416(*param_1),auVar3);
    auVar6 = ZEXT1664(auVar3);
    auVar3 = vminss_avx(ZEXT416(param_1[1]),auVar4);
    auVar7 = ZEXT1664(auVar3);
    auVar1 = vmaxss_avx(ZEXT416(*param_1),auVar1);
    auVar8 = ZEXT1664(auVar1);
    auVar1 = vmaxss_avx(ZEXT416(param_1[1]),auVar2);
    auVar9 = ZEXT1664(auVar1);
  }
  *param_2 = auVar6._0_4_;
  auVar1 = vmaxss_avx(ZEXT416((uint)(auVar8._0_4_ - auVar6._0_4_)),ZEXT816(0));
  *param_3 = auVar7._0_4_;
  *param_4 = auVar1._0_4_;
  auVar1 = vmaxss_avx(ZEXT416((uint)(auVar9._0_4_ - auVar7._0_4_)),ZEXT816(0));
  *param_5 = auVar1._0_4_;
}



