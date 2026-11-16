// FUN_1805985a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805985a0 */

int FUN_1805985a0(longlong param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined8 *puVar5;
  
  iVar1 = *(int *)(param_1 + 0x240);
  iVar4 = 0;
  if (0 < iVar1) {
    puVar5 = *(undefined8 **)(param_1 + 0x248);
    lVar3 = 0;
    do {
      iVar2 = strcmp(param_2,(char *)*puVar5);
      if (iVar2 == 0) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      lVar3 = lVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (lVar3 < iVar1);
  }
  return 0;
}



