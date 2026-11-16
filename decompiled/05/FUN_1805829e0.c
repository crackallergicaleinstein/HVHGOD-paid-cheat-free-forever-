// FUN_1805829e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805829e0 */

void FUN_1805829e0(ulonglong param_1,ulonglong param_2,longlong param_3,longlong param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  
  if (param_1 <= param_2) {
    lVar9 = param_3;
    if (*(int *)(param_3 + 0x1c) <= *(int *)(param_4 + 0x1c)) {
      lVar9 = param_4;
      param_4 = param_3;
    }
    iVar1 = *(int *)(param_4 + 0x18);
    iVar2 = *(int *)(lVar9 + 0x18);
    iVar3 = *(int *)(param_4 + 0x1c);
    iVar4 = *(int *)(lVar9 + 0x1c);
    if ((iVar1 == iVar2) || (iVar3 == iVar4)) {
      piVar8 = (int *)(param_1 + 0x18);
      lVar9 = (param_2 - param_1) / 0x30 + 1;
      do {
        iVar5 = piVar8[1];
        if (iVar3 < iVar5) {
          if (iVar5 < iVar4) {
            iVar5 = iVar1;
          }
          else {
            iVar5 = iVar5 + (iVar2 - iVar4);
          }
        }
        else {
          iVar5 = iVar5 + (iVar1 - iVar3);
        }
        *piVar8 = iVar5;
        piVar8 = piVar8 + 0xc;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    else {
      iVar5 = FUN_180573310(iVar2 - iVar1,iVar4 - iVar3);
      piVar8 = (int *)(param_1 + 0x18);
      lVar9 = (param_2 - param_1) / 0x30 + 1;
      do {
        iVar6 = piVar8[1];
        if (iVar3 < iVar6) {
          if (iVar6 < iVar4) {
            lVar7 = (longlong)(iVar6 - iVar3) * (longlong)iVar5;
            iVar6 = (int)((ulonglong)((lVar7 >> 0x3f) + 0x8000 + lVar7) >> 0x10) + iVar1;
          }
          else {
            iVar6 = iVar6 + (iVar2 - iVar4);
          }
        }
        else {
          iVar6 = iVar6 + (iVar1 - iVar3);
        }
        *piVar8 = iVar6;
        piVar8 = piVar8 + 0xc;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  return;
}



