// FUN_1802c95e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802c95e0 */

int FUN_1802c95e0(undefined4 param_1,uint param_2,float param_3,undefined8 param_4)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  ulonglong uVar5;
  float fVar6;
  uint local_res10 [6];
  uint local_38 [12];
  
  iVar2 = 0;
  local_38[1] = 0x60;
  iVar3 = 0;
  local_38[0] = 0;
  puVar1 = local_38;
  if (-1 < (int)param_2) {
    puVar1 = local_res10;
  }
  puVar4 = local_38 + 1;
  if ((int)param_2 < 0x61) {
    puVar4 = puVar1;
  }
  if (0 < (int)*puVar4) {
    uVar5 = (ulonglong)*puVar4;
    local_res10[0] = param_2;
    do {
      fVar6 = (float)FUN_1802c9530(param_1,iVar2,param_4);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + (uint)(param_3 <= fVar6);
    } while (iVar2 < (int)uVar5);
  }
  return iVar3;
}



