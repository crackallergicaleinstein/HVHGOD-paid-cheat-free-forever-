// FUN_1805a93a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a93a0 */

undefined8 FUN_1805a93a0(longlong param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 *puVar6;
  
  iVar2 = *(int *)(param_1 + 0x240);
  iVar5 = 0;
  if (0 < iVar2) {
    cVar1 = *param_2;
    puVar6 = *(undefined8 **)(param_1 + 0x248);
    do {
      if ((cVar1 == *(char *)*puVar6) && (iVar3 = strcmp(param_2,(char *)*puVar6), iVar3 == 0)) {
        uVar4 = FUN_18060f9f0(*(undefined8 *)(*(longlong *)(param_1 + 0x250) + (longlong)iVar5 * 8),
                              0,10);
        return uVar4;
      }
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar5 < iVar2);
  }
  return 0;
}



