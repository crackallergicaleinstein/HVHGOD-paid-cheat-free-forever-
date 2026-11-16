// FUN_1802ae160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802ae160 */

void FUN_1802ae160(longlong param_1,longlong param_2,ulonglong param_3,longlong param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar3 = (longlong)(param_3 - 1) >> 1;
  lVar2 = param_2;
  while (lVar2 < lVar3) {
    lVar1 = lVar2 * 0x408;
    lVar2 = (ulonglong)
            (*(float *)(lVar2 * 0x810 + 0x83c + param_1) <=
            *(float *)(lVar2 * 0x810 + 0x434 + param_1)) + 1 + lVar2 * 2;
    FUN_1802aceb0(lVar1 + param_1,lVar2 * 0x408 + param_1);
  }
  if ((lVar2 == lVar3) && ((param_3 & 1) == 0)) {
    FUN_1802aceb0(lVar2 * 0x408 + param_1,param_3 * 0x408 + -0x408 + param_1);
    lVar2 = param_3 - 1;
  }
  while ((param_2 < lVar2 &&
         (lVar3 = lVar2 + -1 >> 1,
         *(float *)(param_4 + 0x2c) < *(float *)(lVar3 * 0x408 + param_1 + 0x2c)))) {
    FUN_1802aceb0(lVar2 * 0x408 + param_1);
    lVar2 = lVar3;
  }
  FUN_1802aceb0(lVar2 * 0x408 + param_1,param_4);
  return;
}



