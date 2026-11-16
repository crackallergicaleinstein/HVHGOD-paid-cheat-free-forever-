// FUN_180140da0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180140da0 */

longlong * FUN_180140da0(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  
  plVar4 = (longlong *)param_2[2];
  if (*(char *)((longlong)plVar4 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar4 + 0x19);
    plVar2 = (longlong *)*plVar4;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar4 = plVar2;
      plVar2 = (longlong *)*plVar2;
    }
  }
  else {
    cVar1 = *(char *)(param_2[1] + 0x19);
    plVar2 = (longlong *)param_2[1];
    while ((plVar4 = plVar2, cVar1 == '\0' && (param_2 == (longlong *)plVar4[2]))) {
      cVar1 = *(char *)(plVar4[1] + 0x19);
      plVar2 = (longlong *)plVar4[1];
      param_2 = plVar4;
    }
  }
  lVar3 = FUN_1801511e0();
  FUN_1800aab30(lVar3 + 0x40);
  FUN_18015c010(lVar3 + 0x20);
  FUN_1804547d0(lVar3,0x50);
  return plVar4;
}



