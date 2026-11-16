// FUN_1805fdad8 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fdad8 */

double * FUN_1805fdad8(double *param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  
  if (param_2 < 0x82) {
    uVar2 = param_2;
    do {
      if (param_2 + param_3 <= uVar2) break;
      lVar1 = uVar2 * 8;
      uVar2 = uVar2 + 1;
      *param_1 = *(double *)(&DAT_1806ab450 + lVar1);
      param_1 = param_1 + 1;
    } while (uVar2 < 0x82);
  }
  uVar2 = 0x82;
  if (0x82 < param_2) {
    uVar2 = param_2;
  }
  for (; uVar2 < param_3 + param_2; uVar2 = uVar2 + 1) {
    *param_1 = (double)(int)((-(uint)((uVar2 & 1) != 0) & 2) - 1) * INFINITY;
    param_1 = param_1 + 1;
  }
  return param_1;
}



