// FUN_1800d3530 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800d3530 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1800d3530(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  bool bVar7;
  longlong lVar8;
  longlong *plVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*local_58) [16];
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined1 (*local_30) [16];
  
  local_58 = (undefined1 (*) [16])((ulonglong)local_58 & 0xffffffff00000000);
  if ((param_2[1] == 0) || (0x200 < (ulonglong)param_2[1])) {
    local_40 = (longlong *)0x0;
    puVar10 = &local_48;
    bVar7 = false;
    bVar6 = true;
    pauVar12 = (undefined1 (*) [16])0x0;
  }
  else {
    if (DAT_180c7df28 == (undefined8 *)0x0) {
      local_58 = (undefined1 (*) [16])0x180827288;
      local_50 = 0x15;
      DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
    }
    local_30 = (undefined1 (*) [16])
               (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x30);
    local_58 = local_30;
    if (local_30 == (undefined1 (*) [16])0x0) {
      local_30 = (undefined1 (*) [16])0x0;
    }
    else {
      *local_30 = (undefined1  [16])0x0;
      *(undefined4 *)(*local_30 + 8) = 1;
      *(undefined4 *)(*local_30 + 0xc) = 1;
      *(undefined ***)*local_30 =
           std::
           _Ref_count_obj2<std::basic_string<char,std::char_traits<char>,std::allocator<char>_>_const_>
           ::vftable;
      local_30[1] = (undefined1  [16])0x0;
      *(undefined8 *)local_30[2] = 0;
      *(undefined8 *)(local_30[2] + 8) = 0;
      FUN_18015ba30(local_30 + 1,*param_2,param_2[1]);
    }
    puVar10 = &local_38;
    bVar7 = true;
    bVar6 = false;
    pauVar12 = local_30 + 1;
  }
  uVar5 = puVar10[1];
  *puVar10 = 0;
  puVar10[1] = 0;
  uVar11 = FUN_180113860(param_1 + 0x18);
  local_58 = *(undefined1 (**) [16])(param_1 + 0x10);
  *(undefined1 (**) [16])(param_1 + 0x10) = pauVar12;
  LOCK();
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  UNLOCK();
  if (((byte)uVar4 & 3) == 2) {
    FUN_1805fa36c(param_1 + 0x18);
  }
  local_50 = uVar11;
  FUN_1800efed0(&local_58);
  plVar9 = local_40;
  if (bVar6) {
    if (local_40 != (longlong *)0x0) {
      LOCK();
      plVar1 = local_40 + 1;
      lVar8 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)lVar8 == 1) {
        (**(code **)*local_40)(local_40);
        LOCK();
        piVar2 = (int *)((longlong)plVar9 + 0xc);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*plVar9 + 8))(plVar9);
        }
      }
    }
  }
  pauVar12 = local_30;
  if ((bVar7) && (local_30 != (undefined1 (*) [16])0x0)) {
    LOCK();
    piVar2 = (int *)(*local_30 + 8);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)*local_30)(local_30);
      LOCK();
      piVar2 = (int *)(*pauVar12 + 0xc);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)*pauVar12 + 8))(pauVar12);
      }
    }
  }
  return;
}



