// FUN_180485630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180485630 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180485630(longlong *param_1,longlong *param_2,uint param_3,undefined4 param_4,
                  undefined4 param_5,float param_6,ulonglong param_7,int param_8)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  undefined1 auVar4 [64];
  float fVar5;
  undefined1 auStack_b8 [32];
  float local_98;
  ulonglong local_90;
  undefined8 local_88;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  ulonglong local_58;
  
  lVar1 = DAT_180bb8ae8;
  local_58 = DAT_1808d5f00 ^ (ulonglong)auStack_b8;
  *(undefined1 *)(*(longlong *)(DAT_180bb8ae8 + 0x14d0) + 0xce) = 1;
  *param_1 = *(longlong *)(*(longlong *)(lVar1 + 0x14d0) + 0x2c8);
  param_1[1] = *param_2;
  *(undefined4 *)(param_1 + 3) = param_5;
  *(undefined4 *)(param_1 + 2) = param_4;
  auVar2 = vpcmpeqd_avx(ZEXT416(param_3),SUB6416(ZEXT464(0),0));
  auVar2 = vblendvps_avx(SUB6416(ZEXT464(0x41500000),0),SUB6416(ZEXT464(0x41280000),0),auVar2);
  *(int *)((longlong)param_1 + 0x24) = auVar2._0_4_;
  auVar2 = vpcmpeqd_avx(ZEXT416(param_3),SUB6416(ZEXT464(0),0));
  auVar2 = vblendvps_avx(SUB6416(ZEXT464(0x4141999a),0),SUB6416(ZEXT464(0x413ccccd),0),auVar2);
  *(int *)((longlong)param_1 + 0x1c) = auVar2._0_4_;
  auVar2 = vpcmpeqd_avx(ZEXT416(param_3),SUB6416(ZEXT464(0),0));
  auVar2 = vblendvps_avx(SUB6416(ZEXT464(0x41380000),0),SUB6416(ZEXT464(0x41300000),0),auVar2);
  *(int *)(param_1 + 4) = auVar2._0_4_;
  *(float *)((longlong)param_1 + 0x14) = param_6 + 12.220001;
  *(int *)(param_1 + 5) = param_8;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  FUN_1804c2800(param_7);
  if (DAT_180bbecdb == '\0') {
    auVar2 = vpcmpeqd_avx(ZEXT416(param_3),SUB6416(ZEXT464(0),0));
    auVar2 = vblendvps_avx(SUB6416(ZEXT464(0x4122b852),0),SUB6416(ZEXT464(0x412eb852),0),auVar2);
    fVar5 = 0.5;
    auVar2 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((auVar2._0_4_ + *(float *)(param_1 + 2)) * DAT_180b0a41c +
                                        0.5)),1);
    local_78 = auVar2._0_4_ + *(float *)(param_1 + 1);
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_6 * DAT_180b0a41c + 0.5)),1);
    local_74 = auVar2._0_4_ + *(float *)((longlong)param_1 + 0xc);
    local_88 = 0;
    local_90 = param_7;
    local_98 = (float)DAT_180b0a414;
    FUN_180463450(*param_1,DAT_180c62ca8,0x412e6666,&local_78);
    auVar2 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(DAT_180b0a41c * *(float *)(param_1 + 2) + fVar5)),1);
    local_60 = auVar2._0_4_ + *(float *)(param_1 + 1);
    auVar2 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(DAT_180b0a41c * *(float *)((longlong)param_1 + 0x14) +
                                        fVar5)),1);
    local_5c = auVar2._0_4_ + *(float *)((longlong)param_1 + 0xc);
    auVar2 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)((*(float *)(param_1 + 2) + *(float *)(param_1 + 3)) *
                                         DAT_180b0a41c + fVar5)),1);
    local_68 = auVar2._0_4_ + *(float *)(param_1 + 1);
    local_98 = DAT_180b0a41c * 8.0;
    auVar2 = vroundss_avx(ZEXT816(0),
                          ZEXT416((uint)(((float)param_8 * 30.855553 + 0.6 +
                                         *(float *)((longlong)param_1 + 0x14)) * DAT_180b0a41c +
                                        fVar5)),1);
    local_64 = auVar2._0_4_ + *(float *)((longlong)param_1 + 0xc);
    local_90 = local_90 & 0xffffffff00000000;
    FUN_1804df870(*param_1,&local_60,&local_68,DAT_1808da488);
    uVar3 = DAT_1808da484;
    lVar1 = *param_1;
    auVar2 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(DAT_180b0a41c + 0.25)),1);
    auVar2 = vmaxss_avx(SUB6416(ZEXT464(0x3f800000),0),auVar2);
    auVar4 = ZEXT1664(auVar2);
    fVar5 = auVar2._0_4_ * fVar5;
    local_78 = local_68 - fVar5;
    local_74 = local_64 - fVar5;
    local_70 = fVar5 + local_60;
    local_6c = fVar5 + local_5c;
    auVar2 = vmaxss_avx(ZEXT416((uint)(DAT_180b0a41c * 8.0 - fVar5)),ZEXT816(0));
    local_98 = 0.0;
    FUN_1804dc420(lVar1,&local_70,&local_78,auVar2._0_8_);
    local_88 = CONCAT44(local_88._4_4_,0x7f7fffff);
    local_90 = CONCAT44(local_90._4_4_,0x200);
    local_98 = auVar4._0_4_;
    FUN_1804d9a00(lVar1,*(undefined8 *)(lVar1 + 0x58),*(undefined4 *)(lVar1 + 0x50),uVar3);
    *(undefined4 *)(lVar1 + 0x50) = 0;
  }
  else {
    FUN_180493f00(param_7);
  }
}



