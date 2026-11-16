// FUN_1801b05f0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801b05f0 */

void FUN_1801b05f0(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)((longlong)param_3 + 0x19);
  while (cVar1 == '\0') {
    FUN_1801b05f0(param_1,param_2,param_3[2]);
    plVar2 = (longlong *)*param_3;
    FUN_1804547d0(param_3,0x28);
    param_3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  return;
}



