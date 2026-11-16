// FUN_180176840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180176840 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

undefined8
FUN_180176840(longlong param_1,char param_2,char param_3,undefined8 param_4,undefined8 *param_5)

{
  longlong lVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  undefined **local_58;
  longlong local_50;
  undefined ***local_20;
  
  lVar1 = param_1 + 0x20;
  iVar7 = FUN_1805f68d0(lVar1);
  if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(5);
  }
  if (*(int *)(param_1 + 0x6c) == 0x7fffffff) {
    *(undefined4 *)(param_1 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_1805f6d44(6);
  }
  if (param_3 == '\0') {
    if ((*(int *)(param_1 + 8) == 3) || (*(int *)(param_1 + 8) == 4)) goto LAB_18017692f;
    if (*(int *)(param_1 + 8) != 2) goto LAB_180176902;
    if (param_2 == '\0') goto LAB_18017692f;
  }
  else {
    if (*(int *)(param_1 + 8) == 4) {
LAB_18017692f:
      FUN_1805f68fc(lVar1);
      return 0;
    }
    if (param_5[1] != 0) {
      LOCK();
      piVar2 = (int *)(param_5[1] + 8);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
    }
    uVar4 = param_5[1];
    *(undefined8 *)(param_1 + 0x10) = *param_5;
    plVar5 = *(longlong **)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar3 = plVar5 + 1;
      lVar6 = *plVar3;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)lVar6 == 1) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        iVar7 = *piVar2;
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (iVar7 == 1) {
          (**(code **)(*plVar5 + 8))(plVar5);
        }
      }
    }
LAB_180176902:
    if (param_2 == '\0') {
      iVar7 = *(int *)(param_1 + 8);
      *(undefined4 *)(param_1 + 8) = 2;
      FUN_180159a00(param_1 + 0x160);
      iVar8 = 2;
      if (iVar7 != 1) {
        iVar8 = 0;
      }
      goto LAB_18017696d;
    }
  }
  *(undefined4 *)(param_1 + 8) = 4;
  iVar8 = 1;
LAB_18017696d:
  FUN_1805f68fc(lVar1);
  if (iVar8 == 1) {
    FUN_180163680(param_1 + 0x88);
    if (*(longlong *)(param_1 + 0x70) != 0) {
      local_58 = std::
                 _Func_impl_no_alloc<`public:_virtual_bool___cdecl_Concurrency::details::_Task_impl<unsigned_char>::_CancelAndRunContinuations(bool,bool,bool,std::shared_ptr<Concurrency::details::_ExceptionHolder>_const&___ptr64)___ptr64'::`34'::<lambda_1>,void>
                 ::vftable;
      local_20 = &local_58;
      local_50 = param_1;
      FUN_180163880(&local_58,0x10);
      if (local_20 != (undefined ***)0x0) {
        (*(code *)(*local_20)[4])(local_20,local_20 != &local_58);
      }
    }
  }
  else if ((iVar8 == 2) && (*(longlong **)(param_1 + 0x1b0) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x10))();
    return 1;
  }
  return 1;
}



