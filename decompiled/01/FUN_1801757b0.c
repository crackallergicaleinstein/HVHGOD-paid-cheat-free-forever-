// FUN_1801757b0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801757b0 */

longlong * FUN_1801757b0(char *param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 local_b0 [32];
  undefined1 local_90 [56];
  undefined1 local_58 [64];
  
  if (*param_1 != '\x01') {
    FUN_180112a50();
    uVar4 = FUN_1800f7460(local_b0);
    FUN_1800f6ca0(local_90,0x130,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_90,&DAT_1808d1050);
  }
  plVar1 = (longlong *)**(longlong **)(param_1 + 8);
  plVar5 = (longlong *)plVar1[1];
  cVar3 = *(char *)((longlong)plVar5 + 0x19);
  plVar6 = plVar1;
  while (cVar3 == '\0') {
    cVar3 = FUN_180156e70(plVar5 + 4,param_2);
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
     (cVar3 = FUN_180156e70(plVar6 + 4,param_2), cVar3 < '\x01')) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (!bVar2) {
    plVar6 = plVar1;
  }
  if (plVar6 == plVar1) {
    FUN_18015bae0(local_b0,param_2);
    uVar4 = FUN_1800f7510(local_90);
    FUN_180152320(local_58,0x193,uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_58,&DAT_1808d0f80);
  }
  return plVar6 + 8;
}



