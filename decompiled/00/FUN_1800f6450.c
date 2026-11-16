// FUN_1800f6450 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f6450 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_1800f6450(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  bool bVar9;
  longlong *plVar10;
  undefined1 local_48 [16];
  undefined1 local_38 [48];
  
  plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar1 != (longlong *)0x0) {
    plVar10 = param_1;
    (**(code **)(*plVar1 + 8))(plVar1);
    if (*(int *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) == 0) {
      plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x50 + (longlong)param_1);
      if ((plVar2 == (longlong *)0x0) || (plVar2 == param_1)) {
        bVar9 = true;
      }
      else {
        FUN_1800f6450();
        bVar9 = *(int *)((longlong)*(int *)(*param_1 + 4) + 0x10 + (longlong)param_1) == 0;
      }
    }
    else {
      bVar9 = false;
    }
    if (bVar9) {
      iVar3 = (**(code **)(*plVar1 + 0x68))(plVar1);
      uVar8 = 0;
      if (iVar3 == -1) {
        uVar8 = 4;
      }
      lVar5 = (longlong)*(int *)(*param_1 + 4);
      uVar6 = 4;
      if (*(longlong *)(lVar5 + 0x48 + (longlong)param_1) != 0) {
        uVar6 = 0;
      }
      uVar6 = uVar6 | *(uint *)(lVar5 + 0x10 + (longlong)param_1) & 0x17 | uVar8;
      *(uint *)(lVar5 + 0x10 + (longlong)param_1) = uVar6;
      uVar6 = uVar6 & *(uint *)(lVar5 + 0x14 + (longlong)param_1);
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
        uVar4 = FUN_1801597e0(local_48,1,uVar8,param_4,plVar10);
        FUN_1801596c0(local_38,pcVar7,uVar4);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_38,&DAT_1808d0f18);
      }
    }
    iVar3 = __uncaught_exceptions();
    if (iVar3 == 0) {
      FUN_1801416e0(param_1);
    }
    plVar1 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
  }
  return param_1;
}



