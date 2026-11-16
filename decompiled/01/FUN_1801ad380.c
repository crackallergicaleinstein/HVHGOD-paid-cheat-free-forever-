// FUN_1801ad380 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801ad380 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_1801ad380(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  bool bVar8;
  undefined1 local_58 [16];
  undefined1 local_48 [48];
  
  uVar6 = 0;
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  lVar4 = *param_1;
  if (*(int *)((longlong)*(int *)(lVar4 + 4) + 0x10 + (longlong)param_1) == 0) {
    plVar1 = *(longlong **)((longlong)*(int *)(lVar4 + 4) + 0x50 + (longlong)param_1);
    if ((plVar1 == (longlong *)0x0) || (plVar1 == param_1)) {
      bVar8 = true;
    }
    else {
      FUN_1800f6450(plVar1);
      lVar4 = *param_1;
      bVar8 = *(int *)((longlong)*(int *)(lVar4 + 4) + 0x10 + (longlong)param_1) == 0;
    }
  }
  else {
    bVar8 = false;
  }
  if (bVar8) {
    if (0 < param_3) {
      plVar1 = *(longlong **)((longlong)*(int *)(lVar4 + 4) + 0x48 + (longlong)param_1);
      lVar4 = (**(code **)(*plVar1 + 0x48))(plVar1,param_2,param_3);
      uVar6 = 0;
      if (lVar4 != param_3) {
        uVar6 = 4;
      }
    }
  }
  else {
    uVar6 = 4;
  }
  lVar4 = (longlong)*(int *)(*param_1 + 4);
  uVar5 = 4;
  if (*(longlong *)(lVar4 + 0x48 + (longlong)param_1) != 0) {
    uVar5 = 0;
  }
  uVar6 = uVar5 | *(uint *)(lVar4 + 0x10 + (longlong)param_1) & 0x17 | uVar6;
  *(uint *)(lVar4 + 0x10 + (longlong)param_1) = uVar6;
  uVar6 = uVar6 & *(uint *)(lVar4 + 0x14 + (longlong)param_1);
  if (uVar6 != 0) {
    if ((uVar6 & 4) == 0) {
      pcVar7 = "ios_base::failbit set";
      if ((uVar6 & 2) == 0) {
        pcVar7 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar7 = "ios_base::badbit set";
    }
    uVar3 = FUN_1801597e0(local_58,1);
    FUN_1801596c0(local_48,pcVar7,uVar3);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_48,&DAT_1808d0f18);
  }
  iVar2 = __uncaught_exceptions();
  if (iVar2 == 0) {
    FUN_1801416e0(param_1);
  }
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x10))();
  }
  return param_1;
}



