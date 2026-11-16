// FUN_180176fb0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180176fb0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_180176fb0(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  longlong lVar6;
  longlong *local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  longlong local_88;
  longlong local_80;
  undefined1 local_70 [40];
  undefined1 local_48 [48];
  
  uVar5 = 0;
  lVar6 = (longlong)*(int *)(*param_1 + 4);
  uVar3 = 4;
  if (*(longlong *)(lVar6 + 0x48 + (longlong)param_1) != 0) {
    uVar3 = 0;
  }
  uVar3 = uVar3 | *(uint *)(lVar6 + 0x10 + (longlong)param_1) & 0x16;
  *(uint *)(lVar6 + 0x10 + (longlong)param_1) = uVar3;
  uVar3 = uVar3 & *(uint *)(lVar6 + 0x14 + (longlong)param_1);
  if (uVar3 != 0) {
    if ((uVar3 & 4) == 0) {
      pcVar4 = "ios_base::failbit set";
      if ((uVar3 & 2) == 0) {
        pcVar4 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar4 = "ios_base::badbit set";
    }
    uVar2 = FUN_1801597e0(&local_b8,1);
    FUN_1801596c0(local_70,pcVar4,uVar2);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_70,&DAT_1808d0f18);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  local_b8 = param_1;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  local_b0 = FUN_180179b30(param_1);
  if ((*(byte *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) & 6) == 0) {
    plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    local_a8 = *param_2;
    uStack_a0 = param_2[1];
    local_98 = param_2[2];
    (**(code **)(*plVar1 + 0x58))(plVar1,&local_88,&local_a8,1);
    uVar5 = 0;
    if (local_88 + local_80 == -1) {
      uVar5 = 2;
    }
  }
  lVar6 = (longlong)*(int *)(*param_1 + 4);
  uVar3 = 4;
  if (*(longlong *)(lVar6 + 0x48 + (longlong)param_1) != 0) {
    uVar3 = 0;
  }
  uVar5 = uVar3 | *(uint *)(lVar6 + 0x10 + (longlong)param_1) & 0x17 | uVar5;
  *(uint *)(lVar6 + 0x10 + (longlong)param_1) = uVar5;
  uVar5 = uVar5 & *(uint *)(lVar6 + 0x14 + (longlong)param_1);
  if (uVar5 == 0) {
    plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    return param_1;
  }
  if ((uVar5 & 4) == 0) {
    pcVar4 = "ios_base::failbit set";
    if ((uVar5 & 2) == 0) {
      pcVar4 = "ios_base::eofbit set";
    }
  }
  else {
    pcVar4 = "ios_base::badbit set";
  }
  uVar2 = FUN_1801597e0(&local_a8,1);
  FUN_1801596c0(local_48,pcVar4,uVar2);
                    /* WARNING: Subroutine does not return */
  FUN_180606630(local_48,&DAT_1808d0f18);
}



