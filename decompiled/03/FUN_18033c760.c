// FUN_18033c760 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18033c760 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18033c760(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 extraout_var [56];
  undefined1 auVar5 [64];
  ulonglong uVar6;
  undefined1 auVar7 [64];
  ulonglong uVar8;
  undefined1 auVar9 [64];
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  ulonglong local_88 [16];
  
  local_88[0] = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  local_c8 = ZEXT816(0);
  local_b8 = ZEXT816(0);
  local_d8 = local_c8;
  local_a8 = local_c8;
  local_98 = local_b8;
  FUN_180309df0(param_1);
  fVar11 = *(float *)(param_3 + 0x10) * 0.125;
  fVar10 = 0.0001;
  fVar12 = 57.29578;
  pfVar2 = (float *)local_c8;
  do {
    fVar3 = *pfVar2;
    auVar7 = ZEXT464((uint)fVar3);
    uVar6 = (ulonglong)(uint)fVar3;
    fVar1 = pfVar2[1];
    auVar9 = ZEXT464((uint)fVar1);
    uVar8 = (ulonglong)(uint)fVar1;
    fVar3 = fVar1 * fVar1 + fVar3 * fVar3;
    if (fVar3 < 0.0) {
      auVar5._0_8_ = FUN_18061e150();
      uVar8 = auVar9._0_8_;
      uVar6 = auVar7._0_8_;
      auVar5._8_56_ = extraout_var;
      auVar4 = auVar5._0_16_;
    }
    else {
      auVar4 = ZEXT416((uint)SQRT(fVar3));
    }
    auVar7 = ZEXT1664(auVar4);
    if (fVar10 < auVar4._0_4_) {
      fVar3 = (float)FUN_180636c80(uVar8,uVar6);
      local_d8 = (undefined1 *)CONCAT44(local_d8._4_4_,fVar11);
      param_1 = FUN_180309d00(param_1,fVar3 * fVar12,auVar7._0_8_,param_3);
    }
    pfVar2 = pfVar2 + 2;
  } while (pfVar2 != (float *)local_88);
}



