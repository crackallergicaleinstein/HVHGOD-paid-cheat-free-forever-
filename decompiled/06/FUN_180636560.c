// FUN_180636560 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180636560 */

double FUN_180636560(void)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  double dVar4;
  undefined1 in_ZMM0 [64];
  double dVar5;
  double dVar6;
  
  if (((byte)DAT_180bb2128 & 3) != 3) {
    dVar4 = (double)FUN_180636580();
    return dVar4;
  }
  dVar2 = in_ZMM0._0_8_;
  uVar3 = in_ZMM0._4_4_ >> 0x14 & 0x7ff;
  dVar4 = 0.0;
  if (0x7ff0000000000000 < (ulonglong)ABS(dVar2)) {
    dVar4 = (double)FUN_180635000(dVar2,0,dVar2);
    return dVar4;
  }
  if (uVar3 < 0x3c7) {
    FUN_1806281c0(0x20);
    return 1.5707963267948966;
  }
  if (0x3fe < uVar3) {
    if (dVar2 == 1.0) {
      return 0.0;
    }
    if (dVar2 == -1.0) {
      FUN_1806281c0(0x20);
      return 3.141592653589793;
    }
    dVar4 = (double)FUN_180622420(&DAT_1806b14d0,0xd,0xfff8000000000000,1,8,0x21);
    return dVar4;
  }
  dVar5 = dVar2;
  if ((longlong)dVar2 < 0) {
    dVar5 = -dVar2;
  }
  if (uVar3 < 0x3fe) {
    dVar1 = dVar5 * dVar5;
  }
  else {
    dVar1 = (1.0 - dVar5) * 0.5;
    dVar5 = SQRT(dVar1);
    dVar4 = dVar5;
  }
  dVar6 = ((dVar1 * (dVar1 * (dVar1 * (dVar1 * (dVar1 * 4.82901920344787e-05 + 0.0010924269723507467
                                               ) - 0.054998980923568586) + 0.27555817525693765) -
                    0.4450172168676356) + 0.22748583555693502) * dVar1) /
          (dVar1 * (dVar1 * (dVar1 * (dVar1 * 0.10586942208720437 - 0.9436391370324927) +
                            2.76568859157271) - 3.2843150572095867) + 1.3649150133416104);
  if (uVar3 < 0x3fe) {
    return 1.5707963267948966 - (dVar2 - (-(dVar6 * dVar2) + 6.123233995736766e-17));
  }
  if ((longlong)dVar2 < 0) {
    dVar4 = (dVar5 * dVar6 - 6.123233995736766e-17) + dVar4;
    return 3.141592653589793 - (dVar4 + dVar4);
  }
  dVar2 = (double)((ulonglong)dVar4 & 0xffffffff00000000);
  dVar4 = (-(dVar2 * dVar2) + dVar1) / (dVar2 + dVar4);
  return dVar6 * (dVar5 + dVar5) + dVar4 + dVar4 + dVar2 + dVar2;
}



