// FUN_1800e9e90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800e9e90 */

undefined8 FUN_1800e9e90(char *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  
  if (*param_1 == '\x01') {
    plVar1 = (longlong *)**(longlong **)(param_1 + 8);
    plVar4 = (longlong *)plVar1[1];
    cVar3 = *(char *)((longlong)plVar4 + 0x19);
    plVar2 = plVar1;
    while (cVar3 == '\0') {
      cVar3 = FUN_180156e70(plVar4 + 4,"appearance");
      if (cVar3 < '\0') {
        plVar4 = plVar4 + 2;
      }
      else {
        plVar2 = plVar4;
      }
      plVar4 = (longlong *)*plVar4;
      cVar3 = *(char *)((longlong)plVar4 + 0x19);
    }
    if (((*(char *)((longlong)plVar2 + 0x19) == '\0') &&
        (cVar3 = FUN_180156e70(plVar2 + 4,"appearance"), cVar3 < '\x01')) && (plVar2 != plVar1)) {
      return 1;
    }
  }
  return 0;
}



