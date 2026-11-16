// FUN_1804d1cb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804d1cb0 */

undefined8 FUN_1804d1cb0(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined8 *puVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  undefined1 local_18 [16];
  
  puVar1 = (undefined4 *)(param_2 + 0x14);
  *puVar1 = 0;
  iVar4 = *(int *)(param_2 + 4);
  if ((iVar4 == 0) || (iVar5 = *(int *)(param_2 + 8), iVar5 == 0)) {
    iVar11 = 0;
    *(undefined4 *)(param_2 + 0xc) = 0;
  }
  else {
    puVar7 = (undefined8 *)FUN_1804d1900(local_18,param_1,iVar4,iVar5);
    plVar12 = (longlong *)puVar7[1];
    iVar10 = (int)*puVar7;
    iVar11 = (int)((ulonglong)*puVar7 >> 0x20);
    if (((plVar12 == (longlong *)0x0) || (*(int *)(param_1 + 4) < iVar11 + iVar5)) ||
       (piVar6 = *(int **)(param_1 + 0x20), piVar6 == (int *)0x0)) {
      plVar12 = (longlong *)0x0;
    }
    else {
      *piVar6 = iVar10;
      piVar6[1] = iVar11 + iVar5;
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(piVar6 + 2);
      piVar8 = (int *)*plVar12;
      if (*piVar8 < iVar10) {
        plVar2 = (longlong *)(piVar8 + 2);
        piVar8 = *(int **)(piVar8 + 2);
        *plVar2 = (longlong)piVar6;
      }
      else {
        *plVar12 = (longlong)piVar6;
      }
      if (*(int **)(piVar8 + 2) != (int *)0x0) {
        piVar9 = *(int **)(piVar8 + 2);
        do {
          if (iVar10 + iVar4 < *piVar9) break;
          *(undefined8 *)(piVar8 + 2) = *(undefined8 *)(param_1 + 0x20);
          *(int **)(param_1 + 0x20) = piVar8;
          piVar3 = piVar9 + 2;
          piVar8 = piVar9;
          piVar9 = *(int **)piVar3;
        } while (*(int **)piVar3 != (int *)0x0);
      }
      *(int **)(piVar6 + 2) = piVar8;
      if (*piVar8 < iVar10 + iVar4) {
        *piVar8 = iVar10 + iVar4;
      }
    }
    if (plVar12 == (longlong *)0x0) {
      *(int *)(param_2 + 0xc) = 0x7fffffff;
      iVar11 = 0x7fffffff;
    }
    else {
      *(int *)(param_2 + 0xc) = iVar10;
    }
  }
  *(int *)(param_2 + 0x10) = iVar11;
  if ((*(int *)(param_2 + 0xc) == 0x7fffffff) && (iVar11 == 0x7fffffff)) {
    *puVar1 = 0;
    return 0;
  }
  *puVar1 = 1;
  return 1;
}



