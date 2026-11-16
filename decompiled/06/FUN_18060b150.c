// FUN_18060b150 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060b150 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18060b150(double param_1,double param_2)

{
  ulonglong uVar1;
  double dVar2;
  longlong lVar3;
  double dVar4;
  ushort in_FPUStatusWord;
  ulonglong uVar5;
  
  dVar2 = ABS(param_1);
  dVar4 = ABS(param_2);
  if (0x7ff0000000000000 < (ulonglong)dVar4) {
    return;
  }
  if (0x7ff0000000000000 < (ulonglong)dVar2) {
    return;
  }
  if (dVar2 != INFINITY) {
    if (dVar4 == 0.0) {
      uVar5 = 0x7ff8000000000000;
      goto LAB_18060b38c;
    }
    if (dVar2 == dVar4) {
      return;
    }
    if (ABS(param_1) <= ABS(param_2)) {
      return;
    }
    uVar5 = ((ulonglong)param_1 & 0x7ff0000000000000) >> 0x34;
    uVar1 = ((ulonglong)param_2 & 0x7ff0000000000000) >> 0x34;
    if (((uVar5 == 0) || (uVar1 == 0)) || (lVar3 = uVar5 - uVar1, 0x33 < lVar3)) {
LAB_18060b330:
      do {
      } while ((in_FPUStatusWord & 0x400) == 0x400);
      return;
    }
    if (lVar3 != 0x7ff) {
      if (DAT_180bb2128 != 0) {
        return;
      }
      if ((longlong)
          ((((ulonglong)(double)(longlong)(ABS(param_1) / ABS(param_2)) & 0x7ff0000000000000) >>
           0x34) + (uVar1 - 0x7fe)) < 0x3ff) {
        return;
      }
      goto LAB_18060b330;
    }
  }
  uVar5 = (ulonglong)param_1 | (ulonglong)DAT_1806ae060;
LAB_18060b38c:
  FUN_180622420(&DAT_1806ae010,0x16,uVar5,1,8,0x21);
                    /* WARNING: Read-only address (ram,0x0001806ae020) is written */
                    /* WARNING: Read-only address (ram,0x0001806ae060) is written */
                    /* WARNING: Read-only address (ram,0x0001806ae070) is written */
  return;
}



