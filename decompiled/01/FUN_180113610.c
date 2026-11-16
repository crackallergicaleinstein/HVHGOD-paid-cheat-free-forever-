// FUN_180113610 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180113610 */

longlong * FUN_180113610(char *param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined1 local_60 [56];
  undefined1 local_28 [32];
  
  if (*param_1 != '\x01') {
    FUN_180112a50();
    uVar5 = FUN_18010f360(local_28);
    FUN_1800f6ca0(local_60,0x131,uVar5);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_60,&DAT_1808d1050);
  }
  plVar1 = (longlong *)**(longlong **)(param_1 + 8);
  plVar4 = (longlong *)plVar1[1];
  cVar3 = *(char *)((longlong)plVar4 + 0x19);
  plVar6 = plVar1;
  while (cVar3 == '\0') {
    cVar3 = FUN_180114040(plVar4 + 4,param_2);
    if (cVar3 < '\0') {
      plVar4 = plVar4 + 2;
    }
    else {
      plVar6 = plVar4;
    }
    plVar4 = (longlong *)*plVar4;
    cVar3 = *(char *)((longlong)plVar4 + 0x19);
  }
  if ((*(char *)((longlong)plVar6 + 0x19) == '\0') &&
     (cVar3 = FUN_180114040(param_2,plVar6 + 4), -1 < cVar3)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    plVar6 = plVar1;
  }
  return plVar6 + 8;
}



