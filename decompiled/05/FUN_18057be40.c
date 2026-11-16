// FUN_18057be40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057be40 */

int FUN_18057be40(undefined8 param_1,undefined8 param_2,uint *param_3,longlong param_4,char param_5)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong *plVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  
  plVar2 = (longlong *)FUN_18057bdc0(param_1,param_3);
  if (*plVar2 != 0) {
    if (param_5 == '\0') {
      return 0;
    }
    *(undefined8 *)(*plVar2 + 8) = param_2;
    return 0;
  }
  puVar3 = (undefined8 *)(**(code **)(param_4 + 8))(param_4,0x10);
  if (puVar3 == (undefined8 *)0x0) {
    return 0x40;
  }
  *plVar2 = (longlong)puVar3;
  *puVar3 = param_1;
  puVar3[1] = param_2;
  iVar9 = 0;
  if (param_3[2] < *param_3) goto LAB_18057bfdc;
  uVar1 = param_3[1];
  uVar10 = (ulonglong)uVar1;
  plVar2 = *(longlong **)(param_3 + 8);
  iVar8 = 0;
  uVar6 = uVar1 * 2;
  param_3[1] = uVar6;
  *param_3 = uVar6 / 3;
  if ((int)uVar6 < 0) {
    param_3[8] = 0;
    param_3[9] = 0;
    return 6;
  }
  if (uVar6 == 0) {
    param_3[8] = 0;
    param_3[9] = 0;
LAB_18057bf88:
    if (uVar1 != 0) {
      plVar7 = plVar2;
      do {
        if ((undefined8 *)*plVar7 != (undefined8 *)0x0) {
          plVar5 = (longlong *)FUN_18057bdc0(*(undefined8 *)*plVar7,param_3);
          *plVar5 = *plVar7;
        }
        plVar7 = plVar7 + 1;
        uVar10 = uVar10 - 1;
      } while (uVar10 != 0);
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(param_4 + 0x10))(param_4,plVar2);
      iVar9 = iVar8;
      goto LAB_18057bfdc;
    }
  }
  else {
    if (0xfffffff < (int)uVar6) {
      param_3[8] = 0;
      param_3[9] = 0;
      return 10;
    }
    lVar4 = (**(code **)(param_4 + 8))(param_4,uVar1 << 4);
    iVar8 = 0x40;
    if ((lVar4 != 0) && (iVar8 = 0, 0 < (int)uVar6)) {
      FUN_18063ab10(lVar4,0,(longlong)(int)(uVar1 << 4));
      *(longlong *)(param_3 + 8) = lVar4;
      goto LAB_18057bf88;
    }
    *(longlong *)(param_3 + 8) = lVar4;
    if (iVar8 == 0) goto LAB_18057bf88;
  }
  iVar9 = 0;
  if (iVar8 != 0) {
    return iVar8;
  }
LAB_18057bfdc:
  param_3[2] = param_3[2] + 1;
  return iVar9;
}



