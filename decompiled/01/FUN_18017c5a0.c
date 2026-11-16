// FUN_18017c5a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18017c5a0 */

int FUN_18017c5a0(longlong param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  
  if ((*(byte *)(param_1 + 0x70) & 2) != 0) {
    return -1;
  }
  if (param_2 == -1) {
    return 0;
  }
  uVar3 = **(ulonglong **)(param_1 + 0x40);
  iVar2 = **(int **)(param_1 + 0x58);
  uVar8 = uVar3 + (longlong)iVar2;
  if (uVar3 == 0) {
    uVar8 = 0;
    lVar9 = **(longlong **)(param_1 + 0x18);
  }
  else {
    if (uVar3 < uVar8) {
      **(int **)(param_1 + 0x58) = iVar2 + -1;
      puVar4 = (undefined1 *)**(longlong **)(param_1 + 0x40);
      **(longlong **)(param_1 + 0x40) = (longlong)(puVar4 + 1);
      *puVar4 = (char)param_2;
      *(ulonglong *)(param_1 + 0x68) = uVar3 + 1;
      return param_2;
    }
    lVar9 = **(longlong **)(param_1 + 0x18);
    uVar8 = uVar8 - lVar9;
    if (0x1f < uVar8) {
      if (uVar8 < 0x3fffffff) {
        lVar7 = uVar8 * 2;
      }
      else {
        lVar7 = 0x7fffffff;
        if (0x7ffffffe < uVar8) {
          return -1;
        }
      }
      goto LAB_18017c67a;
    }
  }
  lVar7 = 0x20;
LAB_18017c67a:
  lVar6 = FUN_18015bca0(lVar7);
  FUN_18063aed0(lVar6,lVar9);
  lVar1 = lVar6 + uVar8;
  *(longlong *)(param_1 + 0x68) = lVar1 + 1;
  **(longlong **)(param_1 + 0x20) = lVar6;
  **(longlong **)(param_1 + 0x40) = lVar1;
  **(int **)(param_1 + 0x58) = ((int)lVar6 - (int)lVar1) + (int)lVar7;
  if ((*(byte *)(param_1 + 0x70) & 4) == 0) {
    uVar5 = *(undefined8 *)(param_1 + 0x68);
    lVar7 = (**(longlong **)(param_1 + 0x38) - lVar9) + lVar6;
    **(longlong **)(param_1 + 0x18) = lVar6;
    **(longlong **)(param_1 + 0x38) = lVar7;
    **(int **)(param_1 + 0x50) = (int)uVar5 - (int)lVar7;
  }
  else {
    **(longlong **)(param_1 + 0x18) = lVar6;
    **(longlong **)(param_1 + 0x38) = lVar6;
    **(undefined4 **)(param_1 + 0x50) = 0;
  }
  if ((*(byte *)(param_1 + 0x70) & 1) != 0) {
    lVar7 = lVar9;
    if (0xfff < uVar8) {
      lVar7 = *(longlong *)(lVar9 + -8);
      uVar8 = uVar8 + 0x27;
      if (0x1f < (lVar9 - lVar7) - 8U) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    FUN_1804547d0(lVar7,uVar8);
  }
  *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 1;
  **(int **)(param_1 + 0x58) = **(int **)(param_1 + 0x58) + -1;
  puVar4 = (undefined1 *)**(longlong **)(param_1 + 0x40);
  **(longlong **)(param_1 + 0x40) = (longlong)(puVar4 + 1);
  *puVar4 = (char)param_2;
  return param_2;
}



