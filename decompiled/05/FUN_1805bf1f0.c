// FUN_1805bf1f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bf1f0 */

void FUN_1805bf1f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  int iVar2;
  
  puVar1 = (undefined8 *)param_1[1];
  for (iVar2 = *(int *)((longlong)param_1 + 4); iVar2 != 0; iVar2 = iVar2 + -1) {
    FUN_18057abd0(param_2,puVar1[1]);
    puVar1[1] = 0;
    *puVar1 = 0;
    *(undefined4 *)(puVar1 + 2) = 0;
    puVar1 = puVar1 + 3;
  }
  FUN_18057abd0(param_2,param_1[1]);
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



