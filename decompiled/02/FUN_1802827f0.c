// FUN_1802827f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802827f0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1802827f0(undefined8 param_1,float param_2,undefined8 param_3,longlong *param_4,
                  undefined4 param_5,int *param_6,uint param_7,float param_8)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  byte *pbVar4;
  int *piVar5;
  longlong **pplVar6;
  undefined8 ***pppuVar7;
  byte *pbVar8;
  int *piVar9;
  longlong lVar10;
  undefined8 ***pppuVar11;
  ulonglong uVar12;
  undefined8 **ppuVar13;
  float fVar14;
  undefined1 in_ZMM2 [64];
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [64];
  undefined1 auVar19 [64];
  float fVar20;
  float fVar21;
  undefined1 auVar22 [64];
  undefined1 auStack_168 [32];
  longlong *local_148;
  undefined8 **local_140;
  int local_138;
  undefined8 ***local_130;
  byte local_128 [4];
  int local_124;
  byte local_120 [4];
  int local_11c [2];
  undefined8 **local_114;
  longlong **local_108;
  longlong *local_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined8 **local_d8;
  longlong lStack_d0;
  ulonglong local_c8;
  
  local_c8 = DAT_1808d5f00 ^ (ulonglong)auStack_168;
  auVar22 = ZEXT464(param_7);
  auVar18 = ZEXT1664(in_ZMM2._0_16_);
  fVar14 = (float)FUN_18027fb30(param_7);
  auVar17 = auVar18._0_16_;
  fVar21 = 1.0;
  local_11c[1] = 6;
  local_128[0] = 0;
  local_128[1] = 0;
  local_128[2] = 0;
  local_128[3] = 0;
  local_11c[0] = 0;
  local_120[0] = 2;
  local_120[1] = 0;
  local_120[2] = 0;
  local_120[3] = 0;
  local_124 = (param_6[1] - (uint)(fVar14 < 0.64)) - (uint)(fVar14 < 0.82);
  pbVar8 = local_128;
  if (-1 < local_124) {
    pbVar8 = (byte *)&local_124;
  }
  pbVar4 = local_120;
  if (local_124 < 3) {
    pbVar4 = pbVar8;
  }
  piVar9 = local_11c;
  if (-1 < *param_6) {
    piVar9 = param_6;
  }
  bVar1 = *pbVar4;
  piVar5 = local_11c + 1;
  if (*param_6 < 7) {
    piVar5 = piVar9;
  }
  iVar2 = *piVar5;
  if (param_8 <= 1.0) {
LAB_18028297b:
    if (iVar2 == 0) {
      ppuVar13 = (undefined8 **)(&DAT_180b90850)[bVar1];
    }
    else {
      if (iVar2 != 1) {
        if (iVar2 == 2) {
          ppuVar13 = (undefined8 **)(&DAT_180b90838)[bVar1];
          goto LAB_1802829bb;
        }
        ppuVar13 = (undefined8 **)(&DAT_180b90820)[(ulonglong)bVar1 + (longlong)iVar2 * 3];
        if (ppuVar13 != (undefined8 **)0x0) goto LAB_1802829c0;
      }
      ppuVar13 = (undefined8 **)(&DAT_180b90820)[bVar1];
    }
LAB_1802829bb:
    if (ppuVar13 == (undefined8 **)0x0) {
      if (DAT_180bbadc8 == DAT_180bbadd0) {
        lVar10 = DAT_180bbade0;
      }
      else {
        lVar10 = *(longlong *)(DAT_180bbadd0 + -8);
      }
      if (lVar10 == 0) {
        local_d8 = (undefined8 **)0x0;
      }
      else {
        local_f8 = *param_4;
        lStack_f0 = param_4[1];
        FUN_180430010(local_f8,&local_d8,&local_f8);
        auVar17 = auVar18._0_16_;
      }
      pplVar6 = (longlong **)&local_d8;
      goto LAB_180282a2a;
    }
  }
  else {
    local_108 = (longlong **)CONCAT44(local_108._4_4_,iVar2);
    local_d8 = (undefined8 **)CONCAT44(local_d8._4_4_,6);
    uVar12 = (ulonglong)bVar1;
    if (2 < bVar1) {
      uVar12 = 2;
    }
    local_114._0_4_ = 0;
    pppuVar11 = (undefined8 ***)(local_11c + 2);
    if (-1 < iVar2) {
      pppuVar11 = &local_108;
    }
    pppuVar7 = &local_d8;
    if (iVar2 < 7) {
      pppuVar7 = pppuVar11;
    }
    ppuVar13 = (undefined8 **)(&DAT_180c62880)[uVar12 + (longlong)*(int *)pppuVar7 * 3];
    if ((ppuVar13 == (undefined8 **)0x0) &&
       (ppuVar13 = (undefined8 **)(&DAT_180c62898)[uVar12], ppuVar13 == (undefined8 **)0x0))
    goto LAB_18028297b;
  }
LAB_1802829c0:
  local_d8 = (undefined8 **)*param_4;
  lStack_d0 = param_4[1];
  pplVar6 = (longlong **)FUN_180430010(ppuVar13,&local_108,&local_d8);
  auVar17 = auVar18._0_16_;
LAB_180282a2a:
  fVar14 = 0.5;
  auVar17 = vroundss_avx(ZEXT816(0),auVar17,1);
  uVar16 = auVar17._0_8_;
  auVar19 = ZEXT1664(auVar17);
  auVar17 = vroundss_avx(ZEXT816(0),ZEXT416((uint)(param_2 - *(float *)pplVar6 * 0.5)),1);
  uVar15 = auVar17._0_8_;
  auVar18 = ZEXT1664(auVar17);
  if (((char)param_6[2] != '\0') && (*(char *)((longlong)param_6 + 0x77) != '\0')) {
    fVar20 = (float)param_6[0x1c];
    sVar3 = thunk_FUN_180624430(fVar20);
    if (sVar3 < 1) {
      pppuVar11 = &local_d8;
      if (fVar14 <= fVar20) {
        pppuVar11 = (undefined8 ***)(param_6 + 0x1c);
      }
      local_108 = (longlong **)CONCAT44(local_108._4_4_,0x40000000);
      pppuVar7 = &local_108;
      if (fVar20 <= 2.0) {
        pppuVar7 = pppuVar11;
      }
      local_d8 = (undefined8 **)CONCAT44(local_d8._4_4_,fVar14);
      fVar21 = *(float *)pppuVar7;
    }
    iVar2 = param_6[0x1d];
    fVar14 = (float)FUN_18027fb30(auVar22._0_8_);
    local_f8 = *param_4;
    lStack_f0 = param_4[1];
    local_108 = (longlong **)&local_d8;
    local_100 = &local_f8;
    local_130 = &local_108;
    local_148 = &local_e8;
    local_140 = (undefined8 **)CONCAT44(local_140._4_4_,fVar14 * fVar21 * param_8);
    local_138 = iVar2;
    local_e8 = local_f8;
    lStack_e0 = lStack_f0;
    local_d8 = ppuVar13;
    FUN_1802812f0(param_1,auVar18._0_8_,auVar19._0_8_,ppuVar13);
    uVar15 = auVar18._0_8_;
    uVar16 = auVar19._0_8_;
  }
  if ((param_4[1] != 0) && (param_5._3_1_ != '\0')) {
    local_e8 = *param_4;
    lStack_e0 = param_4[1];
    local_148 = (longlong *)CONCAT44(local_148._4_4_,param_5);
    local_140 = ppuVar13;
    FUN_1804340b0(param_1,uVar15,uVar16,&local_e8);
  }
}



