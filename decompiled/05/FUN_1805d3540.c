// FUN_1805d3540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d3540 */

int FUN_1805d3540(int *param_1,int *param_2,longlong *param_3)

{
  longlong lVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  int local_res8 [2];
  
  lVar1 = *param_3;
  puVar3 = (undefined8 *)0x0;
  if ((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) {
    return 6;
  }
  piVar2 = (int *)param_3[1];
  if (((*piVar2 != *param_1) || (piVar2[1] != param_1[1])) &&
     ((*param_1 != *param_2 || (param_1[1] != param_2[1])))) {
    local_res8[0] = 0;
    if (lVar1 == 0) {
      iVar4 = 6;
    }
    else {
      puVar3 = (undefined8 *)FUN_18057abe0(lVar1,0x30,local_res8);
      if (local_res8[0] != 0) {
        return local_res8[0];
      }
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar3[5] = 0;
      iVar4 = 0;
    }
    if (iVar4 == 0) {
      *(undefined4 *)(puVar3 + 4) = 2;
      *puVar3 = *(undefined8 *)piVar2;
      puVar3[2] = *(undefined8 *)param_1;
      puVar3[1] = *(undefined8 *)param_2;
      puVar3[5] = *(undefined8 *)(piVar2 + 2);
      *(undefined8 **)(piVar2 + 2) = puVar3;
      *(undefined8 *)piVar2 = *(undefined8 *)param_2;
    }
    return iVar4;
  }
  if ((((*piVar2 != *param_2) || (piVar2[1] != param_2[1])) && (local_res8[0] = 0, lVar1 != 0)) &&
     (puVar3 = (undefined8 *)FUN_18057abe0(lVar1,0x30,local_res8), local_res8[0] == 0)) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    *(undefined4 *)(puVar3 + 4) = 1;
    *puVar3 = *(undefined8 *)piVar2;
    puVar3[1] = *(undefined8 *)param_2;
    puVar3[5] = *(undefined8 *)(piVar2 + 2);
    *(undefined8 **)(piVar2 + 2) = puVar3;
    *(undefined8 *)piVar2 = *(undefined8 *)param_2;
  }
  return 0;
}



