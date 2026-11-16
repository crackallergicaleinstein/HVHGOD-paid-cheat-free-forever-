// FUN_1801577b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801577b0 */

void FUN_1801577b0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_180154120(param_1,param_2,plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    FUN_1800aab30(plVar3 + 8);
    FUN_18015c010(plVar3 + 4);
    FUN_1804547d0(plVar3,0x50);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  FUN_1804547d0(*param_1,0x50);
  return;
}



