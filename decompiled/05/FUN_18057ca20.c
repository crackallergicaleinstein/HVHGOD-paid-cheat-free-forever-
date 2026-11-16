// FUN_18057ca20 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18057ca20 */

undefined8 FUN_18057ca20(longlong param_1,char *param_2,int *param_3,char param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  int *local_48;
  int local_40 [7];
  undefined4 local_24;
  
  lVar9 = 0;
  iVar7 = strcmp(param_2,"darkening-parameters");
  if (iVar7 != 0) {
    iVar7 = strcmp(param_2,"hinting-engine");
    if (iVar7 == 0) {
      if (param_4 == '\0') {
        if (*param_3 != 1) {
          return 7;
        }
      }
      else {
        iVar7 = strcmp((char *)param_3,"adobe");
        if (iVar7 != 0) {
          return 6;
        }
      }
      *(undefined4 *)(param_1 + 0x38) = 1;
      return 0;
    }
    iVar7 = strcmp(param_2,"no-stem-darkening");
    if (iVar7 == 0) {
      if (param_4 == '\0') {
        *(char *)(param_1 + 0x3c) = (char)*param_3;
        return 0;
      }
      iVar7 = FUN_18060f9f0(param_3,0,10);
      *(bool *)(param_1 + 0x3c) = iVar7 != 0;
      return 0;
    }
    iVar7 = strcmp(param_2,"random-seed");
    if (iVar7 != 0) {
      return 0xc;
    }
    if (param_4 == '\0') {
      iVar7 = 0;
      if (-1 < *param_3) {
        iVar7 = *param_3;
      }
      *(int *)(param_1 + 0x60) = iVar7;
      return 0;
    }
    iVar8 = FUN_18060f9f0(param_3,0,10);
    iVar7 = 0;
    if (-1 < iVar8) {
      iVar7 = iVar8;
    }
    *(int *)(param_1 + 0x60) = iVar7;
    return 0;
  }
  if (param_4 != '\0') {
    do {
      iVar7 = FUN_18060f9f0(param_3,&local_48,10);
      local_40[lVar9] = iVar7;
      if ((char)*local_48 != ',') {
        return 6;
      }
      if (param_3 == local_48) {
        return 6;
      }
      lVar9 = lVar9 + 1;
      param_3 = (int *)((longlong)local_48 + 1);
    } while (lVar9 < 7);
    local_24 = FUN_18060f9f0(param_3,&local_48,10);
    if (((char)*local_48 != '\0') && ((char)*local_48 != ' ')) {
      return 6;
    }
    if (param_3 == local_48) {
      return 6;
    }
    param_3 = local_40;
  }
  iVar7 = *param_3;
  iVar8 = param_3[1];
  iVar1 = param_3[2];
  iVar2 = param_3[3];
  iVar3 = param_3[4];
  iVar4 = param_3[5];
  iVar5 = param_3[6];
  iVar6 = param_3[7];
  if (((((iVar7 < 0) || (iVar1 < 0)) || (iVar3 < 0)) ||
      (((iVar5 < 0 || (iVar8 < 0)) || ((iVar2 < 0 || ((iVar4 < 0 || (iVar6 < 0)))))))) ||
     ((iVar1 < iVar7 ||
      (((((iVar3 < iVar1 || (iVar5 < iVar3)) || (500 < iVar8)) || ((500 < iVar2 || (500 < iVar4))))
       || (500 < iVar6)))))) {
    return 6;
  }
  *(int *)(param_1 + 0x48) = iVar1;
  *(int *)(param_1 + 0x40) = iVar7;
  *(int *)(param_1 + 0x44) = iVar8;
  *(int *)(param_1 + 0x4c) = iVar2;
  *(int *)(param_1 + 0x50) = iVar3;
  *(int *)(param_1 + 0x54) = iVar4;
  *(int *)(param_1 + 0x58) = iVar5;
  *(int *)(param_1 + 0x5c) = iVar6;
  return 0;
}



