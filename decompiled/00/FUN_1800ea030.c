// FUN_1800ea030 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800ea030 */

undefined8 * FUN_1800ea030(char *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  longlong *plVar2;
  undefined8 uVar3;
  bool bVar4;
  char cVar5;
  longlong *plVar6;
  longlong *plVar7;
  
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
    plVar6 = (longlong *)plVar2[1];
    plVar7 = plVar2;
    if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
      uVar3 = *param_3;
      do {
        cVar5 = FUN_180156e70(plVar6 + 4,uVar3);
        if (cVar5 < '\0') {
          plVar6 = plVar6 + 2;
        }
        else {
          plVar7 = plVar6;
        }
        plVar6 = (longlong *)*plVar6;
      } while (*(char *)((longlong)plVar6 + 0x19) == '\0');
    }
    if ((*(char *)((longlong)plVar7 + 0x19) == '\0') &&
       (cVar5 = FUN_180156e70(plVar7 + 4,*param_3), cVar5 < '\x01')) {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
    if (!bVar4) {
      plVar7 = plVar2;
    }
    param_2[1] = plVar7;
  }
  return param_2;
}



