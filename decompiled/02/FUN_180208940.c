// FUN_180208940 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180208940 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_180208940(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 (*pauVar3) [16];
  char cVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined1 (*local_48) [16];
  undefined1 (*pauStack_40) [16];
  undefined *local_38;
  undefined1 local_30 [24];
  
  puVar10 = (undefined8 *)0x0;
  if (param_2[2] == 0) {
    if ((DAT_180cd3a18 & 1) == 0) {
      DAT_180cd3a18 = DAT_180cd3a18 | 1;
      DAT_180cd3a20 = 0;
      _DAT_180cd3a28 = 0;
      atexit(FUN_180662840);
    }
    return &DAT_180cd3a20;
  }
  local_38 = &DAT_180cc9db0;
  iVar5 = FUN_1805f68d0(&DAT_180cc9db0);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (DAT_180cc9dfc == 0x7fffffff) {
    DAT_180cc9dfc = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  puVar8 = param_2;
  if (0xf < (ulonglong)param_2[3]) {
    puVar8 = (undefined8 *)*param_2;
  }
  uVar11 = 0xcbf29ce484222325;
  uVar7 = 0;
  if (param_2[2] != 0) {
    do {
      uVar11 = (uVar11 ^ *(byte *)((longlong)puVar8 + uVar7)) * 0x100000001b3;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (ulonglong)param_2[2]);
  }
  lVar6 = FUN_180177b00(&DAT_180cc9d70,&local_48,param_2,uVar11);
  lVar9 = DAT_180cc9d78;
  if (*(longlong *)(lVar6 + 8) != 0) {
    lVar9 = *(longlong *)(lVar6 + 8);
  }
  if (lVar9 == DAT_180cc9d78) {
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      pauStack_40 = (undefined1 (*) [16])0x15;
      local_48 = (undefined1 (*) [16])"tier0.dll:g_pMemAlloc";
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_48);
    }
    pauStack_40 = (undefined1 (*) [16])
                  (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x50);
    if (pauStack_40 == (undefined1 (*) [16])0x0) {
      pauStack_40 = (undefined1 (*) [16])0x0;
    }
    else {
      *pauStack_40 = (undefined1  [16])0x0;
      *(undefined4 *)(*pauStack_40 + 8) = 1;
      *(undefined4 *)(*pauStack_40 + 0xc) = 1;
      *(undefined ***)*pauStack_40 =
           std::_Ref_count_obj2<features::changer::econ_item_system::image_entry>::vftable;
      *(undefined4 *)(pauStack_40[2] + 1) = 0;
      *(undefined2 *)(pauStack_40[2] + 5) = 0;
      pauStack_40[2][7] = 0;
      *(undefined8 *)(pauStack_40[4] + 8) = 0;
      *(undefined8 *)pauStack_40[1] = 0;
      *(undefined8 *)(pauStack_40[1] + 8) = 0;
      pauStack_40[2][0] = 0;
      *(undefined8 *)(pauStack_40[2] + 8) = 0;
      *(undefined8 *)pauStack_40[3] = 0;
      *(undefined8 *)(pauStack_40[3] + 8) = 0;
      *(undefined8 *)pauStack_40[4] = 0;
    }
    local_48 = pauStack_40 + 1;
    uVar12 = FUN_18020e720(&DAT_180cc9d70,local_30,param_2,&local_48);
    FUN_18020bff0(uVar12,param_2);
    pauVar3 = pauStack_40;
    if (pauStack_40 != (undefined1 (*) [16])0x0) {
      LOCK();
      plVar1 = (longlong *)((longlong)pauStack_40 + 8);
      lVar9 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar9 == 1) {
        (*(code *)**(undefined8 **)pauStack_40)(pauStack_40);
        LOCK();
        piVar2 = (int *)((longlong)pauVar3 + 0xc);
        iVar5 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar5 == 1) {
          (**(code **)(*(longlong *)pauVar3 + 8))(pauVar3);
        }
      }
    }
    goto LAB_180208b84;
  }
  cVar4 = *(char *)(*(longlong *)(lVar9 + 0x30) + 0x10);
  if (cVar4 != '\x03') {
    if (cVar4 == '\x02') {
      cVar4 = FUN_18020c3d0(2,*(undefined8 *)(lVar9 + 0x30));
      if (cVar4 == '\0') goto LAB_180208b84;
    }
    else if (cVar4 != '\x04') goto LAB_180208b84;
  }
  puVar10 = *(undefined8 **)(lVar9 + 0x30);
LAB_180208b84:
  FUN_1805f68fc(&DAT_180cc9db0);
  return puVar10;
}



