// FUN_180573150 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180573150 */

int FUN_180573150(int *param_1,undefined8 param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined4 *puVar11;
  
  if (((param_1 == (int *)0x0) || (param_3 == (longlong *)0x0)) || (lVar2 = *param_3, lVar2 == 0)) {
    return 6;
  }
  iVar1 = *param_1;
  lVar10 = *(longlong *)(lVar2 + 0x98);
  puVar11 = (undefined4 *)0x0;
  iVar8 = 0;
  puVar9 = (undefined4 *)0x0;
  if (iVar1 < 1) {
    if (iVar1 < 0) {
      iVar8 = 6;
      goto LAB_1805732ce;
    }
  }
  else {
    puVar9 = (undefined4 *)(**(code **)(lVar10 + 8))(lVar10,iVar1);
    iVar8 = 0x40;
    if (puVar9 != (undefined4 *)0x0) {
      iVar8 = 0;
    }
  }
  puVar11 = puVar9;
  if (iVar8 != 0) goto LAB_1805732ce;
  if ((puVar9 != (undefined4 *)0x0) && (0 < iVar1)) {
    FUN_18063ab10(puVar9,0,(longlong)iVar1);
  }
  lVar6 = *param_3;
  uVar4 = *(undefined4 *)((longlong)param_3 + 4);
  lVar7 = param_3[1];
  uVar5 = *(undefined4 *)((longlong)param_3 + 0xc);
  *(int **)(puVar9 + 4) = param_1;
  *puVar9 = (int)lVar6;
  puVar9[1] = uVar4;
  puVar9[2] = (int)lVar7;
  puVar9[3] = uVar5;
  if ((*(code **)(param_1 + 2) == (code *)0x0) ||
     (iVar8 = (**(code **)(param_1 + 2))(puVar9,param_2), iVar8 == 0)) {
    iVar1 = *(int *)(lVar2 + 0x38);
    uVar3 = *(undefined8 *)(lVar2 + 0x40);
    if (iVar1 < 0) {
      *(undefined8 *)(lVar2 + 0x40) = uVar3;
      iVar8 = 6;
    }
    else if (iVar1 + 1 < 0x10000000) {
      if (iVar1 == 0) {
        lVar10 = (**(code **)(lVar10 + 8))(lVar10,8);
        *(longlong *)(lVar2 + 0x40) = lVar10;
        iVar8 = 0x40;
        if (lVar10 != 0) {
LAB_1805732ab:
          iVar8 = 0;
          *(undefined4 **)(lVar10 + (longlong)*(int *)(lVar2 + 0x38) * 8) = puVar9;
          *(int *)(lVar2 + 0x38) = *(int *)(lVar2 + 0x38) + 1;
          goto LAB_1805732ce;
        }
      }
      else {
        lVar10 = (**(code **)(lVar10 + 0x18))(lVar10,iVar1 * 8,(iVar1 + 1) * 8,uVar3);
        if (lVar10 != 0) {
          *(longlong *)(lVar2 + 0x40) = lVar10;
          goto LAB_1805732ab;
        }
        *(undefined8 *)(lVar2 + 0x40) = uVar3;
        iVar8 = 0x40;
      }
    }
    else {
      *(undefined8 *)(lVar2 + 0x40) = uVar3;
      iVar8 = 10;
    }
  }
  FUN_180579b50(puVar9);
  puVar11 = (undefined4 *)0x0;
LAB_1805732ce:
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = puVar11;
  }
  return iVar8;
}



