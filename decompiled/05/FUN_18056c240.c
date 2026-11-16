// FUN_18056c240 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18056c240 */

void FUN_18056c240(undefined4 *param_1,undefined4 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  plVar1 = (longlong *)(param_2 + 4);
  plVar2 = (longlong *)(param_1 + 4);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  if (*(char *)(param_1 + 10) == '\0') {
    lVar3 = *plVar1;
    uVar4 = *(undefined8 *)(param_2 + 6);
    uVar5 = *(undefined8 *)(param_2 + 8);
    *(undefined8 *)(param_2 + 8) = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *plVar1 = 0;
    *plVar2 = lVar3;
    *(undefined8 *)(param_1 + 6) = uVar4;
    *(undefined8 *)(param_1 + 8) = uVar5;
    *(undefined1 *)(param_1 + 10) = 1;
  }
  else if (plVar2 != plVar1) {
    lVar3 = *plVar2;
    if (lVar3 != 0) {
      lVar6 = lVar3;
      if ((0xfff < (*(longlong *)(param_1 + 8) - lVar3 & 0xfffffffffffffffcU)) &&
         (lVar6 = *(longlong *)(lVar3 + -8), 0x1f < (lVar3 - lVar6) - 8U)) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      FUN_1804547d0(lVar6);
      *plVar2 = 0;
      *(undefined8 *)(param_1 + 6) = 0;
      *(undefined8 *)(param_1 + 8) = 0;
    }
    *plVar2 = *plVar1;
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *plVar1 = 0;
    *(undefined8 *)(param_2 + 6) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    return;
  }
  return;
}



