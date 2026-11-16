// FUN_180636580 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180636580 */

double FUN_180636580(double param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar4 = 0.0;
  uVar3 = (uint)((ulonglong)param_1 >> 0x34) & 0x7ff;
  if (0x7ff0000000000000 < (ulonglong)ABS(param_1)) {
    dVar4 = (double)FUN_1806226a0();
    return dVar4;
  }
  if (uVar3 < 0x3c7) {
    FUN_1806281c0(0x20);
    return 1.5707963267948966;
  }
  if (uVar3 < 0x3ff) {
    dVar5 = param_1;
    if ((longlong)param_1 < 0) {
      dVar5 = -param_1;
    }
    if (uVar3 < 0x3fe) {
      dVar6 = dVar5 * dVar5;
    }
    else {
      dVar6 = (1.0 - dVar5) * 0.5;
      dVar5 = SQRT(dVar6);
      dVar4 = dVar5;
    }
    dVar1 = ((((((dVar6 * 4.82901920344787e-05 + 0.0010924269723507467) * dVar6 -
                0.054998980923568586) * dVar6 + 0.27555817525693765) * dVar6 - 0.4450172168676356) *
              dVar6 + 0.22748583555693502) * dVar6) /
            ((((dVar6 * 0.10586942208720437 - 0.9436391370324927) * dVar6 + 2.76568859157271) *
              dVar6 - 3.2843150572095867) * dVar6 + 1.3649150133416104);
    if (uVar3 < 0x3fe) {
      return 1.5707963267948966 - (param_1 - (6.123233995736766e-17 - dVar1 * param_1));
    }
    if ((longlong)param_1 < 0) {
      dVar4 = (dVar5 * dVar1 - 6.123233995736766e-17) + dVar4;
      return 3.141592653589793 - (dVar4 + dVar4);
    }
    dVar2 = (double)((ulonglong)dVar4 & 0xffffffff00000000);
    dVar4 = (dVar6 - dVar2 * dVar2) / (dVar2 + dVar4);
    return (dVar5 + dVar5) * dVar1 + dVar4 + dVar4 + dVar2 + dVar2;
  }
  if (param_1 == 1.0) {
    return 0.0;
  }
  if (param_1 == -1.0) {
    FUN_1806281c0(0x20);
    return 3.141592653589793;
  }
  dVar4 = (double)FUN_180622420(&DAT_1806b14d0,0xd,0xfff8000000000000,1,8,0x21,param_1,0,1);
  return dVar4;
}



