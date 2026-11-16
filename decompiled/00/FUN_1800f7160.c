// FUN_1800f7160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800f7160 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_1800f7160(longlong *param_1,undefined8 param_2,ulonglong param_3)

{
  byte bVar1;
  longlong *plVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  uint uVar11;
  longlong *plVar12;
  bool bVar13;
  undefined1 uVar14;
  undefined1 local_68 [16];
  undefined1 local_58 [48];
  
  uVar11 = 0;
  uVar6 = *(ulonglong *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1);
  if (((longlong)uVar6 < 1) || (uVar6 <= param_3)) {
    lVar9 = 0;
  }
  else {
    lVar9 = uVar6 - param_3;
  }
  plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  plVar12 = param_1;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  lVar8 = *param_1;
  if (*(int *)((longlong)*(int *)(lVar8 + 4) + 0x10 + (longlong)param_1) == 0) {
    plVar2 = *(longlong **)((longlong)*(int *)(lVar8 + 4) + 0x50 + (longlong)param_1);
    if ((plVar2 == (longlong *)0x0) || (plVar2 == param_1)) {
      bVar13 = true;
    }
    else {
      FUN_1800f6450(plVar2);
      lVar8 = *param_1;
      bVar13 = *(int *)((longlong)*(int *)(lVar8 + 4) + 0x10 + (longlong)param_1) == 0;
    }
  }
  else {
    bVar13 = false;
  }
  if (bVar13) {
    uVar14 = 1;
    if ((*(uint *)((longlong)*(int *)(lVar8 + 4) + 0x18 + (longlong)param_1) & 0x1c0) != 0x40) {
      for (; lVar9 != 0; lVar9 = lVar9 + -1) {
        plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
        bVar1 = *(byte *)((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1);
        uVar4 = (uint)bVar1;
        if (*(longlong *)plVar2[8] == 0) {
LAB_1800f728e:
          uVar4 = (**(code **)(*plVar2 + 0x18))(plVar2,bVar1,plVar2,bVar1,plVar12,uVar14);
        }
        else {
          iVar5 = *(int *)plVar2[0xb];
          if (iVar5 < 1) goto LAB_1800f728e;
          *(int *)plVar2[0xb] = iVar5 + -1;
          pbVar3 = *(byte **)plVar2[8];
          *(byte **)plVar2[8] = pbVar3 + 1;
          *pbVar3 = bVar1;
        }
        if (uVar4 == 0xffffffff) {
          uVar11 = 4;
          goto LAB_1800f72b4;
        }
      }
    }
    plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    uVar6 = (**(code **)(*plVar2 + 0x48))(plVar2,param_2,param_3);
    if (uVar6 == param_3) {
LAB_1800f72b4:
      do {
        if (lVar9 == 0) goto LAB_1800f7333;
        plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
        bVar1 = *(byte *)((longlong)*(int *)(*param_1 + 4) + 0x58 + (longlong)param_1);
        uVar4 = (uint)bVar1;
        if (*(longlong *)plVar2[8] == 0) {
LAB_1800f7341:
          uVar4 = (**(code **)(*plVar2 + 0x18))(plVar2,bVar1);
        }
        else {
          iVar5 = *(int *)plVar2[0xb];
          if (iVar5 < 1) goto LAB_1800f7341;
          *(int *)plVar2[0xb] = iVar5 + -1;
          pbVar3 = *(byte **)plVar2[8];
          *(byte **)plVar2[8] = pbVar3 + 1;
          *pbVar3 = bVar1;
        }
        if (uVar4 == 0xffffffff) {
          uVar11 = 4;
          goto LAB_1800f7333;
        }
        lVar9 = lVar9 + -1;
      } while( true );
    }
    uVar11 = 4;
LAB_1800f7333:
    *(undefined8 *)((longlong)*(int *)(*param_1 + 4) + 0x28 + (longlong)param_1) = 0;
  }
  else {
    uVar11 = 4;
  }
  lVar9 = (longlong)*(int *)(*param_1 + 4);
  uVar4 = 4;
  if (*(longlong *)(lVar9 + 0x48 + (longlong)param_1) != 0) {
    uVar4 = 0;
  }
  uVar11 = uVar4 | *(uint *)(lVar9 + 0x10 + (longlong)param_1) & 0x17 | uVar11;
  *(uint *)(lVar9 + 0x10 + (longlong)param_1) = uVar11;
  uVar11 = uVar11 & *(uint *)(lVar9 + 0x14 + (longlong)param_1);
  if (uVar11 != 0) {
    if ((uVar11 & 4) == 0) {
      pcVar10 = "ios_base::failbit set";
      if ((uVar11 & 2) == 0) {
        pcVar10 = "ios_base::eofbit set";
      }
    }
    else {
      pcVar10 = "ios_base::badbit set";
    }
    uVar7 = FUN_1801597e0(local_68,1);
    FUN_1801596c0(local_58,pcVar10,uVar7);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_58,&DAT_1808d0f18);
  }
  iVar5 = __uncaught_exceptions();
  if (iVar5 == 0) {
    FUN_1801416e0(param_1);
  }
  plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x10))();
  }
  return param_1;
}



