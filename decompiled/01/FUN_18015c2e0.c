// FUN_18015c2e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18015c2e0 */

undefined8 * FUN_18015c2e0(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  
  lVar6 = 6;
  piVar5 = param_2;
  do {
    iVar2 = *piVar5;
    if (((((0xf6 < iVar2 - 8U) || (iVar2 == 0x1b)) || (iVar2 - 0x10U < 3)) ||
        ((iVar2 - 0x5bU < 2 || (iVar2 - 0xa0U < 6)))) ||
       (piVar4 = (int *)thunk_FUN_1805f8070(param_2,piVar5), piVar4 != piVar5)) {
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  for (piVar5 = param_2; piVar5 != param_2 + 6; piVar5 = piVar5 + 1) {
    iVar2 = *piVar5;
    if ((((iVar2 - 8U < 0xf7) && (iVar2 != 0x1b)) && ((2 < iVar2 - 0x10U && (1 < iVar2 - 0x5bU))))
       && ((iVar2 < 0xa0 || (0xa5 < iVar2)))) goto LAB_18015c3b0;
  }
  *param_2 = 0x2e;
LAB_18015c3b0:
  uVar3 = *(undefined8 *)(param_2 + 2);
  uVar1 = *(undefined8 *)(param_2 + 4);
  *param_1 = *(undefined8 *)param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar1;
  return param_1;
}



