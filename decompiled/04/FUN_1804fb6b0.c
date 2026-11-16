// FUN_1804fb6b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804fb6b0 */

void FUN_1804fb6b0(longlong param_1,longlong param_2,int param_3,char *param_4,int param_5)

{
  uint uVar1;
  ulonglong uVar2;
  char *pcVar3;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  
  iVar7 = 0;
  iVar10 = param_5;
  if (param_3 < param_5) {
    iVar10 = param_3;
  }
  iVar9 = 0;
  if (0 < iVar10) {
    pcVar3 = param_4;
    do {
      if (pcVar3[param_2 - (longlong)param_4] != *pcVar3) break;
      pcVar3 = pcVar3 + 1;
      iVar9 = iVar9 + 1;
    } while ((longlong)pcVar3 - (longlong)param_4 < (longlong)iVar10);
  }
  if ((iVar9 != param_3) || (iVar9 != param_5)) {
    param_3 = param_3 + -1;
    param_5 = param_5 + -1;
    lVar4 = (longlong)param_3;
    lVar8 = (longlong)iVar9;
    if (lVar8 <= lVar4) {
      lVar6 = (longlong)param_5;
      do {
        if ((lVar6 < lVar8) || (*(char *)(param_2 + lVar4) != param_4[lVar6])) break;
        param_3 = param_3 + -1;
        lVar4 = lVar4 + -1;
        param_5 = param_5 + -1;
        lVar6 = lVar6 + -1;
      } while (lVar8 <= lVar4);
    }
    iVar10 = param_3 - iVar9;
    uVar1 = iVar10 + 1;
    if (((0 < (param_5 - iVar9) + 1) || (0 < (int)uVar1)) &&
       (uVar2 = FUN_1804fa9e0(*(longlong *)(param_1 + 8) + 0x20,iVar9,uVar1), uVar2 != 0)) {
      if ((0 < (int)uVar1) && (0x1f < uVar1)) {
        if (((ulonglong)(param_3 + param_2) < uVar2) ||
           ((longlong)iVar10 + uVar2 < (ulonglong)(lVar8 + param_2))) {
          FUN_18063aed0(uVar2,lVar8 + param_2,(longlong)iVar10 + 1);
          do {
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)uVar1);
        }
      }
      lVar4 = (longlong)iVar7;
      if (lVar4 < (longlong)iVar10 + 1) {
        puVar5 = (undefined1 *)(lVar4 + uVar2);
        lVar4 = ((longlong)iVar10 + 1) - lVar4;
        do {
          *puVar5 = puVar5[(lVar8 - uVar2) + param_2];
          puVar5 = puVar5 + 1;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
  }
  return;
}



