// FUN_1801775a0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801775a0 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

longlong * FUN_1801775a0(longlong *param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 local_60 [16];
  undefined1 local_50 [40];
  
  uVar9 = 0;
  bVar3 = false;
  plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  cVar4 = FUN_180179b30(param_1);
  if (cVar4 != '\0') {
    param_2[2] = 0;
    puVar6 = param_2;
    if (0xf < (ulonglong)param_2[3]) {
      puVar6 = (undefined8 *)*param_2;
    }
    *(undefined1 *)puVar6 = 0;
    plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    if ((*(byte **)plVar2[7] == (byte *)0x0) || (*(int *)plVar2[10] < 1)) {
      uVar5 = (**(code **)(*plVar2 + 0x30))();
    }
    else {
      uVar5 = (uint)**(byte **)plVar2[7];
    }
    while (uVar5 != 0xffffffff) {
      if (uVar5 == (param_3 & 0xff)) {
        bVar3 = true;
        plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
        if (*(longlong *)plVar2[7] != 0) {
          iVar1 = *(int *)plVar2[10];
          if (0 < iVar1) {
            *(int *)plVar2[10] = iVar1 + -1;
            *(longlong *)plVar2[7] = *(longlong *)plVar2[7] + 1;
            goto LAB_1801776ce;
          }
        }
        (**(code **)(*plVar2 + 0x38))();
        goto LAB_1801776ce;
      }
      if (0x7ffffffffffffffe < (ulonglong)param_2[2]) {
        uVar9 = 2;
        goto LAB_1801776ce;
      }
      FUN_18015af80(param_2,uVar5 & 0xff);
      bVar3 = true;
      uVar5 = FUN_180179bf0(*(undefined8 *)
                             ((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1));
    }
    uVar9 = 1;
LAB_1801776ce:
    if (bVar3) goto LAB_180177720;
  }
  uVar9 = uVar9 | 2;
LAB_180177720:
  lVar8 = (longlong)*(int *)(*param_1 + 4);
  uVar5 = 4;
  if (*(longlong *)(lVar8 + 0x48 + (longlong)param_1) != 0) {
    uVar5 = 0;
  }
  uVar9 = uVar5 | *(uint *)(lVar8 + 0x10 + (longlong)param_1) & 0x17 | uVar9;
  *(uint *)(lVar8 + 0x10 + (longlong)param_1) = uVar9;
  uVar9 = uVar9 & *(uint *)(lVar8 + 0x14 + (longlong)param_1);
  if (uVar9 == 0) {
    plVar2 = *(longlong **)((longlong)*(int *)(*param_1 + 4) + 0x48 + (longlong)param_1);
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    return param_1;
  }
  if ((uVar9 & 4) == 0) {
    pcVar10 = "ios_base::failbit set";
    if ((uVar9 & 2) == 0) {
      pcVar10 = "ios_base::eofbit set";
    }
  }
  else {
    pcVar10 = "ios_base::badbit set";
  }
  uVar7 = FUN_1801597e0(local_60,1);
  FUN_1801596c0(local_50,pcVar10,uVar7);
                    /* WARNING: Subroutine does not return */
  FUN_180606630(local_50,&DAT_1808d0f18);
}



