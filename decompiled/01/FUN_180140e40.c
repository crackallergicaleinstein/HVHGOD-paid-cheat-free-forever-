// FUN_180140e40 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180140e40 */

longlong * FUN_180140e40(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *local_48;
  longlong *plStack_40;
  longlong *local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  
  plVar1 = (longlong *)*param_1;
  plVar2 = (longlong *)plVar1[1];
  uStack_30 = 0;
  cVar3 = *(char *)((longlong)plVar2 + 0x19);
  plVar5 = plVar1;
  local_38 = plVar2;
  while (cVar3 == '\0') {
    local_38 = plVar2;
    cVar3 = FUN_180114040(plVar2 + 4,param_2);
    if (-1 < cVar3) {
      plVar5 = plVar2;
    }
    uStack_30 = (uint)(-1 < cVar3);
    plVar4 = plVar2 + 2;
    if (-1 < cVar3) {
      plVar4 = plVar2;
    }
    plVar2 = (longlong *)*plVar4;
    cVar3 = *(char *)((longlong)plVar2 + 0x19);
  }
  if ((*(char *)((longlong)plVar5 + 0x19) != '\0') ||
     (cVar3 = FUN_180114040(param_2,plVar5 + 4), cVar3 < '\0')) {
    if (param_1[1] == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
      FUN_1800a7740();
    }
    plStack_40 = (longlong *)0x0;
    local_48 = param_1;
    FUN_180156fd0(&local_48);
    plVar2 = plStack_40;
    FUN_18015b360(plStack_40 + 4,param_2);
    *(undefined1 *)(plVar2 + 8) = 0;
    FUN_180111d10(plVar2 + 9,0);
    *plVar2 = (longlong)plVar1;
    plVar2[1] = (longlong)plVar1;
    plVar2[2] = (longlong)plVar1;
    *(undefined2 *)(plVar2 + 3) = 0;
    plStack_40 = (longlong *)CONCAT44(uStack_2c,uStack_30);
    local_48 = local_38;
    plVar5 = (longlong *)FUN_180140480(param_1,&local_48,plVar2);
  }
  return plVar5 + 8;
}



