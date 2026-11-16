// FUN_1805fe128 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fe128 */

double FUN_1805fe128(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  param_1 = param_1 - 1.0;
  dVar2 = 1.0 / (param_1 * param_1);
  dVar1 = dVar2 * dVar2;
  dVar3 = (double)FUN_18061cdb0(param_1);
  return (dVar3 + 1.0 / (param_1 + param_1)) -
         ((((-0.021092796092796094 - dVar1 * 0.4432598039215686) * dVar1 - 0.004166666666666667) *
           dVar1 - 0.008333333333333333) * dVar2 +
          ((dVar1 * 0.08333333333333333 + 0.007575757575757576) * dVar1 + 0.003968253968253968) *
          dVar1 + 0.08333333333333333) * dVar2;
}



