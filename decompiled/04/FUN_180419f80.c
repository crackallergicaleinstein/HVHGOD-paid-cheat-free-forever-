// FUN_180419f80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180419f80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180419f80(undefined8 param_1,undefined8 *param_2,float *param_3)

{
  float fVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  int iVar6;
  int iVar7;
  undefined1 auVar8 [16];
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  int local_98 [2];
  undefined4 local_90;
  undefined4 uStack_8c;
  float fStack_88;
  float fStack_84;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulonglong local_70;
  
  local_70 = DAT_1808d5f00 ^ (ulonglong)auStack_d8;
  if (DAT_180b8e2b0 == '\0') {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined1 *)((longlong)param_2 + 0xc) = 0;
  }
  iVar6 = FUN_1805f68d0(&DAT_180b8e260);
  if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180b8e2ac == 0x7fffffff) {
    DAT_180b8e2ac = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  local_b8 = _DAT_180b8e220;
  uStack_b0 = uRam0000000180b8e228;
  uStack_a8 = uRam0000000180b8e230;
  uStack_a0 = uRam0000000180b8e238;
  local_90 = (undefined4)_DAT_180b8e240;
  uStack_8c = (undefined4)((ulonglong)_DAT_180b8e240 >> 0x20);
  fStack_88 = (float)uRam0000000180b8e248;
  fStack_84 = (float)((ulonglong)uRam0000000180b8e248 >> 0x20);
  uStack_80 = uRam0000000180b8e250;
  uStack_78 = uRam0000000180b8e258;
  FUN_1805f68fc(&DAT_180b8e260);
  auVar5._4_4_ = uStack_8c;
  auVar5._0_4_ = local_90;
  auVar5._8_4_ = fStack_88;
  auVar5._12_4_ = fStack_84;
  auVar5._16_8_ = uStack_80;
  auVar5._24_8_ = uStack_78;
  fVar12 = *param_3;
  fVar9 = param_3[1];
  fVar1 = param_3[2];
  auVar8 = auVar5._16_16_;
  auVar2 = vshufps_avx(auVar8,auVar8,0x55);
  auVar3 = vshufps_avx(auVar8,auVar8,0xaa);
  auVar8 = vshufps_avx(auVar8,auVar8,0xff);
  fVar11 = fVar12 * (float)uStack_80 + fVar9 * auVar2._0_4_ + fVar1 * auVar3._0_4_ + auVar8._0_4_;
  if (fVar11 < 0.001) {
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    *(undefined1 *)((longlong)param_2 + 0xc) = 0;
  }
  auVar8._8_8_ = uStack_b0;
  auVar8._0_8_ = local_b8;
  auVar4._16_8_ = uStack_a8;
  auVar4._0_16_ = auVar8;
  auVar4._24_8_ = uStack_a0;
  uStack_80 = 0;
  local_98[0] = 1;
  auVar2 = vshufps_avx(auVar8,auVar8,0x55);
  auVar3 = vshufps_avx(auVar8,auVar8,0xaa);
  auVar8 = vshufps_avx(auVar8,auVar8,0xff);
  fVar10 = fVar12 * (float)local_b8 + fVar9 * auVar2._0_4_ + fVar1 * auVar3._0_4_ + auVar8._0_4_;
  auVar8 = auVar4._16_16_;
  auVar2 = vshufps_avx(auVar8,auVar8,0x55);
  auVar3 = vshufps_avx(auVar8,auVar8,0xaa);
  auVar8 = vshufps_avx(auVar8,auVar8,0xff);
  local_90 = 0;
  uStack_8c = 0;
  fStack_88 = 0.0;
  fStack_84 = 0.0;
  fVar12 = fVar12 * (float)uStack_a8 + fVar9 * auVar2._0_4_ + fVar1 * auVar3._0_4_ + auVar8._0_4_;
  fVar9 = 0.0;
  if (DAT_180bbab78 == 0) {
LAB_18041a16a:
    if (fStack_88 <= fVar9) goto LAB_18041a182;
    iVar7 = (int)fStack_84;
    iVar6 = (int)fStack_88;
  }
  else {
    fVar9 = 0.0;
    (**(code **)(*(longlong *)DAT_180bbab78 + 0x2f8))(DAT_180bbab78,local_98,&local_90);
    if (local_98[0] != 0) goto LAB_18041a16a;
LAB_18041a182:
    iVar6 = 0;
    iVar7 = 0;
  }
  fVar1 = ((1.0 / fVar11) * fVar10 + 1.0) * (float)iVar6 * 0.5;
  fVar12 = (1.0 - (1.0 / fVar11) * fVar12) * (float)iVar7 * 0.5;
  if ((((0.01 < fVar11) && (fVar9 <= fVar1)) && (fVar1 < (float)iVar6)) && (fVar9 <= fVar12)) {
    fStack_84 = (float)CONCAT31(fStack_84._1_3_,1);
    if (fVar12 < (float)iVar7) goto LAB_18041a213;
  }
  fStack_84 = (float)((uint)fStack_84 & 0xffffff00);
LAB_18041a213:
  *param_2 = CONCAT44(fVar12,fVar1);
  param_2[1] = CONCAT44(fStack_84,fVar11);
}



