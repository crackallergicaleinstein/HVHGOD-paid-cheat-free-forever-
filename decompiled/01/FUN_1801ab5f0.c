// FUN_1801ab5f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ab5f0 */

longlong * FUN_1801ab5f0(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  plVar5 = (longlong *)param_3[2];
  if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar5 + 0x19);
    plVar2 = (longlong *)*plVar5;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar2 + 0x19);
      plVar5 = plVar2;
      plVar2 = (longlong *)*plVar2;
    }
  }
  else {
    cVar1 = *(char *)(param_3[1] + 0x19);
    plVar3 = (longlong *)param_3[1];
    plVar2 = param_3;
    while ((plVar5 = plVar3, cVar1 == '\0' && (plVar2 == (longlong *)plVar5[2]))) {
      cVar1 = *(char *)(plVar5[1] + 0x19);
      plVar3 = (longlong *)plVar5[1];
      plVar2 = plVar5;
    }
  }
  uVar4 = FUN_1801511e0(param_1,param_3);
  FUN_1804547d0(uVar4,0x28);
  *param_2 = (longlong)plVar5;
  return param_2;
}



