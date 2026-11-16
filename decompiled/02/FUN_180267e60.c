// FUN_180267e60 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180267e60 */

void FUN_180267e60(longlong param_1,longlong param_2,ulonglong param_3,int *param_4,longlong param_5
                  )

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float in_XMM0_Da;
  float fVar6;
  
  lVar5 = (longlong)(param_3 - 1) >> 1;
  lVar2 = param_2;
  lVar3 = param_2;
  if (param_2 < lVar5) {
    do {
      lVar2 = lVar3 * 2;
      lVar4 = **(longlong **)(param_5 + 8);
      fVar6 = (float)FUN_18025e030(lVar3,(longlong)*(int *)(param_1 + 8 + lVar3 * 8) * 0x98 + lVar4)
      ;
      in_XMM0_Da = (float)FUN_18025e030(fVar6,(longlong)*(int *)(param_1 + 4 + lVar2 * 4) * 0x98 +
                                              lVar4);
      lVar2 = (ulonglong)(fVar6 <= in_XMM0_Da) + 1 + lVar2;
      *(undefined4 *)(param_1 + lVar3 * 4) = *(undefined4 *)(param_1 + lVar2 * 4);
      lVar3 = lVar2;
    } while (lVar2 < lVar5);
  }
  lVar3 = lVar2;
  if ((lVar2 == lVar5) && ((param_3 & 1) == 0)) {
    lVar3 = param_3 - 1;
    *(undefined4 *)(param_1 + lVar2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
  }
  if (param_2 < lVar3) {
    do {
      lVar5 = lVar3 + -1 >> 1;
      lVar2 = **(longlong **)(param_5 + 8);
      iVar1 = *(int *)(param_1 + lVar5 * 4);
      fVar6 = (float)FUN_18025e030(in_XMM0_Da,(longlong)iVar1 * 0x98 + lVar2);
      in_XMM0_Da = (float)FUN_18025e030(fVar6,(longlong)*param_4 * 0x98 + lVar2);
      if (fVar6 <= in_XMM0_Da) goto LAB_180267f81;
      *(int *)(param_1 + lVar3 * 4) = iVar1;
      lVar3 = lVar5;
    } while (param_2 < lVar5);
    *(int *)(param_1 + lVar5 * 4) = *param_4;
  }
  else {
LAB_180267f81:
    *(int *)(param_1 + lVar3 * 4) = *param_4;
  }
  return;
}



