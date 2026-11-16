// FUN_1805d36e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d36e0 */

int FUN_1805d36e0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  int local_res10 [2];
  
  puVar2 = (undefined8 *)0x0;
  if (((param_2 == (undefined8 *)0x0) || (param_1 == (undefined8 *)0x0)) ||
     (param_3 == (undefined8 *)0x0)) {
    return 6;
  }
  puVar1 = (undefined8 *)param_4[1];
  local_res10[0] = 0;
  if (*param_4 == 0) {
    iVar3 = 6;
  }
  else {
    puVar2 = (undefined8 *)FUN_18057abe0(*param_4,0x30,local_res10);
    if (local_res10[0] != 0) {
      return local_res10[0];
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
    *(undefined4 *)(puVar2 + 4) = 3;
    *puVar2 = *puVar1;
    puVar2[2] = *param_1;
    puVar2[3] = *param_2;
    puVar2[1] = *param_3;
    puVar2[5] = puVar1[1];
    puVar1[1] = puVar2;
    *puVar1 = *param_3;
  }
  return iVar3;
}



