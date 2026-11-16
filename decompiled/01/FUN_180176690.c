// FUN_180176690 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180176690 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180176690(undefined8 *param_1,longlong param_2,undefined1 (*param_3) [16])

{
  int *piVar1;
  int iVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined1 (*local_88) [16];
  undefined1 (*pauStack_80) [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  char *local_58;
  longlong lStack_50;
  undefined8 local_48;
  undefined1 (*local_38) [16];
  
  if (*(longlong *)(*param_3 + 8) != 0) {
    LOCK();
    piVar1 = (int *)(*(longlong *)(*param_3 + 8) + 8);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  local_78 = *param_3;
  local_68 = *(undefined8 *)param_3[1];
  local_38 = param_3;
  local_88 = &local_78;
  if (DAT_180c7df28 == (undefined8 *)0x0) {
    local_58 = "tier0.dll:g_pMemAlloc";
    lStack_50 = 0x15;
    DAT_180c7df28 = (undefined8 *)FUN_180451750(&local_58);
  }
  pauVar4 = (undefined1 (*) [16])
            (**(code **)(*(longlong *)*DAT_180c7df28 + 8))((longlong *)*DAT_180c7df28,0x1c8);
  if (pauVar4 == (undefined1 (*) [16])0x0) {
    pauVar4 = (undefined1 (*) [16])0x0;
  }
  else {
    *pauVar4 = (undefined1  [16])0x0;
    *(undefined4 *)(*pauVar4 + 8) = 1;
    *(undefined4 *)(*pauVar4 + 0xc) = 1;
    *(undefined ***)*pauVar4 =
         std::_Ref_count_obj2<Concurrency::details::_Task_impl<unsigned_char>_>::vftable;
    if (local_78._8_8_ != 0) {
      LOCK();
      *(int *)(local_78._8_8_ + 8) = *(int *)(local_78._8_8_ + 8) + 1;
      UNLOCK();
    }
    local_58 = (char *)local_78._0_8_;
    lStack_50 = local_78._8_8_;
    local_48 = local_68;
    local_88 = pauVar4;
    FUN_18017b2a0(pauVar4 + 1,param_2,&local_58);
  }
  local_88 = pauVar4 + 1;
  pauStack_80 = pauVar4;
  FUN_1800efed0(local_78);
  FUN_1801787e0(param_1,&local_88);
  pauVar4 = pauStack_80;
  if (pauStack_80 != (undefined1 (*) [16])0x0) {
    LOCK();
    piVar1 = (int *)(*pauStack_80 + 8);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)*pauStack_80)(pauStack_80);
      LOCK();
      piVar1 = (int *)(*pauVar4 + 0xc);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        (**(code **)(*(longlong *)*pauVar4 + 8))(pauVar4);
      }
    }
  }
  if (param_2 != 2) {
    pauVar4 = (undefined1 (*) [16])*param_1;
    local_88 = (undefined1 (*) [16])0x0;
    pauStack_80 = (undefined1 (*) [16])0x0;
    pauVar3 = (undefined1 (*) [16])param_1[1];
    if (pauVar3 != (undefined1 (*) [16])0x0) {
      LOCK();
      *(int *)(*pauVar3 + 0xc) = *(int *)(*pauVar3 + 0xc) + 1;
      UNLOCK();
      local_88 = pauVar4;
      pauStack_80 = pauVar3;
    }
    FUN_180163e60(pauVar4,&local_88);
  }
  FUN_1800efed0(param_3);
  return;
}



