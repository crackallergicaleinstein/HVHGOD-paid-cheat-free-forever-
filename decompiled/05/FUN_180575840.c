// FUN_180575840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180575840 */

int FUN_180575840(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *puVar7;
  int iVar8;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 == (undefined8 *)0x0) {
    return 6;
  }
  if (*(longlong *)(param_1 + 0x90) == 0) {
    return 0x22;
  }
  *param_2 = 0;
  iVar8 = 0;
  lVar1 = *(longlong *)(param_1 + 0x98);
  plVar5 = (longlong *)0x0;
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x90) + 0x18);
  iVar4 = *(int *)(lVar2 + 0x3c);
  if (iVar4 < 1) {
    if (iVar4 < 0) {
      return 6;
    }
  }
  else {
    plVar5 = (longlong *)(**(code **)(lVar1 + 8))(lVar1,iVar4);
    iVar8 = 0x40;
    if (plVar5 != (longlong *)0x0) {
      FUN_18063ab10(plVar5,0,(longlong)iVar4);
      goto LAB_180575916;
    }
  }
  if (iVar8 != 0) {
    return iVar8;
  }
LAB_180575916:
  plVar6 = (longlong *)(**(code **)(lVar1 + 8))(lVar1,0x18);
  if (plVar6 == (longlong *)0x0) {
    iVar4 = 0x40;
  }
  else {
    *plVar5 = param_1;
    puVar7 = (undefined8 *)(**(code **)(lVar1 + 8))(lVar1,0x28);
    if (puVar7 == (undefined8 *)0x0) {
      iVar4 = 0x40;
    }
    else {
      *puVar7 = 0;
      puVar7[1] = 0;
      puVar7[2] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      plVar5[7] = (longlong)puVar7;
      pcVar3 = *(code **)(lVar2 + 0x58);
      if ((pcVar3 == (code *)0x0) || (iVar4 = (*pcVar3)(plVar5), iVar4 == 0)) {
        *param_2 = plVar5;
        plVar6[2] = (longlong)plVar5;
        if ((undefined8 *)(param_1 + 0xa8) == (undefined8 *)0x0) {
          return 0;
        }
        lVar1 = *(longlong *)(param_1 + 0xb0);
        plVar6[1] = 0;
        *plVar6 = lVar1;
        if (lVar1 == 0) {
          *(undefined8 *)(param_1 + 0xa8) = plVar6;
        }
        else {
          *(longlong **)(lVar1 + 8) = plVar6;
        }
        *(longlong **)(param_1 + 0xb0) = plVar6;
        return 0;
      }
    }
    (**(code **)(lVar1 + 0x10))(lVar1,plVar6);
  }
  if (plVar5 != (longlong *)0x0) {
    if (plVar5[7] != 0) {
      (**(code **)(lVar1 + 0x10))(lVar1);
    }
    plVar5[7] = 0;
    (**(code **)(lVar1 + 0x10))(lVar1,plVar5);
  }
  return iVar4;
}



