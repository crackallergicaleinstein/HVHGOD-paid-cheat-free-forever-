// FUN_1800f33e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f33e0 */

undefined8 * FUN_1800f33e0(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  
  switch(*(undefined1 *)*param_1) {
  default:
    param_1[3] = param_1[3] + 1;
    return param_1;
  case 1:
    break;
  case 2:
    param_1[2] = param_1[2] + 0x10;
    return param_1;
  }
  plVar4 = (longlong *)param_1[1];
  plVar3 = (longlong *)plVar4[2];
  if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
    cVar1 = *(char *)(*plVar3 + 0x19);
    plVar4 = (longlong *)*plVar3;
    while (cVar1 == '\0') {
      cVar1 = *(char *)(*plVar4 + 0x19);
      plVar3 = plVar4;
      plVar4 = (longlong *)*plVar4;
    }
  }
  else {
    plVar3 = (longlong *)plVar4[1];
    plVar2 = plVar3;
    if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
      while (plVar3 = plVar2, plVar4 == (longlong *)plVar3[2]) {
        plVar2 = (longlong *)plVar3[1];
        plVar4 = plVar3;
        if (*(char *)((longlong)plVar2 + 0x19) != '\0') {
          param_1[1] = plVar2;
          return param_1;
        }
      }
    }
  }
  param_1[1] = plVar3;
  return param_1;
}



