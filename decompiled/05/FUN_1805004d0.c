// FUN_1805004d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805004d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805004d0(float *param_1,uint param_2)

{
  float fVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  longlong lVar7;
  undefined4 uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined1 local_68 [8];
  float fStack_60;
  float fStack_5c;
  undefined4 local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  ulonglong local_48;
  
  lVar7 = DAT_180bb8ae8;
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_a8;
  lVar2 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  *(undefined1 *)(DAT_180bb8ae8 + 0x2420) = 0;
  fVar11 = param_1[1];
  if (fVar11 <= *(float *)(lVar7 + 0x114)) {
    auVar5 = vminss_avx(ZEXT416((uint)param_1[3]),ZEXT416((uint)*(float *)(lVar7 + 0x114)));
    fVar11 = auVar5._0_4_;
  }
  fVar10 = *param_1;
  if (fVar10 <= *(float *)(lVar7 + 0x110)) {
    auVar5 = vminss_avx(ZEXT416((uint)param_1[2]),ZEXT416((uint)*(float *)(lVar7 + 0x110)));
    fVar10 = auVar5._0_4_;
  }
  fVar1 = *(float *)(lVar2 + 300);
  *(float *)(lVar7 + 0x2408) = fVar10 - *(float *)(lVar2 + 0x128);
  auVar5 = *(undefined1 (*) [16])(lVar7 + 0x2464);
  *(float *)(lVar7 + 0x240c) = fVar11 - fVar1;
  auVar3 = vmaxss_avx(auVar5,ZEXT416((uint)*param_1));
  uStack_54 = auVar5._4_4_;
  auVar4 = vmaxss_avx(ZEXT416(uStack_54),ZEXT416((uint)param_1[1]));
  uStack_50 = auVar5._8_4_;
  auVar6 = vminss_avx(ZEXT416(uStack_50),ZEXT416((uint)param_1[2]));
  uStack_54 = auVar4._0_4_;
  local_58 = auVar3._0_4_;
  uStack_4c = auVar5._12_4_;
  auVar5 = vminss_avx(ZEXT416(uStack_4c),ZEXT416((uint)param_1[3]));
  uStack_50 = auVar6._0_4_;
  uStack_4c = auVar5._0_4_;
  lVar9 = FUN_1804bbf70(lVar2);
  auVar5 = *(undefined1 (*) [16])(lVar7 + 0xf98);
  auVar3 = vshufps_avx(auVar5,auVar5,0xff);
  _local_68 = auVar5._0_12_;
  fStack_5c = auVar3._0_4_ * *(float *)(lVar7 + 0xc84) * 0.3;
  uVar8 = FUN_1804b1120(local_68);
  uVar12 = 0;
  local_80 = 0;
  local_88 = 0;
  FUN_1804df870(*(undefined8 *)(lVar9 + 0x2c8),&local_58,&uStack_50,uVar8);
  auVar5 = *(undefined1 (*) [16])(DAT_180bb8ae8 + 0x1158);
  auVar3 = vshufps_avx(auVar5,auVar5,0xff);
  _local_68 = auVar5._0_12_;
  fStack_5c = auVar3._0_4_ * *(float *)(DAT_180bb8ae8 + 0xc84);
  uVar8 = FUN_1804b1120(local_68);
  local_78 = 0;
  local_80 = 0x3f800000;
  local_88 = uVar12;
  FUN_1804de7c0(*(undefined8 *)(lVar9 + 0x2c8),&local_58,&uStack_50,uVar8);
  if ((param_2 & 0x900) == 0x800) {
    fVar11 = -*(float *)(lVar7 + 0x11e0);
    local_68._4_4_ = param_1[1] - fVar11;
    local_68._0_4_ = *param_1 - fVar11;
    fStack_60 = fVar11 + param_1[2];
    fStack_5c = fVar11 + param_1[3];
    if ((((*param_1 - fVar11 <= *(float *)(lVar7 + 0x110)) &&
         (param_1[1] - fVar11 <= *(float *)(lVar7 + 0x114))) &&
        (*(float *)(lVar7 + 0x110) < fVar11 + param_1[2])) &&
       (*(float *)(lVar7 + 0x114) < fVar11 + param_1[3])) {
    }
    FUN_1805001f0(lVar7 + 0x23f0,lVar2,local_68);
  }
}



