// FUN_1800f42a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f42a0 */

void FUN_1800f42a0(char *param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 local_res8;
  longlong *local_88;
  longlong *local_80;
  undefined1 local_68 [64];
  
  if (*param_1 != '\x01') {
    local_res8 = FUN_180112a50();
    uVar2 = FUN_1800f6bd0(&local_88,"cannot use erase() with ",&local_res8);
    FUN_1800f6ca0(local_68,0x133,uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_68,&DAT_1808d1050);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  plVar6 = (longlong *)*plVar1;
  plVar4 = (longlong *)plVar6[1];
  cVar3 = *(char *)((longlong)plVar4 + 0x19);
  plVar7 = plVar6;
  plVar5 = plVar4;
  while (cVar3 == '\0') {
    cVar3 = FUN_180114040(plVar5 + 4,param_2);
    if (cVar3 < '\0') {
      plVar5 = plVar5 + 2;
    }
    else {
      if ((*(char *)((longlong)plVar6 + 0x19) != '\0') &&
         (cVar3 = FUN_180114040(param_2,plVar5 + 4), cVar3 < '\0')) {
        plVar6 = plVar5;
      }
      plVar7 = plVar5;
    }
    plVar5 = (longlong *)*plVar5;
    cVar3 = *(char *)((longlong)plVar5 + 0x19);
  }
  if (*(char *)((longlong)plVar6 + 0x19) == '\0') {
    plVar4 = (longlong *)*plVar6;
  }
  cVar3 = *(char *)((longlong)plVar4 + 0x19);
  while (cVar3 == '\0') {
    cVar3 = FUN_180114040(param_2,plVar4 + 4);
    if (cVar3 < '\0') {
      plVar5 = (longlong *)*plVar4;
      plVar6 = plVar4;
    }
    else {
      plVar5 = (longlong *)plVar4[2];
    }
    plVar4 = plVar5;
    cVar3 = *(char *)((longlong)plVar5 + 0x19);
  }
  local_88 = plVar7;
  local_80 = plVar6;
  FUN_180151780(plVar1,&local_88);
  return;
}



