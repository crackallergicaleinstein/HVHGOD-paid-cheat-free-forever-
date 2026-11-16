// FUN_180501630 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180501630 */

void FUN_180501630(int *param_1,undefined1 param_2,int param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined8 *puVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined2 uStack_22;
  
  iVar3 = param_1[1];
  uVar5 = param_4;
  if (0 < param_3) {
    uVar5 = param_5;
    param_5 = param_4;
  }
  if (*param_1 == iVar3) {
    iVar4 = *param_1 + 1;
    if (iVar3 == 0) {
      iVar3 = 8;
    }
    else {
      iVar3 = iVar3 / 2 + iVar3;
    }
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    FUN_180504820(param_1,iVar4);
  }
  iVar3 = *param_1;
  lVar2 = *(longlong *)(param_1 + 2);
  puVar1 = (undefined8 *)(lVar2 + (longlong)iVar3 * 0x18);
  *puVar1 = CONCAT26(uStack_22,CONCAT15((char)param_3,CONCAT14(param_2,2)));
  puVar1[1] = param_5;
  *(undefined8 *)(lVar2 + 0x10 + (longlong)iVar3 * 0x18) = uVar5;
  *param_1 = *param_1 + 1;
  return;
}



