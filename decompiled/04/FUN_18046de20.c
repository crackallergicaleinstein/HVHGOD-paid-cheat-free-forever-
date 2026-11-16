// FUN_18046de20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046de20 */

void FUN_18046de20(int *param_1,longlong param_2,longlong param_3,int *param_4,longlong param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  longlong lVar7;
  int *piVar8;
  int *piVar9;
  longlong lVar10;
  
  piVar6 = param_1;
  if (0x20 < param_3) {
    lVar7 = (param_3 - 0x21U >> 5) + 1;
    do {
      piVar6 = (int *)FUN_18046d7f0(piVar6,piVar6 + 0x20,param_5);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  FUN_18046d7f0(piVar6,param_2,param_5);
  if (param_3 < 0x21) {
    return;
  }
  piVar6 = param_4;
  piVar8 = param_1;
  lVar7 = param_3;
LAB_18046deb0:
  lVar7 = lVar7 + -0x20;
  piVar2 = piVar8 + 0x20;
  lVar10 = 0x20;
  if (lVar7 < 0x20) {
    lVar10 = lVar7;
  }
  lVar7 = lVar7 - lVar10;
  piVar3 = piVar2 + lVar10;
  piVar9 = piVar2;
  do {
    iVar4 = *piVar8;
    piVar1 = piVar6 + 1;
    iVar5 = *piVar9;
    if (*(float *)((longlong)iVar4 * 0x9c + 4 + param_5) <=
        *(float *)((longlong)iVar5 * 0x9c + 4 + param_5)) {
      piVar8 = piVar8 + 1;
      *piVar6 = iVar4;
      if (piVar8 == piVar2) {
        lVar10 = (longlong)piVar3 - (longlong)piVar9;
        FUN_18063aed0(piVar1,piVar9,lVar10);
        goto LAB_18046df43;
      }
    }
    else {
      piVar9 = piVar9 + 1;
      *piVar6 = iVar5;
      if (piVar9 == piVar3) break;
    }
    piVar6 = piVar1;
  } while( true );
  lVar10 = (longlong)piVar2 - (longlong)piVar8;
  FUN_18063aed0(piVar1,piVar8,lVar10);
LAB_18046df43:
  piVar6 = (int *)(lVar10 + (longlong)piVar1);
  piVar8 = piVar3;
  if (lVar7 < 0x21) {
    FUN_18063aed0(piVar6,piVar3,param_2 - (longlong)piVar3);
    lVar7 = 0x40;
    FUN_18046e860(param_4,param_4 + param_3,param_1,0x40,param_3,param_5);
    if (param_3 + -1 < 0x80) {
      return;
    }
    do {
      FUN_18046e860(param_1,param_2,param_4,lVar7 * 2,param_3,param_5);
      lVar7 = lVar7 * 4;
      FUN_18046e860(param_4,param_4 + param_3,param_1,lVar7,param_3,param_5);
    } while (lVar7 <= (param_3 + -1) / 2);
    return;
  }
  goto LAB_18046deb0;
}



