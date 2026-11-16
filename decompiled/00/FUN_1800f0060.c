// FUN_1800f0060 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f0060 */

void FUN_1800f0060(longlong *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  cVar1 = *(char *)((longlong)*(longlong **)(*param_1 + 8) + 0x19);
  plVar3 = *(longlong **)(*param_1 + 8);
  while (cVar1 == '\0') {
    FUN_1800f9830(param_1,param_1,plVar3[2]);
    plVar2 = (longlong *)*plVar3;
    FUN_1804547d0(plVar3,0x20);
    plVar3 = plVar2;
    cVar1 = *(char *)((longlong)plVar2 + 0x19);
  }
  FUN_1804547d0(*param_1,0x20);
  return;
}



