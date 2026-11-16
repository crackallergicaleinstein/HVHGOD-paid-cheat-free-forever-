// FUN_1805ac480 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805ac480 */

undefined8 * FUN_1805ac480(longlong param_1,char *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  undefined8 *puVar7;
  
  iVar1 = *(int *)(param_1 + 0x19c);
  bVar3 = false;
  puVar2 = *(undefined8 **)(param_1 + 0x1a0);
  iVar6 = 0;
  if (0 < (longlong)iVar1) {
    lVar5 = 0;
    puVar7 = puVar2;
    do {
      if (bVar3) goto LAB_1805ac4eb;
      iVar4 = strcmp((char *)*puVar7,param_2);
      if (iVar4 == 0) {
        bVar3 = true;
      }
      iVar6 = iVar6 + 1;
      lVar5 = lVar5 + 1;
      puVar7 = puVar7 + 3;
    } while (lVar5 < iVar1);
    if (bVar3) {
LAB_1805ac4eb:
      return puVar2 + (longlong)iVar6 * 3 + -3;
    }
  }
  return (undefined8 *)0x0;
}



