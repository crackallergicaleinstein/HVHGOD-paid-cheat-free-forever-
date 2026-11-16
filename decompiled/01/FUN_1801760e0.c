// FUN_1801760e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801760e0 */

longlong * FUN_1801760e0(char *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_a0 [32];
  undefined1 local_80 [56];
  undefined1 local_48 [64];
  
  if (*param_1 != '\x01') {
    FUN_180112a50();
    uVar4 = FUN_1800f7460(local_a0);
    FUN_1800f6ca0(local_80,0x130,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_80,&DAT_1808d1050);
  }
  plVar1 = (longlong *)**(longlong **)(param_1 + 8);
  plVar5 = (longlong *)plVar1[1];
  cVar3 = *(char *)((longlong)plVar5 + 0x19);
  plVar6 = plVar1;
  while (cVar3 == '\0') {
    cVar3 = FUN_180156e70(plVar5 + 4,&DAT_1806bd758);
    if (cVar3 < '\0') {
      plVar5 = plVar5 + 2;
    }
    else {
      plVar6 = plVar5;
    }
    plVar5 = (longlong *)*plVar5;
    cVar3 = *(char *)((longlong)plVar5 + 0x19);
  }
  if ((*(char *)((longlong)plVar6 + 0x19) == '\0') &&
     (cVar3 = FUN_180156e70(plVar6 + 4,&DAT_1806bd758), cVar3 < '\x01')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    plVar6 = plVar1;
  }
  if (plVar6 == plVar1) {
    FUN_18015bae0(local_a0,&DAT_1806bd758);
    FUN_1800f7510(local_80);
    FUN_1800f75b0(local_48);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_48,&DAT_1808d0f80);
  }
  return plVar6 + 8;
}



