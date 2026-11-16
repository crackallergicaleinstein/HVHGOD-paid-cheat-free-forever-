// FUN_180575510 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180575510 */

int FUN_180575510(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  int iVar9;
  
  if (param_1 == 0) {
    return 0x23;
  }
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (lVar1 == 0) {
    return 6;
  }
  lVar2 = *(longlong *)(lVar1 + 0x10);
  iVar8 = 0;
  puVar4 = (undefined8 *)0x0;
  iVar9 = *(int *)(*(longlong *)(lVar1 + 0x18) + 0x40);
  if (iVar9 < 1) {
    if (iVar9 < 0) {
      iVar8 = 6;
      goto LAB_1805755b7;
    }
LAB_1805755e7:
    if (iVar8 != 0) {
LAB_1805755b7:
      if (param_2 == (undefined8 *)0x0) {
        return iVar8;
      }
      *param_2 = 0;
      return iVar8;
    }
  }
  else {
    puVar4 = (undefined8 *)(**(code **)(lVar2 + 8))(lVar2,iVar9);
    iVar8 = 0x40;
    if (puVar4 == (undefined8 *)0x0) goto LAB_1805755e7;
    FUN_18063ab10(puVar4,0,(longlong)iVar9);
  }
  puVar4[1] = param_1;
  puVar7 = *(undefined8 **)(param_1 + 0x90);
  lVar1 = puVar7[3];
  lVar3 = puVar7[2];
  *puVar4 = puVar7[1];
  puVar5 = (undefined8 *)(**(code **)(lVar3 + 8))(lVar3,0x38);
  if (puVar5 != (undefined8 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    iVar9 = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
    puVar5[6] = 0;
    puVar4[0x1e] = puVar5;
    if ((*(uint *)*puVar7 & 0x200) == 0) {
      plVar6 = (longlong *)(**(code **)(lVar3 + 8))(lVar3,0xb0);
      if (plVar6 == (longlong *)0x0) {
        iVar9 = 0x40;
      }
      else {
        FUN_18063ab10(plVar6 + 1,0,0xa8);
        *plVar6 = lVar3;
        *puVar5 = plVar6;
      }
      if (iVar9 == 0) goto LAB_1805756aa;
    }
    else {
LAB_1805756aa:
      if (*(code **)(lVar1 + 0x68) != (code *)0x0) {
        iVar9 = (**(code **)(lVar1 + 0x68))(puVar4);
      }
    }
    if ((*(uint *)(puVar4[1] + 8) & 0x10000) == 0) {
      if (iVar9 == 0) goto LAB_18057570b;
      goto LAB_18057572c;
    }
    puVar7 = (undefined8 *)(**(code **)(lVar3 + 8))(lVar3,0x48);
    if (puVar7 != (undefined8 *)0x0) {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar4[0x1d] = puVar7;
LAB_18057570b:
      puVar4[2] = *(undefined8 *)(param_1 + 0x78);
      *(undefined8 **)(param_1 + 0x78) = puVar4;
      if (param_2 == (undefined8 *)0x0) {
        return 0;
      }
      *param_2 = puVar4;
      return 0;
    }
  }
  iVar9 = 0x40;
LAB_18057572c:
  FUN_180579d30(puVar4);
  (**(code **)(lVar2 + 0x10))(lVar2,puVar4);
  return iVar9;
}



