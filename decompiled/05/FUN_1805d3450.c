// FUN_1805d3450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d3450 */

int FUN_1805d3450(int *param_1,longlong *param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  int local_res8 [2];
  
  puVar2 = (undefined8 *)0x0;
  if (param_1 == (int *)0x0) {
    return 6;
  }
  piVar1 = (int *)param_2[1];
  if ((*piVar1 == *param_1) && (piVar1[1] == param_1[1])) {
    return 0;
  }
  local_res8[0] = 0;
  if (*param_2 == 0) {
    iVar3 = 6;
  }
  else {
    puVar2 = (undefined8 *)FUN_18057abe0(*param_2,0x30,local_res8);
    if (local_res8[0] != 0) {
      return local_res8[0];
    }
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    iVar3 = 0;
  }
  if (iVar3 == 0) {
    *(undefined4 *)(puVar2 + 4) = 1;
    *puVar2 = *(undefined8 *)piVar1;
    puVar2[1] = *(undefined8 *)param_1;
    puVar2[5] = *(undefined8 *)(piVar1 + 2);
    *(undefined8 **)(piVar1 + 2) = puVar2;
    *(undefined8 *)piVar1 = *(undefined8 *)param_1;
  }
  return iVar3;
}



