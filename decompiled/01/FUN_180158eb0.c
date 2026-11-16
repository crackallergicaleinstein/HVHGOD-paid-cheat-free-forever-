// FUN_180158eb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180158eb0 */

void FUN_180158eb0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  lVar2 = *param_1;
  if (lVar2 != 0) {
    lVar3 = param_1[1];
    cVar1 = *(char *)(param_1[2] + 0x19);
    plVar5 = (longlong *)param_1[2];
    while (cVar1 == '\0') {
      FUN_180154120(lVar2,lVar3,plVar5[2]);
      plVar4 = (longlong *)*plVar5;
      FUN_1800aab30(plVar5 + 8);
      FUN_18015c010(plVar5 + 4);
      FUN_1804547d0(plVar5,0x50);
      plVar5 = plVar4;
      cVar1 = *(char *)((longlong)plVar4 + 0x19);
    }
  }
  return;
}



