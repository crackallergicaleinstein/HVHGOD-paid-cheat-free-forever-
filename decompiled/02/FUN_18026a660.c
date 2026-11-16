// FUN_18026a660 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026a660 */

void FUN_18026a660(longlong param_1,longlong param_2,ulonglong param_3,int *param_4,longlong param_5
                  )

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float in_XMM0_Da;
  float fVar9;
  
  lVar4 = (longlong)(param_3 - 1) >> 1;
  lVar6 = param_2;
  lVar8 = param_2;
  if (param_2 < lVar4) {
    do {
      lVar8 = lVar6 * 2;
      iVar1 = *(int *)(param_1 + 8 + lVar6 * 8);
      lVar7 = (longlong)*(int *)(param_1 + 4 + lVar6 * 8);
      lVar5 = **(longlong **)(param_5 + 8);
      fVar9 = (float)FUN_18025e030(in_XMM0_Da,(longlong)iVar1 * 0x98 + lVar5);
      in_XMM0_Da = (float)FUN_18025e030(fVar9,lVar7 * 0x98 + lVar5);
      if (fVar9 == in_XMM0_Da) {
        bVar3 = iVar1 < (int)lVar7;
      }
      else {
        bVar3 = in_XMM0_Da < fVar9;
      }
      lVar8 = ((ulonglong)bVar3 ^ 1) + 1 + lVar8;
      *(undefined4 *)(param_1 + lVar6 * 4) = *(undefined4 *)(param_1 + lVar8 * 4);
      lVar6 = lVar8;
    } while (lVar8 < lVar4);
  }
  if ((lVar8 == lVar4) && ((param_3 & 1) == 0)) {
    *(undefined4 *)(param_1 + lVar8 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    lVar8 = param_3 - 1;
  }
  if (param_2 < lVar8) {
    do {
      iVar1 = *param_4;
      lVar4 = lVar8 + -1 >> 1;
      lVar6 = **(longlong **)(param_5 + 8);
      iVar2 = *(int *)(param_1 + lVar4 * 4);
      fVar9 = (float)FUN_18025e030(in_XMM0_Da,(longlong)iVar2 * 0x98 + lVar6);
      in_XMM0_Da = (float)FUN_18025e030(fVar9,(longlong)iVar1 * 0x98 + lVar6);
      if (fVar9 == in_XMM0_Da) {
        bVar3 = iVar2 < iVar1;
      }
      else {
        bVar3 = in_XMM0_Da < fVar9;
      }
      if (!bVar3) {
        *(int *)(param_1 + lVar8 * 4) = iVar1;
        return;
      }
      *(int *)(param_1 + lVar8 * 4) = iVar2;
      lVar8 = lVar4;
    } while (param_2 < lVar4);
    *(int *)(param_1 + lVar4 * 4) = *param_4;
  }
  else {
    *(int *)(param_1 + lVar8 * 4) = *param_4;
  }
  return;
}



