// FUN_1805fc020 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805fc020 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1805fc020(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  _Lockit local_res8 [8];
  
  std::_Lockit::_Lockit(local_res8,0);
  lVar3 = *(longlong *)(param_1 + 0x18);
  while (lVar3 != 0) {
    lVar3 = lVar3 + -1;
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x10) + lVar3 * 8);
    if (plVar1 != (longlong *)0x0) {
      puVar2 = (undefined8 *)(**(code **)(*plVar1 + 0x10))();
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
    }
  }
  thunk_FUN_180621380(*(undefined8 *)(param_1 + 0x10));
  std::_Lockit::~_Lockit(local_res8);
  return;
}



