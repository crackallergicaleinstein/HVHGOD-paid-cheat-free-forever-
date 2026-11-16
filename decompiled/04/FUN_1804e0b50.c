// FUN_1804e0b50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804e0b50 */

void FUN_1804e0b50(longlong param_1,int *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  
  lVar3 = *(longlong *)(param_2 + 4);
  lVar1 = *(longlong *)(param_2 + 6);
  if (0.0 < (*(float *)(lVar3 + 0xc) - (float)param_2[3]) *
            ((float)param_2[2] - *(float *)(lVar1 + 8)) -
            ((float)param_2[3] - *(float *)(lVar1 + 0xc)) *
            (*(float *)(lVar3 + 8) - (float)param_2[2])) {
    plVar7 = *(longlong **)(param_1 + 0x20);
    plVar6 = plVar7 + *(int *)(param_1 + 0x28);
    if (plVar7 < plVar6) {
      iVar5 = *(int *)(lVar1 + 4);
      do {
        iVar4 = *(int *)(*plVar7 + 4);
        if ((((iVar4 != iVar5) && (iVar4 != param_2[1])) && (iVar4 != *(int *)(lVar3 + 4))) &&
           (cVar2 = FUN_1804b07c0((float *)(lVar1 + 8)), cVar2 != '\0')) {
          iVar5 = 0;
          goto LAB_1804e0c13;
        }
        plVar7 = plVar7 + 1;
      } while (plVar7 < plVar6);
    }
    iVar5 = 1;
  }
  else {
    iVar5 = 2;
  }
LAB_1804e0c13:
  iVar4 = *param_2;
  if (iVar5 != iVar4) {
    if (iVar4 == 2) {
      iVar4 = *(int *)(param_1 + 0x28) + -1;
      if (-1 < iVar4) {
        lVar3 = (longlong)iVar4;
        plVar6 = (longlong *)(*(longlong *)(param_1 + 0x20) + lVar3 * 8);
        do {
          if (*(int *)(*plVar6 + 4) == param_2[1]) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x20) + (longlong)iVar4 * 8) =
                 *(undefined8 *)
                  (*(longlong *)(param_1 + 0x20) + -8 + (ulonglong)*(uint *)(param_1 + 0x28) * 8);
            *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -1;
            break;
          }
          iVar4 = iVar4 + -1;
          plVar6 = plVar6 + -1;
          lVar3 = lVar3 + -1;
        } while (-1 < lVar3);
      }
    }
    else if (iVar4 == 1) {
      iVar4 = *(int *)(param_1 + 0x18) + -1;
      if (-1 < iVar4) {
        lVar3 = (longlong)iVar4;
        plVar6 = (longlong *)(*(longlong *)(param_1 + 0x10) + lVar3 * 8);
        do {
          if (*(int *)(*plVar6 + 4) == param_2[1]) {
            *(undefined8 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar4 * 8) =
                 *(undefined8 *)
                  (*(longlong *)(param_1 + 0x10) + -8 + (ulonglong)*(uint *)(param_1 + 0x18) * 8);
            *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + -1;
            break;
          }
          iVar4 = iVar4 + -1;
          plVar6 = plVar6 + -1;
          lVar3 = lVar3 + -1;
        } while (-1 < lVar3);
      }
    }
    if (iVar5 == 2) {
      *(int **)(*(longlong *)(param_1 + 0x20) + (longlong)*(int *)(param_1 + 0x28) * 8) = param_2;
      *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
    }
    else if (iVar5 == 1) {
      *(int **)(*(longlong *)(param_1 + 0x10) + (longlong)*(int *)(param_1 + 0x18) * 8) = param_2;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
    *param_2 = iVar5;
  }
  return;
}



