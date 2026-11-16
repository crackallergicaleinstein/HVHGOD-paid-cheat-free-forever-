// FUN_1806012d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1806012d0 */

double FUN_1806012d0(double *param_1)

{
  undefined4 *puVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *param_1;
  if (-1.0 <= dVar2) {
    if (dVar2 == -1.0) {
      dVar2 = -INFINITY;
    }
    else {
      if (0.5 < ABS(dVar2)) {
        dVar2 = (double)FUN_18061cdb0(dVar2 + 1.0);
        return dVar2;
      }
      if (2.220446049250313e-16 <= ABS(dVar2)) {
        dVar3 = dVar2 * dVar2;
        dVar2 = (((((dVar3 * 0.011294864812099712 + 0.5805293794926966) * dVar3 + 0.9924906354336586
                   ) * dVar3 + 3.5495104378055055e-16) * dVar2 +
                  ((dVar3 * 0.13703234928513214 + 1.1143969784156509) * dVar3 + 0.3333333333333284)
                  * dVar3 + 1.5141069795941984e-17) /
                 ((((0.31706251443180916 - dVar3 * 2.9252538135177775e-06) * dVar3 +
                   4.159201143419005) * dVar3 + 3.72747190630115) * dVar2 +
                  ((dVar3 * 0.022665554431410242 + 1.6423855110312755) * dVar3 + 5.538794864972034)
                  * dVar3 + 1.0) + (1.0 - dVar2 * 0.5)) * dVar2;
      }
    }
  }
  else {
    puVar1 = (undefined4 *)FUN_18060fe00();
    dVar2 = NAN;
    *puVar1 = 0x21;
  }
  return dVar2;
}



