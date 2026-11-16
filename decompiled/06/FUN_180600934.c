// FUN_180600934 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180600934 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_180600934(double param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  uint uVar8;
  double local_res8;
  
  uVar1 = 1;
  local_res8 = param_1;
  if (-1.4901161193847656e-08 < param_1) {
    if (1.4901161193847656e-08 <= param_1) {
      if (15.0 <= param_1) {
        if ((param_1 < 3.0) || (100.0 <= param_1)) {
          dVar3 = (double)FUN_18061cdb0((param_1 + 6.02468004077673) - 0.5);
          dVar3 = (dVar3 - 1.0) * (param_1 - 0.5);
          if (dVar3 * 2.220446049250313e-16 < 20.0) {
            local_res8 = param_1;
            FUN_180600480(&local_res8);
            dVar4 = (double)FUN_18061cdb0();
            dVar3 = dVar3 + dVar4;
          }
        }
        else {
          FUN_1805ffe34(param_1);
          dVar3 = (double)FUN_18061cdb0();
        }
      }
      else {
        dVar3 = (double)FUN_180600f5c(param_1,param_1 - 1.0,param_1 - 2.0,&local_res8,param_2,
                                      param_3);
      }
    }
    else {
      if (param_1 == 0.0) {
                    /* WARNING: Subroutine does not return */
        FUN_180601c90(PTR_s_boost_math_lgamma<_1_>__1___1808d6d30,"Evaluation of lgamma at %1%.",
                      &local_res8,param_2);
      }
      if (2.220446049250313e-16 <=
          (double)CONCAT44((uint)((ulonglong)param_1 >> 0x20) & DAT_18086dbb0._4_4_,
                           SUB84(param_1,0) & (uint)DAT_18086dbb0) * 4.0) {
        dVar3 = 1.0 / param_1 - 0.5772156649015329;
        uVar7 = FUN_18061cdb0(CONCAT44((uint)((ulonglong)dVar3 >> 0x20) & DAT_18086dbb0._4_4_,
                                       SUB84(dVar3,0) & (uint)DAT_18086dbb0));
        uVar2 = (undefined4)uVar7;
        uVar8 = (uint)((ulonglong)uVar7 >> 0x20);
      }
      else {
        uVar7 = FUN_18061cdb0();
        uVar2 = (undefined4)uVar7;
        uVar8 = (uint)((ulonglong)uVar7 >> 0x20) ^ 0x80000000;
      }
      dVar3 = (double)CONCAT44(uVar8,uVar2);
      if (param_1 < 0.0) {
        uVar1 = 0xffffffff;
        dVar3 = (double)CONCAT44(uVar8,uVar2);
      }
    }
  }
  else {
    dVar3 = (double)FUN_18061ccf0(param_1);
    if (dVar3 == param_1) {
                    /* WARNING: Subroutine does not return */
      FUN_180601c90(PTR_s_boost_math_lgamma<_1_>__1___1808d6d30,
                    "Evaluation of lgamma at a negative integer %1%.",&local_res8,param_2);
    }
    dVar4 = (double)FUN_180601e48(param_1);
    uVar8 = (uint)((ulonglong)dVar4 >> 0x20);
    if (dVar4 < 0.0) {
      uVar8 = uVar8 ^ 0x80000000;
    }
    dVar5 = (double)FUN_18061cdb0(0x400921fb54442d18);
    dVar6 = (double)FUN_180600934(-param_1,param_2,param_3,0);
    dVar3 = (double)FUN_18061cdb0(CONCAT44(uVar8,SUB84(dVar4,0)));
    dVar3 = (dVar5 - dVar6) - dVar3;
    uVar1 = 1;
    if (0.0 <= dVar4) {
      uVar1 = 0xffffffff;
    }
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = uVar1;
  }
  return dVar3;
}



