// FUN_1805fec20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fec20 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1805fec20(double param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 local_res8 [24];
  double local_res20;
  
  if (param_1 < 0.0) {
    dVar1 = (double)FUN_1805ff930(1,-param_1,param_2,param_3);
    return -dVar1;
  }
  if (param_1 == 0.0) {
    return -INFINITY;
  }
  if (param_1 <= 6.0) {
    dVar2 = param_1 / 3.0 - 1.0;
    dVar4 = (param_1 - 0.3725074107813666) - 1.3140183414386028e-17;
    dVar3 = dVar2 * dVar2;
    dVar1 = ((((dVar3 * _DAT_1808d6508 + _DAT_1808d64f8) * dVar3 + _DAT_1808d64e8) * dVar3 +
             _DAT_1808d64d8) * dVar3 + _DAT_1808d64c8) * dVar2 +
            (((dVar3 * _DAT_1808d6500 + _DAT_1808d64f0) * dVar3 + _DAT_1808d64e0) * dVar3 +
            _DAT_1808d64d0) * dVar3 + _DAT_1808d64c0;
    dVar2 = (((dVar3 * _DAT_1808d6548 + _DAT_1808d6538) * dVar3 + _DAT_1808d6528) * dVar3 +
            _DAT_1808d6518) * dVar2 +
            ((dVar3 * _DAT_1808d6540 + _DAT_1808d6530) * dVar3 + _DAT_1808d6520) * dVar3 +
            _DAT_1808d6510;
    if (0.1 <= ABS(dVar4)) {
      dVar3 = (double)FUN_18061cdb0(param_1 / 0.3725074107813666);
    }
    else {
      local_res20 = dVar4 / 0.3725074107813666;
      dVar3 = (double)FUN_1806012d0(&local_res20,local_res8,local_res8);
    }
    return (dVar1 / dVar2) * dVar4 + dVar3;
  }
  if (10.0 < param_1) {
    if (param_1 <= 20.0) {
      dVar2 = param_1 / 5.0 - 3.0;
      dVar1 = dVar2 * dVar2;
      dVar3 = (double)FUN_18061c8d0(param_1);
      dVar3 = dVar3 / param_1;
      dVar1 = ((((dVar1 * _DAT_1808d6610 + _DAT_1808d6600) * dVar1 + _DAT_1808d65f0) * dVar1 +
               _DAT_1808d65e0) * dVar1 + _DAT_1808d65d0 +
              (((dVar1 * _DAT_1808d6608 + _DAT_1808d65f8) * dVar1 + _DAT_1808d65e8) * dVar1 +
              _DAT_1808d65d8) * dVar2) /
              ((((dVar1 * _DAT_1808d6660 + _DAT_1808d6650) * dVar1 + _DAT_1808d6640) * dVar1 +
               _DAT_1808d6630) * dVar1 + _DAT_1808d6620 +
              (((dVar1 * _DAT_1808d6658 + _DAT_1808d6648) * dVar1 + _DAT_1808d6638) * dVar1 +
              _DAT_1808d6628) * dVar2) + 1.0869731903076172;
    }
    else {
      if (40.0 < param_1) {
        dVar2 = 1.0 / param_1;
        dVar1 = dVar2 * dVar2;
        dVar3 = (((dVar1 * _DAT_1808d6730 + _DAT_1808d6720) * dVar1 + _DAT_1808d6710) * dVar2 +
                 (dVar1 * _DAT_1808d6728 + _DAT_1808d6718) * dVar1 + _DAT_1808d6708) /
                (((dVar1 * _DAT_1808d6768 + _DAT_1808d6758) * dVar1 + _DAT_1808d6748) * dVar1 +
                 _DAT_1808d6738 +
                ((dVar1 * _DAT_1808d6760 + _DAT_1808d6750) * dVar1 + _DAT_1808d6740) * dVar2) +
                1.0130653381347656;
        if (41.0 <= param_1) {
          if (param_1 - 40.0 <= 709.0) {
            dVar1 = (double)FUN_18061c8d0();
            dVar3 = dVar3 * (dVar1 / param_1);
            if (dVar3 <= 7.637237279200795e+290) {
              dVar3 = dVar3 * 2.3538526683702e+17;
              goto LAB_1805ff284;
            }
          }
          dVar3 = INFINITY;
        }
        else {
          dVar1 = (double)FUN_18061c8d0();
          dVar3 = dVar3 * (dVar1 / param_1);
        }
        goto LAB_1805ff284;
      }
      dVar2 = param_1 / 10.0 - 3.0;
      dVar1 = dVar2 * dVar2;
      dVar3 = (double)FUN_18061c8d0(param_1);
      dVar3 = dVar3 / param_1;
      dVar1 = ((((dVar1 * _DAT_1808d66b0 + _DAT_1808d66a0) * dVar1 + _DAT_1808d6690) * dVar1 +
               _DAT_1808d6680) * dVar1 + _DAT_1808d6670 +
              (((dVar1 * _DAT_1808d66a8 + _DAT_1808d6698) * dVar1 + _DAT_1808d6688) * dVar1 +
              _DAT_1808d6678) * dVar2) /
              ((((dVar1 * _DAT_1808d6700 + _DAT_1808d66f0) * dVar1 + _DAT_1808d66e0) * dVar1 +
               _DAT_1808d66d0) * dVar1 + _DAT_1808d66c0 +
              (((dVar1 * _DAT_1808d66f8 + _DAT_1808d66e8) * dVar1 + _DAT_1808d66d8) * dVar1 +
              _DAT_1808d66c8) * dVar2) + 1.0393753051757812;
    }
  }
  else {
    dVar1 = param_1 * 0.5 - 4.0;
    dVar2 = dVar1 * dVar1;
    dVar3 = (double)FUN_18061c8d0(param_1);
    dVar3 = dVar3 / param_1;
    dVar1 = ((((dVar2 * _DAT_1808d6588 + _DAT_1808d6578) * dVar2 + _DAT_1808d6568) * dVar2 +
             _DAT_1808d6558) * dVar1 +
             ((dVar2 * _DAT_1808d6580 + _DAT_1808d6570) * dVar2 + _DAT_1808d6560) * dVar2 +
            _DAT_1808d6550) /
            ((((dVar2 * _DAT_1808d65c8 + _DAT_1808d65b8) * dVar2 + _DAT_1808d65a8) * dVar2 +
             _DAT_1808d6598) * dVar1 +
             ((dVar2 * _DAT_1808d65c0 + _DAT_1808d65b0) * dVar2 + _DAT_1808d65a0) * dVar2 +
            _DAT_1808d6590) + 1.1589851379394531;
  }
  dVar3 = dVar3 * dVar1;
LAB_1805ff284:
  return dVar3 + param_1;
}



