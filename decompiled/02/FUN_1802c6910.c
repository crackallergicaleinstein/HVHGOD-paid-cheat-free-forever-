// FUN_1802c6910 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c6910 */

void FUN_1802c6910(longlong param_1,longlong param_2,ulonglong param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  lVar4 = (longlong)(param_3 - 1) >> 1;
  lVar3 = param_2;
  while (lVar3 < lVar4) {
    lVar5 = lVar3 * 2;
    lVar5 = (ulonglong)
            (*(float *)(param_1 + (lVar5 + 2) * 0x10) <= *(float *)(param_1 + (lVar5 + 1) * 0x10)) +
            1 + lVar5;
    *(undefined4 *)(param_1 + lVar3 * 0x10) = *(undefined4 *)(param_1 + lVar5 * 0x10);
    *(undefined8 *)(param_1 + 8 + lVar3 * 0x10) = *(undefined8 *)(param_1 + 8 + lVar5 * 0x10);
    lVar3 = lVar5;
  }
  if ((lVar3 == lVar4) && ((param_3 & 1) == 0)) {
    *(undefined4 *)(param_1 + lVar3 * 0x10) = *(undefined4 *)(param_1 + -0x10 + param_3 * 0x10);
    *(undefined8 *)(param_1 + 8 + lVar3 * 0x10) = *(undefined8 *)(param_1 + -8 + param_3 * 0x10);
    lVar3 = param_3 - 1;
  }
  if (param_2 < lVar3) {
    fVar1 = *param_4;
    do {
      lVar4 = lVar3 + -1 >> 1;
      fVar2 = *(float *)(param_1 + lVar4 * 0x10);
      if (fVar2 <= fVar1) break;
      *(float *)(param_1 + lVar3 * 0x10) = fVar2;
      *(undefined8 *)(param_1 + 8 + lVar3 * 0x10) = *(undefined8 *)(param_1 + 8 + lVar4 * 0x10);
      lVar3 = lVar4;
    } while (param_2 < lVar4);
  }
  *(float *)(param_1 + lVar3 * 0x10) = *param_4;
  *(undefined8 *)(param_1 + 8 + lVar3 * 0x10) = *(undefined8 *)(param_4 + 2);
  return;
}



