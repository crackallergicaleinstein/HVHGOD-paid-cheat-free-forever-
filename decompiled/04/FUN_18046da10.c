// FUN_18046da10 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18046da10 */

void FUN_18046da10(int *param_1,longlong param_2,longlong param_3,int *param_4,longlong param_5)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  
  piVar6 = param_1;
  if (0x20 < param_3) {
    lVar9 = (param_3 - 0x21U >> 5) + 1;
    do {
      piVar6 = (int *)FUN_18046d590(piVar6,piVar6 + 0x20,param_5);
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  FUN_18046d590(piVar6,param_2,param_5);
  if (param_3 < 0x21) {
    return;
  }
  piVar7 = param_1;
  piVar6 = param_4;
  lVar9 = param_3;
LAB_18046dab0:
  lVar9 = lVar9 + -0x20;
  piVar2 = piVar7 + 0x20;
  lVar10 = 0x20;
  if (lVar9 < 0x20) {
    lVar10 = lVar9;
  }
  lVar9 = lVar9 - lVar10;
  piVar3 = piVar2 + lVar10;
  piVar8 = piVar2;
  do {
    iVar4 = *piVar8;
    iVar5 = *piVar7;
    bVar11 = (&DAT_18077eecc)[(longlong)iVar4 * 0x20] == '\x03';
    if (bVar11 == ((&DAT_18077eecc)[(longlong)iVar5 * 0x20] == '\x03')) {
      bVar11 = *(float *)((longlong)iVar4 * 0x9c + 4 + param_5) <
               *(float *)((longlong)iVar5 * 0x9c + 4 + param_5);
    }
    piVar1 = piVar6 + 1;
    if (bVar11) {
      piVar8 = piVar8 + 1;
      *piVar6 = iVar4;
      if (piVar8 == piVar3) break;
    }
    else {
      piVar7 = piVar7 + 1;
      *piVar6 = iVar5;
      if (piVar7 == piVar2) {
        lVar10 = (longlong)piVar3 - (longlong)piVar8;
        goto LAB_18046db65;
      }
    }
    piVar6 = piVar1;
  } while( true );
  lVar10 = (longlong)piVar2 - (longlong)piVar7;
  piVar8 = piVar7;
LAB_18046db65:
  FUN_18063aed0(piVar1,piVar8,lVar10);
  piVar6 = (int *)(lVar10 + (longlong)piVar1);
  piVar7 = piVar3;
  if (lVar9 < 0x21) {
    FUN_18063aed0(piVar6,piVar3,param_2 - (longlong)piVar3);
    lVar9 = 0x40;
    FUN_18046e470(param_4,param_4 + param_3,param_1,0x40,param_3,param_5);
    if (param_3 + -1 < 0x80) {
      return;
    }
    do {
      FUN_18046e470(param_1,param_2,param_4,lVar9 * 2,param_3,param_5);
      lVar9 = lVar9 * 4;
      FUN_18046e470(param_4,param_4 + param_3,param_1,lVar9,param_3,param_5);
    } while (lVar9 <= (param_3 + -1) / 2);
    return;
  }
  goto LAB_18046dab0;
}



