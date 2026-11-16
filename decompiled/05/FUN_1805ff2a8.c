// FUN_1805ff2a8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ff2a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1805ff2a8(double param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 local_res8 [24];
  double local_res20;
  
  if (param_1 < 0.0) {
    dVar1 = (double)FUN_1805ffa3c(1,-param_1,param_2,param_3);
    return -dVar1;
  }
  if (param_1 == 0.0) {
    return -INFINITY;
  }
  if (param_1 <= 6.0) {
    dVar2 = param_1 / 3.0 - 1.0;
    dVar4 = (param_1 - 0.3725074107813666) - 1.3140183414386028e-17;
    dVar3 = dVar2 * dVar2;
    dVar1 = ((((dVar3 * _DAT_1808d6258 + _DAT_1808d6248) * dVar3 + _DAT_1808d6238) * dVar3 +
             _DAT_1808d6228) * dVar3 + _DAT_1808d6218) * dVar2 +
            (((dVar3 * _DAT_1808d6250 + _DAT_1808d6240) * dVar3 + _DAT_1808d6230) * dVar3 +
            _DAT_1808d6220) * dVar3 + _DAT_1808d6210;
    dVar2 = (((dVar3 * _DAT_1808d6298 + _DAT_1808d6288) * dVar3 + _DAT_1808d6278) * dVar3 +
            _DAT_1808d6268) * dVar2 +
            ((dVar3 * _DAT_1808d6290 + _DAT_1808d6280) * dVar3 + _DAT_1808d6270) * dVar3 +
            _DAT_1808d6260;
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
      dVar1 = ((((dVar1 * _DAT_1808d6360 + _DAT_1808d6350) * dVar1 + _DAT_1808d6340) * dVar1 +
               _DAT_1808d6330) * dVar1 + _DAT_1808d6320 +
              (((dVar1 * _DAT_1808d6358 + _DAT_1808d6348) * dVar1 + _DAT_1808d6338) * dVar1 +
              _DAT_1808d6328) * dVar2) /
              ((((dVar1 * _DAT_1808d63b0 + _DAT_1808d63a0) * dVar1 + _DAT_1808d6390) * dVar1 +
               _DAT_1808d6380) * dVar1 + _DAT_1808d6370 +
              (((dVar1 * _DAT_1808d63a8 + _DAT_1808d6398) * dVar1 + _DAT_1808d6388) * dVar1 +
              _DAT_1808d6378) * dVar2) + 1.0869731903076172;
    }
    else {
      if (40.0 < param_1) {
        dVar2 = 1.0 / param_1;
        dVar1 = dVar2 * dVar2;
        dVar3 = (((dVar1 * _DAT_1808d6480 + _DAT_1808d6470) * dVar1 + _DAT_1808d6460) * dVar2 +
                 (dVar1 * _DAT_1808d6478 + _DAT_1808d6468) * dVar1 + _DAT_1808d6458) /
                (((dVar1 * _DAT_1808d64b8 + _DAT_1808d64a8) * dVar1 + _DAT_1808d6498) * dVar1 +
                 _DAT_1808d6488 +
                ((dVar1 * _DAT_1808d64b0 + _DAT_1808d64a0) * dVar1 + _DAT_1808d6490) * dVar2) +
                1.0130653381347656;
        if (41.0 <= param_1) {
          if (param_1 - 40.0 <= 709.0) {
            dVar1 = (double)FUN_18061c8d0();
            dVar3 = dVar3 * (dVar1 / param_1);
            if (dVar3 <= 7.637237279200795e+290) {
              dVar3 = dVar3 * 2.3538526683702e+17;
              goto LAB_1805ff90c;
            }
          }
          dVar3 = INFINITY;
        }
        else {
          dVar1 = (double)FUN_18061c8d0();
          dVar3 = dVar3 * (dVar1 / param_1);
        }
        goto LAB_1805ff90c;
      }
      dVar2 = param_1 / 10.0 - 3.0;
      dVar1 = dVar2 * dVar2;
      dVar3 = (double)FUN_18061c8d0(param_1);
      dVar3 = dVar3 / param_1;
      dVar1 = ((((dVar1 * _DAT_1808d6400 + _DAT_1808d63f0) * dVar1 + _DAT_1808d63e0) * dVar1 +
               _DAT_1808d63d0) * dVar1 + _DAT_1808d63c0 +
              (((dVar1 * _DAT_1808d63f8 + _DAT_1808d63e8) * dVar1 + _DAT_1808d63d8) * dVar1 +
              _DAT_1808d63c8) * dVar2) /
              ((((dVar1 * _DAT_1808d6450 + _DAT_1808d6440) * dVar1 + _DAT_1808d6430) * dVar1 +
               _DAT_1808d6420) * dVar1 + _DAT_1808d6410 +
              (((dVar1 * _DAT_1808d6448 + _DAT_1808d6438) * dVar1 + _DAT_1808d6428) * dVar1 +
              _DAT_1808d6418) * dVar2) + 1.0393753051757812;
    }
  }
  else {
    dVar1 = param_1 * 0.5 - 4.0;
    dVar2 = dVar1 * dVar1;
    dVar3 = (double)FUN_18061c8d0(param_1);
    dVar3 = dVar3 / param_1;
    dVar1 = ((((dVar2 * _DAT_1808d62d8 + _DAT_1808d62c8) * dVar2 + _DAT_1808d62b8) * dVar2 +
             _DAT_1808d62a8) * dVar1 +
             ((dVar2 * _DAT_1808d62d0 + _DAT_1808d62c0) * dVar2 + _DAT_1808d62b0) * dVar2 +
            _DAT_1808d62a0) /
            ((((dVar2 * _DAT_1808d6318 + _DAT_1808d6308) * dVar2 + _DAT_1808d62f8) * dVar2 +
             _DAT_1808d62e8) * dVar1 +
             ((dVar2 * _DAT_1808d6310 + _DAT_1808d6300) * dVar2 + _DAT_1808d62f0) * dVar2 +
            _DAT_1808d62e0) + 1.1589851379394531;
  }
  dVar3 = dVar3 * dVar1;
LAB_1805ff90c:
  return dVar3 + param_1;
}



