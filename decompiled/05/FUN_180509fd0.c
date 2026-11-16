// FUN_180509fd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180509fd0 */

void FUN_180509fd0(longlong param_1,uint param_2,char param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong *plVar4;
  uint local_res10 [6];
  longlong *local_18;
  longlong *local_10;
  
  plVar1 = (longlong *)(param_1 + 8);
  local_res10[0] = param_2;
  if (param_3 == '\0') {
    FUN_18054c8d0(plVar1,&local_18,local_res10);
    return;
  }
  local_10 = (longlong *)*plVar1;
  plVar3 = (longlong *)local_10[1];
  cVar2 = *(char *)((longlong)plVar3 + 0x19);
  local_18 = local_10;
  plVar4 = plVar3;
  while (cVar2 == '\0') {
    if (*(uint *)((longlong)plVar4 + 0x1c) < param_2) {
      plVar4 = plVar4 + 2;
    }
    else {
      if ((*(char *)((longlong)local_10 + 0x19) != '\0') &&
         (param_2 < *(uint *)((longlong)plVar4 + 0x1c))) {
        local_10 = plVar4;
      }
      local_18 = plVar4;
    }
    plVar4 = (longlong *)*plVar4;
    cVar2 = *(char *)((longlong)plVar4 + 0x19);
  }
  if (*(char *)((longlong)local_10 + 0x19) == '\0') {
    plVar3 = (longlong *)*local_10;
  }
  cVar2 = *(char *)((longlong)plVar3 + 0x19);
  while (cVar2 == '\0') {
    if (param_2 < *(uint *)((longlong)plVar3 + 0x1c)) {
      plVar4 = (longlong *)*plVar3;
      local_10 = plVar3;
    }
    else {
      plVar4 = (longlong *)plVar3[2];
    }
    plVar3 = plVar4;
    cVar2 = *(char *)((longlong)plVar4 + 0x19);
  }
  FUN_18056d990(plVar1,&local_18);
  return;
}



