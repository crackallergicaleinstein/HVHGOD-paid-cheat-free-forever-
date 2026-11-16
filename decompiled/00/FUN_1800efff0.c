// FUN_1800efff0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800efff0 */

void FUN_1800efff0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  lVar2 = *param_1;
  cVar1 = *(char *)((longlong)*(longlong **)(lVar2 + 8) + 0x19);
  plVar4 = *(longlong **)(lVar2 + 8);
  while (cVar1 == '\0') {
    FUN_1800f9830(param_1,param_1,plVar4[2]);
    plVar3 = (longlong *)*plVar4;
    FUN_1804547d0(plVar4,0x20);
    plVar4 = plVar3;
    cVar1 = *(char *)((longlong)plVar3 + 0x19);
  }
  *(longlong *)(lVar2 + 8) = lVar2;
  *(longlong *)lVar2 = lVar2;
  *(longlong *)(lVar2 + 0x10) = lVar2;
  param_1[1] = 0;
  return;
}



