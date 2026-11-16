// FUN_180113470 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180113470 */

void FUN_180113470(char *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong *local_a8 [2];
  longlong *local_98;
  longlong *plStack_90;
  longlong *local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined1 local_68 [64];
  
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    FUN_180111d10(local_a8,1);
    *(longlong **)(param_1 + 8) = local_a8[0];
  }
  else if (*param_1 != '\x01') {
    local_a8[0] = (longlong *)FUN_180112a50();
    uVar5 = FUN_1800f6bd0(&local_88,"cannot use push_back() with ",local_a8);
    FUN_1800f6ca0(local_68,0x134,uVar5);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_68,&DAT_1808d1050);
  }
  plVar1 = *(longlong **)(param_1 + 8);
  plVar2 = (longlong *)*plVar1;
  plVar8 = (longlong *)plVar2[1];
  uStack_80 = 0;
  plVar7 = plVar2;
  if (*(char *)((longlong)plVar8 + 0x19) == '\0') {
    plVar3 = plVar8;
    do {
      plVar8 = plVar3;
      cVar4 = FUN_180114040(plVar8 + 4,param_2);
      if (-1 < cVar4) {
        plVar6 = plVar8;
        plVar7 = plVar8;
      }
      else {
        plVar6 = plVar8 + 2;
      }
      uStack_80 = (uint)(-1 < cVar4);
      plVar3 = (longlong *)*plVar6;
    } while (*(char *)(*plVar6 + 0x19) == '\0');
  }
  local_88 = plVar8;
  if ((*(char *)((longlong)plVar7 + 0x19) != '\0') ||
     (cVar4 = FUN_180114040(param_2,plVar7 + 4), cVar4 < '\0')) {
    if (plVar1[1] == 0x333333333333333) {
                    /* WARNING: Subroutine does not return */
      FUN_1800a7740();
    }
    plStack_90 = (longlong *)0x0;
    local_98 = plVar1;
    FUN_180156fd0(&local_98);
    plVar8 = plStack_90;
    local_a8[0] = plStack_90 + 4;
    FUN_18015b360(local_a8[0],param_2);
    FUN_1800f4a50(plVar8 + 8,param_2 + 0x20);
    *plVar8 = (longlong)plVar2;
    plVar8[1] = (longlong)plVar2;
    plVar8[2] = (longlong)plVar2;
    *(undefined2 *)(plVar8 + 3) = 0;
    plStack_90 = (longlong *)CONCAT44(uStack_7c,uStack_80);
    local_98 = local_88;
    FUN_180140480(plVar1,&local_98,plVar8);
  }
  return;
}



