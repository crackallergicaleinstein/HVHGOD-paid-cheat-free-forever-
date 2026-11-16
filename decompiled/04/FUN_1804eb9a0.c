// FUN_1804eb9a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804eb9a0 */

void FUN_1804eb9a0(int *param_1,int param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  short sVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  
  iVar7 = param_1[1];
  if (param_2 <= iVar7) {
    *param_1 = param_2;
    return;
  }
  if (iVar7 == 0) {
    iVar4 = 8;
  }
  else {
    iVar4 = iVar7 / 2 + iVar7;
  }
  iVar9 = param_2;
  if (param_2 < iVar4) {
    iVar9 = iVar4;
  }
  if (iVar9 <= iVar7) {
    *param_1 = param_2;
    return;
  }
  uVar5 = FUN_1804b8110((longlong)iVar9 << 2);
  if (*(longlong *)(param_1 + 2) != 0) {
    FUN_18063aed0(uVar5,*(longlong *)(param_1 + 2),(longlong)*param_1 << 2);
    lVar3 = DAT_180bb8ae8;
    lVar2 = *(longlong *)(param_1 + 2);
    if ((lVar2 != 0) && (DAT_180bb8ae8 != 0)) {
      piVar1 = (int *)(DAT_180bb8ae8 + 4);
      piVar8 = (int *)(DAT_180bb8ae8 + 0x2998 + (longlong)*(short *)(DAT_180bb8ae8 + 0x2994) * 8);
      if (*piVar8 != *piVar1) {
        iVar7 = *(short *)(DAT_180bb8ae8 + 0x2994) + 1;
        sVar6 = (short)iVar7 + (short)(iVar7 / 6) * -6;
        *(short *)(DAT_180bb8ae8 + 0x2994) = sVar6;
        piVar8 = (int *)(lVar3 + ((longlong)sVar6 + 0x533) * 8);
        *piVar8 = *piVar1;
        piVar8[1] = 0;
      }
      *(short *)((longlong)piVar8 + 6) = *(short *)((longlong)piVar8 + 6) + 1;
      piVar1 = (int *)(lVar3 + 0x2990);
      *piVar1 = *piVar1 + 1;
    }
    thunk_FUN_180621380(lVar2);
  }
  *(undefined8 *)(param_1 + 2) = uVar5;
  param_1[1] = iVar9;
  *param_1 = param_2;
  return;
}



