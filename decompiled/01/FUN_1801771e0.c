// FUN_1801771e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801771e0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_1801771e0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  char *pcVar7;
  undefined1 local_58 [16];
  undefined1 local_48 [48];
  
  uVar4 = 0;
  param_1[1] = 0;
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  cVar2 = FUN_180179b30(param_1);
  if ((cVar2 != '\0') && (0 < param_3)) {
    plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    lVar6 = (**(code **)(*plVar1 + 0x40))(plVar1,param_2,param_3);
    param_1[1] = lVar6;
    uVar4 = 0;
    if (lVar6 != param_3) {
      uVar4 = 3;
    }
  }
  lVar6 = (longlong)*(int *)(*param_1 + 4);
  uVar3 = 4;
  if (*(longlong *)(lVar6 + 0x48 + (longlong)param_1) != 0) {
    uVar3 = 0;
  }
  uVar4 = uVar3 | uVar4 | *(uint *)(lVar6 + 0x10 + (longlong)param_1) & 0x17;
  *(uint *)(lVar6 + 0x10 + (longlong)param_1) = uVar4;
  uVar4 = uVar4 & *(uint *)(lVar6 + 0x14 + (longlong)param_1);
  if (uVar4 == 0) {
    plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    return param_1;
  }
  if ((uVar4 & 4) == 0) {
    pcVar7 = "ios_base::failbit set";
    if ((uVar4 & 2) == 0) {
      pcVar7 = "ios_base::eofbit set";
    }
  }
  else {
    pcVar7 = "ios_base::badbit set";
  }
  uVar5 = FUN_1801597e0(local_58,1);
  FUN_1801596c0(local_48,pcVar7,uVar5);
                    /* WARNING: Subroutine does not return */
  FUN_180606630(local_48,&DAT_1808d0f18);
}



