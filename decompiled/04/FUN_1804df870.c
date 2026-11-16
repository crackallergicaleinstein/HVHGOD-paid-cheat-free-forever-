// FUN_1804df870 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804df870 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1804df870(longlong param_1,float *param_2,float *param_3,uint param_4,float param_5,
                  uint param_6)

{
  float fVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  undefined1 auVar7 [16];
  float fVar8;
  float fVar9;
  undefined1 auStack_e8 [32];
  float local_c8;
  longlong local_c0;
  uint local_b8;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  ulonglong local_88;
  
  if ((param_4 & 0xff000000) == 0) {
    return;
  }
  local_88 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  local_a8 = *param_2;
  local_a4 = param_2[1];
  local_94 = param_3[1];
  local_c8 = (float)(param_6 | *(uint *)(param_1 + 0x30));
  local_a0 = *param_3 - local_a8;
  fVar8 = local_94 - local_a4;
  auVar7 = vminss_avx(ZEXT416((uint)local_a0),ZEXT416((uint)fVar8));
  if ((((uint)local_c8 & 0xe0000) != 0xe0000) || (0.5 <= param_5)) {
    fVar1 = *(float *)(param_1 + 0xe0);
    fVar9 = auVar7._0_4_;
    if (fVar9 < fVar1) {
      if (fVar1 * 0.003921569 <= fVar9) {
        if (local_a0 < fVar1) {
          param_4 = (int)(longlong)
                         (local_a0 * *(float *)(param_1 + 0xe4) * (float)(param_4 >> 0x18)) << 0x18
                    | param_4 & 0xffffff;
          local_a0 = fVar1;
        }
        if (fVar8 < fVar1) {
          param_4 = (int)(longlong)(fVar8 * *(float *)(param_1 + 0xe4) * (float)(param_4 >> 0x18))
                    << 0x18 | param_4 & 0xffffff;
          fVar8 = fVar1;
        }
        local_a0 = local_a8 + local_a0;
        local_94 = local_a4 + fVar8;
        local_c8 = 1.43493e-42;
        local_9c = local_a4;
        local_98 = local_a0;
        local_90 = local_a8;
        local_8c = local_94;
        FUN_1804dafe0(param_1,&local_a8,4,param_4);
      }
    }
    if ((((uint)local_c8 & 0x1f0) == 0x100) || (param_5 < fVar1 * 0.25)) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    auVar7 = vinsertps_avx(ZEXT416((uint)local_94),ZEXT416((uint)*param_3),0x10);
    auVar7 = vinsertps_avx(auVar7,ZEXT416((uint)local_a4),0x20);
    auVar2 = vinsertps_avx(auVar7,ZEXT416((uint)local_a8),0x30);
    auVar7._0_4_ = (int)auVar2._0_4_;
    auVar7._4_4_ = (int)auVar2._4_4_;
    auVar7._8_4_ = (int)auVar2._8_4_;
    auVar7._12_4_ = (int)auVar2._12_4_;
    auVar7 = vcvtdq2ps_avx(auVar7);
    auVar7 = vcmpps_avx(auVar7,auVar2,0);
    iVar6 = vmovmskps_avx(auVar7);
    if ((iVar6 == 0xf) && ((float)(int)param_5 == param_5)) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if ((*(char *)(param_1 + 0xe8) == '\0') || (!bVar4)) {
LAB_1804dfb01:
      if (bVar5) {
        FUN_1804dc420(param_1,param_2,param_3);
        local_c8 = 1.43493e-42;
        FUN_1804dafe0(param_1,*(undefined8 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x50),
                      param_4);
        *(undefined4 *)(param_1 + 0x50) = 0;
      }
      local_a4 = param_2[1];
      local_a8 = *param_2;
      local_a0 = *param_3;
      local_c8 = 1.43493e-42;
      local_9c = local_a4;
      local_98 = local_a0;
      local_90 = local_a8;
      local_8c = local_94;
      FUN_1804dafe0(param_1,&local_a8,4);
    }
    if (bVar5) {
      if (((uint)local_c8 & 0x1f0) == 0) {
        local_c8 = (float)((uint)local_c8 | 0xf0);
      }
      bVar3 = SUB41(local_c8,0);
      auVar7 = vpcmpeqd_avx(ZEXT116((bVar3 & 0xc0) != 0xc0 && (bVar3 & 0x30) != 0x30),
                            SUB6416(ZEXT464(0),0));
      auVar7 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),SUB6416(ZEXT464(0x3f000000),0),auVar7);
      auVar2 = vminss_avx(ZEXT416((uint)param_5),ZEXT416((uint)(ABS(local_a0) * auVar7._0_4_ - 1.0))
                         );
      auVar7 = vpcmpeqd_avx(ZEXT116((bVar3 & 0xa0) != 0xa0 && (bVar3 & 0x50) != 0x50),
                            SUB6416(ZEXT464(0),0));
      auVar7 = vblendvps_avx(SUB6416(ZEXT464(0x3f800000),0),SUB6416(ZEXT464(0x3f000000),0),auVar7);
      auVar7 = vminss_avx(auVar2,ZEXT416((uint)(ABS(fVar8) * auVar7._0_4_ - 1.0)));
      iVar6 = (int)(auVar7._0_4_ * *(float *)(param_1 + 0xe4));
      if (0 < iVar6) {
        if ((((uint)local_c8 & 0xa01000) == 0xa01000) && (iVar6 < 0x11)) {
          fVar8 = (float)(iVar6 + 1);
          if ((fVar8 + fVar8) * *(float *)(param_1 + 0xe0) < fVar9) {
            local_c0 = (longlong)(iVar6 + -1) * 0x10 +
                       *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x10);
            local_b8 = (uint)local_c8;
            local_c8 = fVar8 * *(float *)(param_1 + 0xe0);
            FUN_1804df300(param_1,param_2,param_3);
          }
        }
        goto LAB_1804dfb01;
      }
    }
  }
  FUN_1804d9590(param_1,6,4);
  FUN_1804d96b0(param_1,param_2,param_3,param_4);
}



