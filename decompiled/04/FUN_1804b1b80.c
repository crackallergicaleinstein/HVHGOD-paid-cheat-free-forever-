// FUN_1804b1b80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b1b80 */

void FUN_1804b1b80(int *param_1,uint param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  
  lVar7 = (longlong)(int)param_2;
  if (1 < (int)(*param_1 - param_2)) {
    iVar10 = ~param_2 + *param_1;
    if (0 < iVar10) {
      lVar6 = (longlong)(int)(iVar10 + param_2);
      do {
        if (lVar7 < lVar6) {
          lVar8 = lVar7 * 0xc;
          lVar9 = lVar6 - lVar7;
          do {
            lVar4 = *(longlong *)(param_1 + 2);
            if (*(int *)(lVar8 + 0xc + lVar4) < *(int *)(lVar8 + lVar4)) {
              uVar1 = *(undefined8 *)(lVar8 + lVar4);
              uVar2 = *(undefined4 *)(lVar8 + 8 + lVar4);
              *(undefined8 *)(lVar8 + lVar4) = *(undefined8 *)(lVar8 + 0xc + lVar4);
              *(undefined4 *)(lVar8 + 8 + lVar4) = *(undefined4 *)(lVar8 + 0x14 + lVar4);
              *(undefined8 *)(lVar8 + 0xc + lVar4) = uVar1;
              *(undefined4 *)(lVar8 + 0x14 + lVar4) = uVar2;
            }
            lVar8 = lVar8 + 0xc;
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        iVar10 = iVar10 + -1;
        lVar6 = lVar6 + -1;
      } while (0 < iVar10);
    }
    iVar10 = *param_1;
    iVar5 = param_2 + 1;
    if (iVar5 < iVar10) {
      lVar7 = (longlong)iVar5;
      do {
        lVar8 = *(longlong *)(param_1 + 2);
        lVar6 = (lVar7 + -1) * 0xc;
        iVar3 = *(int *)(lVar7 * 0xc + lVar8);
        if (iVar3 <= *(int *)(lVar6 + 4 + lVar8)) {
          if (*(int *)(lVar6 + lVar8) < iVar3) {
            iVar3 = *(int *)(lVar6 + lVar8);
          }
          *(int *)(lVar6 + lVar8) = iVar3;
          lVar6 = lVar6 + *(longlong *)(param_1 + 2);
          iVar10 = *(int *)(lVar7 * 0xc + 4 + *(longlong *)(param_1 + 2));
          if (iVar10 <= *(int *)(lVar6 + 4)) {
            iVar10 = *(int *)(lVar6 + 4);
          }
          *(int *)(lVar6 + 4) = iVar10;
          lVar6 = *(longlong *)(param_1 + 2) + (longlong)iVar5 * 0xc;
          FUN_18063aed0(lVar6,lVar6 + 0xc,((longlong)*param_1 - (longlong)iVar5) * 0xc + -0xc);
          *param_1 = *param_1 + -1;
          iVar10 = *param_1;
          iVar5 = iVar5 + -1;
          lVar7 = lVar7 + -1;
        }
        iVar5 = iVar5 + 1;
        lVar7 = lVar7 + 1;
      } while (iVar5 < iVar10);
    }
  }
  return;
}



