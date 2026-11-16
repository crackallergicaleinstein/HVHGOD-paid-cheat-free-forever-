// FUN_1805fe038 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fe038 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_1805fe038(double param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = param_1 - 1.0;
  dVar2 = dVar3 * dVar3;
  dVar1 = ((param_1 - 1.4616321446374059) - 3.309564688275257e-10) - 9.016312093258695e-20;
  return ((((dVar2 * _DAT_1808d7020 + _DAT_1808d7010) * dVar2 + _DAT_1808d7000) * dVar3 +
           (dVar2 * _DAT_1808d7018 + _DAT_1808d7008) * dVar2 + _DAT_1808d6ff8) /
         (((dVar2 * _DAT_1808d7058 + _DAT_1808d7048) * dVar2 + _DAT_1808d7038) * dVar2 +
          _DAT_1808d7028 +
         ((dVar2 * _DAT_1808d7050 + _DAT_1808d7040) * dVar2 + _DAT_1808d7030) * dVar3)) * dVar1 +
         dVar1 * 0.9955816268920898;
}



