// FUN_18026af70 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026af70 */

void FUN_18026af70(int *param_1,int *param_2,int *param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  lVar4 = **(longlong **)(param_4 + 8);
  fVar6 = (float)FUN_18025e030(param_1,(longlong)iVar1 * 0x98 + lVar4);
  fVar7 = (float)FUN_18025e030(fVar6,(longlong)iVar2 * 0x98 + lVar4);
  if (fVar6 == fVar7) {
    bVar3 = iVar1 < iVar2;
  }
  else {
    bVar3 = fVar7 < fVar6;
  }
  if (bVar3) {
    *param_2 = iVar2;
    *param_1 = iVar1;
  }
  iVar1 = *param_3;
  iVar2 = *param_2;
  lVar4 = **(longlong **)(param_4 + 8);
  fVar6 = (float)FUN_18025e030(fVar7,(longlong)iVar1 * 0x98 + lVar4);
  fVar7 = (float)FUN_18025e030(fVar6,(longlong)iVar2 * 0x98 + lVar4);
  if (fVar6 == fVar7) {
    bVar3 = iVar1 < iVar2;
  }
  else {
    bVar3 = fVar7 < fVar6;
  }
  if (bVar3) {
    *param_3 = iVar2;
    *param_2 = iVar1;
    lVar5 = (longlong)*param_1;
    lVar4 = **(longlong **)(param_4 + 8);
    fVar6 = (float)FUN_18025e030(fVar7,lVar4 + (longlong)iVar1 * 0x98);
    fVar7 = (float)FUN_18025e030(fVar6,lVar5 * 0x98 + lVar4);
    if (fVar6 == fVar7) {
      bVar3 = iVar1 < (int)lVar5;
    }
    else {
      bVar3 = fVar7 < fVar6;
    }
    if (bVar3) {
      *param_2 = (int)lVar5;
      *param_1 = iVar1;
    }
  }
  return;
}



