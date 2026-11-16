// FUN_180154120 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180154120 */

void FUN_180154120(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_180154120(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_1800aab30(param_3 + 8);
    FUN_18015c010(param_3 + 4);
    FUN_1804547d0(param_3,0x50);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



