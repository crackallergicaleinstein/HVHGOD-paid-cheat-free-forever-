// FUN_18010fba0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18010fba0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_18010fba0(undefined8 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_48 [32];
  longlong *local_28;
  _Lockit local_20 [8];
  ulonglong local_18;
  
  local_18 = DAT_1808d5f00 ^ (ulonglong)auStack_48;
  std::_Lockit::_Lockit(local_20,0);
  lVar4 = DAT_180bb26e0;
  local_28 = (longlong *)DAT_180bb26e0;
  uVar2 = FUN_18015a180(&DAT_180cc9260);
  lVar3 = FUN_18015a110(param_1,uVar2);
  if ((lVar3 == 0) && (lVar4 == 0)) {
    lVar4 = FUN_1801407f0(&local_28,param_1);
    plVar1 = local_28;
    if (lVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_180159f60();
    }
    FUN_1805fbf40(local_28);
    (**(code **)(*plVar1 + 8))(plVar1);
    DAT_180bb26e0 = (longlong)plVar1;
  }
  std::_Lockit::~_Lockit(local_20);
}



