// FUN_1800e6b50 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e6b50 */

undefined8 * FUN_1800e6b50(char *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  
  *param_2 = param_1;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0x8000000000000000;
  puVar1 = (undefined1 *)*param_2;
  switch(*puVar1) {
  default:
    param_2[3] = 1;
    break;
  case 1:
    param_2[1] = **(undefined8 **)(puVar1 + 8);
    break;
  case 2:
    param_2[2] = *(undefined8 *)(*(longlong *)(puVar1 + 8) + 8);
  }
  if (*param_1 == '\x01') {
    plVar2 = (longlong *)**(longlong **)(param_1 + 8);
    plVar5 = (longlong *)plVar2[1];
    cVar4 = *(char *)((longlong)plVar5 + 0x19);
    plVar6 = plVar2;
    while (cVar4 == '\0') {
      cVar4 = FUN_180156e70(plVar5 + 4,param_3);
      if (cVar4 < '\0') {
        plVar5 = plVar5 + 2;
      }
      else {
        plVar6 = plVar5;
      }
      plVar5 = (longlong *)*plVar5;
      cVar4 = *(char *)((longlong)plVar5 + 0x19);
    }
    if ((*(char *)((longlong)plVar6 + 0x19) == '\0') &&
       (cVar4 = FUN_180156e70(plVar6 + 4,param_3), cVar4 < '\x01')) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) {
      plVar6 = plVar2;
    }
    param_2[1] = plVar6;
  }
  return param_2;
}



