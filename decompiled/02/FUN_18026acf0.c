// FUN_18026acf0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18026acf0 */

void FUN_18026acf0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,undefined8 param_6,undefined8 param_7,longlong param_8)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  float in_XMM0_Da;
  float fVar9;
  float fVar10;
  
  if (param_5 < param_4) {
    lVar2 = param_5 >> 1;
    uVar6 = param_2 - param_1 >> 5;
    lVar4 = lVar2 * 0x20 + param_2;
    lVar8 = param_1;
    if (0 < (longlong)uVar6) {
      lVar7 = **(longlong **)(param_8 + 8);
      iVar1 = **(int **)(lVar4 + 8);
      do {
        uVar5 = uVar6 >> 1;
        fVar9 = (float)FUN_18025e110(in_XMM0_Da,(longlong)iVar1 * 0x98 + lVar7);
        lVar3 = (longlong)**(int **)(uVar5 * 0x20 + 8 + lVar8);
        in_XMM0_Da = (float)FUN_18025e110(lVar3,lVar3 * 0x98 + lVar7);
        if (in_XMM0_Da <= fVar9) {
          lVar8 = lVar8 + 0x20 + uVar5 * 0x20;
          uVar5 = uVar6 + (-1 - uVar5);
        }
        uVar6 = uVar5;
      } while (0 < (longlong)uVar5);
    }
    lVar7 = lVar8 - param_1 >> 5;
  }
  else {
    lVar7 = param_4 >> 1;
    uVar6 = param_3 - param_2 >> 5;
    lVar8 = lVar7 * 0x20 + param_1;
    lVar4 = param_2;
    if (0 < (longlong)uVar6) {
      lVar2 = **(longlong **)(param_8 + 8);
      iVar1 = **(int **)(lVar8 + 8);
      do {
        uVar5 = uVar6 >> 1;
        lVar3 = (longlong)**(int **)(uVar5 * 0x20 + 8 + lVar4);
        fVar9 = (float)FUN_18025e110(lVar3,lVar3 * 0x98 + lVar2);
        fVar10 = (float)FUN_18025e110(fVar9,(longlong)iVar1 * 0x98 + lVar2);
        if (fVar9 < fVar10) {
          lVar4 = lVar4 + 0x20 + uVar5 * 0x20;
          uVar5 = uVar6 + (-1 - uVar5);
        }
        uVar6 = uVar5;
      } while (0 < (longlong)uVar5);
    }
    lVar2 = lVar4 - param_2 >> 5;
  }
  FUN_18026b0a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,lVar8,lVar4,lVar7,
                lVar2);
  return;
}



