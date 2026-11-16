// FUN_18059c390 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059c390 */

int FUN_18059c390(int *param_1,int *param_2,longlong param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int **ppiVar4;
  int *piVar5;
  int *piVar6;
  int *local_res8;
  
  local_res8 = *(int **)(param_1 + 0xb8);
  iVar1 = 0;
  piVar6 = local_res8;
  if ((local_res8 != (int *)0x0) && (*local_res8 == 0)) {
    piVar6 = (int *)0x0;
  }
  if (*(int *)(param_3 + 0x14) == 0xb) {
    (**(code **)(param_3 + 0x18))(param_1,param_2);
    return param_2[6];
  }
  switch(*(undefined4 *)(param_3 + 0x10)) {
  case 3:
    param_1 = param_1 + 0x44;
    break;
  case 4:
    local_res8 = param_1 + 0x36;
    ppiVar4 = &local_res8;
    iVar3 = 0;
    piVar5 = local_res8;
    if (piVar6 != (int *)0x0) {
      iVar3 = *piVar6;
      ppiVar4 = (int **)(piVar6 + 0x46);
      piVar5 = *ppiVar4;
    }
    goto LAB_18059c4bc;
  case 5:
    local_res8 = param_1 + 0x45;
    ppiVar4 = &local_res8;
    iVar3 = 0;
    piVar5 = local_res8;
    if (piVar6 != (int *)0x0) {
      iVar3 = *piVar6;
      ppiVar4 = (int **)(piVar6 + 0x68);
      piVar5 = *ppiVar4;
    }
    goto LAB_18059c4bc;
  case 6:
    local_res8 = param_1 + 0x9f;
    ppiVar4 = &local_res8;
    iVar3 = 0;
    piVar5 = local_res8;
    if (piVar6 != (int *)0x0) {
      iVar3 = *piVar6;
      ppiVar4 = (int **)(piVar6 + 0x8c);
      piVar5 = *ppiVar4;
    }
    goto LAB_18059c4bc;
  case 7:
    local_res8 = param_2;
    goto LAB_18059c4b4;
  case 8:
    break;
  case 9:
    goto LAB_18059c4b4;
  default:
    param_1 = param_1 + 0x36;
  }
  local_res8 = param_1;
LAB_18059c4b4:
  ppiVar4 = &local_res8;
  iVar3 = 0;
  piVar5 = local_res8;
LAB_18059c4bc:
  if (piVar5 != (int *)0x0) {
    if (*(int *)(param_3 + 0x14) - 9U < 2) {
      pcVar2 = *(code **)(param_2 + 0x22);
    }
    else {
      pcVar2 = *(code **)(param_2 + 0x20);
    }
    iVar1 = (*pcVar2)(param_2,param_3,ppiVar4,iVar3,0);
  }
  return iVar1;
}



