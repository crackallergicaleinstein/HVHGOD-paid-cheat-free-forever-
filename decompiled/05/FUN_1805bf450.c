// FUN_1805bf450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bf450 */

void FUN_1805bf450(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  
  lVar10 = (longlong)param_2;
  iVar6 = param_1[0x205];
  *(bool *)(param_1 + 0x208) = param_2 < param_1[0x204];
  if ((0 < iVar6) &&
     (0x20 < (int)((ulonglong)(iVar6 * lVar10 + 0x8000 + (iVar6 * lVar10 >> 0x3f)) >> 0x10))) {
    iVar6 = (int)(0x200000 / (longlong)param_2);
  }
  uVar9 = 0;
  param_1[0x206] = iVar6;
  uVar8 = 0;
  do {
    if (uVar8 == 0) {
      piVar1 = param_1;
    }
    else if (uVar8 == 1) {
      piVar1 = param_1 + 0x81;
    }
    else if (uVar8 == 2) {
      piVar1 = param_1 + 0x102;
    }
    else {
      piVar1 = param_1 + 0x183;
    }
    iVar6 = *piVar1;
    piVar1 = piVar1 + 1;
    for (; iVar6 != 0; iVar6 = iVar6 + -1) {
      piVar1[7] = (int)((ulonglong)(piVar1[2] * lVar10 + (piVar1[2] * lVar10 >> 0x3f) + 0x8000) >>
                       0x10) + param_3;
      piVar1[6] = (int)((ulonglong)(piVar1[3] * lVar10 + (piVar1[3] * lVar10 >> 0x3f) + 0x8000) >>
                       0x10) + param_3;
      piVar1[5] = (int)((ulonglong)(piVar1[1] * lVar10 + (piVar1[1] * lVar10 >> 0x3f) + 0x8000) >>
                       0x10);
      piVar1[4] = (int)((ulonglong)((*piVar1 * lVar10 >> 0x3f) + 0x8000 + *piVar1 * lVar10) >> 0x10)
                  + 0x20 + param_3 & 0xffffffc0;
      piVar1 = piVar1 + 8;
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 < 4);
  do {
    lVar4 = 0x60c;
    piVar1 = param_1 + 0x81;
    if (uVar9 == 0) {
      lVar4 = 0x408;
      piVar1 = param_1;
    }
    piVar7 = piVar1 + 1;
    for (iVar6 = *piVar1; iVar6 != 0; iVar6 = iVar6 + -1) {
      iVar5 = *(int *)(lVar4 + (longlong)param_1);
      piVar1 = (int *)((longlong)param_1 + lVar4 + 4);
      if (iVar5 != 0) {
        do {
          iVar2 = *piVar7 - *piVar1;
          iVar3 = *piVar1 - *piVar7;
          if (-1 < iVar2) {
            iVar3 = iVar2;
          }
          if ((int)((ulonglong)(iVar3 * lVar10 + (iVar3 * lVar10 >> 0x3f) + 0x8000) >> 0x10) < 0x40)
          {
            piVar7[7] = piVar1[7];
            piVar7[6] = piVar1[6];
            piVar7[4] = piVar1[4];
            piVar7[5] = piVar1[5];
            break;
          }
          piVar1 = piVar1 + 8;
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      piVar7 = piVar7 + 8;
    }
    uVar9 = uVar9 + 1;
    if (1 < uVar9) {
      return;
    }
  } while( true );
}



