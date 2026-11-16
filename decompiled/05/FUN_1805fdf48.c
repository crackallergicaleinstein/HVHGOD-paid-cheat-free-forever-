// FUN_1805fdf48 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fdf48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1805fdf48(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = param_1 - 1.0;
  dVar2 = dVar3 * dVar3;
  dVar1 = ((param_1 - 1.4616321446374059) - 3.309564688275257e-10) - 9.016312093258695e-20;
  return ((((dVar2 * _DAT_1808d7088 + _DAT_1808d7078) * dVar2 + _DAT_1808d7068) * dVar3 +
           (dVar2 * _DAT_1808d7080 + _DAT_1808d7070) * dVar2 + _DAT_1808d7060) /
         (((dVar2 * _DAT_1808d70c0 + _DAT_1808d70b0) * dVar2 + _DAT_1808d70a0) * dVar2 +
          _DAT_1808d7090 +
         ((dVar2 * _DAT_1808d70b8 + _DAT_1808d70a8) * dVar2 + _DAT_1808d7098) * dVar3)) * dVar1 +
         dVar1 * 0.9955816268920898;
}



