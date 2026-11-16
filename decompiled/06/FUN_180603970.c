// FUN_180603970 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180603970 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_180603970(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  char *pcVar7;
  longlong lVar8;
  longlong *local_88;
  char local_80;
  uint local_78 [2];
  longlong *plStack_70;
  char local_68 [16];
  undefined1 local_58 [64];
  
  uVar6 = 0;
  FUN_1801137d0(&local_88);
  if (local_80 != '\0') {
    plVar1 = *(longlong **)
              (*(longlong *)((longlong)*(int *)(*param_1 + 4) + 0x40 + (longlong)param_1) + 8);
    plStack_70 = plVar1;
    (**(code **)(*plVar1 + 8))(plVar1);
    plVar3 = (longlong *)FUN_180601f5c(local_78);
    if ((plVar1 != (longlong *)0x0) &&
       (puVar4 = (undefined8 *)(**(code **)(*plVar1 + 0x10))(plVar1), puVar4 != (undefined8 *)0x0))
    {
      (**(code **)*puVar4)(puVar4,1);
    }
    lVar8 = (longlong)*(int *)(*param_1 + 4) + (longlong)param_1;
    local_78[0] = local_78[0] & 0xffffff00;
    plStack_70 = *(longlong **)(lVar8 + 0x48);
    (**(code **)(*plVar3 + 0x28))
              (plVar3,local_68,local_78,lVar8,*(undefined1 *)(lVar8 + 0x58),param_2);
    uVar6 = 0;
    if (local_68[0] != '\0') {
      uVar6 = 4;
    }
  }
  lVar8 = (longlong)*(int *)(*param_1 + 4);
  uVar6 = ~-(uint)(*(longlong *)(lVar8 + 0x48 + (longlong)param_1) != 0) & 4 | uVar6 |
          *(uint *)(lVar8 + 0x10 + (longlong)param_1) & 0x17;
  *(uint *)(lVar8 + 0x10 + (longlong)param_1) = uVar6;
  uVar6 = uVar6 & *(uint *)(lVar8 + 0x14 + (longlong)param_1);
  if (uVar6 == 0) {
    iVar2 = __uncaught_exceptions();
    if (iVar2 == 0) {
      FUN_1801416e0(local_88);
    }
    plVar1 = *(longlong **)((longlong)*(int *)(*local_88 + 4) + 0x48 + (longlong)local_88);
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    return param_1;
  }
  if ((uVar6 & 4) == 0) {
    pcVar7 = "ios_base::failbit set";
    if ((uVar6 & 2) == 0) {
      pcVar7 = "ios_base::eofbit set";
    }
  }
  else {
    pcVar7 = "ios_base::badbit set";
  }
  uVar5 = FUN_1801597e0(local_68,1);
  FUN_1801596c0(local_58,pcVar7,uVar5);
                    /* WARNING: Subroutine does not return */
  FUN_180606630(local_58,&DAT_1808d0f18);
}



