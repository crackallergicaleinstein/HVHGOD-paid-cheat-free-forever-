// FUN_1800f6de0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f6de0 */

longlong * FUN_1800f6de0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  param_1 = (longlong *)*param_1;
  plVar3 = (longlong *)param_1[1];
  cVar2 = *(char *)((longlong)plVar3 + 0x19);
  plVar4 = param_1;
  while (cVar2 == '\0') {
    cVar2 = FUN_180156e70(plVar3 + 4,param_3);
    if (cVar2 < '\0') {
      plVar3 = plVar3 + 2;
    }
    else {
      plVar4 = plVar3;
    }
    plVar3 = (longlong *)*plVar3;
    cVar2 = *(char *)((longlong)plVar3 + 0x19);
  }
  if ((*(char *)((longlong)plVar4 + 0x19) == '\0') &&
     (cVar2 = FUN_180156e70(plVar4 + 4,param_3), cVar2 < '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    plVar4 = param_1;
  }
  *param_2 = (longlong)plVar4;
  return param_2;
}



