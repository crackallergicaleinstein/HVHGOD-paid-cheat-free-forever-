// FUN_18028afa0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18028afa0 */

float FUN_18028afa0(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_res10 [2];
  int local_68;
  int local_64 [3];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_38 [32];
  
  local_58 = *param_1;
  uStack_50 = param_1[1];
  local_48 = param_1[2];
  local_40 = *(undefined4 *)(param_1 + 3);
  local_res10[0] = param_2;
  piVar1 = (int *)FUN_1800ba9f0(local_38,&local_58);
  local_68 = 0;
  local_48 = param_1[2];
  local_40 = *(undefined4 *)(param_1 + 3);
  local_58 = *param_1;
  uStack_50 = param_1[1];
  iVar4 = 1;
  if (*piVar1 == 2) {
    iVar4 = piVar1[1];
  }
  local_64[0] = iVar4 + -1;
  puVar2 = (undefined8 *)FUN_1800ba9f0(local_38,&local_58);
  iVar5 = 1;
  if ((int)*puVar2 == 2) {
    iVar5 = (int)((ulonglong)*puVar2 >> 0x20);
  }
  piVar1 = &local_68;
  if (-1 < param_2) {
    piVar1 = local_res10;
  }
  piVar3 = local_64;
  if (param_2 <= iVar4 + -1) {
    piVar3 = piVar1;
  }
  return 1.0 - (float)*piVar3 / (float)iVar5;
}



