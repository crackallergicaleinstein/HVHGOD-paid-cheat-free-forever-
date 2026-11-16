// FUN_180602074 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180602074 */

void FUN_180602074(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar7;
  double dVar5;
  double dVar6;
  undefined1 in_XMM0 [16];
  double local_res8;
  double local_res10;
  undefined8 local_res18;
  undefined8 local_res20;
  undefined1 local_88;
  undefined1 local_87 [7];
  undefined8 local_80 [12];
  
  dVar6 = in_XMM0._0_8_;
  uVar4 = in_XMM0._0_4_;
  uVar7 = in_XMM0._4_4_;
  local_res8 = dVar6;
  local_res10 = param_2;
  local_res18 = param_3;
  local_res20 = param_4;
  if (param_2 == 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_180601c60(PTR_s_boost_math_zeta<_1_>_1808d6208,"Evaluation of zeta function at pole %1%",
                  &local_res8,param_3);
  }
  if (53.0 < dVar6) {
    return;
  }
  dVar5 = (double)FUN_18061ccf0();
  if (dVar5 == dVar6) {
    uVar1 = FUN_180600124(&local_res8,&local_88);
    uVar4 = SUB84(local_res8,0);
    uVar7 = (undefined4)((ulonglong)local_res8 >> 0x20);
    if ((double)(int)uVar1 == local_res8) {
      if (-1 < (int)uVar1) {
        if ((uVar1 & 1) != 0) {
          return;
        }
        iVar2 = (int)uVar1 / 2;
        if ((iVar2 < 0x82) && ((int)uVar1 < 0xab)) {
          FUN_1806159d0(0x3ff0000000000000,uVar1 - 1);
          FUN_18061d2e0(0x400921fb54442d18);
          return;
        }
        if (iVar2 < 0) {
          puVar3 = (undefined4 *)FUN_18060fe00();
          *puVar3 = 0x21;
        }
        else {
          local_80[0] = 0;
          FUN_1805fda5c(local_80,(longlong)iVar2,1,&local_88,&local_88);
        }
        if ((0xaa < uVar1) &&
           (dVar6 = (double)FUN_1805ffb48((double)(uVar1 + 1),local_87,&local_88),
           dVar6 <= 1.7976931348623157e+308)) {
          FUN_18061ccf0();
        }
        FUN_1806159d0(0x3ff0000000000000,uVar1 - 1);
        FUN_18061d2e0(0x400921fb54442d18);
        return;
      }
      if ((-uVar1 & 1) == 0) {
        return;
      }
      if ((int)(1 - uVar1) < 0x104) {
        return;
      }
    }
  }
  if (1.4901161193847656e-08 <= ABS((double)CONCAT44(uVar7,uVar4))) {
    if (0.0 < (double)CONCAT44(uVar7,uVar4) || (double)CONCAT44(uVar7,uVar4) == 0.0) {
      FUN_180602acc();
    }
    else {
      dVar6 = (double)FUN_18061ccf0();
      if (dVar6 != (double)CONCAT44(uVar7,uVar4) * 0.5) {
        FUN_180601d18();
        if (170.0 < param_2) {
          FUN_180602074();
          dVar6 = (double)FUN_18060068c();
          dVar5 = (double)FUN_18061cdb0(0x401921fb54442d18);
          if (dVar6 - dVar5 * param_2 <= 709.0) {
            FUN_18061c8d0();
          }
        }
        else {
          FUN_1805ffb48();
          FUN_180602074();
          FUN_18061d2e0(0x401921fb54442d18);
        }
      }
    }
  }
  return;
}



