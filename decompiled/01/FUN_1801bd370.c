// FUN_1801bd370 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bd370 */

void FUN_1801bd370(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1801bd370(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_1800f0160(param_3 + 8);
    FUN_18015c010(param_3 + 4);
    FUN_1804547d0(param_3,0x58);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



